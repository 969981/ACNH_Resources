
void FUN_01ea2da0(long param_1,undefined4 *param_2)

{
  uint *puVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  ushort uVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  undefined8 *puVar11;
  char *pcVar12;
  ulong uVar13;
  undefined4 uVar14;
  ulong *puVar15;
  ulong uVar16;
  long lVar17;
  byte *pbVar18;
  undefined8 uVar19;
  long lVar20;
  char cVar21;
  uint local_94;
  undefined8 local_90;
  undefined8 local_88;
  char *local_80;
  undefined8 local_78;
  char *local_70;
  undefined1 local_68;
  byte local_67;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_38;
  
  puVar7 = PTR_DAT_04bc3a80;
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == 0x2a789248) {
    lVar20 = *(long *)(param_1 + 8);
    (**(code **)(*(long *)(lVar20 + 0x3e0) + 0x18))(lVar20 + 0x3e0);
    (**(code **)(*(long *)(lVar20 + 0x3e0) + 0x18))(lVar20 + 0x3e0);
    if (*(undefined1 **)(lVar20 + 1000) != &DAT_04066e58) {
      uVar16 = 0;
      bVar8 = true;
      do {
        cVar21 = (*(undefined1 **)(lVar20 + 1000))[uVar16];
        if (cVar21 != (&DAT_04066e58)[uVar16]) break;
        if (cVar21 == '\0') {
          if (bVar8) goto LAB_01ea2e60;
          break;
        }
        bVar8 = uVar16 < 0x80000;
        uVar16 = uVar16 + 1;
      } while (uVar16 != 0x80001);
      uVar14 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
      param_2[10] = *(undefined4 *)PTR_DAT_04bb37e0;
      param_2[0xb] = uVar14;
      if (*(int *)(*(long *)(param_1 + 8) + 0x500) != 0) {
        return;
      }
      local_78 = (undefined *)0xfffe;
      FUN_0277d4ac(&local_78);
      local_88 = (undefined *)0xfffe;
      FUN_0277d4ac(&local_88);
      local_38 = 0xfffe;
      FUN_0277d4ac(&local_38);
      lVar20 = FUN_0265c3e0(*(undefined4 *)(*(long *)(param_1 + 8) + 0x508));
      if (lVar20 == 0) {
        return;
      }
      if ((*(long **)(lVar20 + 0x28) == (long *)0x0) ||
         (puVar11 = (undefined8 *)**(long **)(lVar20 + 0x28), puVar11 == (undefined8 *)0x0)) {
        uVar9 = 1;
      }
      else {
        uVar9 = (**(code **)*puVar11)();
        uVar9 = uVar9 ^ 1;
      }
      local_58 = (ulong)local_58._4_4_ << 0x20;
      uVar16 = FUN_0269b5c0(*(long *)(lVar20 + 0x10) + *(long *)(lVar20 + 8),&local_78,&local_88,
                            &local_38,&local_58,0);
      if ((((uVar9 & 1) == 0) && (*(long *)(lVar20 + 0x28) != 0)) &&
         (puVar11 = *(undefined8 **)(*(long *)(lVar20 + 0x28) + 8), puVar11 != (undefined8 *)0x0)) {
        (**(code **)*puVar11)();
      }
      if ((uVar16 & 1) == 0) {
        return;
      }
      *param_2 = (undefined4)local_78;
      param_2[1] = local_78._4_4_;
      param_2[4] = (undefined4)local_88;
      param_2[5] = local_88._4_4_;
      param_2[6] = (undefined4)local_38;
      param_2[7] = local_38._4_4_;
      return;
    }
  }
