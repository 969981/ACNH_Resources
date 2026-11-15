
bool FUN_01fa2670(long *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  if ((*(short *)((long)param_1 + 0x12184) != -1) && (*(int *)(DAT_05abbc58 + 0xe0) != 0)) {
    lVar3 = 0;
    lVar4 = (long)*(int *)(DAT_05abbc58 + 0xe0) << 3;
    do {
      if (*(short *)(*(long *)(*(long *)(DAT_05abbc58 + 0xe8) + lVar3 * 8) + 0x38) ==
          *(short *)((long)param_1 + 0x12184)) {
        if ((*(ushort *)(*(long *)(*(long *)(DAT_05abbc58 + 0xe8) + lVar3 * 8) + 0x114) >> 5 & 1) !=
            0) {
          return false;
        }
        break;
      }
      lVar3 = lVar3 + 1;
      lVar4 = lVar4 + -8;
    } while (lVar4 != 0);
  }
  if (((((*(int *)((long)param_1 + 0xaf8c) == 2) || (*(int *)((long)param_1 + 0xaf8c) == 3)) ||
       (*(int *)((long)param_1 + 0xaf8c) == 4)) || (*(int *)((long)param_1 + 0xaf8c) == 5)) &&
     (uVar2 = (**(code **)(*param_1 + 0x608))(param_1), (uVar2 & 1) == 0)) {
    uVar1 = (int)param_1[0xef6] - 0x23;
    if ((((uVar1 < 0x33) && ((1L << ((ulong)uVar1 & 0x3f) & 0x4000804000001U) != 0)) ||
        ((((lVar3 = param_1[2], *(int *)(lVar3 + 0x360) != 0x14 && (*(int *)(lVar3 + 0x360) != 0x16)
           ) || ((*(int *)(lVar3 + 0x4b8) != 0 && (*(int *)(lVar3 + 0x378) == 0x23)))) &&
         (*(int *)(*(long *)(lVar3 + 0x358) + 0x750) - 1U < 2)))) ||
       (((int)param_1[0xef6] == 0x3e &&
        (((int)param_1[0x240a] == 0x46 || ((int)param_1[0x240a] == 0x3d)))))) {
      if (*(int *)((long)param_1 + 0xaf8c) - 2U < 3) {
        return (short)param_1[0x23f9] != -2;
      }
      return true;
    }
  }
  return false;
}

