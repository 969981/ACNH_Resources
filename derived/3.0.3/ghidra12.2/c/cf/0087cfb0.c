
void FUN_0087cfb0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined2 *puVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  undefined *puVar10;
  undefined *puVar11;
  uint uVar12;
  undefined8 uVar13;
  undefined1 *puVar14;
  bool bVar15;
  int iVar16;
  long lVar17;
  undefined8 *puVar18;
  ulong uVar19;
  undefined8 *puVar20;
  ulong uVar21;
  int iVar22;
  int iVar23;
  byte *pbVar24;
  int local_1b4;
  undefined *local_1b0;
  undefined1 *puStack_1a8;
  undefined4 local_1a0;
  undefined1 local_19c;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  undefined *local_180;
  undefined1 *puStack_178;
  undefined4 local_170;
  undefined1 local_16c [63];
  undefined1 local_12d;
  undefined *local_128;
  undefined1 *puStack_120;
  undefined4 local_118;
  undefined1 local_114 [63];
  undefined1 local_d5;
  undefined1 local_d0 [8];
  undefined6 uStack_c8;
  undefined2 uStack_c2;
  undefined6 local_c0;
  undefined2 uStack_ba;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined1 *local_88;
  undefined4 local_80;
  undefined1 local_7c [7];
  undefined1 local_75;
  int local_6c [3];
  
  FUN_01bb00d0(param_2,(long)*(char *)(param_1 + 0x14ea),0);
  FUN_01bb0360(param_2,(long)*(char *)(param_1 + 0x14eb),0);
  local_1b4 = 0;
  iVar22 = 0;
  puVar20 = &local_90;
  if (&local_90 <= local_d0 + 2) {
    puVar20 = (undefined8 *)(local_d0 + 2);
  }
  puVar1 = PTR_DAT_04bb3768 + 0x10;
  puVar2 = PTR_DAT_04bb2bc0 + 0x10;
  puVar3 = PTR_DAT_04bb4e10 + 0x10;
  do {
    local_90 = *(undefined **)(param_1 + 0x14e8);
    local_6c[0] = iVar22;
    if ((char)((ulong)local_90 >> 0x20) < '\x05') {
      lVar17 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_90);
      local_1b0 = (undefined *)(lVar17 + -0x15180);
      local_90 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_1b0);
    }
    uVar13 = local_90;
    local_90._0_6_ = CONCAT24(5,(uint)local_90);
    local_90._7_1_ = SUB81(uVar13,7);
    local_90._0_7_ = (uint7)(uint6)local_90;
    lVar17 = FUN_0265c2a0(iVar22);
    if (lVar17 == 0) {
LAB_0087d214:
      uVar19 = FUN_021eb720(local_6c);
      if (((uVar19 & 1) == 0) && (uVar19 = FUN_021eacf0(iVar22,&local_90,1), (uVar19 & 1) != 0)) {
        lVar17 = FUN_0265c2a0(iVar22);
        if (lVar17 == 0) {
          pbVar24 = PTR_DAT_04bb9cf0;
        }
        else if ((*(long **)(lVar17 + 0x28) == (long *)0x0) ||
                (puVar18 = (undefined8 *)**(long **)(lVar17 + 0x28), puVar18 == (undefined8 *)0x0))
        {
          pbVar24 = (byte *)(*(long *)(lVar17 + 0x10) + *(long *)(lVar17 + 8));
        }
        else {
          uVar19 = (**(code **)*puVar18)();
          pbVar24 = (byte *)(*(long *)(lVar17 + 0x10) + *(long *)(lVar17 + 8));
          if ((((uVar19 & 1) != 0) && (*(long *)(lVar17 + 0x28) != 0)) &&
             (puVar18 = *(undefined8 **)(*(long *)(lVar17 + 0x28) + 8), puVar18 != (undefined8 *)0x0
             )) {
            (**(code **)*puVar18)();
          }
        }
        bVar5 = *pbVar24;
        bVar6 = pbVar24[1];
        local_80 = 8;
        local_75 = 0;
        local_7c[0] = 0;
        local_90 = puVar1;
        local_88 = local_7c;
        FUN_038d1270(&local_90,"-----");
        if ((ulong)bVar5 < 0x23) {
          FUN_038d1270(&local_90,"%s%02d",
                       *(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)bVar5 * 8 + 0xb0),bVar6);
        }
        (**(code **)(local_90 + 0x18))(&local_90);
        puVar14 = local_88;
        local_1a0 = 0x20;
        local_198 = 0xffffffff;
        uStack_190 = 0xffffffff00000000;
        local_188 = 0xffffffff;
        local_19c = 0;
        local_170 = 0x40;
        local_12d = 0;
        local_16c[0] = 0;
        local_118 = 0x40;
        local_d5 = 0;
        local_114[0] = 0;
        local_d0 = (undefined1  [8])0x0;
        uStack_c8 = 0;
        uStack_c2 = 0;
        local_c0 = 0;
        uStack_ba = 0;
        uStack_b8 = 0;
        local_b0 = 0;
        uStack_a8 = 0;
        local_a0 = 0;
        uStack_98 = 0;
        local_1b0 = puVar3;
        puStack_1a8 = local_d0;
        local_180 = puVar2;
        puStack_178 = local_16c;
        local_128 = puVar2;
        puStack_120 = local_114;
        memset(local_d0,0,(long)puVar20 + (-0xe0 - (long)&local_1b0));
        FUN_01c0e6b4(&local_1b0,puVar14,PTR_DAT_04bb2df0);
        FUN_01bae5d0(param_2,&local_1b0,local_1b4);
        local_1b4 = local_1b4 + 1;
      }
    }
    else {
      if ((*(long **)(lVar17 + 0x28) == (long *)0x0) ||
         (puVar18 = (undefined8 *)**(long **)(lVar17 + 0x28), puVar18 == (undefined8 *)0x0)) {
        cVar7 = *(char *)(*(long *)(lVar17 + 0x10) + *(long *)(lVar17 + 8) + 0x1267a);
      }
      else {
        uVar19 = (**(code **)*puVar18)();
        cVar7 = *(char *)(*(long *)(lVar17 + 0x10) + *(long *)(lVar17 + 8) + 0x1267a);
        if ((((uVar19 & 1) != 0) && (*(long *)(lVar17 + 0x28) != 0)) &&
           (puVar18 = *(undefined8 **)(*(long *)(lVar17 + 0x28) + 8), puVar18 != (undefined8 *)0x0))
        {
          (**(code **)*puVar18)();
        }
      }
      if (cVar7 != '\x02') goto LAB_0087d214;
    }
    puVar11 = PTR_DAT_04bc0a80;
    puVar10 = PTR_DAT_04bb46b0;
    iVar22 = iVar22 + 1;
    if (iVar22 == 10) {
      puVar4 = &uStack_ba;
      if (&uStack_ba <= local_d0 + 2) {
        puVar4 = (undefined2 *)(local_d0 + 2);
      }
      iVar23 = 0;
      iVar22 = 0;
      puVar1 = PTR_DAT_04bb2bc0 + 0x10;
      puVar2 = PTR_DAT_04bb5128 + 0x10;
      do {
        local_90 = *(undefined **)(param_1 + 0x14e8);
        local_6c[0] = iVar23;
        if ((char)((ulong)local_90 >> 0x20) < '\x05') {
          lVar17 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_90);
          local_1b0 = (undefined *)(lVar17 + -0x15180);
          local_90 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_1b0);
        }
        uVar19 = (ulong)local_90;
        uVar12 = (uint)local_90;
        local_90._0_6_ = CONCAT24(5,(uint)local_90);
        local_90._7_1_ = SUB81(uVar19,7);
        local_90._0_7_ = (uint7)(uint6)local_90;
        if ((*(long *)puVar10 != 0) && (lVar17 = FUN_026eec4c(*(long *)puVar10,iVar23), lVar17 != 0)
           ) {
          if (*(long **)(lVar17 + 0x18390) == (long *)0x0) {
            uVar21 = 0;
          }
          else {
            puVar20 = (undefined8 *)**(long **)(lVar17 + 0x18390);
            uVar21 = 0;
            if (puVar20 != (undefined8 *)0x0) {
              uVar21 = (**(code **)*puVar20)();
            }
          }
          pbVar24 = (byte *)(*(long *)(lVar17 + 0x18378) + *(long *)(lVar17 + 0x18370));
          bVar5 = *pbVar24;
          if ((bVar5 - 1 < 0xc) &&
             (bVar6 = pbVar24[1], (byte)(bVar6 - 1) < (byte)(&DAT_0417b531)[bVar5 - 1])) {
            uVar8 = uVar12 >> 0x10 & 0xff;
            uVar9 = (uint)(uVar19 >> 0x18);
            if ((bVar5 == 2 && bVar6 == 0x1d) &&
               (((uVar19 & 3) != 0 ||
                ((((uVar12 & 0xffff) * -0x3d70a3d7 >> 2 | uVar12 * 0x40000000) < 0x28f5c29 &&
                 ((uVar19 & 0xf) != 0)))))) {
              bVar15 = uVar8 == 2 && (uVar9 & 0xff) == 0x1c;
            }
            else {
              bVar15 = bVar5 == uVar8 && (uint)bVar6 == (uVar9 & 0xff);
            }
          }
          else {
            bVar15 = false;
          }
          if ((((uVar21 & 1) != 0) && (*(long *)(lVar17 + 0x18390) != 0)) &&
             (puVar20 = *(undefined8 **)(*(long *)(lVar17 + 0x18390) + 8),
             puVar20 != (undefined8 *)0x0)) {
            (**(code **)*puVar20)();
          }
          if (bVar15) {
            local_19c = 0;
            local_1a0 = 0xb;
            local_198 = 0xffffffff;
            uStack_190 = 0xffffffff00000000;
            local_188 = 0xffffffff;
            local_170 = 0x40;
            local_12d = 0;
            local_16c[0] = 0;
            local_118 = 0x40;
            local_d5 = 0;
            local_114[0] = 0;
            local_c0 = 0;
            local_d0 = (undefined1  [8])0x0;
            uStack_c8 = 0;
            uStack_c2 = 0;
            local_1b0 = puVar2;
            puStack_1a8 = local_d0;
            local_180 = puVar1;
            puStack_178 = local_16c;
            local_128 = puVar1;
            puStack_120 = local_114;
            memset(local_d0,0,(long)puVar4 + (-0xe1 - (long)&local_1b0) & 0xfffffffffffffffcU | 2);
            FUN_01c11a38(&local_1b0,local_6c);
            if (((*PTR_DAT_04bc0a88 & 1) == 0) &&
               (iVar16 = __cxa_guard_acquire(PTR_DAT_04bc0a88), iVar16 != 0)) {
              FUN_01bb25c8(puVar11);
              __cxa_guard_release(PTR_DAT_04bc0a88);
            }
            if (0 < (int)*(uint *)puVar11) {
              uVar19 = 0;
              do {
                if (*(int *)(*(long *)(puVar11 + 8) + uVar19 * 4) == 0x73) goto LAB_0087d378;
                uVar19 = uVar19 + 1;
              } while (*(uint *)puVar11 != uVar19);
            }
            uVar19 = 0;
LAB_0087d378:
            local_90 = (undefined *)CONCAT44(local_90._4_4_,(int)uVar19);
            FUN_01bae480(param_2,&local_1b0,iVar22,&local_90,0);
            if (2 < iVar22 + local_1b4) {
              return;
            }
            iVar22 = iVar22 + 1;
          }
        }
        iVar23 = iVar23 + 1;
        if (iVar23 == 8) {
          return;
        }
      } while( true );
    }
  } while( true );
}

