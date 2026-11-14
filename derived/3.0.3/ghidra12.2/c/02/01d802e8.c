
void FUN_01d802e8(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  void *pvVar6;
  long lVar7;
  long local_50;
  undefined4 local_48;
  
  puVar3 = PTR_DAT_04bb3350;
  if (param_2 == 0) {
    lVar7 = 1;
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)(lVar4 + 0xa8);
    *(long *)(lVar4 + 0xa8) = param_2;
  }
  puVar2 = PTR_DAT_04bb2698;
  local_48 = 100;
  lVar4 = *(long *)PTR_DAT_04bb2698;
  local_50 = param_2;
  if (lVar4 == 0) {
    pvVar6 = malloc(0x30);
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
    puVar1 = (undefined8 *)(lVar4 + 8);
    if (lVar5 != 0) {
      puVar1 = (undefined8 *)(lVar5 + 0xa8);
    }
    pvVar6 = (void *)(**(code **)(*(long *)*puVar1 + 0x30))((long *)*puVar1,0x30,8);
  }
  FUN_03bf6cf4(pvVar6,&local_50);
  *param_1 = pvVar6;
  lVar4 = *(long *)puVar2;
  local_48 = 1;
  if (lVar4 == 0) {
    pvVar6 = malloc(0x30);
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
    puVar1 = (undefined8 *)(lVar4 + 8);
    if (lVar5 != 0) {
      puVar1 = (undefined8 *)(lVar5 + 0xa8);
    }
    pvVar6 = (void *)(**(code **)(*(long *)*puVar1 + 0x30))((long *)*puVar1,0x30,8);
  }
  FUN_03bf6cf4(pvVar6,&local_50);
  param_1[1] = pvVar6;
  if (lVar7 != 1) {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
    *(long *)(lVar4 + 0xa8) = lVar7;
  }
  return;
}

