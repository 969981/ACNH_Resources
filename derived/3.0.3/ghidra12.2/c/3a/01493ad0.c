
/* WARNING: Removing unreachable block (ram,0x01493c64) */
/* WARNING: Removing unreachable block (ram,0x01493c74) */
/* WARNING: Removing unreachable block (ram,0x01493c80) */

void FUN_01493ad0(undefined8 *param_1,uint param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  ulong uVar12;
  undefined8 uVar13;
  uint *puVar14;
  long *plVar15;
  int iVar16;
  long lVar17;
  int iVar18;
  long lVar19;
  long *plVar20;
  undefined *local_78;
  int local_70;
  int local_6c;
  uint local_64;
  
  puVar8 = PTR_DAT_04bb43c0;
  puVar7 = PTR_DAT_04bb27a8;
  puVar1 = PTR_DAT_04bb2010 + 0x10;
  puVar2 = PTR_DAT_04bb3290 + 0x10;
  iVar16 = 0;
  do {
    uVar12 = FUN_01a4f680(*param_1,iVar16);
    if ((uVar12 & 1) != 0) {
      lVar17 = param_1[1];
      local_70 = *(int *)(lVar17 + 0x10);
      local_6c = *(int *)(lVar17 + 0x14);
      iVar18 = *(int *)(lVar17 + 0x24);
      iVar3 = *(int *)(lVar17 + 0x10);
      local_78 = puVar1;
      while ((iVar3 != local_70 || (iVar18 + 1 != local_6c))) {
        uVar13 = FUN_01a5190c(*param_1,iVar16,&local_78,0);
        lVar19 = *(long *)puVar8;
        uVar9 = FUN_0277d6c4();
        if (*(long *)puVar8 != 0) {
          lVar19 = *(long *)(lVar19 + 0x57e58);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
          if ((uVar9 < *(uint *)(lVar19 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
            local_64 = 0;
            lVar19 = *(long *)puVar7;
            if ((*(long *)(lVar19 + 0x1f8) != 0) &&
               ((((uVar12 = FUN_01376f10(*(undefined4 *)(lVar19 + 0x4b00),&local_78),
                  (uVar12 & 1) != 0 &&
                  (local_64 = FUN_01377528(uVar13,&local_78,(*(uint *)(lVar19 + 0x4b04) & 2) == 0,0)
                  , local_64 != 7)) && (local_64 != 8)) && ((local_64 != 9 && (local_64 != 10))))))
            {
              puVar14 = (uint *)FUN_014fbd50(*param_1,iVar16,&local_78);
              local_64 = *puVar14;
              uVar12 = FUN_015039ac(&local_64);
              if (((uVar12 & 1) != 0) && (lVar19 = *(long *)PTR_DAT_04bb27c0, lVar19 != 0)) {
                if (((local_64 == 0) ||
                    (plVar20 = *(long **)(*(long *)(*(long *)(lVar19 + 0x1c0) + 8) +
                                         ((ulong)(local_64 >> 0x11) & 0x7ff8)),
                    plVar20 == (long *)0x0)) ||
                   (((*(uint *)(plVar20 + 0x49) >> 1 & 1) != 0 ||
                    (*(uint *)(plVar20 + 0x46) != local_64)))) {
                  plVar20 = (long *)0x0;
                }
                if ((*(int *)(lVar19 + 0x288) == 1) || (*(int *)(lVar19 + 0x288) == -1)) {
                  plVar15 = (long *)nn::os::GetTlsValue(*(undefined4 *)
                                                         (*(long *)PTR_DAT_04bb3350 + 0x68));
                  lVar19 = *(long *)PTR_DAT_04bb27c0;
                  iVar10 = (**(code **)(*plVar15 + 0x60))();
                  if (iVar10 < 0x11) {
                    uVar9 = 1;
                  }
                  else if (*(uint *)(lVar19 + 0x5e8) < 5) {
                    uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar19 + 0x5e8) & 0x1f) & 1;
                  }
                  else {
                    uVar9 = 0;
                  }
                }
                else {
                  uVar9 = 0;
                }
                if (plVar20 != (long *)0x0) {
                  lVar19 = plVar20[0x2a];
                  uVar4 = *(uint *)(plVar20 + 0x49);
                  if (((*PTR_DAT_04bb5928 & 1) == 0) &&
                     (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar10 != 0)) {
                    *(undefined **)PTR_DAT_04bb5920 = puVar2;
                    __cxa_guard_release(PTR_DAT_04bb5928);
                  }
                  uVar11 = (**(code **)(*plVar20 + 0x20))(plVar20,PTR_DAT_04bb5920);
                  if ((((int)lVar19 == 1) && ((uVar11 & uVar9) != 0)) && ((uVar4 >> 4 & 1) != 0)) {
                    puVar14 = (uint *)(plVar20 + 0x49);
                    if ((param_2 & 1) == 0) {
                      FUN_01472654(plVar20,1);
                      if ((((*(uint *)(plVar20 + 0x49) >> 10 & 1) == 0) &&
                          ((*puVar14 >> 1 & 1) == 0)) &&
                         (((*puVar14 >> 9 & 1) != 0 || ((*puVar14 >> 8 & 1) != 0)))) {
                        do {
                          cVar5 = '\x01';
                          bVar6 = (bool)ExclusiveMonitorPass(puVar14,0x10);
                          if (bVar6) {
                            *puVar14 = *puVar14 & 0xfffffbff | 0x400;
                            cVar5 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar5 != '\0');
                        if ((long *)plVar20[0x16] != plVar20 + 0x15) {
                          lVar19 = (long)*(int *)((long)plVar20 + 0xbc);
                          plVar15 = (long *)(plVar20[0x16] - lVar19);
                          do {
                            (**(code **)(*plVar15 + 0xb8))(plVar15);
                            plVar15 = (long *)(*(long *)((long)plVar15 + lVar19 + 8) - lVar19);
                          } while (plVar15 != (long *)((long)(plVar20 + 0x15) - lVar19));
                        }
                      }
                    }
                    else {
                      FUN_01472654(plVar20,0);
                      if ((((*(uint *)(plVar20 + 0x49) >> 9 & 1) == 0) && ((*puVar14 >> 1 & 1) == 0)
                          ) && ((*puVar14 >> 8 & 1) == 0)) {
                        do {
                          cVar5 = '\x01';
                          bVar6 = (bool)ExclusiveMonitorPass(puVar14,0x10);
                          if (bVar6) {
                            *puVar14 = *puVar14 & 0xfffffdff | 0x200;
                            cVar5 = ExclusiveMonitorsStatus();
                          }
                        } while (cVar5 != '\0');
                        if ((long *)plVar20[0x16] != plVar20 + 0x15) {
                          lVar19 = (long)*(int *)((long)plVar20 + 0xbc);
                          plVar15 = (long *)(plVar20[0x16] - lVar19);
                          do {
                            (**(code **)(*plVar15 + 0xb0))(plVar15);
                            plVar15 = (long *)(*(long *)((long)plVar15 + lVar19 + 8) - lVar19);
                          } while (plVar15 != (long *)((long)(plVar20 + 0x15) - lVar19));
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        if (local_70 < *(int *)(lVar17 + 0x20)) {
          local_70 = local_70 + 1;
        }
        else {
          local_6c = local_6c + 1;
          local_70 = *(int *)(lVar17 + 0x10);
        }
      }
    }
    iVar18 = 8;
    if (iVar16 < 8) {
      iVar18 = iVar16 + 1;
    }
    iVar16 = iVar18;
  } while (iVar18 != 8);
  return;
}

