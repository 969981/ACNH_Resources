
undefined8 FUN_01d19420(undefined8 *param_1,byte *param_2)

{
  long *plVar1;
  undefined *puVar2;
  undefined2 *puVar3;
  undefined1 *puVar4;
  byte bVar5;
  ushort uVar6;
  undefined *puVar7;
  undefined1 uVar8;
  int iVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  ushort *puVar13;
  undefined8 *puVar14;
  uint uVar15;
  long lVar16;
  byte *pbVar17;
  long lVar18;
  ulong uVar19;
  uint uVar20;
  undefined8 uVar21;
  undefined8 *puVar22;
  undefined8 local_1f0;
  undefined8 *local_1e8;
  undefined4 local_1e0;
  undefined1 local_1dc;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined4 local_1c8;
  undefined *local_1c0;
  undefined1 *puStack_1b8;
  undefined4 local_1b0;
  undefined1 local_1ac [63];
  undefined1 local_16d;
  undefined *local_168;
  undefined1 *puStack_160;
  undefined4 local_158;
  undefined1 local_154 [63];
  undefined1 local_115;
  undefined8 local_110;
  undefined6 uStack_108;
  undefined2 local_102;
  undefined6 uStack_100;
  undefined2 uStack_fa;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined2 local_d0;
  undefined1 auStack_ce [6];
  undefined *local_c8;
  undefined8 *local_c0;
  uint local_b8;
  byte local_ac [4];
  undefined4 local_a8 [2];
  long local_a0;
  undefined *local_98;
  char *local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined4 local_6c;
  
  puVar14 = param_1 + 1;
  *puVar14 = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  *(undefined8 *)((long)param_1 + 0x2b) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined8 *)((long)param_1 + 0x14) = 0;
  puVar22 = param_1 + 0xb;
  *puVar22 = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x16] = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  memset(param_1 + 0x1a,0,0x23008);
  *(undefined1 *)((long)param_1 + 0x230e9) = 1;
  local_ac[0] = *param_2;
  if (7 < local_ac[0]) {
    return 0;
  }
  lVar10 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_ac,1);
  if (lVar10 == 0) {
    return 0;
  }
  plVar1 = (long *)(lVar10 + 0x18300);
  if ((*(long **)(lVar10 + 0x28) == (long *)0x0) ||
     (puVar11 = (undefined8 *)**(long **)(lVar10 + 0x28), puVar11 == (undefined8 *)0x0)) {
    uVar12 = 0;
  }
  else {
    uVar12 = (**(code **)*puVar11)();
    uVar12 = uVar12 & 0xffffffff;
  }
  *param_1 = 0x220a002803;
  local_1f0 = (undefined *)nn::oe::GetDesiredLanguage();
  lVar16 = 0;
  do {
    if (local_1ac[lVar16 + -0x44] == '\0') goto LAB_01d19584;
    if (local_1ac[lVar16 + -0x43] == '\0') {
      lVar16 = lVar16 + 1;
      goto LAB_01d19584;
    }
    if (local_1ac[lVar16 + -0x42] == '\0') {
      lVar16 = lVar16 + 2;
      goto LAB_01d19584;
    }
    lVar16 = lVar16 + 3;
  } while (lVar16 != 0x80001);
  lVar16 = 0;
