
undefined8 FUN_003c0740(long param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  
  *(undefined8 *)(param_1 + 200) = param_2;
  if (0 < (int)param_4) {
    uVar2 = (ulong)param_4 & 3;
    if (param_4 < 4) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0;
      do {
        *(undefined1 *)(*(long *)(param_1 + 200) + uVar3) = 0;
        *(undefined1 *)(*(long *)(param_1 + 200) + uVar3 + 1) = 0;
        *(undefined1 *)(*(long *)(param_1 + 200) + uVar3 + 2) = 0;
        lVar1 = *(long *)(param_1 + 200) + uVar3;
        uVar3 = uVar3 + 4;
        *(undefined1 *)(lVar1 + 3) = 0;
      } while (((ulong)param_4 & 0xfffffffc) != uVar3);
    }
    if ((param_4 & 3) != 0) {
      do {
        uVar2 = uVar2 - 1;
        *(undefined1 *)(*(long *)(param_1 + 200) + uVar3) = 0;
        uVar3 = uVar3 + 1;
      } while (uVar2 != 0);
    }
  }
  *(uint *)(param_1 + 0xd0) = param_4;
  return 1;
}

