
void FUN_0383e37c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_04bb3350;
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 == 0) {
    lVar3 = 1;
    lVar4 = *(long *)(param_1 + 0x20);
  }
  else {
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar3 = *(long *)(lVar2 + 0xa8);
    *(long *)(lVar2 + 0xa8) = lVar4;
    lVar4 = *(long *)(param_1 + 0x20);
  }
  if (lVar4 != 0) {
    FUN_03bf3850();
    FUN_03bf3600(*(undefined8 *)(param_1 + 0x20));
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  if (lVar3 != 1) {
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
    *(long *)(lVar4 + 0xa8) = lVar3;
  }
  if (*(long **)(param_1 + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x18) + 0x20))();
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  *(undefined **)(param_1 + 0x30) = PTR_DAT_04c4b988;
  return;
}

