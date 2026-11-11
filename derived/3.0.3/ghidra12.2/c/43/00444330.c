
void FUN_00444330(long *param_1,long param_2,byte param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  byte bVar6;
  long lVar7;
  long lVar8;
  byte *pbVar9;
  long lVar10;
  
  nn::os::LockMutex((MutexType *)&DAT_04c6f450);
  if (param_2 != 0) {
    FUN_004435a0(param_2);
  }
  uVar2 = *(uint *)(param_1 + 1);
  lVar10 = (long)(int)uVar2;
  lVar8 = lVar10 * 0x10;
  lVar4 = 0;
  lVar7 = lVar10 << 0x20;
  do {
    lVar8 = lVar8 + -0x10;
    if (lVar10 + lVar4 < 1) goto LAB_004443ec;
    lVar4 = lVar4 + -1;
    lVar7 = lVar7 + -0x100000000;
  } while (*(long *)(*param_1 + lVar8) != param_2);
  if ((int)(uVar2 + (int)lVar4) < 0) {
LAB_004443ec:
    if (uVar2 == (*(uint *)((long)param_1 + 0xc) & 0x3fffffff)) {
      FUN_00426990(PTR_DAT_048607b8,param_1,0x10);
      uVar2 = *(uint *)(param_1 + 1);
      lVar10 = (long)(int)uVar2;
    }
    lVar7 = *param_1;
    *(long *)(lVar7 + lVar10 * 0x10) = param_2;
    if (param_2 != 0) {
      FUN_004435a0(param_2);
    }
    *(byte *)(lVar7 + lVar10 * 0x10 + 8) = param_3;
    *(uint *)(param_1 + 1) = uVar2 + 1;
    bVar6 = *(byte *)(param_1 + 10);
    if (*(byte *)(param_1 + 10) <= param_3) {
      bVar6 = param_3;
    }
  }
  else {
    *(byte *)(*param_1 + (lVar7 >> 0x1c) + 8) = param_3;
    iVar3 = (int)param_1[1];
    *(undefined1 *)(param_1 + 10) = 0;
    if (iVar3 < 1) goto LAB_00444454;
    uVar5 = (long)iVar3 & 1;
    if (iVar3 == 1) {
      bVar6 = 0;
      lVar7 = 0;
    }
    else {
      bVar6 = 0;
      lVar7 = 0;
      pbVar9 = (byte *)(*param_1 + 0x18);
      do {
        if (bVar6 <= pbVar9[-0x10]) {
          bVar6 = pbVar9[-0x10];
        }
        *(byte *)(param_1 + 10) = bVar6;
        lVar7 = lVar7 + 2;
        if (bVar6 <= *pbVar9) {
          bVar6 = *pbVar9;
        }
        *(byte *)(param_1 + 10) = bVar6;
        pbVar9 = pbVar9 + 0x20;
      } while ((long)iVar3 - uVar5 != lVar7);
      if (uVar5 == 0) goto LAB_00444454;
    }
    bVar1 = *(byte *)(*param_1 + lVar7 * 0x10 + 8);
    if (bVar6 <= bVar1) {
      bVar6 = bVar1;
    }
  }
  *(byte *)(param_1 + 10) = bVar6;
LAB_00444454:
  if (param_2 != 0) {
    FUN_004435c0(param_2);
  }
  nn::os::UnlockMutex((MutexType *)&DAT_04c6f450);
  return;
}

