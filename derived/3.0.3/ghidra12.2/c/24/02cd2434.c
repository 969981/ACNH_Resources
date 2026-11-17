
void FUN_02cd2434(long *param_1)

{
  undefined4 uVar1;
  long *plVar2;
  ulong uVar3;
  
  plVar2 = (long *)(**(code **)(*param_1 + 0x270))();
  uVar3 = (**(code **)(*plVar2 + 0x138))(plVar2,0);
  if ((uVar3 & 1) != 0) {
    uVar1 = (**(code **)(*param_1 + 0x268))(param_1);
    if (*(int *)((long)param_1 + (ulong)*(byte *)(param_1 + 0x40) * 4 + 0x1f0) == -1) {
      *(undefined4 *)((long)param_1 + (ulong)*(byte *)(param_1 + 0x40) * 4 + 0x1f0) = uVar1;
    }
  }
  return;
}

