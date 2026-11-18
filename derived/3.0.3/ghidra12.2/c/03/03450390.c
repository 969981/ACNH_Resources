
void FUN_03450390(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  puVar2 = PTR_DAT_04bb3350;
  puVar1 = PTR_DAT_04bb2698;
  lVar5 = *(long *)PTR_DAT_04bb2698;
  param_1[6] = 0;
  if (lVar5 == 0) {
    puVar4 = malloc(0x10);
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    puVar4 = (undefined8 *)(lVar5 + 8);
    if (lVar3 != 0) {
      puVar4 = (undefined8 *)(lVar3 + 0xa8);
    }
    puVar4 = (undefined8 *)(**(code **)(*(long *)*puVar4 + 0x30))((long *)*puVar4,0x10,8);
  }
  *(undefined1 *)(puVar4 + 1) = 0;
  *puVar4 = &PTR_LAB_04b2ad40;
  FUN_007ef010((long)puVar4 + 10,PTR_DAT_04bb3170);
  *(undefined1 *)((long)puVar4 + 0xc) = 0;
  *puVar4 = &PTR_LAB_04b2acd8;
  param_1[3] = puVar4;
  lVar5 = *(long *)puVar1;
  if (lVar5 == 0) {
    puVar4 = malloc(0x10);
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    puVar4 = (undefined8 *)(lVar5 + 8);
    if (lVar3 != 0) {
      puVar4 = (undefined8 *)(lVar3 + 0xa8);
    }
    puVar4 = (undefined8 *)(**(code **)(*(long *)*puVar4 + 0x30))((long *)*puVar4,0x10,8);
  }
  *puVar4 = &PTR_LAB_04b2ad40;
  puVar4[1] = 0;
  FUN_007ef010((long)puVar4 + 10,PTR_DAT_04bb3170);
  *puVar4 = &PTR_LAB_04b2ada8;
  param_1[4] = puVar4;
  lVar5 = *(long *)puVar1;
  if (lVar5 == 0) {
    puVar4 = malloc(0x10);
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    puVar4 = (undefined8 *)(lVar5 + 8);
    if (lVar3 != 0) {
      puVar4 = (undefined8 *)(lVar3 + 0xa8);
    }
    puVar4 = (undefined8 *)(**(code **)(*(long *)*puVar4 + 0x30))((long *)*puVar4,0x10,8);
  }
  *(undefined4 *)(puVar4 + 1) = 0;
  *puVar4 = &PTR_LAB_04b2ad40;
  FUN_007ef010((long)puVar4 + 10,PTR_DAT_04bb3170);
  *(undefined1 *)((long)puVar4 + 0xc) = 0;
  *puVar4 = &PTR_LAB_04b2ae10;
  param_1[5] = puVar4;
  lVar5 = *(long *)puVar1;
  if (lVar5 == 0) {
    puVar4 = malloc(0x10);
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    puVar4 = (undefined8 *)(lVar5 + 8);
    if (lVar3 != 0) {
      puVar4 = (undefined8 *)(lVar3 + 0xa8);
    }
    puVar4 = (undefined8 *)(**(code **)(*(long *)*puVar4 + 0x30))((long *)*puVar4,0x10,8);
  }
  *puVar4 = &PTR_LAB_04b2ad40;
  puVar4[1] = 0;
  FUN_007ef010((long)puVar4 + 10,PTR_DAT_04bb3170);
  *puVar4 = &PTR_LAB_04b2ae78;
  param_1[6] = puVar4;
  return;
}

