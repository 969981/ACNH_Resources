
void FUN_02fd1948(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_1 + 0x210);
  lVar2 = **(long **)(*(long *)(lVar3 + 0x578) + 0x238);
  lVar1 = **(long **)(*(long *)(lVar3 + 0x580) + 0x238);
  lVar4 = *(long *)(*(long *)(lVar3 + 0x570) + 0xa0);
  lVar3 = **(long **)(*(long *)(lVar3 + 0x588) + 0x238);
  switch(*(undefined4 *)(param_1 + 0x254)) {
  case 0:
  case 2:
    if (lVar4 != 0) {
      *(undefined2 *)(lVar4 + 0xbc) = 0;
    }
    if (lVar2 != 0) {
      *(undefined2 *)(lVar2 + 0xbc) = 0x101;
    }
    goto LAB_02fd19d4;
  case 1:
    if (lVar4 != 0) {
      *(undefined2 *)(lVar4 + 0xbc) = 0x101;
    }
    break;
  case 3:
    if (lVar4 != 0) {
      *(undefined2 *)(lVar4 + 0xbc) = 0;
    }
    if (lVar2 != 0) {
      *(undefined2 *)(lVar2 + 0xbc) = 0;
    }
    if (lVar1 != 0) {
      *(undefined2 *)(lVar1 + 0xbc) = 0x101;
    }
    goto LAB_02fd19fc;
  default:
    if (lVar4 != 0) {
      *(undefined2 *)(lVar4 + 0xbc) = 0;
    }
  }
  if (lVar2 != 0) {
    *(undefined2 *)(lVar2 + 0xbc) = 0;
  }
LAB_02fd19d4:
  if (lVar1 != 0) {
    *(undefined2 *)(lVar1 + 0xbc) = 0;
  }
LAB_02fd19fc:
  if (lVar3 != 0) {
    *(undefined2 *)(lVar3 + 0xbc) = 0;
  }
  return;
}