LAB_01ea2e60:
  if (*(short *)(param_1 + 0xae84) != -2) {
    uVar16 = FUN_0220f914(0);
    if ((uVar16 & 1) == 0) {
LAB_01ea2ea8:
      local_78 = (undefined *)((ulong)local_78._4_4_ << 0x20);
    }
    else {
      FUN_0220fad4(param_1 + 0xad30);
      uVar9 = FUN_00a86724(*(undefined8 *)PTR_DAT_04bb30a0);
      if ((uVar9 & 0xfffffffe) == 6) goto LAB_01ea2ea8;
      *(short *)(param_2 + 10) = *(short *)(param_1 + 0xae84);
      *(undefined1 *)((long)param_2 + 0x2a) = *(undefined1 *)(param_1 + 0xae86);
      *(undefined1 *)((long)param_2 + 0x2b) = *(undefined1 *)(param_1 + 0xae87);
      param_2[0xb] = *(undefined4 *)(param_1 + 0xae88);
      local_78 = (undefined *)CONCAT44(local_78._4_4_,1);
    }
    *(undefined4 *)(param_1 + 0xae8c) = (undefined4)local_78;
    lVar20 = *(long *)(*(long *)(param_1 + 8) + 0x690);
    if (lVar20 != 0) {
      lVar17 = **(long **)PTR_DAT_04bb27d0;
      bVar3 = *(byte *)(lVar17 + 0x473);
      uVar16 = (ulong)(char)bVar3;
      pbVar18 = PTR_DAT_04bc1220;
      if (uVar16 != 0xffffffffffffffff) {
        puVar1 = (uint *)(lVar17 + 0x48) + (uVar16 & 0xffffffff) * 0x20;
        if (7 < bVar3) {
          puVar1 = (uint *)(lVar17 + 0x48);
        }
        if ((*puVar1 & 8) != 0) {
          pbVar18 = (byte *)(lVar17 + 0x473);
        }
      }
      bVar4 = *(byte *)(lVar20 + 7) >> 4 & 3;
      if (bVar4 != 1) {
        if (bVar4 != 2) {
          if (bVar4 == 3) goto LAB_01ea2ffc;
          uVar5 = *(ushort *)(lVar20 + 5) >> 2;
          if ((ushort)*pbVar18 != (uVar5 & 0xff)) {
            if ((bVar3 == 0xff) || ((ushort)(byte)*PTR_DAT_04bb5018 != (uVar5 & 0xff))) {
              if ((ushort)(byte)*PTR_DAT_04bb5018 != (uVar5 & 0xff)) goto LAB_01ea2ffc;
            }
            else {
              pbVar18 = (byte *)(lVar17 + 0x48) + (uVar16 & 0xffffffff) * 0x80;
              if (7 < bVar3) {
                pbVar18 = (byte *)(lVar17 + 0x48);
              }
              if ((*pbVar18 >> 3 & 1) != 0) {
                lVar17 = (*(long **)PTR_DAT_04bb27d0)[2] + 0x108;
                lVar2 = lVar17 + (uVar16 & 0xffffffff) * 0xc;
                if (0xb < bVar3) {
                  lVar2 = lVar17;
                }
                if (*(char *)(lVar2 + 10) == '\0') goto LAB_01ea2ffc;
              }
            }
          }
        }
        *(byte *)(lVar20 + 0xc) = *(byte *)(lVar20 + 0xc) & 0xfc | (byte)local_78;
      }
    }
  }
