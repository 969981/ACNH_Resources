
undefined8 FUN_002c5298(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [16];
  int local_30 [4];
  
  puVar1 = PTR_FUN_04bce208;
  if ((*(long *)(param_1 + 0x60) != 0) && (*(char *)(*(long *)(param_1 + 0x60) + 0x28) != '\0')) {
    *(char **)(param_1 + 0x40) = "NatDetectionJob::StepComplete";
    *(undefined **)(param_1 + 0x30) = puVar1;
    *(undefined8 *)(param_1 + 0x38) = 0;
    return 6;
  }
  FUN_002c474c(local_30,*(undefined8 *)(param_1 + 0x68));
  if (local_30[0] == 0) {
    *(undefined **)(param_1 + 0x30) = PTR_LAB_04bce210;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "NatDetectionJob::StepStart";
    return 0;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  FUN_002296c4(auStack_40,local_30);
  FUN_00220ff8(uVar3,auStack_40);
  (**(code **)(**(long **)(param_1 + 0x68) + 0x10))();
  *(undefined8 *)(param_1 + 0x68) = 0;
  lVar2 = FUN_0022033c();
  if (lVar2 == 0) {
    return 1;
  }
  uVar3 = FUN_0022033c();
  FUN_00220b40(uVar3,0);
  return 1;
}

