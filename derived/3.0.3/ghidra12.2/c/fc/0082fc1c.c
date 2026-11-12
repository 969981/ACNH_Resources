
void FUN_0082fc1c(uint *param_1,long param_2)

{
  undefined *puVar1;
  bool bVar2;
  uint uVar3;
  ulong uVar4;
  uint *puVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte bVar8;
  long lVar9;
  uint local_58;
  byte local_54 [4];
  byte local_50 [8];
  ushort local_48;
  
  *param_1 = 0xffffffff;
  puVar1 = PTR_DAT_04bb39b0;
  pbVar7 = PTR_DAT_04bb32e0;
  if (*(char *)(param_2 + 8) == '\0') {
    FUN_0376baa0(param_2 + 0x138);
    FUN_03775680(local_50);
    if (499 < local_48) {
      return;
    }
    lVar9 = *(long *)PTR_DAT_04bb39b0;
    pbVar7 = PTR_DAT_04bb32e0;
    if (lVar9 == 0) {
LAB_0082ffc8:
      if (*pbVar7 < 8) goto LAB_00830040;
LAB_0082ffd4:
      if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_00830038:
        pbVar7 = PTR_DAT_04bb5038;
        goto LAB_00830040;
      }
      lVar9 = **(long **)PTR_DAT_04bb27d0;
      bVar8 = *(byte *)(lVar9 + 0x473);
      pbVar7 = PTR_DAT_04bb5038;
      if ((long)(char)bVar8 != 0xffffffffffffffff) {
        puVar5 = (uint *)(lVar9 + 0x48) + ((long)(char)bVar8 & 0xffffffffU) * 0x20;
        if (7 < bVar8) {
          puVar5 = (uint *)(lVar9 + 0x48);
        }
        if ((*puVar5 & 8) != 0) {
          pbVar7 = (byte *)(lVar9 + 0x471);
        }
      }
      bVar8 = *pbVar7;
      bVar2 = 7 < bVar8;
      if (bVar2) {
        bVar8 = 0xff;
      }
      local_58 = CONCAT31(local_58._1_3_,bVar8);
      if (bVar2) goto LAB_00830038;
    }
    else {
      if (*(int *)(lVar9 + 0x15c) != 0) {
        pbVar7 = (byte *)(lVar9 + 0x158);
      }
      if (7 < *pbVar7) {
        if ((*(int *)(lVar9 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
          pbVar7 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
          goto LAB_0082ffc8;
        }
        goto LAB_0082ffd4;
      }
LAB_00830040:
      bVar8 = *pbVar7;
      if (7 < bVar8) {
        bVar8 = 0xff;
      }
      local_58 = CONCAT31(local_58._1_3_,bVar8);
    }
    puVar5 = &local_58;
    goto LAB_00830058;
  }
  lVar9 = *(long *)PTR_DAT_04bb39b0;
  pbVar6 = PTR_DAT_04bb32e0;
  if (lVar9 == 0) {
    if (7 < (byte)*PTR_DAT_04bb32e0) goto LAB_0082fd34;
LAB_0082fda0:
    local_50[0] = *pbVar6;
    if (7 < local_50[0]) {
      local_50[0] = 0xff;
    }
  }
  else {
    if (*(int *)(lVar9 + 0x15c) != 0) {
      pbVar6 = (byte *)(lVar9 + 0x158);
    }
    if ((*pbVar6 < 8) ||
       (((*(int *)(lVar9 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
        (pbVar6 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar6 < 8)))) goto LAB_0082fda0;
LAB_0082fd34:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_0082fd98:
      pbVar6 = PTR_DAT_04bb5038;
      goto LAB_0082fda0;
    }
    lVar9 = **(long **)PTR_DAT_04bb27d0;
    bVar8 = *(byte *)(lVar9 + 0x473);
    pbVar6 = PTR_DAT_04bb5038;
    if ((long)(char)bVar8 != 0xffffffffffffffff) {
      puVar5 = (uint *)(lVar9 + 0x48) + ((long)(char)bVar8 & 0xffffffffU) * 0x20;
      if (7 < bVar8) {
        puVar5 = (uint *)(lVar9 + 0x48);
      }
      if ((*puVar5 & 8) != 0) {
        pbVar6 = (byte *)(lVar9 + 0x471);
      }
    }
    local_50[0] = *pbVar6;
    if (7 < local_50[0]) goto LAB_0082fd98;
  }
  uVar3 = FUN_02582fe0(local_50);
  local_58 = (uVar3 & 7) << 0x10 | 0xa000;
  if ((*(char *)(param_2 + 0xd) == '\0') && (uVar4 = FUN_037818a0(&local_58), (uVar4 & 1) != 0)) {
    *param_1 = 0xffffffff;
    lVar9 = *(long *)puVar1;
    if (lVar9 == 0) {
LAB_0082fe28:
      if (7 < *pbVar7) {
LAB_0082fe34:
        if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
          lVar9 = **(long **)PTR_DAT_04bb27d0;
          bVar8 = *(byte *)(lVar9 + 0x473);
          pbVar7 = PTR_DAT_04bb5038;
          if ((long)(char)bVar8 != 0xffffffffffffffff) {
            puVar5 = (uint *)(lVar9 + 0x48) + ((long)(char)bVar8 & 0xffffffffU) * 0x20;
            if (7 < bVar8) {
              puVar5 = (uint *)(lVar9 + 0x48);
            }
            if ((*puVar5 & 8) != 0) {
              pbVar7 = (byte *)(lVar9 + 0x471);
            }
          }
          local_50[0] = *pbVar7;
          if (local_50[0] < 8) goto LAB_0082feb4;
        }
        pbVar7 = PTR_DAT_04bb5038;
      }
    }
    else {
      if (*(int *)(lVar9 + 0x15c) != 0) {
        pbVar7 = (byte *)(lVar9 + 0x158);
      }
      if (7 < *pbVar7) {
        if ((*(int *)(lVar9 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
          pbVar7 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
          goto LAB_0082fe28;
        }
        goto LAB_0082fe34;
      }
    }
    local_50[0] = *pbVar7;
    if (7 < local_50[0]) {
      local_50[0] = 0xff;
    }
LAB_0082feb4:
    uVar3 = FUN_02582fe0(local_50);
    *param_1 = (uVar3 & 7) << 0x10 | 0xa000;
    return;
  }
  *param_1 = 0xffffffff;
  FUN_0376baa0(param_2 + 0x138);
  FUN_03775680(local_50);
  if (499 < local_48) {
    return;
  }
  lVar9 = *(long *)puVar1;
  if (lVar9 == 0) {
LAB_0082ff2c:
    if (*pbVar7 < 8) goto LAB_0082ffa4;
LAB_0082ff38:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_0082ff9c:
      pbVar7 = PTR_DAT_04bb5038;
      goto LAB_0082ffa4;
    }
    lVar9 = **(long **)PTR_DAT_04bb27d0;
    bVar8 = *(byte *)(lVar9 + 0x473);
    pbVar7 = PTR_DAT_04bb5038;
    if ((long)(char)bVar8 != 0xffffffffffffffff) {
      puVar5 = (uint *)(lVar9 + 0x48) + ((long)(char)bVar8 & 0xffffffffU) * 0x20;
      if (7 < bVar8) {
        puVar5 = (uint *)(lVar9 + 0x48);
      }
      if ((*puVar5 & 8) != 0) {
        pbVar7 = (byte *)(lVar9 + 0x471);
      }
    }
    local_54[0] = *pbVar7;
    if (7 < local_54[0]) goto LAB_0082ff9c;
  }
  else {
    if (*(int *)(lVar9 + 0x15c) != 0) {
      pbVar7 = (byte *)(lVar9 + 0x158);
    }
    if (7 < *pbVar7) {
      if ((*(int *)(lVar9 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar7 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_0082ff2c;
      }
      goto LAB_0082ff38;
    }
LAB_0082ffa4:
    local_54[0] = *pbVar7;
    if (7 < local_54[0]) {
      local_54[0] = 0xff;
    }
  }
  puVar5 = (uint *)local_54;
LAB_00830058:
  uVar3 = FUN_02582fe0(puVar5);
  *param_1 = (uVar3 & 7) << 0x10 | (local_48 & 0x3ff) << 3;
  return;
}

