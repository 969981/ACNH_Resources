
void FUN_035a9090(ushort *param_1,uint param_2,uint param_3,ushort *param_4)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  
  if (param_4 == (ushort *)0x0) {
    uVar6 = (uint)*param_1;
    iVar7 = *(int *)(param_1 + 6);
    uVar8 = (uVar6 + iVar7) - 1;
    if ((((uVar6 <= (param_2 & 0xffff)) && ((param_2 & 0xffff) <= (uVar8 & 0xffff))) &&
        (uVar3 = param_1[1], (uint)uVar3 <= (param_3 & 0xffff))) &&
       ((param_3 & 0xffff) <= (((uint)uVar3 + (uint)param_1[8]) - 1 & 0xffff))) {
      lVar9 = *(long *)(param_1 + 0x20);
      uVar1 = (*(int *)(lVar9 + 0x1c) * ((param_3 & 0xffff) - (uint)uVar3) - uVar6) +
              (param_2 & 0xffff);
      uVar5 = 1 << (ulong)(uVar1 & 0x1f);
      uVar2 = *(uint *)(*(long *)(lVar9 + 0x10) + (long)((int)uVar1 >> 5) * 4);
      if ((uVar5 & uVar2) != 0) {
        *(uint *)(*(long *)(lVar9 + 0x10) + ((long)((ulong)uVar1 << 0x20) >> 0x25) * 4) =
             uVar2 & (uVar5 ^ 0xffffffff);
        *(int *)(lVar9 + 0x18) = *(int *)(lVar9 + 0x18) + -1;
        uVar6 = (uint)*param_1;
        iVar7 = *(int *)(param_1 + 6);
        uVar8 = (uVar6 + iVar7) - 1;
      }
    }
    if (((param_2 & 0xffff) <= (uVar8 & 0xffff)) && (uVar6 <= (param_2 & 0xffff))) {
      uVar3 = param_1[1];
      uVar1 = DAT_057763a8 + param_3;
      if (((uint)uVar3 <= (uVar1 & 0xffff)) &&
         ((uVar1 & 0xffff) <= (((uint)uVar3 + (uint)param_1[8]) - 1 & 0xffff))) {
        lVar9 = *(long *)(param_1 + 0x20);
        uVar8 = (*(int *)(lVar9 + 0x1c) * ((uVar1 & 0xffff) - (uint)uVar3) - uVar6) +
                (param_2 & 0xffff);
        uVar2 = 1 << (ulong)(uVar8 & 0x1f);
        uVar1 = *(uint *)(*(long *)(lVar9 + 0x10) + (long)((int)uVar8 >> 5) * 4);
        if ((uVar2 & uVar1) != 0) {
          *(uint *)(*(long *)(lVar9 + 0x10) + ((long)((ulong)uVar8 << 0x20) >> 0x25) * 4) =
               uVar1 & (uVar2 ^ 0xffffffff);
          *(int *)(lVar9 + 0x18) = *(int *)(lVar9 + 0x18) + -1;
          uVar6 = (uint)*param_1;
          iVar7 = *(int *)(param_1 + 6);
        }
        uVar8 = (uVar6 + iVar7) - 1;
      }
    }
    uVar1 = DAT_057763b0 + param_2;
    if (((uVar6 <= (uVar1 & 0xffff)) && ((uVar1 & 0xffff) <= (uVar8 & 0xffff))) &&
       ((uVar3 = param_1[1], (uint)uVar3 <= (param_3 & 0xffff) &&
        ((param_3 & 0xffff) <= (((uint)uVar3 + (uint)param_1[8]) - 1 & 0xffff))))) {
      lVar9 = *(long *)(param_1 + 0x20);
      uVar8 = (*(int *)(lVar9 + 0x1c) * ((param_3 & 0xffff) - (uint)uVar3) - uVar6) +
              (uVar1 & 0xffff);
      uVar2 = 1 << (ulong)(uVar8 & 0x1f);
      uVar1 = *(uint *)(*(long *)(lVar9 + 0x10) + (long)((int)uVar8 >> 5) * 4);
      if ((uVar2 & uVar1) != 0) {
        *(uint *)(*(long *)(lVar9 + 0x10) + ((long)((ulong)uVar8 << 0x20) >> 0x25) * 4) =
             uVar1 & (uVar2 ^ 0xffffffff);
        *(int *)(lVar9 + 0x18) = *(int *)(lVar9 + 0x18) + -1;
        uVar6 = (uint)*param_1;
        iVar7 = *(int *)(param_1 + 6);
      }
      uVar8 = (uVar6 + iVar7) - 1;
    }
    param_2 = DAT_057763b8 + param_2;
    if ((param_2 & 0xffff) < uVar6) {
      return;
    }
    if ((uVar8 & 0xffff) < (param_2 & 0xffff)) {
      return;
    }
    uVar3 = param_1[1];
    uVar8 = (uint)uVar3;
    param_3 = DAT_057763c0 + param_3;
    if ((param_3 & 0xffff) < (uint)uVar3) {
      return;
    }
    if ((((uint)uVar3 + (uint)param_1[8]) - 1 & 0xffff) < (param_3 & 0xffff)) {
      return;
    }
  }
  else {
    uVar3 = *param_1;
    uVar6 = (uint)uVar3;
    iVar7 = *(int *)(param_1 + 6);
    uVar8 = ((uint)uVar3 + iVar7) - 1;
    if (((((uint)uVar3 <= (param_2 & 0xffff)) && ((param_2 & 0xffff) <= (uVar8 & 0xffff))) &&
        (uVar4 = param_1[1], (uint)uVar4 <= (param_3 & 0xffff))) &&
       (((param_3 & 0xffff) <= (((uint)uVar4 + (uint)param_1[8]) - 1 & 0xffff) &&
        (((uint)*param_4 != (param_2 & 0xffff) || ((uint)param_4[1] != (param_3 & 0xffff))))))) {
      lVar9 = *(long *)(param_1 + 0x20);
      uVar1 = (*(int *)(lVar9 + 0x1c) * ((param_3 & 0xffff) - (uint)uVar4) - (uint)uVar3) +
              (param_2 & 0xffff);
      uVar5 = 1 << (ulong)(uVar1 & 0x1f);
      uVar2 = *(uint *)(*(long *)(lVar9 + 0x10) + (long)((int)uVar1 >> 5) * 4);
      if ((uVar5 & uVar2) != 0) {
        *(uint *)(*(long *)(lVar9 + 0x10) + ((long)((ulong)uVar1 << 0x20) >> 0x25) * 4) =
             uVar2 & (uVar5 ^ 0xffffffff);
        *(int *)(lVar9 + 0x18) = *(int *)(lVar9 + 0x18) + -1;
        uVar6 = (uint)*param_1;
        iVar7 = *(int *)(param_1 + 6);
        uVar8 = ((uint)*param_1 + iVar7) - 1;
      }
    }
    if (((param_2 & 0xffff) <= (uVar8 & 0xffff)) && (uVar6 <= (param_2 & 0xffff))) {
      uVar3 = param_1[1];
      uVar1 = DAT_057763a8 + param_3;
      if ((((uint)uVar3 <= (uVar1 & 0xffff)) &&
          ((uVar1 & 0xffff) <= (((uint)uVar3 + (uint)param_1[8]) - 1 & 0xffff))) &&
         (((uint)*param_4 != (param_2 & 0xffff) || ((uint)param_4[1] != (uVar1 & 0xffff))))) {
        lVar9 = *(long *)(param_1 + 0x20);
        uVar8 = (*(int *)(lVar9 + 0x1c) * ((uVar1 & 0xffff) - (uint)uVar3) - uVar6) +
                (param_2 & 0xffff);
        uVar2 = 1 << (ulong)(uVar8 & 0x1f);
        uVar1 = *(uint *)(*(long *)(lVar9 + 0x10) + (long)((int)uVar8 >> 5) * 4);
        if ((uVar2 & uVar1) != 0) {
          *(uint *)(*(long *)(lVar9 + 0x10) + ((long)((ulong)uVar8 << 0x20) >> 0x25) * 4) =
               uVar1 & (uVar2 ^ 0xffffffff);
          *(int *)(lVar9 + 0x18) = *(int *)(lVar9 + 0x18) + -1;
          uVar6 = (uint)*param_1;
          iVar7 = *(int *)(param_1 + 6);
        }
        uVar8 = (uVar6 + iVar7) - 1;
      }
    }
    uVar1 = DAT_057763b0 + param_2;
    if ((((uVar6 <= (uVar1 & 0xffff)) && ((uVar1 & 0xffff) <= (uVar8 & 0xffff))) &&
        (uVar3 = param_1[1], (uint)uVar3 <= (param_3 & 0xffff))) &&
       (((param_3 & 0xffff) <= (((uint)uVar3 + (uint)param_1[8]) - 1 & 0xffff) &&
        (((uint)*param_4 != (uVar1 & 0xffff) || ((uint)param_4[1] != (param_3 & 0xffff))))))) {
      lVar9 = *(long *)(param_1 + 0x20);
      uVar8 = (*(int *)(lVar9 + 0x1c) * ((param_3 & 0xffff) - (uint)uVar3) - uVar6) +
              (uVar1 & 0xffff);
      uVar2 = 1 << (ulong)(uVar8 & 0x1f);
      uVar1 = *(uint *)(*(long *)(lVar9 + 0x10) + (long)((int)uVar8 >> 5) * 4);
      if ((uVar2 & uVar1) != 0) {
        *(uint *)(*(long *)(lVar9 + 0x10) + ((long)((ulong)uVar8 << 0x20) >> 0x25) * 4) =
             uVar1 & (uVar2 ^ 0xffffffff);
        *(int *)(lVar9 + 0x18) = *(int *)(lVar9 + 0x18) + -1;
        uVar6 = (uint)*param_1;
        iVar7 = *(int *)(param_1 + 6);
      }
      uVar8 = (uVar6 + iVar7) - 1;
    }
    param_2 = DAT_057763b8 + param_2;
    if ((param_2 & 0xffff) < uVar6) {
      return;
    }
    if ((uVar8 & 0xffff) < (param_2 & 0xffff)) {
      return;
    }
    uVar3 = param_1[1];
    uVar8 = (uint)uVar3;
    param_3 = DAT_057763c0 + param_3;
    if ((param_3 & 0xffff) < (uint)uVar3) {
      return;
    }
    if ((((uint)uVar3 + (uint)param_1[8]) - 1 & 0xffff) < (param_3 & 0xffff)) {
      return;
    }
    if (((uint)*param_4 == (param_2 & 0xffff)) && ((uint)param_4[1] == (param_3 & 0xffff))) {
      return;
    }
  }
  lVar9 = *(long *)(param_1 + 0x20);
  uVar8 = (*(int *)(lVar9 + 0x1c) * ((param_3 & 0xffff) - uVar8) - uVar6) + (param_2 & 0xffff);
  uVar1 = 1 << (ulong)(uVar8 & 0x1f);
  uVar6 = *(uint *)(*(long *)(lVar9 + 0x10) + (long)((int)uVar8 >> 5) * 4);
  if ((uVar1 & uVar6) == 0) {
    return;
  }
  *(uint *)(*(long *)(lVar9 + 0x10) + ((long)((ulong)uVar8 << 0x20) >> 0x25) * 4) =
       uVar6 & (uVar1 ^ 0xffffffff);
  *(int *)(lVar9 + 0x18) = *(int *)(lVar9 + 0x18) + -1;
  return;
}

