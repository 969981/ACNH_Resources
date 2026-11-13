
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_013dc7d0(undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4,
                 uint param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  uint *puVar9;
  undefined4 *puVar10;
  float *pfVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  uint uVar17;
  undefined4 uVar18;
  long lVar19;
  double dVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined *local_138;
  undefined1 *puStack_130;
  undefined4 local_128;
  undefined1 local_124 [15];
  undefined1 local_115;
  undefined1 local_a5;
  undefined *local_a0;
  undefined1 *puStack_98;
  undefined4 local_90;
  undefined1 local_8c [15];
  undefined1 local_7d;
  
  puVar5 = PTR_DAT_04bb2ab0;
  lVar19 = *(long *)(*(long *)(*(long *)(param_4 + 8) + 0x90) + (long)(int)param_5 * 8);
  if (0 < *(int *)(lVar19 + 0x1f8)) {
    uVar14 = 0;
    lVar15 = (long)(int)param_5;
    puVar1 = PTR_DAT_04bb2ab0 + 0x10;
    puVar2 = PTR_DAT_04bb2e50 + 0x10;
    puVar3 = PTR_DAT_04bb2d88 + 0x10;
    do {
      pcVar8 = (char *)(**(code **)(*(long *)(lVar19 + 0xb8) + 0xf0))();
      fVar21 = param_3;
      if (*pcVar8 != '\0') {
        plVar16 = (long *)(lVar19 + 0xe8);
        puVar9 = (uint *)(**(code **)(*plVar16 + 0xf0))(plVar16);
        fVar21 = param_3;
        if ((*puVar9 < 0x40 && *(long *)PTR_DAT_04bb5ce0 != 0) &&
           (*(char *)(*(long *)PTR_DAT_04bb5ce0 + (ulong)*puVar9 * 0x14 + 0xc) != '\0')) {
          puVar9 = (uint *)(**(code **)(*(long *)(lVar19 + 0xe8) + 0xf0))(plVar16);
          uVar17 = *puVar9;
          puVar10 = (undefined4 *)(**(code **)(*(long *)(lVar19 + 0x118) + 0xf0))(lVar19 + 0x118);
          fVar21 = param_3;
          if ((uVar17 < 0x40) &&
             ((*(long *)PTR_DAT_04bb5ce0 != 0 &&
              (lVar13 = *(long *)PTR_DAT_04bb5ce0 + 0xc,
              *(char *)(lVar13 + (ulong)uVar17 * 0x14) != '\0')))) {
            lVar13 = lVar13 + (ulong)uVar17 * 0x14;
            *puVar10 = *(undefined4 *)(lVar13 + 4);
            puVar10[1] = *(undefined4 *)(lVar13 + 8);
            puVar10[2] = *(undefined4 *)(lVar13 + 0xc);
          }
        }
      }
      pfVar11 = (float *)(**(code **)(*(long *)(lVar19 + 0x118) + 0xf0))(lVar19 + 0x118);
      fVar22 = pfVar11[2];
      fVar23 = *pfVar11;
      pfVar11 = (float *)FUN_0252d9bc(0);
      if ((pfVar11 != (float *)0x0) &&
         (fVar21 = (pfVar11[2] - fVar22) * (pfVar11[2] - fVar22),
         SQRT(fVar21 + (*pfVar11 - fVar23) * (*pfVar11 - fVar23)) <= 80.0)) {
        local_7d = 0;
        local_90 = 0x10;
        local_a0 = puVar5 + 0x10;
        local_8c[0] = 0;
        puStack_98 = local_8c;
        FUN_038d1270(&local_a0,&DAT_040c7be9,param_5);
        if ((*(char *)(param_4 + 0x32) != '\0') && (lVar19 = *(long *)PTR_DAT_04bb27c0, lVar19 != 0)
           ) {
          uVar17 = *(uint *)PTR_DAT_04bbc940;
          if ((((uVar17 == 0) ||
               (plVar16 = *(long **)(*(long *)(*(long *)(lVar19 + 0x1c0) + 8) +
                                    ((ulong)(uVar17 >> 0x11) & 0x7ff8)), plVar16 == (long *)0x0)) ||
              ((*(uint *)(plVar16 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar16 + 0x46) != uVar17))
          {
            plVar16 = (long *)0x0;
          }
          if ((*(int *)(lVar19 + 0x288) == 1) || (*(int *)(lVar19 + 0x288) == -1)) {
            plVar12 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68))
            ;
            lVar19 = *(long *)PTR_DAT_04bb27c0;
            iVar6 = (**(code **)(*plVar12 + 0x60))();
            if (iVar6 < 0x11) {
              uVar17 = 1;
            }
            else {
              if (4 < *(uint *)(lVar19 + 0x5e8)) goto LAB_013dca90;
              uVar17 = 0x1aU >> (ulong)(*(uint *)(lVar19 + 0x5e8) & 0x1f) & 1;
            }
          }
          else {
LAB_013dca90:
            uVar17 = 0;
          }
          if (plVar16 != (long *)0x0) {
            lVar19 = plVar16[0x2a];
            uVar4 = *(uint *)(plVar16 + 0x49);
            if (((*PTR_DAT_04bbc928 & 1) == 0) &&
               (iVar6 = __cxa_guard_acquire(PTR_DAT_04bbc928), iVar6 != 0)) {
              *(undefined **)PTR_DAT_04bbc920 = puVar2;
              __cxa_guard_release(PTR_DAT_04bbc928);
            }
            uVar7 = (**(code **)(*plVar16 + 0x20))(plVar16,PTR_DAT_04bbc920);
            if ((((int)lVar19 == 1) && ((uVar17 & uVar7) != 0)) && ((uVar4 >> 4 & 1) != 0)) {
              local_a5 = 0;
              local_124[0] = 0;
              local_128 = 0x80;
              lVar19 = *(long *)(param_4 + 8);
              iVar6 = *(int *)(lVar19 + 0xa8);
              local_138 = puVar3;
              if (iVar6 == 0) {
                uVar17 = 0;
                uVar18 = 0;
                puStack_130 = local_124;
LAB_013dcc04:
                dVar20 = (double)*(float *)(plVar16 + (ulong)uVar17 * 0xf0 + 0x87c);
              }
              else {
                uVar18 = 0;
                puStack_130 = local_124;
                if ((-1 < (int)param_5) && ((int)param_5 < iVar6)) {
                  if (param_5 < *(uint *)(lVar19 + 0x88)) {
                    lVar13 = *(long *)(*(long *)(lVar19 + 0x90) + (ulong)param_5 * 8);
                    if (*(int *)(lVar13 + 0x1f8) == 0) {
LAB_013dcf84:
                      uVar18 = 0;
                      goto joined_r0x013dcf8c;
                    }
                  }
                  else {
                    if (_DAT_000001f8 == 0) goto LAB_013dcf84;
                    lVar13 = 0;
                  }
                  puVar10 = (undefined4 *)
                            (**(code **)(*(long *)(lVar13 + 0x150) + 0xf0))(lVar13 + 0x150);
                  lVar19 = *(long *)(param_4 + 8);
                  uVar18 = *puVar10;
                  iVar6 = *(int *)(lVar19 + 0xa8);
                  if (iVar6 != 0) goto joined_r0x013dcf8c;
LAB_013dcc00:
                  uVar17 = 0;
                  goto LAB_013dcc04;
                }
joined_r0x013dcf8c:
                uVar17 = 0;
                if (((int)param_5 < 0) || (uVar17 = 0, iVar6 <= (int)param_5)) goto LAB_013dcc04;
                if (param_5 < *(uint *)(lVar19 + 0x88)) {
                  lVar19 = *(long *)(*(long *)(lVar19 + 0x90) + (ulong)param_5 * 8);
                  iVar6 = *(int *)(lVar19 + 0x1f8);
                }
                else {
                  lVar19 = 0;
                  iVar6 = _DAT_000001f8;
                }
                if (iVar6 == 0) goto LAB_013dcc00;
                puVar9 = (uint *)(**(code **)(*(long *)(lVar19 + 0x150) + 0xf0))(lVar19 + 0x150);
                uVar17 = *puVar9;
                dVar20 = 0.0;
                if (uVar17 < 8) goto LAB_013dcc04;
              }
              FUN_038d1270(dVar20,&local_138,&DAT_040674dd,uVar18);
            }
          }
        }
      }
      fVar22 = (float)FUN_013dd230(*(undefined8 *)
                                    (*(long *)(*(long *)(param_4 + 8) + 0x90) + lVar15 * 8),
                                   uVar14 & 0xffffffff);
      uVar17 = (uint)uVar14;
      param_3 = fVar21;
      if (param_5 < *(uint *)(*(long *)(param_4 + 8) + 0x88)) {
        lVar19 = *(long *)(*(long *)(*(long *)(param_4 + 8) + 0x90) + lVar15 * 8);
        if (*(char *)(lVar19 + 0x202) != '\0') {
LAB_013dcc80:
          if (uVar17 < *(uint *)(lVar19 + 0x1d8)) {
            lVar19 = *(long *)(*(long *)(lVar19 + 0x1e0) + uVar14 * 8);
          }
          else {
            lVar19 = 0;
          }
          (**(code **)(*(long *)(lVar19 + 0x68) + 0xf0))();
        }
      }
      else if (DAT_00000202 != '\0') {
        lVar19 = 0;
        goto LAB_013dcc80;
      }
      if (*(char *)(param_4 + 0x30) != '\0') {
        if (param_5 < *(uint *)(*(long *)(param_4 + 8) + 0x88)) {
          lVar19 = *(long *)(*(long *)(*(long *)(param_4 + 8) + 0x90) + lVar15 * 8);
        }
        else {
          lVar19 = 0;
        }
        if (uVar17 < *(uint *)(lVar19 + 0x1d8)) {
          lVar19 = *(long *)(*(long *)(lVar19 + 0x1e0) + uVar14 * 8);
        }
        else {
          lVar19 = 0;
        }
        local_138 = (undefined *)CONCAT71(local_138._1_7_,1);
        (**(code **)(*(long *)(lVar19 + 0x128) + 0x118))(lVar19 + 0x128,&local_138);
      }
      if (*(char *)(param_4 + 0x33) != '\0') {
        if (param_5 < *(uint *)(*(long *)(param_4 + 8) + 0x88)) {
          lVar19 = *(long *)(*(long *)(*(long *)(param_4 + 8) + 0x90) + lVar15 * 8);
        }
        else {
          lVar19 = 0;
        }
        if (uVar17 < *(uint *)(lVar19 + 0x1d8)) {
          lVar19 = *(long *)(*(long *)(lVar19 + 0x1e0) + uVar14 * 8);
        }
        else {
          lVar19 = 0;
        }
        (**(code **)(*(long *)(lVar19 + 0x158) + 0xf0))(lVar19 + 0x158);
      }
      if (((*(char *)(param_4 + 0x31) == '\0') &&
          (pfVar11 = (float *)FUN_0252d9bc(0), pfVar11 != (float *)0x0)) &&
         (param_3 = (pfVar11[2] - fVar21) * (pfVar11[2] - fVar21),
         SQRT(param_3 + (*pfVar11 - fVar22) * (*pfVar11 - fVar22)) <= 80.0)) {
        local_115 = 0;
        local_128 = 0x10;
        local_124[0] = 0;
        local_138 = puVar1;
        puStack_130 = local_124;
        FUN_038d1270(&local_138,"%d-%d",param_5,uVar14 & 0xffffffff);
      }
      if (param_5 < *(uint *)(*(long *)(param_4 + 8) + 0x88)) {
        lVar19 = *(long *)(*(long *)(*(long *)(param_4 + 8) + 0x90) + lVar15 * 8);
      }
      else {
        lVar19 = 0;
      }
      if (uVar14 < *(uint *)(lVar19 + 0x1d8)) {
        lVar19 = *(long *)(*(long *)(lVar19 + 0x1e0) + uVar14 * 8);
      }
      else {
        lVar19 = 0;
      }
      puVar9 = (uint *)(**(code **)(*(long *)(lVar19 + 0x98) + 0xf0))();
      uVar17 = *puVar9;
      if ((uVar17 != 0xffffffff) && (uVar14 != uVar17)) {
        lVar19 = lVar15 * 8;
        FUN_013dd230(*(undefined8 *)(*(long *)(*(long *)(param_4 + 8) + 0x90) + lVar19),
                     uVar14 & 0xffffffff);
        FUN_013dd230(*(undefined8 *)(*(long *)(*(long *)(param_4 + 8) + 0x90) + lVar19),uVar17);
        if (param_5 < *(uint *)(*(long *)(param_4 + 8) + 0x88)) {
          lVar13 = *(long *)(*(long *)(*(long *)(param_4 + 8) + 0x90) + lVar15 * 8);
        }
        else {
          lVar13 = 0;
        }
        if (uVar14 < *(uint *)(lVar13 + 0x1d8)) {
          lVar13 = *(long *)(*(long *)(lVar13 + 0x1e0) + uVar14 * 8);
        }
        else {
          lVar13 = 0;
        }
        puVar9 = (uint *)(**(code **)(*(long *)(lVar13 + 200) + 0xf0))();
        uVar17 = *puVar9;
        if ((uVar17 != 0xffffffff) && (uVar14 != uVar17)) {
          FUN_013dd230(*(undefined8 *)(*(long *)(*(long *)(param_4 + 8) + 0x90) + lVar19),
                       uVar14 & 0xffffffff);
          FUN_013dd230(*(undefined8 *)(*(long *)(*(long *)(param_4 + 8) + 0x90) + lVar19),uVar17);
          if (param_5 < *(uint *)(*(long *)(param_4 + 8) + 0x88)) {
            lVar13 = *(long *)(*(long *)(*(long *)(param_4 + 8) + 0x90) + lVar15 * 8);
          }
          else {
            lVar13 = 0;
          }
          if (uVar14 < *(uint *)(lVar13 + 0x1d8)) {
            lVar13 = *(long *)(*(long *)(lVar13 + 0x1e0) + uVar14 * 8);
          }
          else {
            lVar13 = 0;
          }
          puVar9 = (uint *)(**(code **)(*(long *)(lVar13 + 0xf8) + 0xf0))();
          uVar17 = *puVar9;
          if ((uVar17 != 0xffffffff) && (uVar14 != uVar17)) {
            FUN_013dd230(*(undefined8 *)(*(long *)(*(long *)(param_4 + 8) + 0x90) + lVar19),
                         uVar14 & 0xffffffff);
            FUN_013dd230(*(undefined8 *)(*(long *)(*(long *)(param_4 + 8) + 0x90) + lVar19),uVar17);
          }
        }
      }
      uVar14 = uVar14 + 1;
      lVar19 = *(long *)(*(long *)(*(long *)(param_4 + 8) + 0x90) + lVar15 * 8);
    } while ((long)uVar14 < (long)*(int *)(lVar19 + 0x1f8));
  }
  return;
}

