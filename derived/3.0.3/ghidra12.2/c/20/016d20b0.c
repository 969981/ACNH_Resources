
void FUN_016d20b0(void)

{
  long *plVar1;
  uint *puVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  long lVar10;
  byte bVar11;
  long lVar12;
  undefined *local_68;
  undefined1 *puStack_60;
  undefined4 local_58;
  undefined1 local_54 [7];
  undefined1 local_4d;
  undefined *local_48;
  char *local_40;
  undefined8 uStack_38;
  undefined2 local_14;
  undefined1 local_12;
  undefined1 uStack_11;
  
  local_4d = 0;
  local_58 = 8;
  puStack_60 = local_54;
  local_54[0] = 0;
  local_68 = PTR_DAT_04bb3768 + 0x10;
  iVar4 = FUN_016d1b60();
  if (iVar4 != -1) {
    FUN_021d62e0(&local_68,iVar4);
  }
  local_12 = 8;
  local_14 = 0x23;
  FUN_020fd3a0(&local_14,&local_68);
  lVar12 = *(long *)PTR_DAT_04bb39b0;
  pbVar8 = PTR_DAT_04bb32e0;
  if (lVar12 == 0) {
LAB_016d217c:
    if (*pbVar8 < 8) goto LAB_016d21f4;
LAB_016d2188:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_016d21ec:
      pbVar8 = PTR_DAT_04bb5038;
      goto LAB_016d21f4;
    }
    lVar12 = **(long **)PTR_DAT_04bb27d0;
    bVar11 = *(byte *)(lVar12 + 0x473);
    pbVar8 = PTR_DAT_04bb5038;
    if ((long)(char)bVar11 != 0xffffffffffffffff) {
      puVar2 = (uint *)(lVar12 + 0x48) + ((long)(char)bVar11 & 0xffffffffU) * 0x20;
      if (7 < bVar11) {
        puVar2 = (uint *)(lVar12 + 0x48);
      }
      if ((*puVar2 & 8) != 0) {
        pbVar8 = (byte *)(lVar12 + 0x471);
      }
    }
    bVar11 = *pbVar8;
    bVar3 = 7 < bVar11;
    if (bVar3) {
      bVar11 = 0xff;
    }
    local_48 = (undefined *)CONCAT71(local_48._1_7_,bVar11);
    if (bVar3) goto LAB_016d21ec;
  }
  else {
    if (*(int *)(lVar12 + 0x15c) != 0) {
      pbVar8 = (byte *)(lVar12 + 0x158);
    }
    if (7 < *pbVar8) {
      if ((*(int *)(lVar12 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar8 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_016d217c;
      }
      goto LAB_016d2188;
    }
LAB_016d21f4:
    bVar11 = *pbVar8;
    if (7 < bVar11) {
      bVar11 = 0xff;
    }
    local_48 = (undefined *)CONCAT71(local_48._1_7_,bVar11);
  }
  FUN_016c9c18(&local_14,&local_48);
  lVar12 = *(long *)PTR_DAT_04bb46b0;
  if (lVar12 == 0) {
    return;
  }
  puVar9 = *(undefined8 **)(lVar12 + 0x10);
  if ((*(byte *)(lVar12 + 0x453) & 1) == 0) {
    lVar12 = (**(code **)(*(long *)*puVar9 + 0x38))();
    if (lVar12 == 0) {
      return;
    }
    lVar12 = lVar12 + 0x70;
  }
  else {
    if (puVar9 == (undefined8 *)0x0) {
      return;
    }
    if ((long *)puVar9[0x26] == (long *)0x0) {
      return;
    }
    lVar12 = (**(code **)(*(long *)puVar9[0x26] + 0x38))();
    if (lVar12 == 0) {
      return;
    }
  }
  plVar1 = (long *)(lVar12 + 0x2181a8);
  lVar10 = *(long *)(lVar12 + 0x2181c8);
  if (lVar10 == 0) {
    uVar6 = 0;
  }
  else {
    if (*(undefined8 **)(lVar10 + 0x10) == (undefined8 *)0x0) {
      uVar6 = 0;
      plVar7 = *(long **)(lVar10 + 0x20);
    }
    else {
      uVar6 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
      uVar6 = uVar6 & 0xffffffff;
      if (*(long *)(lVar12 + 0x2181c8) == 0) goto LAB_016d22e0;
      plVar7 = *(long **)(*(long *)(lVar12 + 0x2181c8) + 0x20);
    }
    if (plVar7 != (long *)0x0) {
      local_48 = (undefined *)*plVar1;
      local_40 = *(char **)(lVar12 + 0x2181b0);
      uStack_38 = 0x179e4;
      (**(code **)(*plVar7 + 0x20))(plVar7,&local_48);
    }
  }
LAB_016d22e0:
  bVar11 = *(byte *)(*(long *)(lVar12 + 0x2181b0) + *plVar1 + 0x179d0);
  if (7 < bVar11) {
    bVar11 = 0xff;
  }
  if ((((uVar6 & 1) != 0) && (*(long *)(lVar12 + 0x2181c8) != 0)) &&
     (puVar9 = *(undefined8 **)(*(long *)(lVar12 + 0x2181c8) + 0x18), puVar9 != (undefined8 *)0x0))
  {
    (**(code **)*puVar9)();
  }
  FUN_0208f100(*(long *)PTR_DAT_04bb3968 + 0x1320,(int)(char)bVar11,1,3,0);
  lVar10 = *(long *)(lVar12 + 0x2181c8);
  if (lVar10 == 0) {
    *(undefined1 *)(*(long *)(lVar12 + 0x2181b0) + *plVar1 + 0x179d0) = 0xff;
    goto LAB_016d23f0;
  }
  if (*(undefined8 **)(lVar10 + 0x10) == (undefined8 *)0x0) {
    uVar5 = 1;
    plVar7 = *(long **)(lVar10 + 0x20);
joined_r0x016d243c:
    if (plVar7 != (long *)0x0) {
      local_48 = (undefined *)*plVar1;
      local_40 = *(char **)(lVar12 + 0x2181b0);
      uStack_38 = 0x179e4;
      (**(code **)(*plVar7 + 0x20))(plVar7,&local_48);
    }
  }
  else {
    uVar5 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
    uVar5 = uVar5 ^ 1;
    if (*(long *)(lVar12 + 0x2181c8) != 0) {
      plVar7 = *(long **)(*(long *)(lVar12 + 0x2181c8) + 0x20);
      goto joined_r0x016d243c;
    }
  }
  *(undefined1 *)(*(long *)(lVar12 + 0x2181b0) + *plVar1 + 0x179d0) = 0xff;
  if ((((uVar5 & 1) == 0) && (*(long *)(lVar12 + 0x2181c8) != 0)) &&
     (puVar9 = *(undefined8 **)(*(long *)(lVar12 + 0x2181c8) + 0x18), puVar9 != (undefined8 *)0x0))
  {
    (**(code **)*puVar9)();
  }
LAB_016d23f0:
  FUN_0252d11c(&uStack_11);
  local_48 = PTR_DAT_04bb2020 + 0x10;
  local_40 = "GuideNoRoomNPC";
  FUN_0279a9f0(&uStack_11,&local_48,1);
  return;
}

