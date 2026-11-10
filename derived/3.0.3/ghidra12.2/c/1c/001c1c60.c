
long FUN_001c1c60(long param_1,long *param_2,undefined8 param_3,ulong param_4)

{
  int *piVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  undefined1 uVar6;
  byte bVar7;
  ushort uVar8;
  char cVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uVar14;
  uint *puVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  ulong uVar19;
  int iVar20;
  bool bVar21;
  int iVar22;
  long lVar23;
  undefined1 *puVar24;
  ulong uVar25;
  long *plVar26;
  long *plVar27;
  undefined *puVar28;
  long *local_e8;
  long local_c0;
  long *local_b8;
  undefined1 auStack_b0 [16];
  long local_a0;
  undefined1 auStack_90 [16];
  long local_80;
  long *local_70;
  long *local_68;
  
  plVar26 = (long *)param_2[2];
  if (plVar26 == (long *)0x0) {
    return 0;
  }
  param_4 = param_4 & 0xffffffff;
  uVar14 = FUN_001d8cf4(plVar26);
  puVar12 = PTR_DAT_04bcb910;
  if ((uVar14 & 1) == 0) {
    return 0;
  }
  uVar14 = (ulong)*(byte *)((long)plVar26 + 0x42);
  if (*PTR_DAT_04bcb908 == '\0') {
LAB_001c1cf4:
    puVar28 = PTR_DAT_04bcbb78 + uVar14 * 0x2a8 + 0x18;
  }
  else {
    puVar15 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    if (*puVar15 == 0) goto LAB_001c1cf4;
    puVar28 = (undefined *)
              (*(long *)(PTR_DAT_04bcbb78 + uVar14 * 0x2a8 + 0x10) + (ulong)*puVar15 * 0x148);
  }
  uVar3 = *(ulong *)(puVar28 + 0x50);
  uVar4 = *(ulong *)(puVar28 + 0x58);
  uVar6 = *(undefined1 *)((long)plVar26 + 0xa2);
  uVar19 = uVar4;
  if (uVar4 <= uVar3) {
    uVar19 = uVar3;
  }
  if (((*(ushort *)(plVar26 + 0xc) & 0xf) == 4) || (plVar26[0x27] == 0)) {
    if (*(char *)(param_1 + 0x1e8) != '\0') goto LAB_001c1d58;
LAB_001c1e54:
    plVar16 = (long *)FUN_00185a6c(0x38);
    if (plVar16 != (long *)0x0) {
      *plVar16 = (long)(PTR_DAT_04bcbc48 + 0x10);
      *(undefined4 *)(plVar16 + 1) = 1;
      puVar10 = PTR_DAT_04bcc018;
      *(undefined1 *)((long)plVar16 + 0xc) = 0;
      *plVar16 = (long)(puVar10 + 0x10);
      FUN_00196a24(plVar16,param_4,0);
    }
    plVar17 = (long *)FUN_00185a6c(0x38);
    if (plVar17 != (long *)0x0) {
      *plVar17 = (long)(PTR_DAT_04bcbc48 + 0x10);
      *(undefined4 *)(plVar17 + 1) = 1;
      puVar10 = PTR_DAT_04bcc018;
      *(undefined1 *)((long)plVar17 + 0xc) = 0;
      *plVar17 = (long)(puVar10 + 0x10);
      FUN_00196a24(plVar17,param_4,0);
    }
  }
  else {
    if ((*(char *)(param_1 + 0x1e8) == '\0') || ((*(byte *)(plVar26[0x27] + 0x30) >> 2 & 1) == 0))
    goto LAB_001c1e54;
LAB_001c1d58:
    plVar16 = (long *)FUN_0018ae24(0x38,0);
    puVar10 = PTR_DAT_04bcc518;
    if (plVar16 != (long *)0x0) {
      *plVar16 = (long)(PTR_DAT_04bcbc48 + 0x10);
      *(undefined4 *)(plVar16 + 1) = 1;
      puVar13 = PTR_DAT_04bcc018;
      *(undefined1 *)((long)plVar16 + 0xc) = 0;
      *plVar16 = (long)(puVar13 + 0x10);
      FUN_00196a24(plVar16,param_4,4);
      *plVar16 = (long)(puVar10 + 0x10);
    }
    plVar17 = (long *)FUN_0018ae24(0x38,0);
    if (plVar17 != (long *)0x0) {
      *plVar17 = (long)(PTR_DAT_04bcbc48 + 0x10);
      *(undefined4 *)(plVar17 + 1) = 1;
      puVar13 = PTR_DAT_04bcc018;
      *(undefined1 *)((long)plVar17 + 0xc) = 0;
      *plVar17 = (long)(puVar13 + 0x10);
      FUN_00196a24(plVar17,param_4,4);
      *plVar17 = (long)(puVar10 + 0x10);
    }
    if (plVar16 == (long *)0x0) {
LAB_001c1e40:
      if (plVar17 != (long *)0x0) {
        (**(code **)(*plVar17 + 8))(plVar17);
      }
      goto LAB_001c1e54;
    }
    if (((plVar17 == (long *)0x0) || (plVar16[2] == 0)) || (plVar17[2] == 0)) {
      (**(code **)(*plVar16 + 8))(plVar16);
      goto LAB_001c1e40;
    }
  }
  FUN_001972b0(auStack_90,plVar16);
  plVar27 = plVar16 + 1;
  iVar22 = (int)*plVar27;
  iVar20 = (int)*plVar27 + -1;
  if (iVar22 != (int)*plVar27) {
    ClearExclusiveLocal();
LAB_001c1fa4:
    do {
      lVar23 = *plVar27;
      iVar20 = iVar22 + -1;
      if ((int)lVar23 == iVar22) {
        cVar9 = '\x01';
        bVar21 = (bool)ExclusiveMonitorPass(plVar27,0x10);
        if (bVar21) {
          *(int *)plVar27 = iVar20;
          cVar9 = ExclusiveMonitorsStatus();
        }
        if (cVar9 == '\0') goto LAB_001c1f38;
      }
      else {
        ClearExclusiveLocal();
      }
      iVar22 = (int)lVar23;
    } while( true );
  }
  cVar9 = '\x01';
  bVar21 = (bool)ExclusiveMonitorPass(plVar27,0x10);
  if (bVar21) {
    *(int *)plVar27 = iVar20;
    cVar9 = ExclusiveMonitorsStatus();
  }
  if (cVar9 != '\0') goto LAB_001c1fa4;
LAB_001c1f38:
  if ((iVar20 == 0) && (*(char *)((long)plVar16 + 0xc) == '\0')) {
    *(undefined1 *)((long)plVar16 + 0xc) = 1;
    (**(code **)(*plVar16 + 8))(plVar16);
  }
  FUN_001972b0(auStack_b0,plVar17);
  plVar16 = plVar17 + 1;
  iVar22 = (int)*plVar16;
  iVar20 = (int)*plVar16 + -1;
  if (iVar22 != (int)*plVar16) {
    ClearExclusiveLocal();
LAB_001c24f0:
    do {
      lVar23 = *plVar16;
      iVar20 = iVar22 + -1;
      if ((int)lVar23 == iVar22) {
        cVar9 = '\x01';
        bVar21 = (bool)ExclusiveMonitorPass(plVar16,0x10);
        if (bVar21) {
          *(int *)plVar16 = iVar20;
          cVar9 = ExclusiveMonitorsStatus();
        }
        if (cVar9 == '\0') goto LAB_001c1fd8;
      }
      else {
        ClearExclusiveLocal();
      }
      iVar22 = (int)lVar23;
    } while( true );
  }
  cVar9 = '\x01';
  bVar21 = (bool)ExclusiveMonitorPass(plVar16,0x10);
  if (bVar21) {
    *(int *)plVar16 = iVar20;
    cVar9 = ExclusiveMonitorsStatus();
  }
  if (cVar9 != '\0') goto LAB_001c24f0;
LAB_001c1fd8:
  if ((iVar20 == 0) && (*(char *)((long)plVar17 + 0xc) == '\0')) {
    *(undefined1 *)((long)plVar17 + 0xc) = 1;
    (**(code **)(*plVar17 + 8))(plVar17);
  }
  puVar10 = PTR_DAT_04bcb900;
  plVar16 = (long *)(PTR_DAT_04bcb900 + 0x18);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar15 = (uint *)FUN_03876070(*(undefined8 *)puVar12);
    uVar5 = *puVar15;
    if (uVar5 != 0) {
      lVar23 = **(long **)(puVar10 + 0xa0);
      if ((ulong)((*(long **)(puVar10 + 0xa0))[1] - lVar23 >> 3) <= (ulong)uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar16 = (long *)(*(long *)(lVar23 + (ulong)uVar5 * 8) + 0x10);
    }
  }
  puVar10 = PTR_DAT_04bcc630;
  puVar2 = (undefined8 *)(*(long *)(*plVar16 + 0x10) + 0x1b0);
  if (1 < (int)plVar26[0x3d] - 1U) {
    puVar2 = (undefined8 *)(*(long *)(*plVar16 + 0x10) + 0x1a8);
  }
  if (plVar26 == (long *)param_2[4]) {
    *(long *)PTR_DAT_04bcc630 = *(long *)PTR_DAT_04bcc630 + 1;
    lVar23 = local_a0;
  }
  else {
    uVar25 = 0;
    local_e8 = (long *)0x0;
    plVar16 = (long *)*puVar2;
    do {
      FUN_0019742c(auStack_90);
      (**(code **)(*plVar16 + 0x40))(plVar16,plVar26,auStack_90);
      if (param_4 < (ulong)(*(long *)(local_80 + 0x18) + *(long *)(local_a0 + 0x18))) break;
      FUN_001975b8(auStack_b0);
      plVar17 = plVar26 + 1;
      iVar22 = (int)*plVar17;
      if (iVar22 != (int)*plVar17) {
        ClearExclusiveLocal();
LAB_001c2220:
        do {
          lVar23 = *plVar17;
          if ((int)lVar23 == iVar22) {
            cVar9 = '\x01';
            bVar21 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar21) {
              *(int *)plVar17 = iVar22 + 1;
              cVar9 = ExclusiveMonitorsStatus();
            }
            if (cVar9 == '\0') goto LAB_001c212c;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar22 = (int)lVar23;
        } while( true );
      }
      cVar9 = '\x01';
      bVar21 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar21) {
        *(int *)plVar17 = (int)*plVar17 + 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
      if (cVar9 != '\0') goto LAB_001c2220;
LAB_001c212c:
      local_b8 = plVar26;
      (**(code **)(*param_2 + 0x28))(&local_68,param_2,&local_b8);
      if (((((plVar26[0x43] != 0) && (*PTR_DAT_04bcc628 != '\0')) &&
           (uVar8 = *(ushort *)(plVar26 + 0xc), (uVar8 & 0xf) == 2)) &&
          (*(char *)((long)plVar26 + 0x42) == '\x01')) &&
         (((uVar8 & 0x30) != 0 || (*PTR_DAT_04bcc638 != '\0')))) {
        if ((((uVar8 & 0x30) == 0) || ((uVar8 & 0x10) == 0 && *PTR_DAT_04bcc640 != '\0')) &&
           ((((*(char *)((long)plVar26 + 0x211) == '\0' && (local_e8 = plVar26, plVar26[3] == 0)) &&
             (plVar26[2] == 0)) && (*(long **)(param_1 + 0x1c8) != plVar26)))) {
          lVar23 = *plVar17;
          if ((int)lVar23 == (int)*plVar17) {
            cVar9 = '\x01';
            bVar21 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar21) {
              *(int *)plVar17 = (int)*plVar17 + 1;
              cVar9 = ExclusiveMonitorsStatus();
            }
            if (cVar9 != '\0') goto LAB_001c224c;
            bVar21 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_001c224c:
            bVar21 = false;
          }
          iVar22 = (int)lVar23;
          if (!bVar21) {
            do {
              lVar23 = *plVar17;
              if ((int)lVar23 == iVar22) {
                cVar9 = '\x01';
                bVar21 = (bool)ExclusiveMonitorPass(plVar17,0x10);
                if (bVar21) {
                  *(int *)plVar17 = iVar22 + 1;
                  cVar9 = ExclusiveMonitorsStatus();
                }
                if (cVar9 == '\0') break;
              }
              else {
                ClearExclusiveLocal();
              }
              iVar22 = (int)lVar23;
            } while( true );
          }
          if (*(long *)(param_1 + 0x1c8) == *(long *)(param_1 + 0x1d8)) {
            *(long **)(param_1 + 0x1c8) = plVar26;
          }
          else {
            *(long **)(*(long *)(param_1 + 0x1d0) + 0x10) = plVar26;
            plVar26[3] = *(long *)(param_1 + 0x1d0);
          }
          *(long **)(param_1 + 0x1d0) = plVar26;
          *(long *)(param_1 + 0x1e0) = *(long *)(param_1 + 0x1e0) + 1;
        }
      }
      uVar25 = uVar25 + 1;
      plVar27 = (long *)param_2[4];
      if ((puVar28[0x40] != '\0') && (uVar25 <= uVar19)) {
        if (local_68 == plVar27) {
          plVar27 = local_68;
        }
        else {
          plVar27 = local_68;
          do {
            if ((*(ushort *)(plVar26 + 0xc) & 0xf | 4) != 7) {
              bVar7 = *(byte *)((long)plVar26 + 0x42);
              if (*PTR_DAT_04bcb908 == '\0') {
LAB_001c2430:
                cVar9 = PTR_DAT_04bcbb78[(ulong)bVar7 * 0x2a8 + 0x58];
              }
              else {
                puVar15 = (uint *)FUN_03876070(*(undefined8 *)puVar12);
                if (*puVar15 == 0) goto LAB_001c2430;
                cVar9 = *(char *)(*(long *)(PTR_DAT_04bcbb78 + (ulong)bVar7 * 0x2a8 + 0x10) +
                                  (ulong)*puVar15 * 0x148 + 0x40);
              }
              if (((cVar9 != '\0') &&
                  (*(char *)((long)plVar27 + 0xa2) == *(char *)((long)plVar26 + 0xa2))) &&
                 (*(short *)((long)plVar27 + 0xac) == *(short *)((long)plVar26 + 0xac))) {
                if (((*(int *)(*(long *)PTR_DAT_04bcc2e0 + 8) != 1) ||
                    (uVar8 = *(ushort *)(plVar27 + 0xc), (uVar8 >> 9 & 1) == 0)) ||
                   ((*(ushort *)(plVar26 + 0xc) >> 9 & 1) == 0)) {
                  lVar23 = FUN_001e14d8(plVar27 + 0x28);
                  lVar18 = FUN_001e14d8(plVar26 + 0x28);
                  if ((lVar23 != lVar18) || ((int)plVar27[0x39] != (int)plVar26[0x39]))
                  goto LAB_001c23c0;
                  uVar8 = *(ushort *)(plVar27 + 0xc);
                }
                uVar11 = uVar3;
                if ((uVar8 & 0x30) != 0) {
                  uVar11 = uVar4;
                }
                if (uVar25 <= uVar11) break;
              }
            }
LAB_001c23c0:
            plVar27 = (long *)plVar27[2];
          } while (plVar27 != (long *)param_2[4]);
        }
      }
      iVar20 = (int)*plVar17 + -1;
      iVar22 = (int)*plVar17;
      if (iVar22 != (int)*plVar17) {
        ClearExclusiveLocal();
LAB_001c2384:
        do {
          lVar23 = *plVar17;
          iVar20 = iVar22 + -1;
          if ((int)lVar23 == iVar22) {
            cVar9 = '\x01';
            bVar21 = (bool)ExclusiveMonitorPass(plVar17,0x10);
            if (bVar21) {
              *(int *)plVar17 = iVar20;
              cVar9 = ExclusiveMonitorsStatus();
            }
            if (cVar9 == '\0') goto LAB_001c234c;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar22 = (int)lVar23;
        } while( true );
      }
      cVar9 = '\x01';
      bVar21 = (bool)ExclusiveMonitorPass(plVar17,0x10);
      if (bVar21) {
        *(int *)plVar17 = iVar20;
        cVar9 = ExclusiveMonitorsStatus();
      }
      if (cVar9 != '\0') goto LAB_001c2384;
LAB_001c234c:
      if ((iVar20 == 0) && (*(char *)((long)plVar26 + 0xc) == '\0')) {
        *(undefined1 *)((long)plVar26 + 0xc) = 1;
        (**(code **)(*plVar26 + 8))(plVar26);
      }
      plVar26 = plVar27;
    } while (plVar27 != (long *)param_2[4]);
    puVar12 = PTR_DAT_04bcc630;
    if (*PTR_DAT_04bcc628 == '\0' || local_e8 == (long *)0x0) {
      *(long *)PTR_DAT_04bcc630 = *(long *)PTR_DAT_04bcc630 + 1;
      puVar10 = puVar12;
      lVar23 = local_a0;
    }
    else {
      uVar19 = *(ulong *)PTR_DAT_04bcc648;
      if (param_4 <= *(ulong *)PTR_DAT_04bcc648) {
        uVar19 = param_4;
      }
      lVar23 = uVar19 - *(long *)(local_a0 + 0x18);
      if (lVar23 == 0) {
        uVar14 = 0;
LAB_001c2648:
        puVar24 = auStack_b0;
      }
      else {
        FUN_0019742c(auStack_90);
        FUN_00187810(&local_68);
        uVar5 = *(uint *)PTR_DAT_04bcc650;
        if ((long *)(long)(int)uVar5 < local_68) {
          uVar19 = (ulong)-uVar5;
          if (0 < (int)uVar5) {
            uVar19 = -(ulong)uVar5;
          }
          local_c0 = uVar19 + (long)local_68;
        }
        else {
          local_c0 = 0;
        }
        uVar14 = FUN_001d9990(param_3,local_e8,&local_c0,lVar23,auStack_90,uVar14);
        if (*(long *)(local_80 + 0x18) == 0) goto LAB_001c2648;
        FUN_00193030(local_80,*(long *)(local_a0 + 0x10) + *(long *)(local_a0 + 0x28),
                     *(undefined8 *)(local_a0 + 0x18),0xffffffffffffffff);
        puVar24 = auStack_90;
      }
      FUN_001da320(param_3,param_1 + 0x1b8);
      if (((int)local_e8[0x44] != 2) &&
         ((param_2[2] == 0 || (uVar19 = FUN_001d8cf4(), (uVar19 & 1) == 0)))) {
        FUN_001c1870(param_2,param_3,*(undefined2 *)((long)local_e8 + 0xac));
      }
      plVar26 = *(long **)(param_1 + 0x1c8);
      if (*(long **)(param_1 + 0x1c8) != *(long **)(param_1 + 0x1d8)) {
        do {
          local_70 = plVar26;
          (**(code **)(*(long *)(param_1 + 0x1b8) + 0x28))(&local_68,param_1 + 0x1b8,&local_70);
          plVar26 = local_68;
        } while (local_68 != *(long **)(param_1 + 0x1d8));
      }
      lVar23 = 8;
      if (uVar14 != 0) {
        lVar23 = 0x10;
      }
      *(long *)(puVar12 + lVar23) = *(long *)(puVar12 + lVar23) + 1;
      uVar19 = *(ulong *)PTR_DAT_04bcc658;
      puVar10 = PTR_DAT_04bcc630;
      if (uVar19 >> 1 <= uVar14) {
        *(long *)(puVar12 + 0x18) = *(long *)(puVar12 + 0x18) + 1;
        puVar10 = PTR_DAT_04bcc630;
      }
      PTR_DAT_04bcc630 = puVar10;
      if (uVar14 < uVar19) {
        lVar23 = *(long *)(puVar24 + 0x10);
      }
      else {
        *(long *)(puVar12 + 0x20) = *(long *)(puVar12 + 0x20) + 1;
        lVar23 = *(long *)(puVar24 + 0x10);
      }
    }
  }
  if (lVar23 == 0) goto LAB_001c275c;
  *(long *)(puVar10 + 0x28) = *(long *)(puVar10 + 0x28) + 1;
  *(undefined1 *)(lVar23 + 0x31) = uVar6;
  piVar1 = (int *)(lVar23 + 8);
  iVar22 = *piVar1;
  if (iVar22 == *piVar1) {
    cVar9 = '\x01';
    bVar21 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar21) {
      *piVar1 = *piVar1 + 1;
      cVar9 = ExclusiveMonitorsStatus();
    }
    if (cVar9 != '\0') goto LAB_001c2754;
    bVar21 = true;
  }
  else {
    ClearExclusiveLocal();
LAB_001c2754:
    bVar21 = false;
  }
  if (!bVar21) {
    do {
      iVar20 = *piVar1;
      if (iVar20 == iVar22) {
        cVar9 = '\x01';
        bVar21 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar21) {
          *piVar1 = iVar22 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
        if (cVar9 == '\0') break;
      }
      else {
        ClearExclusiveLocal();
      }
      iVar22 = iVar20;
    } while( true );
  }
LAB_001c275c:
  FUN_00197350(auStack_b0);
  FUN_00197350(auStack_90);
  return lVar23;
}

