
/* WARNING: Removing unreachable block (ram,0x01311910) */
/* WARNING: Removing unreachable block (ram,0x013119b0) */

void FUN_01311890(long param_1)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  short sVar4;
  short sVar5;
  float fVar6;
  undefined *puVar7;
  bool bVar8;
  int iVar9;
  char *pcVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  short *psVar14;
  ulong uVar15;
  long lVar16;
  uint uVar17;
  long lVar18;
  long *plVar19;
  undefined8 *puVar20;
  short *psVar21;
  float fVar22;
  float __x;
  float fVar23;
  undefined8 local_d8;
  undefined8 local_d0;
  float local_c8;
  float fStack_c4;
  float local_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float fStack_ac;
  uint local_a4;
  
  puVar7 = PTR_DAT_04bc3a80;
  plVar19 = (long *)PTR_DAT_04bb2200;
  if (((*(int *)(param_1 + 0x58) != 0) && (*(long *)(param_1 + 0x10) != 0)) &&
     (*(long *)(*(long *)PTR_DAT_04bb2200 + 0xd0) != 0)) {
    local_d8 = (undefined *)((ulong)local_d8 & 0xffffffff00000000);
    *(undefined4 *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bb2200 + 0x50) + 0xb0) + 0xb10) =
         *(undefined4 *)(param_1 + 0x20);
    if (*(int *)(puVar7 + 0x38) == -0x7a57de51) {
      local_d8 = PTR_DAT_04bb2020 + 0x10;
      local_d0 = "TapIndoorSelectCloudIsland";
      iVar9 = FUN_02743000(&local_d8);
      if ((iVar9 != 0) || (*(long *)(*(long *)PTR_DAT_04bb3728 + 0x50) != 0)) {
        iVar12 = *(int *)(param_1 + 0x20);
        iVar9 = iVar12 + 3;
        if (-1 < iVar12) {
          iVar9 = iVar12;
        }
        local_d8 = (undefined *)((ulong)local_d8 & 0xffffffff00000000);
        iVar12 = 3;
        if ((uint)(iVar9 >> 2) < 3) {
          iVar12 = (iVar9 >> 2) + 1;
        }
        *(int *)(*(long *)(*(long *)(*plVar19 + 0x50) + 0xb0) + 0xb14) = iVar12;
      }
    }
    if (0 < *(int *)(param_1 + 0x24)) {
      iVar9 = 0;
      do {
        iVar12 = *(int *)(param_1 + 0x58);
        if (iVar12 == 0) break;
        psVar21 = *(short **)(param_1 + 0x48);
        if (0 < iVar12) {
          iVar13 = 0;
          if (*(int *)(param_1 + 0x50) <= *(int *)(param_1 + 0x54)) {
            iVar13 = *(int *)(param_1 + 0x50);
          }
          psVar21 = psVar21 + (long)(*(int *)(param_1 + 0x54) - iVar13) * 2;
        }
        if (psVar21 == (short *)0x0) break;
        lVar18 = *(long *)(*plVar19 + 0xd0);
        if (lVar18 == 0) {
LAB_01311c70:
          psVar14 = *(short **)(param_1 + 0x48);
          if (0 < iVar12) {
            iVar13 = 0;
            if (*(int *)(param_1 + 0x50) <= *(int *)(param_1 + 0x54)) {
              iVar13 = *(int *)(param_1 + 0x50);
            }
            psVar14 = psVar14 + (long)(*(int *)(param_1 + 0x54) - iVar13) * 2;
          }
          uVar17 = (int)*psVar14 + *(int *)(param_1 + 0x30) * (int)psVar14[1];
          iVar13 = *(int *)(param_1 + 0x44);
          *(int *)(param_1 + 0x44) = iVar13 + 1;
          if (((-1 < (int)uVar17) && (lVar18 = *(long *)(param_1 + 0x38), lVar18 != 0)) &&
             ((int)uVar17 < *(int *)(param_1 + 0x40))) {
            lVar16 = (ulong)(uVar17 >> 5) * 4;
            *(uint *)(lVar18 + lVar16) =
                 *(uint *)(lVar18 + lVar16) & (1 << (ulong)(uVar17 & 0x1f) ^ 0xffffffffU);
            iVar13 = *(int *)(param_1 + 0x44) + -1;
            iVar12 = *(int *)(param_1 + 0x58);
          }
          *(int *)(param_1 + 0x44) = iVar13;
          if (0 < iVar12) {
            iVar13 = 0;
            if (*(int *)(param_1 + 0x54) + 1 < *(int *)(param_1 + 0x50)) {
              iVar13 = *(int *)(param_1 + 0x54) + 1;
            }
            *(int *)(param_1 + 0x54) = iVar13;
            *(int *)(param_1 + 0x58) = iVar12 + -1;
          }
        }
        else {
          lVar16 = *(long *)(param_1 + 0x10);
          sVar4 = *psVar21;
          sVar5 = psVar21[1];
          iVar13 = *(int *)(lVar16 + 0x28) + (int)sVar4;
          iVar1 = *(int *)(lVar16 + 0x2c) + (int)sVar5;
          uVar17 = *(uint *)(lVar16 + 0x18);
          if ((uVar17 < (uint)(int)sVar4 || uVar17 == (int)sVar4) ||
             (*(uint *)(lVar16 + 0x1c) < (uint)(int)sVar5 || *(uint *)(lVar16 + 0x1c) == (int)sVar5)
             ) {
            if (*(char *)(lVar16 + 0x88) != '\0') {
              uVar17 = iVar13 - *(int *)(lVar16 + 0x98);
              if (*(uint *)(lVar16 + 0xa0) <= uVar17) {
                puVar20 = &DAT_051a50f0;
                bVar3 = DAT_051a50f8._5_1_;
                goto joined_r0x01311d74;
              }
              uVar2 = iVar1 - *(int *)(lVar16 + 0x9c);
              if (uVar2 < *(uint *)(lVar16 + 0xa4)) {
                uVar17 = uVar17 + *(uint *)(lVar16 + 0xa0) * uVar2 + *(int *)(lVar16 + 0x8c);
                goto LAB_01311ab4;
              }
            }
            puVar20 = &DAT_051a50f0;
            if ((DAT_051a50f8._5_1_ & 1) != 0) goto LAB_01311ae8;
            goto LAB_01311c70;
          }
          uVar17 = (int)sVar4 + uVar17 * (int)sVar5;
LAB_01311ab4:
          if (*(uint *)(lVar16 + 0x30) <= uVar17) {
            uVar17 = 0;
          }
          puVar20 = (undefined8 *)(*(long *)(lVar16 + 0x38) + (long)(int)uVar17 * 0x68);
          bVar3 = *(byte *)((long)puVar20 + 0xd);
joined_r0x01311d74:
          if ((bVar3 & 1) == 0) goto LAB_01311c70;
LAB_01311ae8:
          uVar17 = 0;
          fVar23 = (float)iVar1 * 10.0 + 5.0;
          bVar8 = true;
          do {
            bVar11 = bVar8;
            if ((uVar17 != 0) && ((*(byte *)((long)puVar20 + 0xc) >> 4 & 1) == 0)) break;
            fVar22 = 0.0;
            if (*(char *)(puVar20 + 2) != 4) {
              fVar22 = (float)(int)*(char *)(puVar20 + 2) * 15.0;
            }
            uVar15 = (ulong)uVar17;
            fVar6 = fVar22 + 0.05;
            if (uVar17 == 0) {
              fVar6 = fVar22;
            }
            if (1 < uVar17) {
              uVar15 = 0;
            }
            iVar12 = (int)*(char *)((long)puVar20 + uVar15 + 0x1c);
            local_d8 = (undefined *)CONCAT44(local_d8._4_4_,iVar12);
            __x = (float)(uint)(iVar12 << 0x1e) * 1.4629181e-09;
            fVar22 = sinf(__x);
            local_b0 = cosf(__x);
            local_c0 = fVar22 * 0.0;
            local_c8 = local_b0 * 0.0;
            fStack_c4 = local_c0 * 0.0 + 1.0;
            local_d8 = (undefined *)CONCAT44(local_c0,local_b0);
            local_b8 = -fVar22;
            local_d0 = (char *)CONCAT44((float)iVar13 * 10.0 + 5.0,fVar22 + 0.0);
            uVar15 = (ulong)uVar17;
            if (1 < uVar17) {
              uVar15 = 0;
            }
            uVar2 = *(uint *)((long)puVar20 + uVar15 * 4 + 0x14);
            fStack_bc = fVar6;
            fStack_b4 = local_c8;
            fStack_ac = fVar23;
            local_a4 = uVar17;
            if (((-1 < (int)uVar2) &&
                (lVar16 = *(long *)(*(long *)(lVar18 + 8) + 8),
                pcVar10 = (char *)(**(code **)(*(long *)(lVar16 + 0x158) + 0xf0))(lVar16 + 0x158),
                *pcVar10 != '\0')) && (*(long *)(lVar18 + 0x508) != 0)) {
              if (*(uint *)(lVar18 + 0x500) <= uVar2) {
                uVar2 = 0;
              }
              FUN_0156ab80(lVar18,*(long *)(lVar18 + 0x508) + (ulong)uVar2 * 0x4a8,&local_d8,1,0,0,0
                           ,0);
            }
            uVar17 = 1;
            bVar8 = false;
          } while (bVar11);
          iVar12 = *(int *)(param_1 + 0x58);
          iVar9 = iVar9 + 1;
          plVar19 = (long *)PTR_DAT_04bb2200;
          if (iVar12 != 0) goto LAB_01311c70;
        }
        if ((*(byte *)(param_1 + 8) >> 1 & 1) == 0) {
          uVar17 = (int)*psVar21 + *(int *)(param_1 + 0x18) * (int)psVar21[1];
          iVar12 = *(int *)(param_1 + 0x6c);
          *(int *)(param_1 + 0x6c) = iVar12 + 1;
          if (((-1 < (int)uVar17) && (lVar18 = *(long *)(param_1 + 0x60), lVar18 != 0)) &&
             ((int)uVar17 < *(int *)(param_1 + 0x68))) {
            lVar16 = (ulong)(uVar17 >> 5) * 4;
            *(uint *)(lVar18 + lVar16) =
                 *(uint *)(lVar18 + lVar16) & (1 << (ulong)(uVar17 & 0x1f) ^ 0xffffffffU);
            iVar12 = *(int *)(param_1 + 0x6c) + -1;
          }
          *(int *)(param_1 + 0x6c) = iVar12;
        }
      } while (iVar9 < *(int *)(param_1 + 0x24));
    }
    if ((*(uint *)(param_1 + 8) >> 1 & 1) == 0) {
      if (*(long *)(param_1 + 0x60) != 0) {
        uVar15 = 0;
        do {
          if (*(int *)(*(long *)(param_1 + 0x60) + uVar15 * 4) != 0) {
            return;
          }
          uVar17 = (int)uVar15 + 1;
          uVar15 = (ulong)uVar17;
        } while (uVar17 <= (uint)(*(int *)(param_1 + 0x68) + -1 >> 5));
      }
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 2;
    }
  }
  return;
}

