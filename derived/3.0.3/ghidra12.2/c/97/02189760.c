
void FUN_02189760(void)

{
  uint *puVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  ulong uVar13;
  int iVar14;
  int iVar15;
  uint local_84;
  undefined8 local_80;
  char *pcStack_78;
  byte local_6c [4];
  ulong local_68;
  
  local_68 = 0;
  puVar9 = *(undefined8 **)(*(long *)PTR_DAT_04bb46b0 + 0x10);
  if ((*(byte *)(*(long *)PTR_DAT_04bb46b0 + 0x453) & 1) == 0) {
    lVar6 = (**(code **)(*(long *)*puVar9 + 0x38))();
    lVar7 = 0;
    if (lVar6 != 0) {
      lVar7 = lVar6 + 0x70;
    }
  }
  else if (puVar9 == (undefined8 *)0x0) {
    lVar7 = 0;
  }
  else {
    lVar7 = 0;
    if ((long *)puVar9[0x26] != (long *)0x0) {
      lVar7 = (**(code **)(*(long *)puVar9[0x26] + 0x38))();
    }
  }
  if ((*(long **)(lVar7 + 0x1bf260) == (long *)0x0) ||
     (puVar9 = (undefined8 *)**(long **)(lVar7 + 0x1bf260), puVar9 == (undefined8 *)0x0)) {
    local_84 = 0;
  }
  else {
    local_84 = (**(code **)*puVar9)();
  }
  puVar4 = PTR_DAT_04bb5038;
  puVar3 = PTR_DAT_04bb39b0;
  pbVar10 = PTR_DAT_04bb32e0;
  uVar13 = 0;
  iVar5 = 0;
  iVar15 = 0;
  do {
    local_80 = (undefined *)CONCAT44(local_80._4_4_,iVar15);
    lVar6 = *(long *)puVar3;
    pbVar12 = pbVar10;
    if (lVar6 == 0) {
      if (7 < *pbVar10) goto LAB_021898c0;
LAB_02189930:
      local_6c[0] = *pbVar12;
      if (7 < local_6c[0]) {
        local_6c[0] = 0xff;
      }
    }
    else {
      if (*(int *)(lVar6 + 0x15c) != 0) {
        pbVar12 = (byte *)(lVar6 + 0x158);
      }
      if ((*pbVar12 < 8) ||
         (((*(int *)(lVar6 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
          (pbVar12 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar12 < 8))))
      goto LAB_02189930;
LAB_021898c0:
      pbVar12 = puVar4;
      if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) goto LAB_02189930;
      lVar6 = **(long **)PTR_DAT_04bb27d0;
      bVar2 = *(byte *)(lVar6 + 0x473);
      pbVar11 = puVar4;
      if ((long)(char)bVar2 != 0xffffffffffffffff) {
        puVar1 = (uint *)(lVar6 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
        if (7 < bVar2) {
          puVar1 = (uint *)(lVar6 + 0x48);
        }
        if ((*puVar1 & 8) != 0) {
          pbVar11 = (byte *)(lVar6 + 0x471);
        }
      }
      local_6c[0] = *pbVar11;
      if (7 < local_6c[0]) goto LAB_02189930;
    }
    uVar8 = FUN_028d6bec(*(long *)(lVar7 + 0x1bf248) + *(long *)(lVar7 + 0x1bf240),iVar15,local_6c);
    if ((uVar8 & 1) != 0) {
      uVar13 = 1L << ((ulong)local_80 & 0x3f) | uVar13;
      if ((int)local_80 - 0x18U < 3) {
        iVar5 = iVar5 + 1;
      }
      local_68 = uVar13;
    }
    iVar14 = 0x21;
    if (iVar15 < 0x21) {
      iVar14 = iVar15 + 1;
    }
    iVar15 = iVar14;
  } while (iVar14 != 0x21);
  if (iVar5 < 2) goto LAB_02189ac0;
  lVar6 = *(long *)puVar3;
  if (lVar6 == 0) {
    if (7 < *pbVar10) goto LAB_021899ec;
LAB_02189a58:
    local_6c[0] = *pbVar10;
    if (7 < local_6c[0]) {
      local_6c[0] = 0xff;
    }
  }
  else {
    if (*(int *)(lVar6 + 0x15c) != 0) {
      pbVar10 = (byte *)(lVar6 + 0x158);
    }
    if ((*pbVar10 < 8) ||
       (((*(int *)(lVar6 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
        (pbVar10 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar10 < 8)))) goto LAB_02189a58;
LAB_021899ec:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_02189a50:
      pbVar10 = PTR_DAT_04bb5038;
      goto LAB_02189a58;
    }
    lVar6 = **(long **)PTR_DAT_04bb27d0;
    bVar2 = *(byte *)(lVar6 + 0x473);
    pbVar10 = PTR_DAT_04bb5038;
    if ((long)(char)bVar2 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar6 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
      if (7 < bVar2) {
        puVar1 = (uint *)(lVar6 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar10 = (byte *)(lVar6 + 0x471);
      }
    }
    local_6c[0] = *pbVar10;
    if (7 < local_6c[0]) goto LAB_02189a50;
  }
  local_80 = PTR_DAT_04bb2020 + 0x10;
  pcStack_78 = "RadioGymnasticsLastLeaderSpNpc";
  iVar5 = FUN_02753180(local_6c,&local_80);
  if (iVar5 == 3) {
    uVar13 = uVar13 & 0xfffffffffe7fffff;
  }
  else if (iVar5 == 2) {
    uVar13 = uVar13 & 0xfffffffffbffffff;
  }
  else {
    if (iVar5 != 1) goto LAB_02189ac0;
    uVar13 = uVar13 & 0xfffffffffdffffff;
  }
  local_68 = uVar13;
LAB_02189ac0:
  uVar8 = (ulong)local_80 >> 0x30;
  local_80 = (undefined *)CONCAT26((ushort)uVar8 & 0xff00,0xff0000000000);
  if (-1 < DAT_053fbd50) {
    FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053fbd50,&local_80,&local_68,8,0);
    uVar13 = local_68;
  }
  *(ulong *)(DAT_053fbb90 + 0x1c10) = uVar13;
  if ((((local_84 & 1) != 0) && (*(long *)(lVar7 + 0x1bf260) != 0)) &&
     (puVar9 = *(undefined8 **)(*(long *)(lVar7 + 0x1bf260) + 8), puVar9 != (undefined8 *)0x0)) {
    (**(code **)*puVar9)();
  }
  return;
}

