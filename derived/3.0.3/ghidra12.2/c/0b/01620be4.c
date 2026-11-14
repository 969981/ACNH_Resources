
void FUN_01620be4(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  long lVar7;
  
  puVar3 = PTR_DAT_04bb3350;
  puVar2 = PTR_DAT_04bb2698;
  lVar7 = *(long *)PTR_DAT_04bb2698;
  if (lVar7 == 0) {
    puVar5 = malloc(0xafce8);
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar5 = (undefined8 *)(lVar7 + 8);
    if (lVar4 != 0) {
      puVar5 = (undefined8 *)(lVar4 + 0xa8);
    }
    puVar5 = (undefined8 *)(**(code **)(*(long *)*puVar5 + 0x30))((long *)*puVar5,0xafce8,8);
  }
  *(undefined4 *)(puVar5 + 3) = 0;
  *puVar5 = 0;
  puVar5[1] = (long)puVar5 + 0x1c;
  puVar1 = puVar5 + 0x15f94;
  puVar5[2] = 90000;
  puVar5[0x15f96] = 0x2800000000;
  *(undefined4 *)(puVar5 + 0x15f99) = 0;
  *(undefined8 *)((long)puVar5 + 0xafccc) = 0x28;
  *(undefined8 *)((long)puVar5 + 0xafcd4) = 0;
  puVar5[0x15f9c] = 0;
  *puVar1 = puVar1;
  puVar5[0x15f95] = puVar1;
  puVar5[0x15f97] = puVar5 + 0x15f97;
  puVar5[0x15f98] = puVar5 + 0x15f97;
  lVar7 = *(long *)puVar3;
  lVar4 = *(long *)puVar2;
  *(undefined8 **)(param_1 + 0x38) = puVar5;
  lVar7 = nn::os::GetTlsValue(*(undefined4 *)(lVar7 + 0x68));
  puVar1 = (undefined8 *)(lVar4 + 8);
  if (lVar7 != 0) {
    puVar1 = (undefined8 *)(lVar7 + 0xa8);
  }
  FUN_030b4090(puVar5,*puVar1);
  lVar7 = *(long *)puVar2;
  if (lVar7 == 0) {
    plVar6 = malloc(0x1d0);
  }
  else {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
    plVar6 = (long *)(lVar7 + 8);
    if (lVar4 != 0) {
      plVar6 = (long *)(lVar4 + 0xa8);
    }
    plVar6 = (long *)*plVar6;
    if (plVar6 == (long *)0x0) {
      plVar6 = (long *)0x0;
    }
    else {
      plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,0x1d0,8);
    }
  }
  lVar7 = *(long *)(param_1 + 0x38);
  FUN_030b1658(plVar6);
  puVar2 = PTR_DAT_04bc81c0;
  plVar6[0x36] = lVar7;
  plVar6[0x37] = 0;
  *(undefined1 *)(plVar6 + 0x38) = 0;
  *(undefined8 *)((long)plVar6 + 0x1c4) = 0;
  *(undefined4 *)((long)plVar6 + 0x1cc) = 0;
  *plVar6 = (long)(puVar2 + 0x10);
  plVar6[4] = (long)(puVar2 + 0x98);
  *(long **)(param_1 + 0x40) = plVar6;
  return;
}

