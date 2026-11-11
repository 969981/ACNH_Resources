
void FUN_00669ad0(long param_1,int param_2)

{
  long lVar1;
  int iVar2;
  bool bVar3;
  ulong uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar18;
  undefined8 uVar16;
  undefined8 uVar17;
  float fVar19;
  float fVar21;
  undefined8 uVar20;
  float fVar22;
  float fVar23;
  ulong local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  int local_b4;
  undefined8 local_a0 [2];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  uVar4 = DAT_0413f2e0;
  lVar9 = param_1 + (long)param_2 * 4;
  fVar11 = *(float *)(lVar9 + 0x2960);
  fVar13 = *(float *)(lVar9 + 0x2560);
  lVar1 = param_1 + (long)param_2 * 0x10;
  uVar16 = *(undefined8 *)(lVar1 + 0x1d68);
  uVar10 = *(undefined8 *)(lVar1 + 0x1d60);
  fVar23 = *(float *)(lVar9 + 0x2760) - fVar11;
  fVar19 = (float)uVar10 * fVar13;
  fVar21 = (float)((ulong)uVar10 >> 0x20) * fVar13;
  fVar22 = (float)uVar16 * fVar13;
  fVar13 = (float)((ulong)uVar16 >> 0x20) * fVar13;
  fVar14 = -fVar23;
  local_80 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x90) >> 0x20) + fVar21 * fVar14,
                      (float)*(undefined8 *)(param_1 + 0x90) + fVar19 * fVar14);
  uStack_78 = CONCAT44((float)((ulong)*(undefined8 *)(param_1 + 0x98) >> 0x20) + fVar13 * fVar14,
                       (float)*(undefined8 *)(param_1 + 0x98) + fVar22 * fVar14);
  iVar5 = *(int *)(param_1 + 0xd58);
  if (iVar5 < 1) {
    local_b4 = -1;
  }
  else {
    fVar11 = *(float *)(lVar9 + 0x2760) - (fVar11 + fVar11);
    iVar6 = 0;
    bVar3 = false;
    local_b4 = -1;
    local_d8 = DAT_0413f2f0;
    uVar7 = DAT_0413f2f0;
    do {
      while( true ) {
        iVar2 = 0;
        if (iVar5 <= param_2 + iVar6) {
          iVar2 = iVar5;
        }
        iVar5 = (param_2 + iVar6) - iVar2;
        uVar8 = uVar7;
        if (iVar6 == iVar2) break;
        lVar9 = param_1 + (long)iVar5 * 4;
        if (fVar11 <= *(float *)(lVar9 + 0x2760)) {
          if ((*(char *)(param_1 + iVar5 + 0x2b60) == '\0') &&
             ((float)*(undefined8 *)(param_1 + 0x60) <
              *(float *)(param_1 + (long)iVar5 * 4 + 0x2960))) {
            FUN_00669520(param_1,iVar5);
            if (*(float *)(lVar9 + 0x2760) < fVar11) goto LAB_00669d2c;
          }
          break;
        }
LAB_00669d2c:
        iVar5 = *(int *)(param_1 + 0xd58);
        iVar6 = iVar6 + 1;
        uVar7 = uVar8;
        if (iVar5 <= iVar6) goto LAB_00669d50;
      }
      lVar9 = (long)iVar5;
      uVar8 = uVar4;
      if ((!bVar3) ||
         (lVar1 = param_1 + lVar9 * 0x10, uVar10 = *(undefined8 *)(lVar1 + 0x1d60),
         fVar14 = (fVar19 * (float)uVar10 + fVar21 * (float)((ulong)uVar10 >> 0x20) +
                  fVar22 * (float)*(undefined8 *)(lVar1 + 0x1d68)) *
                  *(float *)(param_1 + lVar9 * 4 + 0x2560), uVar8 = (ulong)(uint)fVar14,
         (float)uVar7 <= fVar14)) {
        FUN_00669840(param_1,iVar5,&local_80,&local_90,local_a0);
        fVar14 = *(float *)(param_1 + lVar9 * 4 + 0x2560);
        fVar15 = (float)*(undefined8 *)(param_1 + 0x60) * fVar14;
        fVar18 = (float)((ulong)*(undefined8 *)(param_1 + 0x60) >> 0x20) * fVar14;
        uVar10 = CONCAT44(fVar14,fVar14);
        fVar12 = (float)local_a0[1];
        if (((0.0 <= (float)((ulong)local_a0[0] >> 0x20) + fVar18 &&
             0.0 <= (float)local_a0[0] + fVar15) && 0.0 <= fVar12 + fVar15) &&
            0.0 <= (float)((ulong)local_a0[1] >> 0x20) + fVar18) {
          uStack_c8 = uStack_88;
          local_d0 = local_90;
          if (iVar6 == iVar2) {
            local_b4 = param_2;
            break;
          }
          if (bVar3) {
            bVar3 = true;
          }
          else {
            lVar9 = param_1 + lVar9 * 0x10;
            uVar10 = *(undefined8 *)(lVar9 + 0x1d60);
            uVar8 = (ulong)(uint)(fVar14 * (fVar19 * (float)uVar10 +
                                            fVar21 * (float)((ulong)uVar10 >> 0x20) +
                                           fVar22 * (float)*(undefined8 *)(lVar9 + 0x1d68)));
            bVar3 = true;
          }
        }
        else {
          if (bVar3) goto LAB_00669c80;
          uVar16 = NEON_fminp(local_a0[0],local_a0[0],4);
          uVar16 = NEON_fmin(CONCAT44(fVar12,fVar12),uVar16,4);
          uVar17 = NEON_frecpe(uVar10,4);
          uVar20 = NEON_frecps(uVar10,uVar17,4);
          fVar14 = (float)uVar17 * (float)uVar20;
          uVar10 = NEON_frecps(uVar10,CONCAT44((float)((ulong)uVar17 >> 0x20) *
                                               (float)((ulong)uVar20 >> 0x20),fVar14),4);
          fVar14 = (float)uVar16 * fVar14 * (float)uVar10;
          bVar3 = false;
          uVar8 = uVar7;
          if (fVar14 <= (float)local_d8) goto LAB_00669d2c;
          local_d8 = (ulong)(uint)fVar14;
        }
        uStack_c8 = uStack_88;
        local_d0 = local_90;
        local_b4 = iVar5;
        goto LAB_00669d2c;
      }
LAB_00669c80:
      bVar3 = true;
      iVar5 = *(int *)(param_1 + 0xd58);
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar5);
  }
LAB_00669d50:
  *(uint *)(param_1 + 0x4de8) = (uint)(fVar23 < 0.0);
  *(undefined4 *)(param_1 + 0x4dec) = 3;
  *(int *)(param_1 + 0x4df0) = local_b4;
  *(ulong *)(param_1 + 0x4e08) = CONCAT44(fVar13,fVar22);
  *(ulong *)(param_1 + 0x4e00) = CONCAT44(fVar21,fVar19);
  *(float *)(param_1 + 0x4e10) = fVar23;
  *(undefined8 *)(param_1 + 0x4e28) = uStack_c8;
  *(undefined8 *)(param_1 + 20000) = local_d0;
  return;
}

