
void FUN_033d5828(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined4 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  void *pvVar7;
  long lVar8;
  
  puVar2 = PTR_DAT_04bb3350;
  puVar1 = PTR_DAT_04bb2698;
  lVar8 = *(long *)PTR_DAT_04bb2698;
  if (lVar8 == 0) {
    puVar4 = malloc(4);
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar6 = (undefined8 *)(lVar8 + 8);
    if (lVar3 != 0) {
      puVar6 = (undefined8 *)(lVar3 + 0xa8);
    }
    puVar4 = (undefined4 *)(**(code **)(*(long *)*puVar6 + 0x30))((long *)*puVar6,4,8);
  }
  *puVar4 = 0;
  *param_1 = puVar4;
  lVar8 = *(long *)puVar1;
  if (lVar8 == 0) {
    puVar6 = malloc(0x1c);
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    *(undefined1 *)(puVar6 + 3) = 0;
    param_1[1] = puVar6;
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar5 = (long *)(lVar8 + 8);
    if (lVar3 != 0) {
      plVar5 = (long *)(lVar3 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
    puVar6 = (undefined8 *)0x0;
    if (plVar5 != (long *)0x0) {
      puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,0x1c,8);
    }
    lVar8 = *(long *)puVar1;
    *(undefined1 *)(puVar6 + 3) = 0;
    *puVar6 = 0;
    puVar6[1] = 0;
    puVar6[2] = 0;
    param_1[1] = puVar6;
    if (lVar8 != 0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
      puVar6 = (undefined8 *)(lVar8 + 8);
      if (lVar3 != 0) {
        puVar6 = (undefined8 *)(lVar3 + 0xa8);
      }
      puVar4 = (undefined4 *)(**(code **)(*(long *)*puVar6 + 0x30))((long *)*puVar6,5,8);
      goto LAB_033d5950;
    }
  }
  puVar4 = malloc(5);
LAB_033d5950:
  *puVar4 = 0;
  *(undefined1 *)(puVar4 + 1) = 0x52;
  lVar8 = *(long *)puVar1;
  param_1[2] = puVar4;
  if (lVar8 == 0) {
    puVar4 = malloc(5);
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    puVar6 = (undefined8 *)(lVar8 + 8);
    if (lVar3 != 0) {
      puVar6 = (undefined8 *)(lVar3 + 0xa8);
    }
    puVar4 = (undefined4 *)(**(code **)(*(long *)*puVar6 + 0x30))((long *)*puVar6,5,8);
  }
  *puVar4 = 0;
  *(undefined1 *)(puVar4 + 1) = 0x52;
  lVar8 = *(long *)puVar1;
  param_1[3] = puVar4;
  if (lVar8 == 0) {
    pvVar7 = malloc(0xec);
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    puVar6 = (undefined8 *)(lVar8 + 8);
    if (lVar3 != 0) {
      puVar6 = (undefined8 *)(lVar3 + 0xa8);
    }
    pvVar7 = (void *)(**(code **)(*(long *)*puVar6 + 0x30))((long *)*puVar6,0xec,8);
  }
  FUN_03383504();
  param_1[4] = pvVar7;
  lVar8 = *(long *)puVar1;
  if (lVar8 == 0) {
    pvVar7 = malloc(0xec);
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    puVar6 = (undefined8 *)(lVar8 + 8);
    if (lVar3 != 0) {
      puVar6 = (undefined8 *)(lVar3 + 0xa8);
    }
    pvVar7 = (void *)(**(code **)(*(long *)*puVar6 + 0x30))((long *)*puVar6,0xec,8);
  }
  FUN_03383504();
  param_1[5] = pvVar7;
  lVar8 = *(long *)puVar1;
  if (lVar8 == 0) {
    puVar6 = malloc(0xc);
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    puVar6 = (undefined8 *)(lVar8 + 8);
    if (lVar3 != 0) {
      puVar6 = (undefined8 *)(lVar3 + 0xa8);
    }
    puVar6 = (undefined8 *)(**(code **)(*(long *)*puVar6 + 0x30))((long *)*puVar6,0xc,8);
  }
  *(undefined4 *)(puVar6 + 1) = 0;
  *puVar6 = 0xfffeffffffff;
  FUN_0277d4ac((long)puVar6 + 4);
  param_1[6] = puVar6;
  return;
}

