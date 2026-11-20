
void FUN_03d5cc04(long *param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  long lVar5;
  void *pvVar6;
  long *plVar7;
  long lVar8;
  
  FUN_03c5cce8(param_1,param_2,0);
  puVar2 = PTR_DAT_04bd45f0;
  param_1[0x3e] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  if (param_3 == 0) {
    bVar4 = false;
  }
  else {
    bVar4 = *(char *)(param_3 + 0x28) != '\0';
  }
  *(bool *)(param_1 + 0x3f) = bVar4;
  puVar3 = PTR_DAT_04bb3350;
  puVar2 = PTR_DAT_04bb2698;
  lVar8 = *(long *)PTR_DAT_04bb2698;
  if (lVar8 == 0) {
    pvVar6 = malloc(0x18);
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar1 = (undefined8 *)(lVar8 + 8);
    if (lVar5 != 0) {
      puVar1 = (undefined8 *)(lVar5 + 0xa8);
    }
    pvVar6 = (void *)(**(code **)(*(long *)*puVar1 + 0x30))((long *)*puVar1,0x18,8);
  }
  *(undefined4 *)((long)pvVar6 + 0x10) = 0;
  *(void **)pvVar6 = pvVar6;
  *(void **)((long)pvVar6 + 8) = pvVar6;
  param_1[0x3b] = (long)pvVar6;
  *(undefined4 *)((long)pvVar6 + 0x14) = 8;
  *param_1 = (long)&PTR_LAB_04b8fa98;
  lVar8 = *(long *)puVar2;
  *(undefined8 *)((long)param_1 + 0x1fc) = 0x100000001;
  param_1[0x45] = 0;
  *(undefined4 *)(param_1 + 0x46) = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  if (lVar8 == 0) {
    plVar7 = malloc(8);
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
    puVar1 = (undefined8 *)(lVar8 + 8);
    if (lVar5 != 0) {
      puVar1 = (undefined8 *)(lVar5 + 0xa8);
    }
    plVar7 = (long *)(**(code **)(*(long *)*puVar1 + 0x30))((long *)*puVar1,8,8);
  }
  *plVar7 = (long)(PTR_DAT_04bd4588 + 0x10);
  param_1[0x4b] = (long)plVar7;
  param_1[0x4a] = (long)plVar7;
  return;
}

