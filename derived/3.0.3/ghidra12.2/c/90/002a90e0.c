
void FUN_002a90e0(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = param_1[1];
  *param_1 = 0;
  if (lVar2 != 0) {
    uVar1 = FUN_00285e00(lVar2);
    if (0x65f < uVar1) {
      uVar1 = uVar1 / 0x660;
      lVar3 = lVar2;
      do {
        FUN_0022b830(lVar3);
        uVar1 = uVar1 - 1;
        lVar3 = lVar3 + 0x660;
      } while (uVar1 != 0);
    }
    FUN_00285dc0(lVar2);
    param_1[1] = 0;
  }
  *(undefined2 *)(param_1 + 2) = 0;
  return;
}

