
void FUN_002a70a0(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = *(uint *)(param_1 + 0xc00);
  if (0 < (int)uVar1) {
    if (uVar1 == 1) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0;
      lVar3 = param_1 + 0x20;
      do {
        uVar2 = uVar2 + 2;
        *(undefined8 *)(lVar3 + -0x1c) = 0;
        *(undefined8 *)(lVar3 + -4) = 0;
        lVar3 = lVar3 + 0x30;
      } while (((ulong)uVar1 & 0xfffffffe) != uVar2);
    }
    if ((uVar1 & 1) != 0) {
      *(undefined8 *)(param_1 + uVar2 * 0x18 + 4) = 0;
    }
  }
  *(undefined8 *)(param_1 + 0xc30) = 0;
  *(undefined8 *)(param_1 + 0xcb0) = 0;
  *(undefined8 *)(param_1 + 0xc74) = 0;
  *(undefined8 *)(param_1 + 0xc38) = 0;
  *(undefined8 *)(param_1 + 0xcf4) = 0;
  *(undefined8 *)(param_1 + 0xcb8) = 0;
  *(undefined8 *)(param_1 + 0xc7c) = 0;
  *(undefined8 *)(param_1 + 0xc40) = 0;
  *(undefined8 *)(param_1 + 0xc84) = 0;
  *(undefined8 *)(param_1 + 0xcc0) = 0;
  *(undefined8 *)(param_1 + 0xc8c) = 0;
  *(undefined8 *)(param_1 + 0xc48) = 0;
  *(undefined8 *)(param_1 + 0xc94) = 0;
  *(undefined8 *)(param_1 + 0xcc8) = 0;
  *(undefined8 *)(param_1 + 0xc9c) = 0;
  *(undefined8 *)(param_1 + 0xc50) = 0;
  *(undefined8 *)(param_1 + 0xcd0) = 0;
  *(undefined8 *)(param_1 + 0xc58) = 0;
  *(undefined8 *)(param_1 + 0xcd8) = 0;
  *(undefined8 *)(param_1 + 0xc60) = 0;
  *(undefined8 *)(param_1 + 0xce0) = 0;
  *(undefined8 *)(param_1 + 0xc68) = 0;
  *(undefined8 *)(param_1 + 0xce8) = 0;
  *(undefined4 *)(param_1 + 0xc70) = 0;
  *(undefined4 *)(param_1 + 0xcf0) = 0;
  *(undefined4 *)(param_1 + 0xcfc) = 0;
  *(undefined8 *)(param_1 + 0xd00) = 0;
  *(undefined8 *)(param_1 + 0xd08) = 0;
  *(undefined8 *)(param_1 + 0xd10) = 0;
  *(undefined8 *)(param_1 + 0xd18) = 0;
  *(undefined8 *)(param_1 + 0xd20) = 0;
  *(undefined8 *)(param_1 + 0xca4) = 0;
  *(undefined8 *)(param_1 + 0xd28) = 0;
  *(undefined4 *)(param_1 + 0xcac) = 0;
  *(undefined4 *)(param_1 + 0xc04) = 0;
  *(undefined8 *)(param_1 + 0xc28) = 0;
  return;
}

