
undefined8 FUN_00323b44(char *param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*param_1 != '\0') {
    return 1;
  }
  if (*(char *)(param_2 + 0x4a8) == '\0') {
    return 0;
  }
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  if ((*(long *)(*(long *)(param_1 + 0x10) + 0x910) == -1) ||
     ((*(int *)(param_1 + 0x340) != 0 && (*(int *)(param_1 + 0x340) < 4)))) {
    uVar1 = FUN_00323c20(param_1,param_2 + 0x4a0,param_2 + 0x4e0);
  }
  else {
    uVar2 = thunk_FUN_00333bcc(param_2,*(long *)(*(long *)(param_1 + 0x10) + 0x910));
    *(undefined8 *)(param_1 + 0x78) = uVar2;
    uVar1 = FUN_00323c20(param_1,param_2 + 0x4a0,param_2 + 0x4e0);
  }
  if ((uVar1 & 1) == 0) {
    FUN_0032c410("ShaderBinary bind error.\n");
    return 0;
  }
  FUN_00323020(param_1,uVar3);
  *param_1 = '\x01';
  return 1;
}

