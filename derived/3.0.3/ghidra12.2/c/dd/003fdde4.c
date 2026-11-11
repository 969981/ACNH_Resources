
long FUN_003fdde4(long param_1,long param_2)

{
  *(undefined2 *)(param_1 + 8) = *(undefined2 *)(param_2 + 8);
  if (param_2 != param_1) {
    FUN_01c68940(param_1 + 0x10,*(long *)(param_2 + 0x10),*(long *)(param_2 + 0x18),
                 *(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10) >> 3);
  }
  return param_1;
}

