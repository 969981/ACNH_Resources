
undefined8 FUN_0124e4d0(long param_1)

{
  undefined2 *puVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  puVar1 = (undefined2 *)(param_1 + 8);
  iVar3 = FUN_0277d6c4(puVar1);
  if ((iVar3 != 0xed16) && ((*(uint *)(param_1 + 0xc) >> 0x15 & 1) == 0)) {
    if (((*(uint *)(param_1 + 0xc) & 0x180000) == 0) &&
       (uVar5 = FUN_0123b5b0(*(undefined8 *)(param_1 + 0x10)), (uVar5 & 1) != 0)) {
      *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x180000;
      return 1;
    }
    return 0;
  }
  *puVar1 = 60000;
  lVar2 = DAT_05150358;
  if (DAT_05150358 != 0) {
    uVar6 = 0;
    if ((*(long *)(DAT_05150358 + 0xb0) == 0) ||
       (uVar6 = 0, *(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) == 0)) goto LAB_0124e584;
    uVar4 = FUN_0277d6c4(puVar1);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar2 + 0x1f8);
    if (uVar4 < *(uint *)(lVar2 + 0x1d8)) {
      uVar6 = *(undefined8 *)(*(long *)(lVar2 + 0x1e0) + (long)(int)uVar4 * 8);
      goto LAB_0124e584;
    }
  }
  uVar6 = 0;
LAB_0124e584:
  *(undefined8 *)(param_1 + 0x10) = uVar6;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return 1;
}