LAB_01ea2ffc:
  if (*(int *)(*(long *)(param_1 + 8) + 0x500) == 0) {
    iVar10 = *(int *)(puVar7 + 0x38);
    if (iVar10 != 0x77130016) goto LAB_01ea300c;
    uVar16 = FUN_021ded20();
    if (((uVar16 & 1) != 0) && (uVar16 = FUN_0220f914(0), (uVar16 & 1) != 0)) {
      uVar19 = *(undefined8 *)PTR_DAT_04bb30a0;
      uVar9 = FUN_00a86724(uVar19);
      if (((uVar9 & 0xfffffffe) == 4) && (*(int *)(param_1 + 0xad38) != 3)) {
        FUN_0220fad4(param_1 + 0xad30);
        FUN_021df2d0(&local_78,*(long *)(param_1 + 8) + 0x3e0);
        *param_2 = (undefined4)local_78;
        param_2[1] = local_78._4_4_;
        FUN_021df470(&local_78,*(long *)(param_1 + 8) + 0x3e0);
        param_2[4] = (undefined4)local_78;
        param_2[5] = local_78._4_4_;
        goto LAB_01ea3008;
      }
      uVar9 = FUN_00a86724(uVar19);
      if ((uVar9 & 0xfffffffe) == 6) {
        FUN_0220fad4(param_1 + 0xad30);
        local_38 = 0xfffe;
        FUN_0277d4ac(&local_38);
        local_58 = 0xfffe;
        FUN_0277d4ac(&local_58);
        local_60 = 0xfffe;
        FUN_0277d4ac(&local_60);
        pcVar12 = (char *)FUN_0265c2a0(*(undefined4 *)(*(long *)(param_1 + 8) + 0x508));
        if (pcVar12 != (char *)0x0) {
          local_68 = 1;
          local_70 = pcVar12;
          if (*(long **)(pcVar12 + 0x28) == (long *)0x0) {
            local_67 = 0;
          }
          else {
            puVar11 = (undefined8 *)**(long **)(pcVar12 + 0x28);
            local_67 = 0;
            if (puVar11 != (undefined8 *)0x0) {
              local_67 = (**(code **)*puVar11)();
            }
          }
          local_67 = local_67 & 1;
          local_78 = PTR_DAT_04bb67a0 + 0x10;
          local_80 = "EquipChristmasWear";
          local_88 = PTR_DAT_04bb2020 + 0x10;
          iVar10 = FUN_02749340(*(long *)(pcVar12 + 0x10) + *(long *)(pcVar12 + 8) + 0x1267c,
                                &local_88);
          if (iVar10 == 0) {
            local_88 = (undefined *)CONCAT44(local_88._4_4_,1);
            uVar16 = FUN_0269b5c0(*(long *)(pcVar12 + 0x10) + *(long *)(pcVar12 + 8),&local_38,
                                  &local_58,&local_60,&local_88,0);
            if ((uVar16 & 1) != 0) {
              *param_2 = (undefined4)local_38;
              param_2[1] = local_38._4_4_;
              param_2[4] = (undefined4)local_58;
              param_2[5] = local_58._4_4_;
              param_2[6] = (undefined4)local_60;
              param_2[7] = local_60._4_4_;
            }
            FUN_02640184(&local_78);
            goto LAB_01ea3008;
          }
          FUN_02640184(&local_78);
        }
      }
    }
    local_58 = 0xfffe;
    FUN_0277d4ac(&local_58);
    local_60 = 0xfffe;
    FUN_0277d4ac(&local_60);
    local_90 = 0xfffe;
    FUN_0277d4ac(&local_90);
    lVar20 = FUN_0265c3e0(*(undefined4 *)(*(long *)(param_1 + 8) + 0x508));
    if (lVar20 != 0) {
      if ((*(long **)(lVar20 + 0x28) == (long *)0x0) ||
         (puVar11 = (undefined8 *)**(long **)(lVar20 + 0x28), puVar11 == (undefined8 *)0x0)) {
        uVar16 = 0;
      }
      else {
        uVar16 = (**(code **)*puVar11)();
        uVar16 = uVar16 & 0xffffffff;
      }
      local_94 = (uint)*(byte *)(*(long *)(lVar20 + 0x10) + *(long *)(lVar20 + 8) + 0x1315b);
      uVar13 = FUN_021e2dd0(&local_94);
      puVar6 = PTR_DAT_04bb32e8;
      if ((uVar13 & 1) == 0) {
        local_78 = (undefined *)((ulong)local_78 & 0xffffffff00000000);
        lVar17 = *(long *)(lVar20 + 0x10) + *(long *)(lVar20 + 8);
LAB_01ea3560:
        uVar13 = FUN_0269b5c0(lVar17,&local_58,&local_60,&local_90,&local_78,0);
        if ((uVar13 & 1) != 0) {
          *param_2 = (undefined4)local_58;
          param_2[1] = local_58._4_4_;
          param_2[4] = (undefined4)local_60;
          param_2[5] = local_60._4_4_;
          param_2[6] = (undefined4)local_90;
          param_2[7] = local_90._4_4_;
        }
      }
      else {
        local_78 = PTR_DAT_04bb2020 + 0x10;
        uVar19 = *(undefined8 *)PTR_DAT_04bb32f0;
        local_70 = "HarvestFestival";
        puVar15 = (ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
        if (*(short *)puVar15 == 0) {
          local_38 = *(ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
          if ((char)(local_38 >> 0x20) < '\x05') {
            lVar17 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_38);
            local_88 = (undefined *)(lVar17 + -0x15180);
            local_38 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_88);
          }
          puVar15 = &local_38;
          uVar13 = local_38 >> 0x30;
          local_38._0_6_ = CONCAT24(5,(undefined4)local_38);
          local_38 = CONCAT26((short)uVar13,(undefined6)local_38) & 0xff00ffffffffffff;
        }
        uVar13 = *puVar15;
        uVar13 = FUN_00879dd0(uVar19,&local_78,uVar13,uVar13 >> 0x10,uVar13 >> 0x18,0);
        if ((uVar13 & 1) != 0) {
          lVar17 = *(long *)(lVar20 + 0x10) + *(long *)(lVar20 + 8);
          uVar14 = 0x17;
          if (*(char *)(*(long *)puVar6 + 0x4064) < '\x05') {
            uVar14 = 0;
          }
          local_78 = (undefined *)CONCAT44(local_78._4_4_,uVar14);
          goto LAB_01ea3560;
        }
      }
      if ((((uVar16 & 1) != 0) && (*(long *)(lVar20 + 0x28) != 0)) &&
         (puVar11 = *(undefined8 **)(*(long *)(lVar20 + 0x28) + 8), puVar11 != (undefined8 *)0x0)) {
        (**(code **)*puVar11)();
      }
    }
  }
