
void FUN_021206a0(long param_1,int param_2,short *param_3,uint param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  short sVar3;
  ushort uVar4;
  undefined *puVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  uint *puVar15;
  ulong uVar16;
  byte *pbVar17;
  short *psVar18;
  undefined8 uVar19;
  byte bVar20;
  undefined8 uVar21;
  uint *puVar22;
  undefined8 uVar23;
  long lVar24;
  uint uVar25;
  undefined1 auStack_2ddc [2];
  undefined1 auStack_2dda [2];
  undefined1 auStack_2dd8 [2];
  undefined1 auStack_2dd6 [2];
  undefined1 auStack_2dd4 [2];
  undefined1 auStack_2dd2 [2];
  uint local_2dd0 [1449];
  undefined1 auStack_172a [2];
  undefined8 local_1728;
  long local_1720;
  ulong local_1718;
  short local_88 [2];
  ushort local_84 [2];
  undefined **local_80;
  short local_78;
  short local_76;
  undefined4 local_74;
  uint *local_70;
  
  puVar5 = PTR_DAT_04bb43c0;
  local_78 = *param_3;
  if (local_78 == -2) {
    return;
  }
  local_76 = param_3[1];
  local_70 = (uint *)0x0;
  local_74 = *(undefined4 *)(param_3 + 2);
  local_80 = &PTR_FUN_04a36b50;
  lVar24 = *(long *)PTR_DAT_04bb43c0;
  uVar8 = FUN_0277d6c4(&local_78);
  if (*(long *)puVar5 == 0) {
LAB_02120844:
    local_1728 = (undefined **)CONCAT44(local_1728._4_4_,0xac);
    local_2dd0[0] = 0xbc;
  }
  else {
    lVar24 = *(long *)(lVar24 + 0x57e58);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
    if ((*(uint *)(lVar24 + 0x1d8) <= uVar8) ||
       (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar8 * 8) == 0)) goto LAB_02120844;
    lVar24 = *(long *)PTR_DAT_04bc0428;
    uVar8 = FUN_0277d6c4(param_3);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
    if ((*(uint *)(lVar24 + 0x1d8) <= uVar8) ||
       (puVar15 = *(uint **)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar8 * 8),
       puVar15 == (uint *)0x0)) goto LAB_02120844;
    local_1728 = (undefined **)CONCAT44(local_1728._4_4_,0xac);
    uVar8 = *puVar15;
    local_70 = puVar15;
    if (uVar8 == 0 || puVar15 == (uint *)(ulong)uVar8) {
LAB_0212082c:
      local_2dd0[0] = 0;
    }
    else {
      puVar22 = (uint *)((long)puVar15 - (long)(ulong)uVar8);
      if (((*puVar22 == 0) || (uVar8 = puVar22[1], uVar8 == 0)) || ((ulong)(ushort)puVar22[2] == 0))
      goto LAB_0212082c;
      lVar24 = 0xc;
      if (*(char *)((long)puVar22 + 10) != '\0') {
        lVar24 = 0x1c;
      }
      lVar24 = (long)puVar22 + lVar24 + (ulong)(ushort)puVar22[2] * 8;
      if (lVar24 == 0) goto LAB_0212082c;
      uVar25 = 0;
      if ((ulong)uVar8 != 0) {
        uVar25 = (uint)((ulong)((long)puVar15 - lVar24) / (ulong)uVar8);
      }
      if (*puVar22 <= uVar25) {
        uVar25 = 0xffffffff;
      }
      if ((DAT_05326ec0 <= uVar25) ||
         (uVar4 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar25 * 2), local_2dd0[0] = (uint)uVar4,
         0xbc < uVar4)) goto LAB_0212082c;
    }
  }
  if (local_2dd0[0] != (uint)local_1728) {
    return;
  }
  FUN_01b086f4(local_2dd0,&local_80);
  uVar8 = local_2dd0[0];
  puVar5 = PTR_DAT_04bb3128;
  if (((*PTR_DAT_04bb3128 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04c8c100), iVar10 != 0))
  {
    FUN_00706e58(&DAT_04c8c0f0);
    __cxa_guard_release(&DAT_04c8c100);
  }
  if (0 < (int)DAT_04c8c0f0) {
    uVar16 = 0;
    do {
      if (*(uint *)(DAT_04c8c0f8 + uVar16 * 4) == (uVar8 >> 0xb & 0x1f)) goto LAB_021208bc;
      uVar16 = uVar16 + 1;
    } while (DAT_04c8c0f0 != uVar16);
  }
  uVar16 = 0;
