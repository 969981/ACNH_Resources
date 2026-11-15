
void FUN_024e4d04(long *param_1,float param_2,long param_3)

{
  float *pfVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  ulong local_30;
  float local_28;
  
  lVar11 = *(long *)(param_3 + 0x68);
  uVar4 = *(int *)(lVar11 + 0x2b4) + (int)(long)(param_2 * 11930465.0);
  pfVar1 = (float *)(PTR_DAT_04bb2d00 + (ulong)(uVar4 >> 0x18) * 0x10);
  fVar12 = (float)(uVar4 & 0xffffff) * 5.9604645e-08;
  fVar15 = *pfVar1 + fVar12 * pfVar1[1];
  fVar12 = pfVar1[2] + fVar12 * pfVar1[3];
  fVar13 = *(float *)(lVar11 + 0x278) + fVar15 * 0.0 * 0.0 + fVar12 * 0.0 + (fVar15 + 0.0) * 12.0;
  fVar14 = *(float *)(lVar11 + 0x280) + (fVar12 * 0.0 * 0.0 - fVar15 * 0.0) + fVar12 * 12.0;
  fVar12 = (float)(int)((int)((float)(int)fVar13 / 5.0) - (uint)(fVar13 < 0.0));
  fVar17 = fVar12 * 5.0 + 2.5;
  fVar15 = (float)(int)((int)((float)(int)fVar14 / 5.0) - (uint)(fVar14 < 0.0));
  fVar16 = fVar15 * 5.0 + 2.5;
  if (fVar17 <= fVar13) {
code_r0x024e4e2c:
    local_28 = fVar15 * 5.0;
    bVar10 = false;
    if ((fVar17 <= fVar13) && (bVar10 = false, !NAN(fVar14) && !NAN(fVar16))) {
      bVar10 = fVar14 < fVar16;
    }
    if (bVar10) {
      fVar12 = fVar12 * 5.0 + 5.0;
      goto LAB_024e4e68;
    }
    fVar12 = fVar12 * 5.0 + 5.0;
  }
  else {
    if (fVar14 < fVar16) {
      fVar12 = fVar12 * 5.0;
      local_28 = fVar15 * 5.0;
      goto LAB_024e4e68;
    }
    if (fVar14 < fVar16) goto code_r0x024e4e2c;
    fVar12 = fVar12 * 5.0;
  }
  local_28 = fVar15 * 5.0 + 5.0;
LAB_024e4e68:
  local_30 = (ulong)(uint)fVar12;
  lVar11 = *(long *)PTR_DAT_04bb27c8;
  if (((lVar11 != 0) && (*(long *)(lVar11 + 0xa8) != 0)) && (*(char *)(lVar11 + 0x11c8) == '\0')) {
    FUN_0093a950(lVar11 + 0x28,&local_30,0);
    fVar12 = (float)local_30;
  }
  puVar2 = PTR_DAT_04bbc1a0 + 0x10;
  puVar3 = PTR_DAT_04bb2010 + 0x10;
  param_1[3] = (long)puVar3;
  *param_1 = (long)puVar2;
  param_1[1] = (long)puVar3;
  iVar6 = (int)((float)(int)(fVar12 + -4.0) / 5.0) - (uint)(fVar12 + -4.0 < 0.0);
  iVar7 = (int)((float)(int)(local_28 + -4.0) / 5.0) - (uint)(local_28 + -4.0 < 0.0);
  iVar8 = (int)((float)(int)(fVar12 + 4.0) / 5.0) - (uint)(fVar12 + 4.0 < 0.0);
  iVar9 = (int)((float)(int)(local_28 + 4.0) / 5.0) - (uint)(local_28 + 4.0 < 0.0);
  iVar5 = iVar6;
  if (iVar8 <= iVar6) {
    iVar5 = iVar8;
  }
  if (iVar6 <= iVar8) {
    iVar6 = iVar8;
  }
  iVar8 = iVar7;
  if (iVar9 <= iVar7) {
    iVar8 = iVar9;
  }
  if (iVar7 <= iVar9) {
    iVar7 = iVar9;
  }
  *(int *)(param_1 + 2) = iVar5;
  *(int *)((long)param_1 + 0x14) = iVar8;
  *(int *)(param_1 + 4) = iVar6;
  *(int *)((long)param_1 + 0x24) = iVar7;
  return;
}

