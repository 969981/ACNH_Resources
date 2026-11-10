
void FUN_00220140(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  param_1[3] = 0x400000000;
  FUN_00220b48(param_1 + 4);
  FUN_002214d0(param_1 + 0x17);
  *(undefined1 *)(param_1 + 0xae) = 0;
  FUN_0021f4e0(param_1 + 0xaf);
  *(undefined2 *)(param_1 + 0xb3) = 0;
  param_1[0xb4] = 0;
  uVar1 = FUN_0021f454();
  lVar2 = FUN_00285d60(0x728,uVar1,0x20);
  if (lVar2 != 0) {
    lVar3 = 0;
    do {
      *(undefined4 *)(lVar2 + lVar3) = 0;
      lVar3 = lVar3 + 4;
    } while (lVar3 != 0x728);
  }
  *param_1 = lVar2;
  uVar1 = FUN_0021f454();
  lVar2 = FUN_00285d60(0x768,uVar1,0x20);
  if (lVar2 != 0) {
    lVar3 = 5;
    do {
      lVar4 = lVar2 + lVar3;
      lVar3 = lVar3 + 6;
      *(undefined4 *)(lVar4 + -5) = 0;
      *(undefined2 *)(lVar4 + -1) = 0;
    } while (lVar3 != 0x76d);
  }
  param_1[1] = lVar2;
  uVar1 = FUN_0021f454();
  lVar2 = FUN_00285d60(0x2750,uVar1,0x20);
  if (lVar2 != 0) {
    lVar3 = lVar2 + 3;
    lVar4 = 0x2750;
    do {
      *(undefined4 *)(lVar3 + -3) = 0;
      lVar3 = lVar3 + 4;
      lVar4 = lVar4 + -4;
    } while (lVar4 != 0);
  }
  param_1[2] = lVar2;
  FUN_0021fed4(param_1 + 0xaf);
  return;
}

