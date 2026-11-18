
void FUN_033cff20(int param_1,int param_2)

{
  uint *puVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte bVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  byte local_4c [4];
  byte local_48 [4];
  byte local_44 [4];
  
  FUN_0252d11c(local_4c);
  puVar10 = PTR_DAT_04bb39b0;
  pbVar6 = PTR_DAT_04bb32e0;
  if (7 < local_4c[0]) {
    local_4c[0] = 0xff;
  }
  local_48[0] = *PTR_DAT_04bb32e0;
  bVar7 = local_48[0];
  if (7 < local_48[0]) {
    bVar7 = 0xff;
  }
  if (local_4c[0] == bVar7) {
    return;
  }
  if (local_48[0] < 8) {
LAB_033d0064:
    uVar3 = FUN_02582d8c(local_48,1);
    puVar9 = PTR_DAT_04bb4fb8;
    if (((7 < uVar3) ||
        (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar3 * 0x13f0 + 0x13d4) == '\0')) ||
       ((*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar3 * 0x13f0 + 0x13d6) == '\0' ||
        ((uVar3 = FUN_02582d8c(local_48,1), 7 < uVar3 ||
         (*(char *)(*(long *)puVar9 + (ulong)uVar3 * 0x13f0 + 0x13d4) == '\0'))))))
    goto LAB_033d00ec;
    puVar9 = (undefined *)(*(long *)puVar9 + (ulong)uVar3 * 0x13f0 + 0x6b0);
  }
  else {
    lVar8 = *(long *)PTR_DAT_04bb39b0;
    if (lVar8 == 0) {
LAB_033cffdc:
      if (DAT_0537d558 != (long *)0x0) {
        lVar8 = *DAT_0537d558;
        bVar7 = *(byte *)(lVar8 + 0x473);
        pbVar5 = PTR_DAT_04bb5038;
        if ((long)(char)bVar7 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar8 + 0x48) + ((long)(char)bVar7 & 0xffffffffU) * 0x20;
          if (7 < bVar7) {
            puVar1 = (uint *)(lVar8 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar5 = (byte *)(lVar8 + 0x471);
          }
        }
        local_48[0] = *pbVar5;
        if (local_48[0] < 8) goto LAB_033d0064;
      }
      pbVar5 = &DAT_0548e168;
    }
    else {
      pbVar5 = PTR_DAT_04bb32e0;
      if (*(int *)(lVar8 + 0x15c) != 0) {
        pbVar5 = (byte *)(lVar8 + 0x158);
      }
      if ((7 < *pbVar5) &&
         (((*(int *)(lVar8 + 0x15c) == 0 || (DAT_054f5738 == 0)) ||
          (pbVar5 = (byte *)(DAT_054f5738 + 0x11a5), 7 < *pbVar5)))) goto LAB_033cffdc;
    }
    local_48[0] = *pbVar5;
    if (local_48[0] < 8) goto LAB_033d0064;
    local_48[0] = 0xff;
LAB_033d00ec:
    puVar9 = &DAT_05745710;
    FUN_033d2620(&DAT_05745710);
  }
  local_44[0] = *pbVar6;
  if (local_44[0] < 8) {
LAB_033d01e8:
    uVar3 = FUN_02582d8c(local_44,1);
    puVar10 = PTR_DAT_04bb4fb8;
    if (((uVar3 < 8) &&
        (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar3 * 0x13f0 + 0x13d4) != '\0')) &&
       ((*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar3 * 0x13f0 + 0x13d6) != '\0' &&
        ((uVar3 = FUN_02582d8c(local_44,1), uVar3 < 8 &&
         (*(char *)(*(long *)puVar10 + (ulong)uVar3 * 0x13f0 + 0x13d4) != '\0')))))) {
      puVar10 = (undefined *)(*(long *)puVar10 + (ulong)uVar3 * 0x13f0 + 0x6b0);
      goto LAB_033d0280;
    }
  }
  else {
    lVar8 = *(long *)puVar10;
    if (lVar8 == 0) {
LAB_033d0160:
      if (DAT_0537d558 != (long *)0x0) {
        lVar8 = *DAT_0537d558;
        bVar7 = *(byte *)(lVar8 + 0x473);
        pbVar6 = PTR_DAT_04bb5038;
        if ((long)(char)bVar7 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar8 + 0x48) + ((long)(char)bVar7 & 0xffffffffU) * 0x20;
          if (7 < bVar7) {
            puVar1 = (uint *)(lVar8 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar6 = (byte *)(lVar8 + 0x471);
          }
        }
        local_44[0] = *pbVar6;
        if (local_44[0] < 8) goto LAB_033d01e8;
      }
      pbVar6 = &DAT_0548e168;
    }
    else {
      if (*(int *)(lVar8 + 0x15c) != 0) {
        pbVar6 = (byte *)(lVar8 + 0x158);
      }
      if ((7 < *pbVar6) &&
         (((*(int *)(lVar8 + 0x15c) == 0 || (DAT_054f5738 == 0)) ||
          (pbVar6 = (byte *)(DAT_054f5738 + 0x11a5), 7 < *pbVar6)))) goto LAB_033d0160;
    }
    local_44[0] = *pbVar6;
    if (local_44[0] < 8) goto LAB_033d01e8;
    local_44[0] = 0xff;
  }
  puVar10 = &DAT_05745710;
  FUN_033d2620(&DAT_05745710);
