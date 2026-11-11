
void FUN_003a22a0(long *param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  
  if (param_1[9] != 0) {
    FUN_003a29b0(param_1 + 0xb);
    uVar2 = 1 << (ulong)(param_2 & 0x1f);
    if ((uVar2 & *(byte *)((long)param_1 + 0x75)) != 0) {
      lVar5 = FUN_00347cc4(param_1[8] + (long)(int)param_2 * 0x48);
      uVar1 = *(ushort *)(*param_1 + 0xe4);
      if ((ulong)uVar1 != 0) {
        uVar6 = 0;
        do {
          *(byte *)((long)param_1 + 0x75) = *(byte *)((long)param_1 + 0x75) & ~(byte)uVar2;
          uVar9 = *(uint *)(param_1[0xc] + (long)(int)(*(int *)((long)param_1 + 0x6c) * param_2) * 4
                           + uVar6 * 4);
          if (uVar9 != 0) {
            do {
              uVar3 = uVar9 | uVar9 >> 1;
              uVar3 = uVar3 | uVar3 >> 2;
              uVar3 = uVar3 | uVar3 >> 4;
              uVar3 = uVar3 | uVar3 >> 8;
              uVar3 = uVar3 | uVar3 >> 0x10;
              uVar3 = (~uVar3 >> 1 & 0x55555555) + ((uVar3 ^ 0xffffffff) & 0x55555555);
              uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
              uVar3 = (uVar3 >> 4 & 0x7070707) + (uVar3 & 0x7070707);
              uVar3 = (uVar3 >> 8 & 0xf000f) + (uVar3 & 0xf000f);
              uVar3 = (uVar3 & 0x1f) + (uVar3 >> 0x10);
              lVar8 = *(long *)(*param_1 + 8) +
                      (long)(int)(((int)uVar6 << 5 | 0x1fU) - uVar3) * 0x28;
              if (*(short *)(lVar8 + 0x1a) != 0) {
                lVar7 = *(long *)(lVar8 + 0x10);
                iVar4 = FUN_0039fcfc(lVar8,param_1[3]);
                *(undefined4 *)((ulong)*(ushort *)(lVar8 + 0x1a) + lVar5 + -1) =
                     *(undefined4 *)(lVar7 + (long)iVar4 * 4);
              }
              uVar9 = 0x80000000U >> (ulong)(uVar3 & 0x1f) ^ uVar9;
            } while (uVar9 != 0);
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 != (ulong)uVar1 + 0x1f >> 5);
      }
      uVar2 = *(uint *)((long)param_1 + 0x6c);
      if (0 < (int)uVar2) {
        memset((void *)(param_1[0xc] + (long)(int)(uVar2 * param_2) * 4),0,(ulong)uVar2 << 2);
      }
      FUN_00347cdc(param_1[8] + (long)(int)param_2 * 0x48,0,param_1[9]);
      FUN_00347cd8(param_1[8] + (long)(int)param_2 * 0x48);
      return;
    }
  }
  return;
}

