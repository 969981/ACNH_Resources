
void FUN_0351fc9c(long param_1,int param_2)

{
  long lVar1;
  uint *puVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  
  if (DAT_05767c50 == param_2) {
    uVar6 = 0;
  }
  else if (DAT_05767c68 == param_2) {
    uVar6 = 1;
  }
  else if (DAT_05767c80 == param_2) {
    uVar6 = 2;
  }
  else if (DAT_05767c98 == param_2) {
    uVar6 = 3;
  }
  else if (DAT_05767cb0 == param_2) {
    uVar6 = 4;
  }
  else if (DAT_05767cc8 == param_2) {
    uVar6 = 5;
  }
  else if (DAT_05767ce0 == param_2) {
    uVar6 = 6;
  }
  else if (DAT_05767cf8 == param_2) {
    uVar6 = 7;
  }
  else if (DAT_05767d10 == param_2) {
    uVar6 = 8;
  }
  else if (DAT_05767d28 == param_2) {
    uVar6 = 9;
  }
  else if (DAT_05767d40 == param_2) {
    uVar6 = 10;
  }
  else if (DAT_05767d58 == param_2) {
    uVar6 = 0xb;
  }
  else {
    uVar6 = 0xffffffff;
  }
  if (*(long *)(param_1 + 0x1c180) == 0) {
    return;
  }
  uVar4 = uVar6;
  if (*(uint *)(param_1 + 0x1c178) <= uVar6) {
    uVar4 = 0;
  }
  lVar1 = *(long *)(param_1 + 0x1c180) + (long)(int)uVar4 * 0x18;
  puVar2 = (uint *)(lVar1 + 0x10);
  uVar4 = *puVar2;
  if (uVar4 < 0x10e) {
    lVar3 = param_1 + 0x228 + (ulong)uVar4 * 0x1a8;
    if (*(int *)(lVar3 + 0x1a0) != 0) {
      lVar5 = param_1 + 0x228 + (ulong)uVar4 * 0x1a8;
      **(undefined1 **)(lVar5 + 0x60) = 0;
      *(undefined1 *)(lVar5 + 0xf0) = 0;
      if (((*(int *)(lVar5 + 0x100) != 1) && ((*(byte *)(lVar5 + 0x18) >> 1 & 1) != 0)) &&
         (*(int *)(lVar5 + 0x140) == -1)) {
        *(undefined4 *)(lVar5 + 0x140) = 1;
      }
      *(undefined4 *)(lVar3 + 0x1a0) = 0;
      uVar4 = *puVar2;
      goto LAB_0351fe68;
    }
LAB_0351fe70:
    *puVar2 = 0xffffffff;
  }
  else {
LAB_0351fe68:
    if (uVar4 != 0xffffffff) goto LAB_0351fe70;
  }
  FUN_0345c288(lVar1,param_1 + 0x220,0);
  lVar1 = *(long *)(param_1 + 0x1c180);
  uVar4 = 0;
  if (uVar6 + 1 < *(uint *)(param_1 + 0x1c178)) {
    uVar4 = uVar6 + 1;
  }
  if (lVar1 == 0) {
    return;
  }
  puVar2 = (uint *)(lVar1 + (ulong)uVar4 * 0x18 + 0x10);
  uVar6 = *puVar2;
  if (uVar6 < 0x10e) {
    lVar3 = param_1 + 0x228 + (ulong)uVar6 * 0x1a8;
    if (*(int *)(lVar3 + 0x1a0) != 0) {
      lVar5 = param_1 + 0x228 + (ulong)uVar6 * 0x1a8;
      **(undefined1 **)(lVar5 + 0x60) = 0;
      *(undefined1 *)(lVar5 + 0xf0) = 0;
      if (((*(int *)(lVar5 + 0x100) != 1) && ((*(byte *)(lVar5 + 0x18) >> 1 & 1) != 0)) &&
         (*(int *)(lVar5 + 0x140) == -1)) {
        *(undefined4 *)(lVar5 + 0x140) = 1;
      }
      *(undefined4 *)(lVar3 + 0x1a0) = 0;
      uVar6 = *puVar2;
      goto LAB_0351ff14;
    }
  }
  else {
LAB_0351ff14:
    if (uVar6 == 0xffffffff) goto LAB_0351ff24;
  }
  *puVar2 = 0xffffffff;
LAB_0351ff24:
  FUN_0345c288(lVar1 + (ulong)uVar4 * 0x18,param_1 + 0x220,0);
  return;
}

