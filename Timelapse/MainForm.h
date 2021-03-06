#pragma once

namespace Timelapse {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class MainForm : public System::Windows::Forms::Form {

	public:
		static MainForm ^TheInstance;
		MainForm() {
			InitializeComponent();
			TheInstance = this;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  fileToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  closeMapleStoryToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  mapleStoryToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  hideMSWindowToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  injectDllToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  helpToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  aboutToolStripMenuItem;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  lbTitle;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Panel^  pnlFull;
	private: System::Windows::Forms::StatusStrip^  statusStrip1;
	private: System::Windows::Forms::Button^  btnClose;
	private: System::Windows::Forms::Button^  btnMinimize;
	private: System::Windows::Forms::Panel^  pnlMiddle;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  lbDateTime;
	private: System::Windows::Forms::Label^  lbActive;
	private: System::Windows::Forms::Label^  lbThreadID;
	private: System::Windows::Forms::Label^  lbNPCCount;
	private: System::Windows::Forms::Label^  lbPortalCount;
	private: System::Windows::Forms::Label^  lbItemCount;
	private: System::Windows::Forms::Label^  lbMobCount;
	private: System::Windows::Forms::Label^  lbPeopleCount;
	private: System::Windows::Forms::Label^  lbBreathCount;
	private: System::Windows::Forms::Label^  lbBuffCount;
	private: System::Windows::Forms::Label^  lbAttackCount;
	private: System::Windows::Forms::Label^  lbMousePos;
	private: System::Windows::Forms::Label^  lbCharPos;
	private: System::Windows::Forms::Label^  lbMapID;
	private: System::Windows::Forms::Label^  lbChannel;
	private: System::Windows::Forms::Label^  lbWorld;
	private: System::Windows::Forms::Label^  lbMesos;
	private: System::Windows::Forms::Label^  lbEXP;
	private: System::Windows::Forms::Label^  lbMP;
	private: System::Windows::Forms::Label^  lbHP;
	private: System::Windows::Forms::Label^  lbJob;
	private: System::Windows::Forms::Label^  lbLevel;
	private: System::Windows::Forms::Label^  lbCharName;
	private: System::Windows::Forms::Timer^  GUITimer;
	private: System::Windows::Forms::Label^  lbMapName;
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::TabControl^  tabControl2;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::RichTextBox^  rtbHome;
	private: System::Windows::Forms::TabPage^  tabPage4;
	private: System::Windows::Forms::TrackBar^  transparencyTrackBar;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TabPage^  tabPage5;
	private: System::Windows::Forms::TabPage^  tabPage6;
	private: System::Windows::Forms::TabPage^  tabPage7;
	private: System::Windows::Forms::TabPage^  tabPage8;
	private: System::Windows::Forms::TabPage^  tabPage9;
	private: System::Windows::Forms::Label^  lbInactive;
	private: System::Windows::Forms::Panel^  panel10;
	private: System::Windows::Forms::CheckBox^  cbMissGodmode;
	private: System::Windows::Forms::CheckBox^  cbBlinkGodmode;
	private: System::Windows::Forms::Panel^  panel12;
	private: System::Windows::Forms::CheckBox^  cbItemVac;
	private: System::Windows::Forms::CheckBox^  cbNoBreath;
	private: System::Windows::Forms::CheckBox^  cbSpeedAttack;
	private: System::Windows::Forms::CheckBox^  cbFullAccuracy;
private: System::Windows::Forms::CheckBox^  cbNoPlayerDeath;
	private: System::Windows::Forms::CheckBox^  cbInfiniteChat;
	private: System::Windows::Forms::CheckBox^  cbUnlimitedAttack;
private: System::Windows::Forms::CheckBox^  cbFastLootItems;
private: System::Windows::Forms::CheckBox^  cbInstantDropItems;
	private: System::Windows::Forms::Panel^  panel11;
	private: System::Windows::Forms::CheckBox^  cbMouseFly;
	private: System::Windows::Forms::Label^  label49;
	private: System::Windows::Forms::Label^  label50;
public: System::Windows::Forms::TextBox^  tbMouseTeleport;
public: System::Windows::Forms::TextBox^  tbClickTeleport;
	private: System::Windows::Forms::CheckBox^  cbSwimInAir;
	private: System::Windows::Forms::CheckBox^  cbClickTeleport;
	private: System::Windows::Forms::CheckBox^  cbMouseTeleport;
private: System::Windows::Forms::CheckBox^  cbFullGodmode;
	private: System::Windows::Forms::Panel^  panel16;
	private: System::Windows::Forms::TextBox^  tbDupeXMob;
	private: System::Windows::Forms::Label^  label60;
	private: System::Windows::Forms::Button^  bDupeXResetLocation;
	private: System::Windows::Forms::CheckBox^  cbDupeX;
	private: System::Windows::Forms::Panel^  panel15;
	private: System::Windows::Forms::Button^  bGetCurrentLocation;
	private: System::Windows::Forms::TextBox^  tbWallVacRangeX;
	private: System::Windows::Forms::Label^  label59;
	private: System::Windows::Forms::TextBox^  tbWallVacY;
	private: System::Windows::Forms::Label^  label51;
	private: System::Windows::Forms::TextBox^  tbWallVacX;
	private: System::Windows::Forms::Label^  label52;
	private: System::Windows::Forms::CheckBox^  cbWallVac;
	private: System::Windows::Forms::Panel^  panel13;
	public: System::Windows::Forms::TextBox^  tbKamiLootItem;
	public: System::Windows::Forms::TextBox^  tbKamiLootInterval;
	private: System::Windows::Forms::Label^  label57;
	private: System::Windows::Forms::Label^  label58;
	private: System::Windows::Forms::CheckBox^  cbKamiLoot;
	private: System::Windows::Forms::Panel^  panel14;
	public: System::Windows::Forms::TextBox^  tbKamiY;
	private: System::Windows::Forms::Label^  label56;
	public: System::Windows::Forms::TextBox^  tbKamiX;
	private: System::Windows::Forms::Label^  label55;
	public: System::Windows::Forms::TextBox^  tbKamiMob;
	public: System::Windows::Forms::TextBox^  tbKamiInterval;
	private: System::Windows::Forms::Label^  label53;
	private: System::Windows::Forms::Label^  label54;
	private: System::Windows::Forms::CheckBox^  cbKami;
	private: System::Windows::Forms::Panel^  panel19;
	private: System::Windows::Forms::TextBox^  tbMMCX;
	private: System::Windows::Forms::RadioButton^  rbMMCMousePos;
	private: System::Windows::Forms::RadioButton^  rbMMCCharPos;
	private: System::Windows::Forms::Button^  bMMCReset;
	private: System::Windows::Forms::TextBox^  tbMMCY;
	private: System::Windows::Forms::CheckBox^  cbMMC;
	private: System::Windows::Forms::Label^  label62;
	private: System::Windows::Forms::Label^  label67;
	private: System::Windows::Forms::TextBox^  tbWallVacRangeY;
	private: System::Windows::Forms::Label^  label61;
	private: System::Windows::Forms::ToolStripMenuItem^  openSettingsToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  saveSettingsToolStripMenuItem;
	private: System::Windows::Forms::Panel^  panel21;
	private: System::Windows::Forms::CheckBox^  cbMobFilterLog;
private: System::Windows::Forms::Button^  bMobSearchLogClear;

	private: System::Windows::Forms::RadioButton^  rbMobFilterWhiteList;
	private: System::Windows::Forms::TextBox^  tbMobFilterSearch;
	private: System::Windows::Forms::RadioButton^  rbMobFilterBlackList;
	private: System::Windows::Forms::Label^  label75;
	private: System::Windows::Forms::Button^  bMobFilterAdd;
	private: System::Windows::Forms::TextBox^  tbMobFilterID;
	private: System::Windows::Forms::Label^  label76;
	private: System::Windows::Forms::Label^  label77;
	private: System::Windows::Forms::Button^  bMobFilter;


	private: System::Windows::Forms::Panel^  panel20;
	private: System::Windows::Forms::CheckBox^  cbItemFilterLog;
private: System::Windows::Forms::Button^  bItemSearchLogClear;

	private: System::Windows::Forms::TextBox^  tbItemFilterSearch;
	private: System::Windows::Forms::Label^  label74;
	private: System::Windows::Forms::Button^  bItemFilterAdd;
	private: System::Windows::Forms::TextBox^  tbItemFilterID;
	private: System::Windows::Forms::Label^  label73;
	private: System::Windows::Forms::TextBox^  tbItemFilterMesos;
	private: System::Windows::Forms::Label^  label70;
	private: System::Windows::Forms::RadioButton^  rbItemFilterWhiteList;
	private: System::Windows::Forms::RadioButton^  rbItemFilterBlackList;
	private: System::Windows::Forms::Button^  bItemFilter;


	private: System::Windows::Forms::TabControl^  tabControl5;
	private: System::Windows::Forms::TabPage^  tabPage16;
	private: System::Windows::Forms::Label^  label81;
	private: System::Windows::Forms::TextBox^  tbSendSpamDelay;
	private: System::Windows::Forms::CheckBox^  cbSendSpam;
	private: System::Windows::Forms::Button^  bSendRemove;
	private: System::Windows::Forms::ListView^  lvSendBlock;
	private: System::Windows::Forms::TextBox^  tbSendPacket;
	private: System::Windows::Forms::Button^  bSendBlock;
	private: System::Windows::Forms::Button^  bSendLog;
	private: System::Windows::Forms::Button^  bSendClear;
	private: System::Windows::Forms::Button^  bSendPacket;
	public: System::Windows::Forms::ListView^  lvSend;
	private: System::Windows::Forms::TabPage^  tabPage15;
	private: System::Windows::Forms::Button^  bRecvRemove;
	private: System::Windows::Forms::ListView^  lvRecvBlock;
	private: System::Windows::Forms::TextBox^  tbRecvPacket;
	private: System::Windows::Forms::Button^  bRecvBlock;
	private: System::Windows::Forms::Button^  bRecvLog;
	private: System::Windows::Forms::Button^  bRecvClear;
	private: System::Windows::Forms::Button^  bRecvPacket;
	private: System::Windows::Forms::ListView^  lvRecv;
	private: System::Windows::Forms::Label^  lbMapRusherStatus;
	private: System::Windows::Forms::TextBox^  tbMapRusherDestination;
	private: System::Windows::Forms::Label^  label79;
	private: System::Windows::Forms::Button^  bMapRush;
	private: System::Windows::Forms::TextBox^  tbMapRusherSearch;
	private: System::Windows::Forms::Label^  label78;
	private: System::Windows::Forms::ListView^  lvMapRusherSearch;
	private: System::Windows::Forms::ListView^  lvMapRusher;
	private: System::Windows::Forms::CheckBox^  cbDisablePointers;
public: System::Windows::Forms::Timer^  AutoCCCSTimer;
private: System::Windows::Forms::TabPage^  tabPage17;
public: System::Windows::Forms::ComboBox^  comboAutoLoginCharacter;
private: System::Windows::Forms::ComboBox^  comboAutoLoginChannel;
private: System::Windows::Forms::TextBox^  tbAutoLoginPIC;
private: System::Windows::Forms::TextBox^  tbAutoLoginPassword;
private: System::Windows::Forms::TextBox^  tbAutoLoginUsername;
private: System::Windows::Forms::Label^  label80;
private: System::Windows::Forms::Label^  label82;
private: System::Windows::Forms::Label^  label83;
private: System::Windows::Forms::Label^  label84;
private: System::Windows::Forms::Label^  label85;
private: System::Windows::Forms::Panel^  panel22;
private: System::Windows::Forms::CheckBox^  cbAutoLoginNoPic;
private: System::Windows::Forms::CheckBox^  checkBox2;
private: System::Windows::Forms::CheckBox^  checkBox1;
private: System::Windows::Forms::TabPage^  tabPage18;
private: System::Windows::Forms::TabPage^  tabPage19;
private: System::Windows::Forms::Panel^  panel6;
private: System::Windows::Forms::Label^  label39;
private: System::Windows::Forms::TextBox^  tbAPDEX;
private: System::Windows::Forms::TextBox^  tbAPLUK;
private: System::Windows::Forms::TextBox^  tbAPINT;
private: System::Windows::Forms::Label^  label38;
private: System::Windows::Forms::Label^  label37;
private: System::Windows::Forms::Label^  label36;
private: System::Windows::Forms::TextBox^  tbAPSTR;
private: System::Windows::Forms::Label^  label35;
private: System::Windows::Forms::TextBox^  tbAPMP;
private: System::Windows::Forms::Label^  label34;
private: System::Windows::Forms::TextBox^  tbAPHP;
private: System::Windows::Forms::Label^  label33;
private: System::Windows::Forms::Label^  label32;
private: System::Windows::Forms::TextBox^  tbAPLevel;
private: System::Windows::Forms::CheckBox^  cbAP;
private: System::Windows::Forms::Panel^  panel25;
private: System::Windows::Forms::CheckBox^  cbNoMapTiles;
private: System::Windows::Forms::CheckBox^  cbNoSkillEffects;
private: System::Windows::Forms::CheckBox^  cbNoMapObjects;
private: System::Windows::Forms::CheckBox^  cbInstantLootItems;
private: System::Windows::Forms::CheckBox^  cbJumpDownAnyTile;
private: System::Windows::Forms::Panel^  panel24;
private: System::Windows::Forms::CheckBox^  cbMobFreeze;
private: System::Windows::Forms::CheckBox^  cbMapSpeedUp;
private: System::Windows::Forms::CheckBox^  cbMobDisarm;
private: System::Windows::Forms::CheckBox^  cbNoMobReaction;
private: System::Windows::Forms::CheckBox^  cbNoPlayerKickback;
private: System::Windows::Forms::CheckBox^  cbNoMobKickback;
private: System::Windows::Forms::Panel^  panel23;
private: System::Windows::Forms::CheckBox^  cbNoMobDeathEffect;
private: System::Windows::Forms::CheckBox^  cbNoMapFadeEffect;
private: System::Windows::Forms::CheckBox^  cbNoMapBackground;
private: System::Windows::Forms::TabPage^  tabPage20;
private: System::Windows::Forms::Panel^  panel27;
private: System::Windows::Forms::ListView^  lvSpawnControl;
private: System::Windows::Forms::Button^  bSpawnControlAdd;
private: System::Windows::Forms::Button^  bSpawnControlDelete;
private: System::Windows::Forms::Label^  label71;
private: System::Windows::Forms::Label^  label68;
private: System::Windows::Forms::Button^  bSpawnControlGetCurrentLocation;
private: System::Windows::Forms::Label^  label69;
private: System::Windows::Forms::TextBox^  tbSpawnControlY;
private: System::Windows::Forms::TextBox^  tbSpawnControlX;
private: System::Windows::Forms::Panel^  panel26;
public: System::Windows::Forms::TextBox^  tbTeleportLoopDelay;
private: System::Windows::Forms::Label^  label86;
private: System::Windows::Forms::Button^  bTeleportLoop;
private: System::Windows::Forms::Button^  bTeleportDelete;
private: System::Windows::Forms::Button^  bTeleport;
public: System::Windows::Forms::ListView^  lvTeleport;
private: System::Windows::Forms::ColumnHeader^  columnHeader1;
private: System::Windows::Forms::ColumnHeader^  columnHeader2;
private: System::Windows::Forms::Panel^  panel18;
private: System::Windows::Forms::Button^  bTeleportGetCurrentLocation;
private: System::Windows::Forms::Label^  label64;
public: System::Windows::Forms::TextBox^  tbTeleportX;
private: System::Windows::Forms::Button^  bTeleportAdd;
private: System::Windows::Forms::Label^  label63;
public: System::Windows::Forms::TextBox^  tbTeleportY;
private: System::Windows::Forms::TabControl^  tabControl3;
private: System::Windows::Forms::TabPage^  tabPage11;
private: System::Windows::Forms::Button^  bBuffEnableAll;
private: System::Windows::Forms::Button^  bBuffDisableAll;
private: System::Windows::Forms::Button^  bBuffRemove;
private: System::Windows::Forms::Button^  bBuffClear;
private: System::Windows::Forms::Panel^  panel5;
private: System::Windows::Forms::TextBox^  tbBuffName;
private: System::Windows::Forms::Button^  bBuffAdd;
private: System::Windows::Forms::TextBox^  tbBuffInterval;
private: System::Windows::Forms::Label^  label40;
private: System::Windows::Forms::Label^  label41;
private: System::Windows::Forms::ComboBox^  comboBuffKey;
private: System::Windows::Forms::ListView^  lvBuff;
private: System::Windows::Forms::ColumnHeader^  lvBuffHeaderName;
private: System::Windows::Forms::ColumnHeader^  lvBuffHeaderKey;
private: System::Windows::Forms::ColumnHeader^  lvBuffHeaderInterval;
private: System::Windows::Forms::TabPage^  tabPage12;
private: System::Windows::Forms::Panel^  panel8;
public: System::Windows::Forms::TextBox^  tbCSDelay;
private: System::Windows::Forms::Label^  label48;
private: System::Windows::Forms::Button^  bCS;
private: System::Windows::Forms::Button^  bRandomCC;
private: System::Windows::Forms::Panel^  panel9;
private: System::Windows::Forms::Button^  bCC;
public: System::Windows::Forms::ComboBox^  comboChannelKey;
private: System::Windows::Forms::Label^  label47;
private: System::Windows::Forms::Panel^  panel7;
private: System::Windows::Forms::TextBox^  tbCCCSMob;
private: System::Windows::Forms::TextBox^  tbCCCSAttack;
private: System::Windows::Forms::TextBox^  tbCCCSPeople;
private: System::Windows::Forms::TextBox^  tbCCCSTime;
private: System::Windows::Forms::Label^  label46;
private: System::Windows::Forms::Label^  label45;
private: System::Windows::Forms::Label^  label44;
private: System::Windows::Forms::Label^  label43;
private: System::Windows::Forms::CheckBox^  cbCCCSMob;
private: System::Windows::Forms::RadioButton^  rbCS;
private: System::Windows::Forms::CheckBox^  cbCCCSAttack;
private: System::Windows::Forms::CheckBox^  cbCCCSPeople;
private: System::Windows::Forms::RadioButton^  rbCC;
private: System::Windows::Forms::CheckBox^  cbCCCSTime;
public: System::Windows::Forms::RadioButton^  rbFunction;
public: System::Windows::Forms::RadioButton^  rbPacket;
private: System::Windows::Forms::TabPage^  tabPage10;
private: System::Windows::Forms::Panel^  panel4;
public: System::Windows::Forms::TextBox^  tbLootItem;
private: System::Windows::Forms::TextBox^  tbLootInterval;
private: System::Windows::Forms::Label^  label29;
private: System::Windows::Forms::Label^  label31;
private: System::Windows::Forms::ComboBox^  comboLootKey;
public: System::Windows::Forms::CheckBox^  cbLoot;
private: System::Windows::Forms::Panel^  panel3;
public: System::Windows::Forms::TextBox^  tbAttackMob;
private: System::Windows::Forms::TextBox^  tbAttackInterval;
private: System::Windows::Forms::Label^  label30;
private: System::Windows::Forms::Label^  label28;
private: System::Windows::Forms::ComboBox^  comboAttackKey;
private: System::Windows::Forms::CheckBox^  cbAttack;
private: System::Windows::Forms::Panel^  panel2;
private: System::Windows::Forms::Label^  label27;
private: System::Windows::Forms::Label^  label26;
private: System::Windows::Forms::ComboBox^  comboMPKey;
private: System::Windows::Forms::ComboBox^  comboHPKey;
public: System::Windows::Forms::TextBox^  tbMP;
public: System::Windows::Forms::TextBox^  tbHP;
private: System::Windows::Forms::CheckBox^  cbHP;
private: System::Windows::Forms::CheckBox^  cbMP;
private: System::Windows::Forms::Label^  label42;
private: System::Windows::Forms::Label^  label65;
private: System::Windows::Forms::Button^  bSpawnControl;
private: System::Windows::Forms::Panel^  panel1;
private: System::Windows::Forms::CheckBox^  cbNoAttackDelay;
private: System::Windows::Forms::CheckBox^  cbFullMapAttack;
private: System::Windows::Forms::CheckBox^  cbNoBlueBoxes;
private: System::Windows::Forms::CheckBox^  cbMobAutoAggro;
private: System::Windows::Forms::CheckBox^  cbNoPlayerNameTag;
private: System::Windows::Forms::ColumnHeader^  columnHeader3;
private: System::Windows::Forms::ColumnHeader^  columnHeader4;
private: System::Windows::Forms::ColumnHeader^  columnHeader5;
private: System::Windows::Forms::TextBox^  tbSpawnControlMapID;
public: System::Windows::Forms::TextBox^  textBox4;
private: System::Windows::Forms::Label^  label72;
public: System::Windows::Forms::TextBox^  textBox5;
private: System::Windows::Forms::Label^  label87;
private: System::Windows::Forms::CheckBox^  cbUEMI;
private: System::Windows::Forms::ColumnHeader^  columnHeader6;
private: System::Windows::Forms::Panel^  panel28;
private: System::Windows::Forms::Panel^  panel17;
private: System::Windows::Forms::CheckBox^  checkBox3;
private: System::Windows::Forms::Button^  bSendMount;
private: System::Windows::Forms::Button^  bSendSuicide;
private: System::Windows::Forms::Panel^  panel29;
private: System::Windows::Forms::Button^  bSendDrop50000;
private: System::Windows::Forms::Button^  bSendDrop10000;
private: System::Windows::Forms::Button^  bSendDrop10;
private: System::Windows::Forms::Button^  bSendDrop1000;
private: System::Windows::Forms::Button^  bSendRevive;
private: System::Windows::Forms::Button^  bSendRestore127Health;
private: System::Windows::Forms::Button^  button1;
public: System::Windows::Forms::ListBox^  lbMobSearchLog;
private:
public: System::Windows::Forms::ListBox^  lbMobFilter;
public: System::Windows::Forms::ListBox^  lbItemSearchLog;
public: System::Windows::Forms::ListBox^  lbItemFilter;
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent()
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->fileToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->openSettingsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveSettingsToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->closeMapleStoryToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->mapleStoryToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->hideMSWindowToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->injectDllToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->helpToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->aboutToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->lbTitle = (gcnew System::Windows::Forms::Label());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pnlFull = (gcnew System::Windows::Forms::Panel());
			this->pnlMiddle = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->lbInactive = (gcnew System::Windows::Forms::Label());
			this->lbActive = (gcnew System::Windows::Forms::Label());
			this->lbThreadID = (gcnew System::Windows::Forms::Label());
			this->lbNPCCount = (gcnew System::Windows::Forms::Label());
			this->lbPortalCount = (gcnew System::Windows::Forms::Label());
			this->lbItemCount = (gcnew System::Windows::Forms::Label());
			this->lbMobCount = (gcnew System::Windows::Forms::Label());
			this->lbPeopleCount = (gcnew System::Windows::Forms::Label());
			this->lbBreathCount = (gcnew System::Windows::Forms::Label());
			this->lbBuffCount = (gcnew System::Windows::Forms::Label());
			this->lbAttackCount = (gcnew System::Windows::Forms::Label());
			this->lbMousePos = (gcnew System::Windows::Forms::Label());
			this->lbCharPos = (gcnew System::Windows::Forms::Label());
			this->lbMapID = (gcnew System::Windows::Forms::Label());
			this->lbChannel = (gcnew System::Windows::Forms::Label());
			this->lbWorld = (gcnew System::Windows::Forms::Label());
			this->lbMesos = (gcnew System::Windows::Forms::Label());
			this->lbEXP = (gcnew System::Windows::Forms::Label());
			this->lbMP = (gcnew System::Windows::Forms::Label());
			this->lbHP = (gcnew System::Windows::Forms::Label());
			this->lbJob = (gcnew System::Windows::Forms::Label());
			this->lbLevel = (gcnew System::Windows::Forms::Label());
			this->lbCharName = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->tabControl2 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->rtbHome = (gcnew System::Windows::Forms::RichTextBox());
			this->tabPage17 = (gcnew System::Windows::Forms::TabPage());
			this->panel22 = (gcnew System::Windows::Forms::Panel());
			this->cbAutoLoginNoPic = (gcnew System::Windows::Forms::CheckBox());
			this->label82 = (gcnew System::Windows::Forms::Label());
			this->comboAutoLoginCharacter = (gcnew System::Windows::Forms::ComboBox());
			this->label85 = (gcnew System::Windows::Forms::Label());
			this->label80 = (gcnew System::Windows::Forms::Label());
			this->comboAutoLoginChannel = (gcnew System::Windows::Forms::ComboBox());
			this->label84 = (gcnew System::Windows::Forms::Label());
			this->tbAutoLoginPIC = (gcnew System::Windows::Forms::TextBox());
			this->label83 = (gcnew System::Windows::Forms::Label());
			this->tbAutoLoginPassword = (gcnew System::Windows::Forms::TextBox());
			this->tbAutoLoginUsername = (gcnew System::Windows::Forms::TextBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->cbDisablePointers = (gcnew System::Windows::Forms::CheckBox());
			this->transparencyTrackBar = (gcnew System::Windows::Forms::TrackBar());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl3 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage11 = (gcnew System::Windows::Forms::TabPage());
			this->bBuffEnableAll = (gcnew System::Windows::Forms::Button());
			this->bBuffDisableAll = (gcnew System::Windows::Forms::Button());
			this->bBuffRemove = (gcnew System::Windows::Forms::Button());
			this->bBuffClear = (gcnew System::Windows::Forms::Button());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->tbBuffName = (gcnew System::Windows::Forms::TextBox());
			this->bBuffAdd = (gcnew System::Windows::Forms::Button());
			this->tbBuffInterval = (gcnew System::Windows::Forms::TextBox());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->comboBuffKey = (gcnew System::Windows::Forms::ComboBox());
			this->lvBuff = (gcnew System::Windows::Forms::ListView());
			this->lvBuffHeaderName = (gcnew System::Windows::Forms::ColumnHeader());
			this->lvBuffHeaderKey = (gcnew System::Windows::Forms::ColumnHeader());
			this->lvBuffHeaderInterval = (gcnew System::Windows::Forms::ColumnHeader());
			this->tabPage12 = (gcnew System::Windows::Forms::TabPage());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->tbCSDelay = (gcnew System::Windows::Forms::TextBox());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->bCS = (gcnew System::Windows::Forms::Button());
			this->bRandomCC = (gcnew System::Windows::Forms::Button());
			this->panel9 = (gcnew System::Windows::Forms::Panel());
			this->bCC = (gcnew System::Windows::Forms::Button());
			this->comboChannelKey = (gcnew System::Windows::Forms::ComboBox());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->tbCCCSMob = (gcnew System::Windows::Forms::TextBox());
			this->tbCCCSAttack = (gcnew System::Windows::Forms::TextBox());
			this->tbCCCSPeople = (gcnew System::Windows::Forms::TextBox());
			this->tbCCCSTime = (gcnew System::Windows::Forms::TextBox());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->cbCCCSMob = (gcnew System::Windows::Forms::CheckBox());
			this->rbCS = (gcnew System::Windows::Forms::RadioButton());
			this->cbCCCSAttack = (gcnew System::Windows::Forms::CheckBox());
			this->cbCCCSPeople = (gcnew System::Windows::Forms::CheckBox());
			this->rbCC = (gcnew System::Windows::Forms::RadioButton());
			this->cbCCCSTime = (gcnew System::Windows::Forms::CheckBox());
			this->rbFunction = (gcnew System::Windows::Forms::RadioButton());
			this->rbPacket = (gcnew System::Windows::Forms::RadioButton());
			this->tabPage10 = (gcnew System::Windows::Forms::TabPage());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->tbLootItem = (gcnew System::Windows::Forms::TextBox());
			this->tbLootInterval = (gcnew System::Windows::Forms::TextBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->comboLootKey = (gcnew System::Windows::Forms::ComboBox());
			this->cbLoot = (gcnew System::Windows::Forms::CheckBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->tbAttackMob = (gcnew System::Windows::Forms::TextBox());
			this->tbAttackInterval = (gcnew System::Windows::Forms::TextBox());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->comboAttackKey = (gcnew System::Windows::Forms::ComboBox());
			this->cbAttack = (gcnew System::Windows::Forms::CheckBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->comboMPKey = (gcnew System::Windows::Forms::ComboBox());
			this->comboHPKey = (gcnew System::Windows::Forms::ComboBox());
			this->tbMP = (gcnew System::Windows::Forms::TextBox());
			this->tbHP = (gcnew System::Windows::Forms::TextBox());
			this->cbHP = (gcnew System::Windows::Forms::CheckBox());
			this->cbMP = (gcnew System::Windows::Forms::CheckBox());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->panel12 = (gcnew System::Windows::Forms::Panel());
			this->cbFastLootItems = (gcnew System::Windows::Forms::CheckBox());
			this->cbInstantDropItems = (gcnew System::Windows::Forms::CheckBox());
			this->cbInstantLootItems = (gcnew System::Windows::Forms::CheckBox());
			this->panel25 = (gcnew System::Windows::Forms::Panel());
			this->cbNoBlueBoxes = (gcnew System::Windows::Forms::CheckBox());
			this->cbNoMapTiles = (gcnew System::Windows::Forms::CheckBox());
			this->cbMapSpeedUp = (gcnew System::Windows::Forms::CheckBox());
			this->cbNoMapObjects = (gcnew System::Windows::Forms::CheckBox());
			this->cbNoMapBackground = (gcnew System::Windows::Forms::CheckBox());
			this->cbNoMapFadeEffect = (gcnew System::Windows::Forms::CheckBox());
			this->cbInfiniteChat = (gcnew System::Windows::Forms::CheckBox());
			this->panel24 = (gcnew System::Windows::Forms::Panel());
			this->cbMobAutoAggro = (gcnew System::Windows::Forms::CheckBox());
			this->cbMobFreeze = (gcnew System::Windows::Forms::CheckBox());
			this->cbMobDisarm = (gcnew System::Windows::Forms::CheckBox());
			this->cbNoMobReaction = (gcnew System::Windows::Forms::CheckBox());
			this->cbNoMobDeathEffect = (gcnew System::Windows::Forms::CheckBox());
			this->cbNoMobKickback = (gcnew System::Windows::Forms::CheckBox());
			this->panel23 = (gcnew System::Windows::Forms::Panel());
			this->cbNoPlayerNameTag = (gcnew System::Windows::Forms::CheckBox());
			this->cbNoAttackDelay = (gcnew System::Windows::Forms::CheckBox());
			this->cbNoBreath = (gcnew System::Windows::Forms::CheckBox());
			this->cbNoSkillEffects = (gcnew System::Windows::Forms::CheckBox());
			this->cbFullAccuracy = (gcnew System::Windows::Forms::CheckBox());
			this->cbNoPlayerKickback = (gcnew System::Windows::Forms::CheckBox());
			this->cbSpeedAttack = (gcnew System::Windows::Forms::CheckBox());
			this->cbJumpDownAnyTile = (gcnew System::Windows::Forms::CheckBox());
			this->cbNoPlayerDeath = (gcnew System::Windows::Forms::CheckBox());
			this->cbUnlimitedAttack = (gcnew System::Windows::Forms::CheckBox());
			this->panel11 = (gcnew System::Windows::Forms::Panel());
			this->cbMouseFly = (gcnew System::Windows::Forms::CheckBox());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->tbMouseTeleport = (gcnew System::Windows::Forms::TextBox());
			this->tbClickTeleport = (gcnew System::Windows::Forms::TextBox());
			this->cbSwimInAir = (gcnew System::Windows::Forms::CheckBox());
			this->cbClickTeleport = (gcnew System::Windows::Forms::CheckBox());
			this->cbMouseTeleport = (gcnew System::Windows::Forms::CheckBox());
			this->panel10 = (gcnew System::Windows::Forms::Panel());
			this->cbFullGodmode = (gcnew System::Windows::Forms::CheckBox());
			this->cbMissGodmode = (gcnew System::Windows::Forms::CheckBox());
			this->cbBlinkGodmode = (gcnew System::Windows::Forms::CheckBox());
			this->tabPage20 = (gcnew System::Windows::Forms::TabPage());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->panel27 = (gcnew System::Windows::Forms::Panel());
			this->bSpawnControl = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->tbSpawnControlMapID = (gcnew System::Windows::Forms::TextBox());
			this->label71 = (gcnew System::Windows::Forms::Label());
			this->tbSpawnControlY = (gcnew System::Windows::Forms::TextBox());
			this->bSpawnControlAdd = (gcnew System::Windows::Forms::Button());
			this->tbSpawnControlX = (gcnew System::Windows::Forms::TextBox());
			this->label69 = (gcnew System::Windows::Forms::Label());
			this->bSpawnControlGetCurrentLocation = (gcnew System::Windows::Forms::Button());
			this->label68 = (gcnew System::Windows::Forms::Label());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->lvSpawnControl = (gcnew System::Windows::Forms::ListView());
			this->columnHeader3 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader4 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader5 = (gcnew System::Windows::Forms::ColumnHeader());
			this->bSpawnControlDelete = (gcnew System::Windows::Forms::Button());
			this->panel26 = (gcnew System::Windows::Forms::Panel());
			this->tbTeleportLoopDelay = (gcnew System::Windows::Forms::TextBox());
			this->label86 = (gcnew System::Windows::Forms::Label());
			this->bTeleportLoop = (gcnew System::Windows::Forms::Button());
			this->bTeleportDelete = (gcnew System::Windows::Forms::Button());
			this->bTeleport = (gcnew System::Windows::Forms::Button());
			this->lvTeleport = (gcnew System::Windows::Forms::ListView());
			this->columnHeader1 = (gcnew System::Windows::Forms::ColumnHeader());
			this->columnHeader2 = (gcnew System::Windows::Forms::ColumnHeader());
			this->panel18 = (gcnew System::Windows::Forms::Panel());
			this->bTeleportGetCurrentLocation = (gcnew System::Windows::Forms::Button());
			this->label64 = (gcnew System::Windows::Forms::Label());
			this->tbTeleportX = (gcnew System::Windows::Forms::TextBox());
			this->bTeleportAdd = (gcnew System::Windows::Forms::Button());
			this->label63 = (gcnew System::Windows::Forms::Label());
			this->tbTeleportY = (gcnew System::Windows::Forms::TextBox());
			this->tabPage6 = (gcnew System::Windows::Forms::TabPage());
			this->panel28 = (gcnew System::Windows::Forms::Panel());
			this->cbFullMapAttack = (gcnew System::Windows::Forms::CheckBox());
			this->cbItemVac = (gcnew System::Windows::Forms::CheckBox());
			this->panel17 = (gcnew System::Windows::Forms::Panel());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->cbUEMI = (gcnew System::Windows::Forms::CheckBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label72 = (gcnew System::Windows::Forms::Label());
			this->label87 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->panel16 = (gcnew System::Windows::Forms::Panel());
			this->panel19 = (gcnew System::Windows::Forms::Panel());
			this->tbMMCX = (gcnew System::Windows::Forms::TextBox());
			this->rbMMCMousePos = (gcnew System::Windows::Forms::RadioButton());
			this->rbMMCCharPos = (gcnew System::Windows::Forms::RadioButton());
			this->bMMCReset = (gcnew System::Windows::Forms::Button());
			this->tbMMCY = (gcnew System::Windows::Forms::TextBox());
			this->cbMMC = (gcnew System::Windows::Forms::CheckBox());
			this->label62 = (gcnew System::Windows::Forms::Label());
			this->label67 = (gcnew System::Windows::Forms::Label());
			this->tbDupeXMob = (gcnew System::Windows::Forms::TextBox());
			this->label60 = (gcnew System::Windows::Forms::Label());
			this->bDupeXResetLocation = (gcnew System::Windows::Forms::Button());
			this->cbDupeX = (gcnew System::Windows::Forms::CheckBox());
			this->panel15 = (gcnew System::Windows::Forms::Panel());
			this->tbWallVacRangeY = (gcnew System::Windows::Forms::TextBox());
			this->label61 = (gcnew System::Windows::Forms::Label());
			this->bGetCurrentLocation = (gcnew System::Windows::Forms::Button());
			this->tbWallVacRangeX = (gcnew System::Windows::Forms::TextBox());
			this->label59 = (gcnew System::Windows::Forms::Label());
			this->tbWallVacY = (gcnew System::Windows::Forms::TextBox());
			this->label51 = (gcnew System::Windows::Forms::Label());
			this->tbWallVacX = (gcnew System::Windows::Forms::TextBox());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->cbWallVac = (gcnew System::Windows::Forms::CheckBox());
			this->panel13 = (gcnew System::Windows::Forms::Panel());
			this->tbKamiLootItem = (gcnew System::Windows::Forms::TextBox());
			this->tbKamiLootInterval = (gcnew System::Windows::Forms::TextBox());
			this->label57 = (gcnew System::Windows::Forms::Label());
			this->label58 = (gcnew System::Windows::Forms::Label());
			this->cbKamiLoot = (gcnew System::Windows::Forms::CheckBox());
			this->panel14 = (gcnew System::Windows::Forms::Panel());
			this->tbKamiY = (gcnew System::Windows::Forms::TextBox());
			this->label56 = (gcnew System::Windows::Forms::Label());
			this->tbKamiX = (gcnew System::Windows::Forms::TextBox());
			this->label55 = (gcnew System::Windows::Forms::Label());
			this->tbKamiMob = (gcnew System::Windows::Forms::TextBox());
			this->tbKamiInterval = (gcnew System::Windows::Forms::TextBox());
			this->label53 = (gcnew System::Windows::Forms::Label());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->cbKami = (gcnew System::Windows::Forms::CheckBox());
			this->tabPage7 = (gcnew System::Windows::Forms::TabPage());
			this->panel21 = (gcnew System::Windows::Forms::Panel());
			this->lbMobSearchLog = (gcnew System::Windows::Forms::ListBox());
			this->lbMobFilter = (gcnew System::Windows::Forms::ListBox());
			this->cbMobFilterLog = (gcnew System::Windows::Forms::CheckBox());
			this->bMobSearchLogClear = (gcnew System::Windows::Forms::Button());
			this->rbMobFilterWhiteList = (gcnew System::Windows::Forms::RadioButton());
			this->tbMobFilterSearch = (gcnew System::Windows::Forms::TextBox());
			this->rbMobFilterBlackList = (gcnew System::Windows::Forms::RadioButton());
			this->label75 = (gcnew System::Windows::Forms::Label());
			this->bMobFilterAdd = (gcnew System::Windows::Forms::Button());
			this->tbMobFilterID = (gcnew System::Windows::Forms::TextBox());
			this->label76 = (gcnew System::Windows::Forms::Label());
			this->label77 = (gcnew System::Windows::Forms::Label());
			this->bMobFilter = (gcnew System::Windows::Forms::Button());
			this->panel20 = (gcnew System::Windows::Forms::Panel());
			this->lbItemSearchLog = (gcnew System::Windows::Forms::ListBox());
			this->lbItemFilter = (gcnew System::Windows::Forms::ListBox());
			this->cbItemFilterLog = (gcnew System::Windows::Forms::CheckBox());
			this->bItemSearchLogClear = (gcnew System::Windows::Forms::Button());
			this->tbItemFilterSearch = (gcnew System::Windows::Forms::TextBox());
			this->label74 = (gcnew System::Windows::Forms::Label());
			this->bItemFilterAdd = (gcnew System::Windows::Forms::Button());
			this->tbItemFilterID = (gcnew System::Windows::Forms::TextBox());
			this->label73 = (gcnew System::Windows::Forms::Label());
			this->tbItemFilterMesos = (gcnew System::Windows::Forms::TextBox());
			this->label70 = (gcnew System::Windows::Forms::Label());
			this->rbItemFilterWhiteList = (gcnew System::Windows::Forms::RadioButton());
			this->rbItemFilterBlackList = (gcnew System::Windows::Forms::RadioButton());
			this->bItemFilter = (gcnew System::Windows::Forms::Button());
			this->tabPage8 = (gcnew System::Windows::Forms::TabPage());
			this->tabControl5 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage16 = (gcnew System::Windows::Forms::TabPage());
			this->label81 = (gcnew System::Windows::Forms::Label());
			this->tbSendSpamDelay = (gcnew System::Windows::Forms::TextBox());
			this->cbSendSpam = (gcnew System::Windows::Forms::CheckBox());
			this->bSendRemove = (gcnew System::Windows::Forms::Button());
			this->lvSendBlock = (gcnew System::Windows::Forms::ListView());
			this->tbSendPacket = (gcnew System::Windows::Forms::TextBox());
			this->bSendBlock = (gcnew System::Windows::Forms::Button());
			this->bSendLog = (gcnew System::Windows::Forms::Button());
			this->bSendClear = (gcnew System::Windows::Forms::Button());
			this->bSendPacket = (gcnew System::Windows::Forms::Button());
			this->lvSend = (gcnew System::Windows::Forms::ListView());
			this->columnHeader6 = (gcnew System::Windows::Forms::ColumnHeader());
			this->tabPage15 = (gcnew System::Windows::Forms::TabPage());
			this->bRecvRemove = (gcnew System::Windows::Forms::Button());
			this->lvRecvBlock = (gcnew System::Windows::Forms::ListView());
			this->tbRecvPacket = (gcnew System::Windows::Forms::TextBox());
			this->bRecvBlock = (gcnew System::Windows::Forms::Button());
			this->bRecvLog = (gcnew System::Windows::Forms::Button());
			this->bRecvClear = (gcnew System::Windows::Forms::Button());
			this->bRecvPacket = (gcnew System::Windows::Forms::Button());
			this->lvRecv = (gcnew System::Windows::Forms::ListView());
			this->tabPage18 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage19 = (gcnew System::Windows::Forms::TabPage());
			this->panel29 = (gcnew System::Windows::Forms::Panel());
			this->bSendRevive = (gcnew System::Windows::Forms::Button());
			this->bSendRestore127Health = (gcnew System::Windows::Forms::Button());
			this->bSendSuicide = (gcnew System::Windows::Forms::Button());
			this->bSendDrop50000 = (gcnew System::Windows::Forms::Button());
			this->bSendMount = (gcnew System::Windows::Forms::Button());
			this->bSendDrop10000 = (gcnew System::Windows::Forms::Button());
			this->bSendDrop10 = (gcnew System::Windows::Forms::Button());
			this->bSendDrop1000 = (gcnew System::Windows::Forms::Button());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->tbAPDEX = (gcnew System::Windows::Forms::TextBox());
			this->tbAPLUK = (gcnew System::Windows::Forms::TextBox());
			this->tbAPINT = (gcnew System::Windows::Forms::TextBox());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->tbAPSTR = (gcnew System::Windows::Forms::TextBox());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->tbAPMP = (gcnew System::Windows::Forms::TextBox());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->tbAPHP = (gcnew System::Windows::Forms::TextBox());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->tbAPLevel = (gcnew System::Windows::Forms::TextBox());
			this->cbAP = (gcnew System::Windows::Forms::CheckBox());
			this->tabPage9 = (gcnew System::Windows::Forms::TabPage());
			this->lbMapRusherStatus = (gcnew System::Windows::Forms::Label());
			this->tbMapRusherDestination = (gcnew System::Windows::Forms::TextBox());
			this->label79 = (gcnew System::Windows::Forms::Label());
			this->bMapRush = (gcnew System::Windows::Forms::Button());
			this->tbMapRusherSearch = (gcnew System::Windows::Forms::TextBox());
			this->label78 = (gcnew System::Windows::Forms::Label());
			this->lvMapRusherSearch = (gcnew System::Windows::Forms::ListView());
			this->lvMapRusher = (gcnew System::Windows::Forms::ListView());
			this->lbMapName = (gcnew System::Windows::Forms::Label());
			this->lbDateTime = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->statusStrip1 = (gcnew System::Windows::Forms::StatusStrip());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->btnMinimize = (gcnew System::Windows::Forms::Button());
			this->GUITimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->AutoCCCSTimer = (gcnew System::Windows::Forms::Timer(this->components));
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->pnlFull->SuspendLayout();
			this->pnlMiddle->SuspendLayout();
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tabControl2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->tabPage17->SuspendLayout();
			this->panel22->SuspendLayout();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->transparencyTrackBar))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->tabControl3->SuspendLayout();
			this->tabPage11->SuspendLayout();
			this->panel5->SuspendLayout();
			this->tabPage12->SuspendLayout();
			this->panel8->SuspendLayout();
			this->panel9->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel2->SuspendLayout();
			this->tabPage5->SuspendLayout();
			this->panel12->SuspendLayout();
			this->panel25->SuspendLayout();
			this->panel24->SuspendLayout();
			this->panel23->SuspendLayout();
			this->panel11->SuspendLayout();
			this->panel10->SuspendLayout();
			this->tabPage20->SuspendLayout();
			this->panel27->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel26->SuspendLayout();
			this->panel18->SuspendLayout();
			this->tabPage6->SuspendLayout();
			this->panel28->SuspendLayout();
			this->panel17->SuspendLayout();
			this->panel16->SuspendLayout();
			this->panel19->SuspendLayout();
			this->panel15->SuspendLayout();
			this->panel13->SuspendLayout();
			this->panel14->SuspendLayout();
			this->tabPage7->SuspendLayout();
			this->panel21->SuspendLayout();
			this->panel20->SuspendLayout();
			this->tabPage8->SuspendLayout();
			this->tabControl5->SuspendLayout();
			this->tabPage16->SuspendLayout();
			this->tabPage15->SuspendLayout();
			this->tabPage19->SuspendLayout();
			this->panel29->SuspendLayout();
			this->panel6->SuspendLayout();
			this->tabPage9->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::Transparent;
			this->menuStrip1->Dock = System::Windows::Forms::DockStyle::None;
			this->menuStrip1->ForeColor = System::Drawing::Color::White;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(32, 32);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->fileToolStripMenuItem,
					this->mapleStoryToolStripMenuItem, this->helpToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 2);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(168, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// fileToolStripMenuItem
			// 
			this->fileToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(19)),
				static_cast<System::Int32>(static_cast<System::Byte>(19)), static_cast<System::Int32>(static_cast<System::Byte>(19)));
			this->fileToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->openSettingsToolStripMenuItem,
					this->saveSettingsToolStripMenuItem, this->closeMapleStoryToolStripMenuItem
			});
			this->fileToolStripMenuItem->Name = L"fileToolStripMenuItem";
			this->fileToolStripMenuItem->Size = System::Drawing::Size(37, 20);
			this->fileToolStripMenuItem->Text = L"File";
			// 
			// openSettingsToolStripMenuItem
			// 
			this->openSettingsToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(19)),
				static_cast<System::Int32>(static_cast<System::Byte>(19)), static_cast<System::Int32>(static_cast<System::Byte>(19)));
			this->openSettingsToolStripMenuItem->ForeColor = System::Drawing::Color::White;
			this->openSettingsToolStripMenuItem->Name = L"openSettingsToolStripMenuItem";
			this->openSettingsToolStripMenuItem->Size = System::Drawing::Size(166, 22);
			this->openSettingsToolStripMenuItem->Text = L"Open Settings";
			// 
			// saveSettingsToolStripMenuItem
			// 
			this->saveSettingsToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(19)),
				static_cast<System::Int32>(static_cast<System::Byte>(19)), static_cast<System::Int32>(static_cast<System::Byte>(19)));
			this->saveSettingsToolStripMenuItem->ForeColor = System::Drawing::Color::White;
			this->saveSettingsToolStripMenuItem->Name = L"saveSettingsToolStripMenuItem";
			this->saveSettingsToolStripMenuItem->Size = System::Drawing::Size(166, 22);
			this->saveSettingsToolStripMenuItem->Text = L"Save Settings";
			// 
			// closeMapleStoryToolStripMenuItem
			// 
			this->closeMapleStoryToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(19)),
				static_cast<System::Int32>(static_cast<System::Byte>(19)), static_cast<System::Int32>(static_cast<System::Byte>(19)));
			this->closeMapleStoryToolStripMenuItem->ForeColor = System::Drawing::Color::White;
			this->closeMapleStoryToolStripMenuItem->Name = L"closeMapleStoryToolStripMenuItem";
			this->closeMapleStoryToolStripMenuItem->Size = System::Drawing::Size(166, 22);
			this->closeMapleStoryToolStripMenuItem->Text = L"&Close MapleStory";
			this->closeMapleStoryToolStripMenuItem->Click += gcnew System::EventHandler(this, &MainForm::closeMapleStoryToolStripMenuItem_Click);
			// 
			// mapleStoryToolStripMenuItem
			// 
			this->mapleStoryToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(16)),
				static_cast<System::Int32>(static_cast<System::Byte>(16)), static_cast<System::Int32>(static_cast<System::Byte>(16)));
			this->mapleStoryToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->hideMSWindowToolStripMenuItem,
					this->injectDllToolStripMenuItem
			});
			this->mapleStoryToolStripMenuItem->Name = L"mapleStoryToolStripMenuItem";
			this->mapleStoryToolStripMenuItem->Size = System::Drawing::Size(79, 20);
			this->mapleStoryToolStripMenuItem->Text = L"MapleStory";
			// 
			// hideMSWindowToolStripMenuItem
			// 
			this->hideMSWindowToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(19)),
				static_cast<System::Int32>(static_cast<System::Byte>(19)), static_cast<System::Int32>(static_cast<System::Byte>(19)));
			this->hideMSWindowToolStripMenuItem->ForeColor = System::Drawing::Color::White;
			this->hideMSWindowToolStripMenuItem->Name = L"hideMSWindowToolStripMenuItem";
			this->hideMSWindowToolStripMenuItem->Size = System::Drawing::Size(166, 22);
			this->hideMSWindowToolStripMenuItem->Text = L"Hide MS Window";
			// 
			// injectDllToolStripMenuItem
			// 
			this->injectDllToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(19)),
				static_cast<System::Int32>(static_cast<System::Byte>(19)), static_cast<System::Int32>(static_cast<System::Byte>(19)));
			this->injectDllToolStripMenuItem->ForeColor = System::Drawing::Color::White;
			this->injectDllToolStripMenuItem->Name = L"injectDllToolStripMenuItem";
			this->injectDllToolStripMenuItem->Size = System::Drawing::Size(166, 22);
			this->injectDllToolStripMenuItem->Text = L"Inject Dll";
			// 
			// helpToolStripMenuItem
			// 
			this->helpToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->aboutToolStripMenuItem });
			this->helpToolStripMenuItem->Name = L"helpToolStripMenuItem";
			this->helpToolStripMenuItem->Size = System::Drawing::Size(44, 20);
			this->helpToolStripMenuItem->Text = L"Help";
			// 
			// aboutToolStripMenuItem
			// 
			this->aboutToolStripMenuItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(19)),
				static_cast<System::Int32>(static_cast<System::Byte>(19)), static_cast<System::Int32>(static_cast<System::Byte>(19)));
			this->aboutToolStripMenuItem->ForeColor = System::Drawing::Color::White;
			this->aboutToolStripMenuItem->Name = L"aboutToolStripMenuItem";
			this->aboutToolStripMenuItem->Size = System::Drawing::Size(107, 22);
			this->aboutToolStripMenuItem->Text = L"&About";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(16)), static_cast<System::Int32>(static_cast<System::Byte>(16)),
				static_cast<System::Int32>(static_cast<System::Byte>(16)));
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 6.75F));
			this->label1->ForeColor = System::Drawing::Color::Gray;
			this->label1->Location = System::Drawing::Point(474, 2);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(70, 22);
			this->label1->TabIndex = 3;
			this->label1->Text = L"MS Version: 83\r\nPrivate Servers";
			this->label1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseDown);
			this->label1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseMove);
			this->label1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseUp);
			// 
			// lbTitle
			// 
			this->lbTitle->AutoSize = true;
			this->lbTitle->Font = (gcnew System::Drawing::Font(L"Tahoma", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbTitle->ForeColor = System::Drawing::Color::Silver;
			this->lbTitle->Location = System::Drawing::Point(29, 8);
			this->lbTitle->Name = L"lbTitle";
			this->lbTitle->Size = System::Drawing::Size(121, 16);
			this->lbTitle->TabIndex = 12;
			this->lbTitle->Text = L"Timelapse Trainer";
			this->lbTitle->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseDown);
			this->lbTitle->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseMove);
			this->lbTitle->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseUp);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(7, 6);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(20, 21);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 11;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseDown);
			this->pictureBox2->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseMove);
			this->pictureBox2->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseUp);
			// 
			// pnlFull
			// 
			this->pnlFull->BackColor = System::Drawing::Color::Transparent;
			this->pnlFull->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pnlFull->Controls->Add(this->pnlMiddle);
			this->pnlFull->Controls->Add(this->lbMapName);
			this->pnlFull->Controls->Add(this->lbDateTime);
			this->pnlFull->Controls->Add(this->label21);
			this->pnlFull->Controls->Add(this->statusStrip1);
			this->pnlFull->Controls->Add(this->btnClose);
			this->pnlFull->Controls->Add(this->btnMinimize);
			this->pnlFull->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnlFull->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F));
			this->pnlFull->ForeColor = System::Drawing::Color::White;
			this->pnlFull->Location = System::Drawing::Point(0, 0);
			this->pnlFull->Name = L"pnlFull";
			this->pnlFull->Size = System::Drawing::Size(550, 450);
			this->pnlFull->TabIndex = 13;
			this->pnlFull->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseDown);
			this->pnlFull->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseMove);
			this->pnlFull->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseUp);
			// 
			// pnlMiddle
			// 
			this->pnlMiddle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(19)), static_cast<System::Int32>(static_cast<System::Byte>(19)),
				static_cast<System::Int32>(static_cast<System::Byte>(19)));
			this->pnlMiddle->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pnlMiddle->Controls->Add(this->button1);
			this->pnlMiddle->Controls->Add(this->lbInactive);
			this->pnlMiddle->Controls->Add(this->lbActive);
			this->pnlMiddle->Controls->Add(this->lbThreadID);
			this->pnlMiddle->Controls->Add(this->lbNPCCount);
			this->pnlMiddle->Controls->Add(this->lbPortalCount);
			this->pnlMiddle->Controls->Add(this->lbItemCount);
			this->pnlMiddle->Controls->Add(this->lbMobCount);
			this->pnlMiddle->Controls->Add(this->lbPeopleCount);
			this->pnlMiddle->Controls->Add(this->lbBreathCount);
			this->pnlMiddle->Controls->Add(this->lbBuffCount);
			this->pnlMiddle->Controls->Add(this->lbAttackCount);
			this->pnlMiddle->Controls->Add(this->lbMousePos);
			this->pnlMiddle->Controls->Add(this->lbCharPos);
			this->pnlMiddle->Controls->Add(this->lbMapID);
			this->pnlMiddle->Controls->Add(this->lbChannel);
			this->pnlMiddle->Controls->Add(this->lbWorld);
			this->pnlMiddle->Controls->Add(this->lbMesos);
			this->pnlMiddle->Controls->Add(this->lbEXP);
			this->pnlMiddle->Controls->Add(this->lbMP);
			this->pnlMiddle->Controls->Add(this->lbHP);
			this->pnlMiddle->Controls->Add(this->lbJob);
			this->pnlMiddle->Controls->Add(this->lbLevel);
			this->pnlMiddle->Controls->Add(this->lbCharName);
			this->pnlMiddle->Controls->Add(this->label25);
			this->pnlMiddle->Controls->Add(this->label24);
			this->pnlMiddle->Controls->Add(this->label23);
			this->pnlMiddle->Controls->Add(this->label22);
			this->pnlMiddle->Controls->Add(this->label20);
			this->pnlMiddle->Controls->Add(this->label19);
			this->pnlMiddle->Controls->Add(this->label18);
			this->pnlMiddle->Controls->Add(this->label17);
			this->pnlMiddle->Controls->Add(this->label16);
			this->pnlMiddle->Controls->Add(this->label15);
			this->pnlMiddle->Controls->Add(this->label14);
			this->pnlMiddle->Controls->Add(this->label13);
			this->pnlMiddle->Controls->Add(this->label12);
			this->pnlMiddle->Controls->Add(this->label11);
			this->pnlMiddle->Controls->Add(this->label10);
			this->pnlMiddle->Controls->Add(this->label9);
			this->pnlMiddle->Controls->Add(this->label8);
			this->pnlMiddle->Controls->Add(this->label7);
			this->pnlMiddle->Controls->Add(this->label6);
			this->pnlMiddle->Controls->Add(this->label5);
			this->pnlMiddle->Controls->Add(this->label4);
			this->pnlMiddle->Controls->Add(this->label3);
			this->pnlMiddle->Controls->Add(this->label1);
			this->pnlMiddle->Controls->Add(this->menuStrip1);
			this->pnlMiddle->Controls->Add(this->tabControl1);
			this->pnlMiddle->Location = System::Drawing::Point(0, 28);
			this->pnlMiddle->Name = L"pnlMiddle";
			this->pnlMiddle->Size = System::Drawing::Size(549, 395);
			this->pnlMiddle->TabIndex = 3;
			this->pnlMiddle->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseDown);
			this->pnlMiddle->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseMove);
			this->pnlMiddle->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseUp);
			// 
			// button1
			// 
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(408, 3);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(56, 24);
			this->button1->TabIndex = 51;
			this->button1->Text = L"Test";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MainForm::button1_Click);
			// 
			// lbInactive
			// 
			this->lbInactive->AutoSize = true;
			this->lbInactive->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F));
			this->lbInactive->ForeColor = System::Drawing::Color::Red;
			this->lbInactive->Location = System::Drawing::Point(498, 24);
			this->lbInactive->Name = L"lbInactive";
			this->lbInactive->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->lbInactive->Size = System::Drawing::Size(46, 13);
			this->lbInactive->TabIndex = 50;
			this->lbInactive->Text = L"Inactive";
			this->lbInactive->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lbInactive->Visible = false;
			this->lbInactive->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseDown);
			this->lbInactive->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseMove);
			this->lbInactive->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseUp);
			// 
			// lbActive
			// 
			this->lbActive->AutoSize = true;
			this->lbActive->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F));
			this->lbActive->ForeColor = System::Drawing::Color::Green;
			this->lbActive->Location = System::Drawing::Point(507, 24);
			this->lbActive->Name = L"lbActive";
			this->lbActive->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->lbActive->Size = System::Drawing::Size(37, 13);
			this->lbActive->TabIndex = 49;
			this->lbActive->Text = L"Active";
			this->lbActive->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->lbActive->Visible = false;
			this->lbActive->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseDown);
			this->lbActive->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseMove);
			this->lbActive->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseUp);
			// 
			// lbThreadID
			// 
			this->lbThreadID->AutoSize = true;
			this->lbThreadID->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F));
			this->lbThreadID->ForeColor = System::Drawing::Color::SpringGreen;
			this->lbThreadID->Location = System::Drawing::Point(468, 377);
			this->lbThreadID->Name = L"lbThreadID";
			this->lbThreadID->Size = System::Drawing::Size(43, 13);
			this->lbThreadID->TabIndex = 48;
			this->lbThreadID->Text = L"0x0000";
			this->lbThreadID->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseDown);
			this->lbThreadID->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseMove);
			this->lbThreadID->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseUp);
			// 
			// lbNPCCount
			// 
			this->lbNPCCount->AutoSize = true;
			this->lbNPCCount->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F));
			this->lbNPCCount->ForeColor = System::Drawing::Color::PaleTurquoise;
			this->lbNPCCount->Location = System::Drawing::Point(485, 358);
			this->lbNPCCount->Name = L"lbNPCCount";
			this->lbNPCCount->Size = System::Drawing::Size(25, 13);
			this->lbNPCCount->TabIndex = 47;
			this->lbNPCCount->Text = L"000";
			this->lbNPCCount->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseDown);
			this->lbNPCCount->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseMove);
			this->lbNPCCount->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseUp);
			// 
			// lbPortalCount
			// 
			this->lbPortalCount->AutoSize = true;
			this->lbPortalCount->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F));
			this->lbPortalCount->ForeColor = System::Drawing::Color::PaleTurquoise;
			this->lbPortalCount->Location = System::Drawing::Point(485, 343);
			this->lbPortalCount->Name = L"lbPortalCount";
			this->lbPortalCount->Size = System::Drawing::Size(25, 13);
			this->lbPortalCount->TabIndex = 46;
			this->lbPortalCount->Text = L"000";
			this->lbPortalCount->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseDown);
			this->lbPortalCount->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseMove);
			this->lbPortalCount->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseUp);
			// 
			// lbItemCount
			// 
			this->lbItemCount->AutoSize = true;
			this->lbItemCount->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F));
			this->lbItemCount->ForeColor = System::Drawing::Color::PaleTurquoise;
			this->lbItemCount->Location = System::Drawing::Point(485, 328);
			this->lbItemCount->Name = L"lbItemCount";
			this->lbItemCount->Size = System::Drawing::Size(25, 13);
			this->lbItemCount->TabIndex = 45;
			this->lbItemCount->Text = L"000";
			this->lbItemCount->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseDown);
			this->lbItemCount->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseMove);
			this->lbItemCount->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseUp);
			// 
			// lbMobCount
			// 
			this->lbMobCount->AutoSize = true;
			this->lbMobCount->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F));
			this->lbMobCount->ForeColor = System::Drawing::Color::PaleTurquoise;
			this->lbMobCount->Location = System::Drawing::Point(485, 313);
			this->lbMobCount->Name = L"lbMobCount";
			this->lbMobCount->Size = System::Drawing::Size(25, 13);
			this->lbMobCount->TabIndex = 44;
			this->lbMobCount->Text = L"000";
			this->lbMobCount->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseDown);
			this->lbMobCount->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseMove);
			this->lbMobCount->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseUp);
			// 
			// lbPeopleCount
			// 
			this->lbPeopleCount->AutoSize = true;
			this->lbPeopleCount->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F));
			this->lbPeopleCount->ForeColor = System::Drawing::Color::PaleTurquoise;
			this->lbPeopleCount->Location = System::Drawing::Point(485, 298);
			this->lbPeopleCount->Name = L"lbPeopleCount";
			this->lbPeopleCount->Size = System::Drawing::Size(25, 13);
			this->lbPeopleCount->TabIndex = 43;
			this->lbPeopleCount->Text = L"000";
			this->lbPeopleCount->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseDown);
			this->lbPeopleCount->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseMove);
			this->lbPeopleCount->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseUp);
			// 
			// lbBreathCount
			// 
			this->lbBreathCount->AutoSize = true;
			this->lbBreathCount->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F));
			this->lbBreathCount->ForeColor = System::Drawing::Color::PaleTurquoise;
			this->lbBreathCount->Location = System::Drawing::Point(485, 283);
			this->lbBreathCount->Name = L"lbBreathCount";
			this->lbBreathCount->Size = System::Drawing::Size(25, 13);
			this->lbBreathCount->TabIndex = 42;
			this->lbBreathCount->Text = L"000";
			this->lbBreathCount->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseDown);
			this->lbBreathCount->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseMove);
			this->lbBreathCount->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseUp);
			// 
			// lbBuffCount
			// 
			this->lbBuffCount->AutoSize = true;
			this->lbBuffCount->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F));
			this->lbBuffCount->ForeColor = System::Drawing::Color::PaleTurquoise;
			this->lbBuffCount->Location = System::Drawing::Point(485, 268);
			this->lbBuffCount->Name = L"lbBuffCount";
			this->lbBuffCount->Size = System::Drawing::Size(25, 13);
			this->lbBuffCount->TabIndex = 41;
			this->lbBuffCount->Text = L"000";
			this->lbBuffCount->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseDown);
			this->lbBuffCount->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseMove);
			this->lbBuffCount->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseUp);
			// 
			// lbAttackCount
			// 
			this->lbAttackCount->AutoSize = true;
			this->lbAttackCount->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F));
			this->lbAttackCount->ForeColor = System::Drawing::Color::PaleTurquoise;
			this->lbAttackCount->Location = System::Drawing::Point(485, 253);
			this->lbAttackCount->Name = L"lbAttackCount";
			this->lbAttackCount->Size = System::Drawing::Size(25, 13);
			this->lbAttackCount->TabIndex = 40;
			this->lbAttackCount->Text = L"000";
			this->lbAttackCount->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseDown);
			this->lbAttackCount->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseMove);
			this->lbAttackCount->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseUp);
			// 
			// lbMousePos
			// 
			this->lbMousePos->AutoSize = true;
			this->lbMousePos->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F));
			this->lbMousePos->ForeColor = System::Drawing::Color::LightGreen;
			this->lbMousePos->Location = System::Drawing::Point(470, 233);
			this->lbMousePos->Name = L"lbMousePos";
			this->lbMousePos->Size = System::Drawing::Size(70, 13);
			this->lbMousePos->TabIndex = 39;
			this->lbMousePos->Text = L"(0000, 0000)";
			this->lbMousePos->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseDown);
			this->lbMousePos->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseMove);
			this->lbMousePos->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseUp);
			// 
			// lbCharPos
			// 
			this->lbCharPos->AutoSize = true;
			this->lbCharPos->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F));
			this->lbCharPos->ForeColor = System::Drawing::Color::Khaki;
			this->lbCharPos->Location = System::Drawing::Point(459, 218);
			this->lbCharPos->Name = L"lbCharPos";
			this->lbCharPos->Size = System::Drawing::Size(70, 13);
			this->lbCharPos->TabIndex = 38;
			this->lbCharPos->Text = L"(0000, 0000)";
			this->lbCharPos->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseDown);
			this->lbCharPos->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseMove);
			this->lbCharPos->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseUp);
			// 
			// lbMapID
			// 
			this->lbMapID->AutoSize = true;
			this->lbMapID->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F));
			this->lbMapID->ForeColor = System::Drawing::Color::MediumPurple;
			this->lbMapID->Location = System::Drawing::Point(452, 203);
			this->lbMapID->Name = L"lbMapID";
			this->lbMapID->Size = System::Drawing::Size(61, 13);
			this->lbMapID->TabIndex = 37;
			this->lbMapID->Text = L"000000000";
			this->lbMapID->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseDown);
			this->lbMapID->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseMove);
			this->lbMapID->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseUp);
			// 
			// lbChannel
			// 
			this->lbChannel->AutoSize = true;
			this->lbChannel->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F));
			this->lbChannel->ForeColor = System::Drawing::Color::LightBlue;
			this->lbChannel->Location = System::Drawing::Point(457, 188);
			this->lbChannel->Name = L"lbChannel";
			this->lbChannel->Size = System::Drawing::Size(19, 13);
			this->lbChannel->TabIndex = 35;
			this->lbChannel->Text = L"00";
			this->lbChannel->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseDown);
			this->lbChannel->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseMove);
			this->lbChannel->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseUp);
			// 
			// lbWorld
			// 
			this->lbWorld->AutoSize = true;
			this->lbWorld->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F));
			this->lbWorld->ForeColor = System::Drawing::Color::LightCoral;
			this->lbWorld->Location = System::Drawing::Point(443, 173);
			this->lbWorld->Name = L"lbWorld";
			this->lbWorld->Size = System::Drawing::Size(24, 13);
			this->lbWorld->TabIndex = 34;
			this->lbWorld->Text = L"Null";
			this->lbWorld->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseDown);
			this->lbWorld->MouseHover += gcnew System::EventHandler(this, &MainForm::lbWorld_MouseHover);
			this->lbWorld->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseMove);
			this->lbWorld->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseUp);
			// 
			// lbMesos
			// 
			this->lbMesos->AutoSize = true;
			this->lbMesos->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F));
			this->lbMesos->ForeColor = System::Drawing::Color::Yellow;
			this->lbMesos->Location = System::Drawing::Point(447, 153);
			this->lbMesos->Name = L"lbMesos";
			this->lbMesos->Size = System::Drawing::Size(13, 13);
			this->lbMesos->TabIndex = 33;
			this->lbMesos->Text = L"0";
			this->lbMesos->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseDown);
			this->lbMesos->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseMove);
			this->lbMesos->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseUp);
			// 
			// lbEXP
			// 
			this->lbEXP->AutoSize = true;
			this->lbEXP->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F));
			this->lbEXP->ForeColor = System::Drawing::Color::Lime;
			this->lbEXP->Location = System::Drawing::Point(433, 138);
			this->lbEXP->Name = L"lbEXP";
			this->lbEXP->Size = System::Drawing::Size(40, 13);
			this->lbEXP->TabIndex = 32;
			this->lbEXP->Text = L"0.00%";
			this->lbEXP->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseDown);
			this->lbEXP->MouseHover += gcnew System::EventHandler(this, &MainForm::lbEXP_MouseHover);
			this->lbEXP->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseMove);
			this->lbEXP->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseUp);
			// 
			// lbMP
			// 
			this->lbMP->AutoSize = true;
			this->lbMP->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F));
			this->lbMP->ForeColor = System::Drawing::Color::Aqua;
			this->lbMP->Location = System::Drawing::Point(433, 123);
			this->lbMP->Name = L"lbMP";
			this->lbMP->Size = System::Drawing::Size(40, 13);
			this->lbMP->TabIndex = 31;
			this->lbMP->Text = L"0.00%";
			this->lbMP->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseDown);
			this->lbMP->MouseHover += gcnew System::EventHandler(this, &MainForm::lbMP_MouseHover);
			this->lbMP->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseMove);
			this->lbMP->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseUp);
			// 
			// lbHP
			// 
			this->lbHP->AutoSize = true;
			this->lbHP->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F));
			this->lbHP->ForeColor = System::Drawing::Color::Red;
			this->lbHP->Location = System::Drawing::Point(432, 108);
			this->lbHP->Name = L"lbHP";
			this->lbHP->Size = System::Drawing::Size(40, 13);
			this->lbHP->TabIndex = 30;
			this->lbHP->Text = L"0.00%";
			this->lbHP->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseDown);
			this->lbHP->MouseHover += gcnew System::EventHandler(this, &MainForm::lbHP_MouseHover);
			this->lbHP->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseMove);
			this->lbHP->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseUp);
			// 
			// lbJob
			// 
			this->lbJob->AutoSize = true;
			this->lbJob->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F));
			this->lbJob->ForeColor = System::Drawing::Color::DodgerBlue;
			this->lbJob->Location = System::Drawing::Point(432, 93);
			this->lbJob->Name = L"lbJob";
			this->lbJob->Size = System::Drawing::Size(24, 13);
			this->lbJob->TabIndex = 29;
			this->lbJob->Text = L"Null";
			this->lbJob->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseDown);
			this->lbJob->MouseHover += gcnew System::EventHandler(this, &MainForm::lbJob_MouseHover);
			this->lbJob->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseMove);
			this->lbJob->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseUp);
			// 
			// lbLevel
			// 
			this->lbLevel->AutoSize = true;
			this->lbLevel->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F));
			this->lbLevel->ForeColor = System::Drawing::Color::Orange;
			this->lbLevel->Location = System::Drawing::Point(440, 78);
			this->lbLevel->Name = L"lbLevel";
			this->lbLevel->Size = System::Drawing::Size(13, 13);
			this->lbLevel->TabIndex = 28;
			this->lbLevel->Text = L"0";
			this->lbLevel->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseDown);
			this->lbLevel->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseMove);
			this->lbLevel->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseUp);
			// 
			// lbCharName
			// 
			this->lbCharName->AutoSize = true;
			this->lbCharName->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F));
			this->lbCharName->ForeColor = System::Drawing::Color::Gold;
			this->lbCharName->Location = System::Drawing::Point(423, 63);
			this->lbCharName->Name = L"lbCharName";
			this->lbCharName->Size = System::Drawing::Size(57, 13);
			this->lbCharName->TabIndex = 27;
			this->lbCharName->Text = L"CharName";
			this->lbCharName->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseDown);
			this->lbCharName->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseMove);
			this->lbCharName->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseUp);
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F));
			this->label25->Location = System::Drawing::Point(405, 268);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(63, 13);
			this->label25->TabIndex = 26;
			this->label25->Text = L"Buff Count:";
			this->label25->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseDown);
			this->label25->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseMove);
			this->label25->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseUp);
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F));
			this->label24->Location = System::Drawing::Point(405, 358);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(59, 13);
			this->label24->TabIndex = 25;
			this->label24->Text = L"NPC Count";
			this->label24->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseDown);
			this->label24->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseMove);
			this->label24->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseUp);
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F));
			this->label23->Location = System::Drawing::Point(405, 233);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(62, 13);
			this->label23->TabIndex = 24;
			this->label23->Text = L"Mouse Pos:";
			this->label23->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseDown);
			this->label23->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseMove);
			this->label23->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseUp);
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F));
			this->label22->Location = System::Drawing::Point(405, 378);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(62, 13);
			this->label22->TabIndex = 23;
			this->label22->Text = L"Thread ID: ";
			this->label22->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseDown);
			this->label22->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseMove);
			this->label22->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseUp);
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F));
			this->label20->Location = System::Drawing::Point(405, 283);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(75, 13);
			this->label20->TabIndex = 21;
			this->label20->Text = L"Breath Count:";
			this->label20->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseDown);
			this->label20->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseMove);
			this->label20->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseUp);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F));
			this->label19->Location = System::Drawing::Point(405, 153);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(41, 13);
			this->label19->TabIndex = 20;
			this->label19->Text = L"Mesos:";
			this->label19->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseDown);
			this->label19->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseMove);
			this->label19->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseUp);
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F));
			this->label18->Location = System::Drawing::Point(405, 93);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(28, 13);
			this->label18->TabIndex = 19;
			this->label18->Text = L"Job:";
			this->label18->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseDown);
			this->label18->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseMove);
			this->label18->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseUp);
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F));
			this->label17->Location = System::Drawing::Point(405, 343);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(67, 13);
			this->label17->TabIndex = 18;
			this->label17->Text = L"Portal Count";
			this->label17->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseDown);
			this->label17->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseMove);
			this->label17->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseUp);
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F));
			this->label16->Location = System::Drawing::Point(405, 328);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(65, 13);
			this->label16->TabIndex = 17;
			this->label16->Text = L"Item Count:";
			this->label16->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseDown);
			this->label16->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseMove);
			this->label16->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseUp);
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F));
			this->label15->Location = System::Drawing::Point(405, 313);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(66, 13);
			this->label15->TabIndex = 16;
			this->label15->Text = L"Mob Count: ";
			this->label15->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseDown);
			this->label15->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseMove);
			this->label15->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseUp);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F));
			this->label14->Location = System::Drawing::Point(405, 298);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(75, 13);
			this->label14->TabIndex = 15;
			this->label14->Text = L"People Count:";
			this->label14->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseDown);
			this->label14->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseMove);
			this->label14->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseUp);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F));
			this->label13->Location = System::Drawing::Point(405, 253);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(74, 13);
			this->label13->TabIndex = 14;
			this->label13->Text = L"Attack Count:";
			this->label13->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseDown);
			this->label13->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseMove);
			this->label13->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseUp);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F));
			this->label12->Location = System::Drawing::Point(405, 218);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(54, 13);
			this->label12->TabIndex = 13;
			this->label12->Text = L"Char Pos:";
			this->label12->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseDown);
			this->label12->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseMove);
			this->label12->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseUp);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F));
			this->label11->Location = System::Drawing::Point(405, 203);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(48, 13);
			this->label11->TabIndex = 12;
			this->label11->Text = L"Map ID: ";
			this->label11->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseDown);
			this->label11->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseMove);
			this->label11->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseUp);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F));
			this->label10->Location = System::Drawing::Point(405, 188);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(50, 13);
			this->label10->TabIndex = 11;
			this->label10->Text = L"Channel:";
			this->label10->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseDown);
			this->label10->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseMove);
			this->label10->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseUp);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F));
			this->label9->Location = System::Drawing::Point(405, 173);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(39, 13);
			this->label9->TabIndex = 10;
			this->label9->Text = L"World:";
			this->label9->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseDown);
			this->label9->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseMove);
			this->label9->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseUp);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F));
			this->label8->Location = System::Drawing::Point(405, 138);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(29, 13);
			this->label8->TabIndex = 9;
			this->label8->Text = L"EXP:";
			this->label8->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseDown);
			this->label8->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseMove);
			this->label8->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseUp);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F));
			this->label7->Location = System::Drawing::Point(405, 123);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(25, 13);
			this->label7->TabIndex = 8;
			this->label7->Text = L"MP:";
			this->label7->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseDown);
			this->label7->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseMove);
			this->label7->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseUp);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F));
			this->label6->Location = System::Drawing::Point(405, 108);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(24, 13);
			this->label6->TabIndex = 7;
			this->label6->Text = L"HP:";
			this->label6->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseDown);
			this->label6->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseMove);
			this->label6->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseUp);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F));
			this->label5->Location = System::Drawing::Point(405, 78);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(39, 13);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Level: ";
			this->label5->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseDown);
			this->label5->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseMove);
			this->label5->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseUp);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F));
			this->label4->Location = System::Drawing::Point(405, 63);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(22, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"ID:";
			this->label4->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseDown);
			this->label4->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseMove);
			this->label4->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseUp);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Algerian", 15.75F));
			this->label3->Location = System::Drawing::Point(401, 39);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(60, 24);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Info:";
			this->label3->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseDown);
			this->label3->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseMove);
			this->label3->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseUp);
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage5);
			this->tabControl1->Controls->Add(this->tabPage20);
			this->tabControl1->Controls->Add(this->tabPage6);
			this->tabControl1->Controls->Add(this->tabPage7);
			this->tabControl1->Controls->Add(this->tabPage8);
			this->tabControl1->Controls->Add(this->tabPage9);
			this->tabControl1->ForeColor = System::Drawing::Color::White;
			this->tabControl1->Location = System::Drawing::Point(2, 29);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(398, 361);
			this->tabControl1->TabIndex = 2;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->tabPage1->Controls->Add(this->pictureBox1);
			this->tabPage1->Controls->Add(this->tabControl2);
			this->tabPage1->ForeColor = System::Drawing::Color::White;
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(390, 335);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Main";
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(6, 6);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(379, 89);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseDown);
			this->pictureBox1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseMove);
			this->pictureBox1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseUp);
			// 
			// tabControl2
			// 
			this->tabControl2->Controls->Add(this->tabPage3);
			this->tabControl2->Controls->Add(this->tabPage17);
			this->tabControl2->Controls->Add(this->tabPage4);
			this->tabControl2->Location = System::Drawing::Point(15, 101);
			this->tabControl2->Name = L"tabControl2";
			this->tabControl2->SelectedIndex = 0;
			this->tabControl2->Size = System::Drawing::Size(361, 217);
			this->tabControl2->TabIndex = 0;
			// 
			// tabPage3
			// 
			this->tabPage3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->tabPage3->Controls->Add(this->rtbHome);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(353, 191);
			this->tabPage3->TabIndex = 0;
			this->tabPage3->Text = L"Home";
			// 
			// rtbHome
			// 
			this->rtbHome->AcceptsTab = true;
			this->rtbHome->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->rtbHome->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->rtbHome->ForeColor = System::Drawing::Color::White;
			this->rtbHome->Location = System::Drawing::Point(16, 19);
			this->rtbHome->Name = L"rtbHome";
			this->rtbHome->ReadOnly = true;
			this->rtbHome->ScrollBars = System::Windows::Forms::RichTextBoxScrollBars::None;
			this->rtbHome->Size = System::Drawing::Size(318, 153);
			this->rtbHome->TabIndex = 0;
			this->rtbHome->Text = resources->GetString(L"rtbHome.Text");
			// 
			// tabPage17
			// 
			this->tabPage17->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->tabPage17->Controls->Add(this->panel22);
			this->tabPage17->Controls->Add(this->checkBox2);
			this->tabPage17->Controls->Add(this->checkBox1);
			this->tabPage17->Location = System::Drawing::Point(4, 22);
			this->tabPage17->Name = L"tabPage17";
			this->tabPage17->Size = System::Drawing::Size(353, 191);
			this->tabPage17->TabIndex = 2;
			this->tabPage17->Text = L"Auto Login";
			// 
			// panel22
			// 
			this->panel22->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel22->Controls->Add(this->cbAutoLoginNoPic);
			this->panel22->Controls->Add(this->label82);
			this->panel22->Controls->Add(this->comboAutoLoginCharacter);
			this->panel22->Controls->Add(this->label85);
			this->panel22->Controls->Add(this->label80);
			this->panel22->Controls->Add(this->comboAutoLoginChannel);
			this->panel22->Controls->Add(this->label84);
			this->panel22->Controls->Add(this->tbAutoLoginPIC);
			this->panel22->Controls->Add(this->label83);
			this->panel22->Controls->Add(this->tbAutoLoginPassword);
			this->panel22->Controls->Add(this->tbAutoLoginUsername);
			this->panel22->Location = System::Drawing::Point(18, 17);
			this->panel22->Name = L"panel22";
			this->panel22->Size = System::Drawing::Size(221, 156);
			this->panel22->TabIndex = 26;
			// 
			// cbAutoLoginNoPic
			// 
			this->cbAutoLoginNoPic->AutoSize = true;
			this->cbAutoLoginNoPic->Checked = true;
			this->cbAutoLoginNoPic->CheckState = System::Windows::Forms::CheckState::Checked;
			this->cbAutoLoginNoPic->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->cbAutoLoginNoPic->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cbAutoLoginNoPic->ForeColor = System::Drawing::Color::White;
			this->cbAutoLoginNoPic->Location = System::Drawing::Point(151, 67);
			this->cbAutoLoginNoPic->Name = L"cbAutoLoginNoPic";
			this->cbAutoLoginNoPic->Size = System::Drawing::Size(56, 17);
			this->cbAutoLoginNoPic->TabIndex = 29;
			this->cbAutoLoginNoPic->Text = L"No PIC";
			this->cbAutoLoginNoPic->UseVisualStyleBackColor = false;
			// 
			// label82
			// 
			this->label82->AutoSize = true;
			this->label82->Location = System::Drawing::Point(39, 69);
			this->label82->Name = L"label82";
			this->label82->Size = System::Drawing::Size(28, 13);
			this->label82->TabIndex = 19;
			this->label82->Text = L"PIC:";
			// 
			// comboAutoLoginCharacter
			// 
			this->comboAutoLoginCharacter->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->comboAutoLoginCharacter->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboAutoLoginCharacter->ForeColor = System::Drawing::Color::White;
			this->comboAutoLoginCharacter->FormattingEnabled = true;
			this->comboAutoLoginCharacter->Items->AddRange(gcnew cli::array< System::Object^  >(15) {
				L"1", L"2", L"3", L"4", L"5", L"6",
					L"7", L"8", L"9", L"10", L"11", L"12", L"13", L"14", L"15"
			});
			this->comboAutoLoginCharacter->Location = System::Drawing::Point(69, 118);
			this->comboAutoLoginCharacter->Name = L"comboAutoLoginCharacter";
			this->comboAutoLoginCharacter->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->comboAutoLoginCharacter->Size = System::Drawing::Size(133, 21);
			this->comboAutoLoginCharacter->TabIndex = 25;
			this->comboAutoLoginCharacter->Text = L" 1";
			// 
			// label85
			// 
			this->label85->AutoSize = true;
			this->label85->Location = System::Drawing::Point(8, 15);
			this->label85->Name = L"label85";
			this->label85->Size = System::Drawing::Size(59, 13);
			this->label85->TabIndex = 18;
			this->label85->Text = L"Username:";
			// 
			// label80
			// 
			this->label80->AutoSize = true;
			this->label80->Location = System::Drawing::Point(9, 122);
			this->label80->Name = L"label80";
			this->label80->Size = System::Drawing::Size(59, 13);
			this->label80->TabIndex = 20;
			this->label80->Text = L"Character:";
			// 
			// comboAutoLoginChannel
			// 
			this->comboAutoLoginChannel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->comboAutoLoginChannel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboAutoLoginChannel->ForeColor = System::Drawing::Color::White;
			this->comboAutoLoginChannel->FormattingEnabled = true;
			this->comboAutoLoginChannel->Items->AddRange(gcnew cli::array< System::Object^  >(21) {
				L"Random", L"1", L"2", L"3", L"4",
					L"5", L"6", L"7", L"8", L"9", L"10", L"11", L"12", L"13", L"14", L"15", L"16", L"17", L"18", L"19", L"20"
			});
			this->comboAutoLoginChannel->Location = System::Drawing::Point(69, 92);
			this->comboAutoLoginChannel->Name = L"comboAutoLoginChannel";
			this->comboAutoLoginChannel->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->comboAutoLoginChannel->Size = System::Drawing::Size(133, 21);
			this->comboAutoLoginChannel->TabIndex = 24;
			this->comboAutoLoginChannel->Text = L" Random";
			// 
			// label84
			// 
			this->label84->AutoSize = true;
			this->label84->Location = System::Drawing::Point(10, 42);
			this->label84->Name = L"label84";
			this->label84->Size = System::Drawing::Size(57, 13);
			this->label84->TabIndex = 17;
			this->label84->Text = L"Password:";
			// 
			// tbAutoLoginPIC
			// 
			this->tbAutoLoginPIC->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->tbAutoLoginPIC->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbAutoLoginPIC->Enabled = false;
			this->tbAutoLoginPIC->ForeColor = System::Drawing::Color::White;
			this->tbAutoLoginPIC->Location = System::Drawing::Point(69, 65);
			this->tbAutoLoginPIC->Name = L"tbAutoLoginPIC";
			this->tbAutoLoginPIC->Size = System::Drawing::Size(76, 21);
			this->tbAutoLoginPIC->TabIndex = 23;
			this->tbAutoLoginPIC->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label83
			// 
			this->label83->AutoSize = true;
			this->label83->Location = System::Drawing::Point(17, 96);
			this->label83->Name = L"label83";
			this->label83->Size = System::Drawing::Size(50, 13);
			this->label83->TabIndex = 16;
			this->label83->Text = L"Channel:";
			// 
			// tbAutoLoginPassword
			// 
			this->tbAutoLoginPassword->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->tbAutoLoginPassword->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbAutoLoginPassword->ForeColor = System::Drawing::Color::White;
			this->tbAutoLoginPassword->Location = System::Drawing::Point(69, 38);
			this->tbAutoLoginPassword->Name = L"tbAutoLoginPassword";
			this->tbAutoLoginPassword->Size = System::Drawing::Size(133, 21);
			this->tbAutoLoginPassword->TabIndex = 22;
			this->tbAutoLoginPassword->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// tbAutoLoginUsername
			// 
			this->tbAutoLoginUsername->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->tbAutoLoginUsername->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbAutoLoginUsername->ForeColor = System::Drawing::Color::White;
			this->tbAutoLoginUsername->Location = System::Drawing::Point(69, 11);
			this->tbAutoLoginUsername->Name = L"tbAutoLoginUsername";
			this->tbAutoLoginUsername->Size = System::Drawing::Size(133, 21);
			this->tbAutoLoginUsername->TabIndex = 21;
			this->tbAutoLoginUsername->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->checkBox2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox2->ForeColor = System::Drawing::Color::White;
			this->checkBox2->Location = System::Drawing::Point(261, 48);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(68, 17);
			this->checkBox2->TabIndex = 28;
			this->checkBox2->Text = L"Skip Logo";
			this->checkBox2->UseVisualStyleBackColor = false;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->checkBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox1->ForeColor = System::Drawing::Color::White;
			this->checkBox1->Location = System::Drawing::Point(261, 25);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(74, 17);
			this->checkBox1->TabIndex = 27;
			this->checkBox1->Text = L"Auto Login";
			this->checkBox1->UseVisualStyleBackColor = false;
			// 
			// tabPage4
			// 
			this->tabPage4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->tabPage4->Controls->Add(this->cbDisablePointers);
			this->tabPage4->Controls->Add(this->transparencyTrackBar);
			this->tabPage4->Controls->Add(this->label2);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(353, 191);
			this->tabPage4->TabIndex = 1;
			this->tabPage4->Text = L"Options";
			// 
			// cbDisablePointers
			// 
			this->cbDisablePointers->AutoSize = true;
			this->cbDisablePointers->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->cbDisablePointers->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cbDisablePointers->ForeColor = System::Drawing::Color::White;
			this->cbDisablePointers->Location = System::Drawing::Point(9, 40);
			this->cbDisablePointers->Name = L"cbDisablePointers";
			this->cbDisablePointers->Size = System::Drawing::Size(99, 17);
			this->cbDisablePointers->TabIndex = 51;
			this->cbDisablePointers->Text = L"Disable Pointers";
			this->cbDisablePointers->UseVisualStyleBackColor = false;
			// 
			// transparencyTrackBar
			// 
			this->transparencyTrackBar->Location = System::Drawing::Point(90, 10);
			this->transparencyTrackBar->Maximum = 100;
			this->transparencyTrackBar->Minimum = 50;
			this->transparencyTrackBar->Name = L"transparencyTrackBar";
			this->transparencyTrackBar->Size = System::Drawing::Size(257, 45);
			this->transparencyTrackBar->TabIndex = 1;
			this->transparencyTrackBar->TickStyle = System::Windows::Forms::TickStyle::None;
			this->transparencyTrackBar->Value = 100;
			this->transparencyTrackBar->Scroll += gcnew System::EventHandler(this, &MainForm::transparencyTrackBar_Scroll);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 13);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(77, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Transparency:";
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->tabPage2->Controls->Add(this->tabControl3);
			this->tabPage2->Controls->Add(this->panel4);
			this->tabPage2->Controls->Add(this->panel3);
			this->tabPage2->Controls->Add(this->panel2);
			this->tabPage2->ForeColor = System::Drawing::Color::White;
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(390, 335);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Bots";
			// 
			// tabControl3
			// 
			this->tabControl3->Controls->Add(this->tabPage11);
			this->tabControl3->Controls->Add(this->tabPage12);
			this->tabControl3->Controls->Add(this->tabPage10);
			this->tabControl3->Location = System::Drawing::Point(-6, 151);
			this->tabControl3->Name = L"tabControl3";
			this->tabControl3->SelectedIndex = 0;
			this->tabControl3->Size = System::Drawing::Size(402, 188);
			this->tabControl3->TabIndex = 10;
			// 
			// tabPage11
			// 
			this->tabPage11->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->tabPage11->Controls->Add(this->bBuffEnableAll);
			this->tabPage11->Controls->Add(this->bBuffDisableAll);
			this->tabPage11->Controls->Add(this->bBuffRemove);
			this->tabPage11->Controls->Add(this->bBuffClear);
			this->tabPage11->Controls->Add(this->panel5);
			this->tabPage11->Controls->Add(this->lvBuff);
			this->tabPage11->Location = System::Drawing::Point(4, 22);
			this->tabPage11->Name = L"tabPage11";
			this->tabPage11->Padding = System::Windows::Forms::Padding(3);
			this->tabPage11->Size = System::Drawing::Size(394, 162);
			this->tabPage11->TabIndex = 1;
			this->tabPage11->Text = L"Auto Buff";
			// 
			// bBuffEnableAll
			// 
			this->bBuffEnableAll->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->bBuffEnableAll->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bBuffEnableAll->Location = System::Drawing::Point(265, 109);
			this->bBuffEnableAll->Name = L"bBuffEnableAll";
			this->bBuffEnableAll->Size = System::Drawing::Size(124, 24);
			this->bBuffEnableAll->TabIndex = 15;
			this->bBuffEnableAll->Text = L"Enable All";
			this->bBuffEnableAll->UseVisualStyleBackColor = true;
			this->bBuffEnableAll->Click += gcnew System::EventHandler(this, &MainForm::bBuffEnableAll_Click);
			// 
			// bBuffDisableAll
			// 
			this->bBuffDisableAll->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->bBuffDisableAll->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bBuffDisableAll->Location = System::Drawing::Point(265, 136);
			this->bBuffDisableAll->Name = L"bBuffDisableAll";
			this->bBuffDisableAll->Size = System::Drawing::Size(124, 23);
			this->bBuffDisableAll->TabIndex = 14;
			this->bBuffDisableAll->Text = L"Disable All";
			this->bBuffDisableAll->UseVisualStyleBackColor = true;
			this->bBuffDisableAll->Click += gcnew System::EventHandler(this, &MainForm::bBuffDisableAll_Click);
			// 
			// bBuffRemove
			// 
			this->bBuffRemove->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->bBuffRemove->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bBuffRemove->Location = System::Drawing::Point(138, 135);
			this->bBuffRemove->Name = L"bBuffRemove";
			this->bBuffRemove->Size = System::Drawing::Size(125, 25);
			this->bBuffRemove->TabIndex = 13;
			this->bBuffRemove->Text = L"Remove Selected";
			this->bBuffRemove->UseVisualStyleBackColor = true;
			this->bBuffRemove->Click += gcnew System::EventHandler(this, &MainForm::bBuffRemove_Click);
			// 
			// bBuffClear
			// 
			this->bBuffClear->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->bBuffClear->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bBuffClear->Location = System::Drawing::Point(5, 135);
			this->bBuffClear->Name = L"bBuffClear";
			this->bBuffClear->Size = System::Drawing::Size(131, 25);
			this->bBuffClear->TabIndex = 12;
			this->bBuffClear->Text = L"Clear All";
			this->bBuffClear->UseVisualStyleBackColor = true;
			this->bBuffClear->Click += gcnew System::EventHandler(this, &MainForm::bBuffClear_Click);
			// 
			// panel5
			// 
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel5->Controls->Add(this->tbBuffName);
			this->panel5->Controls->Add(this->bBuffAdd);
			this->panel5->Controls->Add(this->tbBuffInterval);
			this->panel5->Controls->Add(this->label40);
			this->panel5->Controls->Add(this->label41);
			this->panel5->Controls->Add(this->comboBuffKey);
			this->panel5->Location = System::Drawing::Point(265, 4);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(124, 102);
			this->panel5->TabIndex = 5;
			// 
			// tbBuffName
			// 
			this->tbBuffName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->tbBuffName->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbBuffName->ForeColor = System::Drawing::Color::White;
			this->tbBuffName->Location = System::Drawing::Point(40, 3);
			this->tbBuffName->Name = L"tbBuffName";
			this->tbBuffName->Size = System::Drawing::Size(78, 21);
			this->tbBuffName->TabIndex = 12;
			this->tbBuffName->Text = L"Three Snails";
			this->tbBuffName->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// bBuffAdd
			// 
			this->bBuffAdd->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->bBuffAdd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bBuffAdd->Location = System::Drawing::Point(5, 76);
			this->bBuffAdd->Name = L"bBuffAdd";
			this->bBuffAdd->Size = System::Drawing::Size(113, 21);
			this->bBuffAdd->TabIndex = 11;
			this->bBuffAdd->Text = L"Add";
			this->bBuffAdd->UseVisualStyleBackColor = true;
			this->bBuffAdd->Click += gcnew System::EventHandler(this, &MainForm::bBuffAdd_Click);
			// 
			// tbBuffInterval
			// 
			this->tbBuffInterval->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->tbBuffInterval->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbBuffInterval->ForeColor = System::Drawing::Color::White;
			this->tbBuffInterval->Location = System::Drawing::Point(82, 27);
			this->tbBuffInterval->Name = L"tbBuffInterval";
			this->tbBuffInterval->Size = System::Drawing::Size(36, 21);
			this->tbBuffInterval->TabIndex = 3;
			this->tbBuffInterval->Text = L"100";
			this->tbBuffInterval->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->tbBuffInterval->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::tbBuffInterval_KeyPress);
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Location = System::Drawing::Point(2, 6);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(38, 13);
			this->label40->TabIndex = 10;
			this->label40->Text = L"Name:";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->BackColor = System::Drawing::Color::Transparent;
			this->label41->Location = System::Drawing::Point(9, 30);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(73, 13);
			this->label41->TabIndex = 7;
			this->label41->Text = L"Interval [ms]:";
			// 
			// comboBuffKey
			// 
			this->comboBuffKey->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->comboBuffKey->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBuffKey->ForeColor = System::Drawing::Color::White;
			this->comboBuffKey->FormattingEnabled = true;
			this->comboBuffKey->Items->AddRange(gcnew cli::array< System::Object^  >(46) {
				L" Shift", L" Control", L" Alt", L" Space",
					L" Insert", L" Delete", L" Home", L" End", L" Page Up", L" Page Down", L" A", L" B", L" C", L" D", L" E", L" F", L" G", L" H",
					L" I", L" J", L" K", L" L", L" M", L" N", L" O", L" P", L" Q", L" R", L" S", L" T", L" U", L" V", L" W", L" X", L" Y", L" Z",
					L" 0", L" 1", L" 2", L" 3", L" 4", L" 5", L" 6", L" 7", L" 8", L" 9"
			});
			this->comboBuffKey->Location = System::Drawing::Point(5, 51);
			this->comboBuffKey->Name = L"comboBuffKey";
			this->comboBuffKey->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->comboBuffKey->Size = System::Drawing::Size(113, 21);
			this->comboBuffKey->TabIndex = 5;
			this->comboBuffKey->Text = L" Shift";
			// 
			// lvBuff
			// 
			this->lvBuff->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->lvBuff->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lvBuff->CheckBoxes = true;
			this->lvBuff->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {
				this->lvBuffHeaderName, this->lvBuffHeaderKey,
					this->lvBuffHeaderInterval
			});
			this->lvBuff->ForeColor = System::Drawing::Color::White;
			this->lvBuff->FullRowSelect = true;
			this->lvBuff->HeaderStyle = System::Windows::Forms::ColumnHeaderStyle::Nonclickable;
			this->lvBuff->Location = System::Drawing::Point(6, 4);
			this->lvBuff->Name = L"lvBuff";
			this->lvBuff->Size = System::Drawing::Size(257, 130);
			this->lvBuff->TabIndex = 0;
			this->lvBuff->UseCompatibleStateImageBehavior = false;
			this->lvBuff->View = System::Windows::Forms::View::Details;
			// 
			// lvBuffHeaderName
			// 
			this->lvBuffHeaderName->Text = L"Name";
			this->lvBuffHeaderName->Width = 100;
			// 
			// lvBuffHeaderKey
			// 
			this->lvBuffHeaderKey->DisplayIndex = 2;
			this->lvBuffHeaderKey->Text = L"Key";
			// 
			// lvBuffHeaderInterval
			// 
			this->lvBuffHeaderInterval->DisplayIndex = 1;
			this->lvBuffHeaderInterval->Text = L"Interval [ms]";
			this->lvBuffHeaderInterval->Width = 80;
			// 
			// tabPage12
			// 
			this->tabPage12->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->tabPage12->Controls->Add(this->panel8);
			this->tabPage12->Controls->Add(this->panel7);
			this->tabPage12->Controls->Add(this->rbFunction);
			this->tabPage12->Controls->Add(this->rbPacket);
			this->tabPage12->Location = System::Drawing::Point(4, 22);
			this->tabPage12->Name = L"tabPage12";
			this->tabPage12->Padding = System::Windows::Forms::Padding(3);
			this->tabPage12->Size = System::Drawing::Size(394, 162);
			this->tabPage12->TabIndex = 2;
			this->tabPage12->Text = L"Auto CC/CS";
			// 
			// panel8
			// 
			this->panel8->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel8->Controls->Add(this->tbCSDelay);
			this->panel8->Controls->Add(this->label48);
			this->panel8->Controls->Add(this->bCS);
			this->panel8->Controls->Add(this->bRandomCC);
			this->panel8->Controls->Add(this->panel9);
			this->panel8->Location = System::Drawing::Point(213, 4);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(175, 152);
			this->panel8->TabIndex = 17;
			// 
			// tbCSDelay
			// 
			this->tbCSDelay->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->tbCSDelay->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbCSDelay->ForeColor = System::Drawing::Color::White;
			this->tbCSDelay->Location = System::Drawing::Point(92, 124);
			this->tbCSDelay->Name = L"tbCSDelay";
			this->tbCSDelay->Size = System::Drawing::Size(67, 21);
			this->tbCSDelay->TabIndex = 19;
			this->tbCSDelay->Text = L"2000";
			this->tbCSDelay->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->tbCSDelay->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::tbCSDelay_KeyPress);
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->ForeColor = System::Drawing::Color::Silver;
			this->label48->Location = System::Drawing::Point(14, 121);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(82, 26);
			this->label48->TabIndex = 18;
			this->label48->Text = L"Exit Cash Shop \r\nDelay (ms):";
			// 
			// bCS
			// 
			this->bCS->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->bCS->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bCS->Location = System::Drawing::Point(13, 94);
			this->bCS->Name = L"bCS";
			this->bCS->Size = System::Drawing::Size(146, 23);
			this->bCS->TabIndex = 17;
			this->bCS->Text = L"Auto Cash Shop";
			this->bCS->UseVisualStyleBackColor = true;
			this->bCS->Click += gcnew System::EventHandler(this, &MainForm::bCS_Click);
			// 
			// bRandomCC
			// 
			this->bRandomCC->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->bRandomCC->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bRandomCC->Location = System::Drawing::Point(13, 66);
			this->bRandomCC->Name = L"bRandomCC";
			this->bRandomCC->Size = System::Drawing::Size(146, 23);
			this->bRandomCC->TabIndex = 16;
			this->bRandomCC->Text = L"Random Channel";
			this->bRandomCC->UseVisualStyleBackColor = true;
			this->bRandomCC->Click += gcnew System::EventHandler(this, &MainForm::bRandomCC_Click);
			// 
			// panel9
			// 
			this->panel9->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel9->Controls->Add(this->bCC);
			this->panel9->Controls->Add(this->comboChannelKey);
			this->panel9->Controls->Add(this->label47);
			this->panel9->Location = System::Drawing::Point(7, 4);
			this->panel9->Name = L"panel9";
			this->panel9->Size = System::Drawing::Size(159, 57);
			this->panel9->TabIndex = 15;
			// 
			// bCC
			// 
			this->bCC->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->bCC->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bCC->Location = System::Drawing::Point(5, 28);
			this->bCC->Name = L"bCC";
			this->bCC->Size = System::Drawing::Size(146, 23);
			this->bCC->TabIndex = 14;
			this->bCC->Text = L"Specific Channel";
			this->bCC->UseVisualStyleBackColor = true;
			this->bCC->Click += gcnew System::EventHandler(this, &MainForm::bCC_Click);
			// 
			// comboChannelKey
			// 
			this->comboChannelKey->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->comboChannelKey->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboChannelKey->ForeColor = System::Drawing::Color::White;
			this->comboChannelKey->FormattingEnabled = true;
			this->comboChannelKey->Items->AddRange(gcnew cli::array< System::Object^  >(20) {
				L" 1", L" 2", L" 3", L" 4", L" 5", L" 6",
					L" 7", L" 8", L" 9", L" 10", L" 11", L" 12", L" 13", L" 14", L" 15", L" 16", L" 17", L" 18", L" 19", L" 20"
			});
			this->comboChannelKey->Location = System::Drawing::Point(74, 3);
			this->comboChannelKey->Name = L"comboChannelKey";
			this->comboChannelKey->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->comboChannelKey->Size = System::Drawing::Size(77, 21);
			this->comboChannelKey->TabIndex = 6;
			this->comboChannelKey->Text = L" 1";
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->Location = System::Drawing::Point(9, 6);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(50, 13);
			this->label47->TabIndex = 7;
			this->label47->Text = L"Channel:";
			// 
			// panel7
			// 
			this->panel7->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel7->Controls->Add(this->tbCCCSMob);
			this->panel7->Controls->Add(this->tbCCCSAttack);
			this->panel7->Controls->Add(this->tbCCCSPeople);
			this->panel7->Controls->Add(this->tbCCCSTime);
			this->panel7->Controls->Add(this->label46);
			this->panel7->Controls->Add(this->label45);
			this->panel7->Controls->Add(this->label44);
			this->panel7->Controls->Add(this->label43);
			this->panel7->Controls->Add(this->cbCCCSMob);
			this->panel7->Controls->Add(this->rbCS);
			this->panel7->Controls->Add(this->cbCCCSAttack);
			this->panel7->Controls->Add(this->cbCCCSPeople);
			this->panel7->Controls->Add(this->rbCC);
			this->panel7->Controls->Add(this->cbCCCSTime);
			this->panel7->Location = System::Drawing::Point(10, 27);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(197, 129);
			this->panel7->TabIndex = 2;
			// 
			// tbCCCSMob
			// 
			this->tbCCCSMob->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->tbCCCSMob->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbCCCSMob->ForeColor = System::Drawing::Color::White;
			this->tbCCCSMob->Location = System::Drawing::Point(111, 101);
			this->tbCCCSMob->Name = L"tbCCCSMob";
			this->tbCCCSMob->Size = System::Drawing::Size(78, 21);
			this->tbCCCSMob->TabIndex = 16;
			this->tbCCCSMob->Text = L"1";
			this->tbCCCSMob->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->tbCCCSMob->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::tbCCCSMob_KeyPress);
			// 
			// tbCCCSAttack
			// 
			this->tbCCCSAttack->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->tbCCCSAttack->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbCCCSAttack->ForeColor = System::Drawing::Color::White;
			this->tbCCCSAttack->Location = System::Drawing::Point(111, 78);
			this->tbCCCSAttack->Name = L"tbCCCSAttack";
			this->tbCCCSAttack->Size = System::Drawing::Size(78, 21);
			this->tbCCCSAttack->TabIndex = 15;
			this->tbCCCSAttack->Text = L"99";
			this->tbCCCSAttack->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->tbCCCSAttack->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::tbCCCSAttack_KeyPress);
			// 
			// tbCCCSPeople
			// 
			this->tbCCCSPeople->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->tbCCCSPeople->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbCCCSPeople->ForeColor = System::Drawing::Color::White;
			this->tbCCCSPeople->Location = System::Drawing::Point(111, 55);
			this->tbCCCSPeople->Name = L"tbCCCSPeople";
			this->tbCCCSPeople->Size = System::Drawing::Size(78, 21);
			this->tbCCCSPeople->TabIndex = 14;
			this->tbCCCSPeople->Text = L"0";
			this->tbCCCSPeople->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->tbCCCSPeople->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::tbCCCSPeople_KeyPress);
			// 
			// tbCCCSTime
			// 
			this->tbCCCSTime->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->tbCCCSTime->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbCCCSTime->ForeColor = System::Drawing::Color::White;
			this->tbCCCSTime->Location = System::Drawing::Point(111, 32);
			this->tbCCCSTime->Name = L"tbCCCSTime";
			this->tbCCCSTime->Size = System::Drawing::Size(78, 21);
			this->tbCCCSTime->TabIndex = 13;
			this->tbCCCSTime->Text = L"30";
			this->tbCCCSTime->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->tbCCCSTime->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::tbCCCSTime_KeyPress);
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->Location = System::Drawing::Point(92, 103);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(15, 13);
			this->label46->TabIndex = 10;
			this->label46->Text = L"<";
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->Location = System::Drawing::Point(92, 80);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(15, 13);
			this->label45->TabIndex = 9;
			this->label45->Text = L">";
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->Location = System::Drawing::Point(92, 57);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(15, 13);
			this->label44->TabIndex = 8;
			this->label44->Text = L">";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->Location = System::Drawing::Point(92, 35);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(15, 13);
			this->label43->TabIndex = 7;
			this->label43->Text = L">";
			// 
			// cbCCCSMob
			// 
			this->cbCCCSMob->AutoSize = true;
			this->cbCCCSMob->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->cbCCCSMob->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cbCCCSMob->ForeColor = System::Drawing::Color::White;
			this->cbCCCSMob->Location = System::Drawing::Point(15, 101);
			this->cbCCCSMob->Name = L"cbCCCSMob";
			this->cbCCCSMob->Size = System::Drawing::Size(48, 17);
			this->cbCCCSMob->TabIndex = 5;
			this->cbCCCSMob->Text = L"Mobs";
			this->cbCCCSMob->UseVisualStyleBackColor = false;
			// 
			// rbCS
			// 
			this->rbCS->AutoSize = true;
			this->rbCS->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->rbCS->Location = System::Drawing::Point(112, 6);
			this->rbCS->Name = L"rbCS";
			this->rbCS->Size = System::Drawing::Size(75, 17);
			this->rbCS->TabIndex = 5;
			this->rbCS->Text = L"Cash Shop";
			this->rbCS->UseVisualStyleBackColor = true;
			// 
			// cbCCCSAttack
			// 
			this->cbCCCSAttack->AutoSize = true;
			this->cbCCCSAttack->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->cbCCCSAttack->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cbCCCSAttack->ForeColor = System::Drawing::Color::White;
			this->cbCCCSAttack->Location = System::Drawing::Point(15, 78);
			this->cbCCCSAttack->Name = L"cbCCCSAttack";
			this->cbCCCSAttack->Size = System::Drawing::Size(59, 17);
			this->cbCCCSAttack->TabIndex = 4;
			this->cbCCCSAttack->Text = L"Attacks";
			this->cbCCCSAttack->UseVisualStyleBackColor = false;
			// 
			// cbCCCSPeople
			// 
			this->cbCCCSPeople->AutoSize = true;
			this->cbCCCSPeople->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->cbCCCSPeople->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cbCCCSPeople->ForeColor = System::Drawing::Color::White;
			this->cbCCCSPeople->Location = System::Drawing::Point(15, 55);
			this->cbCCCSPeople->Name = L"cbCCCSPeople";
			this->cbCCCSPeople->Size = System::Drawing::Size(55, 17);
			this->cbCCCSPeople->TabIndex = 3;
			this->cbCCCSPeople->Text = L"People";
			this->cbCCCSPeople->UseVisualStyleBackColor = false;
			// 
			// rbCC
			// 
			this->rbCC->AutoSize = true;
			this->rbCC->Checked = true;
			this->rbCC->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->rbCC->Location = System::Drawing::Point(6, 6);
			this->rbCC->Name = L"rbCC";
			this->rbCC->Size = System::Drawing::Size(103, 17);
			this->rbCC->TabIndex = 4;
			this->rbCC->TabStop = true;
			this->rbCC->Text = L"Change Channel";
			this->rbCC->UseVisualStyleBackColor = true;
			this->rbCC->CheckedChanged += gcnew System::EventHandler(this, &MainForm::rbCC_CheckedChanged);
			// 
			// cbCCCSTime
			// 
			this->cbCCCSTime->AutoSize = true;
			this->cbCCCSTime->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->cbCCCSTime->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cbCCCSTime->ForeColor = System::Drawing::Color::White;
			this->cbCCCSTime->Location = System::Drawing::Point(15, 32);
			this->cbCCCSTime->Name = L"cbCCCSTime";
			this->cbCCCSTime->Size = System::Drawing::Size(77, 17);
			this->cbCCCSTime->TabIndex = 2;
			this->cbCCCSTime->Text = L"Time (secs)";
			this->cbCCCSTime->UseVisualStyleBackColor = false;
			// 
			// rbFunction
			// 
			this->rbFunction->AutoSize = true;
			this->rbFunction->Checked = true;
			this->rbFunction->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->rbFunction->Location = System::Drawing::Point(23, 6);
			this->rbFunction->Name = L"rbFunction";
			this->rbFunction->Size = System::Drawing::Size(65, 17);
			this->rbFunction->TabIndex = 1;
			this->rbFunction->TabStop = true;
			this->rbFunction->Text = L"Function";
			this->rbFunction->UseVisualStyleBackColor = true;
			this->rbFunction->CheckedChanged += gcnew System::EventHandler(this, &MainForm::rbFunction_CheckedChanged);
			// 
			// rbPacket
			// 
			this->rbPacket->AutoSize = true;
			this->rbPacket->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->rbPacket->Location = System::Drawing::Point(116, 6);
			this->rbPacket->Name = L"rbPacket";
			this->rbPacket->Size = System::Drawing::Size(56, 17);
			this->rbPacket->TabIndex = 0;
			this->rbPacket->Text = L"Packet";
			this->rbPacket->UseVisualStyleBackColor = false;
			// 
			// tabPage10
			// 
			this->tabPage10->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->tabPage10->Location = System::Drawing::Point(4, 22);
			this->tabPage10->Name = L"tabPage10";
			this->tabPage10->Padding = System::Windows::Forms::Padding(3);
			this->tabPage10->Size = System::Drawing::Size(394, 162);
			this->tabPage10->TabIndex = 3;
			this->tabPage10->Text = L"Advanced Botting";
			// 
			// panel4
			// 
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel4->Controls->Add(this->tbLootItem);
			this->panel4->Controls->Add(this->tbLootInterval);
			this->panel4->Controls->Add(this->label29);
			this->panel4->Controls->Add(this->label31);
			this->panel4->Controls->Add(this->comboLootKey);
			this->panel4->Controls->Add(this->cbLoot);
			this->panel4->Location = System::Drawing::Point(195, 63);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(189, 78);
			this->panel4->TabIndex = 9;
			// 
			// tbLootItem
			// 
			this->tbLootItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->tbLootItem->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbLootItem->ForeColor = System::Drawing::Color::White;
			this->tbLootItem->Location = System::Drawing::Point(98, 51);
			this->tbLootItem->Name = L"tbLootItem";
			this->tbLootItem->Size = System::Drawing::Size(84, 21);
			this->tbLootItem->TabIndex = 9;
			this->tbLootItem->Text = L"0";
			this->tbLootItem->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->tbLootItem->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::tbLootItem_KeyPress);
			// 
			// tbLootInterval
			// 
			this->tbLootInterval->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->tbLootInterval->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbLootInterval->ForeColor = System::Drawing::Color::White;
			this->tbLootInterval->Location = System::Drawing::Point(98, 27);
			this->tbLootInterval->Name = L"tbLootInterval";
			this->tbLootInterval->Size = System::Drawing::Size(84, 21);
			this->tbLootInterval->TabIndex = 3;
			this->tbLootInterval->Text = L"100";
			this->tbLootInterval->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->tbLootInterval->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::tbLootInterval_KeyPress);
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(24, 54);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(76, 13);
			this->label29->TabIndex = 10;
			this->label29->Text = L"When Items >";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->BackColor = System::Drawing::Color::Transparent;
			this->label31->Location = System::Drawing::Point(23, 30);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(73, 13);
			this->label31->TabIndex = 7;
			this->label31->Text = L"Interval [ms]:";
			// 
			// comboLootKey
			// 
			this->comboLootKey->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->comboLootKey->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboLootKey->ForeColor = System::Drawing::Color::White;
			this->comboLootKey->FormattingEnabled = true;
			this->comboLootKey->Items->AddRange(gcnew cli::array< System::Object^  >(46) {
				L" Shift", L" Control", L" Alt", L" Space",
					L" Insert", L" Delete", L" Home", L" End", L" Page Up", L" Page Down", L" A", L" B", L" C", L" D", L" E", L" F", L" G", L" H",
					L" I", L" J", L" K", L" L", L" M", L" N", L" O", L" P", L" Q", L" R", L" S", L" T", L" U", L" V", L" W", L" X", L" Y", L" Z",
					L" 0", L" 1", L" 2", L" 3", L" 4", L" 5", L" 6", L" 7", L" 8", L" 9"
			});
			this->comboLootKey->Location = System::Drawing::Point(98, 3);
			this->comboLootKey->Name = L"comboLootKey";
			this->comboLootKey->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->comboLootKey->Size = System::Drawing::Size(83, 21);
			this->comboLootKey->TabIndex = 5;
			this->comboLootKey->Text = L" Z";
			this->comboLootKey->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::comboLootKey_SelectedIndexChanged);
			// 
			// cbLoot
			// 
			this->cbLoot->AutoSize = true;
			this->cbLoot->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->cbLoot->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cbLoot->ForeColor = System::Drawing::Color::White;
			this->cbLoot->Location = System::Drawing::Point(5, 5);
			this->cbLoot->Name = L"cbLoot";
			this->cbLoot->Size = System::Drawing::Size(70, 17);
			this->cbLoot->TabIndex = 1;
			this->cbLoot->Text = L"Auto Loot";
			this->cbLoot->UseVisualStyleBackColor = false;
			this->cbLoot->CheckedChanged += gcnew System::EventHandler(this, &MainForm::cbLoot_CheckedChanged);
			// 
			// panel3
			// 
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel3->Controls->Add(this->tbAttackMob);
			this->panel3->Controls->Add(this->tbAttackInterval);
			this->panel3->Controls->Add(this->label30);
			this->panel3->Controls->Add(this->label28);
			this->panel3->Controls->Add(this->comboAttackKey);
			this->panel3->Controls->Add(this->cbAttack);
			this->panel3->Location = System::Drawing::Point(6, 63);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(187, 78);
			this->panel3->TabIndex = 8;
			// 
			// tbAttackMob
			// 
			this->tbAttackMob->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->tbAttackMob->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbAttackMob->ForeColor = System::Drawing::Color::White;
			this->tbAttackMob->Location = System::Drawing::Point(99, 51);
			this->tbAttackMob->Name = L"tbAttackMob";
			this->tbAttackMob->Size = System::Drawing::Size(83, 21);
			this->tbAttackMob->TabIndex = 9;
			this->tbAttackMob->Text = L"0";
			this->tbAttackMob->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->tbAttackMob->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::tbAttackMob_KeyPress);
			// 
			// tbAttackInterval
			// 
			this->tbAttackInterval->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->tbAttackInterval->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbAttackInterval->ForeColor = System::Drawing::Color::White;
			this->tbAttackInterval->Location = System::Drawing::Point(99, 27);
			this->tbAttackInterval->Name = L"tbAttackInterval";
			this->tbAttackInterval->Size = System::Drawing::Size(83, 21);
			this->tbAttackInterval->TabIndex = 3;
			this->tbAttackInterval->Text = L"200";
			this->tbAttackInterval->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->tbAttackInterval->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::tbAttackInterval_KeyPress);
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(25, 54);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(74, 13);
			this->label30->TabIndex = 10;
			this->label30->Text = L"When Mobs >";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->BackColor = System::Drawing::Color::Transparent;
			this->label28->Location = System::Drawing::Point(24, 30);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(73, 13);
			this->label28->TabIndex = 7;
			this->label28->Text = L"Interval [ms]:";
			// 
			// comboAttackKey
			// 
			this->comboAttackKey->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->comboAttackKey->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboAttackKey->ForeColor = System::Drawing::Color::White;
			this->comboAttackKey->FormattingEnabled = true;
			this->comboAttackKey->Items->AddRange(gcnew cli::array< System::Object^  >(46) {
				L" Shift", L" Control", L" Alt", L" Space",
					L" Insert", L" Delete", L" Home", L" End", L" Page Up", L" Page Down", L" A", L" B", L" C", L" D", L" E", L" F", L" G", L" H",
					L" I", L" J", L" K", L" L", L" M", L" N", L" O", L" P", L" Q", L" R", L" S", L" T", L" U", L" V", L" W", L" X", L" Y", L" Z",
					L" 0", L" 1", L" 2", L" 3", L" 4", L" 5", L" 6", L" 7", L" 8", L" 9"
			});
			this->comboAttackKey->Location = System::Drawing::Point(99, 3);
			this->comboAttackKey->Name = L"comboAttackKey";
			this->comboAttackKey->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->comboAttackKey->Size = System::Drawing::Size(83, 21);
			this->comboAttackKey->TabIndex = 5;
			this->comboAttackKey->Text = L" Control";
			this->comboAttackKey->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::comboAttackKey_SelectedIndexChanged);
			// 
			// cbAttack
			// 
			this->cbAttack->AutoSize = true;
			this->cbAttack->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->cbAttack->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cbAttack->ForeColor = System::Drawing::Color::White;
			this->cbAttack->Location = System::Drawing::Point(3, 4);
			this->cbAttack->Name = L"cbAttack";
			this->cbAttack->Size = System::Drawing::Size(80, 17);
			this->cbAttack->TabIndex = 1;
			this->cbAttack->Text = L"Auto Attack";
			this->cbAttack->UseVisualStyleBackColor = false;
			this->cbAttack->CheckedChanged += gcnew System::EventHandler(this, &MainForm::cbAttack_CheckedChanged);
			// 
			// panel2
			// 
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->label27);
			this->panel2->Controls->Add(this->label26);
			this->panel2->Controls->Add(this->comboMPKey);
			this->panel2->Controls->Add(this->comboHPKey);
			this->panel2->Controls->Add(this->tbMP);
			this->panel2->Controls->Add(this->tbHP);
			this->panel2->Controls->Add(this->cbHP);
			this->panel2->Controls->Add(this->cbMP);
			this->panel2->Location = System::Drawing::Point(6, 6);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(378, 55);
			this->panel2->TabIndex = 7;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(124, 30);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(15, 13);
			this->label27->TabIndex = 8;
			this->label27->Text = L"<";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(124, 7);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(15, 13);
			this->label26->TabIndex = 7;
			this->label26->Text = L"<";
			// 
			// comboMPKey
			// 
			this->comboMPKey->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->comboMPKey->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboMPKey->ForeColor = System::Drawing::Color::White;
			this->comboMPKey->FormattingEnabled = true;
			this->comboMPKey->Items->AddRange(gcnew cli::array< System::Object^  >(46) {
				L" Shift", L" Control", L" Alt", L" Space", L" Insert",
					L" Delete", L" Home", L" End", L" Page Up", L" Page Down", L" A", L" B", L" C", L" D", L" E", L" F", L" G", L" H", L" I", L" J",
					L" K", L" L", L" M", L" N", L" O", L" P", L" Q", L" R", L" S", L" T", L" U", L" V", L" W", L" X", L" Y", L" Z", L" 0", L" 1",
					L" 2", L" 3", L" 4", L" 5", L" 6", L" 7", L" 8", L" 9"
			});
			this->comboMPKey->Location = System::Drawing::Point(253, 28);
			this->comboMPKey->Name = L"comboMPKey";
			this->comboMPKey->Size = System::Drawing::Size(117, 21);
			this->comboMPKey->TabIndex = 6;
			this->comboMPKey->Text = L" Page Down";
			this->comboMPKey->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::comboMPKey_SelectedIndexChanged);
			// 
			// comboHPKey
			// 
			this->comboHPKey->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->comboHPKey->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboHPKey->ForeColor = System::Drawing::Color::White;
			this->comboHPKey->FormattingEnabled = true;
			this->comboHPKey->Items->AddRange(gcnew cli::array< System::Object^  >(46) {
				L" Shift", L" Control", L" Alt", L" Space", L" Insert",
					L" Delete", L" Home", L" End", L" Page Up", L" Page Down", L" A", L" B", L" C", L" D", L" E", L" F", L" G", L" H", L" I", L" J",
					L" K", L" L", L" M", L" N", L" O", L" P", L" Q", L" R", L" S", L" T", L" U", L" V", L" W", L" X", L" Y", L" Z", L" 0", L" 1",
					L" 2", L" 3", L" 4", L" 5", L" 6", L" 7", L" 8", L" 9"
			});
			this->comboHPKey->Location = System::Drawing::Point(253, 4);
			this->comboHPKey->Name = L"comboHPKey";
			this->comboHPKey->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->comboHPKey->Size = System::Drawing::Size(117, 21);
			this->comboHPKey->TabIndex = 5;
			this->comboHPKey->Text = L" Page Up";
			this->comboHPKey->SelectedIndexChanged += gcnew System::EventHandler(this, &MainForm::comboHPKey_SelectedIndexChanged);
			// 
			// tbMP
			// 
			this->tbMP->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->tbMP->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbMP->ForeColor = System::Drawing::Color::White;
			this->tbMP->Location = System::Drawing::Point(167, 28);
			this->tbMP->Name = L"tbMP";
			this->tbMP->Size = System::Drawing::Size(82, 21);
			this->tbMP->TabIndex = 4;
			this->tbMP->Text = L"50";
			this->tbMP->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->tbMP->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::tbMP_KeyPress);
			// 
			// tbHP
			// 
			this->tbHP->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->tbHP->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbHP->ForeColor = System::Drawing::Color::White;
			this->tbHP->Location = System::Drawing::Point(167, 4);
			this->tbHP->Name = L"tbHP";
			this->tbHP->Size = System::Drawing::Size(82, 21);
			this->tbHP->TabIndex = 3;
			this->tbHP->Text = L"200";
			this->tbHP->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->tbHP->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::tbHP_KeyPress);
			// 
			// cbHP
			// 
			this->cbHP->AutoSize = true;
			this->cbHP->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->cbHP->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cbHP->ForeColor = System::Drawing::Color::White;
			this->cbHP->Location = System::Drawing::Point(5, 3);
			this->cbHP->Name = L"cbHP";
			this->cbHP->Size = System::Drawing::Size(95, 17);
			this->cbHP->TabIndex = 1;
			this->cbHP->Text = L"Auto HP Potion";
			this->cbHP->UseVisualStyleBackColor = false;
			this->cbHP->CheckedChanged += gcnew System::EventHandler(this, &MainForm::cbHP_CheckedChanged);
			// 
			// cbMP
			// 
			this->cbMP->AutoSize = true;
			this->cbMP->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->cbMP->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cbMP->ForeColor = System::Drawing::Color::White;
			this->cbMP->Location = System::Drawing::Point(5, 28);
			this->cbMP->Name = L"cbMP";
			this->cbMP->Size = System::Drawing::Size(96, 17);
			this->cbMP->TabIndex = 2;
			this->cbMP->Text = L"Auto MP Potion";
			this->cbMP->UseVisualStyleBackColor = false;
			this->cbMP->CheckedChanged += gcnew System::EventHandler(this, &MainForm::cbMP_CheckedChanged);
			// 
			// tabPage5
			// 
			this->tabPage5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->tabPage5->Controls->Add(this->panel12);
			this->tabPage5->Controls->Add(this->panel25);
			this->tabPage5->Controls->Add(this->panel24);
			this->tabPage5->Controls->Add(this->panel23);
			this->tabPage5->Controls->Add(this->panel11);
			this->tabPage5->Controls->Add(this->panel10);
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(390, 335);
			this->tabPage5->TabIndex = 2;
			this->tabPage5->Text = L"Hacks I";
			// 
			// panel12
			// 
			this->panel12->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel12->Controls->Add(this->cbFastLootItems);
			this->panel12->Controls->Add(this->cbInstantDropItems);
			this->panel12->Controls->Add(this->cbInstantLootItems);
			this->panel12->Location = System::Drawing::Point(133, 83);
			this->panel12->Name = L"panel12";
			this->panel12->Size = System::Drawing::Size(126, 73);
			this->panel12->TabIndex = 5;
			// 
			// cbFastLootItems
			// 
			this->cbFastLootItems->AutoSize = true;
			this->cbFastLootItems->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->cbFastLootItems->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cbFastLootItems->ForeColor = System::Drawing::Color::White;
			this->cbFastLootItems->Location = System::Drawing::Point(5, 49);
			this->cbFastLootItems->Name = L"cbFastLootItems";
			this->cbFastLootItems->Size = System::Drawing::Size(98, 17);
			this->cbFastLootItems->TabIndex = 5;
			this->cbFastLootItems->Text = L"Fast Loot Items";
			this->cbFastLootItems->UseVisualStyleBackColor = false;
			this->cbFastLootItems->CheckedChanged += gcnew System::EventHandler(this, &MainForm::cbFastLootItems_CheckedChanged);
			// 
			// cbInstantDropItems
			// 
			this->cbInstantDropItems->AutoSize = true;
			this->cbInstantDropItems->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->cbInstantDropItems->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cbInstantDropItems->ForeColor = System::Drawing::Color::White;
			this->cbInstantDropItems->Location = System::Drawing::Point(5, 5);
			this->cbInstantDropItems->Name = L"cbInstantDropItems";
			this->cbInstantDropItems->Size = System::Drawing::Size(114, 17);
			this->cbInstantDropItems->TabIndex = 4;
			this->cbInstantDropItems->Text = L"Instant Drop Items";
			this->cbInstantDropItems->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->cbInstantDropItems->UseVisualStyleBackColor = false;
			this->cbInstantDropItems->CheckedChanged += gcnew System::EventHandler(this, &MainForm::cbInstantDropItems_CheckedChanged);
			// 
			// cbInstantLootItems
			// 
			this->cbInstantLootItems->AutoSize = true;
			this->cbInstantLootItems->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->cbInstantLootItems->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cbInstantLootItems->ForeColor = System::Drawing::Color::White;
			this->cbInstantLootItems->Location = System::Drawing::Point(5, 27);
			this->cbInstantLootItems->Name = L"cbInstantLootItems";
			this->cbInstantLootItems->Size = System::Drawing::Size(112, 17);
			this->cbInstantLootItems->TabIndex = 6;
			this->cbInstantLootItems->Text = L"Instant Loot Items";
			this->cbInstantLootItems->UseVisualStyleBackColor = false;
			this->cbInstantLootItems->CheckedChanged += gcnew System::EventHandler(this, &MainForm::cbInstantLootItems_CheckedChanged);
			// 
			// panel25
			// 
			this->panel25->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel25->Controls->Add(this->cbNoBlueBoxes);
			this->panel25->Controls->Add(this->cbNoMapTiles);
			this->panel25->Controls->Add(this->cbMapSpeedUp);
			this->panel25->Controls->Add(this->cbNoMapObjects);
			this->panel25->Controls->Add(this->cbNoMapBackground);
			this->panel25->Controls->Add(this->cbNoMapFadeEffect);
			this->panel25->Controls->Add(this->cbInfiniteChat);
			this->panel25->Location = System::Drawing::Point(263, 82);
			this->panel25->Name = L"panel25";
			this->panel25->Size = System::Drawing::Size(121, 160);
			this->panel25->TabIndex = 22;
			// 
			// cbNoBlueBoxes
			// 
			this->cbNoBlueBoxes->AutoSize = true;
			this->cbNoBlueBoxes->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->cbNoBlueBoxes->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cbNoBlueBoxes->ForeColor = System::Drawing::Color::White;
			this->cbNoBlueBoxes->Location = System::Drawing::Point(5, 136);
			this->cbNoBlueBoxes->Name = L"cbNoBlueBoxes";
			this->cbNoBlueBoxes->Size = System::Drawing::Size(91, 17);
			this->cbNoBlueBoxes->TabIndex = 10;
			this->cbNoBlueBoxes->Text = L"No Blue Boxes";
			this->cbNoBlueBoxes->UseVisualStyleBackColor = false;
			this->cbNoBlueBoxes->CheckedChanged += gcnew System::EventHandler(this, &MainForm::cbNoBlueBoxes_CheckedChanged);
			// 
			// cbNoMapTiles
			// 
			this->cbNoMapTiles->AutoSize = true;
			this->cbNoMapTiles->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->cbNoMapTiles->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cbNoMapTiles->ForeColor = System::Drawing::Color::White;
			this->cbNoMapTiles->Location = System::Drawing::Point(5, 49);
			this->cbNoMapTiles->Name = L"cbNoMapTiles";
			this->cbNoMapTiles->Size = System::Drawing::Size(83, 17);
			this->cbNoMapTiles->TabIndex = 9;
			this->cbNoMapTiles->Text = L"No Map Tiles";
			this->cbNoMapTiles->UseVisualStyleBackColor = false;
			this->cbNoMapTiles->CheckedChanged += gcnew System::EventHandler(this, &MainForm::cbNoMapTiles_CheckedChanged);
			// 
			// cbMapSpeedUp
			// 
			this->cbMapSpeedUp->AutoSize = true;
			this->cbMapSpeedUp->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->cbMapSpeedUp->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cbMapSpeedUp->ForeColor = System::Drawing::Color::White;
			this->cbMapSpeedUp->Location = System::Drawing::Point(5, 93);
			this->cbMapSpeedUp->Name = L"cbMapSpeedUp";
			this->cbMapSpeedUp->Size = System::Drawing::Size(92, 17);
			this->cbMapSpeedUp->TabIndex = 8;
			this->cbMapSpeedUp->Text = L"Map Speed Up";
			this->cbMapSpeedUp->UseVisualStyleBackColor = false;
			this->cbMapSpeedUp->CheckedChanged += gcnew System::EventHandler(this, &MainForm::cbMapSpeedUp_CheckedChanged);
			// 
			// cbNoMapObjects
			// 
			this->cbNoMapObjects->AutoSize = true;
			this->cbNoMapObjects->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->cbNoMapObjects->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cbNoMapObjects->ForeColor = System::Drawing::Color::White;
			this->cbNoMapObjects->Location = System::Drawing::Point(5, 27);
			this->cbNoMapObjects->Name = L"cbNoMapObjects";
			this->cbNoMapObjects->Size = System::Drawing::Size(99, 17);
			this->cbNoMapObjects->TabIndex = 7;
			this->cbNoMapObjects->Text = L"No Map Objects";
			this->cbNoMapObjects->UseVisualStyleBackColor = false;
			this->cbNoMapObjects->CheckedChanged += gcnew System::EventHandler(this, &MainForm::cbNoMapObjects_CheckedChanged);
			// 
			// cbNoMapBackground
			// 
			this->cbNoMapBackground->AutoSize = true;
			this->cbNoMapBackground->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->cbNoMapBackground->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cbNoMapBackground->ForeColor = System::Drawing::Color::White;
			this->cbNoMapBackground->Location = System::Drawing::Point(5, 5);
			this->cbNoMapBackground->Name = L"cbNoMapBackground";
			this->cbNoMapBackground->Size = System::Drawing::Size(118, 17);
			this->cbNoMapBackground->TabIndex = 4;
			this->cbNoMapBackground->Text = L"No Map Background";
			this->cbNoMapBackground->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->cbNoMapBackground->UseVisualStyleBackColor = false;
			this->cbNoMapBackground->CheckedChanged += gcnew System::EventHandler(this, &MainForm::cbNoMapBackground_CheckedChanged);
			// 
			// cbNoMapFadeEffect
			// 
			this->cbNoMapFadeEffect->AutoSize = true;
			this->cbNoMapFadeEffect->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->cbNoMapFadeEffect->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cbNoMapFadeEffect->ForeColor = System::Drawing::Color::White;
			this->cbNoMapFadeEffect->Location = System::Drawing::Point(5, 71);
			this->cbNoMapFadeEffect->Name = L"cbNoMapFadeEffect";
			this->cbNoMapFadeEffect->Size = System::Drawing::Size(118, 17);
			this->cbNoMapFadeEffect->TabIndex = 5;
			this->cbNoMapFadeEffect->Text = L"No Map Fade Effect";
			this->cbNoMapFadeEffect->UseVisualStyleBackColor = false;
			this->cbNoMapFadeEffect->CheckedChanged += gcnew System::EventHandler(this, &MainForm::cbNoMapFadeEffect_CheckedChanged);
			// 
			// cbInfiniteChat
			// 
			this->cbInfiniteChat->AutoSize = true;
			this->cbInfiniteChat->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->cbInfiniteChat->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cbInfiniteChat->ForeColor = System::Drawing::Color::White;
			this->cbInfiniteChat->Location = System::Drawing::Point(5, 114);
			this->cbInfiniteChat->Name = L"cbInfiniteChat";
			this->cbInfiniteChat->Size = System::Drawing::Size(83, 17);
			this->cbInfiniteChat->TabIndex = 8;
			this->cbInfiniteChat->Text = L"Infinite Chat";
			this->cbInfiniteChat->UseVisualStyleBackColor = false;
			this->cbInfiniteChat->CheckedChanged += gcnew System::EventHandler(this, &MainForm::cbInfiniteChat_CheckedChanged);
			// 
			// panel24
			// 
			this->panel24->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel24->Controls->Add(this->cbMobAutoAggro);
			this->panel24->Controls->Add(this->cbMobFreeze);
			this->panel24->Controls->Add(this->cbMobDisarm);
			this->panel24->Controls->Add(this->cbNoMobReaction);
			this->panel24->Controls->Add(this->cbNoMobDeathEffect);
			this->panel24->Controls->Add(this->cbNoMobKickback);
			this->panel24->Location = System::Drawing::Point(133, 159);
			this->panel24->Name = L"panel24";
			this->panel24->Size = System::Drawing::Size(126, 138);
			this->panel24->TabIndex = 21;
			// 
			// cbMobAutoAggro
			// 
			this->cbMobAutoAggro->AutoSize = true;
			this->cbMobAutoAggro->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->cbMobAutoAggro->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cbMobAutoAggro->ForeColor = System::Drawing::Color::White;
			this->cbMobAutoAggro->Location = System::Drawing::Point(5, 114);
			this->cbMobAutoAggro->Name = L"cbMobAutoAggro";
			this->cbMobAutoAggro->Size = System::Drawing::Size(101, 17);
			this->cbMobAutoAggro->TabIndex = 23;
			this->cbMobAutoAggro->Text = L"Mob Auto Aggro";
			this->cbMobAutoAggro->UseVisualStyleBackColor = false;
			this->cbMobAutoAggro->CheckedChanged += gcnew System::EventHandler(this, &MainForm::cbMobAutoAggro_CheckedChanged);
			// 
			// cbMobFreeze
			// 
			this->cbMobFreeze->AutoSize = true;
			this->cbMobFreeze->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->cbMobFreeze->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cbMobFreeze->ForeColor = System::Drawing::Color::White;
			this->cbMobFreeze->Location = System::Drawing::Point(5, 71);
			this->cbMobFreeze->Name = L"cbMobFreeze";
			this->cbMobFreeze->Size = System::Drawing::Size(79, 17);
			this->cbMobFreeze->TabIndex = 9;
			this->cbMobFreeze->Text = L"Mob Freeze";
			this->cbMobFreeze->UseVisualStyleBackColor = false;
			this->cbMobFreeze->CheckedChanged += gcnew System::EventHandler(this, &MainForm::cbMobFreeze_CheckedChanged);
			// 
			// cbMobDisarm
			// 
			this->cbMobDisarm->AutoSize = true;
			this->cbMobDisarm->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->cbMobDisarm->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cbMobDisarm->ForeColor = System::Drawing::Color::White;
			this->cbMobDisarm->Location = System::Drawing::Point(5, 93);
			this->cbMobDisarm->Name = L"cbMobDisarm";
			this->cbMobDisarm->Size = System::Drawing::Size(78, 17);
			this->cbMobDisarm->TabIndex = 7;
			this->cbMobDisarm->Text = L"Mob Disarm";
			this->cbMobDisarm->UseVisualStyleBackColor = false;
			this->cbMobDisarm->CheckedChanged += gcnew System::EventHandler(this, &MainForm::cbMobDisarm_CheckedChanged);
			// 
			// cbNoMobReaction
			// 
			this->cbNoMobReaction->AutoSize = true;
			this->cbNoMobReaction->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->cbNoMobReaction->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cbNoMobReaction->ForeColor = System::Drawing::Color::White;
			this->cbNoMobReaction->Location = System::Drawing::Point(5, 5);
			this->cbNoMobReaction->Name = L"cbNoMobReaction";
			this->cbNoMobReaction->Size = System::Drawing::Size(104, 17);
			this->cbNoMobReaction->TabIndex = 6;
			this->cbNoMobReaction->Text = L"No Mob Reaction";
			this->cbNoMobReaction->UseVisualStyleBackColor = false;
			this->cbNoMobReaction->CheckedChanged += gcnew System::EventHandler(this, &MainForm::cbNoMobReaction_CheckedChanged);
			// 
			// cbNoMobDeathEffect
			// 
			this->cbNoMobDeathEffect->AutoSize = true;
			this->cbNoMobDeathEffect->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->cbNoMobDeathEffect->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cbNoMobDeathEffect->ForeColor = System::Drawing::Color::White;
			this->cbNoMobDeathEffect->Location = System::Drawing::Point(5, 27);
			this->cbNoMobDeathEffect->Name = L"cbNoMobDeathEffect";
			this->cbNoMobDeathEffect->Size = System::Drawing::Size(123, 17);
			this->cbNoMobDeathEffect->TabIndex = 8;
			this->cbNoMobDeathEffect->Text = L"No Mob Death Effect";
			this->cbNoMobDeathEffect->UseVisualStyleBackColor = false;
			this->cbNoMobDeathEffect->CheckedChanged += gcnew System::EventHandler(this, &MainForm::cbNoMobDeathEffect_CheckedChanged);
			// 
			// cbNoMobKickback
			// 
			this->cbNoMobKickback->AutoSize = true;
			this->cbNoMobKickback->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->cbNoMobKickback->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cbNoMobKickback->ForeColor = System::Drawing::Color::White;
			this->cbNoMobKickback->Location = System::Drawing::Point(5, 49);
			this->cbNoMobKickback->Name = L"cbNoMobKickback";
			this->cbNoMobKickback->Size = System::Drawing::Size(102, 17);
			this->cbNoMobKickback->TabIndex = 4;
			this->cbNoMobKickback->Text = L"No Mob Kickback";
			this->cbNoMobKickback->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->cbNoMobKickback->UseVisualStyleBackColor = false;
			this->cbNoMobKickback->CheckedChanged += gcnew System::EventHandler(this, &MainForm::cbNoMobKickback_CheckedChanged);
			// 
			// panel23
			// 
			this->panel23->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel23->Controls->Add(this->cbNoPlayerNameTag);
			this->panel23->Controls->Add(this->cbNoAttackDelay);
			this->panel23->Controls->Add(this->cbNoBreath);
			this->panel23->Controls->Add(this->cbNoSkillEffects);
			this->panel23->Controls->Add(this->cbFullAccuracy);
			this->panel23->Controls->Add(this->cbNoPlayerKickback);
			this->panel23->Controls->Add(this->cbSpeedAttack);
			this->panel23->Controls->Add(this->cbJumpDownAnyTile);
			this->panel23->Controls->Add(this->cbNoPlayerDeath);
			this->panel23->Controls->Add(this->cbUnlimitedAttack);
			this->panel23->Location = System::Drawing::Point(6, 82);
			this->panel23->Name = L"panel23";
			this->panel23->Size = System::Drawing::Size(123, 226);
			this->panel23->TabIndex = 20;
			// 
			// cbNoPlayerNameTag
			// 
			this->cbNoPlayerNameTag->AutoSize = true;
			this->cbNoPlayerNameTag->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->cbNoPlayerNameTag->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cbNoPlayerNameTag->ForeColor = System::Drawing::Color::White;
			this->cbNoPlayerNameTag->Location = System::Drawing::Point(5, 202);
			this->cbNoPlayerNameTag->Name = L"cbNoPlayerNameTag";
			this->cbNoPlayerNameTag->Size = System::Drawing::Size(120, 17);
			this->cbNoPlayerNameTag->TabIndex = 24;
			this->cbNoPlayerNameTag->Text = L"No Player Name Tag";
			this->cbNoPlayerNameTag->UseVisualStyleBackColor = false;
			this->cbNoPlayerNameTag->CheckedChanged += gcnew System::EventHandler(this, &MainForm::cbNoPlayerNameTag_CheckedChanged);
			// 
			// cbNoAttackDelay
			// 
			this->cbNoAttackDelay->AutoSize = true;
			this->cbNoAttackDelay->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->cbNoAttackDelay->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cbNoAttackDelay->ForeColor = System::Drawing::Color::White;
			this->cbNoAttackDelay->Location = System::Drawing::Point(5, 180);
			this->cbNoAttackDelay->Name = L"cbNoAttackDelay";
			this->cbNoAttackDelay->Size = System::Drawing::Size(100, 17);
			this->cbNoAttackDelay->TabIndex = 23;
			this->cbNoAttackDelay->Text = L"No Attack Delay";
			this->cbNoAttackDelay->UseVisualStyleBackColor = false;
			this->cbNoAttackDelay->CheckedChanged += gcnew System::EventHandler(this, &MainForm::cbNoAttackDelay_CheckedChanged);
			// 
			// cbNoBreath
			// 
			this->cbNoBreath->AutoSize = true;
			this->cbNoBreath->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->cbNoBreath->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cbNoBreath->ForeColor = System::Drawing::Color::White;
			this->cbNoBreath->Location = System::Drawing::Point(5, 71);
			this->cbNoBreath->Name = L"cbNoBreath";
			this->cbNoBreath->Size = System::Drawing::Size(71, 17);
			this->cbNoBreath->TabIndex = 12;
			this->cbNoBreath->Text = L"No Breath";
			this->cbNoBreath->UseVisualStyleBackColor = false;
			this->cbNoBreath->CheckedChanged += gcnew System::EventHandler(this, &MainForm::cbNoBreath_CheckedChanged);
			// 
			// cbNoSkillEffects
			// 
			this->cbNoSkillEffects->AutoSize = true;
			this->cbNoSkillEffects->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->cbNoSkillEffects->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cbNoSkillEffects->ForeColor = System::Drawing::Color::White;
			this->cbNoSkillEffects->Location = System::Drawing::Point(5, 158);
			this->cbNoSkillEffects->Name = L"cbNoSkillEffects";
			this->cbNoSkillEffects->Size = System::Drawing::Size(93, 17);
			this->cbNoSkillEffects->TabIndex = 8;
			this->cbNoSkillEffects->Text = L"No Skill Effects";
			this->cbNoSkillEffects->UseVisualStyleBackColor = false;
			this->cbNoSkillEffects->CheckedChanged += gcnew System::EventHandler(this, &MainForm::cbNoSkillEffects_CheckedChanged);
			// 
			// cbFullAccuracy
			// 
			this->cbFullAccuracy->AutoSize = true;
			this->cbFullAccuracy->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->cbFullAccuracy->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cbFullAccuracy->ForeColor = System::Drawing::Color::White;
			this->cbFullAccuracy->Location = System::Drawing::Point(5, 49);
			this->cbFullAccuracy->Name = L"cbFullAccuracy";
			this->cbFullAccuracy->Size = System::Drawing::Size(86, 17);
			this->cbFullAccuracy->TabIndex = 10;
			this->cbFullAccuracy->Text = L"Full Accuracy";
			this->cbFullAccuracy->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->cbFullAccuracy->UseVisualStyleBackColor = false;
			this->cbFullAccuracy->CheckedChanged += gcnew System::EventHandler(this, &MainForm::cbFullAccuracy_CheckedChanged);
			// 
			// cbNoPlayerKickback
			// 
			this->cbNoPlayerKickback->AutoSize = true;
			this->cbNoPlayerKickback->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->cbNoPlayerKickback->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cbNoPlayerKickback->ForeColor = System::Drawing::Color::White;
			this->cbNoPlayerKickback->Location = System::Drawing::Point(5, 93);
			this->cbNoPlayerKickback->Name = L"cbNoPlayerKickback";
			this->cbNoPlayerKickback->Size = System::Drawing::Size(112, 17);
			this->cbNoPlayerKickback->TabIndex = 5;
			this->cbNoPlayerKickback->Text = L"No Player Kickback";
			this->cbNoPlayerKickback->UseVisualStyleBackColor = false;
			this->cbNoPlayerKickback->CheckedChanged += gcnew System::EventHandler(this, &MainForm::cbNoPlayerKickback_CheckedChanged);
			// 
			// cbSpeedAttack
			// 
			this->cbSpeedAttack->AutoSize = true;
			this->cbSpeedAttack->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->cbSpeedAttack->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cbSpeedAttack->ForeColor = System::Drawing::Color::White;
			this->cbSpeedAttack->Location = System::Drawing::Point(5, 5);
			this->cbSpeedAttack->Name = L"cbSpeedAttack";
			this->cbSpeedAttack->Size = System::Drawing::Size(87, 17);
			this->cbSpeedAttack->TabIndex = 11;
			this->cbSpeedAttack->Text = L"Speed Attack";
			this->cbSpeedAttack->UseVisualStyleBackColor = false;
			this->cbSpeedAttack->CheckedChanged += gcnew System::EventHandler(this, &MainForm::cbSpeedAttack_CheckedChanged);
			// 
			// cbJumpDownAnyTile
			// 
			this->cbJumpDownAnyTile->AutoSize = true;
			this->cbJumpDownAnyTile->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->cbJumpDownAnyTile->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cbJumpDownAnyTile->ForeColor = System::Drawing::Color::White;
			this->cbJumpDownAnyTile->Location = System::Drawing::Point(5, 136);
			this->cbJumpDownAnyTile->Name = L"cbJumpDownAnyTile";
			this->cbJumpDownAnyTile->Size = System::Drawing::Size(119, 17);
			this->cbJumpDownAnyTile->TabIndex = 4;
			this->cbJumpDownAnyTile->Text = L"Jump Down Any Tile";
			this->cbJumpDownAnyTile->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->cbJumpDownAnyTile->UseVisualStyleBackColor = false;
			this->cbJumpDownAnyTile->CheckedChanged += gcnew System::EventHandler(this, &MainForm::cbJumpDownAnyTile_CheckedChanged);
			// 
			// cbNoPlayerDeath
			// 
			this->cbNoPlayerDeath->AutoSize = true;
			this->cbNoPlayerDeath->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->cbNoPlayerDeath->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cbNoPlayerDeath->ForeColor = System::Drawing::Color::White;
			this->cbNoPlayerDeath->Location = System::Drawing::Point(5, 114);
			this->cbNoPlayerDeath->Name = L"cbNoPlayerDeath";
			this->cbNoPlayerDeath->Size = System::Drawing::Size(101, 17);
			this->cbNoPlayerDeath->TabIndex = 9;
			this->cbNoPlayerDeath->Text = L"No Player Death";
			this->cbNoPlayerDeath->UseVisualStyleBackColor = false;
			this->cbNoPlayerDeath->CheckedChanged += gcnew System::EventHandler(this, &MainForm::cbNoPlayerDeath_CheckedChanged);
			// 
			// cbUnlimitedAttack
			// 
			this->cbUnlimitedAttack->AutoSize = true;
			this->cbUnlimitedAttack->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->cbUnlimitedAttack->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cbUnlimitedAttack->ForeColor = System::Drawing::Color::White;
			this->cbUnlimitedAttack->Location = System::Drawing::Point(5, 27);
			this->cbUnlimitedAttack->Name = L"cbUnlimitedAttack";
			this->cbUnlimitedAttack->Size = System::Drawing::Size(100, 17);
			this->cbUnlimitedAttack->TabIndex = 6;
			this->cbUnlimitedAttack->Text = L"Unlimited Attack";
			this->cbUnlimitedAttack->UseVisualStyleBackColor = false;
			this->cbUnlimitedAttack->CheckedChanged += gcnew System::EventHandler(this, &MainForm::cbUnlimitedAttack_CheckedChanged);
			// 
			// panel11
			// 
			this->panel11->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel11->Controls->Add(this->cbMouseFly);
			this->panel11->Controls->Add(this->label49);
			this->panel11->Controls->Add(this->label50);
			this->panel11->Controls->Add(this->tbMouseTeleport);
			this->panel11->Controls->Add(this->tbClickTeleport);
			this->panel11->Controls->Add(this->cbSwimInAir);
			this->panel11->Controls->Add(this->cbClickTeleport);
			this->panel11->Controls->Add(this->cbMouseTeleport);
			this->panel11->Location = System::Drawing::Point(133, 6);
			this->panel11->Name = L"panel11";
			this->panel11->Size = System::Drawing::Size(251, 72);
			this->panel11->TabIndex = 4;
			// 
			// cbMouseFly
			// 
			this->cbMouseFly->AutoSize = true;
			this->cbMouseFly->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->cbMouseFly->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cbMouseFly->ForeColor = System::Drawing::Color::White;
			this->cbMouseFly->Location = System::Drawing::Point(5, 50);
			this->cbMouseFly->Name = L"cbMouseFly";
			this->cbMouseFly->Size = System::Drawing::Size(71, 17);
			this->cbMouseFly->TabIndex = 9;
			this->cbMouseFly->Text = L"Mouse Fly";
			this->cbMouseFly->UseVisualStyleBackColor = false;
			this->cbMouseFly->CheckedChanged += gcnew System::EventHandler(this, &MainForm::cbMouseFly_CheckedChanged);
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->Location = System::Drawing::Point(108, 30);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(73, 13);
			this->label49->TabIndex = 8;
			this->label49->Text = L"Interval [ms]:";
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->Location = System::Drawing::Point(108, 6);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(73, 13);
			this->label50->TabIndex = 7;
			this->label50->Text = L"Interval [ms]:";
			// 
			// tbMouseTeleport
			// 
			this->tbMouseTeleport->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->tbMouseTeleport->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbMouseTeleport->ForeColor = System::Drawing::Color::White;
			this->tbMouseTeleport->Location = System::Drawing::Point(188, 28);
			this->tbMouseTeleport->Name = L"tbMouseTeleport";
			this->tbMouseTeleport->Size = System::Drawing::Size(49, 21);
			this->tbMouseTeleport->TabIndex = 4;
			this->tbMouseTeleport->Text = L"100";
			this->tbMouseTeleport->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->tbMouseTeleport->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::tbMouseTeleport_KeyPress);
			// 
			// tbClickTeleport
			// 
			this->tbClickTeleport->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->tbClickTeleport->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbClickTeleport->ForeColor = System::Drawing::Color::White;
			this->tbClickTeleport->Location = System::Drawing::Point(188, 4);
			this->tbClickTeleport->Name = L"tbClickTeleport";
			this->tbClickTeleport->Size = System::Drawing::Size(49, 21);
			this->tbClickTeleport->TabIndex = 3;
			this->tbClickTeleport->Text = L"100";
			this->tbClickTeleport->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->tbClickTeleport->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::tbClickTeleport_KeyPress);
			// 
			// cbSwimInAir
			// 
			this->cbSwimInAir->AutoSize = true;
			this->cbSwimInAir->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->cbSwimInAir->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cbSwimInAir->ForeColor = System::Drawing::Color::White;
			this->cbSwimInAir->Location = System::Drawing::Point(135, 50);
			this->cbSwimInAir->Name = L"cbSwimInAir";
			this->cbSwimInAir->Size = System::Drawing::Size(76, 17);
			this->cbSwimInAir->TabIndex = 7;
			this->cbSwimInAir->Text = L"Swim In Air";
			this->cbSwimInAir->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->cbSwimInAir->UseVisualStyleBackColor = false;
			this->cbSwimInAir->CheckedChanged += gcnew System::EventHandler(this, &MainForm::cbSwimInAir_CheckedChanged);
			// 
			// cbClickTeleport
			// 
			this->cbClickTeleport->AutoSize = true;
			this->cbClickTeleport->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->cbClickTeleport->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cbClickTeleport->ForeColor = System::Drawing::Color::White;
			this->cbClickTeleport->Location = System::Drawing::Point(5, 5);
			this->cbClickTeleport->Name = L"cbClickTeleport";
			this->cbClickTeleport->Size = System::Drawing::Size(87, 17);
			this->cbClickTeleport->TabIndex = 1;
			this->cbClickTeleport->Text = L"Click Teleport";
			this->cbClickTeleport->UseVisualStyleBackColor = false;
			this->cbClickTeleport->CheckedChanged += gcnew System::EventHandler(this, &MainForm::cbClickTeleport_CheckedChanged);
			// 
			// cbMouseTeleport
			// 
			this->cbMouseTeleport->AutoSize = true;
			this->cbMouseTeleport->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->cbMouseTeleport->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cbMouseTeleport->ForeColor = System::Drawing::Color::White;
			this->cbMouseTeleport->Location = System::Drawing::Point(5, 27);
			this->cbMouseTeleport->Name = L"cbMouseTeleport";
			this->cbMouseTeleport->Size = System::Drawing::Size(97, 17);
			this->cbMouseTeleport->TabIndex = 2;
			this->cbMouseTeleport->Text = L"Mouse Teleport";
			this->cbMouseTeleport->UseVisualStyleBackColor = false;
			this->cbMouseTeleport->CheckedChanged += gcnew System::EventHandler(this, &MainForm::cbMouseTeleport_CheckedChanged);
			// 
			// panel10
			// 
			this->panel10->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel10->Controls->Add(this->cbFullGodmode);
			this->panel10->Controls->Add(this->cbMissGodmode);
			this->panel10->Controls->Add(this->cbBlinkGodmode);
			this->panel10->Location = System::Drawing::Point(6, 6);
			this->panel10->Name = L"panel10";
			this->panel10->Size = System::Drawing::Size(123, 72);
			this->panel10->TabIndex = 0;
			// 
			// cbFullGodmode
			// 
			this->cbFullGodmode->AutoSize = true;
			this->cbFullGodmode->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->cbFullGodmode->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cbFullGodmode->ForeColor = System::Drawing::Color::White;
			this->cbFullGodmode->Location = System::Drawing::Point(5, 5);
			this->cbFullGodmode->Name = L"cbFullGodmode";
			this->cbFullGodmode->Size = System::Drawing::Size(87, 17);
			this->cbFullGodmode->TabIndex = 6;
			this->cbFullGodmode->Text = L"Full Godmode";
			this->cbFullGodmode->UseVisualStyleBackColor = false;
			this->cbFullGodmode->CheckedChanged += gcnew System::EventHandler(this, &MainForm::cbFullGodmode_CheckedChanged);
			// 
			// cbMissGodmode
			// 
			this->cbMissGodmode->AutoSize = true;
			this->cbMissGodmode->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->cbMissGodmode->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cbMissGodmode->ForeColor = System::Drawing::Color::White;
			this->cbMissGodmode->Location = System::Drawing::Point(5, 27);
			this->cbMissGodmode->Name = L"cbMissGodmode";
			this->cbMissGodmode->Size = System::Drawing::Size(91, 17);
			this->cbMissGodmode->TabIndex = 5;
			this->cbMissGodmode->Text = L"Miss Godmode";
			this->cbMissGodmode->UseVisualStyleBackColor = false;
			this->cbMissGodmode->CheckedChanged += gcnew System::EventHandler(this, &MainForm::cbMissGodmode_CheckedChanged);
			// 
			// cbBlinkGodmode
			// 
			this->cbBlinkGodmode->AutoSize = true;
			this->cbBlinkGodmode->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->cbBlinkGodmode->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cbBlinkGodmode->ForeColor = System::Drawing::Color::White;
			this->cbBlinkGodmode->Location = System::Drawing::Point(5, 49);
			this->cbBlinkGodmode->Name = L"cbBlinkGodmode";
			this->cbBlinkGodmode->Size = System::Drawing::Size(92, 17);
			this->cbBlinkGodmode->TabIndex = 4;
			this->cbBlinkGodmode->Text = L"Blink Godmode";
			this->cbBlinkGodmode->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->cbBlinkGodmode->UseVisualStyleBackColor = false;
			this->cbBlinkGodmode->CheckedChanged += gcnew System::EventHandler(this, &MainForm::cbBlinkGodmode_CheckedChanged);
			// 
			// tabPage20
			// 
			this->tabPage20->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->tabPage20->Controls->Add(this->label42);
			this->tabPage20->Controls->Add(this->panel27);
			this->tabPage20->Controls->Add(this->panel26);
			this->tabPage20->Location = System::Drawing::Point(4, 22);
			this->tabPage20->Name = L"tabPage20";
			this->tabPage20->Padding = System::Windows::Forms::Padding(3);
			this->tabPage20->Size = System::Drawing::Size(390, 335);
			this->tabPage20->TabIndex = 7;
			this->tabPage20->Text = L"Hacks II";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->BackColor = System::Drawing::Color::Transparent;
			this->label42->Location = System::Drawing::Point(9, 9);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(87, 13);
			this->label42->TabIndex = 24;
			this->label42->Text = L"Teleport to (x,y)";
			// 
			// panel27
			// 
			this->panel27->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel27->Controls->Add(this->bSpawnControl);
			this->panel27->Controls->Add(this->panel1);
			this->panel27->Controls->Add(this->label65);
			this->panel27->Controls->Add(this->lvSpawnControl);
			this->panel27->Controls->Add(this->bSpawnControlDelete);
			this->panel27->Location = System::Drawing::Point(4, 173);
			this->panel27->Name = L"panel27";
			this->panel27->Size = System::Drawing::Size(383, 158);
			this->panel27->TabIndex = 23;
			// 
			// bSpawnControl
			// 
			this->bSpawnControl->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->bSpawnControl->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bSpawnControl->Location = System::Drawing::Point(208, 128);
			this->bSpawnControl->Name = L"bSpawnControl";
			this->bSpawnControl->Size = System::Drawing::Size(165, 25);
			this->bSpawnControl->TabIndex = 41;
			this->bSpawnControl->Text = L"Enable Spawn Control";
			this->bSpawnControl->UseVisualStyleBackColor = true;
			this->bSpawnControl->Click += gcnew System::EventHandler(this, &MainForm::bSpawnControl_Click);
			// 
			// panel1
			// 
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->tbSpawnControlMapID);
			this->panel1->Controls->Add(this->label71);
			this->panel1->Controls->Add(this->tbSpawnControlY);
			this->panel1->Controls->Add(this->bSpawnControlAdd);
			this->panel1->Controls->Add(this->tbSpawnControlX);
			this->panel1->Controls->Add(this->label69);
			this->panel1->Controls->Add(this->bSpawnControlGetCurrentLocation);
			this->panel1->Controls->Add(this->label68);
			this->panel1->Location = System::Drawing::Point(208, 20);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(165, 103);
			this->panel1->TabIndex = 40;
			// 
			// tbSpawnControlMapID
			// 
			this->tbSpawnControlMapID->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->tbSpawnControlMapID->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbSpawnControlMapID->ForeColor = System::Drawing::Color::White;
			this->tbSpawnControlMapID->Location = System::Drawing::Point(101, 3);
			this->tbSpawnControlMapID->Name = L"tbSpawnControlMapID";
			this->tbSpawnControlMapID->Size = System::Drawing::Size(57, 21);
			this->tbSpawnControlMapID->TabIndex = 51;
			this->tbSpawnControlMapID->Text = L"000000000";
			this->tbSpawnControlMapID->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->tbSpawnControlMapID->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::tbSpawnControlMapID_KeyPress);
			// 
			// label71
			// 
			this->label71->AutoSize = true;
			this->label71->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F));
			this->label71->Location = System::Drawing::Point(55, 7);
			this->label71->Name = L"label71";
			this->label71->Size = System::Drawing::Size(48, 13);
			this->label71->TabIndex = 38;
			this->label71->Text = L"Map ID: ";
			// 
			// tbSpawnControlY
			// 
			this->tbSpawnControlY->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->tbSpawnControlY->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbSpawnControlY->ForeColor = System::Drawing::Color::White;
			this->tbSpawnControlY->Location = System::Drawing::Point(101, 27);
			this->tbSpawnControlY->Name = L"tbSpawnControlY";
			this->tbSpawnControlY->Size = System::Drawing::Size(57, 21);
			this->tbSpawnControlY->TabIndex = 30;
			this->tbSpawnControlY->Text = L"0";
			this->tbSpawnControlY->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->tbSpawnControlY->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::tbSpawnControlY_KeyPress);
			// 
			// bSpawnControlAdd
			// 
			this->bSpawnControlAdd->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->bSpawnControlAdd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bSpawnControlAdd->Location = System::Drawing::Point(5, 77);
			this->bSpawnControlAdd->Name = L"bSpawnControlAdd";
			this->bSpawnControlAdd->Size = System::Drawing::Size(153, 21);
			this->bSpawnControlAdd->TabIndex = 26;
			this->bSpawnControlAdd->Text = L"Add";
			this->bSpawnControlAdd->UseVisualStyleBackColor = true;
			this->bSpawnControlAdd->Click += gcnew System::EventHandler(this, &MainForm::bSpawnControlAdd_Click);
			// 
			// tbSpawnControlX
			// 
			this->tbSpawnControlX->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->tbSpawnControlX->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbSpawnControlX->ForeColor = System::Drawing::Color::White;
			this->tbSpawnControlX->Location = System::Drawing::Point(20, 27);
			this->tbSpawnControlX->Name = L"tbSpawnControlX";
			this->tbSpawnControlX->Size = System::Drawing::Size(57, 21);
			this->tbSpawnControlX->TabIndex = 28;
			this->tbSpawnControlX->Text = L"0";
			this->tbSpawnControlX->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->tbSpawnControlX->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::tbSpawnControlX_KeyPress);
			// 
			// label69
			// 
			this->label69->AutoSize = true;
			this->label69->BackColor = System::Drawing::Color::Transparent;
			this->label69->Location = System::Drawing::Point(2, 31);
			this->label69->Name = L"label69";
			this->label69->Size = System::Drawing::Size(17, 13);
			this->label69->TabIndex = 29;
			this->label69->Text = L"X:";
			// 
			// bSpawnControlGetCurrentLocation
			// 
			this->bSpawnControlGetCurrentLocation->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->bSpawnControlGetCurrentLocation->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bSpawnControlGetCurrentLocation->Location = System::Drawing::Point(5, 51);
			this->bSpawnControlGetCurrentLocation->Name = L"bSpawnControlGetCurrentLocation";
			this->bSpawnControlGetCurrentLocation->Size = System::Drawing::Size(153, 23);
			this->bSpawnControlGetCurrentLocation->TabIndex = 31;
			this->bSpawnControlGetCurrentLocation->Text = L"Get Current Location";
			this->bSpawnControlGetCurrentLocation->UseVisualStyleBackColor = true;
			this->bSpawnControlGetCurrentLocation->Click += gcnew System::EventHandler(this, &MainForm::bSpawnControlGetCurrentLocation_Click);
			// 
			// label68
			// 
			this->label68->AutoSize = true;
			this->label68->BackColor = System::Drawing::Color::Transparent;
			this->label68->Location = System::Drawing::Point(83, 31);
			this->label68->Name = L"label68";
			this->label68->Size = System::Drawing::Size(17, 13);
			this->label68->TabIndex = 32;
			this->label68->Text = L"Y:";
			// 
			// label65
			// 
			this->label65->AutoSize = true;
			this->label65->BackColor = System::Drawing::Color::Transparent;
			this->label65->Location = System::Drawing::Point(3, 2);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(81, 13);
			this->label65->TabIndex = 25;
			this->label65->Text = L"Spawn Control:";
			// 
			// lvSpawnControl
			// 
			this->lvSpawnControl->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->lvSpawnControl->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lvSpawnControl->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(3) {
				this->columnHeader3,
					this->columnHeader4, this->columnHeader5
			});
			this->lvSpawnControl->ForeColor = System::Drawing::Color::White;
			this->lvSpawnControl->FullRowSelect = true;
			this->lvSpawnControl->HeaderStyle = System::Windows::Forms::ColumnHeaderStyle::Nonclickable;
			this->lvSpawnControl->Location = System::Drawing::Point(4, 20);
			this->lvSpawnControl->Name = L"lvSpawnControl";
			this->lvSpawnControl->Size = System::Drawing::Size(197, 103);
			this->lvSpawnControl->TabIndex = 25;
			this->lvSpawnControl->UseCompatibleStateImageBehavior = false;
			this->lvSpawnControl->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader3
			// 
			this->columnHeader3->Text = L"Map ID:";
			this->columnHeader3->Width = 70;
			// 
			// columnHeader4
			// 
			this->columnHeader4->Text = L"X:";
			this->columnHeader4->Width = 50;
			// 
			// columnHeader5
			// 
			this->columnHeader5->Text = L"Y:";
			this->columnHeader5->Width = 50;
			// 
			// bSpawnControlDelete
			// 
			this->bSpawnControlDelete->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->bSpawnControlDelete->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bSpawnControlDelete->Location = System::Drawing::Point(4, 128);
			this->bSpawnControlDelete->Name = L"bSpawnControlDelete";
			this->bSpawnControlDelete->Size = System::Drawing::Size(197, 25);
			this->bSpawnControlDelete->TabIndex = 27;
			this->bSpawnControlDelete->Text = L"Delete";
			this->bSpawnControlDelete->UseVisualStyleBackColor = true;
			this->bSpawnControlDelete->Click += gcnew System::EventHandler(this, &MainForm::bSpawnControlDelete_Click);
			// 
			// panel26
			// 
			this->panel26->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel26->Controls->Add(this->tbTeleportLoopDelay);
			this->panel26->Controls->Add(this->label86);
			this->panel26->Controls->Add(this->bTeleportLoop);
			this->panel26->Controls->Add(this->bTeleportDelete);
			this->panel26->Controls->Add(this->bTeleport);
			this->panel26->Controls->Add(this->lvTeleport);
			this->panel26->Controls->Add(this->panel18);
			this->panel26->Location = System::Drawing::Point(4, 5);
			this->panel26->Name = L"panel26";
			this->panel26->Size = System::Drawing::Size(383, 165);
			this->panel26->TabIndex = 22;
			// 
			// tbTeleportLoopDelay
			// 
			this->tbTeleportLoopDelay->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->tbTeleportLoopDelay->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbTeleportLoopDelay->ForeColor = System::Drawing::Color::White;
			this->tbTeleportLoopDelay->Location = System::Drawing::Point(318, 138);
			this->tbTeleportLoopDelay->Name = L"tbTeleportLoopDelay";
			this->tbTeleportLoopDelay->Size = System::Drawing::Size(57, 21);
			this->tbTeleportLoopDelay->TabIndex = 33;
			this->tbTeleportLoopDelay->Text = L"250";
			this->tbTeleportLoopDelay->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->tbTeleportLoopDelay->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::tbTeleportLoopDelay_KeyPress);
			// 
			// label86
			// 
			this->label86->AutoSize = true;
			this->label86->BackColor = System::Drawing::Color::Transparent;
			this->label86->Location = System::Drawing::Point(278, 140);
			this->label86->Name = L"label86";
			this->label86->Size = System::Drawing::Size(38, 13);
			this->label86->TabIndex = 34;
			this->label86->Text = L"Delay:";
			// 
			// bTeleportLoop
			// 
			this->bTeleportLoop->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->bTeleportLoop->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bTeleportLoop->Location = System::Drawing::Point(204, 135);
			this->bTeleportLoop->Name = L"bTeleportLoop";
			this->bTeleportLoop->Size = System::Drawing::Size(68, 25);
			this->bTeleportLoop->TabIndex = 32;
			this->bTeleportLoop->Text = L"Loop";
			this->bTeleportLoop->UseVisualStyleBackColor = true;
			this->bTeleportLoop->Click += gcnew System::EventHandler(this, &MainForm::bTeleportLoop_Click);
			// 
			// bTeleportDelete
			// 
			this->bTeleportDelete->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->bTeleportDelete->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bTeleportDelete->Location = System::Drawing::Point(3, 135);
			this->bTeleportDelete->Name = L"bTeleportDelete";
			this->bTeleportDelete->Size = System::Drawing::Size(97, 25);
			this->bTeleportDelete->TabIndex = 31;
			this->bTeleportDelete->Text = L"Delete";
			this->bTeleportDelete->UseVisualStyleBackColor = true;
			this->bTeleportDelete->Click += gcnew System::EventHandler(this, &MainForm::bTeleportDelete_Click);
			// 
			// bTeleport
			// 
			this->bTeleport->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->bTeleport->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bTeleport->Location = System::Drawing::Point(103, 135);
			this->bTeleport->Name = L"bTeleport";
			this->bTeleport->Size = System::Drawing::Size(97, 25);
			this->bTeleport->TabIndex = 30;
			this->bTeleport->Text = L"Teleport";
			this->bTeleport->UseVisualStyleBackColor = true;
			this->bTeleport->Click += gcnew System::EventHandler(this, &MainForm::bTeleport_Click);
			// 
			// lvTeleport
			// 
			this->lvTeleport->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->lvTeleport->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lvTeleport->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(2) { this->columnHeader1, this->columnHeader2 });
			this->lvTeleport->ForeColor = System::Drawing::Color::White;
			this->lvTeleport->FullRowSelect = true;
			this->lvTeleport->HeaderStyle = System::Windows::Forms::ColumnHeaderStyle::Nonclickable;
			this->lvTeleport->Location = System::Drawing::Point(3, 19);
			this->lvTeleport->Name = L"lvTeleport";
			this->lvTeleport->Size = System::Drawing::Size(197, 113);
			this->lvTeleport->TabIndex = 29;
			this->lvTeleport->UseCompatibleStateImageBehavior = false;
			this->lvTeleport->View = System::Windows::Forms::View::Details;
			this->lvTeleport->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::lvTeleport_MouseDoubleClick);
			// 
			// columnHeader1
			// 
			this->columnHeader1->Text = L"X:";
			this->columnHeader1->Width = 90;
			// 
			// columnHeader2
			// 
			this->columnHeader2->Text = L"Y:";
			this->columnHeader2->Width = 90;
			// 
			// panel18
			// 
			this->panel18->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel18->Controls->Add(this->bTeleportGetCurrentLocation);
			this->panel18->Controls->Add(this->label64);
			this->panel18->Controls->Add(this->tbTeleportX);
			this->panel18->Controls->Add(this->bTeleportAdd);
			this->panel18->Controls->Add(this->label63);
			this->panel18->Controls->Add(this->tbTeleportY);
			this->panel18->Location = System::Drawing::Point(204, 19);
			this->panel18->Name = L"panel18";
			this->panel18->Size = System::Drawing::Size(173, 113);
			this->panel18->TabIndex = 35;
			// 
			// bTeleportGetCurrentLocation
			// 
			this->bTeleportGetCurrentLocation->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->bTeleportGetCurrentLocation->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bTeleportGetCurrentLocation->Location = System::Drawing::Point(7, 50);
			this->bTeleportGetCurrentLocation->Name = L"bTeleportGetCurrentLocation";
			this->bTeleportGetCurrentLocation->Size = System::Drawing::Size(156, 25);
			this->bTeleportGetCurrentLocation->TabIndex = 22;
			this->bTeleportGetCurrentLocation->Text = L"Get Current Location";
			this->bTeleportGetCurrentLocation->UseVisualStyleBackColor = true;
			this->bTeleportGetCurrentLocation->Click += gcnew System::EventHandler(this, &MainForm::bTeleportGetCurrentLocation_Click);
			// 
			// label64
			// 
			this->label64->AutoSize = true;
			this->label64->BackColor = System::Drawing::Color::Transparent;
			this->label64->Location = System::Drawing::Point(5, 18);
			this->label64->Name = L"label64";
			this->label64->Size = System::Drawing::Size(17, 13);
			this->label64->TabIndex = 20;
			this->label64->Text = L"X:";
			// 
			// tbTeleportX
			// 
			this->tbTeleportX->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->tbTeleportX->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbTeleportX->ForeColor = System::Drawing::Color::White;
			this->tbTeleportX->Location = System::Drawing::Point(26, 15);
			this->tbTeleportX->Name = L"tbTeleportX";
			this->tbTeleportX->Size = System::Drawing::Size(55, 21);
			this->tbTeleportX->TabIndex = 19;
			this->tbTeleportX->Text = L"0";
			this->tbTeleportX->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->tbTeleportX->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::tbTeleportX_KeyPress);
			// 
			// bTeleportAdd
			// 
			this->bTeleportAdd->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->bTeleportAdd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bTeleportAdd->Location = System::Drawing::Point(7, 80);
			this->bTeleportAdd->Name = L"bTeleportAdd";
			this->bTeleportAdd->Size = System::Drawing::Size(156, 25);
			this->bTeleportAdd->TabIndex = 24;
			this->bTeleportAdd->Text = L"Add to List";
			this->bTeleportAdd->UseVisualStyleBackColor = true;
			this->bTeleportAdd->Click += gcnew System::EventHandler(this, &MainForm::bTeleportAdd_Click);
			// 
			// label63
			// 
			this->label63->AutoSize = true;
			this->label63->BackColor = System::Drawing::Color::Transparent;
			this->label63->Location = System::Drawing::Point(87, 18);
			this->label63->Name = L"label63";
			this->label63->Size = System::Drawing::Size(17, 13);
			this->label63->TabIndex = 23;
			this->label63->Text = L"Y:";
			// 
			// tbTeleportY
			// 
			this->tbTeleportY->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->tbTeleportY->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbTeleportY->ForeColor = System::Drawing::Color::White;
			this->tbTeleportY->Location = System::Drawing::Point(108, 15);
			this->tbTeleportY->Name = L"tbTeleportY";
			this->tbTeleportY->Size = System::Drawing::Size(55, 21);
			this->tbTeleportY->TabIndex = 21;
			this->tbTeleportY->Text = L"0";
			this->tbTeleportY->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->tbTeleportY->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::tbTeleportY_KeyPress);
			// 
			// tabPage6
			// 
			this->tabPage6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->tabPage6->Controls->Add(this->panel28);
			this->tabPage6->Controls->Add(this->panel17);
			this->tabPage6->Controls->Add(this->panel16);
			this->tabPage6->Controls->Add(this->panel15);
			this->tabPage6->Controls->Add(this->panel13);
			this->tabPage6->Controls->Add(this->panel14);
			this->tabPage6->Location = System::Drawing::Point(4, 22);
			this->tabPage6->Name = L"tabPage6";
			this->tabPage6->Size = System::Drawing::Size(390, 335);
			this->tabPage6->TabIndex = 3;
			this->tabPage6->Text = L"Vacs";
			// 
			// panel28
			// 
			this->panel28->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel28->Controls->Add(this->cbFullMapAttack);
			this->panel28->Controls->Add(this->cbItemVac);
			this->panel28->Location = System::Drawing::Point(6, 239);
			this->panel28->Name = L"panel28";
			this->panel28->Size = System::Drawing::Size(132, 57);
			this->panel28->TabIndex = 31;
			// 
			// cbFullMapAttack
			// 
			this->cbFullMapAttack->AutoSize = true;
			this->cbFullMapAttack->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->cbFullMapAttack->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cbFullMapAttack->ForeColor = System::Drawing::Color::White;
			this->cbFullMapAttack->Location = System::Drawing::Point(6, 7);
			this->cbFullMapAttack->Name = L"cbFullMapAttack";
			this->cbFullMapAttack->Size = System::Drawing::Size(96, 17);
			this->cbFullMapAttack->TabIndex = 23;
			this->cbFullMapAttack->Text = L"Full Map Attack";
			this->cbFullMapAttack->UseVisualStyleBackColor = false;
			this->cbFullMapAttack->CheckedChanged += gcnew System::EventHandler(this, &MainForm::cbFullMapAttack_CheckedChanged);
			// 
			// cbItemVac
			// 
			this->cbItemVac->AutoSize = true;
			this->cbItemVac->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->cbItemVac->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cbItemVac->ForeColor = System::Drawing::Color::White;
			this->cbItemVac->Location = System::Drawing::Point(6, 30);
			this->cbItemVac->Name = L"cbItemVac";
			this->cbItemVac->Size = System::Drawing::Size(65, 17);
			this->cbItemVac->TabIndex = 13;
			this->cbItemVac->Text = L"Item Vac";
			this->cbItemVac->UseVisualStyleBackColor = false;
			this->cbItemVac->CheckedChanged += gcnew System::EventHandler(this, &MainForm::cbItemVac_CheckedChanged);
			// 
			// panel17
			// 
			this->panel17->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel17->Controls->Add(this->checkBox3);
			this->panel17->Controls->Add(this->cbUEMI);
			this->panel17->Controls->Add(this->textBox4);
			this->panel17->Controls->Add(this->label72);
			this->panel17->Controls->Add(this->label87);
			this->panel17->Controls->Add(this->textBox5);
			this->panel17->Location = System::Drawing::Point(6, 178);
			this->panel17->Name = L"panel17";
			this->panel17->Size = System::Drawing::Size(132, 57);
			this->panel17->TabIndex = 30;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->checkBox3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->checkBox3->ForeColor = System::Drawing::Color::White;
			this->checkBox3->Location = System::Drawing::Point(5, 31);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(47, 17);
			this->checkBox3->TabIndex = 32;
			this->checkBox3->Text = L"dEMI";
			this->checkBox3->UseVisualStyleBackColor = false;
			// 
			// cbUEMI
			// 
			this->cbUEMI->AutoSize = true;
			this->cbUEMI->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->cbUEMI->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cbUEMI->ForeColor = System::Drawing::Color::White;
			this->cbUEMI->Location = System::Drawing::Point(5, 5);
			this->cbUEMI->Name = L"cbUEMI";
			this->cbUEMI->Size = System::Drawing::Size(47, 17);
			this->cbUEMI->TabIndex = 24;
			this->cbUEMI->Text = L"uEMI";
			this->cbUEMI->UseVisualStyleBackColor = false;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox4->ForeColor = System::Drawing::Color::White;
			this->textBox4->Location = System::Drawing::Point(87, 29);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(40, 21);
			this->textBox4->TabIndex = 28;
			this->textBox4->Text = L"0";
			this->textBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label72
			// 
			this->label72->AutoSize = true;
			this->label72->BackColor = System::Drawing::Color::Transparent;
			this->label72->Location = System::Drawing::Point(70, 32);
			this->label72->Name = L"label72";
			this->label72->Size = System::Drawing::Size(17, 13);
			this->label72->TabIndex = 29;
			this->label72->Text = L"Y:";
			// 
			// label87
			// 
			this->label87->AutoSize = true;
			this->label87->BackColor = System::Drawing::Color::Transparent;
			this->label87->Location = System::Drawing::Point(70, 7);
			this->label87->Name = L"label87";
			this->label87->Size = System::Drawing::Size(17, 13);
			this->label87->TabIndex = 27;
			this->label87->Text = L"X:";
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->textBox5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox5->ForeColor = System::Drawing::Color::White;
			this->textBox5->Location = System::Drawing::Point(87, 4);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(40, 21);
			this->textBox5->TabIndex = 26;
			this->textBox5->Text = L"30";
			this->textBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// panel16
			// 
			this->panel16->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel16->Controls->Add(this->panel19);
			this->panel16->Controls->Add(this->tbDupeXMob);
			this->panel16->Controls->Add(this->label60);
			this->panel16->Controls->Add(this->bDupeXResetLocation);
			this->panel16->Controls->Add(this->cbDupeX);
			this->panel16->Location = System::Drawing::Point(142, 104);
			this->panel16->Name = L"panel16";
			this->panel16->Size = System::Drawing::Size(245, 70);
			this->panel16->TabIndex = 9;
			// 
			// panel19
			// 
			this->panel19->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel19->Controls->Add(this->tbMMCX);
			this->panel19->Controls->Add(this->rbMMCMousePos);
			this->panel19->Controls->Add(this->rbMMCCharPos);
			this->panel19->Controls->Add(this->bMMCReset);
			this->panel19->Controls->Add(this->tbMMCY);
			this->panel19->Controls->Add(this->cbMMC);
			this->panel19->Controls->Add(this->label62);
			this->panel19->Controls->Add(this->label67);
			this->panel19->Location = System::Drawing::Point(100, -3);
			this->panel19->Name = L"panel19";
			this->panel19->Size = System::Drawing::Size(143, 72);
			this->panel19->TabIndex = 11;
			// 
			// tbMMCX
			// 
			this->tbMMCX->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->tbMMCX->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbMMCX->ForeColor = System::Drawing::Color::White;
			this->tbMMCX->Location = System::Drawing::Point(19, 46);
			this->tbMMCX->Name = L"tbMMCX";
			this->tbMMCX->Size = System::Drawing::Size(45, 21);
			this->tbMMCX->TabIndex = 16;
			this->tbMMCX->Text = L"30";
			this->tbMMCX->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->tbMMCX->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::tbMMCX_KeyPress);
			// 
			// rbMMCMousePos
			// 
			this->rbMMCMousePos->AutoSize = true;
			this->rbMMCMousePos->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->rbMMCMousePos->Location = System::Drawing::Point(68, 28);
			this->rbMMCMousePos->Name = L"rbMMCMousePos";
			this->rbMMCMousePos->Size = System::Drawing::Size(75, 17);
			this->rbMMCMousePos->TabIndex = 11;
			this->rbMMCMousePos->Text = L"Mouse Pos";
			this->rbMMCMousePos->UseVisualStyleBackColor = false;
			// 
			// rbMMCCharPos
			// 
			this->rbMMCCharPos->AutoSize = true;
			this->rbMMCCharPos->Checked = true;
			this->rbMMCCharPos->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->rbMMCCharPos->Location = System::Drawing::Point(2, 28);
			this->rbMMCCharPos->Name = L"rbMMCCharPos";
			this->rbMMCCharPos->Size = System::Drawing::Size(67, 17);
			this->rbMMCCharPos->TabIndex = 12;
			this->rbMMCCharPos->TabStop = true;
			this->rbMMCCharPos->Text = L"Char Pos";
			this->rbMMCCharPos->UseVisualStyleBackColor = true;
			// 
			// bMMCReset
			// 
			this->bMMCReset->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->bMMCReset->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bMMCReset->Location = System::Drawing::Point(58, 5);
			this->bMMCReset->Name = L"bMMCReset";
			this->bMMCReset->Size = System::Drawing::Size(80, 21);
			this->bMMCReset->TabIndex = 16;
			this->bMMCReset->Text = L"Reset";
			this->bMMCReset->UseVisualStyleBackColor = true;
			// 
			// tbMMCY
			// 
			this->tbMMCY->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->tbMMCY->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbMMCY->ForeColor = System::Drawing::Color::White;
			this->tbMMCY->Location = System::Drawing::Point(92, 46);
			this->tbMMCY->Name = L"tbMMCY";
			this->tbMMCY->Size = System::Drawing::Size(45, 21);
			this->tbMMCY->TabIndex = 18;
			this->tbMMCY->Text = L"0";
			this->tbMMCY->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->tbMMCY->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::tbMMCY_KeyPress);
			// 
			// cbMMC
			// 
			this->cbMMC->AutoSize = true;
			this->cbMMC->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->cbMMC->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cbMMC->ForeColor = System::Drawing::Color::White;
			this->cbMMC->Location = System::Drawing::Point(6, 5);
			this->cbMMC->Name = L"cbMMC";
			this->cbMMC->Size = System::Drawing::Size(46, 17);
			this->cbMMC->TabIndex = 15;
			this->cbMMC->Text = L"MMC";
			this->cbMMC->UseVisualStyleBackColor = false;
			// 
			// label62
			// 
			this->label62->AutoSize = true;
			this->label62->BackColor = System::Drawing::Color::Transparent;
			this->label62->Location = System::Drawing::Point(74, 50);
			this->label62->Name = L"label62";
			this->label62->Size = System::Drawing::Size(17, 13);
			this->label62->TabIndex = 19;
			this->label62->Text = L"Y:";
			// 
			// label67
			// 
			this->label67->AutoSize = true;
			this->label67->BackColor = System::Drawing::Color::Transparent;
			this->label67->Location = System::Drawing::Point(2, 50);
			this->label67->Name = L"label67";
			this->label67->Size = System::Drawing::Size(17, 13);
			this->label67->TabIndex = 17;
			this->label67->Text = L"X:";
			// 
			// tbDupeXMob
			// 
			this->tbDupeXMob->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->tbDupeXMob->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbDupeXMob->ForeColor = System::Drawing::Color::White;
			this->tbDupeXMob->Location = System::Drawing::Point(62, 18);
			this->tbDupeXMob->Name = L"tbDupeXMob";
			this->tbDupeXMob->Size = System::Drawing::Size(35, 21);
			this->tbDupeXMob->TabIndex = 16;
			this->tbDupeXMob->Text = L"0";
			this->tbDupeXMob->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->tbDupeXMob->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::tbDupeXMob_KeyPress);
			// 
			// label60
			// 
			this->label60->AutoSize = true;
			this->label60->Location = System::Drawing::Point(3, 23);
			this->label60->Name = L"label60";
			this->label60->Size = System::Drawing::Size(60, 13);
			this->label60->TabIndex = 17;
			this->label60->Text = L"Num Mobs:";
			// 
			// bDupeXResetLocation
			// 
			this->bDupeXResetLocation->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->bDupeXResetLocation->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bDupeXResetLocation->Location = System::Drawing::Point(3, 43);
			this->bDupeXResetLocation->Name = L"bDupeXResetLocation";
			this->bDupeXResetLocation->Size = System::Drawing::Size(94, 21);
			this->bDupeXResetLocation->TabIndex = 15;
			this->bDupeXResetLocation->Text = L"Reset Location";
			this->bDupeXResetLocation->UseVisualStyleBackColor = true;
			// 
			// cbDupeX
			// 
			this->cbDupeX->AutoSize = true;
			this->cbDupeX->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->cbDupeX->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cbDupeX->ForeColor = System::Drawing::Color::White;
			this->cbDupeX->Location = System::Drawing::Point(6, 1);
			this->cbDupeX->Name = L"cbDupeX";
			this->cbDupeX->Size = System::Drawing::Size(54, 17);
			this->cbDupeX->TabIndex = 1;
			this->cbDupeX->Text = L"DupeX";
			this->cbDupeX->UseVisualStyleBackColor = false;
			// 
			// panel15
			// 
			this->panel15->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel15->Controls->Add(this->tbWallVacRangeY);
			this->panel15->Controls->Add(this->label61);
			this->panel15->Controls->Add(this->bGetCurrentLocation);
			this->panel15->Controls->Add(this->tbWallVacRangeX);
			this->panel15->Controls->Add(this->label59);
			this->panel15->Controls->Add(this->tbWallVacY);
			this->panel15->Controls->Add(this->label51);
			this->panel15->Controls->Add(this->tbWallVacX);
			this->panel15->Controls->Add(this->label52);
			this->panel15->Controls->Add(this->cbWallVac);
			this->panel15->Location = System::Drawing::Point(142, 4);
			this->panel15->Name = L"panel15";
			this->panel15->Size = System::Drawing::Size(245, 96);
			this->panel15->TabIndex = 8;
			// 
			// tbWallVacRangeY
			// 
			this->tbWallVacRangeY->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->tbWallVacRangeY->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbWallVacRangeY->ForeColor = System::Drawing::Color::White;
			this->tbWallVacRangeY->Location = System::Drawing::Point(182, 41);
			this->tbWallVacRangeY->Name = L"tbWallVacRangeY";
			this->tbWallVacRangeY->Size = System::Drawing::Size(57, 21);
			this->tbWallVacRangeY->TabIndex = 17;
			this->tbWallVacRangeY->Text = L"0";
			this->tbWallVacRangeY->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->tbWallVacRangeY->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::tbWallVacRangeY_KeyPress);
			// 
			// label61
			// 
			this->label61->AutoSize = true;
			this->label61->BackColor = System::Drawing::Color::Transparent;
			this->label61->Location = System::Drawing::Point(130, 45);
			this->label61->Name = L"label61";
			this->label61->Size = System::Drawing::Size(51, 13);
			this->label61->TabIndex = 18;
			this->label61->Text = L"Range Y:";
			// 
			// bGetCurrentLocation
			// 
			this->bGetCurrentLocation->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->bGetCurrentLocation->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bGetCurrentLocation->Location = System::Drawing::Point(7, 65);
			this->bGetCurrentLocation->Name = L"bGetCurrentLocation";
			this->bGetCurrentLocation->Size = System::Drawing::Size(232, 25);
			this->bGetCurrentLocation->TabIndex = 14;
			this->bGetCurrentLocation->Text = L"Get Current Location";
			this->bGetCurrentLocation->UseVisualStyleBackColor = true;
			// 
			// tbWallVacRangeX
			// 
			this->tbWallVacRangeX->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->tbWallVacRangeX->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbWallVacRangeX->ForeColor = System::Drawing::Color::White;
			this->tbWallVacRangeX->Location = System::Drawing::Point(57, 41);
			this->tbWallVacRangeX->Name = L"tbWallVacRangeX";
			this->tbWallVacRangeX->Size = System::Drawing::Size(57, 21);
			this->tbWallVacRangeX->TabIndex = 15;
			this->tbWallVacRangeX->Text = L"15";
			this->tbWallVacRangeX->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->tbWallVacRangeX->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::tbWallVacRangeX_KeyPress);
			// 
			// label59
			// 
			this->label59->AutoSize = true;
			this->label59->BackColor = System::Drawing::Color::Transparent;
			this->label59->Location = System::Drawing::Point(5, 45);
			this->label59->Name = L"label59";
			this->label59->Size = System::Drawing::Size(51, 13);
			this->label59->TabIndex = 16;
			this->label59->Text = L"Range X:";
			// 
			// tbWallVacY
			// 
			this->tbWallVacY->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->tbWallVacY->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbWallVacY->ForeColor = System::Drawing::Color::White;
			this->tbWallVacY->Location = System::Drawing::Point(182, 3);
			this->tbWallVacY->Name = L"tbWallVacY";
			this->tbWallVacY->Size = System::Drawing::Size(57, 21);
			this->tbWallVacY->TabIndex = 13;
			this->tbWallVacY->Text = L"0";
			this->tbWallVacY->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->tbWallVacY->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::tbWallVacY_KeyPress);
			// 
			// label51
			// 
			this->label51->AutoSize = true;
			this->label51->BackColor = System::Drawing::Color::Transparent;
			this->label51->Location = System::Drawing::Point(164, 7);
			this->label51->Name = L"label51";
			this->label51->Size = System::Drawing::Size(17, 13);
			this->label51->TabIndex = 14;
			this->label51->Text = L"Y:";
			// 
			// tbWallVacX
			// 
			this->tbWallVacX->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->tbWallVacX->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbWallVacX->ForeColor = System::Drawing::Color::White;
			this->tbWallVacX->Location = System::Drawing::Point(101, 3);
			this->tbWallVacX->Name = L"tbWallVacX";
			this->tbWallVacX->Size = System::Drawing::Size(57, 21);
			this->tbWallVacX->TabIndex = 11;
			this->tbWallVacX->Text = L"0";
			this->tbWallVacX->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->tbWallVacX->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::tbWallVacX_KeyPress);
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->BackColor = System::Drawing::Color::Transparent;
			this->label52->Location = System::Drawing::Point(83, 7);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(17, 13);
			this->label52->TabIndex = 12;
			this->label52->Text = L"X:";
			// 
			// cbWallVac
			// 
			this->cbWallVac->AutoSize = true;
			this->cbWallVac->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->cbWallVac->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cbWallVac->ForeColor = System::Drawing::Color::White;
			this->cbWallVac->Location = System::Drawing::Point(7, 5);
			this->cbWallVac->Name = L"cbWallVac";
			this->cbWallVac->Size = System::Drawing::Size(63, 17);
			this->cbWallVac->TabIndex = 1;
			this->cbWallVac->Text = L"Wall Vac";
			this->cbWallVac->UseVisualStyleBackColor = false;
			// 
			// panel13
			// 
			this->panel13->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel13->Controls->Add(this->tbKamiLootItem);
			this->panel13->Controls->Add(this->tbKamiLootInterval);
			this->panel13->Controls->Add(this->label57);
			this->panel13->Controls->Add(this->label58);
			this->panel13->Controls->Add(this->cbKamiLoot);
			this->panel13->Location = System::Drawing::Point(6, 104);
			this->panel13->Name = L"panel13";
			this->panel13->Size = System::Drawing::Size(132, 70);
			this->panel13->TabIndex = 7;
			// 
			// tbKamiLootItem
			// 
			this->tbKamiLootItem->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->tbKamiLootItem->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbKamiLootItem->ForeColor = System::Drawing::Color::White;
			this->tbKamiLootItem->Location = System::Drawing::Point(87, 42);
			this->tbKamiLootItem->Name = L"tbKamiLootItem";
			this->tbKamiLootItem->Size = System::Drawing::Size(40, 21);
			this->tbKamiLootItem->TabIndex = 9;
			this->tbKamiLootItem->Text = L"0";
			this->tbKamiLootItem->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->tbKamiLootItem->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::tbKamiLootItem_KeyPress);
			// 
			// tbKamiLootInterval
			// 
			this->tbKamiLootInterval->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->tbKamiLootInterval->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbKamiLootInterval->ForeColor = System::Drawing::Color::White;
			this->tbKamiLootInterval->Location = System::Drawing::Point(87, 18);
			this->tbKamiLootInterval->Name = L"tbKamiLootInterval";
			this->tbKamiLootInterval->Size = System::Drawing::Size(40, 21);
			this->tbKamiLootInterval->TabIndex = 3;
			this->tbKamiLootInterval->Text = L"200";
			this->tbKamiLootInterval->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->tbKamiLootInterval->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::tbKamiLootInterval_KeyPress);
			// 
			// label57
			// 
			this->label57->AutoSize = true;
			this->label57->Location = System::Drawing::Point(12, 46);
			this->label57->Name = L"label57";
			this->label57->Size = System::Drawing::Size(76, 13);
			this->label57->TabIndex = 10;
			this->label57->Text = L"When Items >";
			// 
			// label58
			// 
			this->label58->AutoSize = true;
			this->label58->BackColor = System::Drawing::Color::Transparent;
			this->label58->Location = System::Drawing::Point(14, 22);
			this->label58->Name = L"label58";
			this->label58->Size = System::Drawing::Size(73, 13);
			this->label58->TabIndex = 7;
			this->label58->Text = L"Interval [ms]:";
			// 
			// cbKamiLoot
			// 
			this->cbKamiLoot->AutoSize = true;
			this->cbKamiLoot->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->cbKamiLoot->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cbKamiLoot->ForeColor = System::Drawing::Color::White;
			this->cbKamiLoot->Location = System::Drawing::Point(6, 1);
			this->cbKamiLoot->Name = L"cbKamiLoot";
			this->cbKamiLoot->Size = System::Drawing::Size(69, 17);
			this->cbKamiLoot->TabIndex = 1;
			this->cbKamiLoot->Text = L"Kami Loot";
			this->cbKamiLoot->UseVisualStyleBackColor = false;
			this->cbKamiLoot->CheckedChanged += gcnew System::EventHandler(this, &MainForm::cbKamiLoot_CheckedChanged);
			// 
			// panel14
			// 
			this->panel14->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel14->Controls->Add(this->tbKamiY);
			this->panel14->Controls->Add(this->label56);
			this->panel14->Controls->Add(this->tbKamiX);
			this->panel14->Controls->Add(this->label55);
			this->panel14->Controls->Add(this->tbKamiMob);
			this->panel14->Controls->Add(this->tbKamiInterval);
			this->panel14->Controls->Add(this->label53);
			this->panel14->Controls->Add(this->label54);
			this->panel14->Controls->Add(this->cbKami);
			this->panel14->Location = System::Drawing::Point(6, 4);
			this->panel14->Name = L"panel14";
			this->panel14->Size = System::Drawing::Size(132, 96);
			this->panel14->TabIndex = 6;
			// 
			// tbKamiY
			// 
			this->tbKamiY->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->tbKamiY->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbKamiY->ForeColor = System::Drawing::Color::White;
			this->tbKamiY->Location = System::Drawing::Point(87, 21);
			this->tbKamiY->Name = L"tbKamiY";
			this->tbKamiY->Size = System::Drawing::Size(40, 21);
			this->tbKamiY->TabIndex = 13;
			this->tbKamiY->Text = L"0";
			this->tbKamiY->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->tbKamiY->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::tbKamiY_KeyPress);
			// 
			// label56
			// 
			this->label56->AutoSize = true;
			this->label56->BackColor = System::Drawing::Color::Transparent;
			this->label56->Location = System::Drawing::Point(69, 25);
			this->label56->Name = L"label56";
			this->label56->Size = System::Drawing::Size(17, 13);
			this->label56->TabIndex = 14;
			this->label56->Text = L"Y:";
			// 
			// tbKamiX
			// 
			this->tbKamiX->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->tbKamiX->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbKamiX->ForeColor = System::Drawing::Color::White;
			this->tbKamiX->Location = System::Drawing::Point(23, 21);
			this->tbKamiX->Name = L"tbKamiX";
			this->tbKamiX->Size = System::Drawing::Size(40, 21);
			this->tbKamiX->TabIndex = 11;
			this->tbKamiX->Text = L"30";
			this->tbKamiX->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->tbKamiX->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::tbKamiX_KeyPress);
			// 
			// label55
			// 
			this->label55->AutoSize = true;
			this->label55->BackColor = System::Drawing::Color::Transparent;
			this->label55->Location = System::Drawing::Point(5, 25);
			this->label55->Name = L"label55";
			this->label55->Size = System::Drawing::Size(17, 13);
			this->label55->TabIndex = 12;
			this->label55->Text = L"X:";
			// 
			// tbKamiMob
			// 
			this->tbKamiMob->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->tbKamiMob->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbKamiMob->ForeColor = System::Drawing::Color::White;
			this->tbKamiMob->Location = System::Drawing::Point(87, 69);
			this->tbKamiMob->Name = L"tbKamiMob";
			this->tbKamiMob->Size = System::Drawing::Size(40, 21);
			this->tbKamiMob->TabIndex = 9;
			this->tbKamiMob->Text = L"0";
			this->tbKamiMob->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->tbKamiMob->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::tbKamiMob_KeyPress);
			// 
			// tbKamiInterval
			// 
			this->tbKamiInterval->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->tbKamiInterval->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbKamiInterval->ForeColor = System::Drawing::Color::White;
			this->tbKamiInterval->Location = System::Drawing::Point(87, 45);
			this->tbKamiInterval->Name = L"tbKamiInterval";
			this->tbKamiInterval->Size = System::Drawing::Size(40, 21);
			this->tbKamiInterval->TabIndex = 3;
			this->tbKamiInterval->Text = L"200";
			this->tbKamiInterval->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->tbKamiInterval->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::tbKamiInterval_KeyPress);
			// 
			// label53
			// 
			this->label53->AutoSize = true;
			this->label53->Location = System::Drawing::Point(14, 73);
			this->label53->Name = L"label53";
			this->label53->Size = System::Drawing::Size(74, 13);
			this->label53->TabIndex = 10;
			this->label53->Text = L"When Mobs >";
			// 
			// label54
			// 
			this->label54->AutoSize = true;
			this->label54->BackColor = System::Drawing::Color::Transparent;
			this->label54->Location = System::Drawing::Point(14, 49);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(73, 13);
			this->label54->TabIndex = 7;
			this->label54->Text = L"Interval [ms]:";
			// 
			// cbKami
			// 
			this->cbKami->AutoSize = true;
			this->cbKami->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->cbKami->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cbKami->ForeColor = System::Drawing::Color::White;
			this->cbKami->Location = System::Drawing::Point(6, 1);
			this->cbKami->Name = L"cbKami";
			this->cbKami->Size = System::Drawing::Size(45, 17);
			this->cbKami->TabIndex = 1;
			this->cbKami->Text = L"Kami";
			this->cbKami->UseVisualStyleBackColor = false;
			this->cbKami->CheckedChanged += gcnew System::EventHandler(this, &MainForm::cbKami_CheckedChanged);
			// 
			// tabPage7
			// 
			this->tabPage7->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->tabPage7->Controls->Add(this->panel21);
			this->tabPage7->Controls->Add(this->panel20);
			this->tabPage7->Location = System::Drawing::Point(4, 22);
			this->tabPage7->Name = L"tabPage7";
			this->tabPage7->Size = System::Drawing::Size(390, 335);
			this->tabPage7->TabIndex = 4;
			this->tabPage7->Text = L"Filters";
			// 
			// panel21
			// 
			this->panel21->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel21->Controls->Add(this->lbMobSearchLog);
			this->panel21->Controls->Add(this->lbMobFilter);
			this->panel21->Controls->Add(this->cbMobFilterLog);
			this->panel21->Controls->Add(this->bMobSearchLogClear);
			this->panel21->Controls->Add(this->rbMobFilterWhiteList);
			this->panel21->Controls->Add(this->tbMobFilterSearch);
			this->panel21->Controls->Add(this->rbMobFilterBlackList);
			this->panel21->Controls->Add(this->label75);
			this->panel21->Controls->Add(this->bMobFilterAdd);
			this->panel21->Controls->Add(this->tbMobFilterID);
			this->panel21->Controls->Add(this->label76);
			this->panel21->Controls->Add(this->label77);
			this->panel21->Controls->Add(this->bMobFilter);
			this->panel21->Location = System::Drawing::Point(4, 168);
			this->panel21->Name = L"panel21";
			this->panel21->Size = System::Drawing::Size(379, 160);
			this->panel21->TabIndex = 30;
			// 
			// lbMobSearchLog
			// 
			this->lbMobSearchLog->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->lbMobSearchLog->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbMobSearchLog->ForeColor = System::Drawing::Color::White;
			this->lbMobSearchLog->FormattingEnabled = true;
			this->lbMobSearchLog->Location = System::Drawing::Point(195, 49);
			this->lbMobSearchLog->Name = L"lbMobSearchLog";
			this->lbMobSearchLog->Size = System::Drawing::Size(179, 80);
			this->lbMobSearchLog->TabIndex = 53;
			this->lbMobSearchLog->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::lbMobSearchLog_MouseDoubleClick);
			// 
			// lbMobFilter
			// 
			this->lbMobFilter->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->lbMobFilter->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbMobFilter->ForeColor = System::Drawing::Color::White;
			this->lbMobFilter->FormattingEnabled = true;
			this->lbMobFilter->Location = System::Drawing::Point(7, 10);
			this->lbMobFilter->Name = L"lbMobFilter";
			this->lbMobFilter->Size = System::Drawing::Size(180, 119);
			this->lbMobFilter->TabIndex = 34;
			this->lbMobFilter->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::lbMobFilter_MouseDoubleClick);
			// 
			// cbMobFilterLog
			// 
			this->cbMobFilterLog->AutoSize = true;
			this->cbMobFilterLog->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->cbMobFilterLog->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cbMobFilterLog->ForeColor = System::Drawing::Color::White;
			this->cbMobFilterLog->Location = System::Drawing::Point(333, 30);
			this->cbMobFilterLog->Name = L"cbMobFilterLog";
			this->cbMobFilterLog->Size = System::Drawing::Size(40, 17);
			this->cbMobFilterLog->TabIndex = 33;
			this->cbMobFilterLog->Text = L"Log";
			this->cbMobFilterLog->UseVisualStyleBackColor = false;
			this->cbMobFilterLog->CheckedChanged += gcnew System::EventHandler(this, &MainForm::cbMobFilterLog_CheckedChanged);
			// 
			// bMobSearchLogClear
			// 
			this->bMobSearchLogClear->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->bMobSearchLogClear->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bMobSearchLogClear->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bMobSearchLogClear->Location = System::Drawing::Point(337, 134);
			this->bMobSearchLogClear->Name = L"bMobSearchLogClear";
			this->bMobSearchLogClear->Size = System::Drawing::Size(36, 20);
			this->bMobSearchLogClear->TabIndex = 29;
			this->bMobSearchLogClear->Text = L"Clear";
			this->bMobSearchLogClear->UseVisualStyleBackColor = true;
			this->bMobSearchLogClear->Click += gcnew System::EventHandler(this, &MainForm::bMobSearchLogClear_Click);
			// 
			// rbMobFilterWhiteList
			// 
			this->rbMobFilterWhiteList->AutoSize = true;
			this->rbMobFilterWhiteList->Checked = true;
			this->rbMobFilterWhiteList->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->rbMobFilterWhiteList->Location = System::Drawing::Point(196, 30);
			this->rbMobFilterWhiteList->Name = L"rbMobFilterWhiteList";
			this->rbMobFilterWhiteList->Size = System::Drawing::Size(68, 17);
			this->rbMobFilterWhiteList->TabIndex = 32;
			this->rbMobFilterWhiteList->TabStop = true;
			this->rbMobFilterWhiteList->Text = L"WhiteList";
			this->rbMobFilterWhiteList->UseVisualStyleBackColor = true;
			this->rbMobFilterWhiteList->CheckedChanged += gcnew System::EventHandler(this, &MainForm::rbMobFilterWhiteList_CheckedChanged);
			// 
			// tbMobFilterSearch
			// 
			this->tbMobFilterSearch->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->tbMobFilterSearch->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbMobFilterSearch->ForeColor = System::Drawing::Color::White;
			this->tbMobFilterSearch->Location = System::Drawing::Point(233, 134);
			this->tbMobFilterSearch->Name = L"tbMobFilterSearch";
			this->tbMobFilterSearch->Size = System::Drawing::Size(98, 21);
			this->tbMobFilterSearch->TabIndex = 27;
			this->tbMobFilterSearch->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->tbMobFilterSearch->TextChanged += gcnew System::EventHandler(this, &MainForm::tbMobFilterSearch_TextChanged);
			// 
			// rbMobFilterBlackList
			// 
			this->rbMobFilterBlackList->AutoSize = true;
			this->rbMobFilterBlackList->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->rbMobFilterBlackList->Location = System::Drawing::Point(267, 30);
			this->rbMobFilterBlackList->Name = L"rbMobFilterBlackList";
			this->rbMobFilterBlackList->Size = System::Drawing::Size(64, 17);
			this->rbMobFilterBlackList->TabIndex = 31;
			this->rbMobFilterBlackList->Text = L"BlackList";
			this->rbMobFilterBlackList->UseVisualStyleBackColor = false;
			// 
			// label75
			// 
			this->label75->AutoSize = true;
			this->label75->Location = System::Drawing::Point(191, 137);
			this->label75->Name = L"label75";
			this->label75->Size = System::Drawing::Size(44, 13);
			this->label75->TabIndex = 28;
			this->label75->Text = L"Search:";
			// 
			// bMobFilterAdd
			// 
			this->bMobFilterAdd->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->bMobFilterAdd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bMobFilterAdd->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bMobFilterAdd->Location = System::Drawing::Point(152, 135);
			this->bMobFilterAdd->Name = L"bMobFilterAdd";
			this->bMobFilterAdd->Size = System::Drawing::Size(36, 20);
			this->bMobFilterAdd->TabIndex = 26;
			this->bMobFilterAdd->Text = L"Add";
			this->bMobFilterAdd->UseVisualStyleBackColor = true;
			this->bMobFilterAdd->Click += gcnew System::EventHandler(this, &MainForm::bMobFilterAdd_Click);
			// 
			// tbMobFilterID
			// 
			this->tbMobFilterID->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->tbMobFilterID->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbMobFilterID->ForeColor = System::Drawing::Color::White;
			this->tbMobFilterID->Location = System::Drawing::Point(64, 135);
			this->tbMobFilterID->Name = L"tbMobFilterID";
			this->tbMobFilterID->Size = System::Drawing::Size(82, 21);
			this->tbMobFilterID->TabIndex = 24;
			this->tbMobFilterID->Text = L"100101";
			this->tbMobFilterID->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->tbMobFilterID->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::tbMobFilterID_KeyPress);
			// 
			// label76
			// 
			this->label76->AutoSize = true;
			this->label76->Location = System::Drawing::Point(6, 138);
			this->label76->Name = L"label76";
			this->label76->Size = System::Drawing::Size(59, 13);
			this->label76->TabIndex = 25;
			this->label76->Text = L"Add by ID:";
			// 
			// label77
			// 
			this->label77->AutoSize = true;
			this->label77->Font = (gcnew System::Drawing::Font(L"Tahoma", 6.5F));
			this->label77->ForeColor = System::Drawing::Color::Lime;
			this->label77->Location = System::Drawing::Point(282, 4);
			this->label77->Name = L"label77";
			this->label77->Size = System::Drawing::Size(87, 22);
			this->label77->TabIndex = 23;
			this->label77->Text = L"Mob Filtering occurs\r\nwhen Mobs spawn\r\n";
			this->label77->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// bMobFilter
			// 
			this->bMobFilter->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->bMobFilter->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bMobFilter->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bMobFilter->Location = System::Drawing::Point(194, 2);
			this->bMobFilter->Name = L"bMobFilter";
			this->bMobFilter->Size = System::Drawing::Size(84, 22);
			this->bMobFilter->TabIndex = 19;
			this->bMobFilter->Text = L"Enable Mob Filter";
			this->bMobFilter->UseVisualStyleBackColor = true;
			this->bMobFilter->Click += gcnew System::EventHandler(this, &MainForm::bMobFilter_Click);
			// 
			// panel20
			// 
			this->panel20->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel20->Controls->Add(this->lbItemSearchLog);
			this->panel20->Controls->Add(this->lbItemFilter);
			this->panel20->Controls->Add(this->cbItemFilterLog);
			this->panel20->Controls->Add(this->bItemSearchLogClear);
			this->panel20->Controls->Add(this->tbItemFilterSearch);
			this->panel20->Controls->Add(this->label74);
			this->panel20->Controls->Add(this->bItemFilterAdd);
			this->panel20->Controls->Add(this->tbItemFilterID);
			this->panel20->Controls->Add(this->label73);
			this->panel20->Controls->Add(this->tbItemFilterMesos);
			this->panel20->Controls->Add(this->label70);
			this->panel20->Controls->Add(this->rbItemFilterWhiteList);
			this->panel20->Controls->Add(this->rbItemFilterBlackList);
			this->panel20->Controls->Add(this->bItemFilter);
			this->panel20->Location = System::Drawing::Point(5, 5);
			this->panel20->Name = L"panel20";
			this->panel20->Size = System::Drawing::Size(379, 160);
			this->panel20->TabIndex = 1;
			// 
			// lbItemSearchLog
			// 
			this->lbItemSearchLog->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->lbItemSearchLog->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbItemSearchLog->ForeColor = System::Drawing::Color::White;
			this->lbItemSearchLog->FormattingEnabled = true;
			this->lbItemSearchLog->Location = System::Drawing::Point(194, 48);
			this->lbItemSearchLog->Name = L"lbItemSearchLog";
			this->lbItemSearchLog->Size = System::Drawing::Size(179, 80);
			this->lbItemSearchLog->TabIndex = 52;
			this->lbItemSearchLog->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::lbItemSearchLog_MouseDoubleClick);
			// 
			// lbItemFilter
			// 
			this->lbItemFilter->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->lbItemFilter->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lbItemFilter->ForeColor = System::Drawing::Color::White;
			this->lbItemFilter->FormattingEnabled = true;
			this->lbItemFilter->Location = System::Drawing::Point(6, 8);
			this->lbItemFilter->Name = L"lbItemFilter";
			this->lbItemFilter->Size = System::Drawing::Size(180, 119);
			this->lbItemFilter->TabIndex = 31;
			this->lbItemFilter->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::lbItemFilter_MouseDoubleClick);
			// 
			// cbItemFilterLog
			// 
			this->cbItemFilterLog->AutoSize = true;
			this->cbItemFilterLog->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->cbItemFilterLog->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cbItemFilterLog->ForeColor = System::Drawing::Color::White;
			this->cbItemFilterLog->Location = System::Drawing::Point(333, 29);
			this->cbItemFilterLog->Name = L"cbItemFilterLog";
			this->cbItemFilterLog->Size = System::Drawing::Size(40, 17);
			this->cbItemFilterLog->TabIndex = 30;
			this->cbItemFilterLog->Text = L"Log";
			this->cbItemFilterLog->UseVisualStyleBackColor = false;
			this->cbItemFilterLog->CheckedChanged += gcnew System::EventHandler(this, &MainForm::cbItemFilterLog_CheckedChanged);
			// 
			// bItemSearchLogClear
			// 
			this->bItemSearchLogClear->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->bItemSearchLogClear->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bItemSearchLogClear->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bItemSearchLogClear->Location = System::Drawing::Point(337, 134);
			this->bItemSearchLogClear->Name = L"bItemSearchLogClear";
			this->bItemSearchLogClear->Size = System::Drawing::Size(36, 20);
			this->bItemSearchLogClear->TabIndex = 29;
			this->bItemSearchLogClear->Text = L"Clear";
			this->bItemSearchLogClear->UseVisualStyleBackColor = true;
			this->bItemSearchLogClear->Click += gcnew System::EventHandler(this, &MainForm::bItemSearchLogClear_Click);
			// 
			// tbItemFilterSearch
			// 
			this->tbItemFilterSearch->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->tbItemFilterSearch->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbItemFilterSearch->ForeColor = System::Drawing::Color::White;
			this->tbItemFilterSearch->Location = System::Drawing::Point(233, 134);
			this->tbItemFilterSearch->Name = L"tbItemFilterSearch";
			this->tbItemFilterSearch->Size = System::Drawing::Size(98, 21);
			this->tbItemFilterSearch->TabIndex = 27;
			this->tbItemFilterSearch->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->tbItemFilterSearch->TextChanged += gcnew System::EventHandler(this, &MainForm::tbItemFilterSearch_TextChanged);
			// 
			// label74
			// 
			this->label74->AutoSize = true;
			this->label74->Location = System::Drawing::Point(191, 137);
			this->label74->Name = L"label74";
			this->label74->Size = System::Drawing::Size(44, 13);
			this->label74->TabIndex = 28;
			this->label74->Text = L"Search:";
			// 
			// bItemFilterAdd
			// 
			this->bItemFilterAdd->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->bItemFilterAdd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bItemFilterAdd->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bItemFilterAdd->Location = System::Drawing::Point(152, 135);
			this->bItemFilterAdd->Name = L"bItemFilterAdd";
			this->bItemFilterAdd->Size = System::Drawing::Size(36, 20);
			this->bItemFilterAdd->TabIndex = 26;
			this->bItemFilterAdd->Text = L"Add";
			this->bItemFilterAdd->UseVisualStyleBackColor = true;
			this->bItemFilterAdd->Click += gcnew System::EventHandler(this, &MainForm::bItemFilterAdd_Click);
			// 
			// tbItemFilterID
			// 
			this->tbItemFilterID->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->tbItemFilterID->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbItemFilterID->ForeColor = System::Drawing::Color::White;
			this->tbItemFilterID->Location = System::Drawing::Point(64, 135);
			this->tbItemFilterID->Name = L"tbItemFilterID";
			this->tbItemFilterID->Size = System::Drawing::Size(82, 21);
			this->tbItemFilterID->TabIndex = 24;
			this->tbItemFilterID->Text = L"5070000";
			this->tbItemFilterID->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->tbItemFilterID->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::tbItemFilterID_KeyPress);
			// 
			// label73
			// 
			this->label73->AutoSize = true;
			this->label73->Location = System::Drawing::Point(6, 138);
			this->label73->Name = L"label73";
			this->label73->Size = System::Drawing::Size(59, 13);
			this->label73->TabIndex = 25;
			this->label73->Text = L"Add by ID:";
			// 
			// tbItemFilterMesos
			// 
			this->tbItemFilterMesos->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->tbItemFilterMesos->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbItemFilterMesos->ForeColor = System::Drawing::Color::White;
			this->tbItemFilterMesos->Location = System::Drawing::Point(334, 3);
			this->tbItemFilterMesos->Name = L"tbItemFilterMesos";
			this->tbItemFilterMesos->Size = System::Drawing::Size(39, 21);
			this->tbItemFilterMesos->TabIndex = 22;
			this->tbItemFilterMesos->Text = L"0";
			this->tbItemFilterMesos->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->tbItemFilterMesos->TextChanged += gcnew System::EventHandler(this, &MainForm::tbItemFilterMesos_TextChanged);
			this->tbItemFilterMesos->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::tbItemFilterMesos_KeyPress);
			// 
			// label70
			// 
			this->label70->AutoSize = true;
			this->label70->Location = System::Drawing::Point(280, 6);
			this->label70->Name = L"label70";
			this->label70->Size = System::Drawing::Size(56, 13);
			this->label70->TabIndex = 23;
			this->label70->Text = L"Mesos <=";
			// 
			// rbItemFilterWhiteList
			// 
			this->rbItemFilterWhiteList->AutoSize = true;
			this->rbItemFilterWhiteList->Checked = true;
			this->rbItemFilterWhiteList->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->rbItemFilterWhiteList->Location = System::Drawing::Point(196, 29);
			this->rbItemFilterWhiteList->Name = L"rbItemFilterWhiteList";
			this->rbItemFilterWhiteList->Size = System::Drawing::Size(68, 17);
			this->rbItemFilterWhiteList->TabIndex = 21;
			this->rbItemFilterWhiteList->TabStop = true;
			this->rbItemFilterWhiteList->Text = L"WhiteList";
			this->rbItemFilterWhiteList->UseVisualStyleBackColor = true;
			this->rbItemFilterWhiteList->CheckedChanged += gcnew System::EventHandler(this, &MainForm::rbItemFilterWhiteList_CheckedChanged);
			// 
			// rbItemFilterBlackList
			// 
			this->rbItemFilterBlackList->AutoSize = true;
			this->rbItemFilterBlackList->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->rbItemFilterBlackList->Location = System::Drawing::Point(267, 29);
			this->rbItemFilterBlackList->Name = L"rbItemFilterBlackList";
			this->rbItemFilterBlackList->Size = System::Drawing::Size(64, 17);
			this->rbItemFilterBlackList->TabIndex = 20;
			this->rbItemFilterBlackList->Text = L"BlackList";
			this->rbItemFilterBlackList->UseVisualStyleBackColor = false;
			// 
			// bItemFilter
			// 
			this->bItemFilter->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->bItemFilter->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bItemFilter->Font = (gcnew System::Drawing::Font(L"Tahoma", 6, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bItemFilter->Location = System::Drawing::Point(194, 2);
			this->bItemFilter->Name = L"bItemFilter";
			this->bItemFilter->Size = System::Drawing::Size(84, 22);
			this->bItemFilter->TabIndex = 19;
			this->bItemFilter->Text = L"Enable Item Filter";
			this->bItemFilter->UseVisualStyleBackColor = true;
			this->bItemFilter->Click += gcnew System::EventHandler(this, &MainForm::bItemFilter_Click);
			// 
			// tabPage8
			// 
			this->tabPage8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->tabPage8->Controls->Add(this->tabControl5);
			this->tabPage8->Location = System::Drawing::Point(4, 22);
			this->tabPage8->Name = L"tabPage8";
			this->tabPage8->Size = System::Drawing::Size(390, 335);
			this->tabPage8->TabIndex = 5;
			this->tabPage8->Text = L"Packets";
			// 
			// tabControl5
			// 
			this->tabControl5->Controls->Add(this->tabPage16);
			this->tabControl5->Controls->Add(this->tabPage15);
			this->tabControl5->Controls->Add(this->tabPage18);
			this->tabControl5->Controls->Add(this->tabPage19);
			this->tabControl5->Location = System::Drawing::Point(-6, 0);
			this->tabControl5->Name = L"tabControl5";
			this->tabControl5->SelectedIndex = 0;
			this->tabControl5->Size = System::Drawing::Size(402, 339);
			this->tabControl5->TabIndex = 3;
			// 
			// tabPage16
			// 
			this->tabPage16->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->tabPage16->Controls->Add(this->label81);
			this->tabPage16->Controls->Add(this->tbSendSpamDelay);
			this->tabPage16->Controls->Add(this->cbSendSpam);
			this->tabPage16->Controls->Add(this->bSendRemove);
			this->tabPage16->Controls->Add(this->lvSendBlock);
			this->tabPage16->Controls->Add(this->tbSendPacket);
			this->tabPage16->Controls->Add(this->bSendBlock);
			this->tabPage16->Controls->Add(this->bSendLog);
			this->tabPage16->Controls->Add(this->bSendClear);
			this->tabPage16->Controls->Add(this->bSendPacket);
			this->tabPage16->Controls->Add(this->lvSend);
			this->tabPage16->Location = System::Drawing::Point(4, 22);
			this->tabPage16->Name = L"tabPage16";
			this->tabPage16->Padding = System::Windows::Forms::Padding(3);
			this->tabPage16->Size = System::Drawing::Size(394, 313);
			this->tabPage16->TabIndex = 1;
			this->tabPage16->Text = L"Send";
			// 
			// label81
			// 
			this->label81->AutoSize = true;
			this->label81->Location = System::Drawing::Point(142, 253);
			this->label81->Name = L"label81";
			this->label81->Size = System::Drawing::Size(63, 26);
			this->label81->TabIndex = 21;
			this->label81->Text = L"Spam Delay\r\n [ms]:";
			this->label81->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// tbSendSpamDelay
			// 
			this->tbSendSpamDelay->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->tbSendSpamDelay->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbSendSpamDelay->ForeColor = System::Drawing::Color::White;
			this->tbSendSpamDelay->Location = System::Drawing::Point(210, 255);
			this->tbSendSpamDelay->Name = L"tbSendSpamDelay";
			this->tbSendSpamDelay->Size = System::Drawing::Size(43, 21);
			this->tbSendSpamDelay->TabIndex = 20;
			this->tbSendSpamDelay->Text = L"100";
			this->tbSendSpamDelay->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->tbSendSpamDelay->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MainForm::tbSendSpamDelay_KeyPress);
			// 
			// cbSendSpam
			// 
			this->cbSendSpam->AutoSize = true;
			this->cbSendSpam->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->cbSendSpam->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cbSendSpam->ForeColor = System::Drawing::Color::White;
			this->cbSendSpam->Location = System::Drawing::Point(12, 286);
			this->cbSendSpam->Name = L"cbSendSpam";
			this->cbSendSpam->Size = System::Drawing::Size(49, 17);
			this->cbSendSpam->TabIndex = 19;
			this->cbSendSpam->Text = L"Spam";
			this->cbSendSpam->UseVisualStyleBackColor = false;
			// 
			// bSendRemove
			// 
			this->bSendRemove->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->bSendRemove->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bSendRemove->Location = System::Drawing::Point(8, 253);
			this->bSendRemove->Name = L"bSendRemove";
			this->bSendRemove->Size = System::Drawing::Size(66, 25);
			this->bSendRemove->TabIndex = 18;
			this->bSendRemove->Text = L"Remove";
			this->bSendRemove->UseVisualStyleBackColor = true;
			// 
			// lvSendBlock
			// 
			this->lvSendBlock->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->lvSendBlock->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lvSendBlock->CheckBoxes = true;
			this->lvSendBlock->ForeColor = System::Drawing::Color::White;
			this->lvSendBlock->Location = System::Drawing::Point(8, 6);
			this->lvSendBlock->Name = L"lvSendBlock";
			this->lvSendBlock->Size = System::Drawing::Size(66, 242);
			this->lvSendBlock->TabIndex = 17;
			this->lvSendBlock->UseCompatibleStateImageBehavior = false;
			this->lvSendBlock->View = System::Windows::Forms::View::Details;
			// 
			// tbSendPacket
			// 
			this->tbSendPacket->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->tbSendPacket->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbSendPacket->ForeColor = System::Drawing::Color::White;
			this->tbSendPacket->Location = System::Drawing::Point(80, 284);
			this->tbSendPacket->Name = L"tbSendPacket";
			this->tbSendPacket->Size = System::Drawing::Size(201, 21);
			this->tbSendPacket->TabIndex = 16;
			this->tbSendPacket->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// bSendBlock
			// 
			this->bSendBlock->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->bSendBlock->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bSendBlock->Location = System::Drawing::Point(80, 253);
			this->bSendBlock->Name = L"bSendBlock";
			this->bSendBlock->Size = System::Drawing::Size(46, 25);
			this->bSendBlock->TabIndex = 15;
			this->bSendBlock->Text = L"Block Header";
			this->bSendBlock->UseVisualStyleBackColor = true;
			// 
			// bSendLog
			// 
			this->bSendLog->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->bSendLog->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bSendLog->Location = System::Drawing::Point(259, 253);
			this->bSendLog->Name = L"bSendLog";
			this->bSendLog->Size = System::Drawing::Size(72, 25);
			this->bSendLog->TabIndex = 14;
			this->bSendLog->Text = L"Enable Log";
			this->bSendLog->UseVisualStyleBackColor = true;
			this->bSendLog->Click += gcnew System::EventHandler(this, &MainForm::bSendLog_Click);
			// 
			// bSendClear
			// 
			this->bSendClear->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->bSendClear->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bSendClear->Location = System::Drawing::Point(334, 253);
			this->bSendClear->Name = L"bSendClear";
			this->bSendClear->Size = System::Drawing::Size(50, 25);
			this->bSendClear->TabIndex = 13;
			this->bSendClear->Text = L"Clear";
			this->bSendClear->UseVisualStyleBackColor = true;
			// 
			// bSendPacket
			// 
			this->bSendPacket->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->bSendPacket->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bSendPacket->Location = System::Drawing::Point(287, 282);
			this->bSendPacket->Name = L"bSendPacket";
			this->bSendPacket->Size = System::Drawing::Size(97, 25);
			this->bSendPacket->TabIndex = 12;
			this->bSendPacket->Text = L"Send Packet";
			this->bSendPacket->UseVisualStyleBackColor = true;
			this->bSendPacket->Click += gcnew System::EventHandler(this, &MainForm::bSendPacket_Click);
			// 
			// lvSend
			// 
			this->lvSend->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->lvSend->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lvSend->CheckBoxes = true;
			this->lvSend->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(1) { this->columnHeader6 });
			this->lvSend->ForeColor = System::Drawing::Color::White;
			this->lvSend->Location = System::Drawing::Point(80, 6);
			this->lvSend->Name = L"lvSend";
			this->lvSend->Size = System::Drawing::Size(304, 242);
			this->lvSend->TabIndex = 0;
			this->lvSend->UseCompatibleStateImageBehavior = false;
			this->lvSend->View = System::Windows::Forms::View::Details;
			// 
			// columnHeader6
			// 
			this->columnHeader6->Text = L"Packet";
			this->columnHeader6->Width = 293;
			// 
			// tabPage15
			// 
			this->tabPage15->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->tabPage15->Controls->Add(this->bRecvRemove);
			this->tabPage15->Controls->Add(this->lvRecvBlock);
			this->tabPage15->Controls->Add(this->tbRecvPacket);
			this->tabPage15->Controls->Add(this->bRecvBlock);
			this->tabPage15->Controls->Add(this->bRecvLog);
			this->tabPage15->Controls->Add(this->bRecvClear);
			this->tabPage15->Controls->Add(this->bRecvPacket);
			this->tabPage15->Controls->Add(this->lvRecv);
			this->tabPage15->Location = System::Drawing::Point(4, 22);
			this->tabPage15->Name = L"tabPage15";
			this->tabPage15->Padding = System::Windows::Forms::Padding(3);
			this->tabPage15->Size = System::Drawing::Size(394, 313);
			this->tabPage15->TabIndex = 0;
			this->tabPage15->Text = L"Recv";
			// 
			// bRecvRemove
			// 
			this->bRecvRemove->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->bRecvRemove->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bRecvRemove->Location = System::Drawing::Point(9, 253);
			this->bRecvRemove->Name = L"bRecvRemove";
			this->bRecvRemove->Size = System::Drawing::Size(66, 25);
			this->bRecvRemove->TabIndex = 26;
			this->bRecvRemove->Text = L"Remove";
			this->bRecvRemove->UseVisualStyleBackColor = true;
			// 
			// lvRecvBlock
			// 
			this->lvRecvBlock->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->lvRecvBlock->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lvRecvBlock->CheckBoxes = true;
			this->lvRecvBlock->ForeColor = System::Drawing::Color::White;
			this->lvRecvBlock->Location = System::Drawing::Point(9, 6);
			this->lvRecvBlock->Name = L"lvRecvBlock";
			this->lvRecvBlock->Size = System::Drawing::Size(66, 241);
			this->lvRecvBlock->TabIndex = 25;
			this->lvRecvBlock->UseCompatibleStateImageBehavior = false;
			this->lvRecvBlock->View = System::Windows::Forms::View::Details;
			// 
			// tbRecvPacket
			// 
			this->tbRecvPacket->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->tbRecvPacket->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbRecvPacket->ForeColor = System::Drawing::Color::White;
			this->tbRecvPacket->Location = System::Drawing::Point(11, 284);
			this->tbRecvPacket->Name = L"tbRecvPacket";
			this->tbRecvPacket->Size = System::Drawing::Size(271, 21);
			this->tbRecvPacket->TabIndex = 24;
			this->tbRecvPacket->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// bRecvBlock
			// 
			this->bRecvBlock->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->bRecvBlock->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bRecvBlock->Location = System::Drawing::Point(81, 253);
			this->bRecvBlock->Name = L"bRecvBlock";
			this->bRecvBlock->Size = System::Drawing::Size(66, 25);
			this->bRecvBlock->TabIndex = 23;
			this->bRecvBlock->Text = L"Block Header";
			this->bRecvBlock->UseVisualStyleBackColor = true;
			// 
			// bRecvLog
			// 
			this->bRecvLog->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->bRecvLog->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bRecvLog->Location = System::Drawing::Point(220, 253);
			this->bRecvLog->Name = L"bRecvLog";
			this->bRecvLog->Size = System::Drawing::Size(86, 25);
			this->bRecvLog->TabIndex = 22;
			this->bRecvLog->Text = L"Enable Log";
			this->bRecvLog->UseVisualStyleBackColor = true;
			// 
			// bRecvClear
			// 
			this->bRecvClear->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->bRecvClear->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bRecvClear->Location = System::Drawing::Point(312, 253);
			this->bRecvClear->Name = L"bRecvClear";
			this->bRecvClear->Size = System::Drawing::Size(73, 25);
			this->bRecvClear->TabIndex = 21;
			this->bRecvClear->Text = L"Clear";
			this->bRecvClear->UseVisualStyleBackColor = true;
			// 
			// bRecvPacket
			// 
			this->bRecvPacket->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->bRecvPacket->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bRecvPacket->Location = System::Drawing::Point(288, 282);
			this->bRecvPacket->Name = L"bRecvPacket";
			this->bRecvPacket->Size = System::Drawing::Size(97, 25);
			this->bRecvPacket->TabIndex = 20;
			this->bRecvPacket->Text = L"Receive Packet";
			this->bRecvPacket->UseVisualStyleBackColor = true;
			this->bRecvPacket->Click += gcnew System::EventHandler(this, &MainForm::bRecvPacket_Click);
			// 
			// lvRecv
			// 
			this->lvRecv->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->lvRecv->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lvRecv->CheckBoxes = true;
			this->lvRecv->ForeColor = System::Drawing::Color::White;
			this->lvRecv->Location = System::Drawing::Point(81, 6);
			this->lvRecv->Name = L"lvRecv";
			this->lvRecv->Size = System::Drawing::Size(304, 241);
			this->lvRecv->TabIndex = 19;
			this->lvRecv->UseCompatibleStateImageBehavior = false;
			this->lvRecv->View = System::Windows::Forms::View::Details;
			// 
			// tabPage18
			// 
			this->tabPage18->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->tabPage18->Location = System::Drawing::Point(4, 22);
			this->tabPage18->Name = L"tabPage18";
			this->tabPage18->Padding = System::Windows::Forms::Padding(3);
			this->tabPage18->Size = System::Drawing::Size(394, 313);
			this->tabPage18->TabIndex = 2;
			this->tabPage18->Text = L"Multi Packet";
			// 
			// tabPage19
			// 
			this->tabPage19->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->tabPage19->Controls->Add(this->panel29);
			this->tabPage19->Controls->Add(this->panel6);
			this->tabPage19->Location = System::Drawing::Point(4, 22);
			this->tabPage19->Name = L"tabPage19";
			this->tabPage19->Padding = System::Windows::Forms::Padding(3);
			this->tabPage19->Size = System::Drawing::Size(394, 313);
			this->tabPage19->TabIndex = 3;
			this->tabPage19->Text = L"Defined Packets";
			// 
			// panel29
			// 
			this->panel29->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel29->Controls->Add(this->bSendRevive);
			this->panel29->Controls->Add(this->bSendRestore127Health);
			this->panel29->Controls->Add(this->bSendSuicide);
			this->panel29->Controls->Add(this->bSendDrop50000);
			this->panel29->Controls->Add(this->bSendMount);
			this->panel29->Controls->Add(this->bSendDrop10000);
			this->panel29->Controls->Add(this->bSendDrop10);
			this->panel29->Controls->Add(this->bSendDrop1000);
			this->panel29->Location = System::Drawing::Point(12, 10);
			this->panel29->Name = L"panel29";
			this->panel29->Size = System::Drawing::Size(132, 261);
			this->panel29->TabIndex = 21;
			// 
			// bSendRevive
			// 
			this->bSendRevive->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->bSendRevive->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bSendRevive->Location = System::Drawing::Point(7, 39);
			this->bSendRevive->Name = L"bSendRevive";
			this->bSendRevive->Size = System::Drawing::Size(117, 25);
			this->bSendRevive->TabIndex = 22;
			this->bSendRevive->Text = L"Revive";
			this->bSendRevive->UseVisualStyleBackColor = true;
			this->bSendRevive->Click += gcnew System::EventHandler(this, &MainForm::bSendRevive_Click);
			// 
			// bSendRestore127Health
			// 
			this->bSendRestore127Health->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->bSendRestore127Health->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bSendRestore127Health->Location = System::Drawing::Point(7, 225);
			this->bSendRestore127Health->Name = L"bSendRestore127Health";
			this->bSendRestore127Health->Size = System::Drawing::Size(117, 25);
			this->bSendRestore127Health->TabIndex = 21;
			this->bSendRestore127Health->Text = L"Restore 127 Health";
			this->bSendRestore127Health->UseVisualStyleBackColor = true;
			this->bSendRestore127Health->Click += gcnew System::EventHandler(this, &MainForm::bSendRestore127Health_Click);
			// 
			// bSendSuicide
			// 
			this->bSendSuicide->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->bSendSuicide->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bSendSuicide->Location = System::Drawing::Point(7, 8);
			this->bSendSuicide->Name = L"bSendSuicide";
			this->bSendSuicide->Size = System::Drawing::Size(117, 25);
			this->bSendSuicide->TabIndex = 15;
			this->bSendSuicide->Text = L"Suicide";
			this->bSendSuicide->UseVisualStyleBackColor = true;
			this->bSendSuicide->Click += gcnew System::EventHandler(this, &MainForm::bSendSuicide_Click);
			// 
			// bSendDrop50000
			// 
			this->bSendDrop50000->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->bSendDrop50000->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bSendDrop50000->Location = System::Drawing::Point(7, 194);
			this->bSendDrop50000->Name = L"bSendDrop50000";
			this->bSendDrop50000->Size = System::Drawing::Size(117, 25);
			this->bSendDrop50000->TabIndex = 20;
			this->bSendDrop50000->Text = L"Drop 50,000 Mesos";
			this->bSendDrop50000->UseVisualStyleBackColor = true;
			this->bSendDrop50000->Click += gcnew System::EventHandler(this, &MainForm::bSendDrop50000_Click);
			// 
			// bSendMount
			// 
			this->bSendMount->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->bSendMount->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bSendMount->Location = System::Drawing::Point(7, 70);
			this->bSendMount->Name = L"bSendMount";
			this->bSendMount->Size = System::Drawing::Size(117, 25);
			this->bSendMount->TabIndex = 16;
			this->bSendMount->Text = L"Get On Mount";
			this->bSendMount->UseVisualStyleBackColor = true;
			this->bSendMount->Click += gcnew System::EventHandler(this, &MainForm::bSendMount_Click);
			// 
			// bSendDrop10000
			// 
			this->bSendDrop10000->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->bSendDrop10000->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bSendDrop10000->Location = System::Drawing::Point(7, 163);
			this->bSendDrop10000->Name = L"bSendDrop10000";
			this->bSendDrop10000->Size = System::Drawing::Size(117, 25);
			this->bSendDrop10000->TabIndex = 19;
			this->bSendDrop10000->Text = L"Drop 10,000 Mesos";
			this->bSendDrop10000->UseVisualStyleBackColor = true;
			this->bSendDrop10000->Click += gcnew System::EventHandler(this, &MainForm::bSendDrop10000_Click);
			// 
			// bSendDrop10
			// 
			this->bSendDrop10->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->bSendDrop10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bSendDrop10->Location = System::Drawing::Point(7, 101);
			this->bSendDrop10->Name = L"bSendDrop10";
			this->bSendDrop10->Size = System::Drawing::Size(117, 25);
			this->bSendDrop10->TabIndex = 17;
			this->bSendDrop10->Text = L"Drop 10 Mesos";
			this->bSendDrop10->UseVisualStyleBackColor = true;
			this->bSendDrop10->Click += gcnew System::EventHandler(this, &MainForm::bSendDrop10_Click);
			// 
			// bSendDrop1000
			// 
			this->bSendDrop1000->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->bSendDrop1000->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bSendDrop1000->Location = System::Drawing::Point(7, 132);
			this->bSendDrop1000->Name = L"bSendDrop1000";
			this->bSendDrop1000->Size = System::Drawing::Size(117, 25);
			this->bSendDrop1000->TabIndex = 18;
			this->bSendDrop1000->Text = L"Drop 1000 Mesos";
			this->bSendDrop1000->UseVisualStyleBackColor = true;
			this->bSendDrop1000->Click += gcnew System::EventHandler(this, &MainForm::bSendDrop1000_Click);
			// 
			// panel6
			// 
			this->panel6->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel6->Controls->Add(this->label39);
			this->panel6->Controls->Add(this->tbAPDEX);
			this->panel6->Controls->Add(this->tbAPLUK);
			this->panel6->Controls->Add(this->tbAPINT);
			this->panel6->Controls->Add(this->label38);
			this->panel6->Controls->Add(this->label37);
			this->panel6->Controls->Add(this->label36);
			this->panel6->Controls->Add(this->tbAPSTR);
			this->panel6->Controls->Add(this->label35);
			this->panel6->Controls->Add(this->tbAPMP);
			this->panel6->Controls->Add(this->label34);
			this->panel6->Controls->Add(this->tbAPHP);
			this->panel6->Controls->Add(this->label33);
			this->panel6->Controls->Add(this->label32);
			this->panel6->Controls->Add(this->tbAPLevel);
			this->panel6->Controls->Add(this->cbAP);
			this->panel6->Location = System::Drawing::Point(150, 10);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(109, 171);
			this->panel6->TabIndex = 8;
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label39->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label39->ForeColor = System::Drawing::Color::DarkGray;
			this->label39->Location = System::Drawing::Point(0, 135);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(107, 26);
			this->label39->TabIndex = 22;
			this->label39->Text = L"Auto Distributes Per \r\nEach Level till AP < 5\r\n";
			// 
			// tbAPDEX
			// 
			this->tbAPDEX->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->tbAPDEX->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbAPDEX->ForeColor = System::Drawing::Color::White;
			this->tbAPDEX->Location = System::Drawing::Point(78, 81);
			this->tbAPDEX->Name = L"tbAPDEX";
			this->tbAPDEX->Size = System::Drawing::Size(26, 21);
			this->tbAPDEX->TabIndex = 10;
			this->tbAPDEX->Text = L"0";
			this->tbAPDEX->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// tbAPLUK
			// 
			this->tbAPLUK->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->tbAPLUK->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbAPLUK->ForeColor = System::Drawing::Color::White;
			this->tbAPLUK->Location = System::Drawing::Point(78, 105);
			this->tbAPLUK->Name = L"tbAPLUK";
			this->tbAPLUK->Size = System::Drawing::Size(26, 21);
			this->tbAPLUK->TabIndex = 14;
			this->tbAPLUK->Text = L"0";
			this->tbAPLUK->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// tbAPINT
			// 
			this->tbAPINT->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->tbAPINT->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbAPINT->ForeColor = System::Drawing::Color::White;
			this->tbAPINT->Location = System::Drawing::Point(25, 105);
			this->tbAPINT->Name = L"tbAPINT";
			this->tbAPINT->Size = System::Drawing::Size(26, 21);
			this->tbAPINT->TabIndex = 17;
			this->tbAPINT->Text = L"0";
			this->tbAPINT->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->BackColor = System::Drawing::Color::Transparent;
			this->label38->Location = System::Drawing::Point(54, 107);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(25, 13);
			this->label38->TabIndex = 21;
			this->label38->Text = L"LUK";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->BackColor = System::Drawing::Color::Transparent;
			this->label37->Location = System::Drawing::Point(2, 107);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(24, 13);
			this->label37->TabIndex = 20;
			this->label37->Text = L"INT";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->BackColor = System::Drawing::Color::Transparent;
			this->label36->Location = System::Drawing::Point(54, 83);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(26, 13);
			this->label36->TabIndex = 19;
			this->label36->Text = L"DEX";
			// 
			// tbAPSTR
			// 
			this->tbAPSTR->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->tbAPSTR->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbAPSTR->ForeColor = System::Drawing::Color::White;
			this->tbAPSTR->Location = System::Drawing::Point(25, 81);
			this->tbAPSTR->Name = L"tbAPSTR";
			this->tbAPSTR->Size = System::Drawing::Size(26, 21);
			this->tbAPSTR->TabIndex = 12;
			this->tbAPSTR->Text = L"5";
			this->tbAPSTR->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->BackColor = System::Drawing::Color::Transparent;
			this->label35->Location = System::Drawing::Point(1, 83);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(26, 13);
			this->label35->TabIndex = 18;
			this->label35->Text = L"STR";
			// 
			// tbAPMP
			// 
			this->tbAPMP->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->tbAPMP->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbAPMP->ForeColor = System::Drawing::Color::White;
			this->tbAPMP->Location = System::Drawing::Point(78, 57);
			this->tbAPMP->Name = L"tbAPMP";
			this->tbAPMP->Size = System::Drawing::Size(26, 21);
			this->tbAPMP->TabIndex = 9;
			this->tbAPMP->Text = L"0";
			this->tbAPMP->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->BackColor = System::Drawing::Color::Transparent;
			this->label34->Location = System::Drawing::Point(59, 60);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(21, 13);
			this->label34->TabIndex = 16;
			this->label34->Text = L"MP";
			// 
			// tbAPHP
			// 
			this->tbAPHP->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->tbAPHP->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbAPHP->ForeColor = System::Drawing::Color::White;
			this->tbAPHP->Location = System::Drawing::Point(25, 57);
			this->tbAPHP->Name = L"tbAPHP";
			this->tbAPHP->Size = System::Drawing::Size(26, 21);
			this->tbAPHP->TabIndex = 11;
			this->tbAPHP->Text = L"0";
			this->tbAPHP->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->BackColor = System::Drawing::Color::Transparent;
			this->label33->Location = System::Drawing::Point(7, 60);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(20, 13);
			this->label33->TabIndex = 15;
			this->label33->Text = L"HP";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->BackColor = System::Drawing::Color::Transparent;
			this->label32->Location = System::Drawing::Point(2, 32);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(51, 13);
			this->label32->TabIndex = 8;
			this->label32->Text = L"Till Level:";
			// 
			// tbAPLevel
			// 
			this->tbAPLevel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->tbAPLevel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbAPLevel->ForeColor = System::Drawing::Color::White;
			this->tbAPLevel->Location = System::Drawing::Point(59, 28);
			this->tbAPLevel->Name = L"tbAPLevel";
			this->tbAPLevel->Size = System::Drawing::Size(45, 21);
			this->tbAPLevel->TabIndex = 6;
			this->tbAPLevel->Text = L"120";
			this->tbAPLevel->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// cbAP
			// 
			this->cbAP->AutoSize = true;
			this->cbAP->Enabled = false;
			this->cbAP->FlatAppearance->BorderColor = System::Drawing::Color::Maroon;
			this->cbAP->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cbAP->ForeColor = System::Drawing::Color::White;
			this->cbAP->Location = System::Drawing::Point(5, 6);
			this->cbAP->Name = L"cbAP";
			this->cbAP->Size = System::Drawing::Size(62, 17);
			this->cbAP->TabIndex = 1;
			this->cbAP->Text = L"Auto AP";
			this->cbAP->UseVisualStyleBackColor = false;
			// 
			// tabPage9
			// 
			this->tabPage9->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->tabPage9->Controls->Add(this->lbMapRusherStatus);
			this->tabPage9->Controls->Add(this->tbMapRusherDestination);
			this->tabPage9->Controls->Add(this->label79);
			this->tabPage9->Controls->Add(this->bMapRush);
			this->tabPage9->Controls->Add(this->tbMapRusherSearch);
			this->tabPage9->Controls->Add(this->label78);
			this->tabPage9->Controls->Add(this->lvMapRusherSearch);
			this->tabPage9->Controls->Add(this->lvMapRusher);
			this->tabPage9->Location = System::Drawing::Point(4, 22);
			this->tabPage9->Name = L"tabPage9";
			this->tabPage9->Size = System::Drawing::Size(390, 335);
			this->tabPage9->TabIndex = 6;
			this->tabPage9->Text = L"Map Rusher";
			// 
			// lbMapRusherStatus
			// 
			this->lbMapRusherStatus->AutoSize = true;
			this->lbMapRusherStatus->Location = System::Drawing::Point(199, 318);
			this->lbMapRusherStatus->Name = L"lbMapRusherStatus";
			this->lbMapRusherStatus->Size = System::Drawing::Size(93, 13);
			this->lbMapRusherStatus->TabIndex = 37;
			this->lbMapRusherStatus->Text = L"Status: Waiting...";
			// 
			// tbMapRusherDestination
			// 
			this->tbMapRusherDestination->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->tbMapRusherDestination->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbMapRusherDestination->ForeColor = System::Drawing::Color::White;
			this->tbMapRusherDestination->Location = System::Drawing::Point(197, 262);
			this->tbMapRusherDestination->Name = L"tbMapRusherDestination";
			this->tbMapRusherDestination->Size = System::Drawing::Size(189, 21);
			this->tbMapRusherDestination->TabIndex = 35;
			this->tbMapRusherDestination->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label79
			// 
			this->label79->AutoSize = true;
			this->label79->Location = System::Drawing::Point(195, 246);
			this->label79->Name = L"label79";
			this->label79->Size = System::Drawing::Size(65, 13);
			this->label79->TabIndex = 36;
			this->label79->Text = L"Destination:";
			// 
			// bMapRush
			// 
			this->bMapRush->FlatAppearance->BorderColor = System::Drawing::Color::Gray;
			this->bMapRush->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->bMapRush->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->bMapRush->Location = System::Drawing::Point(196, 289);
			this->bMapRush->Name = L"bMapRush";
			this->bMapRush->Size = System::Drawing::Size(190, 26);
			this->bMapRush->TabIndex = 34;
			this->bMapRush->Text = L"Start Rush";
			this->bMapRush->UseVisualStyleBackColor = true;
			// 
			// tbMapRusherSearch
			// 
			this->tbMapRusherSearch->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->tbMapRusherSearch->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->tbMapRusherSearch->ForeColor = System::Drawing::Color::White;
			this->tbMapRusherSearch->Location = System::Drawing::Point(198, 209);
			this->tbMapRusherSearch->Name = L"tbMapRusherSearch";
			this->tbMapRusherSearch->Size = System::Drawing::Size(188, 21);
			this->tbMapRusherSearch->TabIndex = 32;
			this->tbMapRusherSearch->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label78
			// 
			this->label78->AutoSize = true;
			this->label78->Location = System::Drawing::Point(196, 193);
			this->label78->Name = L"label78";
			this->label78->Size = System::Drawing::Size(89, 13);
			this->label78->TabIndex = 33;
			this->label78->Text = L"Search By Name:";
			// 
			// lvMapRusherSearch
			// 
			this->lvMapRusherSearch->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->lvMapRusherSearch->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lvMapRusherSearch->CheckBoxes = true;
			this->lvMapRusherSearch->ForeColor = System::Drawing::Color::White;
			this->lvMapRusherSearch->Location = System::Drawing::Point(196, 4);
			this->lvMapRusherSearch->Name = L"lvMapRusherSearch";
			this->lvMapRusherSearch->Size = System::Drawing::Size(190, 186);
			this->lvMapRusherSearch->TabIndex = 31;
			this->lvMapRusherSearch->UseCompatibleStateImageBehavior = false;
			this->lvMapRusherSearch->View = System::Windows::Forms::View::Details;
			// 
			// lvMapRusher
			// 
			this->lvMapRusher->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(25)), static_cast<System::Int32>(static_cast<System::Byte>(25)),
				static_cast<System::Int32>(static_cast<System::Byte>(25)));
			this->lvMapRusher->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lvMapRusher->CheckBoxes = true;
			this->lvMapRusher->ForeColor = System::Drawing::Color::White;
			this->lvMapRusher->Location = System::Drawing::Point(4, 4);
			this->lvMapRusher->Name = L"lvMapRusher";
			this->lvMapRusher->Size = System::Drawing::Size(189, 327);
			this->lvMapRusher->TabIndex = 30;
			this->lvMapRusher->UseCompatibleStateImageBehavior = false;
			this->lvMapRusher->View = System::Windows::Forms::View::Details;
			// 
			// lbMapName
			// 
			this->lbMapName->AutoSize = true;
			this->lbMapName->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F));
			this->lbMapName->ForeColor = System::Drawing::Color::Silver;
			this->lbMapName->Location = System::Drawing::Point(69, 429);
			this->lbMapName->Name = L"lbMapName";
			this->lbMapName->Size = System::Drawing::Size(55, 13);
			this->lbMapName->TabIndex = 42;
			this->lbMapName->Text = L"Waiting...";
			this->lbMapName->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseDown);
			this->lbMapName->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseMove);
			this->lbMapName->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseUp);
			// 
			// lbDateTime
			// 
			this->lbDateTime->AutoSize = true;
			this->lbDateTime->BackColor = System::Drawing::Color::Transparent;
			this->lbDateTime->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F));
			this->lbDateTime->ForeColor = System::Drawing::Color::White;
			this->lbDateTime->Location = System::Drawing::Point(406, 429);
			this->lbDateTime->Name = L"lbDateTime";
			this->lbDateTime->Size = System::Drawing::Size(128, 13);
			this->lbDateTime->TabIndex = 41;
			this->lbDateTime->Text = L"00/00/0000 00:00:00 AM";
			this->lbDateTime->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseDown);
			this->lbDateTime->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseMove);
			this->lbDateTime->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseUp);
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Tahoma", 8.25F));
			this->label21->ForeColor = System::Drawing::Color::Silver;
			this->label21->Location = System::Drawing::Point(10, 429);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(61, 13);
			this->label21->TabIndex = 22;
			this->label21->Text = L"Map Name:";
			this->label21->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseDown);
			this->label21->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseMove);
			this->label21->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseUp);
			// 
			// statusStrip1
			// 
			this->statusStrip1->BackColor = System::Drawing::Color::Transparent;
			this->statusStrip1->ImageScalingSize = System::Drawing::Size(32, 32);
			this->statusStrip1->Location = System::Drawing::Point(0, 426);
			this->statusStrip1->Name = L"statusStrip1";
			this->statusStrip1->Size = System::Drawing::Size(548, 22);
			this->statusStrip1->TabIndex = 10;
			this->statusStrip1->Text = L"statusStrip1";
			this->statusStrip1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseDown);
			this->statusStrip1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseMove);
			this->statusStrip1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::pnlFull_MouseUp);
			// 
			// btnClose
			// 
			this->btnClose->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(20)), static_cast<System::Int32>(static_cast<System::Byte>(16)),
				static_cast<System::Int32>(static_cast<System::Byte>(16)));
			this->btnClose->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btnClose->FlatAppearance->BorderSize = 0;
			this->btnClose->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->btnClose->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btnClose->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnClose->Font = (gcnew System::Drawing::Font(L"Lucida Console", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnClose->ForeColor = System::Drawing::Color::Firebrick;
			this->btnClose->Location = System::Drawing::Point(520, -1);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(29, 29);
			this->btnClose->TabIndex = 8;
			this->btnClose->Text = L"x";
			this->btnClose->UseVisualStyleBackColor = false;
			this->btnClose->Click += gcnew System::EventHandler(this, &MainForm::btnClose_Click);
			// 
			// btnMinimize
			// 
			this->btnMinimize->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->btnMinimize->FlatAppearance->BorderSize = 0;
			this->btnMinimize->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)));
			this->btnMinimize->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			this->btnMinimize->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnMinimize->Font = (gcnew System::Drawing::Font(L"Lucida Console", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnMinimize->ForeColor = System::Drawing::Color::Silver;
			this->btnMinimize->Location = System::Drawing::Point(494, -1);
			this->btnMinimize->Name = L"btnMinimize";
			this->btnMinimize->Size = System::Drawing::Size(29, 29);
			this->btnMinimize->TabIndex = 9;
			this->btnMinimize->Text = L"_";
			this->btnMinimize->UseVisualStyleBackColor = false;
			this->btnMinimize->Click += gcnew System::EventHandler(this, &MainForm::btnMinimize_Click);
			// 
			// GUITimer
			// 
			this->GUITimer->Enabled = true;
			this->GUITimer->Interval = 250;
			this->GUITimer->Tick += gcnew System::EventHandler(this, &MainForm::GUITimer_Tick);
			// 
			// AutoCCCSTimer
			// 
			this->AutoCCCSTimer->Enabled = true;
			this->AutoCCCSTimer->Interval = 250;
			this->AutoCCCSTimer->Tick += gcnew System::EventHandler(this, &MainForm::AutoCCCSTimer_Tick);
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(16)), static_cast<System::Int32>(static_cast<System::Byte>(16)),
				static_cast<System::Int32>(static_cast<System::Byte>(16)));
			this->ClientSize = System::Drawing::Size(550, 450);
			this->ControlBox = false;
			this->Controls->Add(this->lbTitle);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pnlFull);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"MainForm";
			this->Opacity = 0;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Timelapse Trainer";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MainForm::MainForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			this->Shown += gcnew System::EventHandler(this, &MainForm::MainForm_Shown);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->pnlFull->ResumeLayout(false);
			this->pnlFull->PerformLayout();
			this->pnlMiddle->ResumeLayout(false);
			this->pnlMiddle->PerformLayout();
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->tabControl2->ResumeLayout(false);
			this->tabPage3->ResumeLayout(false);
			this->tabPage17->ResumeLayout(false);
			this->tabPage17->PerformLayout();
			this->panel22->ResumeLayout(false);
			this->panel22->PerformLayout();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->transparencyTrackBar))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabControl3->ResumeLayout(false);
			this->tabPage11->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->tabPage12->ResumeLayout(false);
			this->tabPage12->PerformLayout();
			this->panel8->ResumeLayout(false);
			this->panel8->PerformLayout();
			this->panel9->ResumeLayout(false);
			this->panel9->PerformLayout();
			this->panel7->ResumeLayout(false);
			this->panel7->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->tabPage5->ResumeLayout(false);
			this->panel12->ResumeLayout(false);
			this->panel12->PerformLayout();
			this->panel25->ResumeLayout(false);
			this->panel25->PerformLayout();
			this->panel24->ResumeLayout(false);
			this->panel24->PerformLayout();
			this->panel23->ResumeLayout(false);
			this->panel23->PerformLayout();
			this->panel11->ResumeLayout(false);
			this->panel11->PerformLayout();
			this->panel10->ResumeLayout(false);
			this->panel10->PerformLayout();
			this->tabPage20->ResumeLayout(false);
			this->tabPage20->PerformLayout();
			this->panel27->ResumeLayout(false);
			this->panel27->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel26->ResumeLayout(false);
			this->panel26->PerformLayout();
			this->panel18->ResumeLayout(false);
			this->panel18->PerformLayout();
			this->tabPage6->ResumeLayout(false);
			this->panel28->ResumeLayout(false);
			this->panel28->PerformLayout();
			this->panel17->ResumeLayout(false);
			this->panel17->PerformLayout();
			this->panel16->ResumeLayout(false);
			this->panel16->PerformLayout();
			this->panel19->ResumeLayout(false);
			this->panel19->PerformLayout();
			this->panel15->ResumeLayout(false);
			this->panel15->PerformLayout();
			this->panel13->ResumeLayout(false);
			this->panel13->PerformLayout();
			this->panel14->ResumeLayout(false);
			this->panel14->PerformLayout();
			this->tabPage7->ResumeLayout(false);
			this->panel21->ResumeLayout(false);
			this->panel21->PerformLayout();
			this->panel20->ResumeLayout(false);
			this->panel20->PerformLayout();
			this->tabPage8->ResumeLayout(false);
			this->tabControl5->ResumeLayout(false);
			this->tabPage16->ResumeLayout(false);
			this->tabPage16->PerformLayout();
			this->tabPage15->ResumeLayout(false);
			this->tabPage15->PerformLayout();
			this->tabPage19->ResumeLayout(false);
			this->panel29->ResumeLayout(false);
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->tabPage9->ResumeLayout(false);
			this->tabPage9->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: System::Void MainForm_Load(System::Object^  sender, System::EventArgs^  e);
	private: System::Void MainForm_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e);
	private: System::Void btnClose_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void btnMinimize_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void pnlFull_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
	private: System::Void pnlFull_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
	private: System::Void pnlFull_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
	private: System::Void GUITimer_Tick(System::Object^  sender, System::EventArgs^  e);
	private: System::Void closeMapleStoryToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void lbEXP_MouseHover(System::Object^  sender, System::EventArgs^  e);
	private: System::Void lbMP_MouseHover(System::Object^  sender, System::EventArgs^  e);
	private: System::Void lbHP_MouseHover(System::Object^  sender, System::EventArgs^  e);
	private: System::Void lbJob_MouseHover(System::Object^  sender, System::EventArgs^  e);
	private: System::Void lbWorld_MouseHover(System::Object^  sender, System::EventArgs^  e);
	private: System::Void transparencyTrackBar_Scroll(System::Object^  sender, System::EventArgs^  e);
	private: System::Void MainForm_Shown(System::Object^  sender, System::EventArgs^  e);
	private: System::Void cbHP_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void comboHPKey_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void cbMP_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void comboMPKey_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void cbAttack_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void comboAttackKey_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void tbAttackInterval_TextChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void cbLoot_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void tbLootInterval_TextChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void comboLootKey_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void bBuffAdd_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void bBuffEnableAll_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void bBuffDisableAll_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void bBuffRemove_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void bBuffClear_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void lvBuff_ItemChecked(System::Object^  sender, System::Windows::Forms::ItemCheckedEventArgs^  e);
	private: System::Void rbCC_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void bCC_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void bRandomCC_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void bCS_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void tbHP_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e);
	private: System::Void tbMP_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e);
	private: System::Void tbAttackInterval_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e);
	private: System::Void tbAttackMob_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e);
	private: System::Void tbLootInterval_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e);
	private: System::Void tbLootItem_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e);
	private: System::Void tbAPLevel_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e);
	private: System::Void tbAPHP_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e);
	private: System::Void tbAPMP_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e);
	private: System::Void tbAPSTR_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e);
	private: System::Void tbAPDEX_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e);
	private: System::Void tbAPINT_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e);
	private: System::Void tbAPLUK_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e);
	private: System::Void tbBuffInterval_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e);
	private: System::Void tbCCCSTime_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e);
	private: System::Void tbCCCSPeople_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e);
	private: System::Void tbCCCSAttack_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e);
	private: System::Void tbCCCSMob_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e);
	private: System::Void tbCSDelay_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e);
	private: System::Void tbClickTeleport_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e);
	private: System::Void tbMouseTeleport_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e);
	private: System::Void tbTeleportX_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e);
	private: System::Void tbTeleportY_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e);
	private: System::Void tbTeleportLoopDelay_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e);
	private: System::Void tbSpawnControlX_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e);
	private: System::Void tbSpawnControlY_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e);
	private: System::Void tbKamiX_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e);
	private: System::Void tbKamiY_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e);
	private: System::Void tbKamiInterval_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e);
	private: System::Void tbKamiMob_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e);
	private: System::Void tbKamiLootInterval_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e);
	private: System::Void tbKamiLootItem_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e);
	private: System::Void tbWallVacX_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e);
	private: System::Void tbWallVacY_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e);
	private: System::Void tbWallVacRangeX_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e);
	private: System::Void tbWallVacRangeY_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e);
	private: System::Void tbDupeXMob_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e);
	private: System::Void tbMMCX_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e);
	private: System::Void tbMMCY_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e);
	private: System::Void tbItemFilterID_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e);
	private: System::Void tbMobFilterID_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e);
	private: System::Void tbItemFilterMesos_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e);
	private: System::Void tbSendSpamDelay_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e);
	private: System::Void AutoCCCSTimer_Tick(System::Object^  sender, System::EventArgs^  e);
	private: System::Void cbCCCSTime_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void rbFunction_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void bSendPacket_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void bRecvPacket_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void cbBlinkGodmode_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void cbMissGodmode_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void cbInstantDropItems_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void cbInstantLootItems_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void cbFastLootItems_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void cbItemVac_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void cbUnlimitedAttack_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void cbInfiniteChat_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void cbNoPlayerDeath_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void cbFullAccuracy_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void cbSpeedAttack_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void cbNoBreath_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void cbMouseFly_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void cbSwimInAir_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void cbFullGodmode_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void cbClickTeleport_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void cbMouseTeleport_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void bTeleportGetCurrentLocation_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void bTeleportAdd_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void bTeleportDelete_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void bTeleport_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void lvTeleport_MouseDoubleClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
	private: System::Void bTeleportLoop_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void cbNoMobReaction_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void cbNoMobDeathEffect_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void cbNoMobKickback_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void cbMobFreeze_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void cbMobDisarm_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void cbNoPlayerKickback_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void cbJumpDownAnyTile_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void cbNoSkillEffects_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void cbNoAttackDelay_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void cbNoPlayerNameTag_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void cbMobAutoAggro_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void cbNoMapBackground_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void cbNoMapObjects_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void cbNoMapTiles_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void cbNoMapFadeEffect_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void cbMapSpeedUp_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void cbNoBlueBoxes_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void cbFullMapAttack_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void bSpawnControlGetCurrentLocation_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void bSpawnControlAdd_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void bSpawnControlDelete_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void bSpawnControl_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void tbSpawnControlMapID_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e);
	private: System::Void cbKami_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void cbKamiLoot_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void bSendLog_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void bSendMount_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void bSendSuicide_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void bSendDrop10_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void bSendDrop1000_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void bSendDrop10000_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void bSendDrop50000_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void bSendRevive_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void bSendRestore127Health_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void lbItemFilter_MouseDoubleClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
	private: System::Void lbItemSearchLog_MouseDoubleClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
	private: System::Void lbMobFilter_MouseDoubleClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
	private: System::Void lbMobSearchLog_MouseDoubleClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e);
	private: System::Void bItemFilter_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void rbItemFilterWhiteList_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void cbItemFilterLog_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void bItemFilterAdd_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void bItemSearchLogClear_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void bMobFilter_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void rbMobFilterWhiteList_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void cbMobFilterLog_CheckedChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void bMobSearchLogClear_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void bMobFilterAdd_Click(System::Object^  sender, System::EventArgs^  e);
	private: System::Void tbMobFilterSearch_TextChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void tbItemFilterSearch_TextChanged(System::Object^  sender, System::EventArgs^  e);
	private: System::Void tbItemFilterMesos_TextChanged(System::Object^  sender, System::EventArgs^  e);
};
}