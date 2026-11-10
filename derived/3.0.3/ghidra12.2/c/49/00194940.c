
long FUN_00194940(long param_1,long param_2)

{
  if (param_2 != param_1) {
    FUN_001a2ac0(param_1 + 0x10,*(long *)(param_2 + 0x10),*(long *)(param_2 + 0x18),
                 *(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10));
  }
  return param_1;
}

