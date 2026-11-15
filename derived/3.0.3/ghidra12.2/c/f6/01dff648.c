
undefined8 FUN_01dff648(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = FUN_01d77c78(param_2);
  if ((uVar1 & 1) == 0) {
LAB_01dff728:
    return 0;
  }
  switch(*(undefined4 *)(param_2 + 8)) {
  case 0:
    uVar3 = *(uint *)(param_2 + 4);
    uVar4 = *(uint *)(param_1 + 0x170);
    if (uVar4 == uVar3 || (uVar4 < uVar3 || (int)uVar4 < (int)uVar3)) {
      return 0;
    }
    lVar2 = *(long *)(param_1 + 0x178);
    break;
  case 1:
    uVar3 = *(uint *)(param_2 + 4);
    uVar4 = *(uint *)(param_1 + 0x180);
    if (uVar4 == uVar3 || (uVar4 < uVar3 || (int)uVar4 < (int)uVar3)) {
      return 0;
    }
    lVar2 = *(long *)(param_1 + 0x188);
    break;
  case 2:
    lVar2 = *(long *)(param_1 + 0x1b8);
    uVar3 = *(uint *)(param_2 + 4);
    uVar4 = *(uint *)(param_1 + 0x1b0);
    if (lVar2 == 0) {
      uVar4 = 0xffffffff;
    }
    if ((int)uVar4 <= (int)uVar3) {
      return 0;
    }
    if (*(uint *)(param_1 + 0x1b0) <= uVar3) {
      return 0;
    }
    break;
  case 3:
    lVar2 = *(long *)(param_1 + 0x250);
    if (lVar2 == 0) {
      return 0;
    }
    uVar3 = *(uint *)(param_2 + 4);
    uVar4 = *(uint *)(param_1 + 0x248);
    goto LAB_01dff714;
  case 4:
    lVar2 = *(long *)(param_1 + 0x208);
    if (lVar2 == 0) {
      return 0;
    }
    uVar3 = *(uint *)(param_2 + 4);
    uVar4 = *(uint *)(param_1 + 0x200);
LAB_01dff714:
    if (uVar4 <= uVar3) {
      uVar3 = 0;
    }
    break;
  default:
    goto LAB_01dff728;
  }
  return *(undefined8 *)(lVar2 + (long)(int)uVar3 * 8);
}

