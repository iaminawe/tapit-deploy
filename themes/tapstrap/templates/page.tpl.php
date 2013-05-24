<?php if (isset($_GET['modal']) && $_GET['modal']): ?>
  <div class="modal-header"> <button type="button" class="close" data-dismiss="modal">×</button>
   <h3> <?php print $title; ?></h3>
  </div>
  <?php print render($page['content']); ?>

<?php else: ?>

<div id="page">

<header id="header" role="banner">
		<!-- start: Header -->
	<div class="navbar">
		<div class="navbar-inner">
			<div class="container-fluid">
				<a class="btn btn-navbar" data-toggle="collapse" data-target=".top-nav.nav-collapse,.sidebar-nav.nav-collapse">
					<span class="icon-bar"></span>
					<span class="icon-bar"></span>
					<span class="icon-bar"></span>
				</a>
				 <?php if ($logo): ?>
      <div id="logo" class="brand">
        <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" id="logo"><img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" /></a>
      </div>
    <?php endif; ?>
								 <?php if ($search_block) : ?>
      <div id="nav-search-bar">
      <?php print $search_block; ?>
      </div>
    <?php endif;?>

				<!-- start: Header Menu -->
				<div class="nav-no-collapse header-nav navbar-inverse">
					<ul class="nav pull-right">
				 <!-- start: User Dropdown -->
						<li class="dropdown">
							<a class="btn dropdown-toggle" data-toggle="dropdown" href="#">
								<i class="halflings-icon white user"></i>
								<?php if (user_is_logged_in() == TRUE) {
                    global $user;
                    print $user->name;
                }else{ print "You need to login"; }?>
								<span class="caret"></span>
							</a>
							<ul class="dropdown-menu">
								<li class="dropdown-menu-title">
 									<span>Account Settings</span>
								</li>
								<li><?php print '<a href="/user/'.$user->uid.'/edit">';?>
<i class="halflings-icon user"></i> Profile</a></li>
								<li><a href="/user/logout"><i class="halflings-icon off"></i> Logout</a></li>
							</ul>
						</li>
						<!-- end: User Dropdown -->
					</ul>
				</div>
				<!-- end: Header Menu -->
				
			</div>
		</div>
	</div>
	<!-- start: Header -->

    <?php print render($page['header']); ?>

  </header>



    <div id="content" class="column" role="main">
      <?php print render($page['highlighted']); ?>
      <?php print $breadcrumb; ?>
      <a id="main-content"></a>
      <?php print render($title_prefix); ?>
      <?php if ($title): ?>
        <div class="page-header">
        <h1 class="title" id="page-title"><?php print $title; ?></h1>
        </div>
      <?php endif; ?>
      <?php print render($title_suffix); ?>
      <?php print $messages; ?>
      <?php print render($tabs); ?>
      <?php print render($page['help']); ?>
      <?php if ($action_links): ?>
        <ul class="action-links nav nav-pills"><?php print render($action_links); ?></ul>
      <?php endif; ?>
      <?php print render($page['content']); ?>
      <?php print $feed_icons; ?>
    </div><!-- /#content -->

    <?php
      // Render the sidebars to see if there's anything in them.
      $sidebar_first  = render($page['sidebar_first']);
      $sidebar_second = render($page['sidebar_second']);
    ?>

    <?php if ($sidebar_first || $sidebar_second): ?>
      <aside class="sidebars">
        <?php print $sidebar_first; ?>
        <?php print $sidebar_second; ?>
      </aside><!-- /.sidebars -->
    <?php endif; ?>

  </div><!-- /#main -->

  <?php print render($page['footer']); ?>
  <?php if ($login_block): ?>
    <?php print $login_block; ?>
  <?php endif; ?>

</div><!-- /#page -->

<?php print render($page['bottom']); ?>

<div id="forms-modal" class = "modal hide">
  <div id="waiting_modal">
    <div class="modal-header"> <button type="button" class="close" data-dismiss="modal">×</button>
     <h3> <?php print t('Please wait...'); ?> </h3>
    </div>
    <div class="modal-body">
      <div class="progress progress-striped active">
        <div class="bar" style="width: 100%;"></div>
      </div>
   </div>
  </div>
  <div id="content_modal"></div>
</div>

<?php endif; ?>
