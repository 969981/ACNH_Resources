
/* WARNING: Removing unreachable block (ram,0x00dbf34c) */
/* WARNING: Removing unreachable block (ram,0x00dbf294) */
/* WARNING: Removing unreachable block (ram,0x00dbf250) */
/* WARNING: Removing unreachable block (ram,0x00dbf25c) */
/* WARNING: Removing unreachable block (ram,0x00dbf268) */
/* WARNING: Removing unreachable block (ram,0x00dbf27c) */
/* WARNING: Removing unreachable block (ram,0x00dbf288) */
/* WARNING: Removing unreachable block (ram,0x00dbf320) */
/* WARNING: Removing unreachable block (ram,0x00dbf32c) */
/* WARNING: Removing unreachable block (ram,0x00dbf338) */
/* WARNING: Removing unreachable block (ram,0x00dbf358) */
/* WARNING: Removing unreachable block (ram,0x00dbf368) */

void FUN_00dbec80(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  byte *pbVar4;
  uint *puVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined2 uVar10;
  short sVar11;
  uint uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined2 uVar15;
  byte bVar16;
  uint uVar17;
  int iVar18;
  undefined4 uVar19;
  ulong uVar20;
  long *plVar21;
  ushort *puVar22;
  undefined8 *puVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  ulong uVar27;
  undefined8 uVar28;
  long lVar29;
  long lVar30;
  undefined1 auStack_82 [2];
  undefined8 local_80;
  undefined4 local_78;
  undefined2 uStack_74;
  undefined2 uStack_72;
  undefined4 local_70;
  undefined2 uStack_6c;
  undefined2 uStack_6a;
  undefined6 local_68;
  undefined2 uStack_62;
  byte local_48 [2];
  undefined1 auStack_46 [2];
  byte local_44 [4];
  
  puVar13 = PTR_DAT_04bb2230;
  if (*(long *)PTR_DAT_04bb2230 == 0) {
    lVar29 = 0;
    if (cRam0000000000000058 == '\0') goto LAB_00dbece8;
LAB_00dbecc0:
    bVar16 = (**(code **)(*(long *)(lVar29 + 0x50) + 0x18))((long *)(lVar29 + 0x50));
    *(undefined1 *)(lVar29 + 0x58) = 0;
  }
  else {
    lVar29 = *(long *)(*(long *)PTR_DAT_04bb2230 + 0x28);
    if (*(char *)(lVar29 + 0x58) != '\0') goto LAB_00dbecc0;
LAB_00dbece8:
    bVar16 = 1;
  }
  *(byte *)(lVar29 + 0x59) = bVar16 & 1;
  puVar2 = PTR_DAT_04bb32e0;
  if ((bVar16 & 1) == 0) {
    return;
  }
  if (*(char *)(lVar29 + 0x5a) != '\0') {
    return;
  }
  iVar18 = *(int *)(lVar29 + 100);
  pbVar4 = PTR_DAT_04bb32e0;
  if (*(long *)(param_1 + 8) != 0) {
    pbVar4 = (byte *)(*(long *)(param_1 + 8) + 0x2a8);
  }
  if (iVar18 < 1) {
LAB_00dbedb0:
    lVar24 = *(long *)puVar13;
    if (lVar24 != 0) goto LAB_00dbedb8;
LAB_00dbedf4:
    lVar24 = 0;
    if (cRam0000000000000d78 == '\0') goto LAB_00dbee00;
LAB_00dbedc4:
    bVar16 = (**(code **)(*(long *)(lVar24 + 0xd70) + 0x18))(lVar24 + 0xd70);
    *(undefined1 *)(lVar24 + 0xd78) = 0;
  }
  else {
    local_80 = 0xfffe;
    FUN_0277d4ac(&local_80);
    if (*(int *)(lVar29 + 0x6c) == 3) {
      local_78 = 0xddc;
LAB_00dbed68:
      uStack_74 = 0;
      uStack_72 = 0;
      FUN_0277d4ac(&local_78);
      local_80 = CONCAT44(CONCAT22(uStack_72,uStack_74),local_78);
    }
    else {
      if (*(int *)(lVar29 + 0x6c) != 2) {
        local_78 = 0x9d1;
        goto LAB_00dbed68;
      }
      if (-1 < *(int *)(lVar29 + 0x68)) {
        FUN_03425c00(&local_80);
      }
    }
    uVar20 = FUN_033ffc10(pbVar4);
    if ((uVar20 & 1) != 0) {
      FUN_034252b0(pbVar4,&local_80,iVar18,*(undefined8 *)(*(long *)PTR_DAT_04bb43c0 + 0xdc330));
      goto LAB_00dbedb0;
    }
    FUN_026772d0(pbVar4,&local_80,iVar18);
    lVar24 = *(long *)puVar13;
    if (lVar24 == 0) goto LAB_00dbedf4;
LAB_00dbedb8:
    lVar24 = *(long *)(lVar24 + 0x28);
    if (*(char *)(lVar24 + 0xd78) != '\0') goto LAB_00dbedc4;
LAB_00dbee00:
    bVar16 = 1;
  }
  uVar20 = *(ulong *)(lVar24 + 0xd90);
  *(byte *)(lVar24 + 0xd79) = bVar16 & 1;
  uVar12 = (uint)(uVar20 >> 0x20);
  uVar17 = (int)uVar20 - ((uint)(uVar20 >> 1) & 0x55555555);
  uVar17 = (uVar17 >> 2 & 0x33333333) + (uVar17 & 0x33333333);
  uVar12 = uVar12 - (uVar12 >> 1 & 0x55555555);
  uVar3 = uVar17 + (uVar17 >> 4) & 0xf0f0f0f;
  uVar17 = (uVar12 >> 2 & 0x33333333) + (uVar12 & 0x33333333);
  uVar3 = uVar3 + (uVar3 >> 8);
  uVar17 = uVar17 + (uVar17 >> 4) & 0xf0f0f0f;
  uVar17 = uVar17 + (uVar17 >> 8);
  if ((uVar17 + (uVar17 >> 0x10) & 0x3f) + (uVar3 + (uVar3 >> 0x10) & 0x3f) == 1) {
    uVar26 = 0;
    do {
      uVar27 = uVar26;
      if (((uVar20 >> (uVar26 & 0x3f) & 1) != 0) ||
         (uVar27 = uVar26 + 1, (uVar20 >> (uVar27 & 0x3f) & 1) != 0)) {
        uVar17 = (uint)uVar27;
        if (0x27 < uVar17) {
          uVar17 = 0xffffffff;
        }
        goto LAB_00dbeec0;
      }
      uVar26 = uVar26 + 2;
    } while (uVar26 != 0x40);
  }
  uVar17 = *(uint *)PTR_DAT_04bb4e20;
LAB_00dbeec0:
  FUN_02675b70(pbVar4,uVar17);
  if (*(int *)(lVar29 + 0x6c) == 1) {
    bVar16 = *pbVar4;
    if (7 < bVar16) {
      bVar16 = 0xff;
    }
    local_78 = CONCAT31(local_78._1_3_,bVar16);
    lVar24 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,&local_78,1);
    if (lVar24 != 0) {
      lVar25 = *(long *)(lVar24 + 0x108);
      if (lVar25 == 0) {
        uVar20 = 0;
      }
      else {
        if (*(undefined8 **)(lVar25 + 0x10) == (undefined8 *)0x0) {
          uVar20 = 0;
        }
        else {
          uVar20 = (**(code **)**(undefined8 **)(lVar25 + 0x10))();
          lVar25 = *(long *)(lVar24 + 0x108);
          uVar20 = uVar20 & 0xffffffff;
          if (lVar25 == 0) goto LAB_00dbef8c;
        }
        plVar21 = *(long **)(lVar25 + 0x20);
        if (plVar21 != (long *)0x0) {
          uVar28 = *(undefined8 *)(lVar24 + 0xe8);
          uVar6 = *(undefined8 *)(lVar24 + 0xf0);
          local_78 = (undefined4)uVar28;
          uStack_74 = (undefined2)((ulong)uVar28 >> 0x20);
          uStack_72 = (undefined2)((ulong)uVar28 >> 0x30);
          local_70 = (undefined4)uVar6;
          uStack_6c = (undefined2)((ulong)uVar6 >> 0x20);
          uStack_6a = (undefined2)((ulong)uVar6 >> 0x30);
          local_68 = 0x1fc8;
          uStack_62 = 0;
          (**(code **)(*plVar21 + 0x20))(plVar21,&local_78);
        }
      }
LAB_00dbef8c:
      lVar25 = *(long *)(lVar24 + 0xf0) + *(long *)(lVar24 + 0xe8);
      local_80 = 0x1515;
      FUN_0277d4ac(&local_80);
      FUN_03425900(&local_80,lVar29 + 0x5c);
      puVar14 = PTR_DAT_04bb43c0;
      local_68 = 0;
      uStack_62 = 0;
      puVar1 = PTR_DAT_04bc0510 + 0x10;
      local_78 = SUB84(puVar1,0);
      uStack_74 = (undefined2)((ulong)puVar1 >> 0x20);
      uStack_72 = (undefined2)((ulong)puVar1 >> 0x30);
      local_70 = (undefined4)local_80;
      uStack_6c = (undefined2)((ulong)local_80 >> 0x20);
      uStack_6a = (undefined2)((ulong)local_80 >> 0x30);
      lVar30 = *(long *)PTR_DAT_04bb43c0;
      uVar17 = FUN_0277d6c4(&local_70);
      if (*(long *)puVar14 != 0) {
        lVar30 = *(long *)(lVar30 + 0x57e58);
        uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
        if ((uVar17 < *(uint *)(lVar30 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar17 * 8) != 0)) {
          lVar30 = *(long *)PTR_DAT_04bc0428;
          uVar17 = FUN_0277d6c4(&local_80);
          uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
          if ((uVar17 < *(uint *)(lVar30 + 0x1d8)) &&
             (lVar30 = *(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar17 * 8), lVar30 != 0)) {
            local_68 = (undefined6)lVar30;
            uStack_62 = (undefined2)((ulong)lVar30 >> 0x30);
          }
        }
      }
      iVar18 = FUN_01afcfa0(&local_78);
      if (((iVar18 != 0) && (puVar22 = (ushort *)FUN_01afd600(&local_78), puVar22 != (ushort *)0x0))
         && ((*puVar22 & 0x18) == 0x10)) {
        local_48[0] = *pbVar4;
        if (7 < local_48[0]) {
          local_48[0] = 0xff;
        }
        FUN_01afd2f0(auStack_46,&local_78);
        FUN_02656220(local_44,local_48,auStack_46);
        FUN_007ef010(auStack_82,local_44);
        FUN_01afde50(&local_78,auStack_82);
        local_80 = CONCAT44(CONCAT22(uStack_6a,uStack_6c),local_70);
      }
      *(undefined4 *)(lVar25 + 0x1a50) = (undefined4)local_80;
      *(undefined4 *)(lVar25 + 0x1a54) = local_80._4_4_;
      if ((((uVar20 & 1) != 0) && (*(long *)(lVar24 + 0x108) != 0)) &&
         (puVar23 = *(undefined8 **)(*(long *)(lVar24 + 0x108) + 0x18), puVar23 != (undefined8 *)0x0
         )) {
        (**(code **)*puVar23)();
      }
    }
  }
  else {
    FUN_02674700(pbVar4,uVar17,lVar29 + 0x5c,1,0);
  }
  bVar16 = *puVar2;
  if (7 < bVar16) {
    bVar16 = 0xff;
  }
  uStack_74 = 0xfffe;
  uStack_72 = 0;
  local_70 = 0;
  local_78._0_1_ = bVar16;
  FUN_0277d4ac(&uStack_74);
  bVar16 = *pbVar4;
  if (7 < bVar16) {
    bVar16 = 0xff;
  }
  local_78 = CONCAT31(local_78._1_3_,bVar16);
  local_70 = *(undefined4 *)(lVar29 + 0x60);
  uStack_74 = (undefined2)*(undefined4 *)(lVar29 + 0x5c);
  uStack_72 = (undefined2)((uint)*(undefined4 *)(lVar29 + 0x5c) >> 0x10);
  FUN_03400470(&local_78);
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  local_78 = SUB84(puVar2,0);
  uVar19 = local_78;
  uStack_74 = (undefined2)((ulong)puVar2 >> 0x20);
  uVar10 = uStack_74;
  uStack_72 = (undefined2)((ulong)puVar2 >> 0x30);
  uVar15 = uStack_72;
  local_70 = 0x40c9c91;
  uStack_6c = 0;
  uStack_6a = 0;
  FUN_0279a9f0(pbVar4,&local_78,1);
  local_70 = 0x40c9c91;
  uStack_6c = 0;
  uStack_6a = 0;
  local_78 = uVar19;
  uStack_74 = uVar10;
  uStack_72 = uVar15;
  FUN_0279b044(pbVar4,&local_78,1);
  if ((*(int *)(PTR_DAT_04bc3a80 + 0x38) != -0x57d4aeba) &&
     (*(int *)(PTR_DAT_04bc3a80 + 0x38) != 0x1693a871)) {
    sVar11 = *(short *)PTR_DAT_04bb6298;
    if (sVar11 == -1) goto LAB_00dbf1e4;
    puVar5 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar11 * 8);
    if (0xff < (uint)(int)sVar11) {
      puVar5 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar5 >> 3 & 1) == 0) {
      puVar5 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar11 * 8);
      if (0xff < (uint)(int)sVar11) {
        puVar5 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar5 >> 7 & 1) == 0) goto LAB_00dbf1e4;
    }
  }
  local_70 = 0x40fe8d5;
  uStack_6c = 0;
  uStack_6a = 0;
  bVar16 = *pbVar4;
  if (7 < bVar16) {
    bVar16 = 0xff;
  }
  local_44[0] = bVar16;
  local_78 = uVar19;
  uStack_74 = uVar10;
  uStack_72 = uVar15;
  uVar19 = FUN_02582fe0(local_44);
  local_80 = CONCAT44(local_80._4_4_,uVar19);
  FUN_021294b0(&local_78,1,&local_80);
