
void FUN_032e465c(long param_1,undefined8 *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined *local_a0;
  undefined ***local_98;
  undefined **local_90;
  long lStack_88;
  undefined *local_70;
  undefined8 *puStack_68;
  undefined *local_60;
  undefined8 *puStack_58;
  undefined *local_50;
  undefined *puStack_48;
  
  FUN_032873d0();
  local_98 = &local_90;
  local_90 = &PTR_LAB_04b1c378;
  lStack_88 = param_1;
  local_a0 = PTR_DAT_04bc8e70 + 0x10;
  plVar5 = *(long **)(param_1 + 0x4e8);
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))(plVar5);
    if (local_98 == (undefined ***)0x0) {
      *(undefined8 *)(param_1 + 0x4e8) = 0;
      goto LAB_032e46f8;
    }
  }
  uVar4 = (*(code *)(*local_98)[3])(local_98,param_1 + 0x4f0);
  *(undefined8 *)(param_1 + 0x4e8) = uVar4;
  if (local_98 != (undefined ***)0x0) {
    (*(code *)(*local_98)[1])();
  }
LAB_032e46f8:
  lVar1 = param_1 + 0x590;
  *(undefined8 *)(param_1 + 0x5b8) = param_2[1];
  *(undefined8 *)(param_1 + 0x5a8) = *param_2;
  FUN_032c6ccc(lVar1);
  puVar3 = PTR_DAT_04bb2120;
  puVar2 = PTR_DAT_04bc8e68 + 0x10;
  puStack_58 = &DAT_0407ebb1;
  local_98 = (undefined ***)PTR_DAT_04bb2120;
  if (PTR_s_ChangeOffToOn_04c4a068 != (undefined *)0x0) {
    local_98 = (undefined ***)PTR_s_ChangeOffToOn_04c4a068;
  }
  puStack_68 = &DAT_0407ebb1;
  local_a0 = puVar2;
  local_70 = puVar2;
  local_60 = puVar2;
  local_50 = puVar2;
  puStack_48 = (undefined *)local_98;
  FUN_032c7320(lVar1,&local_a0,&local_50,&local_60,&local_70);
  puStack_58 = &DAT_0407ebb1;
  puStack_68 = &DAT_0407ebb1;
  local_98 = (undefined ***)puVar3;
  if (PTR_s_ChangeOnToOff_04c4a070 != (undefined *)0x0) {
    local_98 = (undefined ***)PTR_s_ChangeOnToOff_04c4a070;
  }
  local_a0 = puVar2;
  local_70 = puVar2;
  local_60 = puVar2;
  local_50 = puVar2;
  puStack_48 = (undefined *)local_98;
  FUN_032c7320(lVar1,&local_a0,&local_50,&local_60,&local_70);
  puStack_58 = &DAT_0407ebb1;
  puStack_68 = &DAT_0407ebb1;
  local_98 = (undefined ***)puVar3;
  if (PTR_s_ChangeOnToCaps_04c4a078 != (undefined *)0x0) {
    local_98 = (undefined ***)PTR_s_ChangeOnToCaps_04c4a078;
  }
  local_a0 = puVar2;
  local_70 = puVar2;
  local_60 = puVar2;
  local_50 = puVar2;
  puStack_48 = (undefined *)local_98;
  FUN_032c7320(lVar1,&local_a0,&local_50,&local_60,&local_70);
  puStack_58 = &DAT_0407ebb1;
  puStack_68 = &DAT_0407ebb1;
  local_98 = (undefined ***)puVar3;
  if (DAT_04c4a080 != (undefined *)0x0) {
    local_98 = (undefined ***)DAT_04c4a080;
  }
  local_a0 = puVar2;
  local_70 = puVar2;
  local_60 = puVar2;
  local_50 = puVar2;
  puStack_48 = (undefined *)local_98;
  FUN_032c7320(lVar1,&local_a0,&local_50,&local_60,&local_70);
  return;
}

