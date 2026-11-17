
void FUN_02b811cc(long param_1,long param_2,long *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  undefined *__dest;
  char *__dest_00;
  undefined *local_b8;
  undefined1 local_b0;
  undefined4 local_ac;
  undefined *local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined2 local_94;
  undefined *local_90;
  undefined8 local_88;
  
  puVar4 = PTR_DAT_04bc4608;
  puVar3 = PTR_DAT_04bb2010;
  local_90 = PTR_DAT_04bc44c0 + 0x10;
  lVar11 = *(long *)(param_2 + 0xd0);
  local_b8 = PTR_DAT_04bc4608 + 0x10;
  local_a8 = PTR_DAT_04bb2010 + 0x10;
  local_88 = 0xffffffff00000000;
  if (lVar11 == 0) {
    FUN_006fb3d0(param_1);
    return;
  }
  FUN_02a6ccf0(&local_90,lVar11);
  puVar10 = PTR_DAT_04bb2698;
  local_b0 = *(undefined1 *)(lVar11 + 0x48);
  local_ac = *(undefined4 *)(lVar11 + 0x4c);
  local_a0 = *(undefined8 *)(lVar11 + 0x58);
  local_98 = *(undefined4 *)(lVar11 + 0x60);
  local_94 = *(undefined2 *)(lVar11 + 100);
  lVar11 = *(long *)PTR_DAT_04bb2698;
  if (lVar11 == 0) {
    plVar6 = malloc(0x2e8);
  }
  else {
    plVar6 = param_3;
    if (param_3 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar6 = (long *)(lVar11 + 8);
      if (lVar5 != 0) {
        plVar6 = (long *)(lVar5 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)0x0;
        goto LAB_02b812e8;
      }
    }
    plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,0x2e8,8);
  }
LAB_02b812e8:
  FUN_00705c50(plVar6);
  puVar8 = PTR_DAT_04bb3078;
  __dest = (undefined *)plVar6[0xc];
  plVar6[0x54] = (long)&DAT_3f8000003f800000;
  plVar6[0x4f] = 0;
  plVar6[0x50] = 0;
  plVar6[0x51] = 0;
  plVar6[0x52] = 0;
  plVar6[0x53] = 0;
  *(undefined4 *)(plVar6 + 0x55) = 0x3f800000;
  *plVar6 = (long)(puVar8 + 0x10);
  *(undefined8 *)((long)plVar6 + 700) = 0;
  *(undefined8 *)((long)plVar6 + 0x2c1) = 0;
  *(undefined8 *)((long)plVar6 + 0x2ac) = 0;
  *(undefined8 *)((long)plVar6 + 0x2b4) = 0;
  *(undefined8 *)((long)plVar6 + 0x2dc) = 0;
  *(undefined8 *)((long)plVar6 + 0x2cc) = 0;
  *(undefined8 *)((long)plVar6 + 0x2d4) = 0;
  if (__dest != &DAT_040afd37) {
    iVar1 = 4;
    if ((int)plVar6[0xd] < 5) {
      iVar1 = (int)plVar6[0xd] + -1;
    }
    memcpy(__dest,&DAT_040afd37,(long)iVar1);
    __dest[iVar1] = 0;
  }
  *(uint *)(plVar6 + 0x4c) = *(uint *)(plVar6 + 0x4c) & 0xfffffff0 | 5;
  FUN_006f9fc0(param_1,plVar6,0xffffffff);
  lVar11 = *(long *)puVar10;
  if (lVar11 == 0) {
    plVar6 = malloc(0x2e0);
  }
  else {
    plVar6 = param_3;
    if (param_3 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar6 = (long *)(lVar11 + 8);
      if (lVar5 != 0) {
        plVar6 = (long *)(lVar5 + 0xa8);
      }
      plVar6 = (long *)*plVar6;
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)0x0;
        goto LAB_02b81404;
      }
    }
    plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,0x2e0,8);
  }