LAB_01ea3008:
  iVar10 = *(int *)(puVar7 + 0x38);
LAB_01ea300c:
  if (((iVar10 == 0x3411ee5c) && (*(int *)(*(long *)(param_1 + 8) + 0x500) == 0)) &&
     (lVar20 = FUN_0265c3e0(*(undefined4 *)(*(long *)(param_1 + 8) + 0x508)), lVar20 != 0)) {
    if ((*(long **)(lVar20 + 0x28) == (long *)0x0) ||
       (puVar11 = (undefined8 *)**(long **)(lVar20 + 0x28), puVar11 == (undefined8 *)0x0)) {
      cVar21 = *(char *)(*(long *)(lVar20 + 0x10) + *(long *)(lVar20 + 8) + 0x1315b);
    }
    else {
      uVar16 = (**(code **)*puVar11)();
      cVar21 = *(char *)(*(long *)(lVar20 + 0x10) + *(long *)(lVar20 + 8) + 0x1315b);
      if ((((uVar16 & 1) != 0) && (*(long *)(lVar20 + 0x28) != 0)) &&
         (puVar11 = *(undefined8 **)(*(long *)(lVar20 + 0x28) + 8), puVar11 != (undefined8 *)0x0)) {
        (**(code **)*puVar11)();
      }
    }
    if ((cVar21 == '\x12') || (cVar21 == '\x01')) {
      local_78 = (undefined *)0xfffe;
      FUN_0277d4ac(&local_78);
      local_88 = (undefined *)0xfffe;
      FUN_0277d4ac(&local_88);
      local_38 = 0xfffe;
      FUN_0277d4ac(&local_38);
      if ((*(long **)(lVar20 + 0x28) == (long *)0x0) ||
         (puVar11 = (undefined8 *)**(long **)(lVar20 + 0x28), puVar11 == (undefined8 *)0x0)) {
        uVar9 = 1;
      }
      else {
        uVar9 = (**(code **)*puVar11)();
        uVar9 = uVar9 ^ 1;
      }
      local_58 = local_58 & 0xffffffff00000000;
      uVar16 = FUN_0269b5c0(*(long *)(lVar20 + 0x10) + *(long *)(lVar20 + 8),&local_78,&local_88,
                            &local_38,&local_58,1);
      if ((((uVar9 & 1) == 0) && (*(long *)(lVar20 + 0x28) != 0)) &&
         (puVar11 = *(undefined8 **)(*(long *)(lVar20 + 0x28) + 8), puVar11 != (undefined8 *)0x0)) {
        (**(code **)*puVar11)();
      }
      if ((uVar16 & 1) != 0) {
        *param_2 = (undefined4)local_78;
        param_2[1] = local_78._4_4_;
        param_2[4] = (undefined4)local_88;
        param_2[5] = local_88._4_4_;
        param_2[6] = (undefined4)local_38;
        param_2[7] = local_38._4_4_;
        uVar14 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
        param_2[10] = *(undefined4 *)PTR_DAT_04bb37e0;
        param_2[0xb] = uVar14;
      }
    }
  }
  return;
}

