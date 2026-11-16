
void FUN_028d4124(long param_1,uint param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar3 = (ulong)param_2;
  if (6 < param_2) {
    uVar3 = 0;
  }
  if (*(int *)(param_1 + uVar3 * 4) != 0) {
    uVar3 = (ulong)param_2;
    if (6 < param_2) {
      uVar3 = 0;
    }
    uVar2 = *(uint *)(param_1 + uVar3 * 4);
    if (0xb < uVar2) {
      uVar2 = 0;
    }
    puVar1 = (undefined1 *)(param_1 + 0x60) + uVar2;
    if (0xd < uVar2) {
      puVar1 = (undefined1 *)(param_1 + 0x60);
    }
    *puVar1 = 1;
  }
  uVar3 = (ulong)param_2;
  if (6 < param_2) {
    uVar3 = 0;
  }
  *(undefined4 *)(param_1 + uVar3 * 4) = param_3;
  return;
}

