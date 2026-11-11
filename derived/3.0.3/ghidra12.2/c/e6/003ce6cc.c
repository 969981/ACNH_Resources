
void FUN_003ce6cc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  
  plVar3 = (long *)(param_2 + 0x30);
  lVar4 = *plVar3;
  lVar1 = 0x20;
  lVar2 = param_1 + 0x20;
  if (*(char *)(param_2 + 0x28) != '\x02') {
    lVar1 = 0x30;
    lVar2 = param_1 + 0x30;
  }
  *plVar3 = *(long *)(param_1 + lVar1);
  *(long *)(lVar4 + 8) = lVar2;
  *(long **)(*(long *)(param_1 + lVar1) + 8) = plVar3;
  *(long *)(param_1 + lVar1) = lVar4;
  return;
}

