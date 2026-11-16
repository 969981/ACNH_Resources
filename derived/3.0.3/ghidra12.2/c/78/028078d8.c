
undefined8 FUN_028078d8(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  
  if ((*(char *)(param_1 + 0xaf89) == '\0' || 7 < *(byte *)(param_1 + 0xaf88)) &&
     (((*(char *)(param_1 + 0xaf8a) == '\0' || (uVar4 = FUN_016e5e90(), (uVar4 & 1) == 0)) ||
      (1 < *(byte *)(param_1 + 0xaf8b))))) {
    uVar5 = FUN_02814c00(param_1);
    puVar2 = PTR_DAT_04bb43c0;
    lVar6 = *(long *)PTR_DAT_04bb43c0;
    uVar3 = FUN_0277d6c4();
    if (*(long *)puVar2 != 0) {
      lVar6 = *(long *)(lVar6 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar6 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
        return uVar5;
      }
    }
  }
  bVar1 = *(byte *)(param_1 + 0xaf88);
  if (*(char *)(param_1 + 0xaf89) == '\0' || 7 < bVar1) {
    if (((*(char *)(param_1 + 0xaf8a) == '\0') || (uVar4 = FUN_016e5e90(), (uVar4 & 1) == 0)) ||
       (1 < *(byte *)(param_1 + 0xaf8b))) {
      uVar5 = FUN_02814e30(param_1);
      return uVar5;
    }
    param_1 = param_1 + 0xaf90;
  }
  else {
    param_1 = param_1 + (ulong)bVar1 * 0x11f8 + 0x1fc8;
  }
  uVar5 = FUN_026e8d10(param_1);
  return uVar5;
}

