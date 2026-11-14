
void FUN_0185f908(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined *local_30;
  undefined1 *puStack_28;
  
  *(undefined1 *)(param_1 + 0x580) = 0;
  if ((*(long *)PTR_DAT_04bb4008 == 0) ||
     (uVar1 = FUN_01a12390(*(long *)PTR_DAT_04bb4008,0,*(undefined4 *)(param_1 + 0x3a8)),
     (uVar1 & 1) == 0)) {
    if (*(long *)(*(long *)(*(long *)(param_1 + 0x48) + 0x60) + 0x1138) != 0) {
      FUN_03850760(0x3f800000);
      return;
    }
  }
  else {
    local_30 = PTR_DAT_04bb2020 + 0x10;
    puStack_28 = &DAT_040ba9de;
    if ((*(long *)(param_1 + 0x48) != 0) &&
       (lVar2 = *(long *)(*(long *)(param_1 + 0x48) + 0x60), lVar2 != 0)) {
      FUN_0073d870(lVar2,&local_30,10,0,0);
    }
    if (*(long *)(*(long *)(*(long *)(param_1 + 0x3d0) + 0x60) + 0x1138) != 0) {
      FUN_03850760(0x3f800000);
    }
  }
  return;
}

