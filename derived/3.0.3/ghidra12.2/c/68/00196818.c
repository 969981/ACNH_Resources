
long FUN_00196818(long param_1,undefined1 *param_2)

{
  FUN_0019613c(param_1,0x20);
  if (*(int *)(param_1 + 0x20) == 7) {
    FUN_00193030(*(undefined8 *)(param_1 + 0x10),param_2,4,*(undefined8 *)(param_1 + 0x18));
    *(long *)(param_1 + 0x18) = *(long *)(param_1 + 0x18) + 4;
    *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 0x20;
    return param_1;
  }
  FUN_00195ccc(param_1,*param_2);
  FUN_00195ccc(param_1,param_2[1]);
  FUN_00195ccc(param_1,param_2[2]);
  FUN_00195ccc(param_1,param_2[3]);
  return param_1;
}

