
void FUN_02010e28(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  *param_1 = &PTR_LAB_04a6e1f0;
  puVar1 = PTR_DAT_04bb3350;
  lVar5 = *(long *)(param_1[9] + 0x240);
  if (lVar5 == 0) {
    lVar4 = 1;
    plVar3 = (long *)param_1[0xc13];
  }
  else {
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar4 = *(long *)(lVar2 + 0xa8);
    *(long *)(lVar2 + 0xa8) = lVar5;
    plVar3 = (long *)param_1[0xc13];
  }
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x18))();
  }
  if ((long *)param_1[0xc14] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xc14] + 0x18))();
  }
  if ((long *)param_1[0xc15] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xc15] + 0x18))();
  }
  if ((long *)param_1[0xc16] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xc16] + 0x18))();
  }
  if ((long *)param_1[0xc17] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xc17] + 0x18))();
  }
  if (lVar4 != 1) {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
    *(long *)(lVar5 + 0xa8) = lVar4;
  }
  FUN_016fde30(param_1);
  return;
}

