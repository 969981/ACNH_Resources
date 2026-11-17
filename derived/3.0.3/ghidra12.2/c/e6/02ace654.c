
void FUN_02ace654(long param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  long lVar7;
  undefined *puVar8;
  char *pcVar9;
  
  puVar3 = PTR_DAT_04bb2698;
  lVar7 = *(long *)PTR_DAT_04bb2698;
  if (lVar7 == 0) {
    plVar5 = malloc(0x2e8);
  }
  else {
    plVar5 = param_3;
    if (param_3 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar5 = (long *)(lVar7 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)0x0;
        goto LAB_02ace6dc;
      }
    }
    plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,0x2e8,8);
  }
LAB_02ace6dc:
  FUN_00705c50(plVar5);
  puVar1 = PTR_DAT_04bb3078;
  puVar8 = (undefined *)plVar5[0xc];
  plVar5[0x54] = (long)&DAT_3f8000003f800000;
  plVar5[0x4f] = 0;
  plVar5[0x50] = 0;
  plVar5[0x51] = 0;
  plVar5[0x52] = 0;
  plVar5[0x53] = 0;
  *(undefined4 *)(plVar5 + 0x55) = 0x3f800000;
  *plVar5 = (long)(puVar1 + 0x10);
  *(undefined8 *)((long)plVar5 + 700) = 0;
  *(undefined8 *)((long)plVar5 + 0x2c1) = 0;
  *(undefined8 *)((long)plVar5 + 0x2ac) = 0;
  *(undefined8 *)((long)plVar5 + 0x2b4) = 0;
  *(undefined8 *)((long)plVar5 + 0x2dc) = 0;
  *(undefined8 *)((long)plVar5 + 0x2cc) = 0;
  *(undefined8 *)((long)plVar5 + 0x2d4) = 0;
  if (puVar8 != &DAT_040afd37) {
    iVar2 = 4;
    if ((int)plVar5[0xd] < 5) {
      iVar2 = (int)plVar5[0xd] + -1;
    }
    memcpy(puVar8,&DAT_040afd37,(long)iVar2);
    puVar8[iVar2] = 0;
  }
  *(uint *)(plVar5 + 0x4c) = *(uint *)(plVar5 + 0x4c) & 0xfffffff0 | 5;
  FUN_006f9fc0(param_1,plVar5,0xffffffff);
  lVar7 = *(long *)puVar3;
  if (lVar7 == 0) {
    plVar5 = malloc(0x2e0);
  }
  else {
    plVar5 = param_3;
    if (param_3 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar5 = (long *)(lVar7 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)0x0;
        goto LAB_02ace7f8;
      }
    }
    plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,0x2e0,8);
  }
LAB_02ace7f8:
  FUN_00705c50(plVar5);
  plVar5[0x4f] = 0;
  puVar1 = PTR_DAT_04bb3300;
  plVar5[0x50] = 0;
  plVar5[0x53] = -0x100000000;
  plVar5[0x52] = (long)(plVar5 + 0x51);
  plVar5[0x51] = (long)(plVar5 + 0x51);
  *plVar5 = (long)(puVar1 + 0x10);
  FUN_038e18e4(plVar5 + 0x54);
  pcVar9 = (char *)plVar5[0xc];
  if (pcVar9 != "Family") {
    iVar2 = 6;
    if ((int)plVar5[0xd] < 7) {
      iVar2 = (int)plVar5[0xd] + -1;
    }
    memcpy(pcVar9,"Family",(long)iVar2);
    pcVar9[iVar2] = '\0';
  }
  *(uint *)(plVar5 + 0x4c) = *(uint *)(plVar5 + 0x4c) & 0xfffffff0;
  *(undefined4 *)((long)plVar5 + 0x29c) = 0x278;
  FUN_006f9fc0(param_1,plVar5,0xffffffff);
  lVar7 = *(long *)puVar3;
  if (lVar7 == 0) {
    plVar5 = malloc(0x1400);
  }
  else {
    plVar5 = param_3;
    if (param_3 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar5 = (long *)(lVar7 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)0x0;
        goto LAB_02ace8fc;
      }
    }
    plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,0x1400,8);
  }
