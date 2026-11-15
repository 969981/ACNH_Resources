
void FUN_02120fe0(long param_1,int param_2,short *param_3,uint param_4)

{
  undefined **ppuVar1;
  short sVar2;
  ushort uVar3;
  undefined *puVar4;
  bool bVar5;
  byte bVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
  uint *puVar14;
  ulong uVar15;
  byte *pbVar16;
  short *psVar17;
  uint *puVar18;
  long lVar19;
  uint uVar20;
  undefined1 auStack_2ddc [2];
  undefined1 auStack_2dda [2];
  undefined1 auStack_2dd8 [2];
  undefined1 auStack_2dd6 [2];
  undefined1 auStack_2dd4 [2];
  undefined1 auStack_2dd2 [2];
  undefined **local_2dd0;
  long local_2dc8;
  undefined1 local_2dc0;
  byte local_2dbf;
  undefined1 auStack_172a [2];
  undefined8 local_1728;
  long local_1720;
  undefined1 local_1718;
  byte local_1717;
  short local_88 [2];
  ushort local_84 [2];
  undefined **local_80;
  short local_78;
  short local_76;
  undefined4 local_74;
  uint *local_70;
  
  puVar4 = PTR_DAT_04bb43c0;
  local_78 = *param_3;
  if (local_78 == -2) {
    return;
  }
  local_76 = param_3[1];
  local_70 = (uint *)0x0;
  local_74 = *(undefined4 *)(param_3 + 2);
  local_80 = &PTR_FUN_04a36b50;
  lVar19 = *(long *)PTR_DAT_04bb43c0;
  uVar7 = FUN_0277d6c4(&local_78);
  if (*(long *)puVar4 == 0) {
LAB_02121204:
    uVar7 = 0xbc;
    local_1728 = (undefined **)CONCAT44(local_1728._4_4_,0xac);
  }
  else {
    lVar19 = *(long *)(lVar19 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
    if ((*(uint *)(lVar19 + 0x1d8) <= uVar7) ||
       (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar7 * 8) == 0)) goto LAB_02121204;
    lVar19 = *(long *)PTR_DAT_04bc0428;
    uVar7 = FUN_0277d6c4(param_3);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
    if ((*(uint *)(lVar19 + 0x1d8) <= uVar7) ||
       (puVar14 = *(uint **)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar7 * 8),
       puVar14 == (uint *)0x0)) goto LAB_02121204;
    uVar7 = *puVar14;
    if (uVar7 != 0 && puVar14 != (uint *)(ulong)uVar7) {
      puVar18 = (uint *)((long)puVar14 - (long)(ulong)uVar7);
      if (((*puVar18 != 0) && (uVar7 = puVar18[1], uVar7 != 0)) && ((ulong)(ushort)puVar18[2] != 0))
      {
        lVar19 = 0xc;
        if (*(char *)((long)puVar18 + 10) != '\0') {
          lVar19 = 0x1c;
        }
        lVar19 = (long)puVar18 + lVar19 + (ulong)(ushort)puVar18[2] * 8;
        if (lVar19 != 0) {
          uVar20 = 0;
          if ((ulong)uVar7 != 0) {
            uVar20 = (uint)((ulong)((long)puVar14 - lVar19) / (ulong)uVar7);
          }
          if (*puVar18 <= uVar20) {
            uVar20 = 0xffffffff;
          }
          if (((uVar20 < DAT_05326ec0) &&
              (uVar3 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar20 * 2), uVar3 < 0xbd)) &&
             (uVar3 == 0xaf)) {
            return;
          }
        }
      }
    }
    local_1728 = (undefined **)CONCAT44(local_1728._4_4_,0xac);
    uVar7 = 0;
    uVar20 = *puVar14;
    local_70 = puVar14;
    if ((uVar20 != 0) && (puVar14 != (uint *)(ulong)uVar20)) {
      puVar18 = (uint *)((long)puVar14 - (long)(ulong)uVar20);
      uVar7 = 0;
      if (*puVar18 != 0) {
        uVar7 = puVar18[1];
        if ((uVar7 != 0) && ((ulong)(ushort)puVar18[2] != 0)) {
          lVar19 = 0xc;
          if (*(char *)((long)puVar18 + 10) != '\0') {
            lVar19 = 0x1c;
          }
          lVar19 = (long)puVar18 + lVar19 + (ulong)(ushort)puVar18[2] * 8;
          if (lVar19 != 0) {
            uVar20 = 0;
            if ((ulong)uVar7 != 0) {
              uVar20 = (uint)((ulong)((long)puVar14 - lVar19) / (ulong)uVar7);
            }
            if (*puVar18 <= uVar20) {
              uVar20 = 0xffffffff;
            }
            if ((uVar20 < DAT_05326ec0) &&
               (uVar7 = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar20 * 2), uVar7 < 0xbd))
            goto LAB_02121210;
          }
        }
        uVar7 = 0;
      }
    }
  }
