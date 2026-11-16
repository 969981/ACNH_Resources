
void FUN_02573660(undefined8 param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined *__dest;
  char *pcVar8;
  
  FUN_0173a0dc();
  lVar5 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    plVar7 = malloc(0x1680);
  }
  else {
    plVar7 = param_3;
    if (param_3 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar7 = (long *)(lVar5 + 8);
      if (lVar6 != 0) {
        plVar7 = (long *)(lVar6 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)0x0;
        goto LAB_025736e8;
      }
    }
    plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,0x1680,8);
  }
LAB_025736e8:
  pcVar8 = (char *)((long)plVar7 + 0x1614);
  FUN_00739870(plVar7,0,0,1);
  plVar7[0x2bf] = 0xffffffff;
  *(undefined4 *)(plVar7 + 0x23e) = 0;
  plVar7[0x2c1] = (long)pcVar8;
  *(undefined4 *)(plVar7 + 0x2c2) = 0x40;
  *(undefined1 *)((long)plVar7 + 0x1653) = 0;
  if (pcVar8 != "") {
    *pcVar8 = '\0';
  }
  plVar7[0x2c0] = (long)(PTR_DAT_04bb2bc0 + 0x10);
  memset(plVar7 + 0x23f,0xff,0x400);
  puVar4 = PTR_DAT_04bbdeb8;
  *(undefined1 *)(plVar7 + 0x2cb) = 0;
  plVar7[0x2cd] = 0;
  *(undefined8 *)((long)plVar7 + 0x165c) = 0xffffffffffffffff;
  *(undefined4 *)((long)plVar7 + 0x1664) = 0xffffffff;
  plVar7[0x2ce] = 0;
  *plVar7 = (long)(puVar4 + 0x10);
  *(undefined2 *)(plVar7 + 0x2cf) = 0;
  uVar3 = s_Trans_Root_048fd4ad._0_8_;
  if (pcVar8 != s_Trans_Root_048fd4ad) {
    *(undefined1 *)((long)plVar7 + 0x161e) = 0;
    *(undefined8 *)pcVar8 = uVar3;
    *(undefined2 *)((long)plVar7 + 0x161c) = s_Trans_Root_048fd4ad._8_2_;
  }
  FUN_006f9fc0(param_1,plVar7,0xffffffff);
  lVar5 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    plVar7 = malloc(0x2e0);
  }
  else {
    plVar7 = param_3;
    if (param_3 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar7 = (long *)(lVar5 + 8);
      if (lVar6 != 0) {
        plVar7 = (long *)(lVar6 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)0x0;
        goto LAB_02573820;
      }
    }
    plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,0x2e0,8);
  }
LAB_02573820:
  FUN_00705c50(plVar7);
  plVar7[0x4f] = 0;
  puVar4 = PTR_DAT_04bb3300;
  plVar7[0x50] = 0;
  plVar7[0x53] = -0x100000000;
  plVar7[0x52] = (long)(plVar7 + 0x51);
  plVar7[0x51] = (long)(plVar7 + 0x51);
  *plVar7 = (long)(puVar4 + 0x10);
  FUN_038e18e4(plVar7 + 0x54);
  pcVar8 = (char *)plVar7[0xc];
  if (pcVar8 != "Family") {
    iVar1 = 6;
    if ((int)plVar7[0xd] < 7) {
      iVar1 = (int)plVar7[0xd] + -1;
    }
    memcpy(pcVar8,"Family",(long)iVar1);
    pcVar8[iVar1] = '\0';
  }
  *(uint *)(plVar7 + 0x4c) = *(uint *)(plVar7 + 0x4c) & 0xfffffff0;
  *(undefined4 *)((long)plVar7 + 0x29c) = 0x278;
  FUN_006f9fc0(param_1,plVar7,0xffffffff);
  lVar5 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    plVar7 = malloc(0x2e8);
  }
  else {
    if (param_3 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      puVar2 = (undefined8 *)(lVar5 + 8);
      if (lVar6 != 0) {
        puVar2 = (undefined8 *)(lVar6 + 0xa8);
      }
      param_3 = (long *)*puVar2;
      plVar7 = (long *)0x0;
      if (param_3 == (long *)0x0) goto LAB_02573924;
    }
    plVar7 = (long *)(**(code **)(*param_3 + 0x30))(param_3,0x2e8,8);
  }
LAB_02573924:
  FUN_00705c50(plVar7);
  puVar4 = PTR_DAT_04bb3078;
  __dest = (undefined *)plVar7[0xc];
  plVar7[0x54] = (long)&DAT_3f8000003f800000;
  plVar7[0x4f] = 0;
  plVar7[0x50] = 0;
  plVar7[0x51] = 0;
  plVar7[0x52] = 0;
  plVar7[0x53] = 0;
  *(undefined4 *)(plVar7 + 0x55) = 0x3f800000;
  *plVar7 = (long)(puVar4 + 0x10);
  *(undefined8 *)((long)plVar7 + 700) = 0;
  *(undefined8 *)((long)plVar7 + 0x2c1) = 0;
  *(undefined8 *)((long)plVar7 + 0x2ac) = 0;
  *(undefined8 *)((long)plVar7 + 0x2b4) = 0;
  *(undefined8 *)((long)plVar7 + 0x2dc) = 0;
  *(undefined8 *)((long)plVar7 + 0x2cc) = 0;
  *(undefined8 *)((long)plVar7 + 0x2d4) = 0;
  if (__dest != &DAT_040afd37) {
    iVar1 = 4;
    if ((int)plVar7[0xd] < 5) {
      iVar1 = (int)plVar7[0xd] + -1;
    }
    memcpy(__dest,&DAT_040afd37,(long)iVar1);
    __dest[iVar1] = 0;
  }
  *(uint *)(plVar7 + 0x4c) = *(uint *)(plVar7 + 0x4c) & 0xfffffff0 | 5;
  FUN_006f9fc0(param_1,plVar7,0xffffffff);
  return;
}

