
undefined4 FUN_015e9da4(undefined4 *param_1)

{
  long lVar1;
  float fVar2;
  undefined4 uVar3;
  float __x;
  
  uVar3 = *param_1;
  lVar1 = *(long *)(*(long *)PTR_DAT_04bb2200 + 0x78);
  if (lVar1 != 0) {
    __x = *(float *)(lVar1 + 0x40) * 0.017453292 *
          (((float)param_1[2] + *(float *)(lVar1 + 0x38)) / 160.0);
    fVar2 = cosf(__x);
    if (fVar2 != 0.0) {
      cosf(__x);
    }
    sinf(__x);
  }
  return uVar3;
}

