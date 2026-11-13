
void FUN_011c91fc(long param_1,long param_2,long *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  void *pvVar7;
  undefined4 uVar8;
  long lVar9;
  char *pcVar10;
  
  puVar3 = PTR_DAT_04bb2698;
  lVar9 = *(long *)PTR_DAT_04bb2698;
  uVar8 = 2000;
  if (*(int *)(param_2 + 0x1c) != 0) {
    uVar8 = 1000;
  }
  if (lVar9 == 0) {
    plVar6 = malloc(0x13c8);
  }
  else {
    plVar6 = param_3;
    if (param_3 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar6 = (long *)(lVar9 + 8);
      if (lVar5 != 0) {
        plVar6 = (long *)(lVar5 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)0x0;
        goto LAB_011c9294;
      }
    }
    plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,0x13c8,8);
  }
LAB_011c9294:
  FUN_00754268(plVar6,uVar8);
  *(undefined4 *)(plVar6 + 0x274) = 0;
  puVar4 = PTR_DAT_04bb36d0;
  plVar6[0x273] = (long)(plVar6 + 0x272);
  plVar6[0x272] = (long)(plVar6 + 0x272);
  *(undefined4 *)(plVar6 + 0x278) = 0x15e;
  plVar6[0x275] = 0;
  plVar6[0x276] = 0;
  *(undefined4 *)(plVar6 + 0x277) = 0;
  *plVar6 = (long)(puVar4 + 0x10);
  *(undefined1 *)((long)plVar6 + 0x13c4) = 1;
  FUN_006f9fc0(param_1,plVar6,0xffffffff);
  lVar9 = *(long *)puVar3;
  if (lVar9 == 0) {
    plVar6 = malloc(0x2a8);
  }
  else {
    plVar6 = param_3;
    if (param_3 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar6 = (long *)(lVar9 + 8);
      if (lVar5 != 0) {
        plVar6 = (long *)(lVar5 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)0x0;
        goto LAB_011c9354;
      }
    }
    plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,0x2a8,8);
  }
LAB_011c9354:
  FUN_00705c50(plVar6);
  *(undefined4 *)(plVar6 + 0x51) = 0;
  puVar4 = PTR_DAT_04bb35d0;
  pcVar10 = (char *)plVar6[0xc];
  *(undefined4 *)(plVar6 + 0x52) = 0;
  plVar6[0x53] = 0;
  *(undefined2 *)(plVar6 + 0x54) = 0;
  plVar6[0x50] = (long)(plVar6 + 0x4f);
  plVar6[0x4f] = (long)(plVar6 + 0x4f);
  *plVar6 = (long)(puVar4 + 0x10);
  if (pcVar10 != "ModelResLoader") {
    iVar1 = 0xe;
    if ((int)plVar6[0xd] < 0xf) {
      iVar1 = (int)plVar6[0xd] + -1;
    }
    memcpy(pcVar10,"ModelResLoader",(long)iVar1);
    pcVar10[iVar1] = '\0';
  }
  *(undefined4 *)((long)plVar6 + 0x28c) = 8;
  *(uint *)(plVar6 + 0x4c) = *(uint *)(plVar6 + 0x4c) & 0xfffffff0 | 1;
  FUN_006f9fc0(param_1,plVar6,0xffffffff);
  lVar9 = *(long *)puVar3;
  if (lVar9 == 0) {
    plVar6 = malloc(0x2e0);
  }
  else {
    if (param_3 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      puVar2 = (undefined8 *)(lVar9 + 8);
      if (lVar5 != 0) {
        puVar2 = (undefined8 *)(lVar5 + 0xa8);
      }
      param_3 = (long *)*puVar2;
      plVar6 = (long *)0x0;
      if (param_3 == (long *)0x0) goto LAB_011c9454;
    }
    plVar6 = (long *)(**(code **)(*param_3 + 0x30))(param_3,0x2e0,8);
  }
LAB_011c9454:
  FUN_00705c50(plVar6);
  plVar6[0x4f] = 0;
  puVar4 = PTR_DAT_04bb3300;
  plVar6[0x50] = 0;
  plVar6[0x53] = -0x100000000;
  plVar6[0x52] = (long)(plVar6 + 0x51);
  plVar6[0x51] = (long)(plVar6 + 0x51);
  *plVar6 = (long)(puVar4 + 0x10);
  FUN_038e18e4(plVar6 + 0x54);
  pcVar10 = (char *)plVar6[0xc];
  if (pcVar10 != "Family") {
    iVar1 = 6;
    if ((int)plVar6[0xd] < 7) {
      iVar1 = (int)plVar6[0xd] + -1;
    }
    memcpy(pcVar10,"Family",(long)iVar1);
    pcVar10[iVar1] = '\0';
  }
  *(uint *)(plVar6 + 0x4c) = *(uint *)(plVar6 + 0x4c) & 0xfffffff0;
  *(undefined4 *)((long)plVar6 + 0x29c) = 0x278;
  FUN_006f9fc0(param_1,plVar6,0xffffffff);
  lVar9 = *(long *)puVar3;
  if (lVar9 == 0) {
    pvVar7 = malloc(0x280);
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar6 = (long *)(lVar9 + 8);
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 + 0xa8);
    }
    plVar6 = (long *)*plVar6;
    if (plVar6 == (long *)0x0) {
      return;
    }
    pvVar7 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,0x280,8);
  }
  if (pvVar7 != (void *)0x0) {
    *(undefined4 *)(param_1 + 0x46788) = 0;
    *(void **)(param_1 + 0x46778) = pvVar7;
    *(undefined8 *)(param_1 + 0x46780) = 0x28;
  }
  return;
}

