
void FUN_0040ce58(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  FUN_001f9790(param_1 + 0x20);
  FUN_001f9790(param_1 + 0x140,param_2);
  if (*(char *)(param_1 + 0x1d0) != '\0') {
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x78), lVar2 != 0)) {
      plVar1 = *(long **)(lVar2 + 0x28);
      (**(code **)(*plVar1 + 0x58))(plVar1,0x1b);
    }
    if ((param_2 != 0) && (*(long *)(param_2 + 0x78) != 0)) {
      plVar1 = *(long **)(*(long *)(param_2 + 0x78) + 0x28);
                    /* WARNING: Could not recover jumptable at 0x0040ced0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x50))(plVar1,0x1b,param_1 + 0xb0);
      return;
    }
  }
  return;
}

