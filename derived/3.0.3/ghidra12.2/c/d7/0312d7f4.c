
void FUN_0312d7f4(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *local_e8;
  undefined1 *puStack_e0;
  undefined **local_d8;
  undefined4 local_d0;
  undefined2 local_cc;
  byte local_ca;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined *local_b8;
  undefined1 *local_b0;
  undefined4 local_a8;
  undefined1 local_a4 [63];
  undefined1 local_65;
  
  uVar7 = *(undefined8 *)(param_1 + 0x98);
  lVar8 = *(long *)PTR_DAT_04bb2698;
  if (lVar8 == 0) {
    pvVar5 = malloc(0x30);
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar4 = (long *)(lVar8 + 8);
    if (lVar3 != 0) {
      plVar4 = (long *)(lVar3 + 0xa8);
    }
    plVar4 = (long *)*plVar4;
    if (plVar4 == (long *)0x0) goto LAB_0312d88c;
    pvVar5 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,0x30,8);
  }
  if (pvVar5 != (void *)0x0) {
    *(void **)(param_1 + 0x220) = pvVar5;
    *(undefined4 *)(param_1 + 0x218) = 6;
  }
LAB_0312d88c:
  local_65 = 0;
  local_a8 = 0x40;
  local_a4[0] = 0;
  lVar8 = *(long *)(param_1 + 0x210);
  local_b0 = local_a4;
  local_b8 = PTR_DAT_04bb2bc0 + 0x10;
  FUN_038d1270(&local_b8,"StampCtrlSeq%02d",0);
  puVar2 = PTR_DAT_04bb2718;
  local_d8 = &PTR_LAB_04b02c08;
  local_d0 = *(undefined4 *)(*(long *)(*(long *)PTR_DAT_04bb2718 + 0x418) + 0xc);
  local_cc = 1;
  local_c8 = 0xffffffff;
  local_ca = *(byte *)(param_1 + 0x1f8);
  if (7 < local_ca) {
    local_ca = 0xff;
  }
  local_c0 = **(undefined8 **)(lVar8 + 0x348);
  (**(code **)(local_b8 + 0x18))(&local_b8);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  puStack_e0 = local_b0;
  local_e8 = puVar1;
  uVar6 = FUN_0312dca8(uVar7,&local_e8,param_1,&local_d8);
  **(undefined8 **)(param_1 + 0x220) = uVar6;
  lVar8 = *(long *)(param_1 + 0x210);
  FUN_038d1270(&local_b8,"StampCtrlSeq%02d",1);
  local_d8 = &PTR_LAB_04b02c08;
  local_d0 = *(undefined4 *)(*(long *)(*(long *)puVar2 + 0x418) + 0xc);
  local_cc = 1;
  local_c8 = 0xffffffff;
  local_ca = *(byte *)(param_1 + 0x1f8);
  if (7 < local_ca) {
    local_ca = 0xff;
  }
  local_c0 = *(undefined8 *)(*(long *)(lVar8 + 0x348) + (ulong)(1 < *(uint *)(lVar8 + 0x340)) * 8);
  (**(code **)(local_b8 + 0x18))(&local_b8);
  puStack_e0 = local_b0;
  local_e8 = puVar1;
  uVar6 = FUN_0312dca8(uVar7,&local_e8,param_1,&local_d8);
  *(undefined8 *)(*(long *)(param_1 + 0x220) + (ulong)(1 < *(uint *)(param_1 + 0x218)) * 8) = uVar6;
  lVar8 = *(long *)(param_1 + 0x210);
  FUN_038d1270(&local_b8,"StampCtrlSeq%02d",2);
  local_d8 = &PTR_LAB_04b02c08;
  local_d0 = *(undefined4 *)(*(long *)(*(long *)puVar2 + 0x418) + 0xc);
  local_cc = 1;
  local_c8 = 0xffffffff;
  local_ca = *(byte *)(param_1 + 0x1f8);
  if (7 < local_ca) {
    local_ca = 0xff;
  }
  local_c0 = *(undefined8 *)
              (*(long *)(lVar8 + 0x348) + (ulong)(2 < *(uint *)(lVar8 + 0x340)) * 0x10);
  (**(code **)(local_b8 + 0x18))(&local_b8);
  puStack_e0 = local_b0;
  local_e8 = puVar1;
  uVar6 = FUN_0312dca8(uVar7,&local_e8,param_1,&local_d8);
  *(undefined8 *)(*(long *)(param_1 + 0x220) + (ulong)(2 < *(uint *)(param_1 + 0x218)) * 0x10) =
       uVar6;
  lVar8 = *(long *)(param_1 + 0x210);
  FUN_038d1270(&local_b8,"StampCtrlSeq%02d",3);
  local_d8 = &PTR_LAB_04b02c08;
  local_d0 = *(undefined4 *)(*(long *)(*(long *)puVar2 + 0x418) + 0xc);
  local_cc = 1;
  local_c8 = 0xffffffff;
  local_ca = *(byte *)(param_1 + 0x1f8);
  if (7 < local_ca) {
    local_ca = 0xff;
  }
  lVar3 = 0x18;
  if (*(uint *)(lVar8 + 0x340) < 4) {
    lVar3 = 0;
  }
  local_c0 = *(undefined8 *)(*(long *)(lVar8 + 0x348) + lVar3);
  (**(code **)(local_b8 + 0x18))(&local_b8);
  puStack_e0 = local_b0;
  local_e8 = puVar1;
  uVar6 = FUN_0312dca8(uVar7,&local_e8,param_1,&local_d8);
  lVar8 = 0x18;
  if (*(uint *)(param_1 + 0x218) < 4) {
    lVar8 = 0;
  }
  *(undefined8 *)(*(long *)(param_1 + 0x220) + lVar8) = uVar6;
  lVar8 = *(long *)(param_1 + 0x210);
  FUN_038d1270(&local_b8,"StampCtrlSeq%02d",4);
  local_d8 = &PTR_LAB_04b02c08;
  local_d0 = *(undefined4 *)(*(long *)(*(long *)puVar2 + 0x418) + 0xc);
  local_cc = 1;
  local_c8 = 0xffffffff;
  local_ca = *(byte *)(param_1 + 0x1f8);
  if (7 < local_ca) {
    local_ca = 0xff;
  }
  local_c0 = *(undefined8 *)
              (*(long *)(lVar8 + 0x348) + (ulong)(4 < *(uint *)(lVar8 + 0x340)) * 0x20);
  (**(code **)(local_b8 + 0x18))(&local_b8);
  puStack_e0 = local_b0;
  local_e8 = puVar1;
  uVar6 = FUN_0312dca8(uVar7,&local_e8,param_1,&local_d8);
  *(undefined8 *)(*(long *)(param_1 + 0x220) + (ulong)(4 < *(uint *)(param_1 + 0x218)) * 0x20) =
       uVar6;
  lVar8 = *(long *)(param_1 + 0x210);
  FUN_038d1270(&local_b8,"StampCtrlSeq%02d",5);
  local_d8 = &PTR_LAB_04b02c08;
  local_d0 = *(undefined4 *)(*(long *)(*(long *)puVar2 + 0x418) + 0xc);
  local_cc = 1;
  local_c8 = 0xffffffff;
  local_ca = *(byte *)(param_1 + 0x1f8);
  if (7 < local_ca) {
    local_ca = 0xff;
  }
  lVar3 = 0x28;
  if (*(uint *)(lVar8 + 0x340) < 6) {
    lVar3 = 0;
  }
  local_c0 = *(undefined8 *)(*(long *)(lVar8 + 0x348) + lVar3);
  (**(code **)(local_b8 + 0x18))(&local_b8);
  puStack_e0 = local_b0;
  local_e8 = puVar1;
  uVar7 = FUN_0312dca8(uVar7,&local_e8,param_1,&local_d8);
  lVar8 = 0x28;
  if (*(uint *)(param_1 + 0x218) < 6) {
    lVar8 = 0;
  }
  *(undefined8 *)(*(long *)(param_1 + 0x220) + lVar8) = uVar7;
  return;
}

