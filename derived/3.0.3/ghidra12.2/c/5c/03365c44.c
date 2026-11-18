
void FUN_03365c44(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  
  param_1[2] = 0;
  *param_1 = &PTR_FUN_04b20688;
  param_1[1] = 0;
  FUN_03365dc4(param_1 + 3);
  *(undefined4 *)(param_1 + 0x114) = 0;
  puVar2 = PTR_DAT_04bb3350;
  puVar1 = PTR_DAT_04bb2698;
  lVar7 = *(long *)PTR_DAT_04bb2698;
  if (lVar7 == 0) {
    puVar6 = malloc(0x40);
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar5 = (long *)(lVar7 + 8);
    if (lVar4 != 0) {
      plVar5 = (long *)(lVar4 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
    puVar6 = (undefined8 *)0x0;
    if (plVar5 != (long *)0x0) {
      puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,0x40,8);
    }
  }
  *(undefined1 *)(puVar6 + 1) = 0;
  *puVar6 = &PTR_LAB_04b20608;
  puVar3 = PTR_DAT_04bdf1d8;
  lVar7 = *(long *)puVar1;
  puVar6[4] = 0;
  puVar6[5] = 0;
  puVar6[6] = 0;
  *(undefined1 *)(puVar6 + 7) = 0;
  puVar6[2] = 0;
  puVar6[3] = puVar3 + 0x10;
  param_1[1] = puVar6;
  if (lVar7 == 0) {
    puVar6 = malloc(0x80);
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    puVar6 = (undefined8 *)(lVar7 + 8);
    if (lVar4 != 0) {
      puVar6 = (undefined8 *)(lVar4 + 0xa8);
    }
    puVar6 = (undefined8 *)(**(code **)(*(long *)*puVar6 + 0x30))((long *)*puVar6,0x80,8);
  }
  *(undefined1 *)(puVar6 + 1) = 0;
  puVar6[2] = 0;
  puVar6[3] = puVar3 + 0x10;
  *puVar6 = &PTR_LAB_04b20638;
  *(undefined8 *)((long)puVar6 + 0x3c) = 0x1a00000001;
  puVar6[6] = 0;
  *(undefined1 *)(puVar6 + 7) = 0;
  *(undefined4 *)(puVar6 + 0xb) = 0x20;
  puVar6[4] = 0;
  puVar6[5] = 0;
  *(undefined1 *)((long)puVar6 + 0x5c) = 0;
  puVar1 = PTR_DAT_04bb2028 + 0x10;
  *(undefined1 *)((long)puVar6 + 0x7b) = 0;
  puVar6[9] = puVar1;
  puVar6[10] = (undefined1 *)((long)puVar6 + 0x5c);
  param_1[2] = puVar6;
  FUN_03368990(0);
  return;
}

