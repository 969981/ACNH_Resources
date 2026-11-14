
void FUN_01867bbc(long param_1)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 uVar3;
  undefined **local_30;
  undefined *puStack_28;
  
  *(undefined1 *)(param_1 + 0x4d4) = 0;
  *(undefined4 *)(param_1 + 0x4d0) = 0x1e;
  *(undefined8 *)(param_1 + 0x4c8) = 0;
  local_30 = &PTR_LAB_048f9770;
  puStack_28 = &DAT_0407c690;
  puVar1 = (undefined4 *)(**(code **)(*(long *)(*(long *)(param_1 + 0x4b8) + 200) + 0xf0))();
  uVar3 = *puVar1;
  if ((*(long *)(param_1 + 0x48) != 0) &&
     (lVar2 = *(long *)(*(long *)(param_1 + 0x48) + 0x60), lVar2 != 0)) {
    FUN_0073d870(lVar2,&local_30,10,0,0);
  }
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x3d0) + 0x60) + 0x1138) != 0) {
    FUN_03850760(uVar3);
  }
  FUN_01815e0c(param_1,*(undefined4 *)(param_1 + 0x280),param_1 + 0x328);
  *(undefined4 *)(param_1 + 0x4f4) = 1;
  return;
}

