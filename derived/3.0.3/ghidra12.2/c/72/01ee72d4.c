
undefined8 FUN_01ee72d4(long param_1,undefined8 param_2)

{
  ushort uVar1;
  undefined8 uVar2;
  
  uVar1 = *(ushort *)(*(long *)(param_1 + 8) + 0x284);
  if (uVar1 < 1000) {
    if ((DAT_04c47dc0 < (short)uVar1) ||
       (*(int *)(PTR_DAT_04bb6258 + ((long)(short)uVar1 & 0xffffffffU) * 0x10) == 0)) {
      uVar2 = 0xffffffffffffffff;
    }
    else {
      uVar2 = *(undefined8 *)(PTR_DAT_04bb6258 + (long)(short)uVar1 * 0x10 + 8);
    }
    if (DAT_04da4ab8 != 0) {
      uVar2 = FUN_00a77900(DAT_04da4ab8,param_2,uVar2);
      return uVar2;
    }
  }
  return 0;
}

