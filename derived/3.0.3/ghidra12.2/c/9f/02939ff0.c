
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02939ff0(long param_1,uint param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  float *pfVar8;
  long *plVar9;
  undefined4 *puVar10;
  uint *puVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  uint uVar17;
  undefined4 uVar18;
  double dVar19;
  float fVar20;
  float fVar21;
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
  
  puVar4 = PTR_DAT_04bb2ab0;
  lVar7 = *(long *)(*(long *)(*(long *)(param_1 + 8) + 0x90) + (long)(int)param_2 * 8);
  if (0 < *(int *)(lVar7 + 0x198)) {
    uVar13 = 0;
    lVar15 = (long)(int)param_2;
    puVar1 = PTR_DAT_04bb2ab0 + 0x10;
    puVar2 = PTR_DAT_04bb2e50 + 0x10;
    puVar3 = PTR_DAT_04bb2d88 + 0x10;
    do {
      pfVar8 = (float *)(**(code **)(*(long *)(lVar7 + 0xb8) + 0xf0))();
      fVar21 = *pfVar8;
      fVar20 = pfVar8[2];
      pfVar8 = (float *)FUN_0252d9bc(0);
      if ((pfVar8 != (float *)0x0) &&
         (SQRT((pfVar8[2] - fVar20) * (pfVar8[2] - fVar20) + (*pfVar8 - fVar21) * (*pfVar8 - fVar21)
              ) <= 80.0)) {
        local_7d = 0;
        local_90 = 0x10;
        local_a0 = puVar4 + 0x10;
        local_8c[0] = 0;
        puStack_98 = local_8c;
        FUN_038d1270(&local_a0,&DAT_040c7be9,param_2);
        if ((*(char *)(param_1 + 0x2e) != '\0') && (lVar7 = *(long *)PTR_DAT_04bb27c0, lVar7 != 0))
        {
          uVar17 = *(uint *)PTR_DAT_04bc3b48;
          if ((((uVar17 == 0) ||
               (plVar16 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                                    ((ulong)(uVar17 >> 0x11) & 0x7ff8)), plVar16 == (long *)0x0)) ||
              ((*(uint *)(plVar16 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar16 + 0x46) != uVar17))
          {
            plVar16 = (long *)0x0;
          }
          if ((*(int *)(lVar7 + 0x288) == 1) || (*(int *)(lVar7 + 0x288) == -1)) {
            plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            lVar7 = *(long *)PTR_DAT_04bb27c0;
            iVar5 = (**(code **)(*plVar9 + 0x60))();
            if (iVar5 < 0x11) {
              uVar17 = 1;
            }
            else {
              if (4 < *(uint *)(lVar7 + 0x5e8)) goto LAB_0293a1f0;
              uVar17 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
            }
          }
          else {
LAB_0293a1f0:
            uVar17 = 0;
          }
          if (plVar16 != (long *)0x0) {
            lVar7 = plVar16[0x2a];
            uVar12 = *(uint *)(plVar16 + 0x49);
            if (((*PTR_DAT_04bc3ac8 & 1) == 0) &&
               (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc3ac8), iVar5 != 0)) {
              *(undefined **)PTR_DAT_04bc3ac0 = puVar2;
              __cxa_guard_release(PTR_DAT_04bc3ac8);
            }
            uVar6 = (**(code **)(*plVar16 + 0x20))(plVar16,PTR_DAT_04bc3ac0);
            if ((((int)lVar7 == 1) && ((uVar17 & uVar6) != 0)) && ((uVar12 >> 4 & 1) != 0)) {
              local_a5 = 0;
              local_124[0] = 0;
              local_128 = 0x80;
              lVar7 = *(long *)(param_1 + 8);
              iVar5 = *(int *)(lVar7 + 0xa8);
              local_138 = puVar3;
              if (iVar5 == 0) {
                uVar17 = 0;
                uVar18 = 0;
                puStack_130 = local_124;
LAB_0293a35c:
                dVar19 = (double)*(float *)(plVar16 + (ulong)uVar17 * 0xf0 + 0x426);
              }
              else {
                uVar18 = 0;
                puStack_130 = local_124;
                if ((-1 < (int)param_2) && ((int)param_2 < iVar5)) {
                  if (param_2 < *(uint *)(lVar7 + 0x88)) {
                    lVar14 = *(long *)(*(long *)(lVar7 + 0x90) + (ulong)param_2 * 8);
                    if (*(int *)(lVar14 + 0x198) == 0) {
LAB_0293a95c:
                      uVar18 = 0;
                      goto joined_r0x0293a964;
                    }
                  }
                  else {
                    if (_DAT_00000198 == 0) goto LAB_0293a95c;
                    lVar14 = 0;
                  }
                  puVar10 = (undefined4 *)(**(code **)(*(long *)(lVar14 + 0xf0) + 0xf0))();
                  lVar7 = *(long *)(param_1 + 8);
                  uVar18 = *puVar10;
                  iVar5 = *(int *)(lVar7 + 0xa8);
                  if (iVar5 != 0) goto joined_r0x0293a964;
LAB_0293a358:
                  uVar17 = 0;
                  goto LAB_0293a35c;
                }
joined_r0x0293a964:
                uVar17 = 0;
                if (((int)param_2 < 0) || (uVar17 = 0, iVar5 <= (int)param_2)) goto LAB_0293a35c;
                if (param_2 < *(uint *)(lVar7 + 0x88)) {
                  lVar7 = *(long *)(*(long *)(lVar7 + 0x90) + (ulong)param_2 * 8);
                  iVar5 = *(int *)(lVar7 + 0x198);
                }
                else {
                  lVar7 = 0;
                  iVar5 = _DAT_00000198;
                }
                if (iVar5 == 0) goto LAB_0293a358;
                puVar11 = (uint *)(**(code **)(*(long *)(lVar7 + 0xf0) + 0xf0))();
                uVar17 = *puVar11;
                dVar19 = 0.0;
                if (uVar17 < 8) goto LAB_0293a35c;
              }
              FUN_038d1270(dVar19,&local_138,&DAT_040674dd,uVar18);
            }
          }
        }
      }
      lVar7 = *(long *)(param_1 + 8);
      uVar17 = *(uint *)(lVar7 + 0x88);
      uVar12 = (uint)uVar13;
      if (param_2 < uVar17) {
        lVar14 = *(long *)(*(long *)(lVar7 + 0x90) + lVar15 * 8);
        if (-1 < (int)uVar12) goto LAB_0293a3bc;
LAB_0293a3a0:
        fVar20 = 0.0;
        fVar21 = 0.0;
      }
      else {
        lVar14 = 0;
        if ((int)uVar12 < 0) goto LAB_0293a3a0;
LAB_0293a3bc:
        fVar20 = 0.0;
        fVar21 = 0.0;
        if ((int)uVar12 < *(int *)(lVar14 + 0x198)) {
          pfVar8 = (float *)(**(code **)(*(long *)(lVar14 + 0xb8) + 0xf0))((long *)(lVar14 + 0xb8));
          if (uVar12 < *(uint *)(lVar14 + 0x178)) {
            lVar7 = *(long *)(*(long *)(lVar14 + 0x180) + uVar13 * 8);
          }
          else {
            lVar7 = 0;
          }
          fVar20 = *pfVar8;
          fVar21 = pfVar8[2];
          pfVar8 = (float *)(**(code **)(*(long *)(lVar7 + 0x30) + 0xf0))((long *)(lVar7 + 0x30));
          fVar20 = fVar20 + *pfVar8;
          lVar7 = *(long *)(param_1 + 8);
          uVar17 = *(uint *)(lVar7 + 0x88);
          fVar21 = fVar21 + pfVar8[2];
        }
      }
      if (param_2 < uVar17) {
        lVar7 = *(long *)(*(long *)(lVar7 + 0x90) + lVar15 * 8);
        if (*(char *)(lVar7 + 0x1a1) != '\0') {
LAB_0293a460:
          if (uVar12 < *(uint *)(lVar7 + 0x178)) {
            lVar7 = *(long *)(*(long *)(lVar7 + 0x180) + uVar13 * 8);
          }
          else {
            lVar7 = 0;
          }
          (**(code **)(*(long *)(lVar7 + 0x68) + 0xf0))();
        }
      }
      else if (DAT_000001a1 != '\0') {
        lVar7 = 0;
        goto LAB_0293a460;
      }
      if (*(char *)(param_1 + 0x2c) != '\0') {
        if (param_2 < *(uint *)(*(long *)(param_1 + 8) + 0x88)) {
          lVar7 = *(long *)(*(long *)(*(long *)(param_1 + 8) + 0x90) + lVar15 * 8);
        }
        else {
          lVar7 = 0;
        }
        if (uVar12 < *(uint *)(lVar7 + 0x178)) {
          lVar7 = *(long *)(*(long *)(lVar7 + 0x180) + uVar13 * 8);
        }
        else {
          lVar7 = 0;
        }
        local_138 = (undefined *)CONCAT71(local_138._1_7_,1);
        (**(code **)(*(long *)(lVar7 + 0x128) + 0x118))(lVar7 + 0x128,&local_138);
      }
      if (*(char *)(param_1 + 0x2f) != '\0') {
        if (param_2 < *(uint *)(*(long *)(param_1 + 8) + 0x88)) {
          lVar7 = *(long *)(*(long *)(*(long *)(param_1 + 8) + 0x90) + lVar15 * 8);
        }
        else {
          lVar7 = 0;
        }
        if (uVar12 < *(uint *)(lVar7 + 0x178)) {
          lVar7 = *(long *)(*(long *)(lVar7 + 0x180) + uVar13 * 8);
        }
        else {
          lVar7 = 0;
        }
        (**(code **)(*(long *)(lVar7 + 0x158) + 0xf0))(lVar7 + 0x158);
      }
      if (((*(char *)(param_1 + 0x2d) == '\0') &&
          (pfVar8 = (float *)FUN_0252d9bc(0), pfVar8 != (float *)0x0)) &&
         (SQRT((pfVar8[2] - fVar21) * (pfVar8[2] - fVar21) + (*pfVar8 - fVar20) * (*pfVar8 - fVar20)
              ) <= 80.0)) {
        local_115 = 0;
        local_128 = 0x10;
        local_124[0] = 0;
        local_138 = puVar1;
        puStack_130 = local_124;
        FUN_038d1270(&local_138,"%d-%d",param_2,uVar13 & 0xffffffff);
      }
      if (param_2 < *(uint *)(*(long *)(param_1 + 8) + 0x88)) {
        lVar7 = *(long *)(*(long *)(*(long *)(param_1 + 8) + 0x90) + lVar15 * 8);
      }
      else {
        lVar7 = 0;
      }
      if (uVar13 < *(uint *)(lVar7 + 0x178)) {
        lVar7 = *(long *)(*(long *)(lVar7 + 0x180) + uVar13 * 8);
      }
      else {
        lVar7 = 0;
      }
      puVar11 = (uint *)(**(code **)(*(long *)(lVar7 + 0x98) + 0xf0))();
      uVar17 = *puVar11;
      lVar7 = *(long *)(param_1 + 8);
      if ((uVar17 != 0xffffffff) && (uVar13 != uVar17)) {
        uVar12 = *(uint *)(lVar7 + 0x88);
        if (param_2 < uVar12) {
          lVar14 = *(long *)(*(long *)(lVar7 + 0x90) + lVar15 * 8);
        }
        else {
          lVar14 = 0;
        }
        if ((long)uVar13 < (long)*(int *)(lVar14 + 0x198)) {
          (**(code **)(*(long *)(lVar14 + 0xb8) + 0xf0))((long *)(lVar14 + 0xb8));
          if (uVar13 < *(uint *)(lVar14 + 0x178)) {
            lVar7 = *(long *)(*(long *)(lVar14 + 0x180) + uVar13 * 8);
          }
          else {
            lVar7 = 0;
          }
          (**(code **)(*(long *)(lVar7 + 0x30) + 0xf0))();
          lVar7 = *(long *)(param_1 + 8);
          uVar12 = *(uint *)(lVar7 + 0x88);
        }
        if (param_2 < uVar12) {
          lVar14 = *(long *)(*(long *)(lVar7 + 0x90) + lVar15 * 8);
        }
        else {
          lVar14 = 0;
        }
        if ((-1 < (int)uVar17) && ((int)uVar17 < *(int *)(lVar14 + 0x198))) {
          (**(code **)(*(long *)(lVar14 + 0xb8) + 0xf0))((long *)(lVar14 + 0xb8));
          if (uVar17 < *(uint *)(lVar14 + 0x178)) {
            lVar7 = *(long *)(*(long *)(lVar14 + 0x180) + (ulong)uVar17 * 8);
          }
          else {
            lVar7 = 0;
          }
          (**(code **)(*(long *)(lVar7 + 0x30) + 0xf0))();
          lVar7 = *(long *)(param_1 + 8);
        }
        if (param_2 < *(uint *)(lVar7 + 0x88)) {
          lVar7 = *(long *)(*(long *)(lVar7 + 0x90) + lVar15 * 8);
        }
        else {
          lVar7 = 0;
        }
        if (uVar13 < *(uint *)(lVar7 + 0x178)) {
          lVar7 = *(long *)(*(long *)(lVar7 + 0x180) + uVar13 * 8);
        }
        else {
          lVar7 = 0;
        }
        puVar11 = (uint *)(**(code **)(*(long *)(lVar7 + 200) + 0xf0))();
        uVar17 = *puVar11;
        lVar7 = *(long *)(param_1 + 8);
        if ((uVar17 != 0xffffffff) && (uVar13 != uVar17)) {
          uVar12 = *(uint *)(lVar7 + 0x88);
          if (param_2 < uVar12) {
            lVar14 = *(long *)(*(long *)(lVar7 + 0x90) + lVar15 * 8);
          }
          else {
            lVar14 = 0;
          }
          if ((long)uVar13 < (long)*(int *)(lVar14 + 0x198)) {
            (**(code **)(*(long *)(lVar14 + 0xb8) + 0xf0))((long *)(lVar14 + 0xb8));
            if (uVar13 < *(uint *)(lVar14 + 0x178)) {
              lVar7 = *(long *)(*(long *)(lVar14 + 0x180) + uVar13 * 8);
            }
            else {
              lVar7 = 0;
            }
            (**(code **)(*(long *)(lVar7 + 0x30) + 0xf0))();
            lVar7 = *(long *)(param_1 + 8);
            uVar12 = *(uint *)(lVar7 + 0x88);
          }
          if (param_2 < uVar12) {
            lVar14 = *(long *)(*(long *)(lVar7 + 0x90) + lVar15 * 8);
          }
          else {
            lVar14 = 0;
          }
          if ((-1 < (int)uVar17) && ((int)uVar17 < *(int *)(lVar14 + 0x198))) {
            (**(code **)(*(long *)(lVar14 + 0xb8) + 0xf0))((long *)(lVar14 + 0xb8));
            if (uVar17 < *(uint *)(lVar14 + 0x178)) {
              lVar7 = *(long *)(*(long *)(lVar14 + 0x180) + (ulong)uVar17 * 8);
            }
            else {
              lVar7 = 0;
            }
            (**(code **)(*(long *)(lVar7 + 0x30) + 0xf0))();
            lVar7 = *(long *)(param_1 + 8);
          }
          if (param_2 < *(uint *)(lVar7 + 0x88)) {
            lVar7 = *(long *)(*(long *)(lVar7 + 0x90) + lVar15 * 8);
          }
          else {
            lVar7 = 0;
          }
          if (uVar13 < *(uint *)(lVar7 + 0x178)) {
            lVar7 = *(long *)(*(long *)(lVar7 + 0x180) + uVar13 * 8);
          }
          else {
            lVar7 = 0;
          }
          puVar11 = (uint *)(**(code **)(*(long *)(lVar7 + 0xf8) + 0xf0))();
          uVar17 = *puVar11;
          lVar7 = *(long *)(param_1 + 8);
          if ((uVar17 != 0xffffffff) && (uVar13 != uVar17)) {
            uVar12 = *(uint *)(lVar7 + 0x88);
            if (param_2 < uVar12) {
              lVar14 = *(long *)(*(long *)(lVar7 + 0x90) + lVar15 * 8);
            }
            else {
              lVar14 = 0;
            }
            if ((long)uVar13 < (long)*(int *)(lVar14 + 0x198)) {
              (**(code **)(*(long *)(lVar14 + 0xb8) + 0xf0))((long *)(lVar14 + 0xb8));
              if (uVar13 < *(uint *)(lVar14 + 0x178)) {
                lVar7 = *(long *)(*(long *)(lVar14 + 0x180) + uVar13 * 8);
              }
              else {
                lVar7 = 0;
              }
              (**(code **)(*(long *)(lVar7 + 0x30) + 0xf0))();
              lVar7 = *(long *)(param_1 + 8);
              uVar12 = *(uint *)(lVar7 + 0x88);
            }
            if (param_2 < uVar12) {
              lVar14 = *(long *)(*(long *)(lVar7 + 0x90) + lVar15 * 8);
            }
            else {
              lVar14 = 0;
            }
            if ((-1 < (int)uVar17) && ((int)uVar17 < *(int *)(lVar14 + 0x198))) {
              (**(code **)(*(long *)(lVar14 + 0xb8) + 0xf0))((long *)(lVar14 + 0xb8));
              if (uVar17 < *(uint *)(lVar14 + 0x178)) {
                lVar7 = *(long *)(*(long *)(lVar14 + 0x180) + (ulong)uVar17 * 8);
              }
              else {
                lVar7 = 0;
              }
              (**(code **)(*(long *)(lVar7 + 0x30) + 0xf0))();
              lVar7 = *(long *)(param_1 + 8);
            }
          }
        }
      }
      uVar13 = uVar13 + 1;
      lVar7 = *(long *)(*(long *)(lVar7 + 0x90) + lVar15 * 8);
    } while ((long)uVar13 < (long)*(int *)(lVar7 + 0x198));
  }
  return;
}

