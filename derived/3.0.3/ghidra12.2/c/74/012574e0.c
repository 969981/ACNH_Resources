
void FUN_012574e0(long param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(ushort *)(param_1 + 0x68) = *(ushort *)(param_1 + 0x68) & 0xffef;
  lVar1 = DAT_05150358;
  if (((((DAT_05150358 != 0) && (*(long *)(DAT_05150358 + 0xb0) != 0)) &&
       (*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) != 0)) &&
      ((*(long *)(DAT_05150358 + 0x488) != 0 &&
       (*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) != 0)))) &&
     ((*(long *)(DAT_05150358 + 0x2b0) != 0 && (*(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) != 0)
      ))) {
    uVar2 = FUN_0277d6c4();
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar1 + 0x1f8);
    if ((((uVar2 < *(uint *)(lVar1 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar1 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) &&
        ((*(byte *)(param_1 + 6) & 0x18) == 0)) &&
       (uVar3 = FUN_0123b020(param_1,0,0,0), (uVar3 & 1) != 0)) {
      *(ushort *)(param_1 + 0x68) = *(ushort *)(param_1 + 0x68) | 0x100;
    }
  }
  return;
}

