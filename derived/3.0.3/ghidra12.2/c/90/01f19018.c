
void FUN_01f19018(long param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  undefined4 uVar4;
  byte bVar5;
  undefined *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  byte *pbVar14;
  long lVar15;
  int iVar16;
  undefined *local_98;
  char *pcStack_90;
  undefined8 local_88;
  undefined1 *puStack_80;
  undefined4 local_78;
  undefined1 local_74 [7];
  undefined1 local_6d;
  byte local_64 [4];
  undefined *local_60;
  undefined8 *puStack_58;
  
  uVar4 = *(undefined4 *)(*(long *)(param_1 + 8) + 0x50c);
  lVar12 = *(long *)PTR_DAT_04bb46b0;
  if (lVar12 == 0) {
LAB_01f1909c:
    lVar12 = 0;
  }
  else {
    puVar13 = *(undefined8 **)(lVar12 + 0x10);
    if ((*(byte *)(lVar12 + 0x453) & 1) == 0) {
      lVar10 = (**(code **)(*(long *)*puVar13 + 0x38))();
      lVar12 = 0;
      if (lVar10 != 0) {
        lVar12 = lVar10 + 0x70;
      }
    }
    else {
      if ((puVar13 == (undefined8 *)0x0) || ((long *)puVar13[0x26] == (long *)0x0))
      goto LAB_01f1909c;
      lVar12 = (**(code **)(*(long *)puVar13[0x26] + 0x38))();
    }
  }
  lVar10 = *(long *)PTR_DAT_04bb39b0;
  pbVar14 = PTR_DAT_04bb32e0;
  if (lVar10 == 0) {
LAB_01f19100:
    if (7 < *pbVar14) {
LAB_01f1910c:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar10 = **(long **)PTR_DAT_04bb27d0;
        bVar5 = *(byte *)(lVar10 + 0x473);
        pbVar14 = PTR_DAT_04bb5038;
        if ((long)(char)bVar5 != 0xffffffffffffffff) {
          puVar3 = (uint *)(lVar10 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
          if (7 < bVar5) {
            puVar3 = (uint *)(lVar10 + 0x48);
          }
          if ((*puVar3 & 8) != 0) {
            pbVar14 = (byte *)(lVar10 + 0x471);
          }
        }
        local_64[0] = *pbVar14;
        if (local_64[0] < 8) goto LAB_01f1918c;
      }
      pbVar14 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar10 + 0x15c) != 0) {
      pbVar14 = (byte *)(lVar10 + 0x158);
    }
    if (7 < *pbVar14) {
      if ((*(int *)(lVar10 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar14 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_01f19100;
      }
      goto LAB_01f1910c;
    }
  }
  local_64[0] = *pbVar14;
  if (7 < local_64[0]) {
    local_64[0] = 0xff;
  }
LAB_01f1918c:
  lVar10 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_64,1);
  lVar11 = FUN_021c9770(uVar4,1);
  if ((((lVar12 == 0) || (lVar10 == 0)) || (lVar11 == 0)) ||
     (local_88 = (undefined *)((ulong)local_88._4_4_ << 0x20), (*(uint *)(lVar11 + 0x2ac) & 1) == 0)
     ) {
    *(undefined **)(*(long *)(*(long *)(param_1 + 8) + 0x3b8) + 0x7ef8) = PTR_DAT_04bc15d0 + 0x10;
  }
  else {
    if ((*(long **)(lVar12 + 0xe7290) == (long *)0x0) ||
       (puVar13 = (undefined8 *)**(long **)(lVar12 + 0xe7290), puVar13 == (undefined8 *)0x0)) {
      uVar7 = 1;
    }
    else {
      uVar7 = (**(code **)*puVar13)();
      uVar7 = uVar7 ^ 1;
    }
    if ((*(long **)(lVar10 + 0x17bb0) == (long *)0x0) ||
       (puVar13 = (undefined8 *)**(long **)(lVar10 + 0x17bb0), puVar13 == (undefined8 *)0x0)) {
      uVar8 = 1;
    }
    else {
      uVar8 = (**(code **)*puVar13)();
      uVar8 = uVar8 ^ 1;
    }
    FUN_021d6190(&local_88,uVar4);
    puStack_80 = local_74;
    local_6d = 0;
    local_74[0] = 0;
    local_78 = 8;
    uVar1 = 0;
    if (local_88._4_1_ != '\0') {
      uVar1 = (uint)local_88;
    }
    local_88 = PTR_DAT_04bb3768 + 0x10;
    iVar9 = FUN_02076ca0(param_1 + 0xaf3c,*(long *)(lVar12 + 0xe7278) + *(long *)(lVar12 + 0xe7270),
                         *(long *)(lVar10 + 0x17b98) + *(long *)(lVar10 + 0x17b90));
    iVar2 = iVar9 + 0x1d;
    if (iVar9 < 0x14) {
      iVar2 = iVar9;
    }
    iVar16 = 1;
    if (iVar9 < 0x17) {
      iVar16 = iVar2 + 1;
    }
    if (uVar1 < 8) {
      puVar13 = *(undefined8 **)(PTR_DAT_04bb6a58 + (ulong)uVar1 * 8 + 0x20);
    }
    else {
      puVar13 = &DAT_0407ebb1;
    }
    FUN_038d1270(&local_88,"%02d_%s",iVar16,puVar13);
    lVar15 = *(long *)(param_1 + 8);
    local_98 = PTR_DAT_04bb2020 + 0x10;
    pcStack_90 = "BLN_Spot_Tailor";
    puStack_58 = &DAT_0407ebb1;
    local_60 = local_98;
    FUN_01e3dab0(lVar15 + 0x540,&local_98,&local_88,&local_60);
    lVar11 = *(long *)(lVar15 + 0x3b8);
    *(long *)(lVar11 + 0x7f00) = lVar15;
    *(undefined **)(lVar11 + 0x7f08) = PTR_LAB_04bc15b8;
    puVar6 = PTR_DAT_04bc15d8;
    *(undefined8 *)(lVar11 + 0x7f10) = 0;
    *(undefined **)(lVar11 + 0x7ef8) = puVar6 + 0x10;
    if ((((uVar8 & 1) == 0) && (*(long *)(lVar10 + 0x17bb0) != 0)) &&
       (puVar13 = *(undefined8 **)(*(long *)(lVar10 + 0x17bb0) + 8), puVar13 != (undefined8 *)0x0))
    {
      (**(code **)*puVar13)();
    }
    if ((((uVar7 & 1) == 0) && (*(long *)(lVar12 + 0xe7290) != 0)) &&
       (puVar13 = *(undefined8 **)(*(long *)(lVar12 + 0xe7290) + 8), puVar13 != (undefined8 *)0x0))
    {
      (**(code **)*puVar13)();
    }
  }
  return;
}

