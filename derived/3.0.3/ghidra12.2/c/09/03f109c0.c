
/* WARNING: Removing unreachable block (ram,0x03f10b70) */

void FUN_03f109c0(long param_1)

{
  ulong *puVar1;
  int *piVar2;
  undefined8 *puVar3;
  long *plVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  long *plVar10;
  long *plVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  byte bVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  long *plVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  int iVar22;
  long lVar23;
  long lVar24;
  int *piVar25;
  long lVar26;
  undefined4 uVar27;
  undefined8 *local_70;
  undefined8 uStack_68;
  
  uVar27 = FUN_03f232ac(param_1 + 0xb0);
  *(undefined4 *)(param_1 + 0x100) = uVar27;
  if (0 < *(int *)(param_1 + 0x228) - *(int *)(param_1 + 0x22c)) {
    puVar1 = (ulong *)(param_1 + 0x210);
    do {
      uVar9 = *(uint *)(param_1 + 0x22c);
      iVar12 = -uVar9;
      do {
        if (iVar12 + *(int *)(param_1 + 0x228) < 1) {
          piVar25 = (int *)0x0;
          break;
        }
        uVar14 = (ulong)(*(int *)(param_1 + 0x218) - 1U & uVar9);
        piVar25 = *(int **)(*(long *)(param_1 + 0x220) + uVar14 * 8);
        if (piVar25 == (int *)0x0) break;
        *(undefined8 *)(*(long *)(param_1 + 0x220) + uVar14 * 8) = 0;
        uVar9 = uVar9 + 1;
        DataMemoryBarrier(2,3);
        iVar12 = iVar12 + -1;
        *(uint *)(param_1 + 0x22c) = uVar9;
      } while (piVar25 == (int *)0xffffffffffffffff);
      plVar17 = *(long **)(piVar25 + 2);
      piVar2 = piVar25 + 4;
      if (plVar17 == (long *)0x0) {
        if (*piVar25 == 0) {
          FUN_03f234f8(param_1 + 0xb0,piVar2);
          *(undefined1 *)(param_1 + 0x260) = 1;
        }
        else {
          FUN_03f23104();
          *(undefined1 *)(param_1 + 0x260) = 0;
        }
      }
      else {
        iVar12 = *(int *)((long)plVar17 + 0x5c);
        if (*piVar25 == 0) {
          if (iVar12 != 2) {
            *(undefined4 *)((long)plVar17 + 0x5c) = 1;
            FUN_03f234f8(plVar17 + 0xc,piVar2);
          }
        }
        else if (iVar12 != 0) {
          if (iVar12 == 2) {
            (**(code **)(*plVar17 + 0x68))(plVar17);
          }
          *(undefined4 *)((long)plVar17 + 0x5c) = 3;
          FUN_03f23104(plVar17 + 0xc,piVar2);
        }
      }
      uVar13 = *(ulong *)(param_1 + 0x210);
      *piVar25 = (int)uVar13;
      uVar14 = *puVar1;
      if (uVar14 != uVar13) {
        ClearExclusiveLocal();
LAB_03f10b84:
        do {
          *piVar25 = (int)uVar14;
          uVar13 = *puVar1;
          if (uVar13 == uVar14) {
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar6) {
              *puVar1 = (uVar14 & 0xffffffff00000000) + 0x100000000 |
                        (long)piVar25 - *(long *)(param_1 + 0x208) >> 5;
              cVar5 = ExclusiveMonitorsStatus();
            }
            if (cVar5 == '\0') goto LAB_03f10a20;
          }
          else {
            ClearExclusiveLocal();
          }
          uVar14 = uVar13;
        } while( true );
      }
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar6) {
        *puVar1 = (uVar13 & 0xffffffff00000000) + 0x100000000 |
                  (long)piVar25 - *(long *)(param_1 + 0x208) >> 5;
        cVar5 = ExclusiveMonitorsStatus();
      }
      if (cVar5 != '\0') goto LAB_03f10b84;
LAB_03f10a20:
    } while (0 < *(int *)(param_1 + 0x228) - *(int *)(param_1 + 0x22c));
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    plVar17 = *(long **)(param_1 + 0x50);
    plVar4 = plVar17 + *(int *)(param_1 + 0x48);
    do {
      lVar24 = *plVar17;
      if (lVar24 != 0) {
        plVar18 = *(long **)(lVar24 + 0x20);
        plVar16 = (long *)0x0;
        if (*(int *)(lVar24 + 0x10) != 0) {
          bVar15 = 0;
          lVar23 = (long)*(int *)(lVar24 + 0x10) << 3;
          plVar10 = plVar16;
          puVar21 = *(undefined8 **)(lVar24 + 0x18);
          do {
            plVar16 = (long *)*puVar21;
            (**(code **)(*plVar16 + 0x20))(plVar16,bVar15);
            bVar6 = (int)plVar16[7] != 0;
            bVar15 = bVar15 | bVar6;
            if (!bVar6 || plVar10 != (long *)0x0) {
              plVar16 = plVar10;
            }
            lVar23 = lVar23 + -8;
            plVar10 = plVar16;
            puVar21 = puVar21 + 1;
          } while (lVar23 != 0);
        }
        *(long **)(lVar24 + 0x20) = plVar16;
        if (plVar18 != plVar16) {
          if (plVar16 != (long *)0x0 && plVar18 != (long *)0x0) {
            iVar12 = *(int *)(param_1 + 0x98);
            if (iVar12 != 0) {
              lVar23 = *(long *)(param_1 + 0xa0);
              iVar22 = 0;
              do {
                puVar21 = (undefined8 *)(lVar23 + (long)iVar22 * 0x58);
                if (((*(char *)(puVar21 + 10) != '\0') &&
                    (((lVar7 = *(long *)(lVar23 + (long)iVar22 * 0x58 + 0x48), lVar7 == 0 ||
                      (uVar14 = FUN_03f169a0(lVar7,(ulong)*(byte *)(lVar7 + 4) + lVar7,
                                             PTR_DAT_04bdf000), (uVar14 & 1) != 0)) &&
                     ((long *)*puVar21 == (long *)0x0 || (long *)*puVar21 == plVar18)))) &&
                   ((plVar10 = *(long **)(lVar23 + (long)iVar22 * 0x58 + 8), plVar10 == (long *)0x0
                    || (plVar10 == plVar16)))) goto LAB_03f10d08;
                iVar22 = iVar22 + 1;
              } while (iVar12 != iVar22);
            }
            puVar21 = (undefined8 *)0x0;
LAB_03f10d08:
            local_70 = (undefined8 *)PTR_DAT_04bdf020;
            if (puVar21 != (undefined8 *)0x0) {
              local_70 = puVar21;
            }
            uStack_68 = 0;
            FUN_03f21e94(plVar18,&local_70);
            FUN_03f22008(plVar16,&local_70);
            *(long **)(lVar24 + 0x20) = plVar16;
          }
          if (plVar16 != (long *)0x0) {
            if (*(int *)(lVar24 + 0x10) == 0) goto LAB_03f10be0;
            plVar18 = *(long **)(lVar24 + 0x18);
            plVar10 = plVar18 + *(int *)(lVar24 + 0x10);
            do {
              lVar23 = *plVar18;
              lVar7 = *(long *)(lVar23 + 0x30);
              if ((lVar7 != 0) && (*(int *)(lVar7 + 0x48) == 3)) {
                iVar12 = *(int *)(param_1 + 0x98);
                if (iVar12 != 0) {
                  lVar26 = *(long *)(param_1 + 0xa0);
                  iVar22 = 0;
                  do {
                    plVar19 = (long *)(lVar26 + (long)iVar22 * 0x58);
                    if ((((char)plVar19[10] != '\0') &&
                        (((lVar8 = *(long *)(lVar26 + (long)iVar22 * 0x58 + 0x48), lVar8 == 0 ||
                          (uVar14 = FUN_03f169a0(lVar8,(ulong)*(byte *)(lVar8 + 4) + lVar8,
                                                 PTR_DAT_04bdf000), (uVar14 & 1) != 0)) &&
                         (*plVar19 == 0 || *plVar19 == lVar23)))) &&
                       ((plVar11 = *(long **)(lVar26 + (long)iVar22 * 0x58 + 8),
                        plVar11 == (long *)0x0 || (plVar11 == plVar16)))) goto LAB_03f10d64;
                    iVar22 = iVar22 + 1;
                  } while (iVar12 != iVar22);
                }
                plVar19 = (long *)0x0;
LAB_03f10d64:
                plVar11 = (long *)PTR_DAT_04bdf020;
                if (plVar19 != (long *)0x0) {
                  plVar11 = plVar19;
                }
                uVar27 = *(undefined4 *)((long)plVar11 + 0x24);
                lVar23 = plVar11[5];
                *(byte *)(lVar7 + 0x14c) = *(byte *)(lVar7 + 0x14c) | 8;
                *(undefined4 *)(lVar7 + 0x13c) = 0;
                *(undefined4 *)(lVar7 + 0x140) = uVar27;
                *(int *)(lVar7 + 0x144) = (int)lVar23;
              }
              plVar18 = plVar18 + 1;
            } while (plVar18 != plVar10);
          }
        }
        if (*(int *)(lVar24 + 0x10) != 0) {
          lVar23 = (long)*(int *)(lVar24 + 0x10) << 3;
          puVar21 = *(undefined8 **)(lVar24 + 0x18);
          do {
            (**(code **)(*(long *)*puVar21 + 0x28))();
            lVar23 = lVar23 + -8;
            puVar21 = puVar21 + 1;
          } while (lVar23 != 0);
        }
      }
LAB_03f10be0:
      plVar17 = plVar17 + 1;
    } while (plVar17 != plVar4);
  }
  if (*(int *)(param_1 + 0x270) != 0) {
    puVar21 = *(undefined8 **)(param_1 + 0x278);
    puVar3 = puVar21 + *(int *)(param_1 + 0x270);
    do {
      plVar17 = (long *)*puVar21;
      if ((((*(byte *)(plVar17 + 0x1b) >> 1 & 1) == 0) &&
          (lVar24 = (**(code **)(**(long **)(plVar17[6] + 0x18) + 0x20))(), lVar24 != 0)) &&
         (*(char *)(lVar24 + 0x78) != '\0')) {
        plVar4 = plVar17 + 0x11 + *(uint *)(plVar17 + 0x10);
        if (1 < *(uint *)(plVar17 + 0x10)) {
          plVar4 = plVar17 + 0x11;
        }
        lVar24 = *plVar4;
        if ((lVar24 != 0) && (*(int *)(lVar24 + 0x68) != 0)) {
          lVar23 = (long)*(int *)(lVar24 + 0x68) << 3;
          puVar20 = *(undefined8 **)(lVar24 + 0x70);
          do {
            (*(code *)**(undefined8 **)*puVar20)();
            lVar23 = lVar23 + -8;
            puVar20 = puVar20 + 1;
          } while (lVar23 != 0);
        }
      }
      if ((((*(byte *)(plVar17 + 0x1b) >> 1 & 1) == 0) &&
          (lVar24 = (**(code **)(**(long **)(plVar17[6] + 0x18) + 0x20))(), lVar24 != 0)) &&
         (*(char *)(lVar24 + 0x78) != '\0')) {
        (**(code **)(*plVar17 + 0x28))(plVar17);
        plVar17[0xd] = 0;
        plVar17[0xe] = 0;
        *(byte *)(plVar17 + 0x1b) = *(byte *)(plVar17 + 0x1b) & 0xfb;
      }
      puVar21 = puVar21 + 1;
    } while (puVar21 != puVar3);
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  return;
}

