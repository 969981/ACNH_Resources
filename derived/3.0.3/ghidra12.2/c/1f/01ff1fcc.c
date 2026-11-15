
undefined8 FUN_01ff1fcc(long *param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  
  uVar2 = FUN_01ff20a4();
  if ((uVar2 & 1) == 0) {
    iVar1 = *(int *)((long)param_1 + 0x77f4);
    if (iVar1 != 0x10) {
      if (iVar1 == 0x3e) {
        return 0;
      }
      if (*(uint *)(param_1 + 0xef6) == 0x10) {
        return 0;
      }
      if (iVar1 == 0x3f) {
        return 0;
      }
      if ((*(uint *)(param_1 + 0xef6) & 0xfffffffe) == 0x3e) {
        return 0;
      }
      if ((*(int *)(param_1[2] + 0x360) != 0x13) && (*(int *)(param_1[2] + 0x378) != 0x13)) {
        plVar3 = (long *)FUN_016debb0(param_1[1]);
        uVar2 = (**(code **)(*plVar3 + 0x100))();
        if ((uVar2 & 1) != 0) {
          (**(code **)(*param_1 + 0x38))(param_1,0x3e,0,0);
          return 1;
        }
      }
    }
  }
  return 0;
}

