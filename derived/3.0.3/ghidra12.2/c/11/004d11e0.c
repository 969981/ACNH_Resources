
void FUN_004d11e0(undefined8 *param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  int iVar5;
  undefined4 uVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  
  iVar5 = param_2 + 1;
  if ((int)(*(uint *)((long)param_1 + 0x4c) & 0x3fffffff) <= param_2) {
    uVar4 = FUN_00426720(PTR_DAT_048607b8,iVar5,0x40,param_1[8],*(undefined4 *)(param_1 + 9));
    param_1[8] = uVar4;
  }
  if ((param_2 < *(int *)(param_1 + 9)) && (*(int *)(param_1 + 9) <= iVar5)) {
    uVar8 = *(uint *)((long)param_1 + 0x49c);
  }
  else {
    *(int *)(param_1 + 9) = iVar5;
    uVar8 = *(uint *)((long)param_1 + 0x49c);
  }
  if (param_2 < (int)(uVar8 & 0x3fffffff)) {
    iVar1 = *(int *)(param_1 + 0x93);
  }
  else {
    uVar4 = FUN_00426720(PTR_DAT_048607b8,iVar5,0x40,param_1[0x92],*(undefined4 *)(param_1 + 0x93),
                         (long)param_1 + 0x49c);
    param_1[0x92] = uVar4;
    iVar1 = *(int *)(param_1 + 0x93);
  }
  if ((iVar1 <= param_2) || (iVar5 < iVar1)) {
    *(int *)(param_1 + 0x93) = iVar5;
  }
  uVar2 = *(int *)(param_1 + 9) - 1;
  uVar8 = param_3;
  if (uVar2 != 1) {
    uVar8 = param_4;
  }
  if ((int)uVar8 < 0) {
    *param_1 = 0x100000000;
    param_1[1] = 0x100000001;
    if (0 < (int)uVar2) {
      uVar7 = (ulong)(int)uVar2;
      if ((uVar7 & 1) != 0) {
        lVar9 = uVar7 * 0x40;
        uVar7 = uVar7 - 1;
        *(undefined8 *)(param_1[0x92] + lVar9) = 0;
        *(undefined4 *)(param_1[8] + lVar9) = 0;
      }
      if (uVar2 != 1) {
        lVar9 = uVar7 << 6;
        do {
          *(undefined8 *)(param_1[0x92] + lVar9) = 0;
          *(undefined4 *)(param_1[8] + lVar9) = 0;
          *(undefined8 *)(param_1[0x92] + lVar9 + -0x40) = 0;
          uVar7 = uVar7 - 2;
          lVar3 = param_1[8] + lVar9;
          lVar9 = lVar9 + -0x80;
          *(undefined4 *)(lVar3 + -0x40) = 0;
        } while (0 < (long)uVar7);
      }
    }
    uVar6 = 0;
    uVar7 = (ulong)param_3 << 0x20;
  }
  else {
    iVar5 = 0;
    if (uVar2 != 0) {
      iVar5 = (int)param_3 / (int)uVar2;
    }
    *param_1 = 1;
    iVar1 = iVar5;
    if (iVar5 < 2) {
      iVar1 = 1;
    }
    *(uint *)(param_1 + 1) = uVar8;
    *(int *)((long)param_1 + 0xc) = iVar1;
    if ((int)uVar2 < 1) {
      uVar7 = 0;
    }
    else {
      uVar7 = -(ulong)(uVar2 >> 0x1f) & 0xffffffc000000000 | (ulong)uVar2 << 6;
      lVar9 = (long)(int)uVar2;
      uVar8 = 0;
      do {
        lVar3 = lVar9 + -1;
        iVar1 = param_3 - uVar8;
        if (lVar3 != 0) {
          iVar1 = iVar5;
        }
        uVar2 = iVar1 + uVar8;
        *(ulong *)(param_1[0x92] + uVar7) = CONCAT44(uVar2,uVar8);
        *(int *)(param_1[8] + uVar7) = (int)lVar9;
        uVar7 = uVar7 - 0x40;
        lVar9 = lVar3;
        iVar5 = iVar1;
        uVar8 = uVar2;
      } while (0 < lVar3);
      uVar7 = (ulong)uVar2;
    }
    uVar7 = uVar7 | (ulong)param_3 << 0x20;
    uVar6 = 1;
  }
  *(ulong *)param_1[0x92] = uVar7;
  *(undefined4 *)param_1[8] = uVar6;
  return;
}

