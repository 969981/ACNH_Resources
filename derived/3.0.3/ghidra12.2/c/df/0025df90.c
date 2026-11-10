
undefined8 FUN_0025df90(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 auStack_58 [16];
  undefined *local_48;
  undefined1 auStack_40 [32];
  
  lVar3 = *(long *)(param_1 + 0x178);
  if (0 < *(int *)(param_1 + 0x188)) {
    iVar1 = 0;
    if (*(int *)(param_1 + 0x180) <= *(int *)(param_1 + 0x184)) {
      iVar1 = *(int *)(param_1 + 0x180);
    }
    lVar3 = lVar3 + (long)(*(int *)(param_1 + 0x184) - iVar1) * 0x28;
  }
  FUN_0022726c(&local_48,lVar3);
  if (0 < *(int *)(param_1 + 0x188)) {
    *(int *)(param_1 + 0x188) = *(int *)(param_1 + 0x188) + -1;
    iVar1 = 0;
    if (*(int *)(param_1 + 0x184) + 1 < *(int *)(param_1 + 0x180)) {
      iVar1 = *(int *)(param_1 + 0x184) + 1;
    }
    *(int *)(param_1 + 0x184) = iVar1;
  }
  FUN_0025e190(auStack_58,*(undefined8 *)(param_1 + 0x58),param_1 + 400,&local_48);
  FUN_002211bc(*(undefined8 *)(param_1 + 0x58),1);
  puVar2 = PTR_LAB_04bcd6e8;
  *(char **)(param_1 + 0x40) = "LocalEjectClientListCheckJob::WaitEjectTargetClient";
  *(undefined **)(param_1 + 0x30) = puVar2;
  *(undefined8 *)(param_1 + 0x38) = 0;
  local_48 = PTR_DAT_04bcba18 + 0x10;
  FUN_0021f584(auStack_40);
  return 5;
}

