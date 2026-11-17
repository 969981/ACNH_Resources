
void FUN_030e5830(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined *puVar6;
  long lVar7;
  bool bVar8;
  long lVar9;
  void *pvVar10;
  
  FUN_03c5cce8(param_1,param_2,0);
  param_1[0x3e] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *param_1 = &PTR_FUN_04b90648;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  if (param_3 == 0) {
    bVar8 = false;
  }
  else {
    bVar8 = *(char *)(param_3 + 0x28) != '\0';
  }
  *(bool *)(param_1 + 0x3f) = bVar8;
  lVar7 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    pvVar10 = malloc(0x18);
  }
  else {
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    puVar1 = (undefined8 *)(lVar7 + 8);
    if (lVar9 != 0) {
      puVar1 = (undefined8 *)(lVar9 + 0xa8);
    }
    pvVar10 = (void *)(**(code **)(*(long *)*puVar1 + 0x30))((long *)*puVar1,0x18,8);
  }
  *(undefined4 *)((long)pvVar10 + 0x10) = 0;
  *(void **)pvVar10 = pvVar10;
  *(void **)((long)pvVar10 + 8) = pvVar10;
  param_1[0x3b] = pvVar10;
  *(undefined4 *)((long)pvVar10 + 0x14) = 8;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  *param_1 = &PTR_FUN_04aff2c8;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  uVar5 = *(undefined2 *)PTR_DAT_04bb37e0;
  uVar3 = PTR_DAT_04bb37e0[2];
  uVar4 = PTR_DAT_04bb37e0[3];
  uVar2 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  param_1[0x4b] = param_1 + 0x4c;
  param_1[0x4c] = param_1 + 0x4d;
  param_1[0x4d] = param_1 + 0x4e;
  param_1[0x4e] = param_1 + 0x4f;
  param_1[0x4f] = param_1 + 0x50;
  param_1[0x50] = param_1 + 0x51;
  param_1[0x51] = param_1 + 0x52;
  param_1[0x44] = 0;
  *(undefined2 *)(param_1 + 0x46) = uVar5;
  *(undefined1 *)((long)param_1 + 0x232) = uVar3;
  *(undefined1 *)((long)param_1 + 0x233) = uVar4;
  *(undefined4 *)((long)param_1 + 0x234) = uVar2;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = param_1 + 0x4b;
  param_1[0x52] = 0;
  param_1[0x4a] = param_1 + 0x4b;
  if (param_1 + 0x53 != (undefined8 *)0x0) {
    param_1[0x48] = param_1 + 0x53;
    *(undefined4 *)((long)param_1 + 0x23c) = 8;
  }
  *(undefined4 *)(param_1 + 0x47) = 0;
  puVar6 = PTR_DAT_04bc5af8;
  param_1[0x5b] = 0;
  *(undefined2 *)(param_1 + 0x5d) = uVar5;
  *(undefined1 *)((long)param_1 + 0x2ea) = uVar3;
  *(undefined1 *)((long)param_1 + 0x2eb) = uVar4;
  *(undefined4 *)((long)param_1 + 0x2ec) = uVar2;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = param_1 + 0x62;
  param_1[0x69] = 0;
  param_1[0x61] = param_1 + 0x62;
  param_1[0x45] = puVar6 + 0x10;
  param_1[0x62] = param_1 + 99;
  param_1[99] = param_1 + 100;
  param_1[100] = param_1 + 0x65;
  param_1[0x65] = param_1 + 0x66;
  param_1[0x66] = param_1 + 0x67;
  param_1[0x67] = param_1 + 0x68;
  param_1[0x68] = param_1 + 0x69;
  if (param_1 + 0x6a != (undefined8 *)0x0) {
    param_1[0x5f] = param_1 + 0x6a;
    *(undefined4 *)((long)param_1 + 0x2f4) = 8;
  }
  *(undefined4 *)(param_1 + 0x5e) = 0;
  puVar6 = PTR_DAT_04bc5a38;
  *(undefined2 *)(param_1 + 0x73) = uVar5;
  *(undefined1 *)((long)param_1 + 0x39a) = uVar3;
  *(undefined1 *)((long)param_1 + 0x39b) = uVar4;
  *(undefined4 *)((long)param_1 + 0x39c) = uVar2;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = param_1 + 0x78;
  param_1[0x7f] = 0;
  param_1[0x77] = param_1 + 0x78;
  param_1[0x5c] = puVar6 + 0x10;
  param_1[0x78] = param_1 + 0x79;
  param_1[0x79] = param_1 + 0x7a;
  param_1[0x7a] = param_1 + 0x7b;
  param_1[0x7b] = param_1 + 0x7c;
  param_1[0x7c] = param_1 + 0x7d;
  param_1[0x7d] = param_1 + 0x7e;
  param_1[0x7e] = param_1 + 0x7f;
  if (param_1 + 0x80 != (undefined8 *)0x0) {
    param_1[0x75] = param_1 + 0x80;
    *(undefined4 *)((long)param_1 + 0x3a4) = 8;
  }
  *(undefined4 *)(param_1 + 0x74) = 0;
  param_1[0x8f] = 0xffffffff00000000;
  *(undefined4 *)(param_1 + 0x88) = 0;
  param_1[0x72] = &PTR_LAB_04afa8e0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  param_1[0x89] = &PTR_LAB_04986038;
  *(undefined1 *)((long)param_1 + 0x526) = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  param_1[0x90] = &PTR_LAB_04ae8bf8;
  param_1[0x94] = &PTR_LAB_04ae8bf8;
  param_1[0x98] = &PTR_LAB_04ae8bf8;
  param_1[0x9c] = &PTR_LAB_04ae8bf8;
  param_1[0xa0] = &PTR_LAB_04ae8bf8;
  *(undefined4 *)(param_1 + 0xa4) = 0xfffffffe;
  *(undefined2 *)((long)param_1 + 0x524) = 0x101;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  return;
}

