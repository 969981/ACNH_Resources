
undefined8 FUN_00278ea4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  undefined4 uVar5;
  long *plVar6;
  undefined8 uVar7;
  int iVar8;
  
  puVar1 = PTR_DAT_04bcd350;
  uVar5 = FUN_0026be6c(*(undefined8 *)PTR_DAT_04bcd350);
  FUN_00278e08(param_1,uVar5,0);
  bVar3 = FUN_0026bfe0(*(undefined8 *)puVar1);
  if (0x1f < bVar3) {
    return 0;
  }
  bVar3 = *(byte *)(param_1 + 0x90);
  if (0x1f < bVar3) {
    return 0;
  }
  bVar4 = FUN_0026bfe0(*(undefined8 *)puVar1);
  if (bVar3 == bVar4) {
    uVar7 = 1;
    iVar8 = *(int *)(param_1 + 0x60) + -500;
  }
  else {
    iVar8 = *(int *)(param_1 + 0x60);
    uVar7 = 2;
    *(undefined2 *)(param_1 + 0xb2) = 0xfd01;
    *(undefined8 *)(param_1 + 0xb8) = 0;
  }
  lVar2 = DAT_04c5fbb0;
  plVar6 = (long *)FUN_00228380();
  *(long *)(param_1 + 0x58) = *(long *)(lVar2 + 0x30) + *plVar6 * (long)iVar8;
  return uVar7;
}

