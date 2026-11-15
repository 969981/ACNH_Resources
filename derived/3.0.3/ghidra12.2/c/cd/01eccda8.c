
void FUN_01eccda8(long param_1)

{
  uint *puVar1;
  undefined *puVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  byte *pbVar13;
  long *plVar14;
  int iVar15;
  long lVar16;
  undefined *local_a0;
  char *pcStack_98;
  undefined *local_90;
  char *pcStack_88;
  undefined4 local_80;
  undefined1 local_7c [7];
  undefined1 local_75;
  undefined *local_70;
  undefined8 *puStack_68;
  byte local_44 [4];
  
  uVar7 = *(uint *)(*(long *)(param_1 + 8) + 0x508);
  lVar11 = *(long *)PTR_DAT_04bb46b0;
  if (lVar11 == 0) {
LAB_01ecce30:
    lVar11 = 0;
  }
  else {
    puVar12 = *(undefined8 **)(lVar11 + 0x10);
    if ((*(byte *)(lVar11 + 0x453) & 1) == 0) {
      lVar9 = (**(code **)(*(long *)*puVar12 + 0x38))();
      lVar11 = 0;
      if (lVar9 != 0) {
        lVar11 = lVar9 + 0x70;
      }
    }
    else {
      if ((puVar12 == (undefined8 *)0x0) || ((long *)puVar12[0x26] == (long *)0x0))
      goto LAB_01ecce30;
      lVar11 = (**(code **)(*(long *)puVar12[0x26] + 0x38))();
    }
  }
  lVar9 = *(long *)PTR_DAT_04bb39b0;
  pbVar13 = PTR_DAT_04bb32e0;
  if (lVar9 == 0) {
LAB_01ecce94:
    if (7 < *pbVar13) {
LAB_01eccea0:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar9 = **(long **)PTR_DAT_04bb27d0;
        bVar3 = *(byte *)(lVar9 + 0x473);
        pbVar13 = PTR_DAT_04bb5038;
        if ((long)(char)bVar3 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar9 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
          if (7 < bVar3) {
            puVar1 = (uint *)(lVar9 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar13 = (byte *)(lVar9 + 0x471);
          }
        }
        local_44[0] = *pbVar13;
        if (local_44[0] < 8) goto LAB_01eccf20;
      }
      pbVar13 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar9 + 0x15c) != 0) {
      pbVar13 = (byte *)(lVar9 + 0x158);
    }
    if (7 < *pbVar13) {
      if ((*(int *)(lVar9 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar13 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_01ecce94;
      }
      goto LAB_01eccea0;
    }
  }
  local_44[0] = *pbVar13;
  if (7 < local_44[0]) {
    local_44[0] = 0xff;
  }
LAB_01eccf20:
  lVar9 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_44,1);
  puVar2 = PTR_DAT_04bb2020;
  if ((uVar7 < 10) && (((&DAT_053fee41)[(ulong)uVar7 * 0xba0] != '\0' && lVar11 != 0) && lVar9 != 0)
     ) {
    local_90 = PTR_DAT_04bb2020 + 0x10;
    pcStack_88 = "TalkWatchPoint";
    iVar4 = FUN_021991a0(&DAT_053fe348 + (ulong)uVar7 * 0xba0,&local_90);
    if (iVar4 != 0) {
      if ((*(long **)(lVar11 + 0xe7290) == (long *)0x0) ||
         (puVar12 = (undefined8 *)**(long **)(lVar11 + 0xe7290), puVar12 == (undefined8 *)0x0)) {
        uVar5 = 1;
        plVar14 = *(long **)(lVar9 + 0x17bb0);
      }
      else {
        uVar5 = (**(code **)*puVar12)();
        uVar5 = uVar5 ^ 1;
        plVar14 = *(long **)(lVar9 + 0x17bb0);
      }
      if ((plVar14 == (long *)0x0) || ((undefined8 *)*plVar14 == (undefined8 *)0x0)) {
        uVar6 = 1;
      }
      else {
        uVar6 = (*(code *)**(undefined8 **)*plVar14)();
        uVar6 = uVar6 ^ 1;
      }
      lVar10 = FUN_0265c2a0(uVar7);
      if (lVar10 == 0) {
        bVar3 = 0;
      }
      else {
        if ((*(long **)(lVar10 + 0x28) == (long *)0x0) ||
           (puVar12 = (undefined8 *)**(long **)(lVar10 + 0x28), puVar12 == (undefined8 *)0x0)) {
          uVar7 = 1;
        }
        else {
          uVar7 = (**(code **)*puVar12)();
          uVar7 = uVar7 ^ 1;
        }
        bVar3 = FUN_020fd7d8(*(long *)(lVar10 + 0x10) + *(long *)(lVar10 + 8));
        if ((((uVar7 & 1) == 0) && (*(long *)(lVar10 + 0x28) != 0)) &&
           (puVar12 = *(undefined8 **)(*(long *)(lVar10 + 0x28) + 8), puVar12 != (undefined8 *)0x0))
        {
          (**(code **)*puVar12)();
        }
      }
      pcStack_88 = local_7c;
      local_75 = 0;
      local_7c[0] = 0;
      local_80 = 8;
      local_90 = PTR_DAT_04bb3768 + 0x10;
      iVar8 = FUN_02076ca0(param_1 + 0xaf3c,
                           *(long *)(lVar11 + 0xe7278) + *(long *)(lVar11 + 0xe7270),
                           *(long *)(lVar9 + 0x17b98) + *(long *)(lVar9 + 0x17b90));
      iVar4 = iVar8 + 0x1d;
      if (iVar8 < 0x14) {
        iVar4 = iVar8;
      }
      iVar15 = 1;
      if (iVar8 < 0x17) {
        iVar15 = iVar4 + 1;
      }
      if (bVar3 < 8) {
        puVar12 = *(undefined8 **)(PTR_DAT_04bb6a58 + (ulong)bVar3 * 8 + 0x20);
      }
      else {
        puVar12 = &DAT_0407ebb1;
      }
      FUN_038d1270(&local_90,"%02d_%s",iVar15,puVar12);
      lVar16 = *(long *)(param_1 + 8);
      local_a0 = puVar2 + 0x10;
      pcStack_98 = "BLN_Spot_Tailor";
      puStack_68 = &DAT_0407ebb1;
      local_70 = local_a0;
      FUN_01e3dab0(lVar16 + 0x540,&local_a0,&local_90,&local_70);
      lVar10 = *(long *)(lVar16 + 0x3b8);
      *(long *)(lVar10 + 0x7f00) = lVar16;
      *(undefined **)(lVar10 + 0x7f08) = PTR_LAB_04bc15b8;
      puVar2 = PTR_DAT_04bc15d8;
      *(undefined8 *)(lVar10 + 0x7f10) = 0;
      *(undefined **)(lVar10 + 0x7ef8) = puVar2 + 0x10;
      if ((((uVar6 & 1) == 0) && (*(long *)(lVar9 + 0x17bb0) != 0)) &&
         (puVar12 = *(undefined8 **)(*(long *)(lVar9 + 0x17bb0) + 8), puVar12 != (undefined8 *)0x0))
      {
        (**(code **)*puVar12)();
      }
      if ((uVar5 & 1) != 0) {
        return;
      }
      if (*(long *)(lVar11 + 0xe7290) == 0) {
        return;
      }
      puVar12 = *(undefined8 **)(*(long *)(lVar11 + 0xe7290) + 8);
      if (puVar12 == (undefined8 *)0x0) {
        return;
      }
      (**(code **)*puVar12)();
      return;
    }
  }
  *(undefined **)(*(long *)(*(long *)(param_1 + 8) + 0x3b8) + 0x7ef8) = PTR_DAT_04bc15d0 + 0x10;
  return;
}

