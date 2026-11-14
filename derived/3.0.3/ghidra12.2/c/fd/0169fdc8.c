
void FUN_0169fdc8(long param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  float fVar9;
  
  lVar7 = *(long *)(param_1 + 0xb20);
  if (7 < *(int *)(lVar7 + 0x1608)) {
    uVar3 = *(uint *)(lVar7 + 0xf68);
    uVar4 = *(uint *)(lVar7 + 0xf6c);
    uVar1 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
    iVar2 = -(uint)((int)uVar3 < 1);
    uVar3 = uVar4;
    if ((int)uVar4 <= (int)uVar1) {
      uVar3 = uVar1;
    }
    uVar5 = *(uint *)(lVar7 + 0xf70);
    if ((int)uVar1 < (int)uVar4) {
      iVar2 = 1;
    }
    uVar1 = uVar5;
    if ((int)uVar5 <= (int)uVar3) {
      uVar1 = uVar3;
    }
    uVar4 = *(uint *)(lVar7 + 0xf74);
    iVar6 = 2;
    if ((int)uVar5 <= (int)uVar3) {
      iVar6 = iVar2;
    }
    uVar3 = uVar4;
    if ((int)uVar4 <= (int)uVar1) {
      uVar3 = uVar1;
    }
    uVar5 = *(uint *)(lVar7 + 0xf78);
    iVar2 = 3;
    if ((int)uVar4 <= (int)uVar1) {
      iVar2 = iVar6;
    }
    uVar1 = uVar5;
    if ((int)uVar5 <= (int)uVar3) {
      uVar1 = uVar3;
    }
    uVar4 = *(uint *)(lVar7 + 0xf7c);
    iVar6 = 4;
    if ((int)uVar5 <= (int)uVar3) {
      iVar6 = iVar2;
    }
    uVar3 = uVar4;
    if ((int)uVar4 <= (int)uVar1) {
      uVar3 = uVar1;
    }
    uVar5 = *(uint *)(lVar7 + 0xf80);
    iVar2 = 5;
    if ((int)uVar4 <= (int)uVar1) {
      iVar2 = iVar6;
    }
    uVar1 = uVar5;
    if ((int)uVar5 <= (int)uVar3) {
      uVar1 = uVar3;
    }
    uVar4 = *(uint *)(lVar7 + 0xf84);
    iVar6 = 6;
    if ((int)uVar5 <= (int)uVar3) {
      iVar6 = iVar2;
    }
    uVar3 = uVar4;
    if ((int)uVar4 <= (int)uVar1) {
      uVar3 = uVar1;
    }
    uVar5 = *(uint *)(lVar7 + 0xf88);
    iVar2 = 7;
    if ((int)uVar4 <= (int)uVar1) {
      iVar2 = iVar6;
    }
    uVar1 = uVar5;
    if ((int)uVar5 <= (int)uVar3) {
      uVar1 = uVar3;
    }
    uVar4 = *(uint *)(lVar7 + 0xf8c);
    iVar6 = 8;
    if ((int)uVar5 <= (int)uVar3) {
      iVar6 = iVar2;
    }
    uVar3 = uVar4;
    if ((int)uVar4 <= (int)uVar1) {
      uVar3 = uVar1;
    }
    uVar5 = *(uint *)(lVar7 + 0xf90);
    iVar2 = 9;
    if ((int)uVar4 <= (int)uVar1) {
      iVar2 = iVar6;
    }
    uVar1 = uVar5;
    if ((int)uVar5 <= (int)uVar3) {
      uVar1 = uVar3;
    }
    uVar4 = *(uint *)(lVar7 + 0xf94);
    iVar6 = 10;
    if ((int)uVar5 <= (int)uVar3) {
      iVar6 = iVar2;
    }
    uVar3 = uVar4;
    if ((int)uVar4 <= (int)uVar1) {
      uVar3 = uVar1;
    }
    uVar5 = *(uint *)(lVar7 + 0xf98);
    iVar2 = 0xb;
    if ((int)uVar4 <= (int)uVar1) {
      iVar2 = iVar6;
    }
    uVar1 = uVar5;
    if ((int)uVar5 <= (int)uVar3) {
      uVar1 = uVar3;
    }
    iVar6 = 0xc;
    if ((int)uVar5 <= (int)uVar3) {
      iVar6 = iVar2;
    }
    uVar3 = *(uint *)(lVar7 + 0xf9c);
    iVar2 = 0xd;
    if ((int)*(uint *)(lVar7 + 0xf9c) <= (int)uVar1) {
      uVar3 = uVar1;
      iVar2 = iVar6;
    }
    if (iVar2 != -1) {
      fVar9 = (float)*(int *)(lVar7 + 0x1608);
      if (fVar9 * 0.9 <= (float)(int)uVar3) {
        lVar8 = *(long *)(param_1 + 0xb18);
        iVar6 = *(int *)(lVar8 + 0x38) + uVar3 * 600;
        lVar7 = 0x1604;
      }
      else {
        if ((float)(int)uVar3 < fVar9 * 0.7) {
          return;
        }
        lVar8 = *(long *)(param_1 + 0xb18);
        iVar6 = *(int *)(lVar8 + 0x38) + uVar3 * 200;
        lVar7 = 0x1600;
      }
      *(int *)(lVar8 + 0x38) = iVar6;
      *(int *)(*(long *)(param_1 + 0xb20) + lVar7) = iVar2;
    }
  }
  return;
}

