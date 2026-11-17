
void FUN_030268d0(long *param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0x100);
  if (lVar3 != 0) {
    uVar1 = FUN_01596728(param_1 + 0x3834);
    if ((uVar1 & 1) != 0) {
      FUN_015a30c0(lVar3,param_1 + 0x3834);
    }
  }
  plVar2 = (long *)param_1[0x3833];
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))();
    param_1[0x3833] = 0;
  }
  FUN_034129e0(param_1 + 0x48);
  *param_1 = (long)(PTR_DAT_04bc5668 + 0x10);
  FUN_03ebae78(param_1 + 0x35);
  if ((long *)param_1[0x41] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x41] + 8))();
    param_1[0x41] = 0;
  }
  FUN_03868660(param_1);
  return;
}

