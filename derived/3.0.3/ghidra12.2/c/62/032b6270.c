
void FUN_032b6270(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined *local_c0;
  char *pcStack_b8;
  undefined *local_b0;
  undefined *puStack_a8;
  undefined *local_a0;
  undefined8 *puStack_98;
  undefined *local_90;
  undefined8 *puStack_88;
  undefined *local_80;
  undefined8 *puStack_78;
  undefined *local_70;
  char *pcStack_68;
  undefined *local_60;
  char *pcStack_58;
  
  lVar1 = param_1 + 8;
  *(undefined8 *)(param_1 + 0x30) = param_2[1];
  *(undefined8 *)(param_1 + 0x20) = param_2[2];
  FUN_032c6b2c(lVar1,3);
  puVar4 = PTR_DAT_04bc8e68;
  puVar2 = PTR_DAT_04bc8e68 + 0x10;
  puStack_98 = &DAT_0407ebb1;
  local_a0 = puVar2;
  FUN_032c7570(lVar1,*param_2,&local_a0);
  FUN_032c6ccc(lVar1);
  pcStack_58 = "Color";
  pcStack_68 = "Color";
  puStack_78 = &DAT_0407ebb1;
  puStack_88 = &DAT_0407ebb1;
  local_90 = puVar2;
  local_80 = puVar2;
  local_70 = puVar2;
  local_60 = puVar2;
  FUN_032c7320(lVar1,&local_60,&local_70,&local_80,&local_90);
  puStack_a8 = &DAT_040a4215;
  local_b0 = puVar2;
  FUN_032c8500(lVar1,&local_b0,0);
  pcStack_b8 = "Release";
  local_c0 = puVar2;
  FUN_032c87e0(lVar1,&local_c0,1);
  lVar1 = param_2[1];
  puVar6 = (undefined *)FUN_00364d70(*param_2,"Indicator");
  puVar3 = PTR_DAT_04bb2120;
  local_70 = *(undefined **)(lVar1 + 0x18);
  pcStack_58 = PTR_DAT_04bb2120;
  if (puVar6 != (undefined *)0x0) {
    pcStack_58 = puVar6;
  }
  local_60 = puVar2;
  plVar7 = (long *)FUN_032d3050(&local_70,local_70,&local_60);
  puVar6 = PTR_DAT_04bc8f38;
  puVar2 = PTR_DAT_04bc8f30;
  if (((*PTR_DAT_04bc8f38 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar5 != 0))
  {
    *(undefined8 *)puVar2 = 0;
    __cxa_guard_release(PTR_DAT_04bc8f38);
  }
  if (plVar7 == (long *)0x0) {
LAB_032b63d8:
    plVar7 = (long *)0x0;
  }
  else {
    puVar8 = (undefined8 *)(**(code **)(*plVar7 + 0x10))(plVar7);
    if (puVar8 != (undefined8 *)puVar2) {
      do {
        puVar8 = (undefined8 *)*puVar8;
      } while (puVar8 != (undefined8 *)puVar2 && puVar8 != (undefined8 *)0x0);
      if (puVar8 == (undefined8 *)0x0) goto LAB_032b63d8;
    }
  }
  *(long **)(param_1 + 0x60) = plVar7;
  puVar9 = (undefined *)FUN_00364d70(*param_2,"IndicatorArea");
  local_70 = *(undefined **)(lVar1 + 0x18);
  local_60 = puVar4 + 0x10;
  pcStack_58 = puVar3;
  if (puVar9 != (undefined *)0x0) {
    pcStack_58 = puVar9;
  }
  plVar7 = (long *)FUN_032d3050(&local_70,local_70,&local_60);
  if (((*puVar6 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar5 != 0)) {
    *(undefined8 *)puVar2 = 0;
    __cxa_guard_release(PTR_DAT_04bc8f38);
  }
  if (plVar7 != (long *)0x0) {
    puVar8 = (undefined8 *)(**(code **)(*plVar7 + 0x10))(plVar7);
    if (puVar8 == (undefined8 *)puVar2) goto LAB_032b6458;
    do {
      puVar8 = (undefined8 *)*puVar8;
    } while (puVar8 != (undefined8 *)puVar2 && puVar8 != (undefined8 *)0x0);
    if (puVar8 != (undefined8 *)0x0) goto LAB_032b6458;
  }
  plVar7 = (long *)0x0;
LAB_032b6458:
  *(long **)(param_1 + 0x68) = plVar7;
  return;
}

