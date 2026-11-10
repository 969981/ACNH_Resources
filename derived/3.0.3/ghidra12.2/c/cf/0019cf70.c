
void FUN_0019cf70(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  plVar1 = (long *)FUN_00187df4(0x18);
  *plVar1 = 0;
  plVar1[2] = param_2;
  plVar4 = (long *)(param_1 + 0x20);
  lVar2 = *plVar4;
  lVar3 = *(long *)(param_1 + 0x30);
  *plVar1 = lVar2;
  plVar1[1] = (long)plVar4;
  *(long **)(lVar2 + 8) = plVar1;
  *plVar4 = (long)plVar1;
  *(long *)(param_1 + 0x30) = lVar3 + 1;
  lVar2 = *(long *)(param_1 + 0x10);
  do {
    if (lVar2 == param_1 + 8) {
      return;
    }
    plVar1 = *(long **)(lVar2 + 0x10);
    if (-0x401 < (int)plVar1[1]) {
      if (-1 < (int)plVar1[1]) {
        return;
      }
      (**(code **)(*plVar1 + 0x10))(plVar1,param_2);
    }
    lVar2 = *(long *)(lVar2 + 8);
  } while( true );
}

