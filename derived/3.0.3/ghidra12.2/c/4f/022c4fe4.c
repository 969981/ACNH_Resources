
void FUN_022c4fe4(long param_1,int param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  undefined4 *puVar3;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else if (param_2 == 0xd) {
    uVar2 = 1;
  }
  else if ((param_2 < DAT_0547b48c) || (DAT_0547b490 < param_2)) {
    uVar2 = 0;
  }
  else {
    uVar1 = (param_2 - DAT_0547b48c) + 2;
    uVar2 = (ulong)uVar1;
    if (0xd < uVar1) {
      puVar3 = &DAT_0547b494;
      goto LAB_022c5044;
    }
  }
  puVar3 = &DAT_0547b494 + uVar2 * 10;
LAB_022c5044:
  uVar1 = 1 << (ulong)(param_3 & 0x1f);
  puVar3[8] = puVar3[8] & (uVar1 ^ 0xffffffff);
  puVar3[9] = puVar3[9] | uVar1;
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}

