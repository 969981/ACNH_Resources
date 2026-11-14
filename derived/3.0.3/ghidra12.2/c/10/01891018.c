
void FUN_01891018(long param_1)

{
  long lVar1;
  undefined *local_30;
  undefined *puStack_28;
  
  *(undefined1 *)(param_1 + 0x464) = 0;
  *(undefined4 *)(param_1 + 0x460) = 0x3c;
  *(undefined8 *)(param_1 + 0x458) = 0;
  local_30 = PTR_DAT_04bb2020 + 0x10;
  puStack_28 = &DAT_0407c690;
  if ((*(long *)(param_1 + 0x48) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x48) + 0x60), lVar1 != 0)) {
    FUN_0073d870(lVar1,&local_30,10,0,0);
  }
  *(undefined4 *)(param_1 + 0x4b8) = 1;
  return;
}

