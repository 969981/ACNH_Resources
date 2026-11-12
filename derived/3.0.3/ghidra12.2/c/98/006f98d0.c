
void FUN_006f98d0(long *param_1,undefined4 *param_2,long *param_3)

{
  uint *puVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  long *plVar14;
  undefined8 *puVar15;
  int iVar16;
  long lVar17;
  int iVar18;
  long lVar19;
  long *plVar20;
  undefined8 *puVar21;
  
  *(undefined4 *)((long)param_1 + 0x234) = *param_2;
  puVar1 = (uint *)(param_1 + 0x49);
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar6) {
      *puVar1 = *puVar1 & 0xfffff7ff | 0x800;
      cVar5 = ExclusiveMonitorsStatus();
    }
    puVar4 = PTR_DAT_04bb3350;
  } while (cVar5 != '\0');
  lVar19 = *(long *)PTR_DAT_04bb2698;
  if (lVar19 == 0) {
    plVar14 = malloc(0x278);
  }
  else {
    plVar14 = param_3;
    if (param_3 == (long *)0x0) {
      lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar14 = (long *)(lVar19 + 8);
      if (lVar13 != 0) {
        plVar14 = (long *)(lVar13 + 0xa8);
      }
      plVar14 = (long *)*plVar14;
      if (plVar14 == (long *)0x0) {
        plVar14 = (long *)0x0;
        goto LAB_006f9990;
      }
    }
    plVar14 = (long *)(**(code **)(*plVar14 + 0x30))(plVar14,0x278,8);
  }
