
void FUN_001c8050(undefined8 param_1,long param_2,long param_3,undefined4 param_4,ulong param_5,
                 undefined4 param_6,uint param_7,byte param_8,uint param_9,undefined1 param_10)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined1 uVar6;
  char cVar7;
  code *pcVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  int iVar16;
  int iVar17;
  bool bVar18;
  undefined1 uVar19;
  uint uVar20;
  undefined8 *puVar21;
  long *plVar22;
  undefined8 *puVar23;
  long *plVar24;
  int iVar25;
  ulong uVar26;
  uint local_7c;
  long *local_78;
  long *local_70;
  long *local_68;
  
  local_68 = (long *)0x0;
  local_78 = (long *)0x0;
  local_70 = (long *)0x0;
  if (*(long *)(param_3 + 0x18) == 0) {
    iVar25 = 0;
  }
  else {
    uVar26 = 0;
    iVar25 = 0;
    puVar2 = PTR_DAT_04bcbc48 + 0x10;
    puVar3 = PTR_DAT_04bcc018 + 0x10;
    puVar4 = PTR_DAT_04bcc518 + 0x10;
    uVar20 = 1;
    do {
      uVar19 = (undefined1)uVar20;
      if ((*(byte *)(param_3 + 0x30) >> 2 & 1) == 0) {
        plVar9 = (long *)FUN_00185a6c(0x38);
        if (plVar9 != (long *)0x0) {
          *plVar9 = (long)puVar2;
          *(undefined4 *)(plVar9 + 1) = 1;
          *(undefined1 *)((long)plVar9 + 0xc) = 0;
          *plVar9 = (long)puVar3;
          FUN_00196a24(plVar9,param_4,0);
        }
      }
      else {
        plVar9 = (long *)FUN_0018ae24(0x38,0);
        if (plVar9 == (long *)0x0) break;
        *plVar9 = (long)(PTR_DAT_04bcbc48 + 0x10);
        *(undefined4 *)(plVar9 + 1) = 1;
        *(undefined1 *)((long)plVar9 + 0xc) = 0;
        *plVar9 = (long)(PTR_DAT_04bcc018 + 0x10);
        FUN_00196a24(plVar9,param_4,4);
        *plVar9 = (long)puVar4;
        if (plVar9[2] == 0) {
          FUN_00196ce0(plVar9);
          FUN_00185ac4(plVar9);
          break;
        }
      }
      uVar14 = *(long *)(param_3 + 0x18) - uVar26;
      if (param_5 <= uVar14) {
        uVar14 = param_5;
      }
      FUN_00193030(plVar9,*(long *)(param_3 + 0x10) + *(long *)(param_3 + 0x28) + uVar26,uVar14,
                   0xffffffffffffffff);
      if ((*(byte *)(param_3 + 0x30) >> 2 & 1) == 0) {
        plVar10 = (long *)FUN_00185a6c(0x238);
        FUN_001d8a50(plVar10,param_2,param_6,param_7,plVar9,param_9);
      }
      else {
        plVar10 = (long *)FUN_0018ae24(0x238,0);
        if ((plVar10 == (long *)0x0) ||
           ((FUN_001a7b50(plVar10,param_2,param_6,param_7,plVar9,param_9),
            (*(ushort *)(plVar10 + 0xc) >> 6 & 1) != 0 && (plVar10[0x3e] == 0)))) {
          plVar24 = plVar9 + 1;
          lVar11 = *plVar24;
          iVar16 = (int)*plVar24 + -1;
          if ((int)lVar11 == (int)*plVar24) {
            cVar7 = '\x01';
            bVar18 = (bool)ExclusiveMonitorPass(plVar24,0x10);
            if (bVar18) {
              *(int *)plVar24 = iVar16;
              cVar7 = ExclusiveMonitorsStatus();
            }
            if (cVar7 != '\0') goto LAB_001c83a0;
            bVar18 = true;
          }
          else {
            ClearExclusiveLocal();
LAB_001c83a0:
            bVar18 = false;
          }
          iVar17 = (int)lVar11;
          if (!bVar18) goto LAB_001c86f0;
          goto LAB_001c83a8;
        }
      }
      uVar26 = uVar26 + param_5;
      uVar1 = uVar20 + 2;
      *(byte *)(plVar10 + 0x42) = param_8 & 1;
      if (((uVar20 & 0xff) + 1 & 0x100) == 0) {
        uVar1 = (uVar20 & 0xff) + 1;
      }
      uVar6 = *(undefined1 *)(param_2 + 0x1eb);
      *(undefined1 *)((long)plVar10 + 0xa4) = param_10;
      *(undefined1 *)(plVar10 + 8) = uVar6;
      if (*(ulong *)(param_3 + 0x18) <= uVar26) {
        uVar19 = 0;
        uVar1 = uVar20;
      }
      *(undefined1 *)(plVar10 + 0x14) = uVar19;
      if (local_70 == local_68) {
        uVar15 = (long)local_70 - (long)local_78;
        uVar14 = ((long)uVar15 >> 3) + 1;
        if (uVar14 >> 0x3d != 0) {
          FUN_001df2c0(&local_78);
                    /* WARNING: Does not return */
          pcVar8 = (code *)UndefinedInstructionException(0,0x1c8804);
          (*pcVar8)();
        }
        uVar5 = (long)uVar15 >> 2;
        if ((ulong)((long)uVar15 >> 2) <= uVar14) {
          uVar5 = uVar14;
        }
        if (0x7ffffffffffffff7 < uVar15) {
          uVar5 = 0x1fffffffffffffff;
        }
        if (uVar5 == 0) {
          lVar11 = 0;
        }
        else {
          lVar11 = FUN_00187df4(uVar5 << 3);
        }
        plVar24 = (long *)(lVar11 + ((long)uVar15 >> 3) * 8);
        plVar9 = plVar24 + 1;
        *plVar24 = (long)plVar10;
        if (local_70 != local_78) {
          do {
            local_70 = local_70 + -1;
            plVar24 = plVar24 + -1;
            *plVar24 = *local_70;
          } while (local_70 != local_78);
          local_70 = local_78;
        }
        local_68 = (long *)(lVar11 + uVar5 * 8);
        local_78 = plVar24;
        if (local_70 != (long *)0x0) {
          plVar10 = local_70;
          local_70 = plVar9;
          FUN_00187e4c(plVar10);
          plVar9 = local_70;
        }
      }
      else {
        *local_70 = (long)plVar10;
        plVar9 = local_70 + 1;
      }
      local_70 = plVar9;
      iVar25 = iVar25 + 1;
      uVar20 = uVar1;
    } while (uVar26 < *(ulong *)(param_3 + 0x18));
  }
