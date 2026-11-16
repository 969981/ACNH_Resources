
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_0251f670(float param_1,float *param_2,byte *param_3,uint param_4)

{
  undefined *puVar1;
  uint uVar2;
  uint *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  byte bVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  float *pfVar11;
  float *pfVar12;
  ulong uVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  byte *pbVar18;
  float fVar19;
  byte local_88 [4];
  undefined4 local_84;
  undefined2 local_80;
  byte local_7c [4];
  undefined4 local_78;
  undefined2 local_74;
  
  FUN_02507c6c(local_7c,1,1,1,0);
  puVar6 = PTR_DAT_04bb5038;
  puVar5 = PTR_DAT_04bb3238;
  puVar4 = PTR_DAT_04bb27c0;
  uVar14 = (uint)local_7c[0];
  local_84 = local_78;
  local_88[0] = local_7c[0];
  if (7 < local_7c[0]) {
    local_88[0] = 0xff;
  }
  local_80 = local_74;
  if (7 < local_7c[0]) {
    return 0;
  }
  puVar1 = PTR_DAT_04bb3780 + 0x10;
  do {
    if (7 < *param_3 || *param_3 != uVar14) {
      puVar3 = (uint *)puVar5;
      if (DAT_054f5738 != 0) {
        puVar3 = (uint *)(DAT_054f5738 + (ulong)uVar14 * 4 + 0xde8);
      }
      lVar15 = *(long *)puVar4;
      if (lVar15 != 0) {
        uVar14 = *puVar3;
        if ((((uVar14 == 0) ||
             (plVar17 = *(long **)(*(long *)(*(long *)(lVar15 + 0x1c0) + 8) +
                                  ((ulong)(uVar14 >> 0x11) & 0x7ff8)), plVar17 == (long *)0x0)) ||
            ((*(uint *)(plVar17 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar17 + 0x46) != uVar14)) {
          plVar17 = (long *)0x0;
        }
        if (*(int *)(lVar15 + 0x288) == 1 || *(int *)(lVar15 + 0x288) == -1) {
          plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          lVar15 = *(long *)puVar4;
          iVar8 = (**(code **)(*plVar9 + 0x60))();
          if (iVar8 < 0x11) {
            uVar14 = 1;
          }
          else {
            uVar14 = *(uint *)(lVar15 + 0x5e8);
            if (4 < uVar14) goto LAB_0251f7e0;
            uVar14 = 0x1aU >> (ulong)(uVar14 & 0x1f) & 1;
          }
        }
        else {
LAB_0251f7e0:
          uVar14 = 0;
        }
        if (plVar17 != (long *)0x0) {
          lVar15 = plVar17[0x2a];
          if (((*PTR_DAT_04bb3778 & 1) == 0) &&
             (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar8 != 0)) {
            *(undefined **)PTR_DAT_04bb3770 = puVar1;
            __cxa_guard_release(PTR_DAT_04bb3778);
          }
          uVar16 = (**(code **)(*plVar17 + 0x20))(plVar17,PTR_DAT_04bb3770);
          uVar2 = 0;
          if ((int)lVar15 == 1) {
            uVar2 = uVar14;
          }
          if (((uVar16 & 1) != 0) && (uVar2 != 0)) {
            if (((param_4 & 1) != 0) &&
               (uVar16 = (**(code **)(*plVar17 + 400))(plVar17), (uVar16 & 1) != 0))
            goto LAB_0251f94c;
            lVar15 = plVar17[0x302];
            pfVar11 = (float *)FUN_0251b3b0(local_88,0);
            if (pfVar11 != (float *)0x0) {
              lVar10 = FUN_0251e98c(1);
              pfVar12 = (float *)(**(code **)(*(long *)(lVar10 + 0x2a0) + 0xf0))(lVar10 + 0x2a0);
              fVar19 = *pfVar12 * 0.5;
              if ((int)lVar15 != 7) {
                fVar19 = *pfVar12;
              }
              if (SQRT((param_2[2] - pfVar11[2]) * (param_2[2] - pfVar11[2]) +
                       (*param_2 - *pfVar11) * (*param_2 - *pfVar11)) < fVar19 * 0.98 + param_1) {
                return 1;
              }
            }
          }
        }
      }
      pfVar11 = (float *)FUN_0251b3b0(local_88,0);
      if (pfVar11 != (float *)0x0) {
        lVar15 = FUN_0251e98c(1);
        pfVar12 = (float *)(**(code **)(*(long *)(lVar15 + 0x2a0) + 0xf0))(lVar15 + 0x2a0);
        if (SQRT((param_2[2] - pfVar11[2]) * (param_2[2] - pfVar11[2]) +
                 (*param_2 - *pfVar11) * (*param_2 - *pfVar11)) < *pfVar12 * 0.98 + param_1) {
          return 1;
        }
      }
    }
LAB_0251f94c:
    bVar7 = local_88[0];
    uVar16 = (ulong)local_88[0];
    if (7 < local_88[0]) {
      return 0;
    }
    if (uVar16 + 1 == 8) {
      return 0;
    }
    pbVar18 = puVar6 + uVar16 + 1;
    uVar13 = FUN_02507924(local_88,pbVar18);
    if ((uVar13 & 1) == 0) {
      if (uVar16 + 2 == 8) {
        return 0;
      }
      pbVar18 = puVar6 + uVar16 + 2;
      uVar13 = FUN_02507924(local_88,pbVar18);
      if ((uVar13 & 1) == 0) {
        if (uVar16 + 3 == 8) {
          return 0;
        }
        pbVar18 = puVar6 + uVar16 + 3;
        uVar13 = FUN_02507924(local_88,pbVar18);
        if ((uVar13 & 1) == 0) {
          if (uVar16 + 4 == 8) {
            return 0;
          }
          pbVar18 = puVar6 + uVar16 + 4;
          uVar13 = FUN_02507924(local_88,pbVar18);
          if ((uVar13 & 1) == 0) {
            if (uVar16 + 5 == 8) {
              return 0;
            }
            pbVar18 = puVar6 + uVar16 + 5;
            uVar13 = FUN_02507924(local_88,pbVar18);
            if ((uVar13 & 1) == 0) {
              if (uVar16 + 6 == 8) {
                return 0;
              }
              pbVar18 = puVar6 + uVar16 + 6;
              uVar13 = FUN_02507924(local_88,pbVar18);
              if ((uVar13 & 1) == 0) {
                if (uVar16 + 7 == 8) {
                  return 0;
                }
                pbVar18 = puVar6 + uVar16 + 7;
                uVar13 = FUN_02507924(local_88,pbVar18);
                if ((uVar13 & 1) == 0) {
                  if (bVar7 == 0) {
                    return 0;
                  }
                  pbVar18 = puVar6 + uVar16 + 8;
                  FUN_02507924(local_88,pbVar18);
                }
              }
            }
          }
        }
      }
    }
    local_88[0] = *pbVar18;
    uVar14 = (uint)local_88[0];
    if (7 < uVar14) {
      return 0;
    }
  } while( true );
}

