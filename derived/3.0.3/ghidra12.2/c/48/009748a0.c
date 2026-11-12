
void FUN_009748a0(long param_1,long param_2,undefined1 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  
  uVar1 = *(int *)(param_2 + 0x24) + 1;
  uVar4 = *(uint *)(param_2 + 0x14);
  if (uVar1 != uVar4) {
    uVar2 = *(uint *)(param_2 + 0x10);
    uVar6 = uVar2;
    uVar5 = uVar2;
    do {
      if ((((-1 < (int)uVar5) && (-1 < (int)uVar4)) && (uVar5 < *(uint *)(param_1 + 0x38))) &&
         (((uVar4 < *(uint *)(param_1 + 0x3c) &&
           (uVar3 = uVar5 + *(uint *)(param_1 + 0x38) * uVar4, uVar3 < *(uint *)(param_1 + 0x48)))
          && (*(long *)(param_1 + 0x50) != 0)))) {
        lVar7 = *(long *)(param_1 + 0x50) + (long)(int)uVar3 * 0x34;
        *(undefined1 *)(lVar7 + 0x30) = param_3;
        *(undefined1 *)(lVar7 + 0x31) = param_3;
        *(undefined1 *)(lVar7 + 0x32) = param_3;
        *(undefined1 *)(lVar7 + 0x33) = param_3;
        uVar6 = *(uint *)(param_2 + 0x10);
      }
      if ((int)uVar5 < *(int *)(param_2 + 0x20)) {
        uVar5 = uVar5 + 1;
      }
      else {
        uVar4 = uVar4 + 1;
        uVar5 = uVar6;
      }
    } while (uVar2 != uVar5 || uVar1 != uVar4);
  }
  return;
}