LAB_01d19584:
  uVar15 = (uint)lVar16;
  *puVar14 = 0;
  if (6 < (int)uVar15) {
    uVar15 = 7;
  }
  memcpy(puVar14,&local_1f0,(ulong)uVar15);
  lVar16 = *(long *)(lVar10 + 0x10) + *(long *)(lVar10 + 8);
  uVar15 = *(uint *)(lVar16 + 0x13440);
  if (0xfffdcfff < uVar15 - 0x23001) {
    uVar19 = 0;
    uVar20 = 0;
    do {
      iVar9 = *(int *)(lVar16 + 0x13434 + uVar19);
      uVar19 = uVar19 + 4;
      uVar20 = (iVar9 * 0x16a88000 | (uint)(iVar9 * -0x3361d2af) >> 0x11) * 0x1b873593 ^ uVar20;
      uVar20 = (uVar20 >> 0x13 | uVar20 << 0xd) * 5 + 0xe6546b64;
    } while (uVar19 < 0x23019);
    uVar20 = (uVar20 ^ 0x2301c ^ (uVar20 ^ 0x2301c) >> 0x10) * -0x7a143595;
    uVar20 = (uVar20 ^ uVar20 >> 0xd) * -0x3d4d51cb;
    if (*(uint *)(lVar16 + 0x13430) == (uVar20 ^ uVar20 >> 0x10)) {
      uVar19 = 0;
      uVar20 = 0;
      do {
        iVar9 = *(int *)(lVar16 + 0x13434 + uVar19);
        uVar19 = uVar19 + 4;
        uVar20 = (iVar9 * 0x16a88000 | (uint)(iVar9 * -0x3361d2af) >> 0x11) * 0x1b873593 ^ uVar20;
        uVar20 = (uVar20 >> 0x13 | uVar20 << 0xd) * 5 + 0xe6546b64;
      } while (uVar19 < 0x23019);
      uVar20 = (uVar20 ^ 0x2301c ^ (uVar20 ^ 0x2301c) >> 0x10) * -0x7a143595;
      uVar20 = (uVar20 ^ uVar20 >> 0xd) * -0x3d4d51cb;
      if (*(uint *)(lVar16 + 0x13430) == (uVar20 ^ uVar20 >> 0x10)) {
        memset(param_1 + 0x1b,0,0x23000);
        if (0x22fff < uVar15) {
          uVar15 = 0x23000;
        }
        param_1[0x1a] = (ulong)uVar15;
        memcpy(param_1 + 0x1b,(void *)(lVar16 + 0x13444),(ulong)uVar15);
        *(undefined1 *)((long)param_1 + 0x230e9) = 0;
        local_1dc = 0;
        local_1d8 = 0xffffffff;
        uStack_1d0 = 0xffffffff00000000;
        local_1e0 = 0xb;
        puStack_1b8 = local_1ac;
        local_1c8 = 0xffffffff;
        local_1e8 = &local_110;
        *(undefined4 *)(param_1 + 2) = *(undefined4 *)(lVar16 + 0x3646c);
        puVar2 = PTR_DAT_04bb2bc0;
        local_1b0 = 0x40;
        local_16d = 0;
        local_1ac[0] = 0;
        local_1c0 = PTR_DAT_04bb2bc0 + 0x10;
        local_158 = 0x40;
        local_115 = 0;
        local_154[0] = 0;
        puStack_160 = local_154;
        uStack_100 = 0;
        local_1f0 = PTR_DAT_04bb5128 + 0x10;
        local_110 = 0;
        uStack_108 = 0;
        local_102 = 0;
        puVar3 = &uStack_fa;
        if (&uStack_fa <= (undefined2 *)((long)&local_110 + 2U)) {
          puVar3 = (undefined2 *)((long)&local_110 + 2U);
        }
        local_168 = local_1c0;
        memset(local_1e8,0,(long)puVar3 + (-0xe1 - (long)&local_1f0) & 0xfffffffffffffffcU | 2);
        *(undefined1 *)((long)param_1 + 0x32) = 0;
        local_b8 = 0x1f;
        local_a0 = lVar16 + 0x36470;
        local_c8 = PTR_DAT_04bb2030 + 0x10;
        local_a8[0] = 10;
        local_c0 = (undefined8 *)((long)param_1 + 0x14);
        FUN_0082b014(&local_1f0);
        puVar7 = PTR_DAT_04bc0cd8;
        local_80 = 0;
        uStack_78 = 0;
        local_88 = 0;
        local_70 = 1;
        local_6c = 0;
        local_98 = PTR_DAT_04bc0cd8 + 0x10;
        local_90 = (char *)0x0;
        FUN_02906b00(&local_98,&local_1f0,local_a8);
        puVar13 = (ushort *)(**(code **)(local_1f0 + 0x18))(&local_1f0);
        (**(code **)(local_c8 + 0x18))(&local_c8);
        if (local_b8 == 0) {
          iVar9 = 3;
        }
        else {
          uVar15 = 0;
          lVar18 = 0x7fffffff;
          do {
            pbVar17 = (byte *)((long)local_c0 + (ulong)uVar15);
            if (lVar18 == 0) {
LAB_01d1995c:
              iVar9 = 0;
              goto LAB_01d19960;
            }
            uVar6 = *puVar13;
            if (uVar6 == 0) goto LAB_01d1995c;
            bVar5 = (byte)uVar6;
            if (uVar6 < 0x80) {
              *pbVar17 = bVar5;
              iVar9 = 1;
            }
            else if (uVar6 < 0x800) {
              if (local_b8 <= uVar15 + 1) break;
              *pbVar17 = (byte)(uVar6 >> 6) | 0xc0;
              pbVar17[1] = bVar5 & 0x3f | 0x80;
              iVar9 = 2;
            }
            else {
              if (local_b8 <= uVar15 + 2) break;
              *pbVar17 = (byte)(uVar6 >> 0xc) | 0xe0;
              pbVar17[1] = (byte)(uVar6 >> 6) & 0x3f | 0x80;
              pbVar17[2] = bVar5 & 0x3f | 0x80;
              iVar9 = 3;
            }
            uVar15 = iVar9 + uVar15;
            lVar18 = lVar18 + -1;
            puVar13 = puVar13 + 1;
          } while (uVar15 < local_b8);
          pbVar17 = (byte *)((long)local_c0 + (ulong)(uVar15 - 1));
          iVar9 = 2;
LAB_01d19960:
          *pbVar17 = 0;
        }
        local_98 = (undefined *)CONCAT44(local_98._4_4_,iVar9);
        if (iVar9 == 0) {
          uVar15 = *(uint *)(lVar16 + 0x36484);
          if (1 < uVar15) {
            uVar15 = 0;
          }
          local_98 = (undefined *)CONCAT44(local_98._4_4_,uVar15);
          *(uint *)((long)param_1 + 0x34) = uVar15;
          lVar18 = *(long *)(lVar10 + 0x10) + *(long *)(lVar10 + 8);
          bVar5 = *(byte *)(lVar18 + 0x1341c);
          uVar15 = (uint)bVar5;
          if ((0xb < bVar5 - 1) ||
             ((byte)(&DAT_0417b531)[bVar5 - 1] <= (byte)(*(char *)(lVar18 + 0x1341d) - 1U))) {
            uVar15 = 1;
          }
          *(uint *)(param_1 + 7) = uVar15;
          uVar15 = (uint)*(byte *)(lVar18 + 0x1341c);
          if ((0xb < uVar15 - 1) ||
             (uVar20 = (uint)*(byte *)(lVar18 + 0x1341d),
             (byte)(&DAT_0417b531)[uVar15 - 1] <= (byte)(*(byte *)(lVar18 + 0x1341d) - 1))) {
            uVar20 = 1;
          }
          *(uint *)((long)param_1 + 0x3c) = uVar20;
          *(uint *)(param_1 + 8) = (uint)*(ushort *)(lVar16 + 0x36494);
          *(uint *)((long)param_1 + 0x44) = (uint)*(byte *)(lVar16 + 0x36496);
          *(uint *)(param_1 + 9) = (uint)*(ushort *)(lVar16 + 0x36498);
          *(uint *)((long)param_1 + 0x4c) = (uint)*(byte *)(lVar16 + 0x3649a);
          uVar15 = 0;
          if (*(byte *)(lVar16 + 0x3649b) < 3) {
            uVar15 = (uint)*(byte *)(lVar16 + 0x3649b);
          }
          *(uint *)(param_1 + 10) = uVar15;
          uVar15 = 0;
          if (*(byte *)(lVar16 + 0x3649c) < 3) {
            uVar15 = (uint)*(byte *)(lVar16 + 0x3649c);
          }
          puVar4 = auStack_ce;
          if (auStack_ce <= (undefined1 *)((long)&local_110 + 2U)) {
            puVar4 = (undefined1 *)((long)&local_110 + 2U);
          }
          puStack_1b8 = local_1ac;
          local_1e0 = 0x21;
          local_1c0 = puVar2 + 0x10;
          local_1b0 = 0x40;
          local_158 = 0x40;
          puStack_160 = local_154;
          local_16d = 0;
          local_115 = 0;
          local_1f0 = &DAT_04a53578;
          local_d0 = 0;
          local_110 = 0;
          uStack_108 = 0;
          local_102 = 0;
          *(uint *)((long)param_1 + 0x54) = uVar15;
          uStack_100 = 0;
          uStack_fa = 0;
          uStack_f8 = 0;
          local_f0 = 0;
          uStack_e8 = 0;
          local_e0 = 0;
          uStack_d8 = 0;
          local_1e8 = &local_110;
          local_168 = local_1c0;
          memset(&local_110,0,(ulong)(puVar4 + (-0xe1 - (long)&local_1f0)) & 0xfffffffffffffff8 | 2)
          ;
          local_c8 = (undefined *)CONCAT44(local_c8._4_4_,0x20);
          local_c0 = (undefined8 *)(lVar16 + 0x3649e);
          memset(&local_110,0,(ulong)(puVar4 + ~(ulong)&local_110) & 0xfffffffffffffff8 | 2);
          local_1dc = 0;
          local_1d8 = 0xffffffff;
          uStack_1d0 = 0xffffffff00000000;
          local_70 = 1;
          local_98 = puVar7 + 0x10;
          local_1c8 = 0xffffffff;
          local_1ac[0] = 0;
          local_154[0] = 0;
          local_6c = 0;
          local_80 = 0;
          uStack_78 = 0;
          local_90 = (char *)0x0;
          local_88 = 0;
          FUN_02906b00(&local_98,&local_1f0,&local_c8);
          *(undefined1 *)(param_1 + 0x17) = 0;
          puVar13 = (ushort *)(**(code **)(local_1f0 + 0x18))(&local_1f0);
          uVar15 = 0;
          lVar18 = 0x7fffffff;
          *(undefined1 *)(param_1 + 0x17) = 0;
          do {
            pbVar17 = (byte *)((long)puVar22 + (ulong)uVar15);
            if (lVar18 == 0) {
LAB_01d19c4c:
              iVar9 = 0;
              goto LAB_01d19c50;
            }
            uVar6 = *puVar13;
            if (uVar6 == 0) goto LAB_01d19c4c;
            bVar5 = (byte)uVar6;
            if (uVar6 < 0x80) {
              *pbVar17 = bVar5;
              iVar9 = 1;
            }
            else if (uVar6 < 0x800) {
              if (0x5f < uVar15) break;
              *pbVar17 = (byte)(uVar6 >> 6) | 0xc0;
              pbVar17[1] = bVar5 & 0x3f | 0x80;
              iVar9 = 2;
            }
            else {
              if (0x60 < uVar15 + 2) break;
              *pbVar17 = (byte)(uVar6 >> 0xc) | 0xe0;
              pbVar17[1] = (byte)(uVar6 >> 6) & 0x3f | 0x80;
              pbVar17[2] = bVar5 & 0x3f | 0x80;
              iVar9 = 3;
            }
            uVar15 = iVar9 + uVar15;
            lVar18 = lVar18 + -1;
            puVar13 = puVar13 + 1;
          } while (uVar15 < 0x61);
          pbVar17 = (byte *)((long)puVar22 + (ulong)(uVar15 - 1));
          iVar9 = 2;
LAB_01d19c50:
          *pbVar17 = 0;
          uVar21 = 0;
          local_98 = (undefined *)CONCAT44(local_98._4_4_,iVar9);
          if (iVar9 == 0) {
            *(undefined1 *)((long)param_1 + 0xb9) = *(undefined1 *)(lVar16 + 0x36500);
            puVar13 = (ushort *)(lVar16 + 0x364fc);
            uVar19 = nn::time::IsValidDate
                               ((uint)*puVar13,(uint)*(byte *)(lVar16 + 0x364fe),
                                (uint)*(byte *)(lVar16 + 0x364ff));
            uVar15 = (uint)*puVar13;
            if ((uVar19 & 1) == 0) {
              uVar15 = 2000;
            }
            *(uint *)((long)param_1 + 0xbc) = uVar15;
            uVar19 = nn::time::IsValidDate
                               ((uint)*puVar13,(uint)*(byte *)(lVar16 + 0x364fe),
                                (uint)*(byte *)(lVar16 + 0x364ff));
            uVar15 = (uint)*(byte *)(lVar16 + 0x364fe);
            if ((uVar19 & 1) == 0) {
              uVar15 = 1;
            }
            *(uint *)(param_1 + 0x18) = uVar15;
            uVar19 = nn::time::IsValidDate
                               ((uint)*puVar13,(uint)*(byte *)(lVar16 + 0x364fe),
                                (uint)*(byte *)(lVar16 + 0x364ff));
            uVar15 = (uint)*(byte *)(lVar16 + 0x364ff);
            if ((uVar19 & 1) == 0) {
              uVar15 = 1;
            }
            *(uint *)((long)param_1 + 0xc4) = uVar15;
            param_1[0x19] = *(undefined8 *)(lVar16 + 0x36530);
            local_1e8 = (undefined8 *)(lVar10 + 0x182f8);
            local_1e0 = CONCAT31(local_1e0._1_3_,1);
            if (*(long **)(lVar10 + 0x18320) == (long *)0x0) {
              uVar8 = 0;
            }
            else {
              puVar14 = (undefined8 *)**(long **)(lVar10 + 0x18320);
              uVar8 = 0;
              if (puVar14 != (undefined8 *)0x0) {
                uVar8 = (**(code **)*puVar14)();
              }
            }
            local_1e0 = CONCAT22(local_1e0._2_2_,CONCAT11(uVar8,(undefined1)local_1e0)) & 0xffff01ff
            ;
            local_1f0 = PTR_DAT_04bb4f98 + 0x10;
            puVar2 = PTR_DAT_04bb2020 + 0x10;
            local_90 = "TapDiscloseDreamLandID";
            local_98 = puVar2;
            iVar9 = FUN_0274bbb0(*(long *)(lVar10 + 0x18308) + *plVar1,&local_98);
            *(bool *)(param_1 + 0x461b) = iVar9 != 0;
            local_90 = "MyDesignExchangeDiscloseAuthorID";
            local_98 = puVar2;
            iVar9 = FUN_0274bbb0(*(long *)(lVar10 + 0x18308) + *plVar1,&local_98);
            *(bool *)((long)param_1 + 0x230d9) = iVar9 != 0;
            uVar21 = FUN_02658b70();
            param_1[0x461c] = uVar21;
            local_90 = "WHEREAREN_DisclosePlannerID";
            local_98 = puVar2;
            iVar9 = FUN_0274bbb0(*(long *)(lVar10 + 0x18308) + *plVar1,&local_98);
            *(bool *)(param_1 + 0x461d) = iVar9 != 0;
            FUN_02640184(&local_1f0);
            uVar21 = 1;
          }
        }
        else {
          uVar21 = 0;
        }
        goto LAB_01d19864;
      }
    }
  }
  uVar21 = 0;
LAB_01d19864:
  if ((((uVar12 & 1) != 0) && (*(long *)(lVar10 + 0x28) != 0)) &&
     (puVar14 = *(undefined8 **)(*(long *)(lVar10 + 0x28) + 8), puVar14 != (undefined8 *)0x0)) {
    (**(code **)*puVar14)();
  }
  return uVar21;
}

