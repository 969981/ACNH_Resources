
void FUN_03c40ccc(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *local_68;
  char *pcStack_60;
  undefined *local_58;
  undefined *puStack_50;
  undefined *local_48;
  undefined8 *puStack_40;
  undefined4 local_38;
  
  FUN_03c11314(param_1,param_2,"Lp::Sys::SoundMgr");
  *param_1 = &PTR_FUN_04b7f418;
  param_1[0x45] = &PTR_LAB_04b7f4f0;
  FUN_038e18e4(param_1 + 0x46);
  *(undefined4 *)(param_1 + 0x4e) = 0;
  *(undefined4 *)((long)param_1 + 0x274) = 0;
  FUN_038e3114(param_1 + 0x4f,0,0x7fff);
  *(undefined4 *)(param_1 + 0x58) = 0;
  FUN_038e3114(param_1 + 0x59,0,0x7fff);
  *(undefined4 *)(param_1 + 0x62) = 0;
  param_1[0x66] = &PTR_LAB_04b7f780;
  param_1[99] = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined1 *)(param_1 + 0x65) = 0;
  *(undefined4 *)(param_1 + 0x69) = 0;
  param_1[0x68] = param_1 + 0x67;
  param_1[0x67] = param_1 + 0x67;
  *(undefined4 *)(param_1 + 0x6a) = 0;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_38 = 0;
  puStack_50 = &DAT_0407d7d3;
  pcStack_60 = "SoundMgrParams";
  puStack_40 = &DAT_0407ebb1;
  local_68 = puVar1;
  local_58 = puVar1;
  local_48 = puVar1;
  FUN_03c40e20(param_1 + 0x6b,&local_68,0);
  *(undefined4 *)(param_1 + 0xf7) = 0;
  param_1[0xf6] = param_1 + 0xf5;
  param_1[0xf5] = param_1 + 0xf5;
  param_1[0xf8] = 0;
  param_1[0xf9] = 0;
  param_1[0xfa] = 0;
  param_1[0xfb] = 0;
  param_1[0xfc] = 0;
  *(undefined4 *)(param_1 + 0xfd) = 0xbf800000;
  *(undefined1 *)((long)param_1 + 0x7ec) = 0;
  param_1[0xfe] = 0;
  *(undefined2 *)(param_1 + 0xff) = 0;
  *(undefined4 *)((long)param_1 + 0x7fc) = 0;
  pcStack_60 = "Lp::Sys::SoundMgr";
  local_68 = puVar1;
  FUN_03c0e010(param_1 + 0x100,&local_68);
  param_1[0x100] = &DAT_04b7f510;
  return;
}