LAB_021208bc:
  local_1728 = (undefined **)CONCAT44(local_1728._4_4_,(int)uVar16);
  if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04c8c100), iVar10 != 0)) {
    FUN_00706e58(&DAT_04c8c0f0);
    __cxa_guard_release(&DAT_04c8c100);
  }
  uVar8 = (uint)local_1728;
  if (DAT_04c8c0f0 <= (uint)local_1728) {
    uVar8 = 0;
  }
  if (param_2 == -1) {
    return;
  }
  if (*(int *)(DAT_04c8c0f8 + (long)(int)uVar8 * 4) == 0xe) {
    return;
  }
  if (param_2 == -2) {
    uVar8 = *(uint *)(param_1 + 0x1cc);
    lVar24 = *(long *)PTR_DAT_04bb39b0;
    if (lVar24 == 0) {
      pbVar17 = &DAT_0548e140;
LAB_02120970:
      if (*pbVar17 < 8) goto LAB_021209e8;
LAB_0212097c:
      if (DAT_0537d558 == (long *)0x0) {
LAB_021209e0:
        pbVar17 = &DAT_0548e168;
        goto LAB_021209e8;
      }
      lVar24 = *DAT_0537d558;
      bVar20 = *(byte *)(lVar24 + 0x473);
      pbVar17 = PTR_DAT_04bb5038;
      if ((long)(char)bVar20 != 0xffffffffffffffff) {
        puVar15 = (uint *)(lVar24 + 0x48) + ((long)(char)bVar20 & 0xffffffffU) * 0x20;
        if (7 < bVar20) {
          puVar15 = (uint *)(lVar24 + 0x48);
        }
        if ((*puVar15 & 8) != 0) {
          pbVar17 = (byte *)(lVar24 + 0x471);
        }
      }
      bVar20 = *pbVar17;
      bVar6 = 7 < bVar20;
      if (bVar6) {
        bVar20 = 0xff;
      }
      local_1728 = (undefined **)CONCAT71(local_1728._1_7_,bVar20);
      if (bVar6) goto LAB_021209e0;
    }
    else {
      pbVar17 = PTR_DAT_04bb32e0;
      if (*(int *)(lVar24 + 0x15c) != 0) {
        pbVar17 = (byte *)(lVar24 + 0x158);
      }
      if (7 < *pbVar17) {
        if ((*(int *)(lVar24 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
          pbVar17 = (byte *)(DAT_054f5738 + 0x11a5);
          goto LAB_02120970;
        }
        goto LAB_0212097c;
      }
LAB_021209e8:
      bVar20 = *pbVar17;
      if (7 < bVar20) {
        bVar20 = 0xff;
      }
      local_1728 = (undefined **)CONCAT71(local_1728._1_7_,bVar20);
    }
    uVar9 = FUN_02582fe0(&local_1728);
  }
  else {
    lVar24 = *(long *)(*(long *)(param_1 + 0x1f0) + (long)param_2 * 8);
    uVar8 = *(uint *)(lVar24 + 0x1c4);
    uVar9 = *(undefined4 *)(lVar24 + 0xf0);
  }
  if (DAT_04ccbb68 == 0) {
    return;
  }
  uVar16 = (ulong)uVar8;
  if (10 < uVar8) {
    uVar16 = 0;
  }
  lVar24 = *(long *)(DAT_04ccbb68 + uVar16 * 8);
  if (lVar24 == 0) {
    return;
  }
  if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04c8c100), iVar10 != 0)) {
    FUN_00706e58(&DAT_04c8c0f0);
    __cxa_guard_release(&DAT_04c8c100);
  }
  if (0 < (int)DAT_04c8c0f0) {
    uVar16 = 0;
    do {
      if (*(int *)(DAT_04c8c0f8 + uVar16 * 4) == 0xe) goto LAB_02120a6c;
      uVar16 = uVar16 + 1;
    } while (DAT_04c8c0f0 != uVar16);
  }
  uVar16 = 0;
