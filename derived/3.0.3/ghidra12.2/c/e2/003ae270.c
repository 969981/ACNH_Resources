
void FUN_003ae270(long *param_1,long param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong local_80 [4];
  
  lVar2 = 0;
  if (*(long *)(param_3 + 0xd0) != 0 && param_2 != 0) {
    lVar2 = param_2 + *(long *)(param_3 + 0xe8);
  }
  param_1[9] = lVar2;
  if (lVar2 != 0) {
    lVar2 = *(long *)(*param_1 + 0x10);
    FUN_003a0d90(lVar2,local_80);
    uVar3 = (ulong)*(byte *)(lVar2 + 0x4d);
    if (uVar3 != 0) {
      uVar4 = 0;
      lVar2 = 0;
      if (*(long *)(param_3 + 0xf0) != 0 && param_2 != 0) {
        lVar2 = param_2 + *(long *)(param_3 + 0x108);
      }
      do {
        if ((local_80[uVar4 >> 6 & 0x3ffffff] >> (uVar4 & 0x3f) & 1) == 0) {
          *(undefined8 *)(param_1[9] + uVar4 * 8) = 0;
        }
        else {
          *(long *)(param_1[9] + uVar4 * 8) = lVar2;
          bVar1 = *(byte *)((long)param_1 + 0xf);
          if ((ulong)bVar1 != 0) {
            lVar5 = 0;
            do {
              FUN_00347b80(*(long *)(param_1[9] + uVar4 * 8) + lVar5);
              lVar5 = lVar5 + 0x48;
            } while ((ulong)bVar1 * 0x48 != lVar5);
            lVar2 = lVar2 + (ulong)(bVar1 - 1) * 0x48 + 0x48;
          }
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 != uVar3);
    }
  }
  return;
}

