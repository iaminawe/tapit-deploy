#!/bin/bash
# Tapit Database Sync Tool - to be run with cron on the production machine

# 1.) Set initial date variable in bash script
# 2.) Export selected tables from database to separate csv files for date range $datevariable to $now
# 3.) Convert exported csv files to UTF8
# 4.) SCP to Drupal server into files/feeds folder replacing the existing file with the same name
# 5.) Make a copy of the file, put the $datevariable in the filename and move to an "import-backups" folder within the files folder
# 6.) Run the relevant feeds import using drush
# 7.) Update initial date variable with current date

#To manually restore a Mogodb database this is the command
#mongorestore  -d tapit_production_4 tapit_production

echo "Tapit Database sync tool is now running..."

read FROMDATE < lastrun.txt
#FROMDATE="2013-06-24T00:00:00Z"
FROMDATESTAMP=$(( `date -j -f '%Y-%m-%dT%H:%M:%SZ' $FROMDATE +%s`*1000))
CURRENTDATE="$(date +'%Y-%m-%dT%H:%M:%SZ')"
FOLDERNAME="$(date +'%Y-%m-%d')-export"
DATABASE="tapit_production_4"
LOCALPATH="imports/$FOLDERNAME"
REMOTEPATH="static/imports"
REMOTESERVER="stats.tap-it.co.za"
REMOTEUSER="tapitocto.ftp"

#TODATESTAMP=$(( `date +%s`*1000))

TIMEDATERANGE='{"time":{$gte: new Date('$FROMDATESTAMP')}}'
CREATEDDATERANGE='{"created_at":{$gte: new Date('$FROMDATESTAMP')}}'
 #"{'time':{'$gte':new Date(1372086501000),'$lte': new Date(1378844983000)}}"

    #Small backups script to use for reference
    #OF=/var/my-backup-$(date +%Y%m%d).tgz
    #tar -cZf $OF /home/me/

      #Current issues here involve not being able to able to get feeds tamper to //successfully split the gps co-ordinates and add a country field - these have been //done manually for now in the spreadsheet

      #Daily Full Dump
      echo "dump the full main stores table"
      mongoexport --db $DATABASE --collection stores --csv --out $LOCALPATH/stores.csv --fields _id,accreditation,address,affiliation,card_balance,cellphone,city,company_reg,created_at,current_login_time,device_imei,device_sn,device_type,email,gps_coords,id_number,last_login_time,manager,masscash_number,name,name_lower,owner,postal_code,profile_image_file_name,region_id,reward_card,reward_card_error,service_provider,sim_card_number,store_images,street,suburb,telephone,updated_at,wholesaler_ids,wholesalers_limited,size,app_demonstrated,registration_date,state,state_comments,street,street_name,street_number,suburb,tacs_explained,vod_signal_strength,wholesalers_free_text,trading_name,till_points,english_proficiency,mtn_signal_strength,owner_nationality,app_issues,comments
      echo "dump the wholesalers table just essential fields"
      mongoexport --db $DATABASE --collection wholesalers --csv --out $LOCALPATH/wholesalers.csv --fields _id,user_id,name,address,telephone,logo_file_name,region_id,store_ids
      echo "dump the suppliers table"
      mongoexport --db $DATABASE --collection suppliers --csv --out $LOCALPATH/suppliers.csv --fields _id,name,user_id,wholesaler_ids
      echo "dump the categories table"
      mongoexport --db $DATABASE --collection categories --csv --out $LOCALPATH/categories.csv --fields _id,created_at,disabled,name,supplier_id,updated_at
      echo "dump the devices table"
      mongoexport --db $DATABASE --collection devices --csv --out $LOCALPATH/devices.csv --fields _id,created_at,device_token,seen_terms,store_id,token,updated_at
      #Daily Partial Dump based on last date.
      echo "dump the visits table"
      mongoexport --db $DATABASE --collection visits --csv --out $LOCALPATH/visits.csv --fields "_id","action","controller,store_id","time" --query "$TIMEDATERANGE"
      echo "dump the featured_adverts table"
      mongoexport --db $DATABASE --collection featured_adverts --csv --out $LOCALPATH/featured_adverts.csv --fields _id,banner_file_name,created_at,deleted_at,end_at,name,publish,start_at,supplier_id,thumbnail_file_name,version --query "$CREATEDDATERANGE"
      echo "dump the incentives table"
      mongoexport --db $DATABASE --collection incentives --csv --out $LOCALPATH/incentives.csv --fields _id,created_at,incentive_id,start_at,status,store_id,type,updated_at --query "$CREATEDDATERANGE"
      echo "dump the incentive responses table"
      mongoexport --db $DATABASE --collection incentive_responses --csv --out $LOCALPATH/incentive_responses.csv --fields _id,created_at,incentive_attempts,product_incentive_id,status,store_id,updated_at --query "$CREATEDDATERANGE"
      echo "dump the product_incentives table"
      mongoexport --db $DATABASE --collection product_incentives --csv --out $LOCALPATH/product_incentives.csv --fields _id,category_id,created_at,description,end_at,hint,incentive_image_file_name,name,region_ids,start_at,tokens,type,updated_at,wholesaler_ids,version --query "$CREATEDDATERANGE"
      echo "dump the liked products table"
      mongoexport --db $DATABASE --collection liked_products --csv --out $LOCALPATH/liked_products.csv --fields _id,created_at,product_id,store_id,updated_at --query "$CREATEDDATERANGE"
      echo "dump the orders table"
      mongoexport --db $DATABASE --collection orders --csv --out $LOCALPATH/orders.csv --fields _id,date_purchased,order_number,promotion_variant_id,promotion_version,quantity,sent,store_id,wholesaler_id --query "$CREATEDDATERANGE"
      echo "dump the planograms table"
      mongoexport --db $DATABASE --collection planograms --csv --out $LOCALPATH/planograms.csv --fields _id,category_id,created_at,deleted_at,name,updated_at,region_ids,version,planogram_file_name --query "$CREATEDDATERANGE"
      echo "dump the products table"
      mongoexport --db $DATABASE --collection products --csv --out $LOCALPATH/products.csv --fields _id,barcode,category_id,created_at,deleted_at,end_at,featured_advert_id,like_count,name,pack_size,price,product_image_file_name,start_at,supplier_id,updated_at,version,wholesaler_ids --query "$CREATEDDATERANGE"
      echo "dump the promotions table"
      mongoexport --db $DATABASE --collection promotions --csv --out $LOCALPATH/promotions.csv --fields _id,brand,category_id,created_at,deleted_at,description,end_at,name,order_count,pack_size,price,promotion_image_file_name,start_at,status,updated_at,version,wholesaler_ids --query "$CREATEDDATERANGE"
      echo "dump the promotion variants table"
      mongoexport --db $DATABASE --collection promotion_variants --csv --out $LOCALPATH/promotion_variants.csv --fields _id,barcode,brand,created_at,deleted_at,name,promotion_id,updated_at --query "$CREATEDDATERANGE"
      echo "dump the publications table"
      mongoexport --db $DATABASE --collection publications --csv --out $LOCALPATH/publications.csv --fields _id,archived,created_at,name,pdf_file_name,updated_at,version --query "$CREATEDDATERANGE"
      echo "dump the recommendations table"
      mongoexport --db $DATABASE --collection recommendations --csv --out $LOCALPATH/recommendations.csv --fields _id,value
      echo "dump the survey incentives table"
      mongoexport --db $DATABASE --collection survey_incentives --csv --out $LOCALPATH/survey_incentives.csv --fields _id,created_at,deleted_at,end_at,number_of_responses,number_of_stores,region_ids,start_at,tokens,updated_at,version,wholesaler_ids,name --query "$CREATEDDATERANGE"
      echo "dump the tips table"
      mongoexport --db $DATABASE --collection tips --csv --out $LOCALPATH/tips.csv --fields _id,category_id,created_at,description,name,region_ids,updated_at,version --query "$CREATEDDATERANGE"
      echo "dump the token rewards table"
      mongoexport --db $DATABASE --collection token_rewards --csv --out $LOCALPATH/token_rewards.csv --fields _id,created_at,reason,redeemed,store_id,survey_response_id,updated_at --query "$CREATEDDATERANGE"

