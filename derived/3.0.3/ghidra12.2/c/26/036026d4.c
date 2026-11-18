
void FUN_036026d4(long param_1)

{
  undefined *puVar1;
  int iVar2;
  
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  iVar2 = *(int *)(param_1 + 0xa8);
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  puVar1 = PTR_DAT_04bdf328;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  if ((iVar2 == 2) || (*(char *)(*(long *)(param_1 + 8) + 0x149) != '\0')) {
    (**(code **)(**(long **)puVar1 + 0x18))(*(long **)puVar1,*(undefined8 *)(param_1 + 0x18));
    iVar2 = *(int *)(param_1 + 0xa8);
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  if ((iVar2 == 6) && (*(short *)(param_1 + 200) != 0)) {
    (**(code **)(**(long **)puVar1 + 0x18))(*(long **)puVar1,*(undefined8 *)(param_1 + 0xd0));
    *(undefined8 *)(param_1 + 0xd0) = 0;
  }
  (**(code **)(**(long **)puVar1 + 0x18))(*(long **)puVar1,*(undefined8 *)(param_1 + 8));
  (**(code **)(**(long **)puVar1 + 0x18))(*(long **)puVar1,*(undefined8 *)(param_1 + 0x10));
  (**(code **)(**(long **)puVar1 + 0x18))(*(long **)puVar1,*(undefined8 *)(param_1 + 0x20));
  (**(code **)(**(long **)puVar1 + 0x18))(*(long **)puVar1,*(undefined8 *)(param_1 + 0x28));
  (**(code **)(**(long **)puVar1 + 0x18))(*(long **)puVar1,*(undefined8 *)(param_1 + 0x30));
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  return;
}

