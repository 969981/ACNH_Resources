
void FUN_0222017c(long param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  char *pcVar10;
  
  FUN_022978d0();
  puVar1 = PTR_DAT_04bb2698;
  lVar9 = *(long *)PTR_DAT_04bb2698;
  if (lVar9 == 0) {
    plVar8 = malloc(0x290);
  }
  else {
    plVar8 = param_3;
    if (param_3 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar8 = (long *)(lVar9 + 8);
      if (lVar7 != 0) {
        plVar8 = (long *)(lVar7 + 0xa8);
      }
      plVar8 = (long *)*plVar8;
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)0x0;
        goto LAB_02220208;
      }
    }
    plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x290,8);
  }
LAB_02220208:
  FUN_00705c50(plVar8);
  puVar5 = PTR_DAT_04bb2e68;
  plVar8[0x4f] = 0;
  plVar8[0x50] = 0;
  *(undefined4 *)(plVar8 + 0x51) = 0;
  *plVar8 = (long)(puVar5 + 0x10);
  *(uint *)(plVar8 + 0x4c) = *(uint *)(plVar8 + 0x4c) & 0xfffffff0 | 4;
  FUN_006f9fc0(param_1,plVar8,0xffffffff);
  lVar9 = *(long *)puVar1;
  if (lVar9 == 0) {
    plVar8 = malloc(0x2f0);
  }
  else {
    plVar8 = param_3;
    if (param_3 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar8 = (long *)(lVar9 + 8);
      if (lVar7 != 0) {
        plVar8 = (long *)(lVar7 + 0xa8);
      }
      plVar8 = (long *)*plVar8;
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)0x0;
        goto LAB_022202ac;
      }
    }
    plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x2f0,8);
  }
LAB_022202ac:
  FUN_00705c50(plVar8);
  plVar8[0x50] = 0;
  puVar5 = PTR_DAT_04bb3228;
  pcVar10 = (char *)plVar8[0xc];
  plVar8[0x51] = 0;
  plVar8[0x52] = 0;
  plVar8[0x53] = 0;
  plVar8[0x54] = 0;
  *(undefined4 *)(plVar8 + 0x4f) = 5;
  *(undefined1 *)(plVar8 + 0x55) = 0xff;
  plVar8[0x56] = 0;
  plVar8[0x57] = 0;
  *(undefined1 *)(plVar8 + 0x58) = 0xff;
  *(undefined4 *)(plVar8 + 0x59) = 0;
  plVar8[0x5a] = 0;
  *plVar8 = (long)(puVar5 + 0x10);
  *(undefined4 *)(plVar8 + 0x5b) = 0;
  plVar8[0x5c] = 0;
  *(undefined1 *)(plVar8 + 0x5d) = 0;
  *(uint *)(plVar8 + 0x4c) = *(uint *)(plVar8 + 0x4c) & 0xfffffff0;
  if (pcVar10 != "EventFlowReceptor") {
    iVar2 = 0x11;
    if ((int)plVar8[0xd] < 0x12) {
      iVar2 = (int)plVar8[0xd] + -1;
    }
    memcpy(pcVar10,"EventFlowReceptor",(long)iVar2);
    pcVar10[iVar2] = '\0';
  }
  FUN_006f9fc0(param_1,plVar8,0xffffffff);
  lVar9 = *(long *)puVar1;
  if (lVar9 == 0) {
    plVar8 = malloc(0x2d8);
  }
  else {
    plVar8 = param_3;
    if (param_3 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar8 = (long *)(lVar9 + 8);
      if (lVar7 != 0) {
        plVar8 = (long *)(lVar7 + 0xa8);
      }
      plVar8 = (long *)*plVar8;
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)0x0;
        goto LAB_022203c8;
      }
    }
    plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x2d8,8);
  }
LAB_022203c8:
  FUN_00705c50(plVar8);
  puVar5 = PTR_DAT_04bb39e0;
  *(undefined1 *)(plVar8 + 0x55) = 0;
  puVar6 = PTR_DAT_04bdf1d8;
  pcVar10 = (char *)plVar8[0xc];
  plVar8[0x56] = 0;
  plVar8[0x58] = 0;
  plVar8[0x59] = 0;
  plVar8[0x5a] = 0;
  *plVar8 = (long)(puVar5 + 0x10);
  plVar8[0x57] = (long)(puVar6 + 0x10);
  if (pcVar10 != "XLink") {
    iVar2 = 5;
    if ((int)plVar8[0xd] < 6) {
      iVar2 = (int)plVar8[0xd] + -1;
    }
    memcpy(pcVar10,"XLink",(long)iVar2);
    pcVar10[iVar2] = '\0';
  }
  FUN_006f9fc0(param_1,plVar8,0xffffffff);
  lVar9 = *(long *)puVar1;
  if (lVar9 == 0) {
    plVar8 = malloc(0x1c0);
  }
  else {
    if (param_3 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar3 = (undefined8 *)(lVar9 + 8);
      if (lVar7 != 0) {
        puVar3 = (undefined8 *)(lVar7 + 0xa8);
      }
      param_3 = (long *)*puVar3;
      if (param_3 == (long *)0x0) {
        plVar8 = (long *)0x0;
        goto LAB_022204d0;
      }
    }
    plVar8 = (long *)(**(code **)(*param_3 + 0x30))(param_3,0x1c0,8);
  }
LAB_022204d0:
  uVar4 = *(undefined4 *)(param_1 + 0x230);
  *(undefined1 *)((long)plVar8 + 0xc) = 0xff;
  *(undefined4 *)(plVar8 + 1) = uVar4;
  *plVar8 = (long)(PTR_DAT_04bc0c38 + 0x10);
  puVar5 = PTR_DAT_04bc0c58;
  puVar1 = PTR_DAT_04bb3950;
  plVar8[2] = 0;
  plVar8[3] = 0;
  plVar8[4] = 0;
  plVar8[5] = (long)(puVar5 + 0x10);
  plVar8[9] = (long)(puVar1 + 0x10);
  puVar1 = PTR_DAT_04bb2d80 + 0x10;
  plVar8[0xd] = (long)puVar1;
  puVar5 = PTR_DAT_04bbb898;
  plVar8[0x15] = (long)puVar1;
  plVar8[0x19] = (long)puVar1;
  plVar8[0x11] = (long)(puVar5 + 0x10);
  puVar1 = PTR_DAT_04bc0c68;
  plVar8[0x1d] = (long)(PTR_DAT_04bc0c60 + 0x10);
  plVar8[0x21] = (long)(puVar1 + 0x10);
  plVar8[0x25] = (long)(PTR_DAT_04bc0c70 + 0x10);
  puVar5 = PTR_DAT_04bc0c80;
  puVar1 = PTR_DAT_04bc0c78;
  *(undefined1 *)(plVar8 + 0x31) = 0;
  plVar8[0x34] = 0;
  plVar8[0x29] = (long)(puVar1 + 0x10);
  plVar8[0x2d] = (long)(puVar5 + 0x10);
  plVar8[0x32] = 0;
  plVar8[0x33] = (long)(puVar6 + 0x10);
  *(undefined4 *)((long)plVar8 + 0x1b7) = 0;
  plVar8[0x35] = 0;
  plVar8[0x36] = 0;
  *(long **)(param_1 + 0x5c0) = plVar8;
  *(long **)(*(long *)(param_1 + 0x98) + 0x290) = plVar8;
  DAT_0545dd08 = *(undefined4 *)(param_1 + 0x230);
  return;
}

