
void FUN_03eb7a88(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  
  uVar4 = DAT_04c56b44;
  uVar3 = DAT_04c56b3c;
  param_1[0x2a] = &DAT_101010101010101;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  *param_1 = uVar3;
  param_1[1] = uVar4;
  uVar3 = DAT_04c56b54;
  puVar1 = PTR_DAT_04bb2698;
  param_1[0x34] = DAT_04c56b4c;
  param_1[0x35] = uVar3;
  puVar2 = PTR_DAT_04bb3350;
  lVar7 = *(long *)puVar1;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  if (lVar7 == 0) {
    puVar6 = malloc(0x20);
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    puVar6 = (undefined8 *)(lVar7 + 8);
    if (lVar5 != 0) {
      puVar6 = (undefined8 *)(lVar5 + 0xa8);
    }
    puVar6 = (undefined8 *)(**(code **)(*(long *)*puVar6 + 0x30))((long *)*puVar6,0x20,8);
  }
  *puVar6 = &PTR_LAB_04ba4e08;
  puVar6[1] = param_1;
  lVar7 = *(long *)puVar1;
  puVar6[2] = &LAB_03eb7c90;
  puVar6[3] = 0;
  param_1[0x2b] = puVar6;
  if (lVar7 == 0) {
    puVar6 = malloc(0x20);
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    puVar6 = (undefined8 *)(lVar7 + 8);
    if (lVar5 != 0) {
      puVar6 = (undefined8 *)(lVar5 + 0xa8);
    }
    puVar6 = (undefined8 *)(**(code **)(*(long *)*puVar6 + 0x30))((long *)*puVar6,0x20,8);
  }
  *puVar6 = &PTR_LAB_04ba4e08;
  puVar6[1] = param_1;
  lVar7 = *(long *)puVar1;
  puVar6[2] = &LAB_03eb7cb0;
  puVar6[3] = 0;
  param_1[0x2f] = puVar6;
  if (lVar7 == 0) {
    puVar6 = malloc(0x20);
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    puVar6 = (undefined8 *)(lVar7 + 8);
    if (lVar5 != 0) {
      puVar6 = (undefined8 *)(lVar5 + 0xa8);
    }
    puVar6 = (undefined8 *)(**(code **)(*(long *)*puVar6 + 0x30))((long *)*puVar6,0x20,8);
  }
  *puVar6 = &PTR_LAB_04ba4e08;
  puVar6[1] = param_1;
  lVar7 = *(long *)puVar1;
  puVar6[2] = &LAB_03eb7d28;
  puVar6[3] = 0;
  param_1[0x2c] = puVar6;
  if (lVar7 == 0) {
    puVar6 = malloc(0x20);
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    puVar6 = (undefined8 *)(lVar7 + 8);
    if (lVar5 != 0) {
      puVar6 = (undefined8 *)(lVar5 + 0xa8);
    }
    puVar6 = (undefined8 *)(**(code **)(*(long *)*puVar6 + 0x30))((long *)*puVar6,0x20,8);
  }
  puVar6[2] = &LAB_03eb7d50;
  puVar6[3] = 0;
  *puVar6 = &PTR_LAB_04ba4e08;
  puVar6[1] = param_1;
  param_1[0x30] = puVar6;
  memset(param_1 + 2,0,0x140);
  param_1[0x33] = 0;
  *(undefined1 *)(param_1 + 0x36) = 1;
  return;
}

