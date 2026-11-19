
void FUN_03ca1480(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0xc9) + 0x10);
  if (lVar1 == *(long *)(*(long *)(param_2 + 0xc9) + 0x10)) {
    lVar1 = *(long *)(lVar1 + 0x20);
    for (lVar4 = *(long *)(lVar1 + 8); lVar4 != lVar1; lVar4 = *(long *)(lVar4 + 8)) {
      lVar3 = *(long *)(lVar4 + 0x18);
      if (lVar3 != lVar4 + 0x10) {
        do {
          if (*(long *)(lVar3 + 0x10) == param_1) {
            FUN_00367494(lVar4 + -8,param_2);
            break;
          }
          lVar3 = *(long *)(lVar3 + 8);
        } while (lVar3 != lVar4 + 0x10);
      }
    }
    lVar1 = *(long *)(param_1 + 0x28);
    if (lVar1 != param_1 + 0x20) {
      plVar2 = (long *)(param_2 + 0x28);
      do {
        lVar4 = *plVar2;
        FUN_03ca1480(lVar1 + -8,lVar4 + -8);
        lVar1 = *(long *)(lVar1 + 8);
        plVar2 = (long *)(lVar4 + 8);
      } while (lVar1 != param_1 + 0x20);
    }
  }
  return;
}

