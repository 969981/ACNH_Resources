
void FUN_021c69dc(long param_1)

{
  ushort *puVar1;
  uint uVar2;
  ushort uVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ushort *puVar11;
  ulong *puVar12;
  long lVar13;
  undefined *local_88;
  char *pcStack_80;
  undefined4 local_78;
  char local_74 [7];
  undefined1 local_6d;
  undefined2 local_64;
  undefined1 local_62;
  undefined8 local_60;
  ulong local_58;
  
  lVar13 = *(long *)PTR_DAT_04bb32f0;
  if (lVar13 != 0) {
    local_88 = PTR_DAT_04bb2020 + 0x10;
    pcStack_80 = "XmasEve";
    puVar12 = (ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
    if (*(short *)puVar12 == 0) {
      local_60 = *(ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
      if ((char)(local_60 >> 0x20) < '\x05') {
        lVar7 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_60);
        local_58 = lVar7 - 0x15180;
        local_60 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_58);
      }
      puVar12 = &local_60;
      uVar8 = local_60 >> 0x30;
      local_60._0_6_ = CONCAT24(5,(uint)local_60);
      local_60 = CONCAT26((short)uVar8,(undefined6)local_60) & 0xff00ffffffffffff;
    }
    uVar8 = *puVar12;
    uVar8 = FUN_00879dd0(lVar13,&local_88,uVar8,uVar8 >> 0x10,uVar8 >> 0x18,0);
    if ((uVar8 & 1) != 0) {
      local_58 = local_58 & 0xffffffff00000000;
      *(undefined8 *)(param_1 + 0x55e4d) = 0x2308002308002300;
      local_60 = local_60 & 0xffffffff00000000;
      *(undefined2 *)(param_1 + 0x55e55) = 0x800;
      FUN_02209030(&local_58,&local_60);
      uVar6 = (uint)local_60;
      local_60 = CONCAT44(local_60._4_4_,~(uint)local_60);
      uVar2 = (uint)local_58 & (uVar6 ^ 0xffffffff);
      local_58 = CONCAT44(local_58._4_4_,uVar2);
      uVar6 = uVar2 - (uVar2 >> 1 & 0x55555555);
      uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
      uVar6 = uVar6 + (uVar6 >> 4) & 0xf0f0f0f;
      uVar6 = uVar6 + (uVar6 >> 8);
      uVar6 = uVar6 + (uVar6 >> 0x10) & 0x3f;
      if (((0xfffffff5 < uVar6 - 0xb) && (*(char *)(param_1 + 0x55e4d) = (char)uVar6, uVar6 < 4)) &&
         (lVar13 = *(long *)PTR_DAT_04bb46b0, lVar13 != 0)) {
        puVar9 = *(undefined8 **)(lVar13 + 0x10);
        if ((*(byte *)(lVar13 + 0x453) & 1) == 0) {
          lVar13 = (**(code **)(*(long *)*puVar9 + 0x38))();
          if (lVar13 == 0) {
            return;
          }
          lVar13 = lVar13 + 0x70;
        }
        else {
          if (puVar9 == (undefined8 *)0x0) {
            return;
          }
          if ((long *)puVar9[0x26] == (long *)0x0) {
            return;
          }
          lVar13 = (**(code **)(*(long *)puVar9[0x26] + 0x38))();
          if (lVar13 == 0) {
            return;
          }
        }
        if ((*(long **)(lVar13 + 0xd0) == (long *)0x0) ||
           (puVar9 = (undefined8 *)**(long **)(lVar13 + 0xd0), puVar9 == (undefined8 *)0x0)) {
          uVar8 = 0;
        }
        else {
          uVar8 = (**(code **)*puVar9)();
          uVar8 = uVar8 & 0xffffffff;
        }
        if (uVar2 == 0) {
          puVar11 = (ushort *)(*(long *)(lVar13 + 0xb8) + *(long *)(lVar13 + 0xb0));
        }
        else {
          uVar5 = uVar2 - 1 & (uVar2 ^ 0xffffffff);
          uVar5 = uVar5 - (uVar5 >> 1 & 0x55555555);
          uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333);
          uVar5 = uVar5 + (uVar5 >> 4) & 0xf0f0f0f;
          uVar5 = uVar5 + (uVar5 >> 8);
          puVar1 = (ushort *)(*(long *)(lVar13 + 0xb8) + *(long *)(lVar13 + 0xb0));
          uVar5 = uVar5 + (uVar5 >> 0x10) & 0x3f;
          puVar11 = puVar1 + (ulong)uVar5 * 0x9918;
          if (9 < uVar5) {
            puVar11 = puVar1;
          }
        }
        uVar3 = *puVar11;
        local_62 = (undefined1)puVar11[1];
        uVar10 = (ulong)(uVar3 & 0xff);
        if (uVar10 < 0x23) {
          local_64._1_1_ = (byte)(uVar3 >> 8);
          if ((local_64._1_1_ <= (byte)PTR_DAT_04bc27f0[uVar10]) &&
             ((*(uint *)(PTR_DAT_04bc2a20 + uVar10 * 4) >> (ulong)(local_64._1_1_ & 0x1f) & 1) != 0)
             ) {
            *(char *)(param_1 + 0x55e4e) = (char)uVar3;
            *(byte *)(param_1 + 0x55e4f) = local_64._1_1_;
            local_64 = uVar3;
            uVar4 = FUN_020fd7d8(&local_64);
            *(undefined1 *)(param_1 + 0x55e50) = uVar4;
            local_78 = 8;
            local_6d = 0;
            local_74[0] = '\0';
            local_88 = PTR_DAT_04bb3768 + 0x10;
            pcStack_80 = local_74;
            FUN_038d1270(&local_88,"-----");
            uVar3 = local_64;
            if ((ulong)*(byte *)(param_1 + 0x55e4e) < 0x23) {
              FUN_038d1270(&local_88,"%s%02d",
                           *(undefined8 *)
                            (PTR_DAT_04bb9e38 + (ulong)*(byte *)(param_1 + 0x55e4e) * 8 + 0xb0),
                           *(undefined1 *)(param_1 + 0x55e4f));
              uVar3 = local_64;
            }
          }
        }
        local_64 = uVar3;
        uVar3 = local_64;
        if (uVar6 != 1) {
          uVar5 = FUN_038cd8b0(uVar2,2);
          puVar11 = (ushort *)(*(long *)(lVar13 + 0xb8) + *(long *)(lVar13 + 0xb0));
          puVar1 = puVar11 + (ulong)uVar5 * 0x9918;
          if (9 < uVar5) {
            puVar1 = puVar11;
          }
          uVar3 = *puVar1;
          local_62 = (undefined1)puVar1[1];
          uVar10 = (ulong)(uVar3 & 0xff);
          if (uVar10 < 0x23) {
            local_64._1_1_ = (byte)(uVar3 >> 8);
            if ((local_64._1_1_ <= (byte)PTR_DAT_04bc27f0[uVar10]) &&
               ((*(uint *)(PTR_DAT_04bc2a20 + uVar10 * 4) >> (ulong)(local_64._1_1_ & 0x1f) & 1) !=
                0)) {
              *(char *)(param_1 + 0x55e51) = (char)uVar3;
              *(byte *)(param_1 + 0x55e52) = local_64._1_1_;
              local_64 = uVar3;
              uVar4 = FUN_020fd7d8(&local_64);
              *(undefined1 *)(param_1 + 0x55e53) = uVar4;
              local_78 = 8;
              local_6d = 0;
              local_74[0] = '\0';
              local_88 = PTR_DAT_04bb3768 + 0x10;
              pcStack_80 = local_74;
              FUN_020fcc2c(param_1 + 0x55e51,&local_88);
              uVar3 = local_64;
            }
          }
          local_64 = uVar3;
          uVar3 = local_64;
          if (uVar6 != 2) {
            if (uVar6 < 3) {
              puVar11 = (ushort *)(*(long *)(lVar13 + 0xb8) + *(long *)(lVar13 + 0xb0));
            }
            else {
              uVar6 = FUN_038cd8b0(uVar2,3);
              puVar1 = (ushort *)(*(long *)(lVar13 + 0xb8) + *(long *)(lVar13 + 0xb0));
              puVar11 = puVar1 + (ulong)uVar6 * 0x9918;
              if (9 < uVar6) {
                puVar11 = puVar1;
              }
            }
            uVar3 = *puVar11;
            local_62 = (undefined1)puVar11[1];
            uVar10 = (ulong)(uVar3 & 0xff);
            if (uVar10 < 0x23) {
              local_64._1_1_ = (byte)(uVar3 >> 8);
              if ((local_64._1_1_ <= (byte)PTR_DAT_04bc27f0[uVar10]) &&
                 ((*(uint *)(PTR_DAT_04bc2a20 + uVar10 * 4) >> (ulong)(local_64._1_1_ & 0x1f) & 1)
                  != 0)) {
                *(char *)(param_1 + 0x55e54) = (char)uVar3;
                *(byte *)(param_1 + 0x55e55) = local_64._1_1_;
                local_64 = uVar3;
                uVar4 = FUN_020fd7d8(&local_64);
                *(undefined1 *)(param_1 + 0x55e56) = uVar4;
                local_78 = 8;
                local_6d = 0;
                local_74[0] = '\0';
                local_88 = PTR_DAT_04bb3768 + 0x10;
                pcStack_80 = local_74;
                FUN_020fcc2c(param_1 + 0x55e54,&local_88);
                uVar3 = local_64;
              }
            }
          }
        }
        local_64 = uVar3;
        if ((((uVar8 & 1) != 0) && (*(long *)(lVar13 + 0xd0) != 0)) &&
           (puVar9 = *(undefined8 **)(*(long *)(lVar13 + 0xd0) + 8), puVar9 != (undefined8 *)0x0)) {
          (**(code **)*puVar9)();
        }
      }
    }
  }
  return;
}

