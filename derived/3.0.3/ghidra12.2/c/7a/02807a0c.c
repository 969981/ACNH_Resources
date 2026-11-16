
undefined2 * FUN_02807a0c(long param_1)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  undefined2 *puVar4;
  long lVar5;
  
  if ((*(char *)(param_1 + 0xaf89) == '\0' || 7 < *(byte *)(param_1 + 0xaf88)) &&
     (((*(char *)(param_1 + 0xaf8a) == '\0' || (uVar3 = FUN_016e5e90(), (uVar3 & 1) == 0)) ||
      (1 < *(byte *)(param_1 + 0xaf8b))))) {
    FUN_02814c00(param_1);
    lVar5 = DAT_053274a0;
    uVar2 = FUN_0277d6c4();
    if (DAT_053274a0 != 0) {
      lVar5 = *(long *)(lVar5 + 0x57e58);
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
      if ((uVar2 < *(uint *)(lVar5 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
        return &DAT_05586008;
      }
    }
  }
  bVar1 = *(byte *)(param_1 + 0xaf88);
  if (*(char *)(param_1 + 0xaf89) == '\0' || 7 < bVar1) {
    if (((*(char *)(param_1 + 0xaf8a) == '\0') || (uVar3 = FUN_016e5e90(), (uVar3 & 1) == 0)) ||
       (1 < *(byte *)(param_1 + 0xaf8b))) {
      puVar4 = (undefined2 *)FUN_028159b0(param_1);
      return puVar4;
    }
    param_1 = param_1 + 0xaf90;
  }
  else {
    param_1 = param_1 + (ulong)bVar1 * 0x11f8 + 0x1fc8;
  }
  puVar4 = (undefined2 *)FUN_026e9010(param_1);
  return puVar4;
}