LAB_033d0280:
  iVar4 = param_2;
  if ((*(int *)(puVar9 + 0x130) == param_1) ||
     (iVar4 = param_1, *(int *)(puVar9 + 0x130) == param_2)) {
    *(int *)(puVar9 + 0x130) = iVar4;
  }
  iVar4 = param_2;
  if ((*(int *)(puVar10 + 0x194) == param_1) ||
     (iVar4 = param_1, *(int *)(puVar10 + 0x194) == param_2)) {
    *(int *)(puVar10 + 0x194) = iVar4;
  }
  iVar4 = param_2;
  if ((*(int *)(puVar9 + 0x134) == param_1) ||
     (iVar4 = param_1, *(int *)(puVar9 + 0x134) == param_2)) {
    *(int *)(puVar9 + 0x134) = iVar4;
  }
  iVar4 = param_2;
  if ((*(int *)(puVar10 + 0x198) == param_1) ||
     (iVar4 = param_1, *(int *)(puVar10 + 0x198) == param_2)) {
    *(int *)(puVar10 + 0x198) = iVar4;
  }
  iVar4 = param_2;
  if ((*(int *)(puVar9 + 0x138) == param_1) ||
     (iVar4 = param_1, *(int *)(puVar9 + 0x138) == param_2)) {
    *(int *)(puVar9 + 0x138) = iVar4;
  }
  iVar4 = param_2;
  if ((*(int *)(puVar10 + 0x19c) == param_1) ||
     (iVar4 = param_1, *(int *)(puVar10 + 0x19c) == param_2)) {
    *(int *)(puVar10 + 0x19c) = iVar4;
  }
  iVar4 = param_2;
  if ((*(int *)(puVar9 + 0x13c) == param_1) ||
     (iVar4 = param_1, *(int *)(puVar9 + 0x13c) == param_2)) {
    *(int *)(puVar9 + 0x13c) = iVar4;
  }
  iVar4 = param_2;
  if ((*(int *)(puVar10 + 0x1a0) == param_1) ||
     (iVar4 = param_1, *(int *)(puVar10 + 0x1a0) == param_2)) {
    *(int *)(puVar10 + 0x1a0) = iVar4;
  }
  iVar4 = param_2;
  if ((*(int *)(puVar9 + 0x140) == param_1) ||
     (iVar4 = param_1, *(int *)(puVar9 + 0x140) == param_2)) {
    *(int *)(puVar9 + 0x140) = iVar4;
  }
  iVar4 = param_2;
  if ((*(int *)(puVar10 + 0x1a4) == param_1) ||
     (iVar4 = param_1, *(int *)(puVar10 + 0x1a4) == param_2)) {
    *(int *)(puVar10 + 0x1a4) = iVar4;
  }
  iVar4 = param_2;
  if ((*(int *)(puVar9 + 0x144) == param_1) ||
     (iVar4 = param_1, *(int *)(puVar9 + 0x144) == param_2)) {
    *(int *)(puVar9 + 0x144) = iVar4;
  }
  iVar4 = param_2;
  if ((*(int *)(puVar10 + 0x1a8) == param_1) ||
     (iVar4 = param_1, *(int *)(puVar10 + 0x1a8) == param_2)) {
    *(int *)(puVar10 + 0x1a8) = iVar4;
  }
  iVar4 = param_2;
  if ((*(int *)(puVar9 + 0x148) == param_1) ||
     (iVar4 = param_1, *(int *)(puVar9 + 0x148) == param_2)) {
    *(int *)(puVar9 + 0x148) = iVar4;
  }
  iVar4 = param_2;
  if ((*(int *)(puVar10 + 0x1ac) == param_1) ||
     (iVar4 = param_1, *(int *)(puVar10 + 0x1ac) == param_2)) {
    *(int *)(puVar10 + 0x1ac) = iVar4;
  }
  iVar4 = param_2;
  if ((*(int *)(puVar9 + 0x14c) == param_1) ||
     (iVar4 = param_1, *(int *)(puVar9 + 0x14c) == param_2)) {
    *(int *)(puVar9 + 0x14c) = iVar4;
  }
  iVar4 = param_2;
  if ((*(int *)(puVar10 + 0x1b0) == param_1) ||
     (iVar4 = param_1, *(int *)(puVar10 + 0x1b0) == param_2)) {
    *(int *)(puVar10 + 0x1b0) = iVar4;
  }
  iVar4 = param_2;
  if ((*(int *)(puVar9 + 0x150) == param_1) ||
     (iVar4 = param_1, *(int *)(puVar9 + 0x150) == param_2)) {
    *(int *)(puVar9 + 0x150) = iVar4;
  }
  iVar4 = param_2;
  if ((*(int *)(puVar10 + 0x1b4) == param_1) ||
     (iVar4 = param_1, *(int *)(puVar10 + 0x1b4) == param_2)) {
    *(int *)(puVar10 + 0x1b4) = iVar4;
  }
  iVar4 = param_2;
  if ((*(int *)(puVar9 + 0x154) == param_1) ||
     (iVar4 = param_1, *(int *)(puVar9 + 0x154) == param_2)) {
    *(int *)(puVar9 + 0x154) = iVar4;
  }
  iVar4 = param_2;
  if ((*(int *)(puVar10 + 0x1b8) == param_1) ||
     (iVar4 = param_1, *(int *)(puVar10 + 0x1b8) == param_2)) {
    *(int *)(puVar10 + 0x1b8) = iVar4;
  }
  iVar4 = param_2;
  if ((*(int *)(puVar9 + 0x158) == param_1) ||
     (iVar4 = param_1, *(int *)(puVar9 + 0x158) == param_2)) {
    *(int *)(puVar9 + 0x158) = iVar4;
  }
  iVar4 = param_2;
  if ((*(int *)(puVar10 + 0x1bc) == param_1) ||
     (iVar4 = param_1, *(int *)(puVar10 + 0x1bc) == param_2)) {
    *(int *)(puVar10 + 0x1bc) = iVar4;
  }
  iVar4 = param_2;
  if ((*(int *)(puVar9 + 0x15c) == param_1) ||
     (iVar4 = param_1, *(int *)(puVar9 + 0x15c) == param_2)) {
    *(int *)(puVar9 + 0x15c) = iVar4;
  }
  if ((*(int *)(puVar10 + 0x1c0) == param_1) ||
     (bVar2 = *(int *)(puVar10 + 0x1c0) == param_2, param_2 = param_1, bVar2)) {
    *(int *)(puVar10 + 0x1c0) = param_2;
  }
  return;
}

