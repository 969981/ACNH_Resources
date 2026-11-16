
undefined8 FUN_02538e78(byte *param_1,long *param_2,uint param_3,ulong param_4,uint param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  undefined2 uVar8;
  undefined4 *puVar9;
  byte bVar10;
  undefined8 *puVar11;
  undefined1 uVar12;
  long lVar13;
  long lVar14;
  long unaff_x25;
  ulong uVar15;
  undefined2 local_c8;
  undefined1 local_c6;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined2 local_b4;
  undefined1 uStack_b2;
  uint uStack_b1;
  undefined1 uStack_ad;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined7 uStack_90;
  undefined1 local_89;
  undefined7 uStack_88;
  long *local_80;
  char local_78;
  char local_77;
  char local_76;
  undefined4 local_6c;
  uint local_68;
  undefined4 local_64;
  
  puVar1 = PTR_DAT_04bb3238;
  puVar9 = (undefined4 *)PTR_DAT_04bb3238;
  if ((ulong)*param_1 < 8) {
    if (DAT_054f5738 != 0) {
      puVar9 = (undefined4 *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
    }
  }
  local_6c = *puVar9;
  local_68 = param_3;
  FUN_0071c8d0(&local_80,&local_6c,PTR_DAT_04bb3238,0);
  plVar3 = local_80;
  if (local_80 != (long *)0x0) {
    if (((*PTR_DAT_04bb3778 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3778);
    }
    uVar7 = (**(code **)(*plVar3 + 0x20))(plVar3,PTR_DAT_04bb3770);
    if ((uVar7 & 1) == 0) {
      local_77 = '\0';
    }
  }
  if (local_80 == (long *)0x0) {
    return 0;
  }
  if (local_78 == '\0') {
    return 0;
  }
  if (local_77 == '\0') {
    return 0;
  }
  if (local_76 == '\0') {
    return 0;
  }
  if (((param_4 & 1) != 0) && ((param_5 & 1) != 0)) {
    bVar10 = *param_1;
    local_b8 = *(undefined4 *)puVar1;
    uStack_ad = 0;
    uStack_b1 = 0;
    if (7 < bVar10) {
      bVar10 = 0xff;
    }
    local_c0 = (undefined *)CONCAT71(local_c0._1_7_,bVar10);
    local_c0 = (undefined *)CONCAT44(1,(undefined4)local_c0);
    local_b4 = 1;
    uStack_b2 = 1;
    uVar7 = FUN_02530cec(&local_c0);
    if ((uVar7 & 1) == 0) {
      return 0;
    }
  }
  puVar1 = PTR_DAT_04bb43c0;
  lVar13 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(param_2);
  lVar14 = *(long *)puVar1;
  if (lVar14 == 0) {
LAB_0253908c:
    if (local_68 != 9) {
      if (local_80[0x53] == 0) {
        puVar9 = (undefined4 *)PTR_DAT_04bb37e0;
      }
      else {
        lVar13 = *(long *)(local_80[0x53] + 0xbde8);
        puVar9 = (undefined4 *)(lVar13 + ((ulong)*(uint *)(lVar13 + 0x10) & 1) * 0x20 + 0x14);
      }
      uVar4 = FUN_0277d6c4(puVar9);
      unaff_x25 = *(long *)puVar1;
      if (unaff_x25 != 0) {
        lVar13 = *(long *)(lVar14 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
        if ((uVar4 < *(uint *)(lVar13 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
          local_c0 = PTR_DAT_04bc0510 + 0x10;
          local_b8 = *puVar9;
          uStack_b1 = puVar9[1];
          uStack_ad = 0;
          uStack_ac = 0;
          local_b4 = (undefined2)uStack_b1;
          uStack_b2 = (undefined1)(uStack_b1 >> 0x10);
          uStack_b1 = uStack_b1 >> 0x18;
          uVar4 = FUN_0277d6c4(&local_b8);
          if (*(long *)puVar1 != 0) {
            lVar13 = *(long *)(unaff_x25 + 0x57e58);
            uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
            if ((uVar4 < *(uint *)(lVar13 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
              lVar13 = *(long *)PTR_DAT_04bc0428;
              uVar4 = FUN_0277d6c4(puVar9);
              uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
              if (uVar4 < *(uint *)(lVar13 + 0x1d8)) {
                lVar13 = *(long *)(lVar13 + 0x1e0);
                goto LAB_025391a0;
              }
            }
          }
          goto LAB_025391ac;
        }
      }
    }
  }
  else {
    lVar13 = *(long *)(lVar13 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
    if ((*(uint *)(lVar13 + 0x1d8) <= uVar4) ||
       (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_0253908c;
    uStack_ad = 0;
    uStack_ac = 0;
    local_b8 = (undefined4)*param_2;
    uStack_b1 = *(uint *)((long)param_2 + 4);
    local_c0 = PTR_DAT_04bc0510 + 0x10;
    local_b4 = (undefined2)uStack_b1;
    uStack_b2 = (undefined1)(uStack_b1 >> 0x10);
    uStack_b1 = uStack_b1 >> 0x18;
    uVar4 = FUN_0277d6c4(&local_b8);
    if (*(long *)puVar1 != 0) {
      lVar13 = *(long *)(lVar14 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
      if ((*(uint *)(lVar13 + 0x1d8) <= uVar4) ||
         (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_025391ac;
      lVar13 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4(param_2);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
      if (*(uint *)(lVar13 + 0x1d8) <= uVar4) goto LAB_025391ac;
      lVar13 = *(long *)(lVar13 + 0x1e0);
LAB_025391a0:
      lVar13 = *(long *)(lVar13 + (long)(int)uVar4 * 8);
      if (lVar13 != 0) {
        uStack_b1._1_3_ = (undefined3)lVar13;
        uStack_ad = (undefined1)((ulong)lVar13 >> 0x18);
        uStack_ac = (undefined4)((ulong)lVar13 >> 0x20);
      }
    }
LAB_025391ac:
    iVar5 = FUN_01ad78cc(&local_c0);
    if (iVar5 == 7) {
      local_68 = 4;
    }
  }
  uVar4 = local_68;
  uVar7 = *(ulong *)puVar1;
  if ((short)*param_2 == -2) {
    uVar15 = uVar7;
LAB_025391dc:
    local_c0 = (undefined *)CONCAT44(local_c0._4_4_,uVar4);
    unaff_x25 = *param_2;
    uVar12 = 1;
    uVar7 = (ulong)uVar4;
  }
  else {
    uVar6 = FUN_0277d6c4(param_2);
    uVar15 = *(ulong *)puVar1;
    if (uVar15 != 0) {
      lVar13 = *(long *)(uVar7 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar13 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) goto LAB_025391dc;
    }
    uVar12 = 0;
  }
  puVar2 = PTR_DAT_04bb37e0;
  lVar13 = *(long *)PTR_DAT_04bb37e0;
  uVar8 = 6;
  if ((param_4 & 1) == 0) {
    uVar8 = 4;
  }
  uVar4 = FUN_0277d6c4(param_2);
  if (*(long *)puVar1 != 0) {
    lVar14 = *(long *)(uVar15 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    if (uVar4 < *(uint *)(lVar14 + 0x1d8)) {
      if (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar4 * 8) != 0) {
        lVar13 = *param_2;
      }
    }
  }
  if (local_68 == 1) {
    if (DAT_054f5738 == 0) {
      if ((DAT_054f0960 & 1) == 0) {
        iVar5 = __cxa_guard_acquire(&DAT_054f0960);
        puVar11 = &DAT_054f0958;
        if (iVar5 != 0) {
          DAT_054f0958 = 0;
          __cxa_guard_release(&DAT_054f0960);
        }
      }
      else {
        puVar11 = &DAT_054f0958;
      }
    }
    else {
      puVar11 = (undefined8 *)(DAT_054f5738 + 0x204);
      if ((ulong)*param_1 < 8) {
        puVar11 = puVar11 + *param_1;
      }
    }
    local_c0 = (undefined *)CONCAT44(local_c0._4_4_,0x33);
    if ((*(uint *)((long)puVar11 + 4) >> 0x13 & 1) != 0) {
      lVar13 = *(long *)puVar2;
    }
  }
  local_80[0x330] = unaff_x25;
  *(undefined2 *)((long)local_80 + 0x19d4) = uVar8;
  *(undefined4 *)((long)local_80 + 0x19d6) = 0;
  *(char *)(local_80 + 0x331) = (char)uVar7;
  local_80[0x32c] = local_80[0x31c];
  local_80[0x32d] = local_80[0x31d];
  local_80[0x32e] = local_80[0x31e];
  local_80[0x32f] = local_80[799];
  local_80[0x338] = CONCAT71(uStack_88,local_89);
  *(undefined8 *)((long)local_80 + 0x19a1) = uStack_a8;
  *(ulong *)((long)local_80 + 0x1999) = CONCAT44(uStack_ac,CONCAT13(uStack_ad,uStack_b1._1_3_));
  *(ulong *)((long)local_80 + 0x1991) =
       CONCAT17((undefined1)uStack_b1,CONCAT16(uStack_b2,CONCAT24(local_b4,local_b8)));
  *(undefined **)((long)local_80 + 0x1989) = local_c0;
  *(ulong *)((long)local_80 + 0x19b9) = CONCAT17(local_89,uStack_90);
  *(undefined1 *)(local_80 + 0x339) = uVar12;
  *(long *)((long)local_80 + 0x19c9) = lVar13;
  *(undefined2 *)((long)local_80 + 0x19d1) = local_c8;
  *(undefined8 *)((long)local_80 + 0x19b1) = uStack_98;
  *(undefined8 *)((long)local_80 + 0x19a9) = local_a0;
  *(undefined1 *)((long)local_80 + 0x19d3) = local_c6;
  if ((*(uint *)(local_80 + 0x302) & 0xfffffff7) != 1) {
    *(ushort *)((long)local_80 + 0x19d4) = *(ushort *)((long)local_80 + 0x19d4) & 0xfffd;
  }
  local_64 = 0x26;
  local_80[0x318] = local_80[0x338];
  local_80[0x319] = local_80[0x339];
  local_80[0x31a] = local_80[0x33a];
  *(short *)(local_80 + 0x31b) = (short)local_80[0x33b];
  local_80[0x314] = local_80[0x334];
  local_80[0x315] = local_80[0x335];
  local_80[0x316] = local_80[0x336];
  local_80[0x317] = local_80[0x337];
  local_80[0x310] = local_80[0x330];
  local_80[0x311] = local_80[0x331];
  local_80[0x312] = local_80[0x332];
  local_80[0x313] = local_80[0x333];
  local_80[0x30c] = local_80[0x32c];
  local_80[0x30d] = local_80[0x32d];
  local_80[0x30e] = local_80[0x32e];
  local_80[0x30f] = local_80[0x32f];
  lVar13 = 0;
  if (local_80[0xe] != 0) {
    lVar13 = local_80[0xe] + 0x278;
  }
  FUN_03ebb160(lVar13,0x26);
  return 1;
}

