
ulong FUN_0038a714(long param_1,void *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  if ((*(long *)(param_1 + 0xf0) == 0) || (*(long *)(param_1 + 0xd8) == 0)) {
    return 0;
  }
  uVar3 = 0;
  uVar2 = 0;
  if (*(ushort *)(param_1 + 0x110) != 0) {
    uVar2 = *(ushort *)(param_1 + 0x110) - 1;
  }
  if ((param_3 & 0xffff) < uVar2) {
    uVar2 = (uVar2 & 0xffff) - (param_3 & 0xffff);
    if ((int)(param_4 & 0xffff) <= (int)uVar2) {
      uVar2 = param_4 & 0xffff;
    }
    uVar3 = (ulong)uVar2;
    memcpy((void *)(*(long *)(param_1 + 0xd8) + (ulong)(ushort)param_3 * 2),param_2,
           -(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | uVar3 << 1);
    uVar1 = 0;
    if (**(short **)(param_1 + 0xd8) != 0) {
      uVar1 = uVar2 + param_3;
    }
    *(short *)(param_1 + 0x112) = (short)uVar1;
    (*(short **)(param_1 + 0xd8))[(ulong)uVar1 & 0xffff] = 0;
    *(ushort *)(param_1 + 0x114) = *(ushort *)(param_1 + 0x114) | 4;
    *(byte *)(param_1 + 0x5c) = *(byte *)(param_1 + 0x5c) & 0xef;
  }
  return uVar3;
}

