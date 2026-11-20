
void FUN_03f45838(long param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 0x18);
  if (plVar3 == (long *)0x0) {
    return;
  }
  (**(code **)(*plVar3 + 0x20))(plVar3);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  (**(code **)(*plVar3 + 0x28))(plVar3);
  lVar2 = *(long *)(param_1 + 0x10);
  if ((lVar2 != 0) && (*(long *)(lVar2 + 0x20) != 0)) {
    FUN_03f42ca4(*(long *)(lVar2 + 0x20),lVar2,1);
  }
  plVar3 = *(long **)(param_1 + 0x18);
  (**(code **)(*plVar3 + 0x20))(plVar3);
  iVar1 = *(int *)(param_1 + 0xc) + -1;
  if (((*(int *)(param_1 + 0xc) < 1) || (*(int *)(param_1 + 0xc) = iVar1, iVar1 == 0)) &&
     (*(long *)(param_1 + 0x10) != 0)) {
    FUN_03f44508();
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x03f458e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x28))(plVar3);
  return;
}

