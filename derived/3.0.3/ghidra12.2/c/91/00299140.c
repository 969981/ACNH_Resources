
void FUN_00299140(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = FUN_0021f454();
  lVar3 = FUN_00285d60(0x270,uVar2,8);
  if (lVar3 != 0) {
    lVar4 = 5;
    do {
      lVar1 = lVar3 + lVar4;
      lVar4 = lVar4 + 6;
      *(undefined4 *)(lVar1 + -5) = 0;
      *(undefined2 *)(lVar1 + -1) = 0;
    } while (lVar4 != 0x275);
  }
  return;
}

