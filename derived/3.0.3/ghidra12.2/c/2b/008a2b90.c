
void FUN_008a2b90(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  
  *(undefined4 *)((long)param_1 + 0x1a) = 0;
  *param_1 = &PTR_FUN_049205b8;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 4) = 0x40000000;
  puVar1 = PTR_DAT_04bb2698;
  lVar5 = *(long *)PTR_DAT_04bb2698;
  *(undefined1 *)((long)param_1 + 0x34) = 0xff;
  puVar2 = PTR_DAT_04bb3350;
  if (lVar5 == 0) {
    puVar4 = malloc(0x30);
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar4 = (undefined8 *)(lVar5 + 8);
    if (lVar3 != 0) {
      puVar4 = (undefined8 *)(lVar3 + 0xa8);
    }
    puVar4 = (undefined8 *)(**(code **)(*(long *)*puVar4 + 0x30))((long *)*puVar4,0x30,8);
  }
  *puVar4 = &PTR_LAB_04920618;
  lVar5 = *(long *)puVar1;
  *(undefined4 *)(puVar4 + 1) = 0xffffffff;
  puVar4[2] = &PTR_LAB_04920638;
  param_1[7] = puVar4;
  *(undefined1 *)(param_1 + 10) = 0xff;
  if (lVar5 == 0) {
    puVar4 = malloc(0x30);
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    puVar4 = (undefined8 *)(lVar5 + 8);
    if (lVar3 != 0) {
      puVar4 = (undefined8 *)(lVar3 + 0xa8);
    }
    puVar4 = (undefined8 *)(**(code **)(*(long *)*puVar4 + 0x30))((long *)*puVar4,0x30,8);
  }
  *puVar4 = &PTR_LAB_04920618;
  lVar5 = *(long *)puVar1;
  *(undefined4 *)(puVar4 + 1) = 0xffffffff;
  puVar4[2] = &PTR_LAB_04920638;
  param_1[0xc] = puVar4;
  *(undefined2 *)(param_1 + 0xd) = 0xff;
  if (lVar5 == 0) {
    puVar4 = malloc(0x30);
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    puVar4 = (undefined8 *)(lVar5 + 8);
    if (lVar3 != 0) {
      puVar4 = (undefined8 *)(lVar3 + 0xa8);
    }
    puVar4 = (undefined8 *)(**(code **)(*(long *)*puVar4 + 0x30))((long *)*puVar4,0x30,8);
  }
  *(undefined4 *)(puVar4 + 1) = 0xffffffff;
  *puVar4 = &PTR_LAB_04920618;
  puVar4[2] = &PTR_LAB_04920638;
  param_1[0x11] = param_1 + 0x11;
  param_1[0x12] = param_1 + 0x11;
  param_1[0x10] = &PTR_LAB_049206a0;
  param_1[0x19] = param_1 + 0x19;
  param_1[0x1a] = param_1 + 0x19;
  lVar5 = param_1[7];
  param_1[0x14] = &PTR_LAB_04920680;
  param_1[0xe] = puVar4;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  *(undefined4 *)(param_1 + 0x17) = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  *(undefined2 *)((long)param_1 + 0x7c) = 0;
  param_1[0x15] = param_1 + 0x15;
  param_1[0x16] = param_1 + 0x15;
  param_1[0x18] = &PTR_LAB_04920660;
  *(undefined1 *)(param_1 + 5) = 0xff;
  *(undefined2 *)((long)param_1 + 0x34) = 0xff;
  *(undefined1 *)((long)param_1 + 0x54) = 0xff;
  *(undefined ***)(lVar5 + 0x10) = &PTR_LAB_049206c0;
  *(undefined8 **)(lVar5 + 0x18) = param_1;
  *(undefined1 **)(lVar5 + 0x20) = &LAB_008a2dd0;
  *(undefined8 *)(lVar5 + 0x28) = 0;
  lVar5 = param_1[0xc];
  *(undefined ***)(lVar5 + 0x10) = &PTR_LAB_049206c0;
  *(undefined8 **)(lVar5 + 0x18) = param_1;
  *(code **)(lVar5 + 0x20) = FUN_008a2fc8;
  *(undefined8 *)(lVar5 + 0x28) = 0;
  lVar5 = param_1[0xe];
  *(undefined ***)(lVar5 + 0x10) = &PTR_LAB_049206c0;
  *(undefined8 **)(lVar5 + 0x18) = param_1;
  *(undefined1 **)(lVar5 + 0x20) = &LAB_008a31d0;
  *(undefined8 *)(lVar5 + 0x28) = 0;
  return;
}