LAB_02120a6c:
  local_84[0] = 0;
  if (((*puVar5 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_04c8c100), iVar10 != 0)) {
    FUN_00706e58(&DAT_04c8c0f0);
    __cxa_guard_release(&DAT_04c8c100);
  }
  uVar25 = (uint)uVar16;
  if (DAT_04c8c0f0 <= uVar25) {
    uVar25 = 0;
  }
  local_84[0] = (ushort)uVar8 & 0x7f |
                (ushort)(*(int *)(DAT_04c8c0f8 + (long)(int)uVar25 * 4) << 0xb);
  FUN_007ef010(local_88,PTR_DAT_04bb3170);
  FUN_01b086f4(auStack_172a,&local_80);
  FUN_007e4920(&local_1728,auStack_172a);
  FUN_007ef010(auStack_2dd2,local_84);
  FUN_007e4920(local_2dd0,auStack_2dd2);
  FUN_007e8e30(local_88,&local_1728);
  if (param_2 == -2) {
    if ((param_4 & 1) == 0) {
      psVar18 = (short *)(param_1 + 0x13c);
      goto LAB_02120b34;
    }
LAB_02120bb4:
    FUN_01b086f4(auStack_2dd4,&local_80);
    FUN_02656c40(local_84,uVar8,auStack_2dd4);
    FUN_007ef010(auStack_2dd6,local_84);
    lVar11 = FUN_0264e8e0(auStack_2dd6);
  }
  else {
    lVar13 = *(long *)(*(long *)(param_1 + 0x1f0) + (long)param_2 * 8);
    iVar10 = *(int *)(lVar13 + 0x130);
    local_1728 = (undefined **)CONCAT44(local_1728._4_4_,iVar10);
    if ((iVar10 != 2) || ((param_4 & 1) != 0)) goto LAB_02120bb4;
    psVar18 = (short *)(lVar13 + 0x134);
LAB_02120b34:
    if (*psVar18 != -2) {
      uVar9 = *(undefined4 *)(psVar18 + 2);
      sVar3 = psVar18[1];
      *param_3 = *psVar18;
      param_3[1] = sVar3;
      *(undefined4 *)(param_3 + 2) = uVar9;
      return;
    }
    uVar16 = FUN_0266b7c0(uVar9);
    FUN_01b086f4(local_2dd0,&local_80);
    FUN_007ef580(&local_1728,local_2dd0);
    iVar10 = FUN_00802664(&local_1728);
    if (((uVar16 & 1) == 0) || (iVar10 == 0xe)) {
      if (DAT_05574040 == 0) {
        lVar13 = 0;
      }
      else {
        lVar11 = FUN_026eec4c(DAT_05574040,uVar9);
        lVar13 = 0;
        if (lVar11 != 0) {
          lVar13 = lVar11 + 0xe0;
        }
      }
      lVar11 = 0;
      if (lVar13 != 0) {
        lVar11 = lVar13 + 0x150;
      }
    }
    else {
      FUN_01b086f4(&local_1728,&local_80);
      lVar11 = FUN_0264f4c0(uVar9,(ushort)local_1728 >> 7 & 0xf);
    }
    if (param_2 == -2) {
LAB_02120e84:
      if ((DAT_05574040 != 0) && (lVar13 = FUN_026eec4c(DAT_05574040,uVar9), lVar13 != 0)) {
        local_1720 = lVar13 + 0x230;
        local_1718 = CONCAT71(local_1718._1_7_,1);
        if (*(long **)(lVar13 + 600) == (long *)0x0) {
          uVar7 = 0;
        }
        else {
          puVar14 = (undefined8 *)**(long **)(lVar13 + 600);
          uVar7 = 0;
          if (puVar14 != (undefined8 *)0x0) {
            uVar7 = (**(code **)*puVar14)();
          }
        }
        local_1718 = CONCAT62(local_1718._2_6_,CONCAT11(uVar7,(undefined1)local_1718)) &
                     0xffffffffffff01ff;
        local_1728 = &PTR_FUN_049170d0;
        local_88[0] = *(short *)(*(long *)(lVar13 + 0x240) + *(long *)(lVar13 + 0x238) + 0x72);
        if (local_88[0] == 0) {
          FUN_007ef010(local_2dd0,PTR_DAT_04bb3170);
          local_88[0] = (short)local_2dd0[0];
        }
        else {
          local_88[0] = local_88[0] + -1;
        }
        FUN_02640184(&local_1728);
      }
    }
    else {
      iVar10 = *(int *)(*(long *)(*(long *)(param_1 + 0x1f0) + (long)param_2 * 8) + 0x130);
      local_1728 = (undefined **)CONCAT44(local_1728._4_4_,iVar10);
      if (iVar10 == 2) goto LAB_02120e84;
    }
  }
  if (lVar11 == 0) goto LAB_02120dcc;
  if ((*(long **)(lVar11 + 0x28) == (long *)0x0) ||
     (puVar14 = (undefined8 *)**(long **)(lVar11 + 0x28), puVar14 == (undefined8 *)0x0)) {
    uVar8 = 1;
  }
  else {
    uVar8 = (**(code **)*puVar14)();
    uVar8 = uVar8 ^ 1;
  }
  puVar1 = (undefined4 *)(*(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 8));
  lVar13 = *(long *)(lVar24 + 0x28);
  if (lVar13 == 0) {
    uVar16 = 0;
  }
  else {
    if (*(undefined8 **)(lVar13 + 0x10) == (undefined8 *)0x0) {
      uVar16 = 0;
    }
    else {
      uVar16 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
      lVar13 = *(long *)(lVar24 + 0x28);
      uVar16 = uVar16 & 0xffffffff;
      if (lVar13 == 0) goto LAB_02120cb8;
    }
    plVar12 = *(long **)(lVar13 + 0x20);
    if (plVar12 != (long *)0x0) {
      local_1728 = *(undefined ***)(lVar24 + 8);
      local_1720 = *(long *)(lVar24 + 0x10);
      local_1718 = 0x8a8;
      (**(code **)(*plVar12 + 0x20))(plVar12,&local_1728);
    }
  }
