
void FUN_018954f8(long param_1)

{
  long lVar1;
  undefined *local_20;
  undefined *puStack_18;
  
  *(undefined4 *)(param_1 + 0x408) = 0;
  local_20 = PTR_DAT_04bb2020 + 0x10;
  puStack_18 = &DAT_040772ae;
  if ((*(long *)(param_1 + 0x48) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x48) + 0x60), lVar1 != 0)) {
    FUN_0073d870(lVar1,&local_20,10,0,0);
  }
  return;
}

