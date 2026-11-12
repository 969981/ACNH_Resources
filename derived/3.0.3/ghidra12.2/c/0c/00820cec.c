
void FUN_00820cec(long param_1)

{
  uint *puVar1;
  byte bVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  byte *pbVar6;
  byte local_30 [4];
  undefined4 local_2c;
  undefined2 local_28 [2];
  undefined4 local_24;
  
  puVar3 = PTR_DAT_04bb46b0;
  if (*(int *)(param_1 + 0xc) == 2) {
    FUN_0285f510();
    lVar4 = *(long *)puVar3;
    if ((lVar4 == 0) || (lVar5 = *(long *)PTR_DAT_04bb4410, lVar5 == 0)) {
LAB_00820dbc:
      FUN_017fa550();
    }
    else if ((*(long *)(lVar5 + 0x140) == 0 && *(long *)(lVar5 + 0x148) == 0) ||
            (*(long *)(lVar5 + 0x140) != *(long *)(lVar4 + 0x4c8) ||
             *(long *)(lVar5 + 0x148) != *(long *)(lVar4 + 0x4d0))) goto LAB_00820dbc;
LAB_00820dc0:
    if (*(int *)(param_1 + 0xc) == 1) {
      FUN_01366410();
    }
  }
  else if (*(int *)(param_1 + 0xc) == 1) {
    FUN_0285f510();
    lVar4 = *(long *)puVar3;
    if ((lVar4 != 0) && (lVar5 = *(long *)PTR_DAT_04bb4410, lVar5 != 0)) {
      if ((*(long *)(lVar5 + 0x140) != 0 || *(long *)(lVar5 + 0x148) != 0) &&
         ((*(long *)(lVar5 + 0x140) == *(long *)(lVar4 + 0x4c8) &&
          (*(long *)(lVar5 + 0x148) == *(long *)(lVar4 + 0x4d0))))) goto LAB_00820dc0;
    }
    goto LAB_00820dbc;
  }
  local_24 = 0;
  local_28[0] = 1;
  FUN_01384940(local_28);
  lVar4 = *(long *)puVar3;
  if (lVar4 != 0) {
    lVar5 = *(long *)PTR_DAT_04bb4410;
    if (lVar5 != 0) {
      if (((*(long *)(lVar5 + 0x140) != 0 || *(long *)(lVar5 + 0x148) != 0) &&
          (*(long *)(lVar5 + 0x140) == *(long *)(lVar4 + 0x4c8))) &&
         (*(long *)(lVar5 + 0x148) == *(long *)(lVar4 + 0x4d0))) {
        local_2c = FUN_0252d29c();
        if (*(int *)(param_1 + 0xc) == 2) {
          FUN_007e1980(&local_2c);
        }
        else if (*(int *)(param_1 + 0xc) == 1) {
          FUN_007e2f30(&local_2c);
        }
        if (*(long *)puVar3 == 0) goto LAB_00820e6c;
      }
    }
    FUN_027026a0();
  }
LAB_00820e6c:
  puVar3 = PTR_DAT_04bb27d0;
  FUN_01dbd1dc(*(undefined8 *)PTR_DAT_04bb27d0);
  lVar4 = *(long *)PTR_DAT_04bb39b0;
  pbVar6 = PTR_DAT_04bb32e0;
  if (lVar4 == 0) {
LAB_00820ee8:
    if (7 < *pbVar6) {
LAB_00820ef4:
      if (*(long **)puVar3 != (long *)0x0) {
        lVar4 = **(long **)puVar3;
        bVar2 = *(byte *)(lVar4 + 0x473);
        pbVar6 = PTR_DAT_04bb5038;
        if ((long)(char)bVar2 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar4 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
          if (7 < bVar2) {
            puVar1 = (uint *)(lVar4 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar6 = (byte *)(lVar4 + 0x471);
          }
        }
        local_30[0] = *pbVar6;
        if (local_30[0] < 8) goto LAB_00820f6c;
      }
      pbVar6 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar4 + 0x15c) != 0) {
      pbVar6 = (byte *)(lVar4 + 0x158);
    }
    if (7 < *pbVar6) {
      if ((*(int *)(lVar4 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar6 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_00820ee8;
      }
      goto LAB_00820ef4;
    }
  }
  local_30[0] = *pbVar6;
  if (7 < local_30[0]) {
    local_30[0] = 0xff;
  }
LAB_00820f6c:
  if (*(long *)(*(long *)PTR_DAT_04bb4fb0 + 0x10) != 0) {
    FUN_03365804(*(long *)(*(long *)PTR_DAT_04bb4fb0 + 0x10),local_30);
  }
  return;
}

