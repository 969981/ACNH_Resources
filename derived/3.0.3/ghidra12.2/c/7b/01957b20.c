
void FUN_01957b20(undefined8 param_1,ulong param_2)

{
  uint *puVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  byte *pbVar6;
  long lVar7;
  undefined *local_40;
  char *pcStack_38;
  byte local_14 [4];
  
  puVar4 = PTR_DAT_04bb39b0;
  puVar3 = PTR_DAT_04bb2020;
  if ((param_2 & 1) == 0) {
    lVar7 = *(long *)PTR_DAT_04bb39b0;
    pbVar6 = PTR_DAT_04bb32e0;
    if (lVar7 == 0) {
LAB_01957cf4:
      if (7 < *pbVar6) {
LAB_01957d00:
        if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
          lVar7 = **(long **)PTR_DAT_04bb27d0;
          bVar2 = *(byte *)(lVar7 + 0x473);
          pbVar6 = PTR_DAT_04bb5038;
          if ((long)(char)bVar2 != 0xffffffffffffffff) {
            puVar1 = (uint *)(lVar7 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
            if (7 < bVar2) {
              puVar1 = (uint *)(lVar7 + 0x48);
            }
            if ((*puVar1 & 8) != 0) {
              pbVar6 = (byte *)(lVar7 + 0x471);
            }
          }
          local_14[0] = *pbVar6;
          if (local_14[0] < 8) goto LAB_01957d80;
        }
        pbVar6 = PTR_DAT_04bb5038;
      }
    }
    else {
      if (*(int *)(lVar7 + 0x15c) != 0) {
        pbVar6 = (byte *)(lVar7 + 0x158);
      }
      if (7 < *pbVar6) {
        if ((*(int *)(lVar7 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
          pbVar6 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
          goto LAB_01957cf4;
        }
        goto LAB_01957d00;
      }
    }
    local_14[0] = *pbVar6;
    if (7 < local_14[0]) {
      local_14[0] = 0xff;
    }
LAB_01957d80:
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = "CatchBeeCount";
    FUN_027533a8(local_14,&local_40,0);
    return;
  }
  lVar7 = *(long *)PTR_DAT_04bb39b0;
  pbVar6 = PTR_DAT_04bb32e0;
  if (lVar7 == 0) {
LAB_01957be8:
    if (*pbVar6 < 8) goto LAB_01957c60;
LAB_01957bf4:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_01957c58:
      pbVar6 = PTR_DAT_04bb5038;
      goto LAB_01957c60;
    }
    lVar7 = **(long **)PTR_DAT_04bb27d0;
    bVar2 = *(byte *)(lVar7 + 0x473);
    pbVar6 = PTR_DAT_04bb5038;
    if ((long)(char)bVar2 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar7 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
      if (7 < bVar2) {
        puVar1 = (uint *)(lVar7 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar6 = (byte *)(lVar7 + 0x471);
      }
    }
    local_14[0] = *pbVar6;
    if (7 < local_14[0]) goto LAB_01957c58;
  }
  else {
    if (*(int *)(lVar7 + 0x15c) != 0) {
      pbVar6 = (byte *)(lVar7 + 0x158);
    }
    if (7 < *pbVar6) {
      if ((*(int *)(lVar7 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar6 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_01957be8;
      }
      goto LAB_01957bf4;
    }
LAB_01957c60:
    local_14[0] = *pbVar6;
    if (7 < local_14[0]) {
      local_14[0] = 0xff;
    }
  }
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "CatchBeeCount";
  FUN_02753910(local_14,&local_40,1);
  lVar7 = *(long *)puVar4;
  pbVar6 = PTR_DAT_04bb32e0;
  if (lVar7 == 0) {
LAB_01957db4:
    if (*pbVar6 < 8) goto LAB_01957e2c;
LAB_01957dc0:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_01957e24:
      pbVar6 = PTR_DAT_04bb5038;
      goto LAB_01957e2c;
    }
    lVar7 = **(long **)PTR_DAT_04bb27d0;
    bVar2 = *(byte *)(lVar7 + 0x473);
    pbVar6 = PTR_DAT_04bb5038;
    if ((long)(char)bVar2 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar7 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
      if (7 < bVar2) {
        puVar1 = (uint *)(lVar7 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar6 = (byte *)(lVar7 + 0x471);
      }
    }
    local_14[0] = *pbVar6;
    if (7 < local_14[0]) goto LAB_01957e24;
  }
  else {
    if (*(int *)(lVar7 + 0x15c) != 0) {
      pbVar6 = (byte *)(lVar7 + 0x158);
    }
    if (7 < *pbVar6) {
      if ((*(int *)(lVar7 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar6 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_01957db4;
      }
      goto LAB_01957dc0;
    }
LAB_01957e2c:
    local_14[0] = *pbVar6;
    if (7 < local_14[0]) {
      local_14[0] = 0xff;
    }
  }
  local_40 = puVar3 + 0x10;
  pcStack_38 = "CatchBeeCount";
  iVar5 = FUN_02753180(local_14,&local_40);
  if (iVar5 < 5) {
    return;
  }
  lVar7 = *(long *)puVar4;
  pbVar6 = PTR_DAT_04bb32e0;
  if (lVar7 == 0) {
LAB_01957eb4:
    if (7 < *pbVar6) {
LAB_01957ec0:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar7 = **(long **)PTR_DAT_04bb27d0;
        bVar2 = *(byte *)(lVar7 + 0x473);
        pbVar6 = PTR_DAT_04bb5038;
        if ((long)(char)bVar2 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar7 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
          if (7 < bVar2) {
            puVar1 = (uint *)(lVar7 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar6 = (byte *)(lVar7 + 0x471);
          }
        }
        local_14[0] = *pbVar6;
        if (local_14[0] < 8) goto LAB_01957f40;
      }
      pbVar6 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar7 + 0x15c) != 0) {
      pbVar6 = (byte *)(lVar7 + 0x158);
    }
    if (7 < *pbVar6) {
      if ((*(int *)(lVar7 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar6 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_01957eb4;
      }
      goto LAB_01957ec0;
    }
  }
  local_14[0] = *pbVar6;
  if (7 < local_14[0]) {
    local_14[0] = 0xff;
  }
LAB_01957f40:
  local_40 = puVar3 + 0x10;
  pcStack_38 = "CatchBeeContinuously";
  FUN_0279a9f0(local_14,&local_40,1);
  return;
}

