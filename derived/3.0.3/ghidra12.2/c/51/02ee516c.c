
void FUN_02ee516c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + 0x210);
  lVar2 = *(long *)(lVar1 + 0x570);
  if ((lVar2 != 0) && (*(long **)(lVar2 + 0x1b0) != (long *)0x0)) {
    (**(code **)(**(long **)(lVar2 + 0x1b0) + 0x50))();
    (**(code **)(**(long **)(lVar2 + 0x1b0) + 0x20))(*(long **)(lVar2 + 0x1b0),0);
    lVar1 = *(long *)(param_1 + 0x210);
  }
  lVar2 = *(long *)(lVar1 + 0x578);
  if ((lVar2 != 0) && (*(long **)(lVar2 + 0x1b0) != (long *)0x0)) {
    (**(code **)(**(long **)(lVar2 + 0x1b0) + 0x50))();
    (**(code **)(**(long **)(lVar2 + 0x1b0) + 0x20))(*(long **)(lVar2 + 0x1b0),0);
    lVar1 = *(long *)(param_1 + 0x210);
  }
  lVar2 = *(long *)(lVar1 + 0x580);
  if ((lVar2 != 0) && (*(long **)(lVar2 + 0x1b0) != (long *)0x0)) {
    (**(code **)(**(long **)(lVar2 + 0x1b0) + 0x50))();
    (**(code **)(**(long **)(lVar2 + 0x1b0) + 0x20))(*(long **)(lVar2 + 0x1b0),0);
    lVar1 = *(long *)(param_1 + 0x210);
  }
  lVar2 = *(long *)(lVar1 + 0x588);
  if ((lVar2 != 0) && (*(long **)(lVar2 + 0x1b0) != (long *)0x0)) {
    (**(code **)(**(long **)(lVar2 + 0x1b0) + 0x50))();
    (**(code **)(**(long **)(lVar2 + 0x1b0) + 0x20))(*(long **)(lVar2 + 0x1b0),0);
    lVar1 = *(long *)(param_1 + 0x210);
  }
  lVar1 = *(long *)(lVar1 + 0x590);
  if ((lVar1 == 0) || (*(long **)(lVar1 + 0x1b0) == (long *)0x0)) {
    return;
  }
  (**(code **)(**(long **)(lVar1 + 0x1b0) + 0x50))();
                    /* WARNING: Could not recover jumptable at 0x02ee5284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(lVar1 + 0x1b0) + 0x20))(*(long **)(lVar1 + 0x1b0),0);
  return;
}

