
void FUN_00299310(ulong param_1)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  
  uVar1 = FUN_0021f454();
  lVar2 = FUN_00285d10((param_1 & 0xffffffff) << 3,uVar1);
  if (((uint)param_1 != 0) && (lVar2 != 0)) {
    uVar3 = param_1 & 3;
    if ((uint)param_1 < 4) {
      lVar4 = 0;
    }
    else {
      lVar4 = 0;
      puVar5 = (undefined8 *)(lVar2 + 0x10);
      do {
        lVar4 = lVar4 + -4;
        puVar5[-2] = 0;
        puVar5[-1] = 0;
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5 = puVar5 + 4;
      } while (-lVar4 != (param_1 & 0xfffffffc));
      lVar4 = -lVar4;
    }
    if (uVar3 != 0) {
      puVar5 = (undefined8 *)(lVar2 + lVar4 * 8);
      do {
        uVar3 = uVar3 - 1;
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      } while (uVar3 != 0);
    }
  }
  return;
}

