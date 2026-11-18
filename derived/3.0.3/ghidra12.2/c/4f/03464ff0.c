
void FUN_03464ff0(long param_1,int param_2,uint param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined4 uVar3;
  int *piVar4;
  
  if (0 < (int)*(uint *)(param_1 + 0x20)) {
    uVar2 = 0;
    do {
      if (*(uint *)(*(long *)(param_1 + 0x28) + uVar2 * 4) == param_3) {
        if (*(uint *)(*(long *)(param_1 + 8) + 0x2c8) <= param_3) {
          param_3 = 0;
        }
        if (*(long *)(*(long *)(*(long *)(param_1 + 8) + 0x2d0) + (long)(int)param_3 * 8) == 0) {
          return;
        }
        uVar1 = uVar2;
        if (*(uint *)(param_1 + 0x10) <= (uint)uVar2) {
          uVar1 = 0;
        }
        piVar4 = (int *)(*(long *)(param_1 + 0x18) + uVar1 * 0x30 + 0x28);
        if (*piVar4 == param_2) {
          return;
        }
        *piVar4 = param_2;
        if (*(uint *)(param_1 + 0x10) <= (uint)uVar2) {
          uVar2 = 0;
        }
        uVar3 = 1;
        if (param_2 == -1) {
          uVar3 = 2;
        }
        *(undefined4 *)(*(long *)(param_1 + 0x18) + uVar2 * 0x30 + 0x2c) = uVar3;
        return;
      }
      uVar2 = uVar2 + 1;
    } while (*(uint *)(param_1 + 0x20) != uVar2);
  }
  return;
}

