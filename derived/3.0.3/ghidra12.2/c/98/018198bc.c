
void FUN_018198bc(long param_1)

{
  long lVar1;
  undefined *local_30;
  undefined1 *puStack_28;
  
  local_30 = PTR_DAT_04bb2020 + 0x10;
  puStack_28 = &DAT_040ba9de;
  if ((*(long *)(param_1 + 0x48) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x48) + 0x60), lVar1 != 0)) {
    FUN_0073d870(lVar1,&local_30,10,0,0);
  }
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x3d0) + 0x60) + 0x1138) != 0) {
    FUN_03850760(0x3f800000);
  }
  *(undefined4 *)(param_1 + 0x4c4) = 0;
  return;
}

