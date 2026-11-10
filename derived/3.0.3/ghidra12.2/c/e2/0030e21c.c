
void FUN_0030e21c(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  (**(code **)(**(long **)(param_1 + 0x28) + 0xf8))();
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (lVar2 = *(long *)(*(long *)(param_1 + 0x10) + 0x78), lVar2 != 0)) {
    plVar1 = *(long **)(lVar2 + 0x28);
    (**(code **)(*plVar1 + 0x58))(plVar1,3);
  }
  if ((param_2 == 0) || (*(long *)(param_2 + 0x78) == 0)) {
    return;
  }
  plVar1 = *(long **)(*(long *)(param_2 + 0x78) + 0x28);
                    /* WARNING: Could not recover jumptable at 0x0030e288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x50))(plVar1,3,*(undefined8 *)(param_1 + 0x28));
  return;
}

