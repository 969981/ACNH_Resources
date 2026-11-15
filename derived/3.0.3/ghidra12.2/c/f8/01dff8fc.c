
undefined8 FUN_01dff8fc(long param_1,int *param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  
  uVar1 = FUN_01d77c78(*(undefined8 *)(param_1 + 0x2a8));
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  lVar6 = *(long *)(param_1 + 0x2a8);
  uVar1 = FUN_01d77c78(lVar6);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  switch(*(undefined4 *)(lVar6 + 8)) {
  case 0:
    uVar4 = *(uint *)(lVar6 + 4);
    uVar5 = *(uint *)(param_1 + 0x170);
    if (uVar5 == uVar4 || (uVar5 < uVar4 || (int)uVar5 < (int)uVar4)) {
      return 0;
    }
    lVar3 = *(long *)(param_1 + 0x178);
    break;
  case 1:
    uVar4 = *(uint *)(lVar6 + 4);
    uVar5 = *(uint *)(param_1 + 0x180);
    if (uVar5 == uVar4 || (uVar5 < uVar4 || (int)uVar5 < (int)uVar4)) {
      return 0;
    }
    lVar3 = *(long *)(param_1 + 0x188);
    break;
  case 2:
    lVar3 = *(long *)(param_1 + 0x1b8);
    uVar4 = *(uint *)(lVar6 + 4);
    uVar5 = *(uint *)(param_1 + 0x1b0);
    if (lVar3 == 0) {
      uVar5 = 0xffffffff;
    }
    if ((int)uVar5 <= (int)uVar4) {
      return 0;
    }
    if (*(uint *)(param_1 + 0x1b0) <= uVar4) {
      return 0;
    }
    break;
  case 3:
    lVar3 = *(long *)(param_1 + 0x250);
    if (lVar3 == 0) {
      return 0;
    }
    uVar4 = *(uint *)(lVar6 + 4);
    uVar5 = *(uint *)(param_1 + 0x248);
    goto LAB_01dff9dc;
  case 4:
    lVar3 = *(long *)(param_1 + 0x208);
    if (lVar3 == 0) {
      return 0;
    }
    uVar4 = *(uint *)(lVar6 + 4);
    uVar5 = *(uint *)(param_1 + 0x200);
LAB_01dff9dc:
    if (uVar5 <= uVar4) {
      uVar4 = 0;
    }
    break;
  default:
    goto LAB_01dffa1c;
  }
  lVar6 = *(long *)(lVar3 + (long)(int)uVar4 * 8);
  if ((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0xfa8), lVar6 != 0)) {
    uVar4 = *(uint *)(lVar6 + 0xbc);
    if (uVar4 < 7) {
      if (4 < uVar4) {
        return 0;
      }
      iVar2 = uVar4 + 1;
    }
    else {
      iVar2 = 0;
    }
    *param_2 = iVar2;
    return 1;
  }
LAB_01dffa1c:
  return 0;
}

