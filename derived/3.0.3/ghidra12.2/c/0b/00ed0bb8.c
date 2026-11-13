
bool FUN_00ed0bb8(uint *param_1,byte param_2)

{
  uint uVar1;
  byte *pbVar2;
  uint *puVar3;
  byte bVar4;
  char cVar5;
  short sVar6;
  uint uVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  ulong uVar18;
  long lVar19;
  undefined8 *puVar20;
  uint uVar21;
  undefined *puVar22;
  long lVar23;
  byte bVar24;
  byte bVar25;
  uint uVar26;
  uint uVar27;
  uint local_8c;
  undefined8 local_78;
  char *pcStack_70;
  undefined2 local_68;
  undefined2 local_64;
  
  uVar18 = FUN_021fe3b0(*param_1);
  if ((uVar18 & 1) == 0) {
    return false;
  }
  local_64 = 0;
  local_68 = 0;
  lVar19 = FUN_0265c2a0(*param_1);
  if (lVar19 == 0) {
    uVar14 = 0;
  }
  else {
    if ((*(long **)(lVar19 + 0x28) == (long *)0x0) ||
       (puVar20 = (undefined8 *)**(long **)(lVar19 + 0x28), puVar20 == (undefined8 *)0x0)) {
      uVar13 = 1;
    }
    else {
      uVar13 = (**(code **)*puVar20)();
      uVar13 = uVar13 ^ 1;
    }
    uVar14 = FUN_020fd7d8(*(long *)(lVar19 + 0x10) + *(long *)(lVar19 + 8));
    if ((((uVar13 & 1) == 0) && (*(long *)(lVar19 + 0x28) != 0)) &&
       (puVar20 = *(undefined8 **)(*(long *)(lVar19 + 0x28) + 8), puVar20 != (undefined8 *)0x0)) {
      (**(code **)*puVar20)();
    }
  }
  local_78 = (undefined *)(CONCAT44(local_78._4_4_,uVar14) & 0xffffffff000000ff);
  FUN_0214c868(&local_64,&local_68,&local_78,1,1);
  if ((9 < *param_1) ||
     (lVar19 = (ulong)*param_1 * 0xba0, puVar22 = &DAT_053fe348 + lVar19,
     (&DAT_053fee41)[lVar19] == '\0')) {
    puVar22 = (undefined *)0x0;
  }
  bVar24 = (byte)local_64;
  bVar10 = local_64._1_1_;
  bVar9 = local_68._1_1_;
  uVar21 = (uint)(byte)local_64;
  uVar13 = (byte)local_64 + 0x18;
  if (4 < (byte)local_64) {
    uVar13 = uVar21;
  }
  uVar26 = (uint)(byte)local_68;
  local_8c = (byte)local_68 + 0x18;
  if (4 < (byte)local_68) {
    local_8c = uVar26;
  }
  if (puVar22 == (undefined *)0x0) {
    bVar25 = local_64._1_1_;
    bVar8 = local_68._1_1_;
  }
  else {
    if (*(int *)(puVar22 + 0x8c0) == 0) {
      lVar19 = 0;
      uVar13 = (uint)bRam0000000000000002;
      bVar25 = bRam0000000000000003;
    }
    else {
      lVar23 = *(long *)(puVar22 + 0x8b8);
      lVar19 = 0;
      if (lVar23 != 0) {
        lVar19 = lVar23 + -0x10;
      }
      uVar13 = (uint)*(byte *)(lVar19 + 2);
      bVar25 = *(byte *)(lVar19 + 3);
      if (*(int *)(puVar22 + 0x8c0) == 1) {
        lVar19 = 0;
      }
      else {
        lVar19 = *(long *)(lVar23 + 8);
      }
    }
    pbVar2 = (byte *)0x0;
    if (lVar19 != 0) {
      pbVar2 = (byte *)(lVar19 + -0x10);
    }
    local_8c = (uint)*pbVar2;
    bVar8 = pbVar2[1];
  }
  cVar5 = *(char *)(*(long *)PTR_DAT_04bb32e8 + 0x4064);
  bVar4 = *(byte *)(*(long *)PTR_DAT_04bb32e8 + 0x4065);
  uVar1 = (int)cVar5 + 0x18;
  if (4 < cVar5) {
    uVar1 = (int)cVar5;
  }
  uVar15 = nn::os::GetSystemTick();
  uVar15 = (uVar15 ^ uVar15 >> 0x1e) * 0x6c078965 + 1;
  uVar7 = (uVar15 ^ uVar15 >> 0x1e) * 0x6c078965 + 2;
  uVar7 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 3;
  lVar19 = FUN_0265c2a0(*param_1);
  uVar27 = (uint)bVar24;
  if (lVar19 == 0) {
    bVar11 = false;
    iVar16 = 0;
    bVar12 = uVar21 == (uVar13 & 0xff);
    iVar17 = 0;
    if ((uVar13 & 0xff) < uVar21) goto LAB_00ed0e90;
LAB_00ed0e80:
    iVar16 = iVar17;
    if ((bVar12) && (bVar25 < bVar10)) goto LAB_00ed0e90;
    bVar24 = 0;
    bVar25 = bVar24;
    if (!bVar11) goto LAB_00ed0e9c;
LAB_00ed0ec4:
    bVar12 = true;
  }
  else {
    if ((*(long **)(lVar19 + 0x28) == (long *)0x0) ||
       (puVar20 = (undefined8 *)**(long **)(lVar19 + 0x28), puVar20 == (undefined8 *)0x0)) {
      uVar18 = 0;
    }
    else {
      uVar18 = (**(code **)*puVar20)();
      uVar18 = uVar18 & 0xffffffff;
    }
    local_78 = PTR_DAT_04bb2020 + 0x10;
    pcStack_70 = "EarlyOrLate";
    iVar16 = FUN_02749340(*(long *)(lVar19 + 0x10) + *(long *)(lVar19 + 8) + 0x1267c,&local_78);
    if ((((uVar18 & 1) != 0) && (*(long *)(lVar19 + 0x28) != 0)) &&
       (puVar20 = *(undefined8 **)(*(long *)(lVar19 + 0x28) + 8), puVar20 != (undefined8 *)0x0)) {
      (**(code **)*puVar20)();
    }
    bVar11 = iVar16 == 2;
    if (iVar16 != 1) {
      bVar12 = uVar27 == (uVar13 & 0xff);
      iVar17 = iVar16;
      if (!((uVar13 & 0xff) <= uVar21 && !bVar12)) goto LAB_00ed0e80;
    }
LAB_00ed0e90:
    bVar24 = 1;
    bVar12 = true;
    bVar25 = 1;
    if (!bVar11) {
LAB_00ed0e9c:
      bVar24 = bVar25;
      if (uVar26 < (local_8c & 0xff)) goto LAB_00ed0ec4;
      bVar12 = uVar26 == (local_8c & 0xff) && bVar9 < bVar8;
    }
  }
  uVar13 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 4;
  if ((((uVar1 & 0xff) <= uVar27) && ((uVar27 != (uVar1 & 0xff) || (bVar4 <= bVar10)))) ||
     ((uVar26 <= (uVar1 & 0xff) && ((uVar26 != (uVar1 & 0xff) || (bVar9 <= bVar4)))))) {
    sVar6 = *(short *)PTR_DAT_04bb6298;
    if (sVar6 != -1) {
      puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar6 * 8);
      if (0xff < (uint)(int)sVar6) {
        puVar3 = (uint *)PTR_DAT_04bc39f8;
      }
      if (((*puVar3 >> 3 & 1) != 0) &&
         ((uVar27 < (uVar1 & 0xff) || ((uVar27 == (uVar1 & 0xff) && (bVar10 < bVar4)))))) {
        local_78 = PTR_DAT_04bb2020 + 0x10;
        pcStack_70 = "OutdoorCatnap";
        iVar17 = FUN_027490f0(*param_1,&local_78);
        if ((iVar17 == 0) && (iVar16 == 2)) {
          uVar15 = uVar15 ^ uVar15 * 0x800;
          if ((uint)((ulong)(uVar15 >> 8 ^ uVar13 >> 0x13 ^ uVar15 ^ uVar13) * 100 >> 0x20) < 10) {
            local_78 = PTR_DAT_04bb2020 + 0x10;
            pcStack_70 = "OutdoorCatnap";
            FUN_027494ac(*param_1,&local_78,2);
            return true;
          }
          local_78 = PTR_DAT_04bb2020 + 0x10;
          pcStack_70 = "OutdoorCatnap";
          FUN_027494ac(*param_1,&local_78,1);
        }
      }
    }
    goto LAB_00ed108c;
  }
  uVar18 = FUN_02917058(*param_1);
  if (((uVar18 & 1) == 0) || (uVar18 = FUN_0219dee4(&DAT_053fe348,*param_1), (uVar18 & 1) != 0))
  goto LAB_00ed108c;
  uVar21 = uVar27 + 1 & 0xff;
  if (((uVar1 & 0xff) < uVar21) || (((uVar1 & 0xff) == uVar21 && (bVar4 < bVar10)))) {
    if (bVar24 != 0) {
      return false;
    }
    bVar24 = iVar16 == 3 & param_2;
LAB_00ed104c:
    uVar21 = 0x28;
    if (bVar24 == 0) {
      uVar21 = 0x14;
    }
  }
  else {
    uVar21 = uVar26 - 1 & 0xff;
    if ((uVar21 < (uVar1 & 0xff)) || (((uVar1 & 0xff) == uVar21 && (bVar9 < bVar4)))) {
      if (bVar12) {
        return false;
      }
      goto LAB_00ed104c;
    }
    uVar21 = 5;
    if ((param_2 & 1) == 0) {
      uVar21 = 0;
    }
  }
  uVar15 = uVar15 ^ uVar15 * 0x800;
  if ((uint)((ulong)(uVar15 >> 8 ^ uVar13 >> 0x13 ^ uVar15 ^ uVar13) * 100 >> 0x20) < uVar21) {
    return true;
  }
LAB_00ed108c:
  local_78 = PTR_DAT_04bb2020 + 0x10;
  pcStack_70 = "OutdoorCatnap";
  iVar17 = FUN_027490f0(*param_1,&local_78);
  return iVar17 == 2;
}

