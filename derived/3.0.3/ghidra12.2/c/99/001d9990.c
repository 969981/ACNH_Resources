
/* WARNING: Removing unreachable block (ram,0x001d9b0c) */

ulong FUN_001d9990(long param_1,long param_2,ulong *param_3,ulong param_4,long param_5,uint param_6)

{
  long *plVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  uint uVar6;
  ushort uVar7;
  char cVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  uint *puVar12;
  long *plVar13;
  undefined *puVar14;
  int iVar15;
  ulong uVar16;
  bool bVar17;
  int iVar18;
  ulong uVar19;
  long *plVar20;
  long *plVar21;
  long *plVar22;
  long lVar23;
  ulong uVar24;
  ulong local_68;
  
  puVar9 = PTR_DAT_04bcc7e8;
  puVar14 = PTR_DAT_04bcc7e0;
  if (*(long *)(param_1 + 0x20) == 0) {
    return 0;
  }
  plVar22 = *(long **)(param_1 + 8);
  uVar24 = *(ulong *)(*(long *)(param_5 + 0x10) + 0x18);
  plVar13 = *(long **)(param_1 + 0x18);
  local_68 = uVar24;
  if ((plVar22 == plVar13) || (*(long *)PTR_DAT_04bcc7e0 == 0)) {
    uVar19 = 0;
    plVar20 = (long *)0x0;
  }
  else {
    uVar19 = 0;
    plVar20 = (long *)0x0;
    plVar21 = plVar22;
    do {
      if ((ulong)*(ushort *)((long)plVar21 + 0x202) < *(ulong *)puVar9) {
        if (*(char *)((long)plVar21 + 0x211) != '\0') {
          plVar22 = (long *)plVar21[6];
          lVar23 = plVar21[7];
          if (lVar23 != 0) {
            *(long **)(lVar23 + 0x30) = plVar22;
          }
          plVar21[7] = 0;
          if (plVar22 != (long *)0x0) {
            plVar22[7] = lVar23;
          }
          plVar21[6] = 0;
          if (*(long **)(param_1 + 8) == plVar21) {
            *(long **)(param_1 + 8) = plVar22;
            plVar13 = *(long **)(param_1 + 0x10);
          }
          else {
            plVar13 = *(long **)(param_1 + 0x10);
          }
          if (plVar13 == plVar21) {
            *(long *)(param_1 + 0x10) = lVar23;
          }
          *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -1;
          plVar13 = plVar21 + 1;
          iVar18 = (int)*plVar13;
          iVar15 = (int)*plVar13 + -1;
          if (iVar18 != (int)*plVar13) {
            ClearExclusiveLocal();
LAB_001d9d14:
            do {
              lVar23 = *plVar13;
              iVar15 = iVar18 + -1;
              if ((int)lVar23 == iVar18) {
                cVar8 = '\x01';
                bVar17 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                if (bVar17) {
                  *(int *)plVar13 = iVar15;
                  cVar8 = ExclusiveMonitorsStatus();
                }
                if (cVar8 == '\0') goto LAB_001d9cc0;
              }
              else {
                ClearExclusiveLocal();
              }
              iVar18 = (int)lVar23;
            } while( true );
          }
          cVar8 = '\x01';
          bVar17 = (bool)ExclusiveMonitorPass(plVar13,0x10);
          if (bVar17) {
            *(int *)plVar13 = iVar15;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 != '\0') goto LAB_001d9d14;
          goto LAB_001d9cc0;
        }
        plVar22 = plVar21;
        if ((ulong)plVar21[0x3c] < *param_3) break;
        if ((((*PTR_DAT_04bcc628 == '\0') ||
             (uVar7 = *(ushort *)(param_2 + 0x60), (uVar7 & 0xf) != 2)) ||
            (*(char *)(param_2 + 0x42) != '\x01')) ||
           (((uVar7 & 0x30) == 0 && (*PTR_DAT_04bcc638 == '\0')))) {
LAB_001d9c98:
          plVar22 = (long *)plVar21[6];
          plVar13 = *(long **)(param_1 + 0x18);
          if (plVar22 == plVar13) break;
        }
        else {
          if ((((uVar7 & 0x30) != 0) && ((uVar7 & 0x10) != 0 || *PTR_DAT_04bcc640 == '\0')) ||
             (((*(char *)(param_2 + 0x211) != '\0' ||
               (*(char *)((long)plVar21 + 0xa2) != *(char *)(param_2 + 0xa2))) ||
              (*(short *)((long)plVar21 + 0xac) != *(short *)(param_2 + 0xac))))) goto LAB_001d9c98;
          if ((*(int *)(*(long *)PTR_DAT_04bcc2e0 + 8) != 1) ||
             (((uVar7 & *(ushort *)(plVar21 + 0xc)) >> 9 & 1) == 0)) {
            lVar23 = FUN_001e14d8(plVar21 + 0x28);
            lVar11 = FUN_001e14d8(param_2 + 0x140);
            if ((lVar23 != lVar11) || ((int)plVar21[0x39] != *(int *)(param_2 + 0x1c8)))
            goto LAB_001d9c98;
          }
          uVar2 = plVar21[0x43] + local_68;
          if (param_4 < uVar2) {
            if (plVar21 == *(long **)(param_1 + 0x18)) goto LAB_001da00c;
            goto LAB_001d9f04;
          }
          if (plVar20 != (long *)0x0) {
            plVar21[4] = (long)plVar20;
            plVar20[5] = (long)plVar21;
          }
          uVar19 = uVar19 + 1;
          uVar7 = *(short *)((long)plVar21 + 0x202) + 1;
          uVar16 = *(ulong *)puVar9;
          *(ushort *)((long)plVar21 + 0x202) = uVar7;
          plVar20 = plVar21;
          local_68 = uVar2;
          if (uVar7 < uVar16) {
            plVar22 = (long *)plVar21[6];
LAB_001d9e4c:
            plVar13 = *(long **)(param_1 + 0x18);
            if (plVar22 == plVar13) break;
          }
          else {
            plVar13 = plVar21 + 1;
            lVar23 = *plVar13;
            if ((int)lVar23 == (int)*plVar13) {
              cVar8 = '\x01';
              bVar17 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar17) {
                *(int *)plVar13 = (int)*plVar13 + 1;
                cVar8 = ExclusiveMonitorsStatus();
              }
              if (cVar8 != '\0') goto LAB_001d9d80;
              bVar17 = true;
            }
            else {
              ClearExclusiveLocal();
LAB_001d9d80:
              bVar17 = false;
            }
            iVar18 = (int)lVar23;
            if (!bVar17) {
              do {
                lVar23 = *plVar13;
                if ((int)lVar23 == iVar18) {
                  cVar8 = '\x01';
                  bVar17 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                  if (bVar17) {
                    *(int *)plVar13 = iVar18 + 1;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                  if (cVar8 == '\0') break;
                }
                else {
                  ClearExclusiveLocal();
                }
                iVar18 = (int)lVar23;
              } while( true );
            }
            plVar22 = (long *)plVar21[6];
            lVar23 = plVar21[7];
            if (lVar23 != 0) {
              *(long **)(lVar23 + 0x30) = plVar22;
            }
            plVar21[7] = 0;
            if (plVar22 != (long *)0x0) {
              plVar22[7] = lVar23;
            }
            plVar21[6] = 0;
            if (*(long **)(param_1 + 8) == plVar21) {
              *(long **)(param_1 + 8) = plVar22;
            }
            if (*(long **)(param_1 + 0x10) == plVar21) {
              *(long *)(param_1 + 0x10) = lVar23;
            }
            *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -1;
            lVar23 = *plVar13;
            iVar18 = (int)*plVar13 + -1;
            if ((int)lVar23 == (int)*plVar13) {
              cVar8 = '\x01';
              bVar17 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar17) {
                *(int *)plVar13 = iVar18;
                cVar8 = ExclusiveMonitorsStatus();
              }
              if (cVar8 != '\0') goto LAB_001d9e30;
              bVar17 = true;
            }
            else {
              ClearExclusiveLocal();
LAB_001d9e30:
              bVar17 = false;
            }
            iVar15 = (int)lVar23;
            if (!bVar17) {
              do {
                lVar23 = *plVar13;
                iVar18 = iVar15 + -1;
                if ((int)lVar23 == iVar15) {
                  cVar8 = '\x01';
                  bVar17 = (bool)ExclusiveMonitorPass(plVar13,0x10);
                  if (bVar17) {
                    *(int *)plVar13 = iVar18;
                    cVar8 = ExclusiveMonitorsStatus();
                  }
                  if (cVar8 == '\0') break;
                }
                else {
                  ClearExclusiveLocal();
                }
                iVar15 = (int)lVar23;
              } while( true );
            }
            if ((iVar18 != 0) || (*(char *)((long)plVar21 + 0xc) != '\0')) goto LAB_001d9e4c;
            *(undefined1 *)((long)plVar21 + 0xc) = 1;
            (**(code **)(*plVar21 + 8))(plVar21);
            plVar13 = *(long **)(param_1 + 0x18);
            if (plVar22 == plVar13) break;
          }
        }
      }
      else {
        plVar22 = (long *)plVar21[6];
        lVar23 = plVar21[7];
        if (lVar23 != 0) {
          *(long **)(lVar23 + 0x30) = plVar22;
        }
        plVar21[7] = 0;
        if (plVar22 != (long *)0x0) {
          plVar22[7] = lVar23;
        }
        plVar21[6] = 0;
        if (*(long **)(param_1 + 8) == plVar21) {
          *(long **)(param_1 + 8) = plVar22;
          plVar13 = *(long **)(param_1 + 0x10);
        }
        else {
          plVar13 = *(long **)(param_1 + 0x10);
        }
        if (plVar13 == plVar21) {
          *(long *)(param_1 + 0x10) = lVar23;
        }
        *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -1;
        plVar13 = plVar21 + 1;
        iVar18 = (int)*plVar13;
        iVar15 = (int)*plVar13 + -1;
        if (iVar18 != (int)*plVar13) {
          ClearExclusiveLocal();
LAB_001d9b20:
          do {
            lVar23 = *plVar13;
            iVar15 = iVar18 + -1;
            if ((int)lVar23 == iVar18) {
              cVar8 = '\x01';
              bVar17 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar17) {
                *(int *)plVar13 = iVar15;
                cVar8 = ExclusiveMonitorsStatus();
              }
              if (cVar8 == '\0') goto LAB_001d9cc0;
            }
            else {
              ClearExclusiveLocal();
            }
            iVar18 = (int)lVar23;
          } while( true );
        }
        cVar8 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar17) {
          *(int *)plVar13 = iVar15;
          cVar8 = ExclusiveMonitorsStatus();
        }
        if (cVar8 != '\0') goto LAB_001d9b20;
LAB_001d9cc0:
        if ((iVar15 == 0) && (*(char *)((long)plVar21 + 0xc) == '\0')) {
          *(undefined1 *)((long)plVar21 + 0xc) = 1;
          (**(code **)(*plVar21 + 8))(plVar21);
        }
        plVar13 = *(long **)(param_1 + 0x18);
        if (plVar22 == plVar13) break;
      }
      plVar21 = plVar22;
    } while (uVar19 < *(ulong *)puVar14);
  }
  plVar21 = plVar22;
  if (plVar22 != plVar13) {
LAB_001d9f04:
    do {
      if ((ulong)plVar21[0x3c] < *param_3) {
        plVar22 = (long *)plVar21[6];
        lVar23 = plVar21[7];
        if (lVar23 != 0) {
          *(long **)(lVar23 + 0x30) = plVar22;
        }
        plVar21[7] = 0;
        if (plVar22 != (long *)0x0) {
          plVar22[7] = lVar23;
        }
        plVar21[6] = 0;
        if (*(long **)(param_1 + 8) == plVar21) {
          *(long **)(param_1 + 8) = plVar22;
          plVar13 = *(long **)(param_1 + 0x10);
        }
        else {
          plVar13 = *(long **)(param_1 + 0x10);
        }
        if (plVar13 == plVar21) {
          *(long *)(param_1 + 0x10) = lVar23;
        }
        *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -1;
        plVar13 = plVar21 + 1;
        iVar18 = (int)*plVar13;
        iVar15 = (int)*plVar13 + -1;
        if (iVar18 != (int)*plVar13) {
          ClearExclusiveLocal();
LAB_001d9fc0:
          do {
            lVar23 = *plVar13;
            iVar15 = iVar18 + -1;
            if ((int)lVar23 == iVar18) {
              cVar8 = '\x01';
              bVar17 = (bool)ExclusiveMonitorPass(plVar13,0x10);
              if (bVar17) {
                *(int *)plVar13 = iVar15;
                cVar8 = ExclusiveMonitorsStatus();
              }
              if (cVar8 == '\0') goto LAB_001d9f8c;
            }
            else {
              ClearExclusiveLocal();
            }
            iVar18 = (int)lVar23;
          } while( true );
        }
        cVar8 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(plVar13,0x10);
        if (bVar17) {
          *(int *)plVar13 = iVar15;
          cVar8 = ExclusiveMonitorsStatus();
        }
        if (cVar8 != '\0') goto LAB_001d9fc0;
LAB_001d9f8c:
        if ((iVar15 == 0) && (*(char *)((long)plVar21 + 0xc) == '\0')) {
          *(undefined1 *)((long)plVar21 + 0xc) = 1;
          (**(code **)(*plVar21 + 8))(plVar21);
        }
      }
      else {
        plVar22 = (long *)plVar21[6];
      }
      plVar21 = plVar22;
    } while (plVar22 != *(long **)(param_1 + 0x18));
  }
