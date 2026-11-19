
bool FUN_03b370a0(uint *param_1,ulong param_2)

{
  uint *puVar1;
  char *__s1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  uint *puVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar2 = *param_1;
  if ((uVar2 & 0xff) != 0xc2) {
    return false;
  }
  uVar6 = (ulong)(uVar2 >> 8);
  if ((param_2 & 1) == 0) {
    if (uVar2 < 0x100) {
      return false;
    }
    puVar7 = param_1 + 2;
    uVar8 = uVar6;
    do {
      if (*(char *)((long)param_1 + (long)(int)*puVar7 + -1) != '\0') {
        return false;
      }
      uVar8 = uVar8 - 1;
      puVar7 = puVar7 + 1;
    } while (uVar8 != 0);
  }
  else {
    uVar6 = uVar6 & 0xff00 | (ulong)(uVar2 >> 0x18) | (uVar6 & 0xff) << 0x10;
    if ((int)uVar6 == 0) {
      return false;
    }
    puVar7 = param_1 + 2;
    uVar8 = uVar6;
    do {
      uVar2 = (*puVar7 & 0xff00ff00) >> 8 | (*puVar7 & 0xff00ff) << 8;
      if (*(char *)((long)param_1 + (long)(int)(uVar2 >> 0x10 | uVar2 << 0x10) + -1) != '\0') {
        return false;
      }
      uVar8 = uVar8 - 1;
      puVar7 = puVar7 + 1;
    } while (uVar8 != 0);
  }
  puVar7 = param_1 + 2;
  uVar8 = uVar6;
  if ((param_2 & 1) == 0) {
    while (uVar8 != 0) {
      puVar1 = puVar7 + -1;
      uVar2 = *puVar7;
      puVar7 = puVar7 + 1;
      uVar8 = uVar8 - 1;
      if ((int)uVar2 <= (int)*puVar1) {
        return false;
      }
    }
  }
  else {
    while (uVar8 != 0) {
      puVar1 = puVar7 + -1;
      uVar2 = *puVar7;
      puVar7 = puVar7 + 1;
      uVar8 = uVar8 - 1;
      uVar3 = (*puVar1 & 0xff00ff00) >> 8 | (*puVar1 & 0xff00ff) << 8;
      uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
      if ((int)(uVar2 >> 0x10 | uVar2 << 0x10) <= (int)(uVar3 >> 0x10 | uVar3 << 0x10)) {
        return false;
      }
    }
  }
  uVar3 = param_1[1];
  uVar8 = (ulong)uVar3;
  uVar2 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
  uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
  if ((param_2 & 1) == 0) {
    uVar2 = uVar3;
  }
  if (uVar2 != (int)uVar6 * 4 + 8U) {
    return false;
  }
  uVar2 = (int)uVar6 - 1;
  uVar9 = (ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU));
  uVar6 = 0;
  if ((param_2 & 1) == 0) {
    do {
      if (uVar9 == uVar6) goto LAB_03b3725c;
      __s1 = (char *)((long)param_1 + uVar8);
      uVar8 = (ulong)param_1[uVar6 + 2];
      uVar6 = uVar6 + 1;
      iVar5 = strcmp(__s1,(char *)((long)param_1 + uVar8));
    } while (iVar5 < 1);
  }
  else {
    do {
      if (uVar9 == uVar6) goto LAB_03b3725c;
      uVar4 = ((uint)uVar8 & 0xff00ff00) >> 8 | ((uint)uVar8 & 0xff00ff) << 8;
      uVar3 = param_1[uVar6 + 2];
      uVar8 = (ulong)uVar3;
      uVar6 = uVar6 + 1;
      uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
      iVar5 = strcmp((char *)((long)param_1 + (ulong)(uVar4 >> 0x10 | uVar4 << 0x10)),
                     (char *)((long)param_1 + (ulong)(uVar3 >> 0x10 | uVar3 << 0x10)));
    } while (iVar5 < 1);
  }
  uVar9 = uVar6 - 1;
LAB_03b3725c:
  return (long)(int)uVar2 <= (long)uVar9;
}

