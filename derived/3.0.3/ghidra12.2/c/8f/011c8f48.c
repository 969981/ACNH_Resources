
uint FUN_011c8f48(long param_1)

{
  uint uVar1;
  char cVar2;
  long lVar3;
  uint uVar4;
  undefined1 auStack_38 [24];
  
  if (*(int *)(param_1 + 0x100) != 0) {
    return 0;
  }
  cVar2 = *(char *)(param_1 + 0x117);
  if ((cVar2 != '\0') && (*(char *)(param_1 + 0x117) = cVar2 + -1, cVar2 == '\x01')) {
    if (((uint)*(ulong *)(param_1 + 0x108) >> 10 & 1) == 0) {
      uVar4 = 1;
      uVar1 = DAT_0514cb58 ^ DAT_0514cb58 << 0xb;
      DAT_0514cb58 = DAT_0514cb5c;
      DAT_0514cb5c = DAT_0514cb60;
      uVar1 = uVar1 >> 8 ^ DAT_0514cb64 >> 0x13 ^ uVar1 ^ DAT_0514cb64;
      DAT_0514cb60 = DAT_0514cb64;
      DAT_0514cb64 = uVar1;
      *(char *)(param_1 + 0x117) = (char)((ulong)uVar1 * 100 >> 0x20) + 'd';
      goto LAB_011c8f88;
    }
    *(ulong *)(param_1 + 0x108) = *(ulong *)(param_1 + 0x108) & 0xfffffffffffffbff;
    lVar3 = DAT_05150358;
    if (((((DAT_05150358 != 0) && (*(long *)(DAT_05150358 + 0xb0) != 0)) &&
         (*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) != 0)) &&
        ((*(long *)(DAT_05150358 + 0x488) != 0 &&
         (*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) != 0)))) &&
       ((*(long *)(DAT_05150358 + 0x2b0) != 0 &&
        (*(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) != 0)))) {
      uVar4 = FUN_0277d6c4(param_1);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar3 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar3 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar3 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
        FUN_0124c030(auStack_38,param_1);
        uVar4 = FUN_011d0540(param_1,auStack_38);
        goto LAB_011c8f88;
      }
    }
  }
  uVar4 = 0;
LAB_011c8f88:
  return uVar4 & 1;
}

