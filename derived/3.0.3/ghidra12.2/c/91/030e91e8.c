
void FUN_030e91e8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  void *pvVar7;
  long lVar8;
  
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  puVar2 = PTR_DAT_04bb2698;
  *(undefined8 *)((long)param_1 + 0x15) = 0;
  puVar3 = PTR_DAT_04bb3350;
  lVar8 = *(long *)puVar2;
  if (lVar8 == 0) {
    puVar6 = malloc(0x10);
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar5 = (long *)(lVar8 + 8);
    if (lVar4 != 0) {
      plVar5 = (long *)(lVar4 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
    if (plVar5 == (long *)0x0) {
      puVar6 = (undefined8 *)0x0;
    }
    else {
      puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,0x10,8);
    }
  }
  *puVar6 = 0;
  param_1[2] = puVar6;
  lVar8 = *(long *)puVar2;
  *(undefined1 *)(puVar6 + 1) = 0;
  if (lVar8 == 0) {
    pvVar7 = malloc(0x3b8);
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
    puVar1 = (undefined8 *)(lVar8 + 8);
    if (lVar4 != 0) {
      puVar1 = (undefined8 *)(lVar4 + 0xa8);
    }
    pvVar7 = (void *)(**(code **)(*(long *)*puVar1 + 0x30))((long *)*puVar1,0x3b8,8);
  }
  FUN_01beb8d0();
  *puVar6 = pvVar7;
  return;
}