LAB_006f9990:
  puVar3 = PTR_DAT_04bb30f8;
  plVar14[2] = 0;
  plVar14[3] = 0;
  plVar14[10] = 0;
  plVar14[4] = 0;
  plVar14[5] = 0;
  plVar14[6] = 0;
  plVar14[7] = 0;
  *(undefined1 *)((long)plVar14 + 0x16b) = 0;
  plVar14[8] = 0;
  plVar14[9] = 0;
  *plVar14 = (long)(puVar3 + 0x10);
  plVar14[1] = (long)&PTR_LAB_048fcfd0;
  pcVar2 = (char *)((long)plVar14 + 0x6c);
  *(undefined4 *)(plVar14 + 0xd) = 0x100;
  plVar14[0xc] = (long)pcVar2;
  uVar7 = s_Component_040afd3c._0_8_;
  if (pcVar2 != "Component") {
    *(undefined1 *)((long)plVar14 + 0x75) = 0;
    *(undefined8 *)pcVar2 = uVar7;
    *(char *)((long)plVar14 + 0x74) = s_Component_040afd3c[8];
  }
  puVar8 = PTR_DAT_04bb21f8;
  plVar14[0x34] = 0;
  plVar14[0x35] = 0;
  puVar3 = PTR_DAT_04bb3108;
  plVar14[0x36] = 0;
  plVar14[0x37] = 0;
  plVar14[0x2e] = -1;
  *(undefined4 *)(plVar14 + 0x2f) = 0xb;
  puVar3 = puVar3 + 0x10;
  plVar14[0xb] = (long)(puVar8 + 0x10);
  plVar14[0x38] = 0;
  plVar14[0x3f] = 0;
  plVar14[0x41] = 0;
  plVar14[0x42] = 0;
  plVar14[0x43] = 0;
  plVar14[0x44] = 0;
  plVar14[0x45] = 0;
  plVar14[0x46] = 0;
  plVar14[0x47] = 0;
  plVar14[0x48] = 0;
  plVar14[0x49] = 0;
  plVar14[0x4a] = 0;
  plVar14[0x4b] = 0;
  *(undefined4 *)(plVar14 + 0x36) = 0xffffffff;
  plVar14[0x42] = 0;
  plVar14[0x43] = 0;
  *(undefined4 *)(plVar14 + 0x44) = 0xffffffff;
  plVar14[0x49] = 0;
  plVar14[0x4a] = 0;
  *(undefined4 *)(plVar14 + 0x4b) = 0xffffffff;
  plVar14[0x3b] = 0;
  plVar14[0x3c] = 0;
  plVar14[0x3d] = 0;
  plVar14[0x3e] = 0;
  *(undefined4 *)(plVar14 + 0x3d) = 0xffffffff;
  plVar14[0x3b] = 0;
  plVar14[0x3c] = 0;
  plVar14[0x4d] = (long)(PTR_DAT_04bb3100 + 0x10);
  plVar14[0x4e] = (long)plVar14;
  plVar14[0x32] = (long)PTR_LAB_04bb30d8;
  plVar14[0x33] = 0;
  plVar14[0x30] = (long)puVar3;
  plVar14[0x31] = (long)plVar14;
  puVar8 = PTR_LAB_04bb30e0;
  plVar14[0x37] = (long)puVar3;
  plVar14[0x38] = (long)plVar14;
  plVar14[0x39] = 0;
  plVar14[0x39] = (long)puVar8;
  plVar14[0x3a] = 0;
  plVar14[0x3f] = (long)plVar14;
  plVar14[0x40] = 0;
  puVar8 = PTR_LAB_04bb30e8;
  plVar14[0x3e] = (long)puVar3;
  plVar14[0x40] = (long)puVar8;
  puVar8 = PTR_LAB_04bb30f0;
  plVar14[0x46] = (long)plVar14;
  plVar14[0x45] = (long)puVar3;
  *(undefined4 *)(plVar14 + 0x4c) = 0xe;
  puVar3 = PTR_DAT_04bb2f50 + 0x10;
  plVar14[0x47] = (long)puVar8;
  *plVar14 = (long)puVar3;
  FUN_006f9fc0(param_1,plVar14,0xffffffff);
  lVar19 = 0;
  if (*(uint *)((long)param_1 + 0x15c) < 0xec) {
    lVar19 = *(long *)(*(long *)PTR_DAT_04bb2f58 + (ulong)*(uint *)((long)param_1 + 0x15c) * 0x10);
  }
  param_1[0x4b] = lVar19;
  lVar13 = *(long *)PTR_DAT_04bb2698;
  lVar19 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
  puVar15 = (undefined8 *)(lVar13 + 8);
  if (lVar19 != 0) {
    puVar15 = (undefined8 *)(lVar19 + 0xa8);
  }
  plVar20 = (long *)*puVar15;
  lVar19 = (**(code **)(*plVar20 + 0x78))(plVar20);
  (**(code **)(*param_1 + 0x38))(param_1,param_2,param_3);
  lVar13 = (**(code **)(*plVar20 + 0x78))(plVar20);
  plVar14[6] = (lVar19 - lVar13) + plVar14[6];
  if (param_1[0xf] == 0) {
    lVar19 = *(long *)PTR_DAT_04bb2698;
    if (lVar19 == 0) {
      plVar14 = malloc(0x2a8);
    }
    else {
      plVar14 = param_3;
      if (param_3 == (long *)0x0) {
        lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar14 = (long *)(lVar19 + 8);
        if (lVar13 != 0) {
          plVar14 = (long *)(lVar13 + 0xa8);
        }
        plVar14 = (long *)*plVar14;
        if (plVar14 == (long *)0x0) {
          plVar14 = (long *)0x0;
          goto LAB_006f9c24;
        }
      }
      plVar14 = (long *)(**(code **)(*plVar14 + 0x30))(plVar14,0x2a8,8);
    }
LAB_006f9c24:
    puVar4 = PTR_DAT_04bb3108;
    puVar12 = PTR_DAT_04bb3100;
    puVar11 = PTR_LAB_04bb30f0;
    puVar10 = PTR_LAB_04bb30e8;
    puVar9 = PTR_LAB_04bb30e0;
    puVar8 = PTR_LAB_04bb30d8;
    puVar3 = PTR_DAT_04bb21f8;
    plVar14[1] = (long)&PTR_LAB_048fcfd0;
    plVar14[2] = 0;
    pcVar2 = (char *)((long)plVar14 + 0x6c);
    plVar14[0xc] = (long)pcVar2;
    plVar14[3] = 0;
    plVar14[4] = 0;
    *(undefined4 *)(plVar14 + 0xd) = 0x100;
    plVar14[5] = 0;
    plVar14[6] = 0;
    *(undefined1 *)((long)plVar14 + 0x16b) = 0;
    plVar14[7] = 0;
    plVar14[8] = 0;
    plVar14[9] = 0;
    plVar14[10] = 0;
    uVar7 = s_Component_040afd3c._0_8_;
    if (pcVar2 != "Component") {
      *(undefined1 *)((long)plVar14 + 0x75) = 0;
      *(undefined8 *)pcVar2 = uVar7;
      *(char *)((long)plVar14 + 0x74) = s_Component_040afd3c[8];
    }
    plVar14[0x2e] = -1;
    plVar14[0xb] = (long)(puVar3 + 0x10);
    puVar4 = puVar4 + 0x10;
    *(undefined4 *)(plVar14 + 0x2f) = 0xb;
    plVar14[0x38] = 0;
    plVar14[0x3f] = 0;
    plVar14[0x41] = 0;
    plVar14[0x42] = 0;
    plVar14[0x43] = 0;
    plVar14[0x44] = 0;
    plVar14[0x45] = 0;
    plVar14[0x46] = 0;
    plVar14[0x47] = 0;
    plVar14[0x48] = 0;
    plVar14[0x49] = 0;
    plVar14[0x4a] = 0;
    plVar14[0x4b] = 0;
    plVar14[0x42] = 0;
    plVar14[0x43] = 0;
    *(undefined4 *)(plVar14 + 0x44) = 0xffffffff;
    plVar14[0x49] = 0;
    plVar14[0x4a] = 0;
    *(undefined4 *)(plVar14 + 0x4b) = 0xffffffff;
    plVar14[0x4d] = (long)(puVar12 + 0x10);
    plVar14[0x4e] = (long)plVar14;
    plVar14[0x46] = (long)plVar14;
    plVar14[0x47] = (long)puVar11;
    plVar14[0x45] = (long)puVar4;
    plVar14[0x34] = 0;
    plVar14[0x35] = 0;
    plVar14[0x36] = 0;
    plVar14[0x37] = 0;
    *(undefined4 *)(plVar14 + 0x36) = 0xffffffff;
    plVar14[0x37] = (long)puVar4;
    plVar14[0x3b] = 0;
    plVar14[0x3c] = 0;
    plVar14[0x3d] = 0;
    plVar14[0x3e] = 0;
    *(undefined4 *)(plVar14 + 0x3d) = 0xffffffff;
    plVar14[0x3e] = (long)puVar4;
    plVar14[0x3b] = 0;
    plVar14[0x3c] = 0;
    plVar14[0x32] = (long)puVar8;
    plVar14[0x33] = 0;
    plVar14[0x30] = (long)puVar4;
    plVar14[0x31] = (long)plVar14;
    plVar14[0x38] = (long)plVar14;
    plVar14[0x39] = 0;
    plVar14[0x39] = (long)puVar9;
    plVar14[0x3a] = 0;
    plVar14[0x3f] = (long)plVar14;
    plVar14[0x40] = 0;
    plVar14[0x40] = (long)puVar10;
    *plVar14 = (long)(PTR_DAT_04bb35d0 + 0x10);
    plVar14[0x50] = (long)(plVar14 + 0x4f);
    plVar14[0x4f] = (long)(plVar14 + 0x4f);
    *(undefined4 *)(plVar14 + 0x51) = 0;
    *(undefined4 *)(plVar14 + 0x52) = 0;
    plVar14[0x53] = 0;
    *(undefined2 *)(plVar14 + 0x54) = 0;
    if (pcVar2 != "ModelResLoader") {
      uVar7 = CONCAT26(s_ModelResLoader_040fe390._6_2_,s_ModelResLoader_040fe390._0_6_);
      *(undefined1 *)((long)plVar14 + 0x7a) = 0;
      *(undefined8 *)pcVar2 = uVar7;
      *(ulong *)((long)plVar14 + 0x72) =
           CONCAT62(s_ModelResLoader_040fe390._8_6_,s_ModelResLoader_040fe390._6_2_);
    }
    *(undefined4 *)((long)plVar14 + 0x28c) = 8;
    *(undefined4 *)(plVar14 + 0x4c) = 1;
    FUN_006f9fc0(param_1,plVar14,0xffffffff);
  }
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar6) {
      *puVar1 = *puVar1 & 0xfffff7ff;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar6) {
      *puVar1 = *puVar1 & 0xffffefff | 0x1000;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  iVar18 = (int)param_1[0x17];
  if (iVar18 < 1) {
LAB_006f9e68:
    iVar16 = 0;
    puVar15 = (undefined8 *)0x0;
  }
  else {
    lVar19 = *(long *)PTR_DAT_04bb2698;
    if (lVar19 == 0) {
      puVar15 = malloc((long)iVar18 << 3);
    }
    else {
      plVar14 = param_3;
      if (param_3 == (long *)0x0) {
        lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar14 = (long *)(lVar19 + 8);
        if (lVar13 != 0) {
          plVar14 = (long *)(lVar13 + 0xa8);
        }
        plVar14 = (long *)*plVar14;
        if (plVar14 == (long *)0x0) goto LAB_006f9e68;
      }
      puVar15 = (undefined8 *)(**(code **)(*plVar14 + 0x30))(plVar14,(long)iVar18 << 3,8);
    }
    iVar16 = 0;
    if (puVar15 != (undefined8 *)0x0) {
      iVar16 = iVar18;
    }
  }
  if ((long *)param_1[0x16] != param_1 + 0x15) {
    lVar13 = (long)*(int *)((long)param_1 + 0xbc);
    lVar19 = param_1[0x16] - lVar13;
    lVar17 = (long)(param_1 + 0x15) - lVar13;
    if (iVar16 == 0) {
      do {
        lVar19 = *(long *)(lVar19 + lVar13 + 8) + -lVar13;
      } while (lVar19 != lVar17);
    }
    else {
      iVar18 = 0;
      do {
        if (iVar18 < iVar16) {
          puVar15[iVar18] = lVar19;
          iVar18 = iVar18 + 1;
        }
        lVar19 = *(long *)(lVar19 + lVar13 + 8) + -lVar13;
      } while (lVar19 != lVar17);
      if (iVar18 != 0) {
        lVar19 = (long)iVar18 << 3;
        puVar21 = puVar15;
        do {
          (**(code **)(*(long *)*puVar21 + 0x38))((long *)*puVar21,param_2,param_3);
          lVar19 = lVar19 + -8;
          puVar21 = puVar21 + 1;
        } while (lVar19 != 0);
      }
    }
  }
  if (puVar15 != (undefined8 *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(puVar15);
    }
    else {
      plVar14 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,puVar15);
      if (plVar14 != (long *)0x0) {
        (**(code **)(*plVar14 + 0x38))(plVar14,puVar15);
      }
    }
  }
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar6) {
      *puVar1 = *puVar1 & 0xffffefff;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if ((*(byte *)((long)param_1 + 0x225) >> 1 & 1) != 0) {
    param_1[0x45] = 0;
  }
  return;
}

