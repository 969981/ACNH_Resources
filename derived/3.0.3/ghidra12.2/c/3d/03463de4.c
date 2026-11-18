
void FUN_03463de4(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  void *pvVar9;
  long lVar10;
  long lVar11;
  
  lVar6 = param_2[1];
  lVar10 = param_2[2];
  lVar11 = 1;
  *param_1 = *param_2;
  param_1[1] = lVar6;
  param_1[2] = lVar10;
  lVar6 = param_2[3];
  lVar2 = param_2[4];
  lVar10 = param_2[5];
  lVar3 = param_2[6];
  param_1[8] = 0;
  param_1[7] = 0;
  *(undefined2 *)(param_1 + 9) = 0;
  *(undefined1 *)((long)param_1 + 0x4a) = 1;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = lVar10;
  param_1[6] = lVar3;
  *(undefined2 *)(param_1 + 0xc) = 0;
  *(undefined1 *)((long)param_1 + 0x62) = 1;
  param_1[3] = lVar6;
  param_1[4] = lVar2;
  puVar5 = PTR_DAT_04bb3350;
  *(undefined2 *)((long)param_1 + 0x6c) = 1;
  if (param_3 != 0) {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    lVar11 = *(long *)(lVar6 + 0xa8);
    *(long *)(lVar6 + 0xa8) = param_3;
  }
  puVar4 = PTR_DAT_04bb2698;
  if (*param_1 != 0) {
    lVar6 = *(long *)PTR_DAT_04bb2698;
    param_1[7] = *param_1;
    if (lVar6 == 0) {
      puVar8 = malloc(0x10);
    }
    else {
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
      plVar7 = (long *)(lVar6 + 8);
      if (lVar10 != 0) {
        plVar7 = (long *)(lVar10 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
      if (plVar7 == (long *)0x0) {
        puVar8 = (undefined8 *)0x0;
      }
      else {
        puVar8 = (undefined8 *)(**(code **)(*plVar7 + 0x30))(plVar7,0x10,8);
      }
    }
    *puVar8 = 0;
    lVar6 = *(long *)puVar4;
    param_1[8] = (long)puVar8;
    *(undefined1 *)(puVar8 + 1) = 0;
    if (lVar6 == 0) {
      pvVar9 = malloc(0x3b8);
    }
    else {
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
      puVar1 = (undefined8 *)(lVar6 + 8);
      if (lVar10 != 0) {
        puVar1 = (undefined8 *)(lVar10 + 0xa8);
      }
      pvVar9 = (void *)(**(code **)(*(long *)*puVar1 + 0x30))((long *)*puVar1,0x3b8,8);
    }
    FUN_01beb8d0();
    *puVar8 = pvVar9;
  }
  if (param_1[1] != 0) {
    lVar6 = *(long *)puVar4;
    param_1[10] = param_1[1];
    if (lVar6 == 0) {
      puVar8 = malloc(0x10);
    }
    else {
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
      plVar7 = (long *)(lVar6 + 8);
      if (lVar10 != 0) {
        plVar7 = (long *)(lVar10 + 0xa8);
      }
      plVar7 = (long *)*plVar7;
      if (plVar7 == (long *)0x0) {
        puVar8 = (undefined8 *)0x0;
      }
      else {
        puVar8 = (undefined8 *)(**(code **)(*plVar7 + 0x30))(plVar7,0x10,8);
      }
    }
    *puVar8 = 0;
    param_1[0xb] = (long)puVar8;
    lVar6 = *(long *)puVar4;
    *(undefined1 *)(puVar8 + 1) = 0;
    if (lVar6 == 0) {
      pvVar9 = malloc(0x3b8);
    }
    else {
      lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
      puVar1 = (undefined8 *)(lVar6 + 8);
      if (lVar10 != 0) {
        puVar1 = (undefined8 *)(lVar10 + 0xa8);
      }
      pvVar9 = (void *)(**(code **)(*(long *)*puVar1 + 0x30))((long *)*puVar1,0x3b8,8);
    }
    FUN_01beb8d0();
    *puVar8 = pvVar9;
  }
  if (lVar11 != 1) {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
    *(long *)(lVar6 + 0xa8) = lVar11;
  }
  return;
}

