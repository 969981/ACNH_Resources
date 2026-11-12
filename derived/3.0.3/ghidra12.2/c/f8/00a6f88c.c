
undefined8 FUN_00a6f88c(long param_1,undefined8 param_2)

{
  ushort uVar1;
  undefined8 uVar2;
  
  uVar1 = *(ushort *)(param_1 + 0x284);
  if (999 < uVar1) {
    return 0;
  }
  if ((DAT_04c47dc0 < (short)uVar1) ||
     ((&DAT_04d9fe90)[((long)(short)uVar1 & 0xffffffffU) * 4] == 0)) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uVar2 = (&DAT_04d9fe98)[(long)(short)uVar1 * 2];
  }
  uVar2 = FUN_00a77550(param_2,uVar2,0,5);
  return uVar2;
}

