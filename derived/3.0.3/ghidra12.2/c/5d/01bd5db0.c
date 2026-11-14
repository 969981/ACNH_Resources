
void FUN_01bd5db0(long param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  int *piVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long local_60 [2];
  long local_50;
  long lStack_48;
  long local_40;
  long lStack_38;
  uint local_18 [2];
  
  FUN_01bd3dc0();
  local_50 = *(long *)(param_2 + 0x18);
  lVar6 = *(long *)(param_1 + 0x218);
  lStack_38 = local_50 + (ulong)*(ushort *)(param_2 + 0x10);
  lStack_48 = param_2;
  local_40 = local_50;
  FUN_006f4120(&local_50,local_60,local_18,2);
  plVar2 = *(long **)(lVar6 + 8);
  if (plVar2 != (long *)0x0) {
    plVar2 = (long *)(**(code **)(*plVar2 + 0x20))();
    piVar3 = (int *)(**(code **)(*plVar2 + 0x48))();
    if (piVar3 != (int *)0x0) {
      if (*piVar3 == 1) {
        uVar4 = 0;
      }
      else {
        if (*piVar3 != 2) {
          return;
        }
        uVar4 = 1;
      }
      local_50 = CONCAT44(local_50._4_4_,uVar4);
      uVar1 = (ulong)uVar4;
      if (1 < uVar4) {
        uVar1 = 0;
      }
      uVar5 = (ulong)uVar4;
      if (1 < uVar4) {
        uVar5 = 0;
      }
      FUN_01bd574c(param_1,local_60[uVar1],local_60[uVar1] + (ulong)local_18[uVar5] * 2);
    }
  }
  return;
}

