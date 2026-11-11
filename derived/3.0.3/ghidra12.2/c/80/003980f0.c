
void FUN_003980f0(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  
  FUN_0034fb44(param_1 + 0x178);
  (**(code **)PTR_DAT_04bc9528)
            (*(undefined8 *)(param_1 + 0x160),*(undefined8 *)(param_1 + 0x168),
             *(undefined8 *)(param_1 + 0x170),0,*(undefined8 *)PTR_DAT_04bc9530,0);
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(undefined8 *)(param_1 + 0x170) = 0;
  *(undefined8 *)(param_1 + 0x160) = 0;
  if (*(long *)(param_1 + 0x1c8) != 0) {
    FUN_0034eb9c(*(long *)(param_1 + 0x1c8),param_2);
    lVar2 = *(long *)(param_1 + 0x1c8);
    if (lVar2 != 0) {
      FUN_0034e9ec(lVar2);
      FUN_00367b50(lVar2);
    }
    *(undefined8 *)(param_1 + 0x1c8) = 0;
  }
  plVar1 = *(long **)(param_1 + 0x1c0);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
    plVar1 = *(long **)(param_1 + 0x1c0);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1);
      FUN_00367b50(plVar1);
    }
    *(undefined8 *)(param_1 + 0x1c0) = 0;
  }
  return;
}