LAB_02ace8fc:
  FUN_00739870(plVar5,0,0,1);
  *(undefined4 *)(plVar5 + 0x23e) = 0;
  puVar1 = PTR_DAT_04bb2d88;
  plVar5[0x240] = (long)plVar5 + 0x120c;
  puVar8 = PTR_DAT_04bc4540;
  *(undefined1 *)((long)plVar5 + 0x128b) = 0;
  *(undefined1 *)((long)plVar5 + 0x120c) = 0;
  *(undefined4 *)(plVar5 + 0x241) = 0x80;
  puVar1 = puVar1 + 0x10;
  plVar5[0x23f] = (long)puVar1;
  *plVar5 = (long)(puVar8 + 0x10);
  memset(plVar5 + 0x254,0,0x120);
  puVar8 = PTR_DAT_04bbb8f0;
  plVar5[0x252] = (long)puVar1;
  *(undefined4 *)(plVar5 + 0x254) = 0x80;
  *(undefined4 *)(plVar5 + 0x267) = 0x80;
  plVar5[0x265] = (long)puVar1;
  plVar5[0x253] = (long)plVar5 + 0x12a4;
  plVar5[0x266] = (long)plVar5 + 0x133c;
  plVar5[0x27c] = 0;
  plVar5[0x278] = (long)(puVar8 + 0x10);
  *(undefined4 *)(plVar5 + 0x27d) = 7;
  plVar5[0x27e] = 0x2000000020;
  plVar5[0x27f] = 0x100000010;
  FUN_006f9fc0(param_1,plVar5,0xffffffff);
  if ((*(byte *)(param_1 + 0x274) >> 1 & 1) != 0) goto LAB_02aceabc;
  lVar7 = *(long *)puVar3;
  if (lVar7 == 0) {
    plVar5 = malloc(0x2d8);
  }
  else {
    plVar5 = param_3;
    if (param_3 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar5 = (long *)(lVar7 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)0x0;
        goto LAB_02acea30;
      }
    }
    plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,0x2d8,8);
  }
LAB_02acea30:
  FUN_00705c50(plVar5);
  puVar1 = PTR_DAT_04bb39e0;
  *(undefined1 *)(plVar5 + 0x55) = 0;
  puVar8 = PTR_DAT_04bdf1d8;
  pcVar9 = (char *)plVar5[0xc];
  plVar5[0x56] = 0;
  plVar5[0x58] = 0;
  plVar5[0x59] = 0;
  plVar5[0x5a] = 0;
  *plVar5 = (long)(puVar1 + 0x10);
  plVar5[0x57] = (long)(puVar8 + 0x10);
  if (pcVar9 != "XLink") {
    iVar2 = 5;
    if ((int)plVar5[0xd] < 6) {
      iVar2 = (int)plVar5[0xd] + -1;
    }
    memcpy(pcVar9,"XLink",(long)iVar2);
    pcVar9[iVar2] = '\0';
  }
  FUN_006f9fc0(param_1,plVar5,0xffffffff);
LAB_02aceabc:
  lVar7 = *(long *)puVar3;
  if (lVar7 == 0) {
    pvVar6 = malloc(0x328);
  }
  else {
    if (param_3 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      param_3 = (long *)(lVar7 + 8);
      if (lVar4 != 0) {
        param_3 = (long *)(lVar4 + 0xa8);
      }
      param_3 = (long *)*param_3;
    }
    pvVar6 = (void *)(**(code **)(*param_3 + 0x30))(param_3,0x328,8);
  }
  FUN_02a77540(pvVar6,param_1 + 0x278);
  *(uint *)((long)pvVar6 + 0x278) =
       *(uint *)((long)pvVar6 + 0x278) & 0xfffffffc |
       *(uint *)((long)pvVar6 + 0x278) & 1 | (*(uint *)(param_1 + 0x274) >> 2 & 1) << 1;
  FUN_006f9fc0(param_1,pvVar6,0xffffffff);
  return;
}

