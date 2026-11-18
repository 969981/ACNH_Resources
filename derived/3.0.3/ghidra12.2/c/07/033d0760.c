
void FUN_033d0760(int param_1)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  byte local_28 [4];
  byte local_24 [4];
  
  puVar8 = PTR_DAT_04bb39b0;
  pbVar5 = PTR_DAT_04bb32e0;
  local_28[0] = *PTR_DAT_04bb32e0;
  if (local_28[0] < 8) {
LAB_033d0874:
    uVar3 = FUN_02582d8c(local_28,1);
    puVar7 = PTR_DAT_04bb4fb8;
    if (((7 < uVar3) ||
        (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar3 * 0x13f0 + 0x13d4) == '\0')) ||
       ((*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar3 * 0x13f0 + 0x13d6) == '\0' ||
        ((uVar3 = FUN_02582d8c(local_28,1), 7 < uVar3 ||
         (*(char *)(*(long *)puVar7 + (ulong)uVar3 * 0x13f0 + 0x13d4) == '\0'))))))
    goto LAB_033d08fc;
    puVar7 = (undefined *)(*(long *)puVar7 + (ulong)uVar3 * 0x13f0 + 0x6b0);
  }
  else {
    lVar6 = *(long *)PTR_DAT_04bb39b0;
    if (lVar6 == 0) {
LAB_033d07ec:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar6 = **(long **)PTR_DAT_04bb27d0;
        bVar2 = *(byte *)(lVar6 + 0x473);
        pbVar4 = PTR_DAT_04bb5038;
        if ((long)(char)bVar2 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar6 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
          if (7 < bVar2) {
            puVar1 = (uint *)(lVar6 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar4 = (byte *)(lVar6 + 0x471);
          }
        }
        local_28[0] = *pbVar4;
        if (local_28[0] < 8) goto LAB_033d0874;
      }
      pbVar4 = PTR_DAT_04bb5038;
    }
    else {
      pbVar4 = PTR_DAT_04bb32e0;
      if (*(int *)(lVar6 + 0x15c) != 0) {
        pbVar4 = (byte *)(lVar6 + 0x158);
      }
      if ((7 < *pbVar4) &&
         (((*(int *)(lVar6 + 0x15c) == 0 || (*(long *)PTR_DAT_04bb4718 == 0)) ||
          (pbVar4 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), 7 < *pbVar4)))) goto LAB_033d07ec;
    }
    local_28[0] = *pbVar4;
    if (local_28[0] < 8) goto LAB_033d0874;
    local_28[0] = 0xff;
LAB_033d08fc:
    puVar7 = &DAT_05745710;
    FUN_033d2620(&DAT_05745710);
  }
  local_24[0] = *pbVar5;
  if (local_24[0] < 8) {
LAB_033d09f8:
    uVar3 = FUN_02582d8c(local_24,1);
    puVar8 = PTR_DAT_04bb4fb8;
    if (((uVar3 < 8) &&
        (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar3 * 0x13f0 + 0x13d4) != '\0')) &&
       ((*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar3 * 0x13f0 + 0x13d6) != '\0' &&
        ((uVar3 = FUN_02582d8c(local_24,1), uVar3 < 8 &&
         (*(char *)(*(long *)puVar8 + (ulong)uVar3 * 0x13f0 + 0x13d4) != '\0')))))) {
      puVar8 = (undefined *)(*(long *)puVar8 + (ulong)uVar3 * 0x13f0 + 0x6b0);
      goto LAB_033d0a90;
    }
  }
  else {
    lVar6 = *(long *)puVar8;
    if (lVar6 == 0) {
LAB_033d0970:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar6 = **(long **)PTR_DAT_04bb27d0;
        bVar2 = *(byte *)(lVar6 + 0x473);
        pbVar5 = PTR_DAT_04bb5038;
        if ((long)(char)bVar2 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar6 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
          if (7 < bVar2) {
            puVar1 = (uint *)(lVar6 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar5 = (byte *)(lVar6 + 0x471);
          }
        }
        local_24[0] = *pbVar5;
        if (local_24[0] < 8) goto LAB_033d09f8;
      }
      pbVar5 = PTR_DAT_04bb5038;
    }
    else {
      if (*(int *)(lVar6 + 0x15c) != 0) {
        pbVar5 = (byte *)(lVar6 + 0x158);
      }
      if ((7 < *pbVar5) &&
         (((*(int *)(lVar6 + 0x15c) == 0 || (*(long *)PTR_DAT_04bb4718 == 0)) ||
          (pbVar5 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), 7 < *pbVar5)))) goto LAB_033d0970;
    }
    local_24[0] = *pbVar5;
    if (local_24[0] < 8) goto LAB_033d09f8;
    local_24[0] = 0xff;
  }
  puVar8 = &DAT_05745710;
  FUN_033d2620(&DAT_05745710);