LAB_001da00c:
  plVar22 = plVar20;
  if (local_68 == uVar24) {
    uVar19 = 0;
    goto joined_r0x001da01c;
  }
  plVar13 = (long *)FUN_00185a6c(0x20);
  if (plVar13 != (long *)0x0) {
    FUN_00197218(plVar13);
  }
  puVar10 = PTR_DAT_04bcb910;
  puVar9 = PTR_DAT_04bcb908;
  puVar14 = PTR_DAT_04bcb900;
  plVar21 = (long *)(PTR_DAT_04bcb900 + 0x18);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar12 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar6 = *puVar12;
    if (uVar6 != 0) {
      lVar23 = **(long **)(puVar14 + 0xa0);
      if ((ulong)((*(long **)(puVar14 + 0xa0))[1] - lVar23 >> 3) <= (ulong)uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar21 = (long *)(*(long *)(lVar23 + (ulong)uVar6 * 8) + 0x10);
    }
  }
  puVar14 = PTR_DAT_04bcbb78;
  if (*plVar21 == 0) {
    lVar23 = 0;
    if (*puVar9 != '\0') goto LAB_001da104;
LAB_001da12c:
    puVar14 = puVar14 + (ulong)param_6 * 0x2a8 + 0x18;
  }
  else {
    lVar23 = *(long *)(*plVar21 + 0x10);
    if (*puVar9 == '\0') goto LAB_001da12c;
LAB_001da104:
    puVar12 = (uint *)FUN_03876070(*(undefined8 *)puVar10);
    if (*puVar12 == 0) goto LAB_001da12c;
    puVar14 = (undefined *)
              (*(long *)(puVar14 + (ulong)param_6 * 0x2a8 + 0x10) + (ulong)*puVar12 * 0x148);
  }
  puVar9 = PTR_DAT_04bcc7e8;
  puVar3 = (undefined8 *)(lVar23 + 0x1b0);
  if (1 < *(int *)(puVar14 + 0x140) - 1U) {
    puVar3 = (undefined8 *)(lVar23 + 0x1a8);
  }
  if (plVar20 == (long *)0x0) {
    if (plVar13 == (long *)0x0) {
      return uVar19;
    }
    plVar22 = (long *)0x0;
  }
  else {
    plVar21 = (long *)*puVar3;
    do {
      FUN_0019742c(plVar13);
      (**(code **)(*plVar21 + 0x40))(plVar21,plVar20,plVar13);
      if ((int)plVar20[0x44] == 0) {
        *(undefined4 *)(plVar20 + 0x44) = 1;
        if ((ulong)*(ushort *)((long)plVar20 + 0x202) < *(ulong *)puVar9) goto LAB_001da170;
LAB_001da1d8:
        plVar5 = (long *)plVar20[4];
        lVar23 = plVar20[5];
        if (lVar23 != 0) {
          *(long **)(lVar23 + 0x20) = plVar5;
        }
        plVar20[5] = 0;
        if (plVar5 != (long *)0x0) {
          plVar5[5] = lVar23;
        }
        plVar20[4] = 0;
        plVar1 = plVar20 + 1;
        iVar18 = (int)*plVar1;
        plVar4 = plVar5;
        if (plVar22 != plVar20) {
          plVar4 = plVar22;
        }
        iVar15 = (int)*plVar1 + -1;
        if (iVar18 != (int)*plVar1) {
          ClearExclusiveLocal();
LAB_001da270:
          do {
            lVar23 = *plVar1;
            iVar15 = iVar18 + -1;
            if ((int)lVar23 == iVar18) {
              cVar8 = '\x01';
              bVar17 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar17) {
                *(int *)plVar1 = iVar15;
                cVar8 = ExclusiveMonitorsStatus();
              }
              if (cVar8 == '\0') goto LAB_001da23c;
            }
            else {
              ClearExclusiveLocal();
            }
            iVar18 = (int)lVar23;
          } while( true );
        }
        cVar8 = '\x01';
        bVar17 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar17) {
          *(int *)plVar1 = iVar15;
          cVar8 = ExclusiveMonitorsStatus();
        }
        if (cVar8 != '\0') goto LAB_001da270;
LAB_001da23c:
        plVar22 = plVar4;
        if ((iVar15 == 0) && (*(char *)((long)plVar20 + 0xc) == '\0')) {
          *(undefined1 *)((long)plVar20 + 0xc) = 1;
          (**(code **)(*plVar20 + 8))(plVar20);
        }
      }
      else {
        if (*(ulong *)puVar9 <= (ulong)*(ushort *)((long)plVar20 + 0x202)) goto LAB_001da1d8;
LAB_001da170:
        plVar5 = (long *)plVar20[4];
      }
      plVar20 = plVar5;
      FUN_001975b8(param_5,plVar13[2]);
    } while (plVar20 != (long *)0x0);
  }
  (**(code **)(*plVar13 + 8))(plVar13);
joined_r0x001da01c:
  if (plVar22 != (long *)0x0) {
    lVar23 = plVar22[5];
    plVar13 = (long *)plVar22[4];
    while( true ) {
      plVar20 = plVar13;
      if (lVar23 != 0) {
        *(long **)(lVar23 + 0x20) = plVar20;
      }
      plVar22[5] = 0;
      if (plVar20 == (long *)0x0) break;
      plVar20[5] = lVar23;
      plVar22[4] = 0;
      lVar23 = plVar20[5];
      plVar13 = (long *)plVar20[4];
      plVar22 = plVar20;
    }
    plVar22[4] = 0;
  }
  return uVar19;
}

