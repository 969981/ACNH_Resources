
void FUN_01dbc4e8(long *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  void *pvVar8;
  long lVar9;
  
  puVar4 = PTR_DAT_04bb2698;
  lVar9 = *(long *)PTR_DAT_04bb2698;
  if (lVar9 == 0) {
    pvVar8 = malloc(0x560);
  }
  else {
    plVar7 = param_2;
    if (param_2 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar7 = (long *)(lVar9 + 8);
      if (lVar6 != 0) {
        plVar7 = (long *)(lVar6 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
    }
    pvVar8 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,0x560,8);
  }
  FUN_01d3e72c();
  *param_1 = (long)pvVar8;
  lVar9 = *(long *)puVar4;
  if (lVar9 == 0) {
    pvVar8 = malloc(0xd8);
  }
  else {
    plVar7 = param_2;
    if (param_2 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar7 = (long *)(lVar9 + 8);
      if (lVar6 != 0) {
        plVar7 = (long *)(lVar6 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
    }
    pvVar8 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,0xd8,8);
  }
  FUN_01d99f40();
  param_1[1] = (long)pvVar8;
  lVar9 = *(long *)puVar4;
  if (lVar9 == 0) {
    pvVar8 = malloc(0xac0);
  }
  else {
    plVar7 = param_2;
    if (param_2 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar7 = (long *)(lVar9 + 8);
      if (lVar6 != 0) {
        plVar7 = (long *)(lVar6 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
    }
    pvVar8 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,0xac0,8);
  }
  FUN_01d41828();
  param_1[2] = (long)pvVar8;
  lVar9 = *(long *)puVar4;
  if (lVar9 == 0) {
    pvVar8 = malloc(0x8508);
  }
  else {
    plVar7 = param_2;
    if (param_2 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar7 = (long *)(lVar9 + 8);
      if (lVar6 != 0) {
        plVar7 = (long *)(lVar6 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
      if (plVar7 == (long *)0x0) {
        pvVar8 = (void *)0x0;
        goto LAB_01dbc69c;
      }
    }
    pvVar8 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,0x8508,8);
  }
LAB_01dbc69c:
  FUN_038e18e4(pvVar8);
  *(undefined8 *)((long)pvVar8 + 0x40) = 0;
  *(undefined4 *)((long)pvVar8 + 0x48) = 0;
  puVar5 = PTR_DAT_04bc3880;
  *(undefined4 *)((long)pvVar8 + 0x7538) = 0;
  *(undefined4 *)((long)pvVar8 + 0x7550) = 0;
  *(undefined4 *)((long)pvVar8 + 0x90) = 0xffffffff;
  *(undefined8 *)((long)pvVar8 + 0xc0) = 0;
  *(undefined8 *)((long)pvVar8 + 200) = 0;
  *(undefined8 *)((long)pvVar8 + 0x94) = 0;
  *(undefined8 *)((long)pvVar8 + 0x9c) = 0;
  *(undefined8 *)((long)pvVar8 + 0xa4) = 0;
  *(undefined8 *)((long)pvVar8 + 0xac) = 0;
  *(undefined **)((long)pvVar8 + 0x50) = puVar5 + 0x10;
  *(undefined **)((long)pvVar8 + 0x70) = puVar5 + 0x10;
  *(undefined8 *)((long)pvVar8 + 0xb1) = 0;
  *(undefined4 *)((long)pvVar8 + 0xf0) = 0;
  *(undefined4 *)((long)pvVar8 + 0x84bc) = 0;
  *(undefined1 *)((long)pvVar8 + 0x84c0) = 0;
  *(long *)((long)pvVar8 + 0xe0) = (long)pvVar8 + 0xf4;
  *(undefined8 *)((long)pvVar8 + 0xe8) = 0x1e;
  *(long *)((long)pvVar8 + 0x7540) = (long)pvVar8 + 0x7554;
  *(undefined8 *)((long)pvVar8 + 0x7548) = 4;
  *(undefined8 *)((long)pvVar8 + 0xd0) = 0;
  *(undefined8 *)((long)pvVar8 + 0xd8) = 0;
  *(undefined8 *)((long)pvVar8 + 0x8498) = 0;
  *(undefined8 *)((long)pvVar8 + 0x84a0) = 0;
  *(undefined1 *)((long)pvVar8 + 0x84a8) = 0xff;
  *(undefined8 *)((long)pvVar8 + 0x84ac) = 0xffffffffffffffff;
  *(undefined8 *)((long)pvVar8 + 0x84b4) = 0xffffffffffffffff;
  *(undefined1 *)((long)pvVar8 + 0x84e8) = 0;
  *(undefined8 *)((long)pvVar8 + 0x84c8) = 0;
  *(undefined8 *)((long)pvVar8 + 34000) = 0;
  *(undefined8 *)((long)pvVar8 + 0x84d8) = 0;
  *(undefined8 *)((long)pvVar8 + 0x84e0) = 0;
  *(undefined2 *)((long)pvVar8 + 0x84f0) = 0xffff;
  *(undefined8 *)((long)pvVar8 + 0x84f4) = 0xffffffffffffffff;
  lVar9 = *(long *)puVar4;
  *(undefined8 *)((long)pvVar8 + 0x84fc) = 0;
  *(undefined4 *)((long)pvVar8 + 0x8504) = 0;
  param_1[3] = (long)pvVar8;
  if (lVar9 == 0) {
    plVar7 = malloc(0x68);
  }
  else {
    plVar7 = param_2;
    if (param_2 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar7 = (long *)(lVar9 + 8);
      if (lVar6 != 0) {
        plVar7 = (long *)(lVar6 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
    }
    plVar7 = (long *)(**(code **)(*plVar7 + 0x30))(plVar7,0x68,8);
  }
  plVar7[2] = 0;
  plVar7[3] = 0;
  *plVar7 = (long)(PTR_DAT_04bc1478 + 0x10);
  plVar7[1] = 0;
  puVar5 = PTR_DAT_04bc1480;
  lVar9 = *(long *)puVar4;
  *(undefined1 *)(plVar7 + 8) = 0;
  plVar7[6] = 0;
  plVar7[7] = 0;
  plVar7[9] = 0;
  plVar7[0xb] = 0;
  *(undefined1 *)(plVar7 + 0xc) = 0;
  plVar7[4] = (long)(puVar5 + 0x10);
  plVar7[5] = 0;
  *(undefined1 *)(plVar7 + 10) = 0xff;
  param_1[4] = (long)plVar7;
  if (lVar9 == 0) {
    pvVar8 = malloc(0x130);
  }
  else {
    plVar7 = param_2;
    if (param_2 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar7 = (long *)(lVar9 + 8);
      if (lVar6 != 0) {
        plVar7 = (long *)(lVar6 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
    }
    pvVar8 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,0x130,8);
  }
  FUN_01d93ef4();
  param_1[5] = (long)pvVar8;
  lVar9 = *(long *)puVar4;
  if (lVar9 == 0) {
    pvVar8 = malloc(0x80);
  }
  else {
    plVar7 = param_2;
    if (param_2 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar7 = (long *)(lVar9 + 8);
      if (lVar6 != 0) {
        plVar7 = (long *)(lVar6 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
    }
    pvVar8 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,0x80,8);
  }
  FUN_01df6a18();
  param_1[6] = (long)pvVar8;
  FUN_01d75860(*(undefined8 *)PTR_DAT_04bc1368,param_2);
  if (param_2 == (long *)0x0) {
    lVar9 = 1;
  }
  else {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar9 = *(long *)(lVar6 + 0xa8);
    *(long **)(lVar6 + 0xa8) = param_2;
  }
  FUN_01daf8e0(*param_1 + 0x480);
  puVar5 = PTR_DAT_04bb36f0;
  uVar1 = DAT_0536c720;
  if (*(uint *)(*(long *)PTR_DAT_04bb36f0 + 0x20) <= DAT_0536c720) {
    uVar1 = 0;
  }
  *(undefined **)(*(long *)(*(long *)PTR_DAT_04bb36f0 + 0x28) + (long)(int)uVar1 * 0x38 + 8) =
       PTR_DAT_04bc1228;
  uVar2 = DAT_05378520;
  lVar6 = *(long *)puVar5;
  uVar1 = DAT_05378520;
  if (*(uint *)(lVar6 + 0x20) <= DAT_05378520) {
    uVar1 = 0;
  }
  *(undefined8 **)(*(long *)(lVar6 + 0x28) + (long)(int)uVar1 * 0x38 + 8) = &DAT_05378500;
  lVar6 = *(long *)puVar5;
  if (*(uint *)(lVar6 + 0x20) <= uVar2) {
    uVar2 = 0;
  }
  *(undefined1 *)(*(long *)(lVar6 + 0x28) + (long)(int)uVar2 * 0x38 + 0x30) = 0;
  FUN_01db90a4(param_1[3]);
  if (lVar9 != 1) {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    *(long *)(lVar6 + 0xa8) = lVar9;
  }
  lVar9 = *(long *)puVar4;
  if (lVar9 == 0) {
    pvVar8 = malloc(0x3d8);
  }
  else {
    if (param_2 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar3 = (undefined8 *)(lVar9 + 8);
      if (lVar6 != 0) {
        puVar3 = (undefined8 *)(lVar6 + 0xa8);
      }
      param_2 = (long *)*puVar3;
      pvVar8 = (void *)0x0;
      if (param_2 == (long *)0x0) goto LAB_01dbca50;
    }
    pvVar8 = (void *)(**(code **)(*param_2 + 0x30))(param_2,0x3d8,8);
  }
LAB_01dbca50:
  *(undefined2 *)((long)pvVar8 + 8) = 0;
  *(undefined1 *)((long)pvVar8 + 100) = 0;
  *(undefined1 *)((long)pvVar8 + 0xc0) = 0;
  *(undefined8 *)((long)pvVar8 + 0xc4) = 0xfffe00000000;
  *(undefined4 *)((long)pvVar8 + 0xcc) = 0;
  FUN_0277d4ac((long)pvVar8 + 200);
  *(undefined1 *)((long)pvVar8 + 0xd0) = 0;
  *(undefined1 *)((long)pvVar8 + 0xd4) = 0;
  memset((void *)((long)pvVar8 + 0xd6),0,0x2a2);
  *(undefined2 *)((long)pvVar8 + 0x378) = 0xfffe;
  *(undefined8 *)((long)pvVar8 + 0x37c) = 0;
  *(undefined8 *)((long)pvVar8 + 900) = 0;
  *(undefined8 *)((long)pvVar8 + 0x38c) = 0;
  *(undefined8 *)((long)pvVar8 + 0x394) = 0;
  *(undefined8 *)((long)pvVar8 + 0x39c) = 0;
  *(undefined8 *)((long)pvVar8 + 0x3a4) = 0;
  puVar4 = PTR_DAT_04bb7bc0;
  *(undefined8 *)((long)pvVar8 + 0x3ac) = 0;
  *(undefined8 *)((long)pvVar8 + 0x3b4) = 0;
  lVar9 = *(long *)puVar4;
  param_1[0x11] = (long)pvVar8;
  puVar4 = PTR_LAB_04bc14c0;
  if (lVar9 != 0) {
    *(undefined ***)(lVar9 + 0x120) = &PTR_LAB_04a5b240;
    *(undefined **)(lVar9 + 0x128) = puVar4;
  }
  return;
}

