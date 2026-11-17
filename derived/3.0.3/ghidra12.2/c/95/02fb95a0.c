
void FUN_02fb95a0(void)

{
  uint *puVar1;
  undefined **local_60;
  char *pcStack_58;
  undefined4 local_50;
  char local_4c [7];
  char cStack_45;
  char acStack_44 [7];
  undefined1 local_3d;
  undefined1 local_2d;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined2 local_14;
  
  if (DAT_04c487d4 != -1) {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x18 & 1) != 0) {
      local_50 = 0x20;
      local_4c = (char  [7])s_WherearenGrowUp_0407bb34._0_7_;
      cStack_45 = s_WherearenGrowUp_0407bb34[7];
      acStack_44 = (char  [7])s_WherearenGrowUp_0407bb34._8_7_;
      local_20 = DAT_05694de8;
      local_14 = DAT_05694df4;
      local_2d = 0;
      local_3d = 0;
      pcStack_58 = local_4c;
      local_28 = DAT_05694de0;
      uStack_24 = 1;
      local_1c = DAT_05694dec;
      uStack_18 = DAT_05694df0;
      local_60 = &PTR_LAB_048f9700;
      FUN_0291dd50(&local_60,0,&local_28);
    }
  }
  return;
}