LAB_001c83e0:
  plVar9 = local_78;
  do {
    if (plVar9 == local_70) {
      if (((param_7 >> 5 & 1) == 0) || (param_9 == 0)) goto LAB_001c87bc;
      puVar13 = *(undefined8 **)(param_2 + 0x4b8);
      if (*(undefined8 **)(param_2 + 0x4b8) != (undefined8 *)0x0) goto LAB_001c874c;
      puVar21 = (undefined8 *)(param_2 + 0x4b8);
      puVar23 = (undefined8 *)(param_2 + 0x4b8);
      goto LAB_001c876c;
    }
    plVar24 = (long *)*plVar9;
    plVar10 = (long *)plVar24[0x27];
    FUN_001c7bf0(param_1,param_2,plVar24);
    local_7c = local_7c & 0xffffff00;
    uVar26 = FUN_0018aad8(param_1,&local_7c);
    if ((uVar26 & 1) == 0) {
      plVar22 = plVar24 + 1;
      iVar16 = (int)*plVar22;
      iVar17 = (int)*plVar22 + -1;
      if (iVar16 != (int)*plVar22) {
        ClearExclusiveLocal();
LAB_001c8614:
        do {
          lVar11 = *plVar22;
          iVar17 = iVar16 + -1;
          if ((int)lVar11 == iVar16) {
            cVar7 = '\x01';
            bVar18 = (bool)ExclusiveMonitorPass(plVar22,0x10);
            if (bVar18) {
              *(int *)plVar22 = iVar17;
              cVar7 = ExclusiveMonitorsStatus();
            }
            if (cVar7 == '\0') goto LAB_001c85cc;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar16 = (int)lVar11;
        } while( true );
      }
      cVar7 = '\x01';
      bVar18 = (bool)ExclusiveMonitorPass(plVar22,0x10);
      if (bVar18) {
        *(int *)plVar22 = iVar17;
        cVar7 = ExclusiveMonitorsStatus();
      }
      if (cVar7 != '\0') goto LAB_001c8614;
LAB_001c85cc:
      if ((iVar17 == 0) && (*(char *)((long)plVar24 + 0xc) == '\0')) {
        *(undefined1 *)((long)plVar24 + 0xc) = 1;
        (**(code **)(*plVar24 + 8))(plVar24);
        iVar16 = (int)plVar10[1];
        iVar17 = (int)plVar10[1];
        if (iVar17 != iVar16) {
LAB_001c8670:
          ClearExclusiveLocal();
          goto LAB_001c86b0;
        }
      }
      else {
        iVar16 = (int)plVar10[1];
        iVar17 = (int)plVar10[1];
        if (iVar17 != iVar16) goto LAB_001c8670;
      }
      iVar16 = iVar16 + -1;
      cVar7 = '\x01';
      bVar18 = (bool)ExclusiveMonitorPass(plVar10 + 1,0x10);
      if (bVar18) {
        *(int *)(plVar10 + 1) = iVar16;
        cVar7 = ExclusiveMonitorsStatus();
      }
      if (cVar7 != '\0') {
LAB_001c86b0:
        do {
          plVar24 = plVar10 + 1;
          lVar11 = *plVar24;
          iVar16 = iVar17 + -1;
          if ((int)lVar11 == iVar17) {
            cVar7 = '\x01';
            bVar18 = (bool)ExclusiveMonitorPass(plVar24,0x10);
            if (bVar18) {
              *(int *)plVar24 = iVar16;
              cVar7 = ExclusiveMonitorsStatus();
            }
            if (cVar7 == '\0') break;
          }
          else {
            ClearExclusiveLocal();
          }
          iVar17 = (int)lVar11;
        } while( true );
      }
      if ((iVar16 == 0) && (*(char *)((long)plVar10 + 0xc) == '\0')) {
        *(undefined1 *)((long)plVar10 + 0xc) = 1;
        (**(code **)(*plVar10 + 8))(plVar10);
      }
      plVar9 = plVar9 + 1;
    }
    else {
      do {
        plVar24 = (long *)*plVar9;
        plVar10 = plVar24 + 1;
        plVar22 = (long *)plVar24[0x27];
        iVar16 = (int)*plVar10;
        iVar17 = (int)*plVar10 + -1;
        if (iVar16 != (int)*plVar10) {
          ClearExclusiveLocal();
LAB_001c8504:
          do {
            lVar11 = *plVar10;
            iVar17 = iVar16 + -1;
            if ((int)lVar11 == iVar16) {
              cVar7 = '\x01';
              bVar18 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar18) {
                *(int *)plVar10 = iVar17;
                cVar7 = ExclusiveMonitorsStatus();
              }
              if (cVar7 == '\0') goto LAB_001c84bc;
            }
            else {
              ClearExclusiveLocal();
            }
            iVar16 = (int)lVar11;
          } while( true );
        }
        cVar7 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(plVar10,0x10);
        if (bVar18) {
          *(int *)plVar10 = iVar17;
          cVar7 = ExclusiveMonitorsStatus();
        }
        if (cVar7 != '\0') goto LAB_001c8504;
LAB_001c84bc:
        if ((iVar17 == 0) && (*(char *)((long)plVar24 + 0xc) == '\0')) {
          *(undefined1 *)((long)plVar24 + 0xc) = 1;
          (**(code **)(*plVar24 + 8))();
          iVar16 = (int)plVar22[1];
          iVar17 = (int)plVar22[1];
          if (iVar17 != iVar16) {
LAB_001c8554:
            ClearExclusiveLocal();
            goto LAB_001c8594;
          }
        }
        else {
          iVar16 = (int)plVar22[1];
          iVar17 = (int)plVar22[1];
          if (iVar17 != iVar16) goto LAB_001c8554;
        }
        iVar16 = iVar16 + -1;
        cVar7 = '\x01';
        bVar18 = (bool)ExclusiveMonitorPass(plVar22 + 1,0x10);
        if (bVar18) {
          *(int *)(plVar22 + 1) = iVar16;
          cVar7 = ExclusiveMonitorsStatus();
        }
        if (cVar7 != '\0') {
LAB_001c8594:
          do {
            plVar10 = plVar22 + 1;
            lVar11 = *plVar10;
            iVar16 = iVar17 + -1;
            if ((int)lVar11 == iVar17) {
              cVar7 = '\x01';
              bVar18 = (bool)ExclusiveMonitorPass(plVar10,0x10);
              if (bVar18) {
                *(int *)plVar10 = iVar16;
                cVar7 = ExclusiveMonitorsStatus();
              }
              if (cVar7 == '\0') break;
            }
            else {
              ClearExclusiveLocal();
            }
            iVar17 = (int)lVar11;
          } while( true );
        }
        if ((iVar16 == 0) && (*(char *)((long)plVar22 + 0xc) == '\0')) {
          *(undefined1 *)((long)plVar22 + 0xc) = 1;
          (**(code **)(*plVar22 + 8))(plVar22);
        }
        plVar9 = plVar9 + 1;
      } while (plVar9 != local_70);
    }
  } while ((uVar26 & 1) == 0);
