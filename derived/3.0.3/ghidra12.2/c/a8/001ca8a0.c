
void FUN_001ca8a0(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  uint uVar4;
  undefined1 uVar5;
  ushort uVar6;
  ushort uVar7;
  char cVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  long *plVar13;
  undefined8 uVar14;
  long *plVar15;
  undefined2 uVar16;
  int iVar17;
  bool bVar18;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined8 local_48;
  
  uVar6 = *(ushort *)(param_2 + 0x60) & 0xf;
  if (uVar6 == 2) {
    if ((*(long *)(param_2 + 0x138) == 0) ||
       ((*(byte *)(*(long *)(param_2 + 0x138) + 0x30) >> 2 & 1) == 0)) {
LAB_001ca988:
      plVar13 = (long *)FUN_00185a6c(0x238);
      if (plVar13 != (long *)0x0) {
        FUN_001d8a50(plVar13,param_1,*(ushort *)(param_2 + 0x60) & 0xf,0x10,0,0);
      }
    }
    else {
      plVar13 = (long *)FUN_0018ae24(0x238,0);
      puVar10 = PTR_DAT_04bcbc48;
      if (plVar13 == (long *)0x0) {
        return;
      }
      uVar6 = *(ushort *)(param_2 + 0x60);
      *plVar13 = (long)(PTR_DAT_04bcbc48 + 0x10);
      *(undefined4 *)(plVar13 + 1) = 1;
      *(undefined1 *)((long)plVar13 + 0xc) = 0;
      puVar11 = PTR_DAT_04bcc330;
      plVar13[2] = 0;
      plVar13[3] = 0;
      *(undefined1 *)(plVar13 + 8) = 0;
      plVar13[4] = 0;
      plVar13[5] = 0;
      *(undefined4 *)((long)plVar13 + 0x42) = 0;
      plVar13[6] = 0;
      plVar13[7] = 0;
      plVar13[0xb] = 0;
      *(undefined2 *)(plVar13 + 0xc) = 0;
      *plVar13 = (long)(puVar11 + 0x10);
      puVar1 = PTR_DAT_04bcc320;
      *(undefined2 *)(plVar13 + 0xe) = 0;
      *(undefined2 *)(plVar13 + 0x10) = 0;
      plVar13[0x13] = 0;
      *(undefined4 *)(plVar13 + 0x14) = 0;
      *(undefined1 *)((long)plVar13 + 0xa4) = 0;
      *(undefined4 *)(plVar13 + 0x15) = 0;
      *(undefined2 *)((long)plVar13 + 0xac) = 0;
      *(undefined2 *)((long)plVar13 + 0xcc) = 0;
      plVar13[0xd] = (long)(puVar1 + 0x10);
      plVar13[0xf] = (long)(puVar1 + 0x10);
      puVar1 = PTR_DAT_04bcc340 + 0x10;
      *(undefined4 *)(plVar13 + 0x1a) = 0;
      puVar2 = PTR_DAT_04bcc338 + 0x10;
      plVar13[0x1b] = (long)puVar1;
      plVar13[0x1c] = 0;
      *(undefined1 *)(plVar13 + 0x26) = 0;
      plVar13[0x27] = 0;
      plVar13[0x1d] = (long)puVar2;
      plVar13[0x1e] = 0;
      FUN_001e1500(plVar13 + 0x28);
      *(undefined4 *)(plVar13 + 0x3d) = 0xffffffff;
      puVar1 = PTR_DAT_04bcc348;
      plVar13[0x3a] = 0;
      plVar13[0x3b] = 0;
      plVar13[0x3c] = 0;
      *(undefined4 *)(plVar13 + 0x40) = 0;
      plVar13[0x45] = 0;
      plVar13[0x41] = 0;
      *(undefined4 *)(plVar13 + 0x46) = 0;
      *(undefined2 *)(plVar13 + 0x42) = 0;
      plVar13[0x43] = 0;
      *(undefined4 *)(plVar13 + 0x44) = 0;
      *plVar13 = (long)(puVar1 + 0x10);
      uVar7 = *(ushort *)(plVar13 + 0xc);
      plVar13[0x3e] = 0;
      plVar13[0x3f] = param_1;
      *(ushort *)(plVar13 + 0xc) = uVar6 & 0xf | uVar7 | 0x10;
      if ((uVar7 >> 6 & 1) != 0) {
        plVar15 = (long *)plVar13[0x27];
        *plVar13 = (long)(puVar11 + 0x10);
        if (plVar15 == (long *)0x0) goto LAB_001cae7c;
        plVar3 = plVar15 + 1;
        lVar9 = *plVar3;
        iVar12 = (int)*plVar3 + -1;
        if ((int)lVar9 == (int)*plVar3) {
          cVar8 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar18) {
            *(int *)plVar3 = iVar12;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 != '\0') goto LAB_001cae54;
          bVar18 = true;
        }
        else {
          ClearExclusiveLocal();
LAB_001cae54:
          bVar18 = false;
        }
        iVar17 = (int)lVar9;
        if (!bVar18) {
          do {
            lVar9 = *plVar3;
            iVar12 = iVar17 + -1;
            if ((int)lVar9 == iVar17) {
              cVar8 = '\x01';
              bVar18 = (bool)ExclusiveMonitorPass(plVar3,0x10);
              if (bVar18) {
                *(int *)plVar3 = iVar12;
                cVar8 = ExclusiveMonitorsStatus();
              }
              if (cVar8 == '\0') break;
            }
            else {
              ClearExclusiveLocal();
            }
            iVar17 = (int)lVar9;
          } while( true );
        }
        if ((iVar12 == 0) && (*(char *)((long)plVar15 + 0xc) == '\0')) {
          *(undefined1 *)((long)plVar15 + 0xc) = 1;
          (**(code **)(*plVar15 + 8))();
        }
LAB_001cae7c:
        FUN_001e1868(plVar13 + 0x28);
        *plVar13 = (long)(puVar10 + 0x10);
        FUN_00185ac4(plVar13);
        return;
      }
    }
    *(undefined1 *)(plVar13 + 8) = *(undefined1 *)(param_1 + 0x1eb);
  }
  else {
    if (uVar6 != 1) goto LAB_001ca988;
    plVar13 = (long *)FUN_00185a6c(0x238);
    if (plVar13 != (long *)0x0) {
      FUN_001d8a50(plVar13,param_1,*(ushort *)(param_2 + 0x60) & 0xf,0x10,
                   *(undefined8 *)(param_2 + 0x138),0);
    }
    uVar5 = *(undefined1 *)(param_2 + 0x40);
    *(undefined1 *)(param_1 + 0x1eb) = uVar5;
    *(undefined1 *)(plVar13 + 8) = uVar5;
    *(undefined4 *)(param_1 + 0x1ec) = *(undefined4 *)(param_2 + 0xd0);
    uVar14 = (**(code **)(**(long **)(param_1 + 800) + 0x18))();
    *(undefined8 *)(param_1 + 0x1f0) = uVar14;
    FUN_001c45c0(param_1,*(undefined1 *)(param_2 + 0xa3));
    *(undefined4 *)(plVar13 + 0x1a) = *(undefined4 *)(param_1 + 0x1ec);
    *(undefined1 *)((long)plVar13 + 0xa3) = *(undefined1 *)(param_1 + 0x180);
    if (((char)plVar13[8] != '\0') && (*(short *)(param_1 + 0x150) == 0)) {
      if (*PTR_DAT_04bcbca8 == '\0') {
        FUN_0018cb8c(&local_48);
      }
      else {
        FUN_0018c9b0(&local_48,0);
      }
      *(undefined8 *)PTR_DAT_04bcbcb0 = local_48;
      iVar12 = FUN_00189e50(0xffff);
      uVar4 = iVar12 + (int)local_48;
      uVar16 = (undefined2)uVar4;
      *(undefined2 *)(param_1 + 0x150) = uVar16;
      if ((uVar4 & 0xffff) == 0) {
        uVar16 = 1;
        *(undefined2 *)(param_1 + 0x150) = 1;
      }
      *(undefined2 *)(plVar13 + 0x10) = uVar16;
    }
  }
  *(undefined2 *)(plVar13 + 0xe) = *(undefined2 *)(param_2 + 0x70);
  *(undefined1 *)(plVar13 + 0x14) = *(undefined1 *)(param_2 + 0xa0);
  *(long *)(param_1 + 0x418) = *(long *)(param_1 + 0x418) + 1;
  FUN_001c7bf0(auStack_60,param_1,plVar13);
  if ((*(ushort *)(plVar13 + 0xc) & 0xf) == 3) {
    plVar15 = (long *)FUN_00185a6c(0x238);
    if (plVar15 != (long *)0x0) {
      FUN_001d8a50(plVar15,param_1,3,0x10,0,0);
    }
    *(undefined2 *)(plVar15 + 0xe) = *(undefined2 *)(param_2 + 0x70);
    *(undefined1 *)(plVar15 + 0x14) = *(undefined1 *)(param_2 + 0xa0);
    *(undefined1 *)(plVar15 + 8) = *(undefined1 *)(param_1 + 0x1eb);
    FUN_001c7bf0(auStack_78,param_1,plVar15);
    plVar3 = plVar15 + 1;
    iVar12 = (int)*plVar3;
    iVar17 = (int)*plVar3 + -1;
    if (iVar12 != (int)*plVar3) {
      ClearExclusiveLocal();
LAB_001cace0:
      do {
        lVar9 = *plVar3;
        iVar17 = iVar12 + -1;
        if ((int)lVar9 == iVar12) {
          cVar8 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar18) {
            *(int *)plVar3 = iVar17;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 == '\0') goto LAB_001cac24;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar12 = (int)lVar9;
      } while( true );
    }
    cVar8 = '\x01';
    bVar18 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar18) {
      *(int *)plVar3 = iVar17;
      cVar8 = ExclusiveMonitorsStatus();
    }
    if (cVar8 != '\0') goto LAB_001cace0;
