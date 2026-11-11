
void FUN_0049f9b0(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = param_1[1];
  *param_1 = &PTR_FUN_04866d10;
  if (lVar2 == 0) {
    return;
  }
  FUN_00454810(lVar2 + 0x58);
  FUN_0043d280(lVar2 + 0x48);
  puVar1 = PTR_DAT_048607b8;
  *(undefined4 *)(lVar2 + 0x40) = 0;
  if ((-1 < (int)*(uint *)(lVar2 + 0x44)) && (*(long *)(lVar2 + 0x38) != 0)) {
    FUN_00421f90(puVar1,*(long *)(lVar2 + 0x38),0x10,*(uint *)(lVar2 + 0x44) & 0x3fffffff);
  }
  *(undefined8 *)(lVar2 + 0x38) = 0;
  *(undefined4 *)(lVar2 + 0x44) = 0x80000000;
  FUN_0043d280(lVar2 + 0x28);
  *(undefined4 *)(lVar2 + 0x20) = 0;
  if ((-1 < (int)*(uint *)(lVar2 + 0x24)) && (*(long *)(lVar2 + 0x18) != 0)) {
    FUN_00421f90(puVar1,*(long *)(lVar2 + 0x18),0x10,*(uint *)(lVar2 + 0x24) & 0x3fffffff);
  }
  *(undefined8 *)(lVar2 + 0x18) = 0;
  *(undefined4 *)(lVar2 + 0x24) = 0x80000000;
  FUN_00438870(lVar2,0x440);
  return;
}

