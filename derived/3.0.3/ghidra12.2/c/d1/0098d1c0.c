
/* WARNING: Removing unreachable block (ram,0x0098d568) */
/* WARNING: Removing unreachable block (ram,0x0098d578) */
/* WARNING: Removing unreachable block (ram,0x0098d584) */

void FUN_0098d1c0(long *param_1)

{
  byte *pbVar1;
  long lVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  uint uVar11;
  int iVar12;
  float *pfVar13;
  ulong uVar14;
  undefined4 uVar15;
  long lVar16;
  ulong uVar17;
  byte *pbVar18;
  bool bVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  byte local_c8 [4];
  undefined4 local_c4;
  undefined2 local_c0;
  byte local_bc [4];
  undefined4 local_b8;
  undefined2 local_b4;
  ulong local_b0;
  float local_a8;
  float local_44;
  
  *(undefined2 *)((long)param_1 + 0x291) = 0;
  lVar16 = **(long **)PTR_DAT_04bb27d0;
  bVar3 = *(byte *)(lVar16 + 0x473);
  if ((long)(char)bVar3 != 0xffffffffffffffff) {
    pbVar18 = (byte *)(lVar16 + 0x48);
    uVar17 = (long)(char)bVar3 & 0xffffffff;
    pbVar1 = pbVar18 + uVar17 * 0x80;
    if (7 < bVar3) {
      pbVar1 = pbVar18;
    }
    if ((*pbVar1 >> 3 & 1) != 0) {
      lVar16 = (*(long **)PTR_DAT_04bb27d0)[2] + 0x108;
      lVar2 = lVar16 + uVar17 * 0xc;
      if (0xb < bVar3) {
        lVar2 = lVar16;
      }
      if (*(char *)(lVar2 + 10) == '\0') {
        return;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x59) = 0x7f7fffff;
  local_44 = NAN;
  FUN_02507c6c(local_bc,7,1,1,0);
  puVar6 = PTR_DAT_04bb5dc0;
  puVar5 = PTR_DAT_04bb5038;
  puVar4 = PTR_DAT_04bb27a8;
  local_c4 = local_b8;
  local_c8[0] = 0xff;
  if (local_bc[0] < 8) {
    local_c8[0] = local_bc[0];
  }
  local_c0 = local_b4;
  if (local_bc[0] < 8) {
    bVar19 = false;
    do {
      pfVar13 = (float *)FUN_0251b3b0(local_c8,0);
      if (pfVar13 != (float *)0x0) {
        FUN_0251bf88(local_c8,0);
        fVar20 = (float)(**(code **)(*param_1 + 0x108))(param_1);
        uVar11 = FUN_0254e430(local_c8);
        fVar25 = *pfVar13;
        if (*(char *)((long)param_1 + 0x294) == '\0') {
          fVar25 = fVar25 - *(float *)(*(long *)(param_1[9] + 0x68) + 0x278);
          fVar20 = pfVar13[2] - *(float *)(*(long *)(param_1[9] + 0x68) + 0x280);
          fVar20 = SQRT(fVar20 * fVar20 + fVar25 * fVar25);
        }
        else {
          if (((uVar11 & 1) == 0 && (*(byte *)(param_1 + 0x5b) & 1) != 0) && (0.0 < fVar20)) {
            fVar21 = *(float *)(*(long *)(param_1[9] + 0x68) + 0x278) - fVar25;
            fVar23 = *(float *)(*(long *)(param_1[9] + 0x68) + 0x280) - pfVar13[2];
            fVar21 = SQRT(fVar23 * fVar23 + fVar21 * fVar21);
            if (fVar21 <= *(float *)(param_1 + 0x53)) {
              bVar19 = true;
              if (fVar21 <= 0.1) {
                fVar21 = 0.1;
              }
              fVar25 = *(float *)(param_1 + 0x56) +
                       ((fVar20 * *(float *)(param_1 + 0x53)) / fVar21) * *(float *)(param_1 + 0x54)
              ;
              fVar20 = *(float *)((long)param_1 + 700);
              if (fVar25 <= *(float *)((long)param_1 + 700)) {
                fVar20 = fVar25;
              }
              fVar21 = 0.0;
              if (0.0 <= fVar25) {
                fVar21 = fVar20;
              }
              *(float *)(param_1 + 0x56) = fVar21;
              fVar25 = *pfVar13;
            }
          }
          if ((*(byte *)(param_1 + 0x5b) >> 1 & 1) != 0) {
            if (((int)((float)(int)fVar25 / 10.0) - (uint)(fVar25 < 0.0) ==
                 (int)((float)(int)*(float *)((long)param_1 + 0x2dc) / 10.0) -
                 (uint)(*(float *)((long)param_1 + 0x2dc) < 0.0)) &&
               ((int)((float)(int)pfVar13[2] / 10.0) - (uint)(pfVar13[2] < 0.0) ==
                (int)((float)(int)*(float *)((long)param_1 + 0x2e4) / 10.0) -
                (uint)(*(float *)((long)param_1 + 0x2e4) < 0.0))) {
              *(undefined4 *)(param_1 + 0x56) = *(undefined4 *)((long)param_1 + 700);
              fVar25 = *pfVar13;
            }
          }
          fVar21 = pfVar13[1];
          fVar23 = pfVar13[2];
          local_b0 = *(ulong *)(*(long *)(param_1[9] + 0x68) + 0x278);
          local_a8 = *(float *)(*(long *)(param_1[9] + 0x68) + 0x280);
          fVar26 = (local_a8 - fVar23) * (local_a8 - fVar23) +
                   ((float)local_b0 - fVar25) * ((float)local_b0 - fVar25);
          fVar20 = SQRT(fVar26);
          if (fVar20 <= *(float *)(param_1 + 0x53)) {
            if (((uVar11 & 1) != 0) &&
               (*(undefined4 *)(param_1 + 0x56) = *(undefined4 *)((long)param_1 + 700),
               0.0 < *(float *)(param_1 + 0x59))) {
              *(undefined4 *)(param_1 + 0x59) = 0;
              *(float *)((long)param_1 + 0x2cc) = fVar25;
              *(float *)(param_1 + 0x5a) = fVar21;
              *(float *)((long)param_1 + 0x2d4) = fVar23;
            }
            uVar17 = FUN_01262040(puVar6,&local_b0);
            fVar22 = *(float *)(param_1 + 0x59);
            if ((uVar17 & 1) == 0) goto LAB_0098d520;
            *(undefined4 *)(param_1 + 0x56) = *(undefined4 *)((long)param_1 + 700);
            fVar24 = 0.0;
            if (fVar22 <= 0.0) goto LAB_0098d520;
          }
          else {
            fVar22 = *(float *)(param_1 + 0x59);
LAB_0098d520:
            fVar24 = fVar26;
            if (fVar22 <= fVar26) goto LAB_0098d53c;
          }
          *(float *)(param_1 + 0x59) = fVar24;
          *(float *)((long)param_1 + 0x2cc) = fVar25;
          *(float *)(param_1 + 0x5a) = fVar21;
          *(float *)((long)param_1 + 0x2d4) = fVar23;
        }
LAB_0098d53c:
        (**(code **)(*param_1 + 0xf8))(fVar20,param_1,&local_44,local_c8);
        local_b0 = local_b0 & 0xffffffff00000000;
        lVar16 = *(long *)(*(long *)puVar4 + 0x1f8);
        if (lVar16 != 0) {
          fVar22 = *(float *)(*(long *)(param_1[9] + 0x68) + 0x278);
          fVar25 = (float)*(int *)(lVar16 + 0x24) * 5.0;
          fVar24 = *(float *)(*(long *)(param_1[9] + 0x68) + 0x280);
          fVar20 = (float)*(int *)(lVar16 + 0x20) * 5.0;
          fVar26 = (float)*(int *)(lVar16 + 0x34) * 5.0 + 5.0;
          fVar23 = (float)*(int *)(lVar16 + 0x30) * 5.0 + 5.0;
          fVar21 = fVar23;
          if (fVar23 <= fVar20) {
            fVar21 = fVar20;
            fVar20 = fVar23;
          }
          fVar23 = fVar26;
          if (fVar26 <= fVar25) {
            fVar23 = fVar25;
            fVar25 = fVar26;
          }
          bVar7 = false;
          bVar9 = true;
          if (fVar20 <= fVar22) {
            bVar7 = false;
            bVar9 = true;
            if (!NAN(fVar22) && !NAN(fVar21)) {
              bVar7 = fVar22 == fVar21;
              bVar9 = fVar21 <= fVar22;
            }
          }
          bVar8 = false;
          bVar10 = true;
          if (!bVar9 || bVar7) {
            bVar8 = false;
            bVar10 = true;
            if (!NAN(fVar25) && !NAN(fVar24)) {
              bVar8 = fVar25 == fVar24;
              bVar10 = fVar24 <= fVar25;
            }
          }
          bVar7 = false;
          bVar9 = true;
          if (!bVar10 || bVar8) {
            bVar7 = false;
            bVar9 = true;
            if (!NAN(fVar24) && !NAN(fVar23)) {
              bVar7 = fVar24 == fVar23;
              bVar9 = fVar23 <= fVar24;
            }
          }
          if (!bVar9 || bVar7) goto LAB_0098d60c;
        }
        *(undefined1 *)((long)param_1 + 0x293) = 1;
      }
LAB_0098d60c:
      bVar3 = local_c8[0];
      uVar17 = (ulong)local_c8[0];
      if ((7 < local_c8[0]) || (uVar17 + 1 == 8)) goto LAB_0098d724;
      pbVar18 = puVar5 + uVar17 + 1;
      uVar14 = FUN_02507924(local_c8,pbVar18);
      if ((uVar14 & 1) == 0) {
        if (uVar17 + 2 == 8) goto LAB_0098d724;
        pbVar18 = puVar5 + uVar17 + 2;
        uVar14 = FUN_02507924(local_c8,pbVar18);
        if ((uVar14 & 1) == 0) {
          if (uVar17 + 3 == 8) goto LAB_0098d724;
          pbVar18 = puVar5 + uVar17 + 3;
          uVar14 = FUN_02507924(local_c8,pbVar18);
          if ((uVar14 & 1) == 0) {
            if (uVar17 + 4 == 8) goto LAB_0098d724;
            pbVar18 = puVar5 + uVar17 + 4;
            uVar14 = FUN_02507924(local_c8,pbVar18);
            if ((uVar14 & 1) == 0) {
              if (uVar17 + 5 == 8) goto LAB_0098d724;
              pbVar18 = puVar5 + uVar17 + 5;
              uVar14 = FUN_02507924(local_c8,pbVar18);
              if ((uVar14 & 1) == 0) {
                if (uVar17 + 6 == 8) goto LAB_0098d724;
                pbVar18 = puVar5 + uVar17 + 6;
                uVar14 = FUN_02507924(local_c8,pbVar18);
                if ((uVar14 & 1) == 0) {
                  if (uVar17 + 7 == 8) goto LAB_0098d724;
                  pbVar18 = puVar5 + uVar17 + 7;
                  uVar14 = FUN_02507924(local_c8,pbVar18);
                  if ((uVar14 & 1) == 0) {
                    if (bVar3 == 0) goto LAB_0098d724;
                    pbVar18 = puVar5 + uVar17 + 8;
                    FUN_02507924(local_c8,pbVar18);
                  }
                }
              }
            }
          }
        }
      }
      if (7 < *pbVar18) goto LAB_0098d724;
      local_c8[0] = *pbVar18;
    } while( true );
  }
LAB_0098d728:
  fVar20 = 0.0;
  if (0.0 <= *(float *)(param_1 + 0x56) + -0.4) {
    fVar20 = *(float *)(param_1 + 0x56) + -0.4;
  }
  *(float *)(param_1 + 0x56) = fVar20;
LAB_0098d74c:
  if ((*(char *)((long)param_1 + 0x295) != '\0') &&
     (uVar17 = (**(code **)(*param_1 + 0x110))(param_1), (uVar17 & 1) != 0)) {
    if ((float)(int)param_1[0x51] <= *(float *)(param_1 + 0x58)) {
      uVar15 = *(undefined4 *)((long)param_1 + 0x284);
    }
    else {
      uVar11 = (uint)*(float *)(param_1 + 0x58);
      uVar15 = 0;
      *(byte *)((long)param_1 + 0x28c) = (byte)(uVar11 >> 0x1f);
      *(uint *)(param_1 + 0x51) = uVar11 & ((int)uVar11 >> 0x1f ^ 0xffffffffU);
      *(uint *)((long)param_1 + 0x284) = uVar11 & (int)uVar11 >> 0x1f;
    }
    *(undefined4 *)(param_1 + 0x50) = uVar15;
    *(undefined1 *)((long)param_1 + 0x291) = 1;
  }
  *(undefined1 *)((long)param_1 + 0x292) = 1;
  lVar16 = *(long *)(param_1[9] + 0x68) + 0x278;
  uVar17 = FUN_01262040((int)param_1[0x53],PTR_DAT_04bb5b10,lVar16);
  if ((((uVar17 & 1) != 0) ||
      (uVar17 = FUN_01262040((int)param_1[0x53],PTR_DAT_04bb5dc8,lVar16), (uVar17 & 1) != 0)) ||
     (uVar17 = FUN_01262040((int)param_1[0x53],PTR_DAT_04bb5dd0,lVar16), (uVar17 & 1) != 0)) {
    *(undefined4 *)(param_1 + 0x56) = *(undefined4 *)((long)param_1 + 700);
  }
  if (!NAN(local_44)) {
    (**(code **)(*param_1 + 0x100))(param_1,param_1 + 0x4f);
  }
  iVar12 = (**(code **)(param_1[0x4f] + (ulong)*(byte *)((long)param_1 + 0x28c) * 8))
                     (param_1 + 0x4f);
  *(int *)(param_1 + 0x50) = iVar12;
  if (iVar12 == (int)param_1[0x51]) {
    *(undefined1 *)((long)param_1 + 0x293) = 1;
  }
  return;
LAB_0098d724:
  if (bVar19) goto LAB_0098d74c;
  goto LAB_0098d728;
}

