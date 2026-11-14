
void FUN_0185b824(long param_1)

{
  float *pfVar1;
  long lVar2;
  undefined *local_30;
  undefined *puStack_28;
  
  if ((*(long *)(param_1 + 0x3d0) != 0) &&
     (lVar2 = *(long *)(*(long *)(param_1 + 0x3d0) + 0x90), lVar2 != 0)) {
    *(uint *)(lVar2 + 0x178) = *(uint *)(lVar2 + 0x178) & 0xfffffffe;
  }
  local_30 = PTR_DAT_04bb2020 + 0x10;
  puStack_28 = &DAT_0407c690;
  if ((*(long *)(param_1 + 0x48) != 0) &&
     (lVar2 = *(long *)(*(long *)(param_1 + 0x48) + 0x60), lVar2 != 0)) {
    FUN_0073d870(lVar2,&local_30,10,0,0);
  }
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x3d0) + 0x60) + 0x1138) != 0) {
    FUN_03850760(0x3f800000);
  }
  *(undefined1 *)(param_1 + 0x4f4) = 0;
  *(undefined4 *)(param_1 + 0x4f0) = 0x96;
  *(undefined8 *)(param_1 + 0x4e8) = 0;
  FUN_01815e0c(param_1,*(undefined4 *)(param_1 + 0x280),param_1 + 0x328);
  pfVar1 = (float *)(**(code **)(*(long *)(*(long *)(param_1 + 0x460) + 0x1b0) + 0xf0))
                              (*(long *)(param_1 + 0x460) + 0x1b0);
  *(short *)(param_1 + 0x40a) = (short)(int)*pfVar1;
  *(undefined4 *)(param_1 + 0x510) = 5;
  return;
}

