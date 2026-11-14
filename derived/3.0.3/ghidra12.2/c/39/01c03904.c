
void FUN_01c03904(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  
  *param_1 = param_2;
  puVar2 = PTR_DAT_04bb3350;
  puVar1 = PTR_DAT_04bb2698;
  lVar6 = *(long *)PTR_DAT_04bb2698;
  if (lVar6 == 0) {
    puVar4 = malloc(0x10);
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar4 = (undefined8 *)(lVar6 + 8);
    if (lVar3 != 0) {
      puVar4 = (undefined8 *)(lVar3 + 0xa8);
    }
    puVar4 = (undefined8 *)(**(code **)(*(long *)*puVar4 + 0x30))((long *)*puVar4,0x10,8);
  }
  *puVar4 = 0;
  lVar6 = *(long *)puVar1;
  *(undefined4 *)(puVar4 + 1) = 0;
  param_1[1] = puVar4;
  if (lVar6 == 0) {
    puVar4 = malloc(0x3cf8);
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    plVar5 = (long *)(lVar6 + 8);
    if (lVar3 != 0) {
      plVar5 = (long *)(lVar3 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
    if (plVar5 == (long *)0x0) {
      puVar4 = (undefined8 *)0x0;
    }
    else {
      puVar4 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,0x3cf8,8);
    }
  }
  FUN_01b9c210(puVar4);
  puVar4[0x45b] = param_3;
  *puVar4 = &PTR_LAB_04a3ee18;
  puVar4[0x45c] = 0;
  *(undefined4 *)(puVar4 + 0x45d) = 0;
  memset(puVar4 + 0x45e,0,0x1a08);
  FUN_01beb8d0(puVar4 + 0x45e);
  FUN_01beb8d0(puVar4 + 0x4d5);
  FUN_01beb8d0(puVar4 + 0x54c);
  FUN_01beb8d0(puVar4 + 0x5c3);
  FUN_01beb8d0(puVar4 + 0x63a);
  FUN_01beb8d0(puVar4 + 0x6b1);
  FUN_01beb8d0(puVar4 + 0x728);
  lVar6 = *(long *)puVar1;
  param_1[2] = puVar4;
  if (lVar6 == 0) {
    puVar4 = malloc(0x10);
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
    puVar4 = (undefined8 *)(lVar6 + 8);
    if (lVar3 != 0) {
      puVar4 = (undefined8 *)(lVar3 + 0xa8);
    }
    puVar4 = (undefined8 *)(**(code **)(*(long *)*puVar4 + 0x30))((long *)*puVar4,0x10,8);
  }
  *puVar4 = 0;
  *(undefined4 *)(puVar4 + 1) = 0;
  param_1[3] = puVar4;
  param_1[4] = 0;
  *(undefined2 *)(param_1 + 7) = 0;
  param_1[5] = 0xffffffff00000000;
  param_1[6] = 0xffffffffffffffff;
  return;
}

