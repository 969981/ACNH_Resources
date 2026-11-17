
void FUN_02f54270(long param_1)

{
  undefined8 uVar1;
  undefined *local_48;
  char *pcStack_40;
  undefined *local_38;
  undefined4 local_30;
  undefined2 local_2c;
  byte local_2a;
  undefined4 local_28;
  
  local_38 = PTR_DAT_04bc39b0 + 0x10;
  local_30 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
  local_2c = 1;
  local_2a = *(byte *)(param_1 + 0x1f8);
  local_28 = 0xffffffff;
  local_48 = PTR_DAT_04bb2020 + 0x10;
  if (7 < local_2a) {
    local_2a = 0xff;
  }
  pcStack_40 = "IllegalReportSeq";
  uVar1 = FUN_02c26a98(*(undefined8 *)(param_1 + 0x98),&local_48,param_1,&local_38);
  *(undefined8 *)(param_1 + 0x218) = uVar1;
  return;
}

