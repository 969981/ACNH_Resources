
void FUN_0161cfb0(long param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  
  do {
    if (*(long *)(param_1 + 8) != 0) {
      FUN_0161cfb0(*(long *)(param_1 + 8),param_2);
    }
    lVar4 = *(long *)(param_1 + 0x10);
    if (*(long *)(param_2 + 8) != 0) {
      pcVar2 = *(code **)(param_2 + 0x10);
      uVar3 = *(ulong *)(param_2 + 0x18) & 1;
      if (uVar3 != 0 || pcVar2 != (code *)0x0) {
        plVar1 = (long *)(*(long *)(param_2 + 8) + ((long)*(ulong *)(param_2 + 0x18) >> 1));
        if (uVar3 != 0) {
          pcVar2 = *(code **)(pcVar2 + *plVar1);
        }
        (*pcVar2)(plVar1,param_1);
      }
    }
    param_1 = lVar4;
  } while (lVar4 != 0);
  return;
}