LAB_02120cb8:
  puVar2 = (undefined4 *)(*(long *)(lVar24 + 0x10) + *(long *)(lVar24 + 8));
  *puVar2 = *puVar1;
  puVar2[1] = puVar1[1];
  *(undefined8 *)(puVar2 + 2) = *(undefined8 *)(puVar1 + 2);
  *(undefined8 *)(puVar2 + 4) = *(undefined8 *)(puVar1 + 4);
  uVar19 = *(undefined8 *)(puVar1 + 6);
  uVar21 = *(undefined8 *)(puVar1 + 8);
  uVar23 = *(undefined8 *)(puVar1 + 0xc);
  *(undefined8 *)(puVar2 + 10) = *(undefined8 *)(puVar1 + 10);
  *(undefined8 *)(puVar2 + 0xc) = uVar23;
  *(undefined8 *)(puVar2 + 6) = uVar19;
  *(undefined8 *)(puVar2 + 8) = uVar21;
  uVar23 = *(undefined8 *)(puVar1 + 0x12);
  uVar19 = *(undefined8 *)(puVar1 + 0xe);
  uVar21 = *(undefined8 *)(puVar1 + 0x10);
  *(undefined1 *)(puVar2 + 0x14) = *(undefined1 *)(puVar1 + 0x14);
  *(undefined8 *)(puVar2 + 0x10) = uVar21;
  *(undefined8 *)(puVar2 + 0x12) = uVar23;
  *(undefined8 *)(puVar2 + 0xe) = uVar19;
  uVar19 = *(undefined8 *)(puVar1 + 0x15);
  uVar21 = *(undefined8 *)(puVar1 + 0x17);
  *(undefined8 *)(puVar2 + 0x19) = *(undefined8 *)(puVar1 + 0x19);
  *(undefined8 *)(puVar2 + 0x17) = uVar21;
  *(undefined8 *)(puVar2 + 0x15) = uVar19;
  uVar25 = puVar1[0x1b];
  if (1 < uVar25) {
    uVar25 = 0;
  }
  puVar2[0x1b] = uVar25;
  *(undefined1 *)(puVar2 + 0x1c) = *(undefined1 *)(puVar1 + 0x1c);
  *(undefined1 *)((long)puVar2 + 0x71) = *(undefined1 *)((long)puVar1 + 0x71);
  *(undefined2 *)((long)puVar2 + 0x72) = *(undefined2 *)((long)puVar1 + 0x72);
  uVar19 = *(undefined8 *)(puVar1 + 0x20);
  *(undefined8 *)(puVar2 + 0x1e) = *(undefined8 *)(puVar1 + 0x1e);
  *(undefined8 *)(puVar2 + 0x20) = uVar19;
  uVar23 = *(undefined8 *)(puVar1 + 0x26);
  uVar19 = *(undefined8 *)(puVar1 + 0x22);
  uVar21 = *(undefined8 *)(puVar1 + 0x24);
  *(undefined8 *)((long)puVar2 + 0x9d) = *(undefined8 *)((long)puVar1 + 0x9d);
  *(undefined8 *)(puVar2 + 0x24) = uVar21;
  *(undefined8 *)(puVar2 + 0x26) = uVar23;
  *(undefined8 *)(puVar2 + 0x22) = uVar19;
  memcpy((void *)((long)puVar2 + 0xa5),(void *)((long)puVar1 + 0xa5),0x800);
  uVar7 = *(undefined1 *)((long)puVar1 + 0x8a5);
  *(undefined2 *)((long)puVar2 + 0x8a6) = 0;
  *(undefined1 *)((long)puVar2 + 0x8a5) = uVar7;
  FUN_027c1b80(puVar2);
  if ((((uVar16 & 1) != 0) && (*(long *)(lVar24 + 0x28) != 0)) &&
     (puVar14 = *(undefined8 **)(*(long *)(lVar24 + 0x28) + 0x18), puVar14 != (undefined8 *)0x0)) {
    (**(code **)*puVar14)();
  }
  if ((((uVar8 & 1) == 0) && (*(long *)(lVar11 + 0x28) != 0)) &&
     (puVar14 = *(undefined8 **)(*(long *)(lVar11 + 0x28) + 8), puVar14 != (undefined8 *)0x0)) {
    (**(code **)*puVar14)();
  }
LAB_02120dcc:
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

