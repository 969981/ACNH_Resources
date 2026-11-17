
void FUN_02ee4e8c(long param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x210);
  if ((*(long *)(lVar2 + 0x570) != 0) &&
     (plVar1 = *(long **)(*(long *)(lVar2 + 0x570) + 0x1b0), plVar1 != (long *)0x0)) {
    (**(code **)(*plVar1 + 0x30))(plVar1,0);
    lVar2 = *(long *)(param_1 + 0x210);
  }
  if ((*(long *)(lVar2 + 0x578) != 0) &&
     (plVar1 = *(long **)(*(long *)(lVar2 + 0x578) + 0x1b0), plVar1 != (long *)0x0)) {
    (**(code **)(*plVar1 + 0x30))(plVar1,0);
    lVar2 = *(long *)(param_1 + 0x210);
  }
  if ((*(long *)(lVar2 + 0x580) != 0) &&
     (plVar1 = *(long **)(*(long *)(lVar2 + 0x580) + 0x1b0), plVar1 != (long *)0x0)) {
    (**(code **)(*plVar1 + 0x30))(plVar1,0);
    lVar2 = *(long *)(param_1 + 0x210);
  }
  if ((*(long *)(lVar2 + 0x588) != 0) &&
     (plVar1 = *(long **)(*(long *)(lVar2 + 0x588) + 0x1b0), plVar1 != (long *)0x0)) {
    (**(code **)(*plVar1 + 0x30))(plVar1,0);
    lVar2 = *(long *)(param_1 + 0x210);
  }
  if ((*(long *)(lVar2 + 0x590) == 0) ||
     (plVar1 = *(long **)(*(long *)(lVar2 + 0x590) + 0x1b0), plVar1 == (long *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x02ee4f54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))(plVar1,0);
  return;
}

