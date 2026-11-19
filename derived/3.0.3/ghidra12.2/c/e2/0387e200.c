
void FUN_0387e200(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  
  *(undefined4 *)((long)param_1 + 0xa4) = 0;
  *param_1 = &PTR_LAB_04b60680;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  puVar1 = PTR_DAT_04bb2698;
  lVar6 = *(long *)PTR_DAT_04bb2698;
  DAT_05ae6a60 = param_1;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  puVar2 = PTR_DAT_04bb3350;
  *(undefined1 *)(param_1 + 0x14) = 0;
  if (lVar6 == 0) {
    puVar4 = malloc(0x2f0);
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    puVar4 = (undefined8 *)(lVar6 + 8);
    if (lVar3 != 0) {
      puVar4 = (undefined8 *)(lVar3 + 0xa8);
    }
    puVar4 = (undefined8 *)(**(code **)(*(long *)*puVar4 + 0x30))((long *)*puVar4,0x2f0,8);
  }
  FUN_038802e0();
  puVar4[0x5a] = 0;
  *puVar4 = &PTR_LAB_04b607a8;
  *(undefined4 *)((long)puVar4 + 700) = 1;
  lVar6 = *(long *)puVar1;
  *(undefined1 *)(puVar4 + 0x58) = 0xf;
  puVar4[0x59] = 6;
  *(undefined2 *)((long)puVar4 + 0x2c2) = 0x32;
  puVar4[0x5b] = 0;
  *(undefined4 *)(puVar4 + 0x5c) = 0;
  *(undefined8 *)((long)puVar4 + 0x2e4) = 0x400000003;
  param_1[3] = puVar4;
  if (lVar6 == 0) {
    puVar4 = malloc(0x30);
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    puVar4 = (undefined8 *)(lVar6 + 8);
    if (lVar3 != 0) {
      puVar4 = (undefined8 *)(lVar3 + 0xa8);
    }
    puVar4 = (undefined8 *)(**(code **)(*(long *)*puVar4 + 0x30))((long *)*puVar4,0x30,8);
  }
  *(undefined4 *)(puVar4 + 3) = 0;
  *puVar4 = &PTR_LAB_04b60868;
  puVar4[1] = 0x4e2000000fa0;
  lVar6 = *(long *)puVar1;
  *(undefined1 *)((long)puVar4 + 0x1c) = 2;
  *(undefined2 *)((long)puVar4 + 0x1e) = 500;
  *(undefined4 *)(puVar4 + 2) = 1000;
  *(undefined2 *)((long)puVar4 + 0x14) = 1;
  puVar4[4] = 0x138800010000;
  *(undefined1 *)(puVar4 + 5) = 1;
  param_1[4] = puVar4;
  if (lVar6 == 0) {
    puVar4 = malloc(0x10);
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    puVar4 = (undefined8 *)(lVar6 + 8);
    if (lVar3 != 0) {
      puVar4 = (undefined8 *)(lVar3 + 0xa8);
    }
    puVar4 = (undefined8 *)(**(code **)(*(long *)*puVar4 + 0x30))((long *)*puVar4,0x10,8);
  }
  *puVar4 = &PTR_LAB_04b60898;
  puVar4[1] = 0x100000004;
  param_1[2] = puVar4;
  lVar6 = *(long *)puVar1;
  if (lVar6 == 0) {
    plVar5 = malloc(0x268);
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar5 = (long *)(lVar6 + 8);
    if (lVar3 != 0) {
      plVar5 = (long *)(lVar3 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
    if (plVar5 == (long *)0x0) {
      plVar5 = (long *)0x0;
    }
    else {
      plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,0x268,8);
    }
  }
  FUN_0389d5e0(plVar5);
  *(undefined4 *)(plVar5 + 0x2c) = 0;
  puVar2 = PTR_DAT_04bcbbb0;
  puVar1 = PTR_DAT_04bcbb80;
  plVar5[0x2a] = (long)(plVar5 + 0x2a);
  plVar5[0x2b] = (long)(plVar5 + 0x2a);
  plVar5[0x31] = 0;
  plVar5[0x32] = 0;
  plVar5[0x33] = 0;
  plVar5[0x34] = 0;
  plVar5[0x29] = (long)(puVar1 + 0x10);
  *plVar5 = (long)(puVar2 + 0x10);
  plVar5[0x35] = 0;
  plVar5[0x36] = 0;
  plVar5[0x37] = 0;
  plVar5[0x38] = 0;
  plVar5[0x39] = 0;
  plVar5[0x3a] = 0;
  plVar5[0x3b] = 0;
  plVar5[0x3c] = 0;
  plVar5[0x3d] = 0;
  plVar5[0x3e] = 0;
  puVar1 = PTR_DAT_04bcbb20 + 0x10;
  plVar5[0x31] = (long)puVar1;
  plVar5[0x35] = (long)puVar1;
  plVar5[0x39] = (long)puVar1;
  plVar5[0x3d] = (long)puVar1;
  plVar5[0x2f] = (long)(plVar5 + 0x2e);
  plVar5[0x30] = 0;
  plVar5[0x2d] = (long)puVar1;
  plVar5[0x2e] = (long)(plVar5 + 0x2e);
  plVar5[0x32] = (long)(plVar5 + 0x32);
  plVar5[0x33] = (long)(plVar5 + 0x32);
  plVar5[0x36] = (long)(plVar5 + 0x36);
  plVar5[0x37] = (long)(plVar5 + 0x36);
  plVar5[0x3a] = (long)(plVar5 + 0x3a);
  plVar5[0x3b] = (long)(plVar5 + 0x3a);
  plVar5[0x3f] = 0;
  plVar5[0x40] = 0;
  plVar5[0x3e] = (long)(plVar5 + 0x3e);
  plVar5[0x3f] = (long)(plVar5 + 0x3e);
  puVar1 = PTR_DAT_04bcbbb8 + 0x10;
  *(undefined4 *)(plVar5 + 0x44) = 0;
  plVar5[0x41] = (long)puVar1;
  plVar5[0x43] = (long)(plVar5 + 0x42);
  plVar5[0x42] = (long)(plVar5 + 0x42);
  puVar1 = PTR_DAT_04bcbbc0 + 0x10;
  *(undefined4 *)(plVar5 + 0x48) = 0;
  plVar5[0x47] = (long)(plVar5 + 0x46);
  plVar5[0x46] = (long)(plVar5 + 0x46);
  *(undefined4 *)(plVar5 + 0x4c) = 0;
  plVar5[0x45] = (long)puVar1;
  plVar5[0x49] = (long)puVar1;
  plVar5[0x4b] = (long)(plVar5 + 0x4a);
  plVar5[0x4a] = (long)(plVar5 + 0x4a);
  param_1[1] = plVar5;
  param_1[0xb] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  return;
}

