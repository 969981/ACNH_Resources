
void _INIT_4279(void)

{
  undefined *local_30;
  char *pcStack_28;
  undefined *local_20;
  char *pcStack_18;
  
  local_20 = (undefined *)CONCAT44(local_20._4_4_,2);
  DAT_050cd3d0 = 4;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_050cd3d4);
  DAT_050cd3e0 = 0x8004ef;
  DAT_050cd3e8 = nn::os::GetSystemTick();
  DAT_050cd3f0 = 0;
  DAT_050cd3f8 = PTR_DAT_04bb2020 + 0x10;
  DAT_050cd400 = "NNPC_Talk_Sequence";
  DAT_050cd410 = &DAT_04066c7f;
  DAT_050cd420 = "AI_NPC_";
  DAT_050cd430 = &DAT_040a029a;
  pcStack_18 = "\"EventFlowSystemActorMgr\"";
  pcStack_28 = "EventFlowSystemActorMgr";
  DAT_050cd408 = DAT_050cd3f8;
  DAT_050cd418 = DAT_050cd3f8;
  DAT_050cd428 = DAT_050cd3f8;
  local_30 = DAT_050cd3f8;
  local_20 = DAT_050cd3f8;
  FUN_007621e0(&DAT_050cd438,0x36,FUN_0118a540,0x338,&local_20,&local_30,3,0,0xffffffff,0,0);
  DAT_050cd528 = 0;
  return;
}

