
/* WARNING: Removing unreachable block (ram,0x0251ff28) */

undefined8 FUN_0251fad0(float *param_1,undefined4 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  byte bVar7;
  bool bVar8;
  int iVar9;
  ulong uVar10;
  float *pfVar11;
  long lVar12;
  float *pfVar13;
  long *plVar14;
  ulong uVar15;
  uint uVar16;
  undefined8 *puVar17;
  undefined4 *puVar18;
  byte *pbVar19;
  float fVar20;
  float fVar21;
  long *local_a8;
  char local_a0;
  char local_9e;
  byte local_98 [4];
  undefined4 local_94;
  undefined2 local_90;
  byte local_8c [4];
  undefined4 local_88;
  undefined2 local_84;
  undefined4 local_74;
  
  fVar20 = param_1[6];
  if (((uint)fVar20 & 1) != 0) {
    FUN_02507c6c(local_8c,7,1,1,0);
    puVar6 = PTR_DAT_04bb5038;
    puVar5 = PTR_DAT_04bb3770;
    puVar4 = PTR_DAT_04bb3238;
    uVar16 = (uint)local_8c[0];
    local_94 = local_88;
    local_98[0] = 0xff;
    if (local_8c[0] < 8) {
      local_98[0] = local_8c[0];
    }
    local_90 = local_84;
    if (local_8c[0] < 8) {
      puVar1 = PTR_DAT_04bb5b60 + 0x10;
      puVar2 = PTR_DAT_04bb3780 + 0x10;
      do {
        if (7 < *(byte *)(param_1 + 4) || *(byte *)(param_1 + 4) != uVar16) {
          puVar18 = (undefined4 *)puVar4;
          if (DAT_054f5738 != 0) {
            puVar18 = (undefined4 *)(DAT_054f5738 + (ulong)uVar16 * 4 + 0xde8);
          }
          local_74 = *puVar18;
          FUN_0071cb58(&local_a8,&local_74,param_1 + 5,0);
          plVar14 = local_a8;
          if (local_a8 != (long *)0x0) {
            if (((*PTR_DAT_04bb3778 & 1) == 0) &&
               (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar9 != 0)) {
              *(undefined **)puVar5 = puVar2;
              __cxa_guard_release(PTR_DAT_04bb3778);
            }
            uVar10 = (**(code **)(*plVar14 + 0x20))(plVar14,puVar5);
            if ((uVar10 & 1) == 0) {
              local_9e = '\0';
            }
          }
          if (*(char *)((long)param_1 + 0x2a) == '\0') {
            bVar8 = false;
          }
          else {
            bVar8 = false;
            if (((local_a8 != (long *)0x0) && (local_a0 != '\0')) && (local_9e != '\0')) {
              bVar8 = (int)local_a8[0x302] == 7;
            }
          }
          fVar20 = param_1[3];
          pfVar11 = (float *)FUN_0251b3b0(local_98,0);
          if (pfVar11 != (float *)0x0) {
            lVar12 = FUN_0251e98c(1);
            pfVar13 = (float *)(**(code **)(*(long *)(lVar12 + 0x2a0) + 0xf0))(lVar12 + 0x2a0);
            fVar21 = *pfVar13 * 0.5;
            if (!bVar8) {
              fVar21 = *pfVar13;
            }
            if (SQRT((param_1[2] - pfVar11[2]) * (param_1[2] - pfVar11[2]) +
                     (*param_1 - *pfVar11) * (*param_1 - *pfVar11)) < fVar20 + fVar21 * 0.98) {
              if (((local_a8 == (long *)0x0) || (local_a0 == '\0')) || (local_9e == '\0')) {
LAB_0251ff60:
                if ((param_1[7] <= 0.0) || (lVar12 = FUN_0251b3b0(local_98,0), lVar12 == 0)) {
LAB_025201fc:
                  if (param_2 == (undefined4 *)0x0) {
                    return 1;
                  }
                  if (((ulong)local_98[0] < 8) && (DAT_054f5738 != 0)) {
                    puVar18 = (undefined4 *)(DAT_054f5738 + (ulong)local_98[0] * 4 + 0xde8);
                  }
                  else {
                    puVar18 = (undefined4 *)PTR_DAT_04bb3238;
                  }
                  *param_2 = *puVar18;
                  return 1;
                }
                fVar21 = param_1[1] - *(float *)(lVar12 + 4);
                fVar20 = -fVar21;
                if (0.0 <= fVar21) {
                  fVar20 = fVar21;
                }
                if (fVar20 < param_1[7]) goto LAB_025201fc;
              }
              else {
                plVar14 = (long *)local_a8[0xc];
                if ((plVar14 == (long *)0x0) && (plVar14 = &DAT_05240280, (DAT_052461c0 & 1) == 0))
                {
                  iVar9 = __cxa_guard_acquire(&DAT_052461c0);
                  if (iVar9 == 0) {
                    plVar14 = &DAT_05240280;
                  }
                  else {
                    FUN_016fcf10(&DAT_05240280);
                    FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
                    __cxa_guard_release(&DAT_052461c0);
                    plVar14 = &DAT_05240280;
                  }
                }
                uVar10 = (**(code **)(*plVar14 + 0x100))();
                if ((uVar10 & 1) == 0) {
                  if (DAT_054f5738 == 0) {
                    puVar17 = &DAT_054f0958;
                    if ((DAT_054f0960 & 1) == 0) {
                      iVar9 = __cxa_guard_acquire(&DAT_054f0960);
                      if (iVar9 == 0) {
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
                    if ((ulong)local_98[0] < 8) {
                      puVar17 = puVar17 + local_98[0];
                    }
                  }
                  local_74 = 0x2f;
                  if (((*(uint *)((long)puVar17 + 4) >> 0xf & 1) == 0) &&
                     (*(char *)((long)param_1 + 0x2b) == '\0')) goto LAB_0251ffa0;
                }
                puVar17 = (undefined8 *)local_a8[0xc];
                if ((puVar17 == (undefined8 *)0x0) &&
                   (puVar17 = &DAT_05240280, (DAT_052461c0 & 1) == 0)) {
                  iVar9 = __cxa_guard_acquire(&DAT_052461c0);
                  if (iVar9 == 0) {
                    puVar17 = &DAT_05240280;
                  }
                  else {
                    FUN_016fcf10(&DAT_05240280);
                    FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
                    __cxa_guard_release(&DAT_052461c0);
                    puVar17 = &DAT_05240280;
                  }
                }
                plVar14 = local_a8;
                if ((0.98 <= *(float *)(puVar17 + 0x2c1)) &&
                   (fVar21 = *(float *)(local_a8[0xd] + 0x27c),
                   fVar20 = (float)FUN_016e026c(0,local_a8[0xd] + 0x278,0,0), fVar21 - fVar20 <= 8.0
                   )) {
                  plVar14 = (long *)plVar14[0x12];
                  if (plVar14 != (long *)0x0) {
                    if (((*PTR_DAT_04bb5b58 & 1) == 0) &&
                       (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb5b58), iVar9 != 0)) {
                      *(undefined **)PTR_DAT_04bb5b50 = puVar1;
                      __cxa_guard_release(PTR_DAT_04bb5b58);
                    }
                    uVar10 = (**(code **)(*plVar14 + 0x10))(plVar14,PTR_DAT_04bb5b50);
                    if ((uVar10 & 1) != 0) {
                      if (*(int *)(plVar14[0x4f] + 0x40) == 0x201) {
                        cVar3 = *(char *)((long)param_1 + 0x21);
                      }
                      else {
                        cVar3 = *(char *)(param_1 + 8);
                      }
                      if (cVar3 == '\0') goto LAB_0251ffa0;
                    }
                  }
                  if ((*(char *)(param_1 + 10) == '\0') ||
                     (uVar10 = (**(code **)(*local_a8 + 400))(), (uVar10 & 1) == 0))
                  goto LAB_0251ff60;
                }
              }
            }
          }
        }
LAB_0251ffa0:
        bVar7 = local_98[0];
        uVar10 = (ulong)local_98[0];
        if ((7 < local_98[0]) || (uVar10 + 1 == 8)) break;
        pbVar19 = puVar6 + uVar10 + 1;
        uVar15 = FUN_02507924(local_98,pbVar19);
        if ((uVar15 & 1) == 0) {
          if (uVar10 + 2 == 8) break;
          pbVar19 = puVar6 + uVar10 + 2;
          uVar15 = FUN_02507924(local_98,pbVar19);
          if ((uVar15 & 1) == 0) {
            if (uVar10 + 3 == 8) break;
            pbVar19 = puVar6 + uVar10 + 3;
            uVar15 = FUN_02507924(local_98,pbVar19);
            if ((uVar15 & 1) == 0) {
              if (uVar10 + 4 == 8) break;
              pbVar19 = puVar6 + uVar10 + 4;
              uVar15 = FUN_02507924(local_98,pbVar19);
              if ((uVar15 & 1) == 0) {
                if (uVar10 + 5 == 8) break;
                pbVar19 = puVar6 + uVar10 + 5;
                uVar15 = FUN_02507924(local_98,pbVar19);
                if ((uVar15 & 1) == 0) {
                  if (uVar10 + 6 == 8) break;
                  pbVar19 = puVar6 + uVar10 + 6;
                  uVar15 = FUN_02507924(local_98,pbVar19);
                  if ((uVar15 & 1) == 0) {
                    if (uVar10 + 7 == 8) break;
                    pbVar19 = puVar6 + uVar10 + 7;
                    uVar15 = FUN_02507924(local_98,pbVar19);
                    if ((uVar15 & 1) == 0) {
                      if (bVar7 == 0) break;
                      pbVar19 = puVar6 + uVar10 + 8;
                      FUN_02507924(local_98,pbVar19);
                    }
                  }
                }
              }
            }
          }
        }
        uVar16 = (uint)*pbVar19;
        if (7 < uVar16) break;
        local_98[0] = *pbVar19;
      } while( true );
    }
    fVar20 = param_1[6];
  }
  if (((uint)fVar20 >> 1 & 1) != 0) {
    uVar10 = FUN_01735670(param_1[3],param_1[7],param_1,param_1[5],*(undefined4 *)PTR_DAT_04bb3238,
                          *(undefined1 *)(param_1 + 8),*(undefined1 *)((long)param_1 + 0x21),param_2
                          ,*(undefined1 *)((long)param_1 + 0x22),*(undefined1 *)(param_1 + 10),
                          *(undefined1 *)((long)param_1 + 0x29),1);
    if ((uVar10 & 1) != 0) {
      return 1;
    }
    fVar20 = param_1[6];
  }
  if (((uint)fVar20 >> 2 & 1) != 0) {
    uVar10 = FUN_01735b38(param_1[3],param_1[7],param_1[9],param_1,param_1[5],
                          *(undefined1 *)(param_1 + 8),*(undefined1 *)((long)param_1 + 0x21),param_2
                         );
    if ((uVar10 & 1) != 0) {
      return 1;
    }
    fVar20 = param_1[6];
  }
  if (((uint)fVar20 >> 3 & 1) != 0) {
    uVar10 = FUN_01736170(param_1[3],param_1[7],param_1[9],param_1,param_1[5],
                          *(undefined1 *)(param_1 + 8),*(undefined1 *)((long)param_1 + 0x21),param_2
                         );
    if ((uVar10 & 1) != 0) {
      return 1;
    }
    fVar20 = param_1[6];
  }
  if ((((uint)fVar20 >> 4 & 1) == 0) ||
     (uVar10 = FUN_01736b18(param_1[3],param_1[7],param_1,param_1[5],param_2), (uVar10 & 1) == 0)) {
    return 0;
  }
  return 1;
}

