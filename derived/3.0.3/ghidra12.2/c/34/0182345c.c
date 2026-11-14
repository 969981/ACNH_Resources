
void FUN_0182345c(long param_1)

{
  long lVar1;
  undefined *local_20;
  undefined *puStack_18;
  
  *(undefined1 *)(param_1 + 0x4e4) = 0;
  *(undefined4 *)(param_1 + 0x4e0) = 0x3c;
  *(undefined8 *)(param_1 + 0x4d8) = 0;
  local_20 = PTR_DAT_04bb2020 + 0x10;
  puStack_18 = &DAT_0407c690;
  if ((*(long *)(param_1 + 0x48) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x48) + 0x60), lVar1 != 0)) {
    FUN_0073d870(lVar1,&local_20,10,0,0);
  }
  return;
}

