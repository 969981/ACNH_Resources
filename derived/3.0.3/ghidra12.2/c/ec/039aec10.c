
void FUN_039aec10(long param_1,uint *param_2,uint param_3,undefined8 param_4)

{
  ulong uVar1;
  int iVar2;
  int iVar3;
  short sVar4;
  ushort uVar5;
  uint uVar6;
  short sVar7;
  long lVar8;
  int iVar9;
  short *psVar10;
  long lVar11;
  ulong uVar12;
  int iVar13;
  uint *puVar14;
  
  *param_2 = param_3;
  *(undefined8 *)(param_2 + 2) = param_4;
  param_2[0x2a] = param_2[0x2a] & 0xfffffffb;
  param_2[0x2b] = 0;
  if (((~param_3 & 0xffff) != 0) && (((param_3 >> 0x10 ^ 0xffffffff) & 0xffff) != 0)) {
    uVar6 = (uint)(short)(param_3 >> 0x10);
    if (*(uint *)(param_1 + 0x80) <= uVar6) {
      uVar6 = 0;
    }
    if (0 < *(int *)(*(long *)(param_1 + 0x88) + (long)(int)uVar6 * 0x28 + 8)) {
      FUN_003a4940(param_2 + 6,
                   **(undefined8 **)(*(long *)(param_1 + 0x88) + (long)(int)uVar6 * 0x28));
      param_2[0x2a] = param_2[0x2a] | 2;
    }
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 != 0) {
    lVar8 = *(long *)(param_1 + 0x10);
    iVar9 = 0;
    do {
      *(undefined2 *)(lVar8 + (long)iVar9 * 0x18 + 0x10) = 0;
      iVar9 = iVar9 + 1;
    } while (iVar2 != iVar9);
  }
  iVar2 = *(int *)(param_1 + 0x38);
  if (iVar2 != 0) {
    lVar8 = *(long *)(param_1 + 0x40);
    sVar7 = 0;
    iVar9 = 0;
    do {
      psVar10 = (short *)(lVar8 + (long)iVar9 * 0xb8);
      sVar4 = psVar10[1];
      if (*psVar10 != -1 && sVar4 != -1) {
        uVar6 = (uint)sVar4;
        if (*(uint *)(param_1 + 0x80) <= uVar6) {
          uVar6 = 0;
        }
        lVar11 = *(long *)(param_1 + 0x88) + (long)(int)uVar6 * 0x28;
        iVar3 = *(int *)(lVar11 + 8);
        if (iVar3 != 0) {
          lVar11 = *(long *)(lVar11 + 0x10);
          uVar12 = 0;
          do {
            sVar4 = *(short *)(lVar11 + (-(uVar12 >> 0x1f) & 0xfffffffe00000000 | uVar12 << 1));
            iVar13 = (int)sVar4;
            if (*(uint *)(param_1 + 8) <= (uint)(int)sVar4) {
              iVar13 = 0;
            }
            puVar14 = (uint *)(*(long *)(param_1 + 0x10) + (long)iVar13 * 0x18);
            uVar5 = (ushort)puVar14[4];
            *(ushort *)(puVar14 + 4) = uVar5 + 1;
            uVar6 = (uint)uVar5;
            if (*puVar14 < (uint)uVar5 || *puVar14 == uVar6) {
              uVar6 = 0;
            }
            *(short *)(*(long *)(puVar14 + 2) + (ulong)uVar6 * 2) = sVar7;
            uVar1 = uVar12 + 1;
            uVar12 = uVar1 & 0xffffffff;
          } while (iVar3 != (int)uVar1);
        }
      }
      iVar9 = iVar9 + 1;
      sVar7 = sVar7 + 1;
    } while (iVar2 != iVar9);
  }
  return;
}

