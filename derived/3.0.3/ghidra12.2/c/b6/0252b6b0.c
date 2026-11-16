
undefined8
FUN_0252b6b0(float param_1,float *param_2,byte *param_3,uint param_4,uint param_5,ulong param_6,
            uint param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  int iVar10;
  ulong uVar11;
  float *pfVar12;
  long lVar13;
  float *pfVar14;
  long *plVar15;
  ulong uVar16;
  undefined8 *puVar17;
  byte *pbVar18;
  uint uVar19;
  float fVar20;
  long *local_a0;
  char local_98;
  char local_96;
  byte local_8c [4];
  undefined4 local_88;
  undefined2 local_84;
  byte local_80 [4];
  undefined4 local_7c;
  undefined2 local_78;
  undefined4 local_74;
  
  FUN_02507c6c(local_80,7,1,1,0);
  puVar5 = PTR_DAT_04bb5038;
  puVar4 = PTR_DAT_04bb3238;
  uVar19 = (uint)local_80[0];
  local_88 = local_7c;
  local_8c[0] = local_80[0];
  if (7 < local_80[0]) {
    local_8c[0] = 0xff;
  }
  local_84 = local_78;
  if (7 < local_80[0]) {
    return 0;
  }
  puVar1 = PTR_DAT_04bb5b60 + 0x10;
  puVar2 = PTR_DAT_04bb3780 + 0x10;
  do {
    if (7 < *param_3 || *param_3 != uVar19) {
      puVar3 = (undefined4 *)puVar4;
      if (DAT_054f5738 != 0) {
        puVar3 = (undefined4 *)(DAT_054f5738 + (ulong)uVar19 * 4 + 0xde8);
      }
      local_74 = *puVar3;
      FUN_0071cb58(&local_a0,&local_74,puVar4,0);
      plVar15 = local_a0;
      if (local_a0 != (long *)0x0) {
        if (((*PTR_DAT_04bb3778 & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar10 != 0)) {
          *(undefined **)PTR_DAT_04bb3770 = puVar2;
          __cxa_guard_release(PTR_DAT_04bb3778);
        }
        uVar11 = (**(code **)(*plVar15 + 0x20))(plVar15,PTR_DAT_04bb3770);
        if ((uVar11 & 1) == 0) {
          local_96 = '\0';
        }
      }
      plVar15 = local_a0;
      bVar6 = local_a0 == (long *)0x0;
      bVar7 = local_98 == '\0';
      bVar8 = local_96 == '\0';
      if ((bVar6 || bVar7) || bVar8) {
        bVar9 = false;
      }
      else {
        bVar9 = (int)local_a0[0x302] == 7;
      }
      pfVar12 = (float *)FUN_0251b3b0(local_8c,0);
      if (pfVar12 != (float *)0x0) {
        lVar13 = FUN_0251e98c(1);
        pfVar14 = (float *)(**(code **)(*(long *)(lVar13 + 0x2a0) + 0xf0))(lVar13 + 0x2a0);
        fVar20 = *pfVar14 * 0.5;
        if (!bVar9) {
          fVar20 = *pfVar14;
        }
        if (SQRT((param_2[2] - pfVar12[2]) * (param_2[2] - pfVar12[2]) +
                 (*param_2 - *pfVar12) * (*param_2 - *pfVar12)) < fVar20 * 0.98 + param_1) {
          if ((bVar6 || bVar7) || bVar8) {
            return 1;
          }
          if (((param_6 & 1) == 0) ||
             (uVar11 = (**(code **)(*plVar15 + 400))(plVar15), (uVar11 & 1) == 0)) {
            if ((param_7 & 1) != 0) {
              plVar15 = (long *)plVar15[0xc];
              if ((plVar15 == (long *)0x0) && (plVar15 = &DAT_05240280, (DAT_052461c0 & 1) == 0)) {
                iVar10 = __cxa_guard_acquire(&DAT_052461c0);
                if (iVar10 == 0) {
                  plVar15 = &DAT_05240280;
                }
                else {
                  FUN_016fcf10(&DAT_05240280);
                  FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
                  __cxa_guard_release(&DAT_052461c0);
                  plVar15 = &DAT_05240280;
                }
              }
              uVar11 = (**(code **)(*plVar15 + 0x100))();
              if ((uVar11 & 1) == 0) {
                if (DAT_054f5738 == 0) {
                  puVar17 = &DAT_054f0958;
                  if ((DAT_054f0960 & 1) == 0) {
                    iVar10 = __cxa_guard_acquire(&DAT_054f0960);
                    if (iVar10 == 0) {
                      puVar17 = &DAT_054f0958;
                    }
                    else {
                      DAT_054f0958 = 0;
                      __cxa_guard_release(&DAT_054f0960);
                      puVar17 = &DAT_054f0958;
                    }
                  }
                }
                else {
                  puVar17 = (undefined8 *)(DAT_054f5738 + 0x204);
                  if ((ulong)local_8c[0] < 8) {
                    puVar17 = puVar17 + local_8c[0];
                  }
                }
                local_74 = 0x2f;
                if ((*(uint *)((long)puVar17 + 4) >> 0xf & 1) == 0) goto LAB_0252b9a4;
              }
            }
            plVar15 = (long *)local_a0[0x12];
            if (plVar15 == (long *)0x0) {
              return 1;
            }
            if (((*PTR_DAT_04bb5b58 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb5b58), iVar10 != 0)) {
              *(undefined **)PTR_DAT_04bb5b50 = puVar1;
              __cxa_guard_release(PTR_DAT_04bb5b58);
            }
            uVar11 = (**(code **)(*plVar15 + 0x10))(plVar15,PTR_DAT_04bb5b50);
            if ((uVar11 & 1) == 0) {
              return 1;
            }
            uVar19 = param_4;
            if (*(int *)(plVar15[0x4f] + 0x40) == 0x201) {
              uVar19 = param_5;
            }
            if ((uVar19 & 1) != 0) {
              return 1;
            }
          }
        }
      }
LAB_0252b9a4:
      uVar19 = (uint)local_8c[0];
    }
    if (7 < uVar19) {
      return 0;
    }
    uVar11 = (ulong)uVar19;
    if (uVar11 + 1 == 8) {
      return 0;
    }
    pbVar18 = puVar5 + uVar11 + 1;
    uVar16 = FUN_02507924(local_8c,pbVar18);
    if ((uVar16 & 1) == 0) {
      if (uVar11 + 2 == 8) {
        return 0;
      }
      pbVar18 = puVar5 + uVar11 + 2;
      uVar16 = FUN_02507924(local_8c,pbVar18);
      if ((uVar16 & 1) == 0) {
        if (uVar11 + 3 == 8) {
          return 0;
        }
        pbVar18 = puVar5 + uVar11 + 3;
        uVar16 = FUN_02507924(local_8c,pbVar18);
        if ((uVar16 & 1) == 0) {
          if (uVar11 + 4 == 8) {
            return 0;
          }
          pbVar18 = puVar5 + uVar11 + 4;
          uVar16 = FUN_02507924(local_8c,pbVar18);
          if ((uVar16 & 1) == 0) {
            if (uVar11 + 5 == 8) {
              return 0;
            }
            pbVar18 = puVar5 + uVar11 + 5;
            uVar16 = FUN_02507924(local_8c,pbVar18);
            if ((uVar16 & 1) == 0) {
              if (uVar11 + 6 == 8) {
                return 0;
              }
              pbVar18 = puVar5 + uVar11 + 6;
              uVar16 = FUN_02507924(local_8c,pbVar18);
              if ((uVar16 & 1) == 0) {
                if (uVar11 + 7 == 8) {
                  return 0;
                }
                pbVar18 = puVar5 + uVar11 + 7;
                uVar16 = FUN_02507924(local_8c,pbVar18);
                if ((uVar16 & 1) == 0) {
                  if (uVar19 == 0) {
                    return 0;
                  }
                  pbVar18 = puVar5 + uVar11 + 8;
                  FUN_02507924(local_8c,pbVar18);
                }
              }
            }
          }
        }
      }
    }
    local_8c[0] = *pbVar18;
    uVar19 = (uint)local_8c[0];
    if (7 < uVar19) {
      return 0;
    }
  } while( true );
}

