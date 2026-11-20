
void FUN_03eaac78(undefined8 *param_1,long param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  void *pvVar7;
  size_t __size;
  long lVar8;
  
  *(undefined4 *)(param_1 + 6) = 0;
  *param_1 = &PTR_FUN_04ba43b0;
  param_1[1] = param_2;
  param_1[4] = param_1 + 4;
  param_1[5] = param_1 + 4;
  param_1[3] = 0;
  param_1[9] = 0xffffffff00000040;
  param_1[2] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  puVar2 = PTR_DAT_04bb3350;
  *(undefined1 *)(param_1 + 10) = param_3;
  if (param_2 == 0) {
    lVar8 = 1;
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    lVar8 = *(long *)(lVar4 + 0xa8);
    *(long *)(lVar4 + 0xa8) = param_2;
  }
  lVar4 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    plVar6 = malloc(0x20);
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    puVar1 = (undefined8 *)(lVar4 + 8);
    if (lVar5 != 0) {
      puVar1 = (undefined8 *)(lVar5 + 0xa8);
    }
    plVar6 = (long *)(**(code **)(*(long *)*puVar1 + 0x30))((long *)*puVar1,0x20,8);
  }
  puVar3 = PTR_DAT_04bd46d8;
  *(undefined4 *)(plVar6 + 3) = 0;
  plVar6[1] = (long)(plVar6 + 1);
  plVar6[2] = (long)(plVar6 + 1);
  *plVar6 = (long)(puVar3 + 0x10);
  param_1[2] = plVar6;
  lVar4 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    plVar6 = malloc(0x20);
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    puVar1 = (undefined8 *)(lVar4 + 8);
    if (lVar5 != 0) {
      puVar1 = (undefined8 *)(lVar5 + 0xa8);
    }
    plVar6 = (long *)(**(code **)(*(long *)*puVar1 + 0x30))((long *)*puVar1,0x20,8);
  }
  *(undefined4 *)(plVar6 + 3) = 0;
  *plVar6 = (long)(puVar3 + 0x10);
  lVar4 = DAT_05ae7600;
  plVar6[1] = (long)(plVar6 + 1);
  plVar6[2] = (long)(plVar6 + 1);
  param_1[3] = plVar6;
  if (lVar4 == 0) {
    plVar6 = malloc(0x20);
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    puVar1 = (undefined8 *)(lVar4 + 8);
    if (lVar5 != 0) {
      puVar1 = (undefined8 *)(lVar5 + 0xa8);
    }
    plVar6 = (long *)(**(code **)(*(long *)*puVar1 + 0x30))((long *)*puVar1,0x20,8);
  }
  puVar3 = PTR_DAT_04bd46c0;
  *(undefined4 *)(plVar6 + 3) = 0;
  plVar6[1] = (long)(plVar6 + 1);
  plVar6[2] = (long)(plVar6 + 1);
  *plVar6 = (long)(puVar3 + 0x10);
  param_1[7] = plVar6;
  lVar4 = DAT_05ae7600;
  __size = (long)*(int *)(param_1 + 9) << 3;
  if (*(int *)(param_1 + 9) < 0) {
    __size = 0xffffffffffffffff;
  }
  if (DAT_05ae7600 == 0) {
    pvVar7 = malloc(__size);
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar6 = (long *)(lVar4 + 8);
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 + 0xa8);
    }
    plVar6 = (long *)*plVar6;
    pvVar7 = (void *)0x0;
    if (plVar6 != (long *)0x0) {
      pvVar7 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,__size,8);
    }
  }
  param_1[8] = pvVar7;
  if (lVar8 != 1) {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    *(long *)(lVar4 + 0xa8) = lVar8;
  }
  return;
}

