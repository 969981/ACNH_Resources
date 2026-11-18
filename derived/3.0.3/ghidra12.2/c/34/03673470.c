
void FUN_03673470(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  
  uVar8 = *(int *)(param_1 + 0x78) + *(int *)(param_1 + 0x70) + *(int *)(param_1 + 0x80) & 1;
  if (*(int *)(param_1 + 0x98) == 0) {
    iVar11 = 0x202;
    uVar5 = 0;
  }
  else {
    iVar11 = 0x204;
    uVar5 = 2;
    *(undefined4 *)(param_1 + 0x98) = 0;
  }
  uVar10 = uVar8 ^ 1;
  uVar8 = iVar11 - uVar8;
  if ((*(int *)(param_1 + 0x1357c) == 0) || (*(int *)(param_1 + 0x13590) == 0)) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (*(int *)(param_1 + 0x13598) + -1) * *(int *)(param_1 + 0x13590) +
            (*(uint *)(param_1 + 0x135b4) >> 10);
  }
  uVar9 = 0x201;
  if (uVar6 <= uVar8) {
    do {
      iVar3 = uVar8 - uVar6;
      *(undefined8 *)(param_1 + 0xa4) = 0x400000001;
      iVar11 = 2;
      if (iVar3 == 0) {
        iVar11 = 3;
      }
      if (uVar6 == uVar8 - 2) {
        iVar11 = 1;
      }
      if (uVar10 == 0) {
        uVar8 = uVar6;
        uVar7 = uVar6;
        if (uVar5 == 0) goto LAB_03673618;
LAB_0367357c:
        uVar1 = uVar5;
        if (uVar8 <= uVar5) {
          uVar1 = uVar8;
        }
        uVar2 = uVar5;
        if (uVar5 <= uVar8) {
          uVar2 = uVar8;
        }
        uVar7 = uVar2 - uVar1;
        uVar12 = 0;
        if (uVar8 <= uVar5) {
          uVar7 = 0;
          uVar12 = uVar2 - uVar1;
        }
        *(ulong *)(param_1 + 0x80) = *(long *)(param_1 + 0x80) + (ulong)uVar1;
      }
      else {
        uVar7 = uVar10;
        if (uVar6 <= uVar10) {
          uVar7 = uVar6;
        }
        uVar8 = uVar10;
        if (uVar10 <= uVar6) {
          uVar8 = uVar6;
        }
        bVar4 = uVar6 <= uVar10;
        uVar8 = uVar8 - uVar7;
        uVar10 = 0;
        if (bVar4) {
          uVar10 = uVar8;
        }
        *(ulong *)(param_1 + 0x70) = *(long *)(param_1 + 0x70) + (ulong)uVar7;
        if (bVar4) {
          uVar8 = 0;
        }
        uVar7 = uVar8;
        if (uVar5 != 0) goto LAB_0367357c;
LAB_03673618:
        uVar12 = 0;
      }
      if (uVar9 != 0) {
        uVar8 = uVar9;
        if (uVar7 <= uVar9) {
          uVar8 = uVar7;
        }
        uVar5 = uVar9;
        if (uVar9 <= uVar7) {
          uVar5 = uVar7;
        }
        bVar4 = uVar7 <= uVar9;
        uVar9 = 0;
        if (bVar4) {
          uVar9 = uVar5 - uVar8;
        }
        *(ulong *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + (ulong)uVar8;
      }
      FUN_036726e0(param_1,*(int *)(param_1 + 0xb8) * uVar6);
      *(undefined4 *)(param_1 + 0x98) = 0;
      if ((*(int *)(param_1 + 0x1357c) == 0) || (*(int *)(param_1 + 0x13590) == 0)) {
        uVar6 = 0xffffffff;
      }
      else {
        uVar6 = (*(int *)(param_1 + 0x13598) + -1) * *(int *)(param_1 + 0x13590) +
                (*(uint *)(param_1 + 0x135b4) >> 10);
      }
      uVar8 = iVar11 + iVar3;
      uVar5 = uVar12 + iVar11;
    } while (uVar6 <= uVar8);
    if (uVar8 == 0) {
      return;
    }
  }
  uVar6 = uVar8;
  if (uVar10 != 0) {
    uVar7 = uVar10;
    if (uVar8 <= uVar10) {
      uVar7 = uVar8;
    }
    uVar6 = uVar10;
    if (uVar10 <= uVar8) {
      uVar6 = uVar8;
    }
    uVar6 = uVar6 - uVar7;
    *(ulong *)(param_1 + 0x70) = *(long *)(param_1 + 0x70) + (ulong)uVar7;
    if (uVar8 <= uVar10) {
      uVar6 = 0;
    }
  }
  if (uVar5 != 0) {
    uVar10 = uVar5;
    if (uVar6 <= uVar5) {
      uVar10 = uVar6;
    }
    uVar7 = uVar5;
    if (uVar5 <= uVar6) {
      uVar7 = uVar6;
    }
    bVar4 = uVar6 <= uVar5;
    uVar6 = uVar7 - uVar10;
    if (bVar4) {
      uVar6 = 0;
    }
    *(ulong *)(param_1 + 0x80) = *(long *)(param_1 + 0x80) + (ulong)uVar10;
  }
  if (uVar9 != 0) {
    if (uVar6 <= uVar9) {
      uVar9 = uVar6;
    }
    *(ulong *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + (ulong)uVar9;
  }
  FUN_036726e0(param_1,*(int *)(param_1 + 0xb8) * uVar8);
  return;
}

