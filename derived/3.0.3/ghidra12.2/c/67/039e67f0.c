
void FUN_039e67f0(long param_1,uint param_2,float *param_3)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  char cVar7;
  byte bVar8;
  ushort uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  long lVar14;
  char *pcVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float local_80;
  float fStack_7c;
  float local_78;
  float local_74;
  
  lVar17 = *(long *)(param_1 + 0x180);
  lVar16 = param_1;
  if (*(uint *)(param_1 + 0x178) <= param_2) {
    param_2 = 0;
  }
  do {
    lVar14 = lVar16;
    lVar16 = *(long *)(lVar14 + 0x170);
  } while (lVar16 != 0);
  bVar6 = *(byte *)(param_1 + 0x30b);
  lVar16 = lVar17 + (long)(int)param_2 * 0x620;
  plVar1 = (long *)(lVar16 + 0x5a8);
  if (*(int *)(lVar14 + 0x848) == 2) {
    if (bVar6 != 0) {
      uVar13 = 0;
      do {
        lVar14 = param_1 + 0x310 + (long)(int)uVar13 * 0x5c;
        local_78 = *(float *)(lVar14 + 0x50);
        local_80 = *(float *)(lVar14 + 0x48);
        fStack_7c = *(float *)(lVar14 + 0x4c);
        fVar20 = SQRT(fStack_7c * fStack_7c + local_80 * local_80 + local_78 * local_78);
        if (0.0 < fVar20) {
          fVar20 = 1.0 / fVar20;
          local_80 = local_80 * fVar20;
          fStack_7c = fStack_7c * fVar20;
          local_78 = local_78 * fVar20;
        }
        lVar14 = *(long *)(lVar17 + (long)(int)param_2 * 0x620 + 0x5b8);
        local_74 = 0.0;
        (**(code **)(*plVar1 + 0x20))(plVar1);
        (**(code **)(*plVar1 + 0x20))(plVar1);
        lVar18 = **(long **)(lVar16 + 0x5b0);
        bVar8 = (&DAT_041b370c)[(ulong)*(byte *)(lVar18 + 0x14) * 4];
        uVar10 = (**(code **)(*plVar1 + 0x18))(plVar1);
        if ((ulong)bVar8 != 0) {
          memcpy((void *)(lVar14 + (ulong)*(ushort *)(lVar18 + 0x10) +
                         ((long)((ulong)(uVar13 * (uVar10 & 0xff)) << 0x20) >> 0x1e)),&local_80,
                 (ulong)bVar8 << 2);
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 != bVar6);
    }
  }
  else if (bVar6 != 0) {
    uVar13 = 0;
    do {
      pcVar15 = (char *)(param_1 + 0x310 + (long)(int)uVar13 * 0x5c);
      cVar7 = *pcVar15;
      if (cVar7 == '\x02') {
        fStack_7c = 0.0;
        local_78 = -1.0;
        local_80 = 0.0;
      }
      else {
        fVar20 = *(float *)(pcVar15 + 0x48);
        fVar19 = *(float *)(pcVar15 + 0x4c);
        fVar21 = *(float *)(pcVar15 + 0x50);
        local_80 = fVar19 * param_3[1] + fVar20 * *param_3 + fVar21 * param_3[2];
        fStack_7c = fVar19 * param_3[5] + fVar20 * param_3[4] + fVar21 * param_3[6];
        local_78 = fVar19 * param_3[9] + fVar20 * param_3[8] + fVar21 * param_3[10];
        if (cVar7 == '\x01') {
          local_78 = local_78 + -1.0;
        }
        else if (cVar7 != '\0') goto LAB_039e6a3c;
        fVar20 = SQRT(fStack_7c * fStack_7c + local_80 * local_80 + local_78 * local_78);
        if (0.0 < fVar20) {
          fVar20 = 1.0 / fVar20;
          local_80 = local_80 * fVar20;
          fStack_7c = fStack_7c * fVar20;
          local_78 = local_78 * fVar20;
        }
      }
LAB_039e6a3c:
      lVar14 = *(long *)(lVar17 + (long)(int)param_2 * 0x620 + 0x5b8);
      local_74 = 0.0;
      (**(code **)(*plVar1 + 0x20))(plVar1);
      (**(code **)(*plVar1 + 0x20))(plVar1);
      lVar18 = **(long **)(lVar16 + 0x5b0);
      bVar8 = (&DAT_041b370c)[(ulong)*(byte *)(lVar18 + 0x14) * 4];
      uVar10 = (**(code **)(*plVar1 + 0x18))(plVar1);
      if ((ulong)bVar8 != 0) {
        memcpy((void *)(lVar14 + (ulong)*(ushort *)(lVar18 + 0x10) +
                       ((long)((ulong)(uVar13 * (uVar10 & 0xff)) << 0x20) >> 0x1e)),&local_80,
               (ulong)bVar8 << 2);
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 != bVar6);
  }
  if (*(char *)(param_1 + 0x728) == '\0') {
    local_74 = 0.0;
  }
  else {
    fVar19 = *(float *)(param_1 + 0x5f4) * param_3[9] + *(float *)(param_1 + 0x5f0) * param_3[8] +
             *(float *)(param_1 + 0x5f8) * param_3[10];
    fVar20 = 0.0;
    if (fVar19 <= 1.0) {
      fVar20 = fVar19 + -1.0;
    }
    fVar21 = -1.0;
    if (0.0 <= fVar19) {
      fVar21 = fVar20;
    }
    local_74 = *(float *)(param_1 + 0x748) * (*(float *)(param_1 + 0x7a8) * fVar21 + 1.0);
  }
  lVar14 = lVar17 + (long)(int)param_2 * 0x620;
  local_80 = local_74 * *(float *)(param_1 + 0x5fc);
  fStack_7c = local_74 * *(float *)(param_1 + 0x600);
  local_78 = local_74 * *(float *)(param_1 + 0x604);
  local_74 = local_74 * *(float *)(param_1 + 0x608);
  lVar18 = *(long *)(lVar14 + 0x5b8);
  piVar2 = (int *)(lVar14 + 0x5d8);
  (**(code **)(*plVar1 + 0x20))(plVar1);
  (**(code **)(*plVar1 + 0x20))(plVar1);
  lVar16 = **(long **)(lVar16 + 0x5b0);
  bVar6 = (&DAT_041b370c)[(ulong)*(byte *)(lVar16 + 8) * 4];
  (**(code **)(*plVar1 + 0x18))(plVar1);
  if ((ulong)bVar6 != 0) {
    memcpy((void *)(lVar18 + (ulong)*(ushort *)(lVar16 + 4)),&local_80,(ulong)bVar6 << 2);
  }
  lVar17 = lVar17 + (long)(int)param_2 * 0x620;
  iVar3 = *piVar2;
  bVar6 = *(byte *)(lVar17 + 0x5e1);
  uVar9 = *(ushort *)(lVar17 + 0x5e2);
  iVar11 = (**(code **)(*plVar1 + 0x20))(plVar1);
  iVar12 = (**(code **)(*plVar1 + 0x20))(plVar1);
  lVar16 = *(long *)(lVar17 + 0x5c8);
  if (lVar16 != 0) {
    iVar4 = *piVar2;
    iVar5 = *(int *)(lVar17 + 0x5c0);
    uVar13 = (**(code **)PTR_DAT_04bcf030)(lVar16);
    if ((uVar13 >> 2 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x039e6c94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_04c61fd8)(lVar16,iVar5 + (uint)uVar9 * (uint)bVar6 * ((iVar3 + iVar11) - 1U & -iVar12),
                      iVar4);
      return;
    }
  }
  return;
}

