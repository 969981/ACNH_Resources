
undefined8 FUN_0024c6bc(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  int local_30 [4];
  
  if (*(char *)(*(long *)(param_1 + 0x58) + 0x28) != '\0') {
    if (**(int **)(param_1 + 0x60) == 1) {
      FUN_002210f0();
    }
    *(undefined **)(param_1 + 0x30) = PTR_LAB_04bcd5a8;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "LdnHostMigrationJob::WaitForCancel";
    return 0;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x60);
  lVar3 = (*(long **)(param_1 + 0x78))[0x81];
  uVar1 = (**(code **)(**(long **)(param_1 + 0x78) + 0x140))();
  FUN_0024b978(local_30,lVar3,uVar4,uVar1,0);
  if (local_30[0] == 0) {
    FUN_00258064(*(undefined8 *)(param_1 + 0x78));
    lVar2 = *(long *)(param_1 + 0x78);
    *(undefined1 *)(lVar2 + 0x485) = 0;
    *(undefined1 *)(lVar2 + 0x571) = 1;
    FUN_002211bc(lVar3,1);
    *(undefined8 *)(param_1 + 0x30) = 0x40;
    *(undefined8 *)(param_1 + 0x38) = 1;
    *(char **)(param_1 + 0x40) = "LdnHostMigrationJob::WaitCreateNetwork";
    return 5;
  }
  return 5;
}

