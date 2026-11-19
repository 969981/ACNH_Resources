
void FUN_03c83760(long *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  
  *(undefined4 *)((long)param_1 + 0x2c) = param_2;
  uVar2 = FUN_03c83810();
  if ((uVar2 & 1) != 0) {
    uVar1 = *(undefined4 *)((long)param_1 + 0x24);
    *(int *)((long)param_1 + 0x24) = (int)param_1[5];
    *(undefined4 *)(param_1 + 5) = uVar1;
    *(byte *)((long)param_1 + 0x21) = *(byte *)((long)param_1 + 0x21) ^ 1;
    (**(code **)(*param_1 + 0x48))(param_1);
    if ((long *)param_1[10] != param_1 + 9) {
      lVar4 = (long)*(int *)((long)param_1 + 0x5c);
      plVar3 = (long *)(param_1[10] - lVar4);
      do {
        (**(code **)(*plVar3 + 0x18))(plVar3,(int)param_1[5],*(undefined4 *)((long)param_1 + 0x24));
        plVar3 = (long *)(*(long *)((long)plVar3 + lVar4 + 8) - lVar4);
      } while (plVar3 != (long *)((long)(param_1 + 9) - lVar4));
    }
  }
  FUN_03c835a0(param_1);
  return;
}