LAB_02b81404:
  FUN_00705c50(plVar6);
  plVar6[0x4f] = 0;
  puVar8 = PTR_DAT_04bb3300;
  plVar6[0x50] = 0;
  plVar6[0x53] = -0x100000000;
  plVar6[0x52] = (long)(plVar6 + 0x51);
  plVar6[0x51] = (long)(plVar6 + 0x51);
  *plVar6 = (long)(puVar8 + 0x10);
  FUN_038e18e4(plVar6 + 0x54);
  __dest_00 = (char *)plVar6[0xc];
  if (__dest_00 != "Family") {
    iVar1 = 6;
    if ((int)plVar6[0xd] < 7) {
      iVar1 = (int)plVar6[0xd] + -1;
    }
    memcpy(__dest_00,"Family",(long)iVar1);
    __dest_00[iVar1] = '\0';
  }
  *(uint *)(plVar6 + 0x4c) = *(uint *)(plVar6 + 0x4c) & 0xfffffff0;
  *(undefined4 *)((long)plVar6 + 0x29c) = 0x278;
  FUN_006f9fc0(param_1,plVar6,0xffffffff);
  *(undefined4 *)(param_1 + 0x550) = (undefined4)local_88;
  if (*(int *)(param_1 + 0x550) - 0x1aU < 2) {
    if (*(int *)(param_1 + 0x284) == 0) {
      *(undefined4 *)(param_1 + 0x284) = *(undefined4 *)(param_1 + 0x230);
    }
    *(undefined4 *)(param_1 + 0x280) = 0xaf;
    *(undefined8 *)(param_1 + 0x440) = 0xffffffff00000000;
    FUN_02a6ccf0(param_1 + 0x438,&local_90);
    *(undefined8 *)(param_1 + 0x484) = *(undefined8 *)(param_1 + 0x164);
    *(undefined4 *)(param_1 + 0x480) = *(undefined4 *)(param_1 + 0x160);
    *(undefined4 *)(param_1 + 0x48c) = *(undefined4 *)(param_1 + 0x16c);
    *(undefined4 *)(param_1 + 0x490) = *(undefined4 *)(param_1 + 0x170);
    *(undefined4 *)(param_1 + 0x494) = 1;
  }
  else {
    if (*(int *)(param_1 + 0x550) != 0x1f) {
      FUN_006fb3d0(param_1);
      return;
    }
    if (*(int *)(param_1 + 0x284) == 0) {
      *(undefined4 *)(param_1 + 0x284) = *(undefined4 *)(param_1 + 0x230);
    }
    *(long *)(param_1 + 0x370) = param_1;
    puVar8 = PTR_LAB_04bc4be0;
    *(undefined8 *)(param_1 + 0x380) = 0;
    *(undefined4 *)(param_1 + 0x280) = 0x39;
    *(undefined ***)(param_1 + 0x368) = &PTR_LAB_04aa5830;
    *(undefined **)(param_1 + 0x378) = puVar8;
    *(undefined8 *)(param_1 + 0x440) = 0xffffffff00000000;
    FUN_02a6ccf0(param_1 + 0x438,&local_90);
    *(undefined4 *)(param_1 + 0x480) = *(undefined4 *)(param_1 + 0x160);
    *(undefined8 *)(param_1 + 0x484) = *(undefined8 *)(param_1 + 0x164);
    *(undefined4 *)(param_1 + 0x490) = *(undefined4 *)(param_1 + 0x170);
    *(undefined8 *)(param_1 + 0x494) = 0x100000001;
    *(undefined4 *)(param_1 + 0x48c) = *(undefined4 *)(param_1 + 0x16c);
  }
  FUN_02b5df60(param_1 + 0x558,&local_b8);
  if (*(uint *)(param_1 + 0x550) == 0x1f) {
    lVar11 = *(long *)puVar10;
    if (lVar11 == 0) {
      puVar7 = malloc(0x50);
    }
    else {
      if (param_3 == (long *)0x0) {
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        param_3 = (long *)(lVar11 + 8);
        if (lVar5 != 0) {
          param_3 = (long *)(lVar5 + 0xa8);
        }
        param_3 = (long *)*param_3;
      }
      puVar7 = (undefined8 *)(**(code **)(*param_3 + 0x30))(param_3,0x50,8);
    }
    puVar8 = PTR_DAT_04bc4be8;
    puVar10 = PTR_DAT_04bbc570;
    *(undefined4 *)(puVar7 + 4) = 0;
    puVar7[2] = 0;
    puVar7[3] = 0;
  }
  else {
    if ((*(uint *)(param_1 + 0x550) & 0xfffffffe) != 0x1a) {
      return;
    }
    lVar11 = *(long *)puVar10;
    if (lVar11 == 0) {
      puVar7 = malloc(0x50);
    }
    else {
      if (param_3 == (long *)0x0) {
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        param_3 = (long *)(lVar11 + 8);
        if (lVar5 != 0) {
          param_3 = (long *)(lVar5 + 0xa8);
        }
        param_3 = (long *)*param_3;
      }
      puVar7 = (undefined8 *)(**(code **)(*param_3 + 0x30))(param_3,0x50,8);
    }
    puVar8 = PTR_DAT_04bc4be8;
    *(undefined8 *)((long)puVar7 + 0x1c) = 0;
    *(undefined4 *)(puVar7 + 2) = 1;
    puVar10 = PTR_DAT_04bbc570;
    *(undefined8 *)((long)puVar7 + 0x14) = 0;
  }
  *puVar7 = puVar8 + 0x10;
  puVar7[1] = param_1;
  uVar2 = *(undefined4 *)(puVar10 + 0xc);
  puVar7[5] = puVar4 + 0x10;
  *(undefined *)(puVar7 + 6) = puVar10[8];
  uVar9 = *(undefined8 *)(puVar10 + 0x18);
  *(undefined4 *)((long)puVar7 + 0x34) = uVar2;
  *(undefined4 *)(puVar7 + 9) = *(undefined4 *)(puVar10 + 0x20);
  puVar7[7] = puVar3 + 0x10;
  puVar7[8] = uVar9;
  *(undefined2 *)((long)puVar7 + 0x4c) = *(undefined2 *)(puVar10 + 0x24);
  *(undefined8 **)(param_1 + 0xc98) = puVar7;
  return;
}

