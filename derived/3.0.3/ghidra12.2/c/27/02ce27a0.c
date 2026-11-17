
uint FUN_02ce27a0(long param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x68a5c);
  if (iVar2 == -1) {
    iVar2 = *(int *)(param_1 + 0x68a58);
    if (iVar2 == -1) {
      if (*(int *)(param_1 + 0x68a54) == -1) {
        return (uint)(*(int *)(param_1 + 0x68a50) != -1);
      }
      return *(int *)(param_1 + 0x148) + *(int *)(param_1 + 0x68a54);
    }
    piVar1 = (int *)(**(code **)(*(long *)(param_1 + 0x158) + 0x18))(param_1 + 0x158);
  }
  else {
    piVar1 = (int *)(**(code **)(*(long *)(param_1 + 0xf008) + 0x18))();
  }
  return *piVar1 + iVar2;
}

