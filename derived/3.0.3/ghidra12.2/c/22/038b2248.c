
undefined8 FUN_038b2248(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*(char *)(param_2 + 0x28) == '\0' || *(char *)(param_2 + 0x29) != '\0') ||
     (iVar1 = nn::fs::FlushFile(*(undefined8 *)(param_2 + 0x18)), iVar1 == 0)) {
    nn::fs::CloseFile(*(undefined8 *)(param_2 + 0x18));
    uVar2 = 1;
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  else {
    *(int *)(param_1 + 0x7c) = iVar1;
    nn::fs::CloseFile(*(undefined8 *)(param_2 + 0x18));
    uVar2 = 0;
  }
  return uVar2;
}

