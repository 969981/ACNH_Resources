
void FUN_03d6f4f0(long *param_1,undefined8 param_2,long param_3)

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
  *param_1 = (long)&PTR_LAB_04b90ea0;
  lVar8 = *(long *)puVar2;
  param_1[0x42] = 0x800000000;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  *(undefined1 *)(param_1 + 0x45) = 0;
  *(undefined4 *)((long)param_1 + 0x22c) = 0x3f800000;
  param_1[0x46] = 0;
  if (lVar8 == 0) {
    pvVar6 = malloc(0x40);
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
    plVar7 = (long *)(lVar8 + 8);
    if (lVar5 != 0) {
      plVar7 = (long *)(lVar5 + 0xa8);
    }
    plVar7 = (long *)*plVar7;
    if (plVar7 == (long *)0x0) goto LAB_03d6f650;
    pvVar6 = (void *)(**(code **)(*plVar7 + 0x30))(plVar7,0x40,8);
  }
  if (pvVar6 != (void *)0x0) {
    param_1[0x41] = (long)pvVar6;
    *(undefined4 *)((long)param_1 + 0x204) = 8;
  }
LAB_03d6f650:
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)((long)param_1 + 0x224) = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  return;
}

