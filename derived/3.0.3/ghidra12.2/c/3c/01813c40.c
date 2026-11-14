
void FUN_01813c40(long *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  char *pcVar12;
  float fVar13;
  byte bVar14;
  
  if (*(char *)((long)param_1 + 0x432) != '\0') {
    return;
  }
  if (*(char *)((long)param_1 + 0x435) != '\0') {
    return;
  }
  bVar14 = *(byte *)(*DAT_0537d558 + 0x473);
  if ((long)(char)bVar14 == 0xffffffffffffffff) {
LAB_01813c9c:
    lVar8 = param_1[0x7a];
  }
  else {
    pbVar1 = (byte *)(*DAT_0537d558 + 0x48);
    uVar11 = (long)(char)bVar14 & 0xffffffff;
    pbVar2 = pbVar1 + uVar11 * 0x80;
    if (7 < bVar14) {
      pbVar2 = pbVar1;
    }
    if ((*pbVar2 >> 3 & 1) == 0) goto LAB_01813c9c;
    lVar9 = DAT_0537d558[2] + 0x108 + uVar11 * 0xc;
    if (0xb < bVar14) {
      lVar9 = DAT_0537d558[2] + 0x108;
    }
    lVar8 = param_1[0x7a];
    if (*(char *)(lVar9 + 10) == '\0') {
      lVar9 = (long)(int)*(uint *)(lVar8 + 0x2e0);
      lVar10 = *(long *)(*(long *)PTR_DAT_04bb4790 + 0x10);
      if (*(uint *)(*(long *)PTR_DAT_04bb4790 + 8) <= *(uint *)(lVar8 + 0x2e0) || lVar10 == 0) {
        lVar9 = 0;
      }
      lVar10 = lVar10 + lVar9 * 10;
      bVar14 = *(byte *)(lVar10 + 9);
      fVar13 = (float)NEON_ucvtf((uint)*(byte *)(lVar10 + 8));
      *(float *)(param_1 + 0x87) = fVar13 * 10.0 + 5.0;
      fVar13 = (float)NEON_ucvtf((uint)bVar14);
      fVar13 = fVar13 * 10.0 + 5.0;
      goto LAB_01813cdc;
    }
  }
  *(undefined4 *)(param_1 + 0x87) = *(undefined4 *)(lVar8 + 0x160);
  *(undefined4 *)((long)param_1 + 0x43c) = *(undefined4 *)(lVar8 + 0x164);
  fVar13 = *(float *)(lVar8 + 0x168);
LAB_01813cdc:
  *(float *)(param_1 + 0x88) = fVar13;
  uVar7 = (**(code **)(*param_1 + 0x100))(param_1);
  lVar8 = DAT_052ae7b0;
  if (DAT_052ae7b0 != 0) {
    iVar3 = (int)((float)(int)*(float *)(param_1 + 0x87) / 10.0) -
            (uint)(*(float *)(param_1 + 0x87) < 0.0);
    iVar4 = (int)((float)(int)*(float *)(param_1 + 0x88) / 10.0) -
            (uint)(*(float *)(param_1 + 0x88) < 0.0);
    uVar6 = iVar3 - *(int *)(PTR_DAT_04bbec38 + 0x10);
    if (((*(int *)(PTR_DAT_04bbec38 + 0x10) <= iVar3 && iVar3 <= *(int *)(PTR_DAT_04bbec38 + 0x20))
        && *(int *)(PTR_DAT_04bbec38 + 0x14) <= iVar4) && iVar4 <= *(int *)(PTR_DAT_04bbec38 + 0x24)
       ) {
      uVar5 = iVar4 - *(int *)(PTR_DAT_04bbec38 + 0x14);
      lVar9 = (long)(int)(uVar6 + DAT_052ae7a8 * uVar5);
      if (DAT_052ae7ac <= uVar5 || DAT_052ae7a8 <= uVar6) {
        lVar9 = 0;
      }
      pcVar12 = (char *)(DAT_052ae7b0 + lVar9 * 8 + 4);
      if (*pcVar12 == '\0') {
        *pcVar12 = '\x01';
        *(undefined4 *)(lVar8 + lVar9 * 8) = uVar7;
      }
    }
  }
  *(undefined1 *)((long)param_1 + 0x435) = 1;
  return;
}

