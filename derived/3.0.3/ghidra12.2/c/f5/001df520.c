
bool FUN_001df520(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = FUN_001e14d8();
  lVar2 = FUN_001e14d8(param_2);
  if (lVar2 <= lVar1) {
    lVar1 = FUN_001e14d8(param_1);
    lVar2 = FUN_001e14d8(param_2);
    if ((lVar1 != lVar2) || (*(uint *)(param_2 + 0x88) <= *(uint *)(param_1 + 0x88))) {
      lVar1 = FUN_001e14d8(param_2);
      lVar2 = FUN_001e14d8(param_1);
      if (lVar2 <= lVar1) {
        lVar1 = FUN_001e14d8(param_2);
        lVar2 = FUN_001e14d8(param_1);
        if ((lVar1 != lVar2) || (*(uint *)(param_1 + 0x88) <= *(uint *)(param_2 + 0x88))) {
          lVar1 = FUN_001e14d8(param_1 + 0x90);
          lVar2 = FUN_001e14d8(param_2 + 0x90);
          if (lVar1 < lVar2) {
            return true;
          }
          lVar1 = FUN_001e14d8(param_1 + 0x90);
          lVar2 = FUN_001e14d8(param_2 + 0x90);
          if (lVar1 == lVar2) {
            return *(uint *)(param_1 + 0x118) < *(uint *)(param_2 + 0x118);
          }
        }
      }
      return false;
    }
  }
  return true;
}