LAB_02121210:
  local_2dd0 = (undefined **)CONCAT44(local_2dd0._4_4_,uVar7);
  if (uVar7 != (uint)local_1728) {
    return;
  }
  FUN_01b086f4(&local_2dd0,&local_80);
  puVar4 = PTR_DAT_04bb3128;
  uVar3 = (ushort)local_2dd0;
  if (((*PTR_DAT_04bb3128 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04c8c100), iVar9 != 0)) {
    FUN_00706e58(&DAT_04c8c0f0);
    __cxa_guard_release(&DAT_04c8c100);
  }
  if (0 < (int)DAT_04c8c0f0) {
    uVar15 = 0;
    do {
      if (*(uint *)(DAT_04c8c0f8 + uVar15 * 4) == (uint)(uVar3 >> 0xb)) goto LAB_02121280;
      uVar15 = uVar15 + 1;
    } while (DAT_04c8c0f0 != uVar15);
  }
  uVar15 = 0;
LAB_02121280:
  local_1728 = (undefined **)CONCAT44(local_1728._4_4_,(int)uVar15);
  if (((*puVar4 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04c8c100), iVar9 != 0)) {
    FUN_00706e58(&DAT_04c8c0f0);
    __cxa_guard_release(&DAT_04c8c100);
  }
  uVar7 = (uint)local_1728;
  if (DAT_04c8c0f0 <= (uint)local_1728) {
    uVar7 = 0;
  }
  if (param_2 == -1) {
    return;
  }
  if (*(int *)(DAT_04c8c0f8 + (long)(int)uVar7 * 4) == 0xf) {
    return;
  }
  if (param_2 == -2) {
    uVar7 = *(uint *)(param_1 + 0x1cc);
    lVar19 = *(long *)PTR_DAT_04bb39b0;
    if (lVar19 == 0) {
      pbVar16 = &DAT_0548e140;
LAB_02121334:
      if (*pbVar16 < 8) goto LAB_021213ac;
LAB_02121340:
      if (DAT_0537d558 == (long *)0x0) {
LAB_021213a4:
        pbVar16 = &DAT_0548e168;
        goto LAB_021213ac;
      }
      lVar19 = *DAT_0537d558;
      bVar6 = *(byte *)(lVar19 + 0x473);
      pbVar16 = PTR_DAT_04bb5038;
      if ((long)(char)bVar6 != 0xffffffffffffffff) {
        puVar14 = (uint *)(lVar19 + 0x48) + ((long)(char)bVar6 & 0xffffffffU) * 0x20;
        if (7 < bVar6) {
          puVar14 = (uint *)(lVar19 + 0x48);
        }
        if ((*puVar14 & 8) != 0) {
          pbVar16 = (byte *)(lVar19 + 0x471);
        }
      }
      bVar6 = *pbVar16;
      bVar5 = 7 < bVar6;
      if (bVar5) {
        bVar6 = 0xff;
      }
      local_1728 = (undefined **)CONCAT71(local_1728._1_7_,bVar6);
      if (bVar5) goto LAB_021213a4;
    }
    else {
      pbVar16 = PTR_DAT_04bb32e0;
      if (*(int *)(lVar19 + 0x15c) != 0) {
        pbVar16 = (byte *)(lVar19 + 0x158);
      }
      if (7 < *pbVar16) {
        if ((*(int *)(lVar19 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
          pbVar16 = (byte *)(DAT_054f5738 + 0x11a5);
          goto LAB_02121334;
        }
        goto LAB_02121340;
      }
LAB_021213ac:
      bVar6 = *pbVar16;
      if (7 < bVar6) {
        bVar6 = 0xff;
      }
      local_1728 = (undefined **)CONCAT71(local_1728._1_7_,bVar6);
    }
    uVar8 = FUN_02582fe0(&local_1728);
  }
  else {
    lVar19 = *(long *)(*(long *)(param_1 + 0x1f0) + (long)param_2 * 8);
    uVar7 = *(uint *)(lVar19 + 0x1c4);
    uVar8 = *(undefined4 *)(lVar19 + 0xf0);
  }
  if (DAT_04ccbb68 == 0) {
    return;
  }
  uVar15 = (ulong)uVar7;
  if (10 < uVar7) {
    uVar15 = 0;
  }
  lVar19 = *(long *)(DAT_04ccbb68 + uVar15 * 8);
  if (lVar19 == 0) {
    return;
  }
  if (((*puVar4 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04c8c100), iVar9 != 0)) {
    FUN_00706e58(&DAT_04c8c0f0);
    __cxa_guard_release(&DAT_04c8c100);
  }
  if (0 < (int)DAT_04c8c0f0) {
    uVar15 = 0;
    do {
      if (*(int *)(DAT_04c8c0f8 + uVar15 * 4) == 0xf) goto LAB_02121430;
      uVar15 = uVar15 + 1;
    } while (DAT_04c8c0f0 != uVar15);
  }
  uVar15 = 0;
LAB_02121430:
  local_84[0] = 0;
  if (((*puVar4 & 1) == 0) && (iVar9 = __cxa_guard_acquire(&DAT_04c8c100), iVar9 != 0)) {
    FUN_00706e58(&DAT_04c8c0f0);
    __cxa_guard_release(&DAT_04c8c100);
  }
  uVar20 = (uint)uVar15;
  if (DAT_04c8c0f0 <= uVar20) {
    uVar20 = 0;
  }
  local_84[0] = (ushort)uVar7 & 0x7f |
                (ushort)(*(int *)(DAT_04c8c0f8 + (long)(int)uVar20 * 4) << 0xb);
  FUN_007ef010(local_88,PTR_DAT_04bb3170);
  FUN_01b086f4(auStack_172a,&local_80);
  FUN_007e4920(&local_1728,auStack_172a);
  FUN_007ef010(auStack_2dd2,local_84);
  FUN_007e4920(&local_2dd0,auStack_2dd2);
  FUN_007e8e30(local_88,&local_1728);
  if (param_2 == -2) {
    if ((param_4 & 1) == 0) {
      psVar17 = (short *)(param_1 + 0x154);
      goto LAB_021214f0;
    }
  }
  else {
    lVar12 = *(long *)(*(long *)(param_1 + 0x1f0) + (long)param_2 * 8);
    iVar9 = *(int *)(lVar12 + 0x130);
    local_1728 = (undefined **)CONCAT44(local_1728._4_4_,iVar9);
    if ((iVar9 == 2) && ((param_4 & 1) == 0)) {
      psVar17 = (short *)(lVar12 + 0x14c);
LAB_021214f0:
      if (*psVar17 != -2) {
        uVar8 = *(undefined4 *)(psVar17 + 2);
        sVar2 = psVar17[1];
        *param_3 = *psVar17;
        param_3[1] = sVar2;
        *(undefined4 *)(param_3 + 2) = uVar8;
        return;
      }
      uVar15 = FUN_0266b7c0(uVar8);
      FUN_01b086f4(&local_2dd0,&local_80);
      FUN_007ef580(&local_1728,&local_2dd0);
      iVar9 = FUN_00802664(&local_1728);
      if (((uVar15 & 1) == 0) || (iVar9 == 0xf)) {
        if (DAT_05574040 == 0) {
          lVar12 = 0;
        }
        else {
          lVar10 = FUN_026eec4c(DAT_05574040,uVar8);
          lVar12 = 0;
          if (lVar10 != 0) {
            lVar12 = lVar10 + 0xe0;
          }
        }
        lVar10 = 0;
        if (lVar12 != 0) {
          lVar10 = lVar12 + 0xd58;
        }
      }
      else {
        FUN_01b086f4(&local_1728,&local_80);
        lVar10 = FUN_0264f530(uVar8,(ushort)local_1728 >> 7 & 0xf);
      }
      if (param_2 != -2) {
        iVar9 = *(int *)(*(long *)(*(long *)(param_1 + 0x1f0) + (long)param_2 * 8) + 0x130);
        local_1728 = (undefined **)CONCAT44(local_1728._4_4_,iVar9);
        if (iVar9 != 2) goto LAB_021215a4;
      }
      if ((DAT_05574040 != 0) && (lVar12 = FUN_026eec4c(DAT_05574040,uVar8), lVar12 != 0)) {
        local_1720 = lVar12 + 0xe38;
        local_1718 = 1;
        if (*(long **)(lVar12 + 0xe60) == (long *)0x0) {
          local_1717 = 0;
        }
        else {
          puVar13 = (undefined8 *)**(long **)(lVar12 + 0xe60);
          local_1717 = 0;
          if (puVar13 != (undefined8 *)0x0) {
            local_1717 = (**(code **)*puVar13)();
          }
        }
        local_1717 = local_1717 & 1;
        local_1728 = &PTR_FUN_049170d0;
        local_88[0] = *(short *)(*(long *)(lVar12 + 0xe48) + *(long *)(lVar12 + 0xe40) + 0x72);
        if (local_88[0] == 0) {
          FUN_007ef010(&local_2dd0,PTR_DAT_04bb3170);
          local_88[0] = (ushort)local_2dd0;
        }
        else {
          local_88[0] = local_88[0] + -1;
        }
        FUN_02640184(&local_1728);
      }
      goto LAB_021215a4;
    }
  }
  FUN_01b086f4(auStack_2dd4,&local_80);
  FUN_02656ad0(local_84,uVar7,auStack_2dd4);
  FUN_007ef010(auStack_2dd6,local_84);
  lVar10 = FUN_0264e8e0(auStack_2dd6);
LAB_021215a4:
  if (lVar10 != 0) {
    local_1718 = 1;
    local_1720 = lVar10;
    if (*(long **)(lVar10 + 0x28) == (long *)0x0) {
      bVar6 = 0;
    }
    else {
      puVar13 = (undefined8 *)**(long **)(lVar10 + 0x28);
      bVar6 = 0;
      if (puVar13 != (undefined8 *)0x0) {
        bVar6 = (**(code **)*puVar13)();
      }
    }
    local_1717 = bVar6 & 1;
    local_2dc8 = lVar19 + 0xb28;
    lVar12 = *(long *)(lVar10 + 8);
    lVar10 = *(long *)(lVar10 + 0x10);
    ppuVar1 = (undefined **)(PTR_DAT_04bb4c50 + 0x10);
    local_2dc0 = 0;
    local_1728 = ppuVar1;
    if (*(long *)(lVar19 + 0xb50) == 0) {
      local_2dbf = 0;
    }
    else {
      puVar13 = *(undefined8 **)(*(long *)(lVar19 + 0xb50) + 0x10);
      local_2dbf = 0;
      if (puVar13 != (undefined8 *)0x0) {
        local_2dbf = (**(code **)*puVar13)();
      }
    }
    local_2dbf = local_2dbf & 1;
    local_2dd0 = ppuVar1;
    uVar11 = FUN_02125b64(&local_2dd0);
    FUN_027c1db4(uVar11,lVar10 + lVar12);
    FUN_02640184(&local_2dd0);
    FUN_02640184(&local_1728);
  }
  FUN_007ef010(auStack_2dd8,local_84);
  FUN_007e4920(&local_1728,auStack_2dd8);
  FUN_007ef010(auStack_2dda,local_88);
  FUN_007e90a0(&local_1728,auStack_2dda);
  FUN_007ef010(auStack_2ddc,local_84);
  FUN_00805ba8(&local_1728,auStack_2ddc);
  *(uint *)param_3 = (uint)local_1728;
  *(undefined4 *)(param_3 + 2) = local_1728._4_4_;
  return;
}

