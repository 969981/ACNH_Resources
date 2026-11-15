
uint FUN_02004a34(undefined8 param_1,undefined8 param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auStack_38 [16];
  undefined8 local_28;
  
  lVar2 = DAT_05150358;
  lVar5 = *param_3;
  if ((lVar5 != 0) && (DAT_05150358 != 0)) {
    uVar3 = 0;
    if (((*(long *)(DAT_05150358 + 0xb0) == 0) ||
        (((uVar3 = 0, *(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) == 0 ||
          (uVar3 = 0, *(long *)(DAT_05150358 + 0x488) == 0)) ||
         (uVar3 = 0, *(long *)(*(long *)(DAT_05150358 + 0x488) + 8) == 0)))) ||
       ((uVar3 = 0, *(long *)(DAT_05150358 + 0x2b0) == 0 ||
        (uVar3 = 0, *(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) == 0)))) goto LAB_02004aec;
    uVar3 = FUN_0277d6c4(lVar5);
    uVar1 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar2 + 0x1f8);
    if (uVar1 < *(uint *)(lVar2 + 0x1d8)) {
      uVar3 = 0;
      if (*(long *)(*(long *)(lVar2 + 0x1e0) + (long)(int)uVar1 * 8) == 0) goto LAB_02004aec;
      FUN_0124c030(auStack_38,lVar5);
      uVar4 = FUN_0123d890(local_28,4);
      if ((uVar4 & 1) != 0) {
        uVar3 = FUN_0123d890(local_28,0);
        uVar3 = uVar3 ^ 1;
        goto LAB_02004aec;
      }
    }
  }
  uVar3 = 0;
LAB_02004aec:
  return uVar3 & 1;
}

