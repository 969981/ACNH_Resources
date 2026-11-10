
void FUN_002aad70(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  
  uVar1 = FUN_0021f454();
  lVar2 = FUN_00285d10(param_2 & 0xffffffff,uVar1);
  if (((uint)param_2 != 0) && (lVar2 != 0)) {
    uVar3 = param_2 & 3;
    if ((uint)param_2 < 4) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
      do {
        *(undefined4 *)(lVar2 + uVar4) = 0;
        uVar4 = uVar4 + 4;
      } while ((param_2 & 0xfffffffc) != uVar4);
    }
    if (uVar3 != 0) {
      puVar5 = (undefined1 *)(lVar2 + uVar4);
      do {
        uVar3 = uVar3 - 1;
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      } while (uVar3 != 0);
    }
  }
  return;
}

