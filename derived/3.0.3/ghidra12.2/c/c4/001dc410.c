
bool FUN_001dc410(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = FUN_001e14d8();
  lVar3 = FUN_001e14d8(param_2);
  if (lVar2 < lVar3) {
    bVar1 = true;
  }
  else {
    lVar2 = FUN_001e14d8(param_1);
    lVar3 = FUN_001e14d8(param_2);
    if ((lVar2 == lVar3) && (*(uint *)(param_1 + 0x88) < *(uint *)(param_2 + 0x88))) {
      return true;
    }
    lVar2 = FUN_001e14d8(param_1);
    lVar3 = FUN_001e14d8(param_2);
    bVar1 = false;
    if ((lVar2 == lVar3) && (*(int *)(param_1 + 0x88) == *(int *)(param_2 + 0x88))) {
      return *(byte *)(param_1 + 0x90) < *(byte *)(param_2 + 0x90);
    }
  }
  return bVar1;
}