CSVFILE=stats_csv_$(date +%Y%m%d).tar.gz

#tar -zcvf imports/$CSVFILE $LOCALPATH

tar zcf - imports/$CSVFILE | ssh $REMOTEUSER@$REMOTESERVER  "cd $REMOTEPATH; tar zxf -"
echo "Created csv archive and sent to $REMOTESERVER at $REMOTEPATH"
#tar -zcvf imports/$CSVFILE $LOCALPATH | ssh $REMOTEUSER@$REMOTESERVER tar -xzf $REMOTEPATH


#chown -R $REMOTEUSER $LOCALPATH$CSVFILE
#echo "Changed permissions to be for $REMOTEUSER"

#scp imports/$CSVFILE $REMOTEUSER@$REMOTESERVER:$REMOTEPATH
#echo "Sucessfully copied $LOCALPATH$CSVFILE to $REMOTESERVER:$REMOTEPATH"

echo "From date and time $FROMDATE - $FROMDATESTAMP"

# do stuff with var
echo $CURRENTDATE > lastrun.txt

echo "The from date has been updated to $CURRENTDATE"

echo "Completed database CSV dump and copy of $LOCALPATH$CSVFILE to $REMOTEPATH at $CURRENTDATE, Goodbye."



# script to send simple email 
# email subject
SUBJECT="The database sync script has run on production"
# Email To ?
EMAIL="gregg@iaminawe.com"
# Email text/message
EMAILMESSAGE="/tmp/emailmessage.txt"
echo "Completed database CSV dump and copy of $LOCALPATH$CSVFILE to $REMOTEPATH at $CURRENTDATE"> $EMAILMESSAGE
# send an email using /bin/mail
/bin/mail -s "$SUBJECT" "$EMAIL" < $EMAILMESSAGE

#now=$(date +"%m_%d_%Y")
#echo "Filename : /nas/backup_$now.sql"

# Run the feed importers - is this maybe in a separate script
#drush feeds-import  --feed-id=feed_importer_1

#This is a garbage collection to delete old import files
#MAILDIRS=$(find /var/vmail/*/*/Maildir/ -maxdepth 0 -type d)
#for basedir in $MAILDIRS; do
#  for dir in .Trash .Junk .Spam .Low\ Priority; do
#    for dir2 in cur new; do
#      [ -e "$basedir/$dir/$dir2" ] && (
#       echo "Processing $basedir/$dir/$dir2..."
#        find "$basedir/$dir/$dir2/" -type f -mtime +30 -delete
#      )
#   done
#  done
#done
