
void FUN_0256ebf0(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  char *pcVar9;
  undefined *__dest;
  
  FUN_0173a0dc();
  lVar6 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    plVar8 = malloc(0x1680);
  }
  else {
    plVar8 = param_3;
    if (param_3 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar8 = (long *)(lVar6 + 8);
      if (lVar7 != 0) {
        plVar8 = (long *)(lVar7 + 0xa8);
      }
      plVar8 = (long *)*plVar8;
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)0x0;
        goto LAB_0256ec7c;
      }
    }
    plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x1680,8);
  }
LAB_0256ec7c:
  pcVar9 = (char *)((long)plVar8 + 0x1614);
  FUN_00739870(plVar8,0,0,1);
  plVar8[0x2bf] = 0xffffffff;
  *(undefined4 *)(plVar8 + 0x23e) = 0;
  plVar8[0x2c1] = (long)pcVar9;
  *(undefined4 *)(plVar8 + 0x2c2) = 0x40;
  *(undefined1 *)((long)plVar8 + 0x1653) = 0;
  if (pcVar9 != "") {
    *pcVar9 = '\0';
  }
  puVar5 = PTR_DAT_04bb2bc0;
  plVar8[0x2c0] = (long)(PTR_DAT_04bb2bc0 + 0x10);
  memset(plVar8 + 0x23f,0xff,0x400);
  puVar1 = PTR_DAT_04bbdeb8;
  *(undefined1 *)(plVar8 + 0x2cb) = 0;
  plVar8[0x2cd] = 0;
  *(undefined8 *)((long)plVar8 + 0x165c) = 0xffffffffffffffff;
  *(undefined4 *)((long)plVar8 + 0x1664) = 0xffffffff;
  plVar8[0x2ce] = 0;
  *plVar8 = (long)(puVar1 + 0x10);
  *(undefined2 *)(plVar8 + 0x2cf) = 0;
  uVar4 = s_Trans_Root_048fd4ad._0_8_;
  if (pcVar9 != s_Trans_Root_048fd4ad) {
    *(undefined1 *)((long)plVar8 + 0x161e) = 0;
    *(undefined8 *)pcVar9 = uVar4;
    *(undefined2 *)((long)plVar8 + 0x161c) = s_Trans_Root_048fd4ad._8_2_;
  }
  FUN_006f9fc0(param_1,plVar8,0xffffffff);
  lVar6 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    plVar8 = malloc(0x2e0);
  }
  else {
    plVar8 = param_3;
    if (param_3 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar8 = (long *)(lVar6 + 8);
      if (lVar7 != 0) {
        plVar8 = (long *)(lVar7 + 0xa8);
      }
      plVar8 = (long *)*plVar8;
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)0x0;
        goto LAB_0256edb4;
      }
    }
    plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x2e0,8);
  }
LAB_0256edb4:
  FUN_00705c50(plVar8);
  plVar8[0x4f] = 0;
  puVar1 = PTR_DAT_04bb3300;
  plVar8[0x50] = 0;
  plVar8[0x53] = -0x100000000;
  plVar8[0x52] = (long)(plVar8 + 0x51);
  plVar8[0x51] = (long)(plVar8 + 0x51);
  *plVar8 = (long)(puVar1 + 0x10);
  FUN_038e18e4(plVar8 + 0x54);
  pcVar9 = (char *)plVar8[0xc];
  if (pcVar9 != "Family") {
    iVar2 = 6;
    if ((int)plVar8[0xd] < 7) {
      iVar2 = (int)plVar8[0xd] + -1;
    }
    memcpy(pcVar9,"Family",(long)iVar2);
    pcVar9[iVar2] = '\0';
  }
  *(uint *)(plVar8 + 0x4c) = *(uint *)(plVar8 + 0x4c) & 0xfffffff0;
  *(undefined4 *)((long)plVar8 + 0x29c) = 0x278;
  FUN_006f9fc0(param_1,plVar8,0xffffffff);
  lVar6 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    plVar8 = malloc(0x2e8);
  }
  else {
    plVar8 = param_3;
    if (param_3 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar8 = (long *)(lVar6 + 8);
      if (lVar7 != 0) {
        plVar8 = (long *)(lVar7 + 0xa8);
      }
      plVar8 = (long *)*plVar8;
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)0x0;
        goto LAB_0256eeb8;
      }
    }
    plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x2e8,8);
  }
LAB_0256eeb8:
  FUN_00705c50(plVar8);
  puVar1 = PTR_DAT_04bb3078;
  __dest = (undefined *)plVar8[0xc];
  plVar8[0x54] = (long)&DAT_3f8000003f800000;
  plVar8[0x4f] = 0;
  plVar8[0x50] = 0;
  plVar8[0x51] = 0;
  plVar8[0x52] = 0;
  plVar8[0x53] = 0;
  *(undefined4 *)(plVar8 + 0x55) = 0x3f800000;
  *plVar8 = (long)(puVar1 + 0x10);
  *(undefined8 *)((long)plVar8 + 700) = 0;
  *(undefined8 *)((long)plVar8 + 0x2c1) = 0;
  *(undefined8 *)((long)plVar8 + 0x2ac) = 0;
  *(undefined8 *)((long)plVar8 + 0x2b4) = 0;
  *(undefined8 *)((long)plVar8 + 0x2dc) = 0;
  *(undefined8 *)((long)plVar8 + 0x2cc) = 0;
  *(undefined8 *)((long)plVar8 + 0x2d4) = 0;
  if (__dest != &DAT_040afd37) {
    iVar2 = 4;
    if ((int)plVar8[0xd] < 5) {
      iVar2 = (int)plVar8[0xd] + -1;
    }
    memcpy(__dest,&DAT_040afd37,(long)iVar2);
    __dest[iVar2] = 0;
  }
  *(uint *)(plVar8 + 0x4c) = *(uint *)(plVar8 + 0x4c) & 0xfffffff0 | 5;
  FUN_006f9fc0(param_1,plVar8,0xffffffff);
  lVar6 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    plVar8 = malloc(0x348);
  }
  else {
    plVar8 = param_3;
    if (param_3 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar8 = (long *)(lVar6 + 8);
      if (lVar7 != 0) {
        plVar8 = (long *)(lVar7 + 0xa8);
      }
      plVar8 = (long *)*plVar8;
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)0x0;
        goto LAB_0256efd4;
      }
    }
    plVar8 = (long *)(**(code **)(*plVar8 + 0x30))(plVar8,0x348,8);
  }
