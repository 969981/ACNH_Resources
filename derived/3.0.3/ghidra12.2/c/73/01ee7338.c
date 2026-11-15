
undefined8 FUN_01ee7338(long param_1,undefined8 param_2,uint param_3)

{
  ushort uVar1;
  undefined8 uVar2;
  
  uVar1 = *(ushort *)(*(long *)(param_1 + 8) + 0x284);
  if (999 < uVar1) {
    return 0;
  }
  if ((DAT_04c47dc0 < (short)uVar1) ||
     (*(int *)(PTR_DAT_04bb6258 + ((long)(short)uVar1 & 0xffffffffU) * 0x10) == 0)) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    uVar2 = *(undefined8 *)(PTR_DAT_04bb6258 + (long)(short)uVar1 * 0x10 + 8);
  }
  uVar2 = FUN_00a77550(param_2,uVar2,param_3 & 1,1);
  return uVar2;
}

