
uint FUN_02057ea0(long param_1)

{
  uint uVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = 5;
  if (*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2) {
    uVar4 = 10;
  }
  bVar2 = *(int *)(param_1 + 0x90) != 0;
  uVar6 = 1;
  if (bVar2) {
    uVar6 = 2;
  }
  bVar3 = *(int *)(param_1 + 200) != 0;
  uVar5 = (uint)bVar2;
  if (bVar3) {
    uVar5 = uVar6;
  }
  uVar6 = (uint)bVar2;
  uVar1 = (uint)bVar2;
  if (bVar3) {
    uVar6 = (uint)bVar2 << 1;
    uVar1 = -(uint)bVar2;
  }
  bVar2 = *(int *)(param_1 + 0x100) == 0;
  if (bVar2) {
    uVar1 = uVar6;
  }
  if (!bVar2) {
    uVar5 = uVar5 + 1;
  }
  uVar6 = 3;
  if (-1 < (int)uVar1) {
    uVar6 = uVar1;
  }
  bVar2 = *(int *)(param_1 + 0x138) == 0;
  if (bVar2) {
    uVar1 = uVar6;
  }
  if (!bVar2) {
    uVar5 = uVar5 + 1;
  }
  if (*(int *)(param_1 + 0x170) == 0) {
    uVar6 = 4;
    if (-1 < (int)uVar1) {
      uVar6 = uVar1;
    }
  }
  else {
    uVar5 = uVar5 + 1;
    uVar6 = uVar1;
    if (uVar4 <= uVar5) {
      return 0xffffffff;
    }
  }
  if (*(int *)(param_1 + 0x1a8) == 0) {
    uVar1 = 5;
    if (-1 < (int)uVar6) {
      uVar1 = uVar6;
    }
  }
  else {
    uVar5 = uVar5 + 1;
    uVar1 = uVar6;
    if (uVar4 <= uVar5) {
      return 0xffffffff;
    }
  }
  if (*(int *)(param_1 + 0x1e0) == 0) {
    uVar6 = 6;
    if (-1 < (int)uVar1) {
      uVar6 = uVar1;
    }
  }
  else {
    uVar5 = uVar5 + 1;
    uVar6 = uVar1;
    if (uVar4 <= uVar5) {
      return 0xffffffff;
    }
  }
  if (*(int *)(param_1 + 0x218) == 0) {
    uVar1 = 7;
    if (-1 < (int)uVar6) {
      uVar1 = uVar6;
    }
  }
  else {
    uVar5 = uVar5 + 1;
    uVar1 = uVar6;
    if (uVar4 <= uVar5) {
      return 0xffffffff;
    }
  }
  if (*(int *)(param_1 + 0x250) == 0) {
    uVar6 = 8;
    if (-1 < (int)uVar1) {
      uVar6 = uVar1;
    }
  }
  else {
    uVar5 = uVar5 + 1;
    uVar6 = uVar1;
    if (uVar4 <= uVar5) {
      return 0xffffffff;
    }
  }
  if (*(int *)(param_1 + 0x288) == 0) {
    uVar1 = 9;
    if (-1 < (int)uVar6) {
      uVar1 = uVar6;
    }
  }
  else {
    uVar1 = uVar6;
    if (uVar4 <= uVar5 + 1) {
      return 0xffffffff;
    }
  }
  return uVar1;
}

