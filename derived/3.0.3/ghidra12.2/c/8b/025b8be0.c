
void FUN_025b8be0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  char *pcVar3;
  ulong uVar4;
  short sVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long *plVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  short *psVar17;
  long lVar18;
  short *psVar19;
  long lVar20;
  uint uVar21;
  uint local_bc;
  undefined4 local_94;
  undefined4 uStack_90;
  int local_8c;
  undefined *local_88;
  undefined *local_80;
  undefined *local_78;
  undefined8 local_70;
  long local_68;
  
  if (*(long *)(param_1 + 0x30) == 0) {
    return;
  }
  if (*(byte *)(param_1 + 0x18) < 8) {
    local_78 = (undefined *)CONCAT71(local_78._1_7_,*(byte *)(param_1 + 0x18));
    lVar10 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,&local_78,1);
  }
  else {
    if (*(int *)(param_1 + 0x1c) == -1) {
      return;
    }
    if (*(long *)PTR_DAT_04bb46b0 == 0) {
      return;
    }
    lVar10 = FUN_026eec4c();
  }
  if (lVar10 == 0) {
    return;
  }
  lVar20 = lVar10 + 0x194b0;
  if (*(long *)(lVar10 + 0x194b8) == 0) {
    lVar20 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
    plVar13 = *(long **)(lVar20 + 0x98);
  }
  else {
    plVar13 = *(long **)(lVar10 + 0x19548);
  }
  if ((plVar13 == (long *)0x0) || ((undefined8 *)*plVar13 == (undefined8 *)0x0)) {
    local_bc = 0;
  }
  else {
    local_bc = (*(code *)**(undefined8 **)*plVar13)();
  }
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_70 = "UpgradePocket40";
  local_78 = puVar1;
  iVar7 = FUN_0274b8d0(lVar10,&local_78);
  if (iVar7 == 0) {
    local_70 = "UpgradePocket30";
    local_78 = puVar1;
    iVar7 = FUN_0274b8d0(lVar10,&local_78);
    uVar8 = (uint)(iVar7 != 0);
  }
  else {
    uVar8 = 2;
  }
  puVar6 = PTR_DAT_04bb43c0;
  local_78 = (undefined *)CONCAT44(local_78._4_4_,uVar8);
  uVar16 = 0;
  uVar21 = 0;
  uVar11 = 0x1e;
  if (uVar8 != 1) {
    uVar11 = 0x14;
  }
  uVar4 = 0x28;
  if (uVar8 != 2) {
    uVar4 = uVar11;
  }
  puVar2 = PTR_DAT_04bc0510 + 0x10;
  do {
    lVar18 = *(long *)(lVar20 + 0x80) + *(long *)(lVar20 + 0x78);
    uVar8 = *(uint *)(lVar18 + 0x158);
    if (0x13 < uVar8) {
      uVar8 = 0x14;
    }
    if ((uint)uVar16 < uVar8) {
      psVar17 = (short *)(lVar18 + (uVar16 & 0xffffffff) * 8 + 0xb8);
      sVar5 = *psVar17;
LAB_025b8dd4:
      psVar19 = psVar17;
      if (sVar5 != -2) {
        lVar18 = *(long *)puVar6;
        uVar8 = FUN_0277d6c4(psVar17);
        if (*(long *)puVar6 == 0) goto LAB_025b8e40;
        lVar18 = *(long *)(lVar18 + 0x57e58);
        uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
        psVar19 = (short *)PTR_DAT_04bb37e0;
        if (uVar8 < *(uint *)(lVar18 + 0x1d8)) {
          if (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar8 * 8) != 0) {
            psVar19 = psVar17;
          }
        }
      }
    }
    else {
      uVar9 = (uint)(uVar16 + -uVar8);
      if ((int)uVar9 < 0) {
LAB_025b8e40:
        psVar19 = (short *)PTR_DAT_04bb37e0;
      }
      else {
        uVar15 = *(uint *)(lVar18 + 0xa0);
        if (0x13 < uVar15) {
          uVar15 = 0x14;
        }
        psVar19 = (short *)PTR_DAT_04bb37e0;
        if (uVar9 < uVar15) {
          psVar17 = (short *)(lVar18 + (uVar16 + -uVar8 & 0xffffffff) * 8);
          sVar5 = *psVar17;
          goto LAB_025b8dd4;
        }
      }
    }
    lVar18 = *(long *)puVar6;
    uVar8 = FUN_0277d6c4(psVar19);
    if (*(long *)puVar6 != 0) {
      lVar18 = *(long *)(lVar18 + 0x57e58);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
      if (((uVar8 < *(uint *)(lVar18 + 0x1d8)) &&
          (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar8 * 8) != 0 &&
           uVar21 < *(uint *)(param_1 + 0x38))) &&
         (lVar18 = *(long *)(*(long *)(param_1 + 0x40) + (long)(int)uVar21 * 8), lVar18 != 0)) {
        local_70 = &DAT_040d4887;
        local_78 = puVar1;
        FUN_0277d6c4(psVar19);
        pcVar3 = (char *)(lVar18 + 8);
        lVar18 = nn::prepo::Struct::GetBuffer();
        if (lVar18 != 0) {
          (**(code **)(local_78 + 0x18))(&local_78);
          nn::prepo::Struct::Add(pcVar3,(long)local_70);
        }
        lVar18 = *(long *)puVar6;
        local_70 = *(char **)psVar19;
        local_68 = 0;
        local_78 = puVar2;
        uVar8 = FUN_0277d6c4(&local_70);
        if (*(long *)puVar6 != 0) {
          lVar18 = *(long *)(lVar18 + 0x57e58);
          uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
          if ((uVar8 < *(uint *)(lVar18 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
            lVar18 = *(long *)PTR_DAT_04bc0428;
            uVar8 = FUN_0277d6c4(psVar19);
            uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
            if ((uVar8 < *(uint *)(lVar18 + 0x1d8)) &&
               (lVar18 = *(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar8 * 8), lVar18 != 0))
            {
              local_68 = lVar18;
            }
          }
        }
        uVar11 = FUN_01af0020(&local_78);
        if ((uVar11 & 1) != 0) {
          FUN_01af02d0(&local_78);
        }
        local_88 = PTR_DAT_04bb2020 + 0x10;
        local_80 = &DAT_040a0741;
        lVar18 = nn::prepo::Struct::GetBuffer();
        if (lVar18 != 0) {
          (**(code **)(local_88 + 0x18))(&local_88);
          nn::prepo::Struct::Add(pcVar3,(long)local_80);
        }
        lVar14 = *(long *)(param_1 + 0x30);
        lVar18 = nn::prepo::Array::GetBuffer();
        if (lVar18 != 0) {
          nn::prepo::Array::Add((Struct *)(lVar14 + 8));
        }
        uVar21 = uVar21 + 1;
      }
    }
    uVar16 = uVar16 + 1;
    if (uVar4 == uVar16) {
      if ((*(long **)(lVar10 + 0xd0) == (long *)0x0) ||
         (puVar12 = (undefined8 *)**(long **)(lVar10 + 0xd0), puVar12 == (undefined8 *)0x0)) {
        uVar8 = 0;
      }
      else {
        uVar8 = (**(code **)*puVar12)();
      }
      iVar7 = 0;
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      puVar2 = PTR_DAT_04bc0510 + 0x10;
      do {
        local_8c = iVar7;
        FUN_02807328(&local_94,*(long *)(lVar10 + 0xb8) + *(long *)(lVar10 + 0xb0),&local_8c);
        lVar18 = *(long *)puVar6;
        uVar9 = FUN_0277d6c4(&local_94);
        if (*(long *)puVar6 != 0) {
          lVar18 = *(long *)(lVar18 + 0x57e58);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
          if (((uVar9 < *(uint *)(lVar18 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar9 * 8) != 0 &&
               uVar21 < *(uint *)(param_1 + 0x38))) &&
             (lVar18 = *(long *)(*(long *)(param_1 + 0x40) + (long)(int)uVar21 * 8), lVar18 != 0)) {
            local_70 = &DAT_040d4887;
            local_78 = puVar1;
            FUN_0277d6c4(&local_94);
            pcVar3 = (char *)(lVar18 + 8);
            lVar18 = nn::prepo::Struct::GetBuffer();
            if (lVar18 != 0) {
              (**(code **)(local_78 + 0x18))(&local_78);
              nn::prepo::Struct::Add(pcVar3,(long)local_70);
            }
            local_68 = 0;
            local_70 = (char *)CONCAT44(uStack_90,local_94);
            lVar18 = *(long *)puVar6;
            local_78 = puVar2;
            uVar9 = FUN_0277d6c4(&local_70);
            if (*(long *)puVar6 != 0) {
              lVar18 = *(long *)(lVar18 + 0x57e58);
              uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
              if ((uVar9 < *(uint *)(lVar18 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
                lVar18 = *(long *)PTR_DAT_04bc0428;
                uVar9 = FUN_0277d6c4(&local_94);
                uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
                if ((uVar9 < *(uint *)(lVar18 + 0x1d8)) &&
                   (lVar18 = *(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar9 * 8),
                   lVar18 != 0)) {
                  local_68 = lVar18;
                }
              }
            }
            uVar16 = FUN_01af0020(&local_78);
            if ((uVar16 & 1) != 0) {
              FUN_01af02d0(&local_78);
            }
            local_88 = PTR_DAT_04bb2020 + 0x10;
            local_80 = &DAT_040a0741;
            lVar18 = nn::prepo::Struct::GetBuffer();
            if (lVar18 != 0) {
              (**(code **)(local_88 + 0x18))(&local_88);
              nn::prepo::Struct::Add(pcVar3,(long)local_80);
            }
            lVar14 = *(long *)(param_1 + 0x30);
            lVar18 = nn::prepo::Array::GetBuffer();
            if (lVar18 != 0) {
              nn::prepo::Array::Add((Struct *)(lVar14 + 8));
            }
            uVar21 = uVar21 + 1;
          }
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 != 8);
      if ((((uVar8 & 1) != 0) && (*(long *)(lVar10 + 0xd0) != 0)) &&
         (puVar12 = *(undefined8 **)(*(long *)(lVar10 + 0xd0) + 8), puVar12 != (undefined8 *)0x0)) {
        (**(code **)*puVar12)();
      }
      local_78 = PTR_DAT_04bb2020 + 0x10;
      local_70 = "HasItem";
      if (*(long *)(param_1 + 8) != 0) {
        FUN_02605b30(*(long *)(param_1 + 8),&local_78,*(undefined8 *)(param_1 + 0x30));
      }
      if ((((local_bc & 1) != 0) && (*(long *)(lVar20 + 0x98) != 0)) &&
         (puVar12 = *(undefined8 **)(*(long *)(lVar20 + 0x98) + 8), puVar12 != (undefined8 *)0x0)) {
        (**(code **)*puVar12)();
      }
      return;
    }
  } while( true );
}