LAB_001cac24:
    if ((iVar17 == 0) && (*(char *)((long)plVar15 + 0xc) == '\0')) {
      *(undefined1 *)((long)plVar15 + 0xc) = 1;
      (**(code **)(*plVar15 + 8))(plVar15);
    }
    plVar15 = (long *)FUN_00185a6c(0x238);
    if (plVar15 != (long *)0x0) {
      FUN_001d8a50(plVar15,param_1,3,0x10,0,0);
    }
    *(undefined2 *)(plVar15 + 0xe) = *(undefined2 *)(param_2 + 0x70);
    *(undefined1 *)(plVar15 + 0x14) = *(undefined1 *)(param_2 + 0xa0);
    *(undefined1 *)(plVar15 + 8) = *(undefined1 *)(param_1 + 0x1eb);
    FUN_001c7bf0(auStack_78,param_1,plVar15);
    plVar3 = plVar15 + 1;
    iVar12 = (int)*plVar3;
    iVar17 = (int)*plVar3 + -1;
    if (iVar12 != (int)*plVar3) {
      ClearExclusiveLocal();
LAB_001cad60:
      do {
        lVar9 = *plVar3;
        iVar17 = iVar12 + -1;
        if ((int)lVar9 == iVar12) {
          cVar8 = '\x01';
          bVar18 = (bool)ExclusiveMonitorPass(plVar3,0x10);
          if (bVar18) {
            *(int *)plVar3 = iVar17;
            cVar8 = ExclusiveMonitorsStatus();
          }
          if (cVar8 == '\0') goto LAB_001cad14;
        }
        else {
          ClearExclusiveLocal();
        }
        iVar12 = (int)lVar9;
      } while( true );
    }
    cVar8 = '\x01';
    bVar18 = (bool)ExclusiveMonitorPass(plVar3,0x10);
    if (bVar18) {
      *(int *)plVar3 = iVar17;
      cVar8 = ExclusiveMonitorsStatus();
    }
    if (cVar8 != '\0') goto LAB_001cad60;
