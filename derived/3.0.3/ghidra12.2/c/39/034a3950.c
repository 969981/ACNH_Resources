
void FUN_034a3950(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  void *pvVar7;
  long *plVar8;
  byte bVar9;
  long lVar10;
  
  FUN_03868244();
  *(undefined2 *)(param_1 + 0x39) = 0;
  puVar1 = PTR_DAT_04bc5668;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  puVar3 = PTR_DAT_04bd4738;
  param_1[0x37] = 0xffffffff;
  param_1[0x38] = 0xffffffff;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)((long)param_1 + 0x1fc) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x40) = 0;
  *(undefined1 *)((long)param_1 + 0x202) = 0;
  param_1[0x41] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x35] = (long)(puVar3 + 0x10);
  param_1[0x36] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x3f) = 0xff;
  if (param_3 != 0) {
    bVar9 = *(byte *)(param_3 + 0xe);
    if (7 < bVar9) {
      bVar9 = 0xff;
    }
    *(byte *)(param_1 + 0x3f) = bVar9;
    *(undefined4 *)((long)param_1 + 0x1fc) = *(undefined4 *)(param_3 + 0x10);
  }
  param_1[0x42] = 0;
  *param_1 = (long)&PTR_FUN_04b2ecf8;
  param_1[0x3e] = -1;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = -1;
  param_1[0x49] = 0;
  puVar1 = PTR_DAT_04bc9be0 + 0x10;
  *(undefined4 *)(param_1 + 0x4a) = 0;
  param_1[0x4b] = (long)puVar1;
  memset(param_1 + 0x4c,0,0x1bf30);
  lVar10 = 0x10e;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  plVar8 = param_1;
  do {
    FUN_03463544(plVar8 + 0x4c,0);
    *(undefined4 *)(plVar8 + 0x77) = 0x40;
    lVar10 = lVar10 + -1;
    plVar8[0x76] = (long)plVar8 + 0x3bc;
    *(undefined1 *)((long)plVar8 + 0x3fb) = 0;
    *(undefined1 *)((long)plVar8 + 0x3bc) = 0;
    plVar8[0x75] = (long)puVar1;
    *(undefined4 *)(plVar8 + 0x80) = 0;
    puVar3 = PTR_DAT_04bc8e10;
    plVar8 = plVar8 + 0x35;
  } while (lVar10 != 0);
  *(undefined4 *)(param_1 + 0x3834) = 0;
  *(undefined4 *)(param_1 + 0x3835) = 0;
  puVar1 = PTR_DAT_04bc9ce0 + 0x10;
  param_1[0x3832] = (long)(puVar3 + 0x10);
  param_1[0x3833] = -1;
  param_1[0x3836] = (long)puVar1;
  memset(param_1 + 0x3837,0,0xc00);
  lVar10 = 0x40;
  plVar8 = param_1 + 0x383c;
  do {
    *(undefined4 *)(plVar8 + -5) = 0xffffffff;
    *(undefined2 *)((long)plVar8 + -0x24) = 0;
    plVar8[-4] = 0;
    plVar8[-3] = 0;
    iVar4 = FUN_015d3550(0);
    *(undefined4 *)(plVar8 + -1) = 0xffffffff;
    iVar2 = 0;
    if (iVar4 != -1) {
      iVar2 = iVar4;
    }
    *(undefined1 *)((long)plVar8 + -4) = 0;
    lVar10 = lVar10 + -1;
    *(int *)(plVar8 + -2) = iVar2;
    *(undefined4 *)plVar8 = 0;
    puVar1 = PTR_DAT_04bc8e10;
    plVar8 = plVar8 + 6;
  } while (lVar10 != 0);
  *(undefined4 *)(param_1 + 0x39b9) = 0;
  *(undefined4 *)(param_1 + 0x39ba) = 0;
  *(undefined1 *)(param_1 + 0x39bb) = 0;
  *(undefined4 *)(param_1 + 0x39bc) = 0;
  param_1[0x39bd] = 0;
  param_1[0x39be] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x39c9) = 0xffffffff;
  param_1[0x39ce] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x39cf) = 0;
  *(undefined8 *)((long)param_1 + 0x1ce7c) = 0;
  *(undefined8 *)((long)param_1 + 0x1ce84) = 0xffffffffffffffff;
  *(undefined1 *)((long)param_1 + 0x1ce8c) = 0;
  *(undefined1 *)(param_1 + 0x39d2) = 0;
  *(undefined4 *)((long)param_1 + 0x1ce94) = 0xffffffff;
  param_1[0x39de] = 0;
  param_1[0x39b7] = (long)(puVar1 + 0x10);
  param_1[0x39b8] = -1;
  param_1[0x39ca] = 0;
  param_1[0x39cb] = 0;
  param_1[0x39cc] = 0;
  param_1[0x39cd] = 0;
  *(undefined4 *)(param_1 + 0x39dd) = 0;
  param_1[0x39db] = 0;
  param_1[0x39dc] = 0;
  param_1[0x39d9] = 0;
  param_1[0x39da] = 0;
  param_1[0x39d7] = 0;
  param_1[0x39d8] = 0;
  lVar10 = *(long *)PTR_DAT_04bb2698;
  param_1[0x39d5] = 0;
  param_1[0x39d6] = 0;
  param_1[0x39d3] = 0;
  param_1[0x39d4] = 0;
  plVar8 = (long *)PTR_DAT_04bb3350;
  if (lVar10 == 0) {
    pvVar7 = malloc(0x1f91f0);
joined_r0x034a414c:
    if (pvVar7 != (void *)0x0) {
      puVar1 = PTR_DAT_04bc9cc0 + 0x10;
      *(long *)((long)pvVar7 + 0x10) = (long)puVar1;
      *(undefined8 *)((long)pvVar7 + 8) = 10;
      memset((void *)((long)pvVar7 + 0x18),0,0x19408);
      *(undefined4 *)((long)pvVar7 + 0x50) = 1;
      *(undefined4 *)((long)pvVar7 + 0x58) = 0xffffffff;
      *(undefined4 *)((long)pvVar7 + 0x19420) = 0;
      memset((void *)((long)pvVar7 + 0x19430),0,0x19400);
      *(undefined4 *)((long)pvVar7 + 0x19468) = 0xffffffff;
      *(undefined4 *)((long)pvVar7 + 0x19460) = 1;
      *(undefined4 *)((long)pvVar7 + 0x32830) = 0;
      *(undefined **)((long)pvVar7 + 0x32840) = puVar1;
      memset((void *)((long)pvVar7 + 0x32848),0,0x19408);
      *(undefined4 *)((long)pvVar7 + 0x32888) = 0xffffffff;
      *(undefined4 *)((long)pvVar7 + 0x32880) = 1;
      *(undefined4 *)((long)pvVar7 + 0x4bc50) = 0;
      memset((void *)((long)pvVar7 + 0x4bc60),0,0x19400);
      *(undefined4 *)((long)pvVar7 + 0x4bc98) = 0xffffffff;
      *(undefined4 *)((long)pvVar7 + 0x4bc90) = 1;
      *(undefined4 *)((long)pvVar7 + 0x65060) = 0;
      *(undefined **)((long)pvVar7 + 0x65070) = puVar1;
      memset((void *)((long)pvVar7 + 0x65078),0,0x19408);
      *(undefined4 *)((long)pvVar7 + 0x650b8) = 0xffffffff;
      *(undefined4 *)((long)pvVar7 + 0x650b0) = 1;
      *(undefined4 *)((long)pvVar7 + 0x7e480) = 0;
      memset((void *)((long)pvVar7 + 0x7e490),0,0x19400);
      *(undefined4 *)((long)pvVar7 + 0x7e4c0) = 1;
      *(undefined4 *)((long)pvVar7 + 0x7e4c8) = 0xffffffff;
      *(undefined4 *)((long)pvVar7 + 0x97890) = 0;
      *(undefined **)((long)pvVar7 + 0x978a0) = puVar1;
      memset((void *)((long)pvVar7 + 0x978a8),0,0x19408);
      *(undefined4 *)((long)pvVar7 + 0x978e0) = 1;
      *(undefined4 *)((long)pvVar7 + 0x978e8) = 0xffffffff;
      *(undefined4 *)((long)pvVar7 + 0xb0cb0) = 0;
      memset((void *)((long)pvVar7 + 0xb0cc0),0,0x19400);
      *(undefined4 *)((long)pvVar7 + 0xb0cf0) = 1;
      *(undefined4 *)((long)pvVar7 + 0xb0cf8) = 0xffffffff;
      *(undefined4 *)((long)pvVar7 + 0xca0c0) = 0;
      *(undefined **)((long)pvVar7 + 0xca0d0) = puVar1;
      memset((void *)((long)pvVar7 + 0xca0d8),0,0x19408);
      *(undefined4 *)((long)pvVar7 + 0xca110) = 1;
      *(undefined4 *)((long)pvVar7 + 0xca118) = 0xffffffff;
      *(undefined4 *)((long)pvVar7 + 0xe34e0) = 0;
      memset((void *)((long)pvVar7 + 0xe34f0),0,0x19400);
      *(undefined4 *)((long)pvVar7 + 0xe3520) = 1;
      *(undefined4 *)((long)pvVar7 + 0xe3528) = 0xffffffff;
      *(undefined4 *)((long)pvVar7 + 0xfc8f0) = 0;
      *(undefined **)((long)pvVar7 + 0xfc900) = puVar1;
      memset((void *)((long)pvVar7 + 0xfc908),0,0x19408);
      *(undefined4 *)((long)pvVar7 + 0xfc940) = 1;
      *(undefined4 *)((long)pvVar7 + 0xfc948) = 0xffffffff;
      *(undefined4 *)((long)pvVar7 + 0x115d10) = 0;
      memset((void *)((long)pvVar7 + 0x115d20),0,0x19400);
      *(undefined4 *)((long)pvVar7 + 0x115d50) = 1;
      *(undefined4 *)((long)pvVar7 + 0x115d58) = 0xffffffff;
      *(undefined4 *)((long)pvVar7 + 0x12f120) = 0;
      *(undefined **)((long)pvVar7 + 0x12f130) = puVar1;
      memset((void *)((long)pvVar7 + 0x12f138),0,0x19408);
      *(undefined4 *)((long)pvVar7 + 0x12f170) = 1;
      *(undefined4 *)((long)pvVar7 + 0x12f178) = 0xffffffff;
      *(undefined4 *)((long)pvVar7 + 0x148540) = 0;
      memset((void *)((long)pvVar7 + 0x148550),0,0x19400);
      *(undefined4 *)((long)pvVar7 + 0x148580) = 1;
      *(undefined4 *)((long)pvVar7 + 0x148588) = 0xffffffff;
      *(undefined4 *)((long)pvVar7 + 0x161950) = 0;
      *(undefined **)((long)pvVar7 + 0x161960) = puVar1;
      memset((void *)((long)pvVar7 + 0x161968),0,0x19408);
      *(undefined4 *)((long)pvVar7 + 0x1619a0) = 1;
      *(undefined4 *)((long)pvVar7 + 0x1619a8) = 0xffffffff;
      *(undefined4 *)((long)pvVar7 + 0x17ad70) = 0;
      memset((void *)((long)pvVar7 + 0x17ad80),0,0x19400);
      *(undefined4 *)((long)pvVar7 + 0x17adb0) = 1;
      *(undefined4 *)((long)pvVar7 + 0x17adb8) = 0xffffffff;
      *(undefined4 *)((long)pvVar7 + 0x194180) = 0;
      *(undefined **)((long)pvVar7 + 0x194190) = puVar1;
      memset((void *)((long)pvVar7 + 0x194198),0,0x19408);
      *(undefined4 *)((long)pvVar7 + 0x1941d0) = 1;
      *(undefined4 *)((long)pvVar7 + 0x1941d8) = 0xffffffff;
      *(undefined4 *)((long)pvVar7 + 0x1ad5a0) = 0;
      memset((void *)((long)pvVar7 + 0x1ad5b0),0,0x19400);
      *(undefined4 *)((long)pvVar7 + 0x1ad5e0) = 1;
      *(undefined4 *)((long)pvVar7 + 0x1ad5e8) = 0xffffffff;
      *(undefined4 *)((long)pvVar7 + 0x1c69b0) = 0;
      *(undefined **)((long)pvVar7 + 0x1c69c0) = puVar1;
      plVar8 = (long *)PTR_DAT_04bb3350;
      memset((void *)((long)pvVar7 + 0x1c69c8),0,0x19408);
      *(undefined4 *)((long)pvVar7 + 0x1c6a00) = 1;
      *(undefined4 *)((long)pvVar7 + 0x1c6a08) = 0xffffffff;
      *(undefined4 *)((long)pvVar7 + 0x1dfdd0) = 0;
      memset((void *)((long)pvVar7 + 0x1dfde0),0,0x19400);
      *(undefined4 *)((long)pvVar7 + 0x1dfe10) = 1;
      *(undefined4 *)((long)pvVar7 + 0x1dfe18) = 0xffffffff;
      *(undefined4 *)((long)pvVar7 + 0x1f91e0) = 0;
      param_1[0x39de] = (long)pvVar7 + 0x10;
      *(undefined4 *)(param_1 + 0x39dd) = 10;
    }
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar6 = (long *)(lVar10 + 8);
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 + 0xa8);
    }
    plVar6 = (long *)*plVar6;
    if (plVar6 != (long *)0x0) {
      pvVar7 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,0x1f91f0,8);
      goto joined_r0x034a414c;
    }
  }
  *(undefined2 *)(param_1 + 0x39e0) = 0;
  param_1[0x39e1] = 0;
  *(undefined4 *)(param_1 + 0x39e2) = 0xffffffff;
  param_1[0x39df] = 0x500000001;
  *(undefined1 *)((long)param_1 + 0x1cf14) = 0;
  puVar1 = PTR_DAT_04bc8e10 + 0x10;
  *(undefined4 *)(param_1 + 0x39e5) = 0;
  *(undefined4 *)(param_1 + 0x39e6) = 0;
  param_1[0x39e7] = 0;
  *(undefined4 *)(param_1 + 0x39e8) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x1cf44) = 0;
  *(undefined4 *)(param_1 + 0x39eb) = 0;
  *(undefined4 *)(param_1 + 0x39ec) = 0;
  *(undefined4 *)(param_1 + 0x39ef) = 0;
  *(undefined4 *)(param_1 + 0x39f2) = 0;
  *(undefined4 *)(param_1 + 0x39f5) = 0;
  *(undefined4 *)(param_1 + 0x39f8) = 0;
  *(undefined4 *)(param_1 + 0x39fb) = 0;
  *(undefined4 *)(param_1 + 0x39fe) = 0;
  param_1[0x39e3] = (long)puVar1;
  param_1[0x39e4] = -1;
  param_1[0x39e9] = (long)puVar1;
  param_1[0x39ea] = -1;
  *(undefined4 *)(param_1 + 0x3a01) = 0;
  *(undefined4 *)(param_1 + 0x3a04) = 0;
  *(undefined4 *)(param_1 + 0x3a07) = 0;
  *(undefined4 *)(param_1 + 0x3a0a) = 0;
  param_1[0x39ff] = 0;
  param_1[0x3a00] = -1;
  param_1[0x3a02] = 0;
  param_1[0x3a03] = -1;
  param_1[0x3a05] = 0;
  param_1[0x3a06] = -1;
  param_1[0x3a08] = 0;
  param_1[0x3a09] = -1;
  param_1[0x39ed] = 0;
  param_1[0x39ee] = -1;
  param_1[0x39f0] = 0;
  param_1[0x39f1] = -1;
  param_1[0x39f3] = 0;
  param_1[0x39f4] = -1;
  param_1[0x39f6] = 0;
  param_1[0x39f7] = -1;
  param_1[0x39f9] = 0;
  param_1[0x39fa] = -1;
  param_1[0x39fc] = 0;
  param_1[0x39fd] = -1;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  lVar10 = *(long *)PTR_DAT_04bb2698;
  param_1[0x44] = 0;
  if (lVar10 == 0) {
    plVar6 = malloc(0x108);
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*plVar8 + 0x68));
    plVar6 = (long *)(lVar10 + 8);
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 + 0xa8);
    }
    plVar6 = (long *)*plVar6;
    if (plVar6 == (long *)0x0) {
      plVar6 = (long *)0x0;
    }
    else {
      plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,0x108,8);
    }
  }
  puVar1 = PTR_DAT_04bc5cb0;
  plVar6[4] = -1;
  *(undefined2 *)((long)plVar6 + 0x2c) = 0;
  *(undefined1 *)((long)plVar6 + 0x2e) = 0;
  *plVar6 = (long)(puVar1 + 0x10);
  plVar6[1] = 0;
  puVar1 = PTR_DAT_04bc5c98;
  *(undefined2 *)((long)plVar6 + 0x44) = 0;
  *(undefined1 *)((long)plVar6 + 0x46) = 0;
  *(undefined2 *)((long)plVar6 + 0x5c) = 0;
  puVar1 = puVar1 + 0x10;
  *(undefined1 *)((long)plVar6 + 0x5e) = 0;
  *(undefined2 *)((long)plVar6 + 0x74) = 0;
  *(undefined1 *)((long)plVar6 + 0x76) = 0;
  *(undefined2 *)((long)plVar6 + 0x8c) = 0;
  *(undefined1 *)((long)plVar6 + 0x8e) = 0;
  *(undefined2 *)((long)plVar6 + 0xa4) = 0;
  *(undefined1 *)((long)plVar6 + 0xa6) = 0;
  *(undefined2 *)((long)plVar6 + 0xbc) = 0;
  *(undefined1 *)((long)plVar6 + 0xbe) = 0;
  *(undefined2 *)((long)plVar6 + 0xd4) = 0;
  *(undefined1 *)((long)plVar6 + 0xd6) = 0;
  *(undefined2 *)((long)plVar6 + 0xec) = 0;
  *(undefined1 *)((long)plVar6 + 0xee) = 0;
  *(undefined2 *)((long)plVar6 + 0x104) = 0;
  *(undefined1 *)((long)plVar6 + 0x106) = 0;
  plVar6[2] = 0;
  plVar6[3] = (long)puVar1;
  plVar6[6] = (long)puVar1;
  plVar6[7] = -1;
  plVar6[9] = (long)puVar1;
  plVar6[10] = -1;
  plVar6[0xc] = (long)puVar1;
  plVar6[0xd] = -1;
  plVar6[0xf] = (long)puVar1;
  plVar6[0x10] = -1;
  plVar6[0x12] = (long)puVar1;
  plVar6[0x13] = -1;
  plVar6[0x15] = (long)puVar1;
  plVar6[0x16] = -1;
  plVar6[0x18] = (long)puVar1;
  plVar6[0x19] = -1;
  plVar6[0x1b] = (long)puVar1;
  plVar6[0x1c] = -1;
  lVar10 = *(long *)PTR_DAT_04bb2698;
  plVar6[0x1e] = (long)puVar1;
  plVar6[0x1f] = -1;
  if (lVar10 == 0) {
    pvVar7 = malloc(0x50);
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*plVar8 + 0x68));
    plVar8 = (long *)(lVar10 + 8);
    if (lVar5 != 0) {
      plVar8 = (long *)(lVar5 + 0xa8);
    }
    plVar8 = (long *)*plVar8;
    if (plVar8 == (long *)0x0) goto LAB_034a4254;
    pvVar7 = (void *)(**(code **)(*plVar8 + 0x30))(plVar8,0x50,8);
  }
  if (pvVar7 != (void *)0x0) {
    plVar6[1] = 0xa00000000;
    plVar6[2] = (long)pvVar7;
  }
LAB_034a4254:
  (**(code **)(*plVar6 + 0x18))(plVar6);
  puVar1 = PTR_DAT_04bb9198;
  param_1[0x49] = (long)plVar6;
  param_1[0x39cc] = *(long *)puVar1;
  return;
}

