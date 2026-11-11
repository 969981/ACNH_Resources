
void FUN_003aa120(long param_1)

{
  int *piVar1;
  ushort uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  
  fVar7 = **(float **)(param_1 + 8);
  if (*(float *)(param_1 + 0x40) != fVar7) {
    uVar2 = *(ushort *)(param_1 + 100);
    lVar4 = *(long *)(param_1 + 0x48);
    if ((*(int *)(param_1 + 0x3c) < 1) || (*(int *)(param_1 + 0x38) < *(int *)(param_1 + 0x3c))) {
      if (uVar2 != 0) {
        lVar5 = 0;
        lVar6 = 0x28;
        do {
          if ((*(byte *)(*(long *)(param_1 + 0x58) + lVar5 + 3) >> 6 & 1) == 0) {
            piVar1 = (int *)(*(long *)(param_1 + 0x70) + lVar6);
            lVar3 = (long)*piVar1;
            FUN_003a13d0(fVar7,piVar1 + -10,lVar4 + lVar3 * 4,*(long *)(param_1 + 0x80) + lVar3);
          }
          lVar5 = lVar5 + 4;
          lVar6 = lVar6 + 0x30;
        } while ((ulong)uVar2 * 4 != lVar5);
      }
    }
    else if (uVar2 != 0) {
      lVar5 = 0;
      lVar6 = 0x24;
      do {
        if ((*(byte *)(*(long *)(param_1 + 0x58) + lVar5 + 3) >> 6 & 1) == 0) {
          piVar1 = (int *)(*(long *)(param_1 + 0x70) + lVar6);
          FUN_003a1490(fVar7,piVar1 + -9,lVar4 + (long)piVar1[1] * 4,
                       *(long *)(param_1 + 0x80) + (long)piVar1[1],
                       *(long *)(param_1 + 0x30) + (long)*piVar1 * 0xc);
        }
        lVar5 = lVar5 + 4;
        lVar6 = lVar6 + 0x30;
      } while ((ulong)uVar2 * 4 != lVar5);
    }
    *(undefined4 *)(param_1 + 0x40) = **(undefined4 **)(param_1 + 8);
  }
  return;
}

