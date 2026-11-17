
void FUN_02eceac0(long *param_1)

{
  long lVar1;
  undefined *local_48;
  char *pcStack_40;
  undefined **local_38;
  undefined4 local_30;
  undefined2 local_2c;
  byte local_2a;
  undefined4 local_28;
  undefined4 local_24;
  
  local_38 = &PTR_LAB_04add638;
  local_2a = *(byte *)(param_1 + 0x3f);
  if (7 < local_2a) {
    local_2a = 0xff;
  }
  local_30 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
  local_2c = 1;
  local_28 = 0xffffffff;
  local_24 = (**(code **)(*param_1 + 0x208))();
  local_48 = PTR_DAT_04bb2020 + 0x10;
  pcStack_40 = "InteriorGuideSeq";
  lVar1 = FUN_02eceb6c(param_1[0x13],&local_48,param_1,&local_38);
  param_1[0x42] = lVar1;
  return;
}

