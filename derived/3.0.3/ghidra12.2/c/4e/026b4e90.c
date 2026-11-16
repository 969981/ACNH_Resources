
void FUN_026b4e90(long param_1,long *param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  short *psVar5;
  ulong uVar6;
  int iVar7;
  int iVar8;
  
  if (param_2 != (long *)0x0) {
    lVar4 = param_1 + 0x1094c;
    if (param_3 == 0) {
      iVar7 = 0;
      iVar8 = 0x18;
      do {
        psVar5 = (short *)(lVar4 + (long)iVar7 * 0x2c);
        if ((*psVar5 != -2) && (*(char *)(lVar4 + (long)iVar7 * 0x2c + 0x2b) == '\0')) {
          FUN_0277dedc(psVar5);
          lVar3 = (**(code **)(*param_2 + 0x18))(param_2);
          uVar2 = FUN_0277d6c4(psVar5);
          if ((uVar2 >> 3 & 0x1fff) < 0x753) {
            lVar1 = (ulong)((uVar2 & 0xffff) >> 5) * 4;
            *(uint *)(lVar3 + lVar1) = *(uint *)(lVar3 + lVar1) | 1 << (ulong)(uVar2 & 0x1f);
          }
        }
        iVar7 = iVar7 + 1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    else {
      uVar6 = 0;
      iVar7 = 0;
      do {
        psVar5 = (short *)(lVar4 + (long)iVar7 * 0x2c);
        if ((*psVar5 != -2) && (*(char *)(lVar4 + (long)iVar7 * 0x2c + 0x2b) == '\0')) {
          FUN_0277dedc(psVar5);
          lVar3 = (**(code **)(*param_2 + 0x18))(param_2);
          uVar2 = FUN_0277d6c4(psVar5);
          if ((uVar2 >> 3 & 0x1fff) < 0x753) {
            lVar1 = (ulong)((uVar2 & 0xffff) >> 5) * 4;
            *(uint *)(lVar3 + lVar1) = *(uint *)(lVar3 + lVar1) | 1 << (ulong)(uVar2 & 0x1f);
          }
          lVar3 = (uVar6 >> 5) * 4;
          *(uint *)(param_3 + lVar3) = *(uint *)(param_3 + lVar3) | 1 << (ulong)((uint)uVar6 & 0x1f)
          ;
        }
        uVar2 = (uint)uVar6 + 1;
        uVar6 = (ulong)uVar2;
        iVar7 = iVar7 + 1;
      } while (uVar2 != 0x18);
    }
    param_1 = param_1 + 0x10d6c;
    if (param_3 == 0) {
      iVar7 = 0;
      do {
        psVar5 = (short *)(param_1 + (long)iVar7 * 0x2c);
        if ((*psVar5 != -2) && (*(char *)(param_1 + (long)iVar7 * 0x2c + 0x2b) == '\0')) {
          FUN_0277dedc(psVar5);
          lVar4 = (**(code **)(*param_2 + 0x18))(param_2);
          uVar2 = FUN_0277d6c4(psVar5);
          if ((uVar2 >> 3 & 0x1fff) < 0x753) {
            lVar3 = (ulong)((uVar2 & 0xffff) >> 5) * 4;
            *(uint *)(lVar4 + lVar3) = *(uint *)(lVar4 + lVar3) | 1 << (ulong)(uVar2 & 0x1f);
          }
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 != 0x20);
    }
    else {
      iVar7 = 0;
      uVar6 = 0x18;
      do {
        psVar5 = (short *)(param_1 + (long)iVar7 * 0x2c);
        if ((*psVar5 != -2) && (*(char *)(param_1 + (long)iVar7 * 0x2c + 0x2b) == '\0')) {
          FUN_0277dedc(psVar5);
          lVar4 = (**(code **)(*param_2 + 0x18))(param_2);
          uVar2 = FUN_0277d6c4(psVar5);
          if ((uVar2 >> 3 & 0x1fff) < 0x753) {
            lVar3 = (ulong)((uVar2 & 0xffff) >> 5) * 4;
            *(uint *)(lVar4 + lVar3) = *(uint *)(lVar4 + lVar3) | 1 << (ulong)(uVar2 & 0x1f);
          }
          lVar4 = (uVar6 >> 5) * 4;
          *(uint *)(param_3 + lVar4) = *(uint *)(param_3 + lVar4) | 1 << (ulong)((uint)uVar6 & 0x1f)
          ;
        }
        uVar2 = (uint)uVar6 + 1;
        uVar6 = (ulong)uVar2;
        iVar7 = iVar7 + 1;
      } while (uVar2 != 0x38);
    }
  }
  return;
}