LAB_033d0a90:
  if (*(int *)(puVar7 + 0x130) == param_1) {
    *(undefined4 *)(puVar7 + 0x100) = 0;
    *(undefined4 *)(puVar7 + 0x130) = 0xffffffff;
  }
  if (*(int *)(puVar8 + 0x194) == param_1) {
    *(undefined4 *)(puVar8 + 0x164) = 0;
    *(undefined4 *)(puVar8 + 0x194) = 0xffffffff;
  }
  if (*(int *)(puVar7 + 0x134) == param_1) {
    *(undefined4 *)(puVar7 + 0x104) = 0;
    *(undefined4 *)(puVar7 + 0x134) = 0xffffffff;
  }
  if (*(int *)(puVar8 + 0x198) == param_1) {
    *(undefined4 *)(puVar8 + 0x168) = 0;
    *(undefined4 *)(puVar8 + 0x198) = 0xffffffff;
  }
  if (*(int *)(puVar7 + 0x138) == param_1) {
    *(undefined4 *)(puVar7 + 0x108) = 0;
    *(undefined4 *)(puVar7 + 0x138) = 0xffffffff;
  }
  if (*(int *)(puVar8 + 0x19c) == param_1) {
    *(undefined4 *)(puVar8 + 0x16c) = 0;
    *(undefined4 *)(puVar8 + 0x19c) = 0xffffffff;
  }
  if (*(int *)(puVar7 + 0x13c) == param_1) {
    *(undefined4 *)(puVar7 + 0x10c) = 0;
    *(undefined4 *)(puVar7 + 0x13c) = 0xffffffff;
  }
  if (*(int *)(puVar8 + 0x1a0) == param_1) {
    *(undefined4 *)(puVar8 + 0x170) = 0;
    *(undefined4 *)(puVar8 + 0x1a0) = 0xffffffff;
  }
  if (*(int *)(puVar7 + 0x140) == param_1) {
    *(undefined4 *)(puVar7 + 0x110) = 0;
    *(undefined4 *)(puVar7 + 0x140) = 0xffffffff;
  }
  if (*(int *)(puVar8 + 0x1a4) == param_1) {
    *(undefined4 *)(puVar8 + 0x174) = 0;
    *(undefined4 *)(puVar8 + 0x1a4) = 0xffffffff;
  }
  if (*(int *)(puVar7 + 0x144) == param_1) {
    *(undefined4 *)(puVar7 + 0x114) = 0;
    *(undefined4 *)(puVar7 + 0x144) = 0xffffffff;
  }
  if (*(int *)(puVar8 + 0x1a8) == param_1) {
    *(undefined4 *)(puVar8 + 0x178) = 0;
    *(undefined4 *)(puVar8 + 0x1a8) = 0xffffffff;
  }
  if (*(int *)(puVar7 + 0x148) == param_1) {
    *(undefined4 *)(puVar7 + 0x118) = 0;
    *(undefined4 *)(puVar7 + 0x148) = 0xffffffff;
  }
  if (*(int *)(puVar8 + 0x1ac) == param_1) {
    *(undefined4 *)(puVar8 + 0x17c) = 0;
    *(undefined4 *)(puVar8 + 0x1ac) = 0xffffffff;
  }
  if (*(int *)(puVar7 + 0x14c) == param_1) {
    *(undefined4 *)(puVar7 + 0x11c) = 0;
    *(undefined4 *)(puVar7 + 0x14c) = 0xffffffff;
  }
  if (*(int *)(puVar8 + 0x1b0) == param_1) {
    *(undefined4 *)(puVar8 + 0x180) = 0;
    *(undefined4 *)(puVar8 + 0x1b0) = 0xffffffff;
  }
  if (*(int *)(puVar7 + 0x150) == param_1) {
    *(undefined4 *)(puVar7 + 0x120) = 0;
    *(undefined4 *)(puVar7 + 0x150) = 0xffffffff;
  }
  if (*(int *)(puVar8 + 0x1b4) == param_1) {
    *(undefined4 *)(puVar8 + 0x184) = 0;
    *(undefined4 *)(puVar8 + 0x1b4) = 0xffffffff;
  }
  if (*(int *)(puVar7 + 0x154) == param_1) {
    *(undefined4 *)(puVar7 + 0x124) = 0;
    *(undefined4 *)(puVar7 + 0x154) = 0xffffffff;
  }
  if (*(int *)(puVar8 + 0x1b8) == param_1) {
    *(undefined4 *)(puVar8 + 0x188) = 0;
    *(undefined4 *)(puVar8 + 0x1b8) = 0xffffffff;
  }
  if (*(int *)(puVar7 + 0x158) == param_1) {
    *(undefined4 *)(puVar7 + 0x128) = 0;
    *(undefined4 *)(puVar7 + 0x158) = 0xffffffff;
  }
  if (*(int *)(puVar8 + 0x1bc) == param_1) {
    *(undefined4 *)(puVar8 + 0x18c) = 0;
    *(undefined4 *)(puVar8 + 0x1bc) = 0xffffffff;
  }
  if (*(int *)(puVar7 + 0x15c) == param_1) {
    *(undefined4 *)(puVar7 + 300) = 0;
    *(undefined4 *)(puVar7 + 0x15c) = 0xffffffff;
  }
  if (*(int *)(puVar8 + 0x1c0) == param_1) {
    *(undefined4 *)(puVar8 + 400) = 0;
    *(undefined4 *)(puVar8 + 0x1c0) = 0xffffffff;
  }
  return;
}