LAB_001cad14:
    if ((iVar17 != 0) || (*(char *)((long)plVar15 + 0xc) != '\0')) goto LAB_001cad20;
    *(undefined1 *)((long)plVar15 + 0xc) = 1;
    (**(code **)(*plVar15 + 8))(plVar15);
    iVar12 = (int)plVar13[1];
    iVar17 = (int)plVar13[1];
    if (iVar17 != iVar12) goto LAB_001cadb8;
  }
  else {
LAB_001cad20:
    iVar12 = (int)plVar13[1];
    iVar17 = (int)plVar13[1];
    if (iVar17 != iVar12) {
LAB_001cadb8:
      ClearExclusiveLocal();
      goto LAB_001cadf0;
    }
  }
  iVar12 = iVar12 + -1;
  cVar8 = '\x01';
  bVar18 = (bool)ExclusiveMonitorPass(plVar13 + 1,0x10);
  if (bVar18) {
    *(int *)(plVar13 + 1) = iVar12;
    cVar8 = ExclusiveMonitorsStatus();
  }
  if (cVar8 == '\0') {
LAB_001cadc4:
    if ((iVar12 == 0) && (*(char *)((long)plVar13 + 0xc) == '\0')) {
      *(undefined1 *)((long)plVar13 + 0xc) = 1;
      (**(code **)(*plVar13 + 8))(plVar13);
      return;
    }
    return;
  }
LAB_001cadf0:
  do {
    plVar15 = plVar13 + 1;
    lVar9 = *plVar15;
    iVar12 = iVar17 + -1;
    if ((int)lVar9 == iVar17) {
      cVar8 = '\x01';
      bVar18 = (bool)ExclusiveMonitorPass(plVar15,0x10);
      if (bVar18) {
        *(int *)plVar15 = iVar12;
        cVar8 = ExclusiveMonitorsStatus();
      }
      if (cVar8 == '\0') goto LAB_001cadc4;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar17 = (int)lVar9;
  } while( true );
}

