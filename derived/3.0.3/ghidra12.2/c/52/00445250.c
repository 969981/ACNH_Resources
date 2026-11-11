
void FUN_00445250(long param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  uVar1 = *(uint *)(param_1 + 0x40);
  if (0 < (int)uVar1) {
    lVar4 = 0;
    do {
      if (*(long *)(*(long *)(param_1 + 0x38) + lVar4 * 8) == param_2) {
        if (-1 < (int)lVar4) {
          return;
        }
        break;
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < (int)uVar1);
  }
  if (uVar1 == (*(uint *)(param_1 + 0x44) & 0x3fffffff)) {
    FUN_00426990(PTR_DAT_048607b8,(long *)(param_1 + 0x38),8);
    uVar1 = *(uint *)(param_1 + 0x40);
  }
  uVar5 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
  *(long *)(*(long *)(param_1 + 0x38) + uVar5) = param_2;
  iVar3 = uVar1 + 1;
  lVar4 = *(long *)(param_1 + 0x38);
  *(int *)(param_1 + 0x40) = iVar3;
  lVar6 = **(long **)(lVar4 + uVar5);
  if (lVar6 != 0) {
    do {
      uVar2 = FUN_00442af0();
      FUN_00444330(lVar6,uVar2,3);
      lVar6 = *(long *)(lVar6 + 0x60);
    } while (lVar6 != 0);
    lVar4 = *(long *)(param_1 + 0x38);
    iVar3 = *(int *)(param_1 + 0x40);
  }
  FUN_00445970(param_1 + 0x48,**(undefined8 **)(lVar4 + (long)(iVar3 + -1) * 8));
  return;
}

