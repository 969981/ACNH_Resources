
void FUN_02c2085c(long param_1,undefined4 param_2)

{
  long lVar1;
  long lVar2;
  
  switch(param_2) {
  case 0:
    lVar1 = *(long *)(param_1 + 0x210);
    if (*(long *)(lVar1 + 0x210) != 0) {
      *(undefined1 *)(*(long *)(lVar1 + 0x210) + 0x54) = 1;
      lVar1 = *(long *)(param_1 + 0x210);
    }
    FUN_02c168e4(lVar1);
    return;
  case 1:
    lVar1 = *(long *)(param_1 + 0x210);
    if (*(long *)(lVar1 + 0x210) != 0) {
      *(undefined1 *)(*(long *)(lVar1 + 0x210) + 0x54) = 0;
      lVar1 = *(long *)(param_1 + 0x210);
    }
    FUN_02c168e4(lVar1);
    lVar1 = *(long *)(param_1 + 0x210);
    lVar2 = *(long *)(*(long *)(lVar1 + 0x570) + 0xa0);
    if (lVar2 != 0) {
      *(undefined1 *)(lVar2 + 0xbc) = 1;
      lVar1 = *(long *)(param_1 + 0x210);
    }
    lVar2 = *(long *)(*(long *)(lVar1 + 0x578) + 0xa0);
    if (lVar2 != 0) {
      *(undefined1 *)(lVar2 + 0xbc) = 1;
      lVar1 = *(long *)(param_1 + 0x210);
    }
    lVar2 = *(long *)(*(long *)(lVar1 + 0x580) + 0xa0);
    if (lVar2 != 0) {
      *(undefined1 *)(lVar2 + 0xbc) = 1;
      lVar1 = *(long *)(param_1 + 0x210);
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0x590) + 0xa0);
    break;
  case 2:
    lVar1 = *(long *)(param_1 + 0x210);
    if (*(long *)(lVar1 + 0x210) != 0) {
      *(undefined1 *)(*(long *)(lVar1 + 0x210) + 0x54) = 0;
      lVar1 = *(long *)(param_1 + 0x210);
    }
    FUN_02c168e4(lVar1);
    lVar1 = *(long *)(param_1 + 0x210);
    lVar2 = *(long *)(*(long *)(lVar1 + 0x598) + 0xa0);
    if (lVar2 != 0) {
      *(undefined1 *)(lVar2 + 0xbc) = 1;
      lVar1 = *(long *)(param_1 + 0x210);
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0x5a0) + 0xa0);
    break;
  case 3:
    lVar1 = *(long *)(param_1 + 0x210);
    if (*(long *)(lVar1 + 0x210) != 0) {
      *(undefined1 *)(*(long *)(lVar1 + 0x210) + 0x54) = 0;
      lVar1 = *(long *)(param_1 + 0x210);
    }
    FUN_02c167bc(lVar1);
    lVar1 = *(long *)(param_1 + 0x210);
    lVar2 = *(long *)(*(long *)(lVar1 + 0x598) + 0xa0);
    if (lVar2 != 0) {
      *(undefined1 *)(lVar2 + 0xbc) = 0;
      lVar1 = *(long *)(param_1 + 0x210);
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0x5a0) + 0xa0);
    goto joined_r0x02c20a04;
  case 4:
    lVar1 = *(long *)(param_1 + 0x210);
    if (*(long *)(lVar1 + 0x210) != 0) {
      *(undefined1 *)(*(long *)(lVar1 + 0x210) + 0x54) = 0;
      lVar1 = *(long *)(param_1 + 0x210);
    }
    FUN_02c167bc(lVar1);
    lVar1 = *(long *)(param_1 + 0x210);
    lVar2 = *(long *)(*(long *)(lVar1 + 0x598) + 0xa0);
    if (lVar2 != 0) {
      *(undefined1 *)(lVar2 + 0xbc) = 0;
      lVar1 = *(long *)(param_1 + 0x210);
    }
    lVar2 = *(long *)(*(long *)(lVar1 + 0x5a0) + 0xa0);
    if (lVar2 != 0) {
      *(undefined1 *)(lVar2 + 0xbc) = 0;
      lVar1 = *(long *)(param_1 + 0x210);
    }
    lVar1 = *(long *)(*(long *)(lVar1 + 0x5a8) + 0xa0);
joined_r0x02c20a04:
    if (lVar1 != 0) {
      *(undefined1 *)(lVar1 + 0xbc) = 0;
    }
  default:
    goto switchD_02c20890_default;
  }
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0xbc) = 1;
  }
switchD_02c20890_default:
  return;
}