LAB_001c87d0:
  if (local_78 != (long *)0x0) {
    FUN_00187e4c();
  }
  return;
LAB_001c86f0:
  lVar11 = *plVar24;
  iVar16 = iVar17 + -1;
  if ((int)lVar11 == iVar17) {
    cVar7 = '\x01';
    bVar18 = (bool)ExclusiveMonitorPass(plVar24,0x10);
    if (bVar18) {
      *(int *)plVar24 = iVar16;
      cVar7 = ExclusiveMonitorsStatus();
    }
    if (cVar7 == '\0') goto LAB_001c83a8;
  }
  else {
    ClearExclusiveLocal();
  }
  iVar17 = (int)lVar11;
  goto LAB_001c86f0;
LAB_001c83a8:
  if ((iVar16 == 0) && (*(char *)((long)plVar9 + 0xc) == '\0')) {
    *(undefined1 *)((long)plVar9 + 0xc) = 1;
    (**(code **)(*plVar9 + 8))(plVar9);
  }
  if (plVar10 != (long *)0x0) {
    (**(code **)(*plVar10 + 8))(plVar10);
  }
  goto LAB_001c83e0;
  while( true ) {
    if (param_9 <= *(uint *)((long)puVar12 + 0x1c)) goto LAB_001c87b8;
    puVar13 = (undefined8 *)puVar12[1];
    if ((undefined8 *)puVar12[1] == (undefined8 *)0x0) break;
LAB_001c874c:
    puVar12 = puVar13;
    puVar23 = puVar12;
    if (param_9 < *(uint *)((long)puVar12 + 0x1c)) {
      puVar13 = (undefined8 *)*puVar12;
      puVar21 = puVar12;
      if ((undefined8 *)*puVar12 == (undefined8 *)0x0) goto LAB_001c876c;
      goto LAB_001c874c;
    }
  }
  puVar21 = puVar12 + 1;
LAB_001c876c:
  puVar12 = (undefined8 *)FUN_00187df4(0x28);
  *(uint *)((long)puVar12 + 0x1c) = param_9;
  *(undefined4 *)(puVar12 + 4) = 0;
  *puVar12 = 0;
  puVar12[1] = 0;
  puVar12[2] = puVar23;
  *puVar21 = puVar12;
  puVar13 = puVar12;
  if (**(long **)(param_2 + 0x4b0) != 0) {
    *(long *)(param_2 + 0x4b0) = **(long **)(param_2 + 0x4b0);
    puVar13 = (undefined8 *)*puVar21;
  }
  FUN_03876250(*(undefined8 *)(param_2 + 0x4b8),puVar13);
  *(long *)(param_2 + 0x4c0) = *(long *)(param_2 + 0x4c0) + 1;
LAB_001c87b8:
  *(int *)(puVar12 + 4) = iVar25;
LAB_001c87bc:
  local_7c = 0x10001;
  FUN_0018aa70(param_1,&local_7c);
  goto LAB_001c87d0;
}