LAB_0256efd4:
  FUN_00705c50(plVar8);
  puVar1 = PTR_DAT_04bb3360;
  *(undefined1 *)((long)plVar8 + 0x2a4) = 0;
  pcVar9 = (char *)plVar8[0xc];
  plVar8[0x53] = (long)plVar8 + 0x2a4;
  *(undefined1 *)((long)plVar8 + 0x2fc) = 0;
  plVar8[0x5e] = (long)plVar8 + 0x2fc;
  *plVar8 = (long)(puVar1 + 0x10);
  puVar1 = puVar5 + 0x10;
  plVar8[0x4f] = 0;
  plVar8[0x52] = (long)puVar1;
  plVar8[0x5d] = (long)puVar1;
  plVar8[0x50] = 0;
  plVar8[0x51] = 0;
  *(undefined4 *)(plVar8 + 0x54) = 0x40;
  *(undefined1 *)((long)plVar8 + 0x2e3) = 0;
  *(undefined4 *)(plVar8 + 0x5f) = 0x40;
  *(undefined1 *)((long)plVar8 + 0x33b) = 0;
  *(undefined4 *)(plVar8 + 0x68) = 0;
  *(undefined1 *)((long)plVar8 + 0x344) = 1;
  if (pcVar9 != "HelperBone") {
    iVar2 = 10;
    if ((int)plVar8[0xd] < 0xb) {
      iVar2 = (int)plVar8[0xd] + -1;
    }
    memcpy(pcVar9,"HelperBone",(long)iVar2);
    pcVar9[iVar2] = '\0';
  }
  *(uint *)(plVar8 + 0x2f) = *(uint *)(plVar8 + 0x2f) & 0xfffffffb;
  *(uint *)(plVar8 + 0x4c) = *(uint *)(plVar8 + 0x4c) & 0xfffffff0;
  FUN_006f9fc0(param_1,plVar8,0xffffffff);
  lVar6 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    plVar8 = malloc(0x378);
  }
  else {
    if (param_3 == (long *)0x0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      puVar3 = (undefined8 *)(lVar6 + 8);
      if (lVar7 != 0) {
        puVar3 = (undefined8 *)(lVar7 + 0xa8);
      }
      param_3 = (long *)*puVar3;
      plVar8 = (long *)0x0;
      if (param_3 == (long *)0x0) goto LAB_0256f108;
    }
    plVar8 = (long *)(**(code **)(*param_3 + 0x30))(param_3,0x378,8);
  }
LAB_0256f108:
  FUN_00705c50(plVar8);
  plVar8[0x4f] = 0;
  puVar1 = PTR_DAT_04bb30b8;
  plVar8[0x50] = 0;
  *(undefined1 *)((long)plVar8 + 0x2b4) = 0;
  plVar8[0x55] = (long)plVar8 + 0x2b4;
  plVar8[0x51] = 0;
  plVar8[0x52] = 0;
  plVar8[0x53] = 0;
  *(undefined1 *)((long)plVar8 + 0x2f3) = 0;
  *(undefined4 *)(plVar8 + 0x5f) = 0;
  *(undefined4 *)((long)plVar8 + 0x334) = 0;
  *plVar8 = (long)(puVar1 + 0x10);
  plVar8[0x69] = (long)plVar8 + 0x354;
  *(undefined4 *)(plVar8 + 0x56) = 0x40;
  *(undefined1 *)((long)plVar8 + 0x373) = 0;
  plVar8[0x54] = (long)(puVar5 + 0x10);
  *(undefined8 *)((long)plVar8 + 0x32c) = 0;
  *(undefined1 *)(plVar8 + 0x67) = 1;
  *(undefined4 *)((long)plVar8 + 0x339) = 0;
  *(undefined4 *)(plVar8 + 0x6a) = 0x20;
  pcVar9 = (char *)plVar8[0xc];
  *(undefined1 *)((long)plVar8 + 0x354) = 0;
  plVar8[0x68] = (long)&PTR_LAB_048f9700;
  if (pcVar9 != "Cloth") {
    iVar2 = 5;
    if ((int)plVar8[0xd] < 6) {
      iVar2 = (int)plVar8[0xd] + -1;
    }
    memcpy(pcVar9,"Cloth",(long)iVar2);
    pcVar9[iVar2] = '\0';
  }
  *(uint *)(plVar8 + 0x2f) = *(uint *)(plVar8 + 0x2f) & 0xfffffffb;
  *(uint *)(plVar8 + 0x4c) = *(uint *)(plVar8 + 0x4c) & 0xfffffff0 | 2;
  FUN_006f9fc0(param_1,plVar8,0xffffffff);
  return;
}

