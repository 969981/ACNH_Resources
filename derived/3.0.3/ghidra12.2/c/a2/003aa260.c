
void FUN_003aa260(long param_1,long param_2)

{
  uint uVar1;
  ushort uVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  float fVar13;
  float fVar14;
  
  uVar2 = *(ushort *)(param_1 + 100);
  if ((ulong)uVar2 != 0) {
    uVar7 = 0;
    do {
      uVar1 = *(uint *)(*(long *)(param_1 + 0x58) + uVar7 * 4);
      if (-1 < (int)uVar1) {
        fVar13 = 1.0;
        uVar8 = (ulong)uVar1 & 0x7fff;
        lVar9 = *(long *)(param_2 + 0x40);
        lVar11 = *(long *)(param_1 + 0x70) + uVar7 * 0x30;
        lVar10 = (long)*(int *)(lVar11 + 0x28);
        uVar12 = (ulong)*(ushort *)(lVar11 + 0x22);
        if (1 < uVar12) {
          lVar4 = lVar9 + uVar8 * 0x70;
          lVar5 = *(long *)(param_1 + 0x48);
          fVar13 = 1.0;
          lVar11 = uVar12 - 1;
          lVar6 = lVar10;
          do {
            lVar6 = lVar6 + 1;
            cVar3 = *(char *)(*(long *)(param_1 + 0x80) + lVar6);
            if (cVar3 != -1) {
              fVar14 = *(float *)(lVar5 + lVar6 * 4);
              fVar13 = fVar13 - fVar14;
              *(float *)(*(long *)(lVar4 + 0x28) + (long)(int)cVar3 * 4) = fVar14;
              *(uint *)(lVar4 + 8) = *(uint *)(lVar4 + 8) | 2;
              uVar1 = (int)cVar3 >> 5;
              uVar12 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
              *(uint *)(*(long *)(lVar4 + 0x30) + uVar12) =
                   *(uint *)(*(long *)(lVar4 + 0x30) + uVar12) | 1 << (ulong)((int)cVar3 & 0x1f);
            }
            lVar11 = lVar11 + -1;
          } while (lVar11 != 0);
        }
        lVar9 = lVar9 + uVar8 * 0x70;
        cVar3 = *(char *)(*(long *)(param_1 + 0x80) + lVar10);
        *(float *)(*(long *)(lVar9 + 0x28) + (long)cVar3 * 4) = fVar13;
        *(uint *)(lVar9 + 8) = *(uint *)(lVar9 + 8) | 2;
        uVar1 = (int)cVar3 >> 5;
        uVar8 = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
        *(uint *)(*(long *)(lVar9 + 0x30) + uVar8) =
             *(uint *)(*(long *)(lVar9 + 0x30) + uVar8) | 1 << (ulong)((int)cVar3 & 0x1f);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != uVar2);
  }
  return;
}

