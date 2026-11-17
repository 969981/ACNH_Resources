
void FUN_03135560(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[2] = param_1 + 1;
  param_1[3] = 0x27800000000;
  *param_1 = &PTR_FUN_04b03940;
  param_1[1] = param_1 + 1;
  param_1[6] = 0xffffffffffffffff;
  *(undefined4 *)((long)param_1 + 0x6c) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x44) = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0;
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  *(undefined8 *)((long)param_1 + 0x5c) = 0;
  *(undefined8 *)((long)param_1 + 0x61) = 0;
  param_1[0xe] = &PTR_LAB_04b03a38;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  puVar2 = PTR_DAT_04bb2698;
  lVar8 = *(long *)PTR_DAT_04bb2698;
  param_1[0x16] = &PTR_LAB_04b03960;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  puVar3 = PTR_DAT_04bb3350;
  param_1[0x18] = 0;
  if (lVar8 == 0) {
    plVar7 = malloc(8);
  }
  else {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
    puVar1 = (undefined8 *)(lVar8 + 8);
    if (lVar6 != 0) {
      puVar1 = (undefined8 *)(lVar6 + 0xa8);
    }
    plVar7 = (long *)(**(code **)(*(long *)*puVar1 + 0x30))((long *)*puVar1,8,8);
  }
  puVar4 = PTR_DAT_04bcb4d8;
  *plVar7 = (long)(PTR_DAT_04bcb4d8 + 0x10);
  param_1[0x19] = plVar7;
  param_1[0x1a] = plVar7;
  puVar5 = PTR_DAT_04bcb4e8;
  lVar8 = *(long *)puVar2;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1e] = 0;
  param_1[0x17] = puVar5 + 0x10;
  if (lVar8 == 0) {
    plVar7 = malloc(8);
  }
  else {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
    puVar1 = (undefined8 *)(lVar8 + 8);
    if (lVar6 != 0) {
      puVar1 = (undefined8 *)(lVar6 + 0xa8);
    }
    plVar7 = (long *)(**(code **)(*(long *)*puVar1 + 0x30))((long *)*puVar1,8,8);
  }
  *plVar7 = (long)(puVar4 + 0x10);
  param_1[0x1f] = plVar7;
  param_1[0x20] = plVar7;
  param_1[0x1d] = puVar5 + 0x10;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  return;
}

