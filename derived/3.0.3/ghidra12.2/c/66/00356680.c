
/* WARNING: Removing unreachable block (ram,0x003566c4) */

long FUN_00356680(long param_1,ushort param_2)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  byte *pbVar7;
  long lVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  pbVar7 = *(byte **)(param_1 + (ulong)param_2 * 8 + 0x18a8);
  bVar1 = *(byte *)(param_1 + (ulong)param_2 + 0x1888);
  lVar3 = *(long *)(param_1 + 0x1bf0);
  uVar6 = (ulong)*pbVar7;
  uVar4 = (uint)*pbVar7;
  if (1 < bVar1) {
    fVar10 = *(float *)(lVar3 + uVar6 * 0x1c + 0xc);
    if (bVar1 == 2) {
      lVar8 = 1;
    }
    else {
      uVar2 = 0;
      do {
        uVar9 = uVar2;
        fVar11 = *(float *)(lVar3 + (ulong)pbVar7[uVar9 + 1] * 0x1c + 0xc);
        uVar5 = (uint)pbVar7[uVar9 + 1];
        if (fVar11 <= fVar10) {
          uVar5 = (uint)uVar6;
        }
        if (fVar11 <= fVar10) {
          fVar11 = fVar10;
        }
        fVar12 = *(float *)(lVar3 + (ulong)pbVar7[uVar9 + 2] * 0x1c + 0xc);
        fVar10 = fVar12;
        if (fVar12 <= fVar11) {
          fVar10 = fVar11;
        }
        uVar4 = (uint)pbVar7[uVar9 + 2];
        if (fVar12 <= fVar11) {
          uVar4 = uVar5;
        }
        uVar6 = (ulong)uVar4;
        uVar2 = uVar9 + 2;
      } while (((ulong)bVar1 - 1 & 0xfffffffffffffffe) != uVar9 + 2);
      lVar8 = uVar9 + 3;
      if (((ulong)bVar1 - 1 & 1) == 0) goto LAB_00356730;
    }
    uVar5 = (uint)pbVar7[lVar8];
    if (*(float *)(lVar3 + (ulong)pbVar7[lVar8] * 0x1c + 0xc) <= fVar10) {
      uVar5 = uVar4;
    }
    uVar6 = (ulong)uVar5;
  }
LAB_00356730:
  return lVar3 + uVar6 * 0x1c;
}

