
void FUN_0256c190(long param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  void *pvVar9;
  long lVar10;
  undefined4 *puVar11;
  long lVar12;
  char *pcVar13;
  undefined *local_50;
  undefined *puStack_48;
  
  FUN_0173a0dc();
  puVar3 = PTR_DAT_04bb2698;
  lVar12 = *(long *)PTR_DAT_04bb2698;
  if (lVar12 == 0) {
    plVar8 = malloc(0x2e0);
  }
  else {
    plVar8 = param_3;
    if (param_3 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar8 = (long *)(lVar12 + 8);
      if (lVar7 != 0) {
        plVar8 = (long *)(lVar7 + 0xa8);
      }
      plVar8 = (long *)*plVar8;
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)0x0;
        goto LAB_0256c21c;
      }
    }
    plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x2e0,8);
  }
LAB_0256c21c:
  FUN_00705c50(plVar8);
  plVar8[0x4f] = 0;
  puVar4 = PTR_DAT_04bb3300;
  plVar8[0x50] = 0;
  plVar8[0x53] = -0x100000000;
  plVar8[0x52] = (long)(plVar8 + 0x51);
  plVar8[0x51] = (long)(plVar8 + 0x51);
  *plVar8 = (long)(puVar4 + 0x10);
  FUN_038e18e4(plVar8 + 0x54);
  pcVar13 = (char *)plVar8[0xc];
  if (pcVar13 != "Family") {
    iVar1 = 6;
    if ((int)plVar8[0xd] < 7) {
      iVar1 = (int)plVar8[0xd] + -1;
    }
    memcpy(pcVar13,"Family",(long)iVar1);
    pcVar13[iVar1] = '\0';
  }
  *(uint *)(plVar8 + 0x4c) = *(uint *)(plVar8 + 0x4c) & 0xfffffff0;
  *(undefined4 *)((long)plVar8 + 0x29c) = 0x278;
  FUN_006f9fc0(param_1,plVar8,0xffffffff);
  puVar4 = PTR_DAT_04bb43c0;
  if (*(long *)(param_1 + 0x228) != 0) {
    lVar12 = *(long *)PTR_DAT_04bb43c0;
    uVar6 = FUN_0277d6c4();
    if (*(long *)puVar4 == 0) {
      return;
    }
    lVar12 = *(long *)(lVar12 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if (*(uint *)(lVar12 + 0x1d8) <= uVar6) {
      return;
    }
    if (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar6 * 8) == 0) {
      return;
    }
  }
  lVar12 = *(long *)puVar3;
  if (lVar12 == 0) {
    pvVar9 = malloc(0x438);
  }
  else {
    plVar8 = param_3;
    if (param_3 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar8 = (long *)(lVar12 + 8);
      if (lVar7 != 0) {
        plVar8 = (long *)(lVar7 + 0xa8);
      }
      plVar8 = (long *)*plVar8;
    }
    pvVar9 = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,0x438,8);
  }
  local_50 = PTR_DAT_04bb2020 + 0x10;
  puStack_48 = PTR_DAT_04bb2f90 + 0x4f;
  FUN_006fc0d0(pvVar9,&local_50,PTR_DAT_04bb2f80);
  FUN_006f9fc0(param_1,pvVar9,0xffffffff);
  lVar12 = *(long *)puVar3;
  if (lVar12 == 0) {
    pvVar9 = malloc(0x11f0);
  }
  else {
    plVar8 = param_3;
    if (param_3 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar8 = (long *)(lVar12 + 8);
      if (lVar7 != 0) {
        plVar8 = (long *)(lVar7 + 0xa8);
      }
      plVar8 = (long *)*plVar8;
    }
    pvVar9 = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,0x11f0,8);
  }
  FUN_00739870(pvVar9,0,0,1);
  FUN_006f9fc0(param_1,pvVar9,0xffffffff);
  lVar12 = *(long *)puVar3;
  if (lVar12 == 0) {
    plVar8 = malloc(0x2d8);
  }
  else {
    plVar8 = param_3;
    if (param_3 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar8 = (long *)(lVar12 + 8);
      if (lVar7 != 0) {
        plVar8 = (long *)(lVar7 + 0xa8);
      }
      plVar8 = (long *)*plVar8;
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)0x0;
        goto LAB_0256c484;
      }
    }
    plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x2d8,8);
  }
LAB_0256c484:
  FUN_00705c50(plVar8);
  puVar4 = PTR_DAT_04bb39e0;
  *(undefined1 *)(plVar8 + 0x55) = 0;
  puVar5 = PTR_DAT_04bdf1d8;
  pcVar13 = (char *)plVar8[0xc];
  plVar8[0x56] = 0;
  plVar8[0x58] = 0;
  plVar8[0x59] = 0;
  plVar8[0x5a] = 0;
  *plVar8 = (long)(puVar4 + 0x10);
  plVar8[0x57] = (long)(puVar5 + 0x10);
  if (pcVar13 != "XLink") {
    iVar1 = 5;
    if ((int)plVar8[0xd] < 6) {
      iVar1 = (int)plVar8[0xd] + -1;
    }
    memcpy(pcVar13,"XLink",(long)iVar1);
    pcVar13[iVar1] = '\0';
  }
  FUN_006f9fc0(param_1,plVar8,0xffffffff);
  lVar12 = *(long *)(param_1 + 0x60);
  if ((lVar12 != 0) && (*(long *)(lVar12 + 0x1180) == 0)) {
    lVar7 = *(long *)puVar3;
    if (lVar7 == 0) {
      puVar11 = malloc(0x18);
    }
    else {
      if (param_3 == (long *)0x0) {
        lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        puVar2 = (undefined8 *)(lVar7 + 8);
        if (lVar10 != 0) {
          puVar2 = (undefined8 *)(lVar10 + 0xa8);
        }
        param_3 = (long *)*puVar2;
        if (param_3 == (long *)0x0) {
          return;
        }
      }
      puVar11 = (undefined4 *)(**(code **)(*param_3 + 0x30))(param_3,0x18,8);
    }
    if (puVar11 != (undefined4 *)0x0) {
      *puVar11 = 0xffffffff;
      puVar11[2] = 0xffffffff;
      *(undefined2 *)(puVar11 + 1) = 0xffff;
      *(undefined2 *)(puVar11 + 3) = 0xffff;
      *(undefined2 *)(puVar11 + 5) = 0xffff;
      puVar11[4] = 0xffffffff;
      *(undefined4 *)(lVar12 + 0x1178) = 3;
      *(undefined4 **)(lVar12 + 0x1180) = puVar11;
    }
  }
  return;
}

