
undefined8 FUN_003ccb98(int *param_1,undefined4 *param_2,long *param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  int iVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  ulong uVar19;
  int iVar20;
  uint uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  undefined8 local_94;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined8 local_84;
  undefined1 local_7c;
  undefined2 local_7b;
  undefined1 local_79;
  undefined1 local_78;
  undefined1 local_77;
  undefined1 local_76;
  undefined1 local_75;
  undefined1 local_74;
  undefined1 local_73;
  undefined2 local_72;
  undefined4 local_70;
  undefined1 local_6c;
  undefined1 local_6b;
  undefined1 local_6a;
  ulong local_68;
  
  nn::util::ReferSymbol("SDK MW+Nintendo+NintendoWare_Atk-9_3_1-Release");
  puVar6 = PTR_DAT_04bd0100;
  uVar21 = param_2[0x24];
  if ((int)uVar21 < 2) {
    uVar21 = 1;
  }
  if (0x17 < (int)uVar21) {
    uVar21 = 0x18;
  }
  local_68 = (ulong)*(byte *)((long)param_2 + 0x96) << 8 | (ulong)uVar21 << 0x20 |
             (ulong)*(byte *)((long)param_2 + 0x95);
  if (*PTR_DAT_04bd00f8 == '\0') {
    lVar24 = *param_3;
    lVar22 = param_3[2];
    lVar23 = param_3[4];
    if (*PTR_DAT_04bd0100 == '\0') {
      uVar15 = FUN_003c5b84();
      lVar16 = FUN_003c5c90(uVar15,*(undefined8 *)(param_2 + 4),param_2[6]);
      uVar15 = FUN_003c5c08();
      lVar17 = FUN_003c5c90(uVar15,*(undefined8 *)(param_2 + 0xe),param_2[0x10]);
      FUN_003cd1a0(param_2,lVar24);
      lVar24 = lVar17 + lVar16 + lVar24;
    }
    local_94 = *(undefined8 *)(param_2 + 0x14);
    uVar25 = lVar24 + 0xfffU & 0xfffffffffffff000;
    local_78 = *(undefined1 *)((long)param_2 + 0x62);
    local_8c = param_2[0x16];
    local_84 = 0x1e00000001;
    local_7c = *(undefined1 *)(param_2 + 0x18);
    local_7b = 0;
    uStack_88 = param_2[0x19];
    local_74 = *(undefined1 *)((long)param_2 + 0x73);
    local_6c = 0;
    local_77 = *(undefined1 *)((long)param_2 + 99);
    local_76 = 1;
    local_73 = *(undefined1 *)((long)param_2 + 0x79);
    local_79 = *(undefined1 *)((long)param_2 + 0x76);
    local_72 = *(undefined2 *)((long)param_2 + 0x7a);
    local_75 = *(undefined1 *)(param_2 + 0x1e);
    local_6b = *(undefined1 *)(param_2 + 0x25);
    local_70 = param_2[0x1f];
    local_6a = *(undefined1 *)((long)param_2 + 0x97);
    iVar14 = param_2[0x22];
    if (param_2[0x23] != -1) {
      iVar14 = param_2[0x23];
    }
    FUN_003b4ed8(&local_94,local_75,local_79,*(undefined1 *)((long)param_2 + 0x77),
                 *(undefined1 *)(param_2 + 0x1c),*(undefined1 *)((long)param_2 + 0x71),
                 *(undefined1 *)(param_2 + 0x20),param_2[0x21],iVar14);
    puVar7 = PTR_DAT_04bd0108;
    *(undefined4 *)PTR_DAT_04bd0108 = param_2[0x16];
    uVar15 = FUN_03b38a74();
    lVar24 = FUN_003b5164(uVar15,&local_94);
    uVar15 = FUN_03b38a74();
    lVar16 = FUN_003b5330(uVar15,*(undefined4 *)puVar7);
    if (*(char *)((long)param_2 + 0x62) != '\0') {
      uVar15 = FUN_03b38a74();
      lVar17 = FUN_003b5338(uVar15,&local_94);
      lVar24 = lVar17 + lVar24;
    }
    if (*(char *)((long)param_2 + 99) == '\0') {
      uVar15 = 0;
      lVar23 = 0;
    }
    else {
      uVar15 = FUN_03b38a74();
      uVar15 = FUN_003b5380(uVar15,&local_94);
    }
    uVar18 = FUN_03b38a74();
    iVar14 = FUN_003b5bf0(uVar18,uVar25,lVar24,lVar22,lVar16,lVar23,uVar15,&local_94);
    if (param_1 != (int *)0x0) {
      *param_1 = iVar14;
    }
    if (iVar14 == 0) {
      lVar24 = lVar24 + uVar25;
      if (*(char *)(param_2 + 0x18) == '\0') {
        uVar25 = 0;
        lVar23 = 0;
        uVar5 = 0;
      }
      else {
        uVar25 = lVar24 + 0x3fU & 0xffffffffffffffc0;
        uVar15 = FUN_03b38a74();
        lVar23 = FUN_003b5b10(uVar15,&local_94);
        uVar5 = *(undefined1 *)(param_2 + 0x18);
        lVar23 = lVar23 * 3;
        lVar24 = lVar23 + uVar25;
      }
      puVar9 = PTR_DAT_04bd0130;
      puVar8 = PTR_DAT_04bd0128;
      puVar6 = PTR_DAT_04bd0120;
      iVar2 = param_2[0x23];
      iVar20 = param_2[0x24];
      uVar19 = lVar24 + 0xfffU & 0xfffffffffffff000;
      *(long *)PTR_DAT_04bd0128 = lVar23;
      uVar3 = param_2[0x14];
      uVar4 = param_2[0x15];
      *(ulong *)puVar6 = uVar25;
      puVar10 = PTR_DAT_04bd0138;
      *(undefined4 *)puVar9 = uVar3;
      puVar9 = PTR_DAT_04bd0168;
      uVar3 = param_2[0x21];
      iVar14 = param_2[0x22];
      if (iVar2 != -1) {
        iVar14 = iVar2;
      }
      *(undefined4 *)puVar10 = uVar4;
      puVar10 = PTR_DAT_04bd0170;
      *(undefined4 *)puVar9 = uVar3;
      puVar9 = PTR_DAT_04bd0140;
      *(int *)puVar10 = iVar14;
      *puVar9 = uVar5;
      puVar10 = PTR_DAT_04bd0148;
      *PTR_DAT_04bd0148 = *(undefined1 *)((long)param_2 + 0x61);
      *PTR_DAT_04bd0180 = *(undefined1 *)(param_2 + 0x1c);
      *PTR_DAT_04bd0188 = *(undefined1 *)((long)param_2 + 0x71);
      *PTR_DAT_04bd0190 = *(undefined1 *)((long)param_2 + 0x76);
      *PTR_DAT_04bd0198 = *(undefined1 *)((long)param_2 + 0x62);
      *PTR_DAT_04bd01a0 = *(undefined1 *)((long)param_2 + 99);
      *PTR_DAT_04bd01a8 = *(undefined1 *)((long)param_2 + 0x77);
      *PTR_DAT_04bd01b0 = local_76;
      *PTR_DAT_04bd01b8 = *(undefined1 *)(param_2 + 0x1e);
      puVar13 = PTR_DAT_04bd0160;
      *PTR_DAT_04bd0160 = *(undefined1 *)((long)param_2 + 0x73);
      *PTR_DAT_04bd01c0 = *(undefined1 *)((long)param_2 + 0x79);
      *PTR_DAT_04bd01c8 = *(undefined1 *)((long)param_2 + 0x7b);
      puVar11 = PTR_DAT_04bd0150;
      *PTR_DAT_04bd0150 = *(undefined1 *)((long)param_2 + 0x7f);
      *PTR_DAT_04bd01d0 = *(undefined1 *)(param_2 + 0x1f);
      *PTR_DAT_04bd01d8 = *(undefined1 *)(param_2 + 0x20);
      *PTR_DAT_04bd01e0 = *(undefined1 *)(param_2 + 0x25);
      *PTR_DAT_04bd01e8 = *(undefined1 *)((long)param_2 + 0x95);
      *PTR_DAT_04bd01f0 = *(undefined1 *)((long)param_2 + 0x96);
      *PTR_DAT_04bd01f8 = *(undefined1 *)((long)param_2 + 0x97);
      if (iVar20 < 2) {
        iVar20 = 1;
      }
      if (0x17 < iVar20) {
        iVar20 = 0x18;
      }
      *(int *)PTR_DAT_04bd0178 = iVar20;
      lVar23 = *(long *)(param_2 + 2);
      lVar24 = lVar23 + uVar19;
      *(ulong *)PTR_DAT_04bd0200 = uVar19;
      puVar12 = PTR_DAT_04bd0158;
      *(long *)PTR_DAT_04bd0158 = lVar23;
      uVar15 = FUN_003ca198();
      FUN_003ca2fc(uVar15,*(undefined8 *)puVar6,*(undefined8 *)puVar8,*puVar9,*puVar10,*puVar11);
      lVar23 = *(long *)(param_2 + 0xc);
      uVar15 = FUN_003c98bc();
      FUN_003c99d4(uVar15,*(undefined1 *)(param_2 + 0x18));
      puVar8 = PTR_DAT_04bd0210;
      puVar6 = PTR_DAT_04bd0208;
      uVar15 = *(undefined8 *)(param_2 + 0xc);
      *(long *)PTR_DAT_04bd0208 = lVar24;
      *(undefined8 *)puVar8 = uVar15;
      puVar9 = PTR_DAT_04bd0218;
      *(undefined4 *)PTR_DAT_04bd0218 = param_2[0x11];
      uVar15 = FUN_003cb1d8();
      FUN_003cb258(uVar15,*(undefined4 *)puVar7,&local_68);
      uVar15 = FUN_003cb1d8();
      uVar18 = FUN_003cb1d8();
      uVar18 = FUN_003cb258(uVar18,*(undefined4 *)puVar7,&local_68);
      FUN_003cb2a0(uVar15,lVar23 + lVar24,uVar18,&local_68);
      uVar15 = FUN_003cc20c();
      uVar15 = FUN_003cc29c(uVar15,*(int *)puVar7 << 1,&local_68);
      uVar18 = FUN_003cc20c();
      FUN_003cc2e4(uVar18,lVar16 + lVar22,uVar15,*(int *)puVar7 << 1,&local_68);
      FUN_003c5e20();
      bVar1 = *(char *)((long)param_2 + 0x72) != '\0';
      if (bVar1) {
        uVar15 = FUN_003cdc2c();
        FUN_003cdaf4(uVar15,param_2[10],*(undefined8 *)puVar6,*(undefined8 *)puVar8,param_2[0x1b],0,
                     *(undefined4 *)puVar9);
      }
      *PTR_DAT_04bd0220 = bVar1;
      uVar15 = FUN_003c5b84();
      FUN_003cc180(uVar15,0);
      if (*puVar13 != '\0') {
        uVar15 = FUN_003ca198();
        FUN_003ca278(uVar15,*param_2,*(undefined8 *)PTR_DAT_04bd0200,*(undefined8 *)puVar12,
                     param_2[0x1a],0);
      }
      FUN_003bea74();
      uVar15 = 1;
      *PTR_DAT_04bd00f8 = 1;
    }
    else {
      if (*puVar6 != '\0') {
        FUN_003c5b84();
        FUN_003cba68();
        FUN_003c5c08();
        FUN_003cba68();
        *(undefined8 *)PTR_DAT_04bd0110 = 0;
        *(undefined8 *)PTR_DAT_04bd0118 = 0;
      }
      uVar15 = 0;
    }
  }
  else if (param_1 == (int *)0x0) {
    uVar15 = 1;
  }
  else {
    *param_1 = 0;
    uVar15 = 1;
  }
  return uVar15;
}

