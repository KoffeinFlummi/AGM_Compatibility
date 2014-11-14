<p align="center">
  <img src="https://raw.githubusercontent.com/KoffeinFlummi/AGM/master/.devfiles/Assets/Logo/agm_logo_black_transparent.png" />
</p>

AGM Compatibility Project
=========================

[![](http://img.shields.io/badge/license-GPL-red.svg)](https://github.com/KoffeinFlummi/AGM_Compatibility/blob/master/LICENSE) [![](http://img.shields.io/github/issues/KoffeinFlummi/AGM_Compatibility.svg)](https://github.com/KoffeinFlummi/AGM_Compatibility/issues)

Various PBOs to provide compatibility of AGM with other mods.

**Make Arma Not War:** http://makearmanotwar.com/entry/7jnWM53S2e

**BIF Thread:** http://forums.bistudio.com/showthread.php?178253-Authentic-Gameplay-Modification

***The Authentic Gameplay Modification requires [CBA A3](http://www.armaholic.com/page.php?id=18767).***

<p align="center"><a href="https://www.paypal.com/cgi-bin/webscr?cmd=_s-xclick&amp;hosted_button_id=HPAXPTVCNLDZS"><img src="https://www.paypalobjects.com/en_US/i/btn/btn_donateCC_LG.gif" style="max-width:100%;"></a></p>


## Contributing

If you want to help out by adding your own mod to this, fork this repo and create a pull request. Also feel free to add yourself to the author array of any .pbo you might be editing and to the AUTHORS file.

If you find a bug or want to request a feature/mod, please use the [Issue Tracker](https://github.com/KoffeinFlummi/AGM_Compatibility/issues).

You want to know how to make your weapons or vehicles compatible with AGM? Check out [this](https://github.com/KoffeinFlummi/AGM/wiki/For-Addon-Makers) page.


## Testing & Building

If you want to help development by testing and reporting bugs, feel free to download the current version of this repository either using git (if you know what you're doing) or using the download button on the right.

To binarize the addon for testing you can use the python script. Alternatively you can manually binarize every PBO using Addon Builder or any other binarizer. Both of those require the Arma 3 Tools to be installed, which can be found on Steam.

In order for the addons to be correctly binarized, you need to exclude the following file types from binarization (the binarizer script does this for you):
```
*.pac;*.paa;*.sqf;*.sqs;*.bikb;*.fsm;*.wss;*.ogg;*.wav;*.fxy;*.csv;*.html;*.lip;*.txt;*.wrp;*.bisurf;*.xml;*.hqf;
```
