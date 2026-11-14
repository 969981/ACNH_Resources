
undefined4 FUN_015e9ef4(undefined4 *param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  
  uVar3 = *param_1;
  if (*(long *)(*(long *)PTR_DAT_04bb2200 + 0x78) != 0) {
    fVar1 = atan2f(57600.0 / (*(float *)(*(long *)(*(long *)PTR_DAT_04bb2200 + 0x78) + 0x40) *
                             6.2831855) + (float)param_1[1],(float)param_1[2]);
    fVar2 = cosf(1.5707964 - fVar1);
    if (fVar2 != 0.0) {
      cosf(1.5707964 - fVar1);
    }
  }
  return uVar3;
}

