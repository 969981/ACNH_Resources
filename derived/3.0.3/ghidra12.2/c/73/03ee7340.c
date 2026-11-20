
void FUN_03ee7340(long param_1)

{
  short *psVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  uint uVar8;
  
  uVar3 = *(uint *)(*(long *)(param_1 + 0x10) + 0x290);
  if (0 < (int)uVar3) {
    uVar8 = 0;
    do {
      uVar2 = uVar8;
      if (*(uint *)(param_1 + 0x30) <= uVar8) {
        uVar2 = 0;
      }
      if (0.0 < *(float *)(*(long *)(param_1 + 0x38) + (ulong)uVar2 * 8 + 4)) {
        lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x2e8);
        uVar2 = uVar8;
        if (*(uint *)(*(long *)(param_1 + 0x10) + 0x2e0) <= uVar8) {
          uVar2 = 0;
        }
        uVar4 = *(uint *)(lVar6 + (ulong)uVar2 * 0xd0 + 0x48);
        if ((-1 < (int)uVar4) && ((int)uVar4 < *(int *)(param_1 + 0x20))) {
          psVar1 = (short *)(*(long *)(param_1 + 0x28) + (ulong)uVar4 * 4);
          if (*psVar1 != -1 && psVar1[1] != -1) {
            lVar6 = lVar6 + (ulong)uVar2 * 0xd0;
            uVar2 = *(uint *)(lVar6 + 0x88);
            uVar4 = *(uint *)(lVar6 + 200);
            uVar7 = *(undefined8 *)(*(long *)(param_1 + 8) + 8);
            uVar5 = FUN_03ef9b40(*(long *)(param_1 + 8),(int)psVar1[1]);
            FUN_03ef8c00(uVar7,uVar5,(long)psVar1[1],~uVar4 >> 0x1f,~uVar2 >> 0x1f);
          }
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar3 != uVar8);
  }
  return;
}

