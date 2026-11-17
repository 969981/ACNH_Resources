
void FUN_030be870(long param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined **local_60;
  undefined8 uStack_58;
  undefined8 *local_50;
  undefined1 *puStack_48;
  
  puStack_48 = (undefined1 *)&local_60;
  uStack_58 = *(undefined8 *)(param_1 + 0x2c0);
  local_50 = (undefined8 *)(PTR_DAT_04bc5180 + 0x10);
  local_60 = &PTR_LAB_04b2b250;
  if (*(long *)(param_1 + 0x40) != param_1 + 0x38) {
    lVar3 = (long)*(int *)(param_1 + 0x4c);
    lVar2 = *(long *)(param_1 + 0x40) - lVar3;
    puStack_48 = (undefined1 *)&local_60;
    do {
      uVar1 = (*(code *)*local_50)(&local_50,lVar2);
      if ((uVar1 & 1) != 0) break;
      lVar2 = *(long *)(lVar2 + lVar3 + 8) - lVar3;
    } while (lVar2 != (param_1 + 0x38) - lVar3);
  }
  FUN_03d66690(param_1);
  *(bool *)(param_1 + 0x270) = *(long *)(*(long *)(param_1 + 0x208) + 8) != 0;
  FUN_03d82034(param_1);
  return;
}