LAB_00dbf1e4:
  lVar24 = *(long *)puVar13;
  if (lVar24 == 0) {
    lVar25 = 0;
  }
  else {
    lVar25 = *(long *)(lVar24 + 0x28);
  }
  *(undefined8 *)(lVar25 + 0xd90) = 0;
  *(undefined4 *)(lVar25 + 0xd98) = 1;
  *(undefined2 *)(lVar25 + 0xd78) = 0x100;
  *(undefined1 *)(lVar25 + 0xd9c) = 0;
  *(undefined4 *)(&DAT_00002140 + lVar25) = 0xd;
  *(undefined8 *)(lVar25 + 0xd80) = 0;
  *(undefined8 *)(lVar25 + 0xd88) = 0;
  if (lVar24 == 0) {
    lVar24 = 0;
  }
  else {
    lVar24 = *(long *)(lVar24 + 0x28);
  }
  uVar10 = *(undefined2 *)(lVar29 + 0x5c);
  uVar8 = *(undefined1 *)(lVar29 + 0x5e);
  uVar9 = *(undefined1 *)(lVar29 + 0x5f);
  uVar19 = *(undefined4 *)(lVar29 + 0x60);
  uVar28 = *(undefined8 *)(lVar29 + 100);
  uVar7 = *(undefined4 *)(lVar29 + 0x6c);
  *(undefined2 *)(lVar24 + 0x58) = *(undefined2 *)(lVar29 + 0x58);
  *(undefined1 *)(lVar24 + 0x5a) = 1;
  *(undefined2 *)(lVar24 + 0x5c) = uVar10;
  *(undefined1 *)(lVar24 + 0x5e) = uVar8;
  *(undefined1 *)(lVar24 + 0x5f) = uVar9;
  *(undefined4 *)(lVar24 + 0x60) = uVar19;
  *(undefined8 *)(lVar24 + 100) = uVar28;
  *(undefined4 *)(lVar24 + 0x6c) = uVar7;
  return;
}

