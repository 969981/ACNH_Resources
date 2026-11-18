
void FUN_033d4fa8(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  long *plVar6;
  long lVar7;
  
  puVar2 = PTR_DAT_04bb3350;
  puVar1 = PTR_DAT_04bb2698;
  lVar7 = *(long *)PTR_DAT_04bb2698;
  if (lVar7 == 0) {
    puVar4 = malloc(0xc);
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar4 = (undefined8 *)(lVar7 + 8);
    if (lVar3 != 0) {
      puVar4 = (undefined8 *)(lVar3 + 0xa8);
    }
    puVar4 = (undefined8 *)(**(code **)(*(long *)*puVar4 + 0x30))((long *)*puVar4,0xc,8);
  }
  *puVar4 = 0;
  *(undefined4 *)(puVar4 + 1) = 0x800;
  *param_1 = puVar4;
  lVar7 = *(long *)puVar1;
  if (lVar7 == 0) {
    puVar5 = malloc(4);
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    puVar4 = (undefined8 *)(lVar7 + 8);
    if (lVar3 != 0) {
      puVar4 = (undefined8 *)(lVar3 + 0xa8);
    }
    puVar5 = (undefined4 *)(**(code **)(*(long *)*puVar4 + 0x30))((long *)*puVar4,4,8);
  }
  *puVar5 = 0;
  lVar7 = *(long *)puVar1;
  param_1[1] = puVar5;
  if (lVar7 == 0) {
    puVar5 = malloc(4);
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    puVar4 = (undefined8 *)(lVar7 + 8);
    if (lVar3 != 0) {
      puVar4 = (undefined8 *)(lVar3 + 0xa8);
    }
    puVar5 = (undefined4 *)(**(code **)(*(long *)*puVar4 + 0x30))((long *)*puVar4,4,8);
  }
  *puVar5 = 0;
  lVar7 = *(long *)puVar1;
  param_1[2] = puVar5;
  if (lVar7 == 0) {
    puVar4 = malloc(0x1c);
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    *(undefined1 *)(puVar4 + 3) = 0;
    param_1[3] = puVar4;
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar6 = (long *)(lVar7 + 8);
    if (lVar3 != 0) {
      plVar6 = (long *)(lVar3 + 0xa8);
    }
    plVar6 = (long *)*plVar6;
    puVar4 = (undefined8 *)0x0;
    if (plVar6 != (long *)0x0) {
      puVar4 = (undefined8 *)(**(code **)(*plVar6 + 0x30))(plVar6,0x1c,8);
    }
    lVar7 = *(long *)puVar1;
    *(undefined1 *)(puVar4 + 3) = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    *puVar4 = 0;
    param_1[3] = puVar4;
    if (lVar7 != 0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
      puVar4 = (undefined8 *)(lVar7 + 8);
      if (lVar3 != 0) {
        puVar4 = (undefined8 *)(lVar3 + 0xa8);
      }
      puVar4 = (undefined8 *)(**(code **)(*(long *)*puVar4 + 0x30))((long *)*puVar4,0xc,8);
      goto LAB_033d517c;
    }
  }
  puVar4 = malloc(0xc);
LAB_033d517c:
  *puVar4 = 0;
  *(undefined4 *)(puVar4 + 1) = 0;
  param_1[4] = puVar4;
  return;
}

