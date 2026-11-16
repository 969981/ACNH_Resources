
void FUN_026b52f0(long param_1,long *param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  short *psVar4;
  ulong uVar5;
  int iVar6;
  int iVar7;
  
  if (param_2 != (long *)0x0) {
    if (param_3 == 0) {
      iVar6 = 0;
      iVar7 = 0x18;
      do {
        psVar4 = (short *)(param_1 + 0x1094c + (long)iVar6 * 0x2c);
        if (*psVar4 != -2) {
          lVar3 = (**(code **)(*param_2 + 0x18))(param_2);
          uVar2 = FUN_0277d6c4(psVar4);
          if ((uVar2 >> 3 & 0x1fff) < 0x753) {
            lVar1 = (ulong)((uVar2 & 0xffff) >> 5) * 4;
            *(uint *)(lVar3 + lVar1) =
                 *(uint *)(lVar3 + lVar1) & (1 << (ulong)(uVar2 & 0x1f) ^ 0xffffffffU);
          }
        }
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
    }
    else {
      uVar5 = 0;
      iVar6 = 0;
      do {
        psVar4 = (short *)(param_1 + 0x1094c + (long)iVar6 * 0x2c);
        if (*psVar4 != -2) {
          lVar3 = (**(code **)(*param_2 + 0x18))(param_2);
          uVar2 = FUN_0277d6c4(psVar4);
          if ((uVar2 >> 3 & 0x1fff) < 0x753) {
            lVar1 = (ulong)((uVar2 & 0xffff) >> 5) * 4;
            *(uint *)(lVar3 + lVar1) =
                 *(uint *)(lVar3 + lVar1) & (1 << (ulong)(uVar2 & 0x1f) ^ 0xffffffffU);
          }
          lVar3 = (uVar5 >> 5) * 4;
          *(uint *)(param_3 + lVar3) =
               *(uint *)(param_3 + lVar3) & (1 << (ulong)((uint)uVar5 & 0x1f) ^ 0xffffffffU);
        }
        uVar2 = (uint)uVar5 + 1;
        uVar5 = (ulong)uVar2;
        iVar6 = iVar6 + 1;
      } while (uVar2 != 0x18);
    }
    if (param_3 == 0) {
      iVar6 = 0;
      do {
        psVar4 = (short *)(param_1 + 0x10d6c + (long)iVar6 * 0x2c);
        if (*psVar4 != -2) {
          lVar3 = (**(code **)(*param_2 + 0x18))(param_2);
          uVar2 = FUN_0277d6c4(psVar4);
          if ((uVar2 >> 3 & 0x1fff) < 0x753) {
            lVar1 = (ulong)((uVar2 & 0xffff) >> 5) * 4;
            *(uint *)(lVar3 + lVar1) =
                 *(uint *)(lVar3 + lVar1) & (1 << (ulong)(uVar2 & 0x1f) ^ 0xffffffffU);
          }
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 != 0x20);
    }
    else {
      iVar6 = 0;
      uVar5 = 0x18;
      do {
        psVar4 = (short *)(param_1 + 0x10d6c + (long)iVar6 * 0x2c);
        if (*psVar4 != -2) {
          lVar3 = (**(code **)(*param_2 + 0x18))(param_2);
          uVar2 = FUN_0277d6c4(psVar4);
          if ((uVar2 >> 3 & 0x1fff) < 0x753) {
            lVar1 = (ulong)((uVar2 & 0xffff) >> 5) * 4;
            *(uint *)(lVar3 + lVar1) =
                 *(uint *)(lVar3 + lVar1) & (1 << (ulong)(uVar2 & 0x1f) ^ 0xffffffffU);
          }
          lVar3 = (uVar5 >> 5) * 4;
          *(uint *)(param_3 + lVar3) =
               *(uint *)(param_3 + lVar3) & (1 << (ulong)((uint)uVar5 & 0x1f) ^ 0xffffffffU);
        }
        uVar2 = (uint)uVar5 + 1;
        uVar5 = (ulong)uVar2;
        iVar6 = iVar6 + 1;
      } while (uVar2 != 0x38);
    }
  }
  return;
}

