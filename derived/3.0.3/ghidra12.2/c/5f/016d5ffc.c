
undefined8 FUN_016d5ffc(undefined4 param_1,undefined2 *param_2,ulong param_3)

{
  undefined2 *puVar1;
  uint uVar2;
  uint *puVar3;
  byte bVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  byte *pbVar13;
  uint uVar14;
  byte local_4c [4];
  undefined *local_48;
  char *local_40;
  undefined8 uStack_38;
  
  local_48 = (undefined *)CONCAT44(local_48._4_4_,param_1);
  lVar10 = *(long *)PTR_DAT_04bb46b0;
  if (lVar10 == 0) {
    return 0;
  }
  puVar11 = *(undefined8 **)(lVar10 + 0x10);
  if ((*(byte *)(lVar10 + 0x453) & 1) == 0) {
    lVar10 = (**(code **)(*(long *)*puVar11 + 0x38))();
    if (lVar10 == 0) {
      return 0;
    }
    lVar10 = lVar10 + 0x70;
  }
  else {
    if (puVar11 == (undefined8 *)0x0) {
      return 0;
    }
    if ((long *)puVar11[0x26] == (long *)0x0) {
      return 0;
    }
    lVar10 = (**(code **)(*(long *)puVar11[0x26] + 0x38))();
    if (lVar10 == 0) {
      return 0;
    }
  }
  lVar10 = lVar10 + (long)(int)local_48 * 0x18b8;
  lVar12 = *(long *)(lVar10 + 0x271d00);
  if (lVar12 == 0) {
    uVar7 = 0;
  }
  else {
    if (*(undefined8 **)(lVar12 + 0x10) == (undefined8 *)0x0) {
      uVar7 = 0;
      plVar8 = *(long **)(lVar12 + 0x20);
    }
    else {
      uVar7 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
      uVar7 = uVar7 & 0xffffffff;
      if (*(long *)(lVar10 + 0x271d00) == 0) goto LAB_016d60f8;
      plVar8 = *(long **)(*(long *)(lVar10 + 0x271d00) + 0x20);
    }
    if (plVar8 != (long *)0x0) {
      local_48 = *(undefined **)(lVar10 + 0x271ce0);
      local_40 = *(char **)(lVar10 + 0x271ce8);
      uStack_38 = 0x1190;
      (**(code **)(*plVar8 + 0x20))(plVar8,&local_48);
    }
  }
LAB_016d60f8:
  puVar1 = (undefined2 *)(*(long *)(lVar10 + 0x271ce8) + *(long *)(lVar10 + 0x271ce0));
  *puVar1 = *param_2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)((long)puVar1 + 3) = *(undefined1 *)((long)param_2 + 3);
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(param_2 + 2);
  if ((*(long *)(lVar10 + 0x271d00) != 0) &&
     (plVar8 = *(long **)(*(long *)(lVar10 + 0x271d00) + 0x20), plVar8 != (long *)0x0)) {
    local_48 = *(undefined **)(lVar10 + 0x271ce0);
    local_40 = *(char **)(lVar10 + 0x271ce8);
    uStack_38 = 0x1190;
    (**(code **)(*plVar8 + 0x20))(plVar8,&local_48);
  }
  lVar12 = *(long *)(lVar10 + 0x271ce8) + *(long *)(lVar10 + 0x271ce0);
  *(undefined2 *)(lVar12 + 0x8b0) = param_2[4];
  *(undefined1 *)(lVar12 + 0x8b2) = *(undefined1 *)(param_2 + 5);
  *(undefined1 *)(lVar12 + 0x8b3) = *(undefined1 *)((long)param_2 + 0xb);
  *(undefined4 *)(lVar12 + 0x8b4) = *(undefined4 *)(param_2 + 6);
  if ((*(long *)(lVar10 + 0x271d00) != 0) &&
     (plVar8 = *(long **)(*(long *)(lVar10 + 0x271d00) + 0x20), plVar8 != (long *)0x0)) {
    local_48 = *(undefined **)(lVar10 + 0x271ce0);
    local_40 = *(char **)(lVar10 + 0x271ce8);
    uStack_38 = 0x1190;
    (**(code **)(*plVar8 + 0x20))(plVar8,&local_48);
  }
  lVar12 = *(long *)(lVar10 + 0x271ce8) + *(long *)(lVar10 + 0x271ce0);
  *(undefined2 *)(lVar12 + 0x8b8) = param_2[8];
  *(undefined1 *)(lVar12 + 0x8ba) = *(undefined1 *)(param_2 + 9);
  *(undefined1 *)(lVar12 + 0x8bb) = *(undefined1 *)((long)param_2 + 0x13);
  *(undefined4 *)(lVar12 + 0x8bc) = *(undefined4 *)(param_2 + 10);
  if ((*(long *)(lVar10 + 0x271d00) != 0) &&
     (plVar8 = *(long **)(*(long *)(lVar10 + 0x271d00) + 0x20), plVar8 != (long *)0x0)) {
    local_48 = *(undefined **)(lVar10 + 0x271ce0);
    local_40 = *(char **)(lVar10 + 0x271ce8);
    uStack_38 = 0x1190;
    (**(code **)(*plVar8 + 0x20))(plVar8,&local_48);
  }
  lVar12 = *(long *)(lVar10 + 0x271ce8) + *(long *)(lVar10 + 0x271ce0);
  *(undefined2 *)(lVar12 + 0x8c0) = param_2[0xc];
  *(undefined1 *)(lVar12 + 0x8c2) = *(undefined1 *)(param_2 + 0xd);
  *(undefined1 *)(lVar12 + 0x8c3) = *(undefined1 *)((long)param_2 + 0x1b);
  *(undefined4 *)(lVar12 + 0x8c4) = *(undefined4 *)(param_2 + 0xe);
  if ((*(long *)(lVar10 + 0x271d00) != 0) &&
     (plVar8 = *(long **)(*(long *)(lVar10 + 0x271d00) + 0x20), plVar8 != (long *)0x0)) {
    local_48 = *(undefined **)(lVar10 + 0x271ce0);
    local_40 = *(char **)(lVar10 + 0x271ce8);
    uStack_38 = 0x1190;
    (**(code **)(*plVar8 + 0x20))(plVar8,&local_48);
  }
  lVar12 = *(long *)(lVar10 + 0x271ce8) + *(long *)(lVar10 + 0x271ce0);
  *(undefined2 *)(lVar12 + 0x1170) = param_2[0x10];
  *(undefined1 *)(lVar12 + 0x1172) = *(undefined1 *)(param_2 + 0x11);
  *(undefined1 *)(lVar12 + 0x1173) = *(undefined1 *)((long)param_2 + 0x23);
  *(undefined4 *)(lVar12 + 0x1174) = *(undefined4 *)(param_2 + 0x12);
  if ((*(long *)(lVar10 + 0x271d00) != 0) &&
     (plVar8 = *(long **)(*(long *)(lVar10 + 0x271d00) + 0x20), plVar8 != (long *)0x0)) {
    local_48 = *(undefined **)(lVar10 + 0x271ce0);
    local_40 = *(char **)(lVar10 + 0x271ce8);
    uStack_38 = 0x1190;
    (**(code **)(*plVar8 + 0x20))(plVar8,&local_48);
  }
  lVar12 = *(long *)(lVar10 + 0x271ce8) + *(long *)(lVar10 + 0x271ce0);
  *(undefined2 *)(lVar12 + 0x1178) = param_2[0x14];
  *(undefined1 *)(lVar12 + 0x117a) = *(undefined1 *)(param_2 + 0x15);
  *(undefined1 *)(lVar12 + 0x117b) = *(undefined1 *)((long)param_2 + 0x2b);
  *(undefined4 *)(lVar12 + 0x117c) = *(undefined4 *)(param_2 + 0x16);
  if ((*(long *)(lVar10 + 0x271d00) != 0) &&
     (plVar8 = *(long **)(*(long *)(lVar10 + 0x271d00) + 0x20), plVar8 != (long *)0x0)) {
    local_48 = *(undefined **)(lVar10 + 0x271ce0);
    local_40 = *(char **)(lVar10 + 0x271ce8);
    uStack_38 = 0x1190;
    (**(code **)(*plVar8 + 0x20))(plVar8,&local_48);
  }
  lVar12 = *(long *)(lVar10 + 0x271ce8) + *(long *)(lVar10 + 0x271ce0);
  *(undefined2 *)(lVar12 + 0x1180) = param_2[0x18];
  *(undefined1 *)(lVar12 + 0x1182) = *(undefined1 *)(param_2 + 0x19);
  *(undefined1 *)(lVar12 + 0x1183) = *(undefined1 *)((long)param_2 + 0x33);
  *(undefined4 *)(lVar12 + 0x1184) = *(undefined4 *)(param_2 + 0x1a);
  if ((*(long *)(lVar10 + 0x271d00) != 0) &&
     (plVar8 = *(long **)(*(long *)(lVar10 + 0x271d00) + 0x20), plVar8 != (long *)0x0)) {
    local_48 = *(undefined **)(lVar10 + 0x271ce0);
    local_40 = *(char **)(lVar10 + 0x271ce8);
    uStack_38 = 0x1190;
    (**(code **)(*plVar8 + 0x20))(plVar8,&local_48);
  }
  lVar12 = *(long *)(lVar10 + 0x271ce8) + *(long *)(lVar10 + 0x271ce0);
  *(undefined2 *)(lVar12 + 0x1188) = param_2[0x1c];
  *(undefined1 *)(lVar12 + 0x118a) = *(undefined1 *)(param_2 + 0x1d);
  *(undefined1 *)(lVar12 + 0x118b) = *(undefined1 *)((long)param_2 + 0x3b);
  *(undefined4 *)(lVar12 + 0x118c) = *(undefined4 *)(param_2 + 0x1e);
  if ((((uVar7 & 1) != 0) && (*(long *)(lVar10 + 0x271d00) != 0)) &&
     (puVar11 = *(undefined8 **)(*(long *)(lVar10 + 0x271d00) + 0x18), puVar11 != (undefined8 *)0x0)
     ) {
    (**(code **)*puVar11)();
  }
  puVar5 = PTR_DAT_04bb27c0;
  if (((*(int *)(PTR_DAT_04bc3a80 + 0x38) == 0x3ee08254) && ((int)param_3 != 0)) &&
     (lVar10 = *(long *)PTR_DAT_04bb27c0, lVar10 != 0)) {
    plVar8 = *(long **)(*(long *)(*(long *)(lVar10 + 0x1c0) + 8) + (param_3 >> 0x14 & 0xfff) * 8);
    if (((plVar8 == (long *)0x0) || ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) ||
       ((int)plVar8[0x46] != (int)param_3)) {
      plVar8 = (long *)0x0;
    }
    if ((*(int *)(lVar10 + 0x288) == 1) || (*(int *)(lVar10 + 0x288) == -1)) {
      plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar10 = *(long *)puVar5;
      iVar6 = (**(code **)(*plVar9 + 0x60))();
      if (iVar6 < 0x11) {
        uVar14 = 1;
      }
      else {
        if (4 < *(uint *)(lVar10 + 0x5e8)) goto LAB_016d64a0;
        uVar14 = 0x1aU >> (ulong)(*(uint *)(lVar10 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_016d64a0:
      uVar14 = 0;
    }
    if (plVar8 != (long *)0x0) {
      lVar10 = plVar8[0x2a];
      if (((*PTR_DAT_04bb66a8 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb66a8), iVar6 != 0)) {
        *(undefined **)PTR_DAT_04bb66a0 = PTR_DAT_04bb3290 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb66a8);
      }
      uVar7 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb66a0);
      uVar2 = 0;
      if ((int)lVar10 == 1) {
        uVar2 = uVar14;
      }
      if (((uVar7 & 1) != 0) && (uVar2 != 0)) {
        FUN_016add94(plVar8);
      }
    }
  }
  lVar10 = *(long *)PTR_DAT_04bb39b0;
  pbVar13 = PTR_DAT_04bb32e0;
  if (lVar10 == 0) {
LAB_016d655c:
    if (7 < *pbVar13) {
LAB_016d6568:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar10 = **(long **)PTR_DAT_04bb27d0;
        bVar4 = *(byte *)(lVar10 + 0x473);
        pbVar13 = PTR_DAT_04bb5038;
        if ((long)(char)bVar4 != 0xffffffffffffffff) {
          puVar3 = (uint *)(lVar10 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
          if (7 < bVar4) {
            puVar3 = (uint *)(lVar10 + 0x48);
          }
          if ((*puVar3 & 8) != 0) {
            pbVar13 = (byte *)(lVar10 + 0x471);
          }
        }
        local_4c[0] = *pbVar13;
        if (local_4c[0] < 8) goto LAB_016d65e8;
      }
      pbVar13 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar10 + 0x15c) != 0) {
      pbVar13 = (byte *)(lVar10 + 0x158);
    }
    if (7 < *pbVar13) {
      if ((*(int *)(lVar10 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar13 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_016d655c;
      }
      goto LAB_016d6568;
    }
  }
  local_4c[0] = *pbVar13;
  if (7 < local_4c[0]) {
    local_4c[0] = 0xff;
  }
LAB_016d65e8:
  local_48 = PTR_DAT_04bb2020 + 0x10;
  local_40 = "HotelHasEditedMannequin";
  FUN_0274bfe8(local_4c,&local_48,1);
  return 1;
}

