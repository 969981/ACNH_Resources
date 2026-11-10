
void FUN_003675f0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  *param_1 = (long)(PTR_DAT_04bd07e0 + 0x10);
  plVar2 = (long *)param_1[4];
  while (plVar2 != param_1 + 3) {
    plVar1 = (long *)plVar2[1];
    lVar3 = *plVar1;
    *(long **)(*plVar2 + 8) = plVar1;
    *plVar1 = *plVar2;
    *(long **)(lVar3 + 8) = plVar2;
    *plVar2 = lVar3;
    FUN_00367b50();
    plVar2 = plVar1;
  }
  return;
}

