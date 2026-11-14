
void FUN_01b35b30(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = (**(code **)(*param_1 + 0x20))(param_1,DAT_0532d280);
  plVar2 = DAT_0532d278;
  if (lVar3 != 0) {
    lVar4 = *DAT_0532d278;
    plVar1 = (long *)(*(int *)((long)DAT_0532d278 + 0x14) + lVar3);
    *DAT_0532d278 = (long)plVar1;
    *plVar1 = lVar4;
    plVar1[1] = (long)plVar2;
    if (lVar4 != 0) {
      *(long **)(lVar4 + 8) = plVar1;
    }
    *(int *)(plVar2 + 2) = (int)plVar2[2] + 1;
  }
  return;
}

