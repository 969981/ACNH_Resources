
undefined8 FUN_004469a0(ulong *param_1,long param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  long *plVar2;
  ulong *puVar3;
  
  plVar2 = (long *)(*param_1 & 0xfffffffffffffffc);
  if (plVar2 != (long *)0x0) {
    puVar3 = param_1;
    do {
      if ((plVar2[2] == param_2) &&
         (iVar1 = (**(code **)(*plVar2 + 0x10))(plVar2,param_3,param_4), iVar1 != 0)) {
        if ((*param_1 & 3) == 0) {
          *puVar3 = plVar2[1] & 0xfffffffffffffffcU | *puVar3 & 3;
          (**(code **)(*plVar2 + 8))(plVar2);
          return 1;
        }
        plVar2[1] = plVar2[1] & 0xfffffffffffffffcU | 1;
        return 1;
      }
      puVar3 = (ulong *)(plVar2 + 1);
      plVar2 = (long *)(*puVar3 & 0xfffffffffffffffc);
    } while (plVar2 != (long *)0x0);
  }
  return 0;
}

