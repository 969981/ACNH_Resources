
void FUN_008690d8(long param_1)

{
  uint *puVar1;
  byte bVar2;
  undefined *puVar3;
  ulong uVar4;
  byte *pbVar5;
  long lVar6;
  byte *pbVar7;
  byte local_44 [4];
  byte local_40 [4];
  byte local_3c [4];
  byte local_38 [4];
  byte local_34 [4];
  byte local_18 [4];
  byte local_14 [4];
  
  puVar3 = PTR_DAT_04bb39b0;
  pbVar7 = PTR_DAT_04bb32e0;
  lVar6 = *(long *)PTR_DAT_04bb39b0;
  pbVar5 = PTR_DAT_04bb32e0;
  if (lVar6 == 0) {
    if (7 < (byte)*PTR_DAT_04bb32e0) goto LAB_00869164;
LAB_008691d0:
    local_14[0] = *pbVar5;
    if (7 < local_14[0]) {
      local_14[0] = 0xff;
    }
  }
  else {
    if (*(int *)(lVar6 + 0x15c) != 0) {
      pbVar5 = (byte *)(lVar6 + 0x158);
    }
    if ((*pbVar5 < 8) ||
       (((*(int *)(lVar6 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
        (pbVar5 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar5 < 8)))) goto LAB_008691d0;
LAB_00869164:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_008691c8:
      pbVar5 = PTR_DAT_04bb5038;
      goto LAB_008691d0;
    }
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
    local_14[0] = *pbVar5;
    if (7 < local_14[0]) goto LAB_008691c8;
  }
  FUN_027533a8(local_14,&DAT_04ce66c8,0);
  lVar6 = *(long *)puVar3;
  pbVar5 = pbVar7;
  if (lVar6 == 0) {
    if (7 < *pbVar7) goto LAB_0086925c;
LAB_008692c8:
    local_18[0] = *pbVar5;
    if (7 < local_18[0]) {
      local_18[0] = 0xff;
    }
  }
  else {
    if (*(int *)(lVar6 + 0x15c) != 0) {
      pbVar5 = (byte *)(lVar6 + 0x158);
    }
    if ((*pbVar5 < 8) ||
       (((*(int *)(lVar6 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
        (pbVar5 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar5 < 8)))) goto LAB_008692c8;
LAB_0086925c:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_008692c0:
      pbVar5 = PTR_DAT_04bb5038;
      goto LAB_008692c8;
    }
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
    local_18[0] = *pbVar5;
    if (7 < local_18[0]) goto LAB_008692c0;
  }
  FUN_027533a8(local_18,param_1 + 0xb8,0);
  lVar6 = *(long *)puVar3;
  pbVar5 = pbVar7;
  if (lVar6 == 0) {
    if (7 < *pbVar7) goto LAB_00869350;
LAB_008693bc:
    local_34[0] = *pbVar5;
    if (7 < local_34[0]) {
      local_34[0] = 0xff;
    }
  }
  else {
    if (*(int *)(lVar6 + 0x15c) != 0) {
      pbVar5 = (byte *)(lVar6 + 0x158);
    }
    if ((*pbVar5 < 8) ||
       (((*(int *)(lVar6 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
        (pbVar5 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar5 < 8)))) goto LAB_008693bc;
LAB_00869350:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_008693b4:
      pbVar5 = PTR_DAT_04bb5038;
      goto LAB_008693bc;
    }
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
    local_34[0] = *pbVar5;
    if (7 < local_34[0]) goto LAB_008693b4;
  }
  uVar4 = FUN_02669430(local_34);
  if ((uVar4 & 1) == 0) {
    lVar6 = *(long *)puVar3;
    pbVar5 = pbVar7;
    if (lVar6 == 0) {
      if (7 < *pbVar7) goto LAB_00869618;
LAB_00869684:
      local_40[0] = *pbVar5;
      if (7 < local_40[0]) {
        local_40[0] = 0xff;
      }
    }
    else {
      if (*(int *)(lVar6 + 0x15c) != 0) {
        pbVar5 = (byte *)(lVar6 + 0x158);
      }
      if ((*pbVar5 < 8) ||
         (((*(int *)(lVar6 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
          (pbVar5 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar5 < 8)))) goto LAB_00869684;
LAB_00869618:
      if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_0086967c:
        pbVar5 = PTR_DAT_04bb5038;
        goto LAB_00869684;
      }
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
      local_40[0] = *pbVar5;
      if (7 < local_40[0]) goto LAB_0086967c;
    }
    FUN_02755058(local_40,param_1 + 800,0);
    lVar6 = *(long *)puVar3;
    if (lVar6 == 0) {
LAB_008696ec:
      if (7 < *pbVar7) {
LAB_008696f8:
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
          local_44[0] = *pbVar5;
          if (local_44[0] < 8) goto LAB_00869778;
        }
        pbVar7 = PTR_DAT_04bb5038;
      }
    }
    else {
      if (*(int *)(lVar6 + 0x15c) != 0) {
        pbVar7 = (byte *)(lVar6 + 0x158);
      }
      if (7 < *pbVar7) {
        if ((*(int *)(lVar6 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
          pbVar7 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
          goto LAB_008696ec;
        }
        goto LAB_008696f8;
      }
    }
    local_44[0] = *pbVar7;
    if (7 < local_44[0]) {
      local_44[0] = 0xff;
    }
LAB_00869778:
    FUN_02755058(local_44,param_1 + 0x378,0);
    return;
  }
  lVar6 = *(long *)puVar3;
  pbVar5 = pbVar7;
  if (lVar6 == 0) {
    if (7 < *pbVar7) goto LAB_00869494;
LAB_00869500:
    local_38[0] = *pbVar5;
    if (7 < local_38[0]) {
      local_38[0] = 0xff;
    }
  }
  else {
    if (*(int *)(lVar6 + 0x15c) != 0) {
      pbVar5 = (byte *)(lVar6 + 0x158);
    }
    if ((*pbVar5 < 8) ||
       (((*(int *)(lVar6 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
        (pbVar5 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar5 < 8)))) goto LAB_00869500;
LAB_00869494:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_008694f8:
      pbVar5 = PTR_DAT_04bb5038;
      goto LAB_00869500;
    }
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
    local_38[0] = *pbVar5;
    if (7 < local_38[0]) goto LAB_008694f8;
  }
  FUN_0274bfe8(local_38,param_1 + 0x270,0);
  lVar6 = *(long *)puVar3;
  if (lVar6 == 0) {
LAB_00869568:
    if (7 < *pbVar7) {
LAB_00869574:
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
        local_3c[0] = *pbVar5;
        if (local_3c[0] < 8) goto LAB_008695f4;
      }
      pbVar7 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar6 + 0x15c) != 0) {
      pbVar7 = (byte *)(lVar6 + 0x158);
    }
    if (7 < *pbVar7) {
      if ((*(int *)(lVar6 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar7 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_00869568;
      }
      goto LAB_00869574;
    }
  }
  local_3c[0] = *pbVar7;
  if (7 < local_3c[0]) {
    local_3c[0] = 0xff;
  }
LAB_008695f4:
  FUN_0274bfe8(local_3c,param_1 + 0x2c8,0);
  return;
}

