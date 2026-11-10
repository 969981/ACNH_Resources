
void FUN_0027b624(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_DAT_04bcd350;
  lVar2 = FUN_0026c894(*(undefined8 *)PTR_DAT_04bcd350);
  if (lVar2 != 0) {
    if (*(int *)(param_1 + 100) != 0) {
      uVar3 = FUN_0026c894(*(undefined8 *)puVar1);
      FUN_002840f0(uVar3,*(undefined4 *)(param_1 + 100));
    }
    uVar3 = FUN_0026c894(*(undefined8 *)puVar1);
    FUN_002840f0(uVar3,*(undefined4 *)(param_1 + 0x68));
    uVar3 = FUN_0026c894(*(undefined8 *)puVar1);
    FUN_002840f0(uVar3,*(undefined4 *)(param_1 + 0x6c));
    uVar3 = FUN_0026c894(*(undefined8 *)puVar1);
    FUN_002840f0(uVar3,*(undefined4 *)(param_1 + 0x70));
  }
  *(undefined8 *)(param_1 + 100) = 0;
  *(undefined8 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0xba) = 0x300fd;
  *(undefined8 *)(param_1 + 0x58) = 0;
  return;
}

