
void FUN_01b2da00(long *param_1,long param_2)

{
  undefined *puVar1;
  byte *pbVar2;
  long *plVar3;
  uint uVar4;
  undefined4 uVar5;
  byte bVar6;
  byte bVar7;
  ushort uVar8;
  bool bVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  undefined4 *puVar17;
  bool bVar18;
  uint uVar19;
  uint uVar20;
  undefined *puVar21;
  uint uVar22;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  undefined *local_b8;
  char *pcStack_b0;
  undefined8 local_a8;
  char *pcStack_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined1 local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined2 local_64;
  
  puVar21 = PTR_DAT_04bb2020;
  if (*(char *)(*param_1 + 0x29) == '\0') {
    return;
  }
  puVar17 = (undefined4 *)(param_2 + 0x40);
  local_a8 = (undefined *)CONCAT44(local_a8._4_4_,*puVar17);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_90 = "MailSendFlag_VersionUp";
  local_98 = puVar1;
  iVar10 = FUN_0274ce10(&local_a8,&local_98);
  if (9 < iVar10) {
    return;
  }
  local_90 = "MailSendFlag_VersionUp";
  local_98 = puVar1;
  FUN_0274d104(&local_a8,&local_98,10);
  FUN_01b46be0(&local_98);
  local_98 = (undefined *)((ulong)local_98 & 0xffffffff00000000);
  uVar11 = FUN_02b5e950(&local_98,*puVar17);
  bVar18 = false;
  if ((uVar11 & 1) != 0) {
    iVar10 = FUN_0266ca90((ulong)local_98 & 0xffffffff);
    local_a8 = (undefined *)CONCAT44(local_a8._4_4_,iVar10);
    bVar18 = 1 < iVar10;
  }
  lVar12 = *(long *)PTR_DAT_04bb46b0;
  if (lVar12 != 0) {
    puVar13 = *(undefined8 **)(lVar12 + 0x10);
    if ((*(byte *)(lVar12 + 0x453) & 1) == 0) {
      lVar12 = (**(code **)(*(long *)*puVar13 + 0x38))();
      if (lVar12 == 0) goto LAB_01b2e26c;
      lVar12 = lVar12 + 0x70;
    }
    else if (((puVar13 == (undefined8 *)0x0) || ((long *)puVar13[0x26] == (long *)0x0)) ||
            (lVar12 = (**(code **)(*(long *)puVar13[0x26] + 0x38))(), lVar12 == 0))
    goto LAB_01b2e26c;
    if (*(long **)(lVar12 + 0x140) == (long *)0x0) {
      uVar11 = 0;
    }
    else {
      puVar13 = (undefined8 *)**(long **)(lVar12 + 0x140);
      uVar11 = 0;
      if (puVar13 != (undefined8 *)0x0) {
        uVar11 = (**(code **)*puVar13)();
      }
    }
    puVar1 = PTR_DAT_04bc27f0;
    pbVar2 = (byte *)(*(long *)(lVar12 + 0x128) + *(long *)(lVar12 + 0x120));
    uVar14 = (ulong)*pbVar2;
    if ((uVar14 < 0x23) && (bVar6 = pbVar2[1], bVar6 <= (byte)PTR_DAT_04bc27f0[uVar14])) {
      local_c0 = *(uint *)(PTR_DAT_04bc2a20 + uVar14 * 4) >> (ulong)(bVar6 & 0x1f) & 1;
    }
    else {
      local_c0 = 0;
    }
    if ((((uVar11 & 1) != 0) && (*(long *)(lVar12 + 0x140) != 0)) &&
       (puVar13 = *(undefined8 **)(*(long *)(lVar12 + 0x140) + 8), puVar13 != (undefined8 *)0x0)) {
      (**(code **)*puVar13)();
    }
    if (*(long **)(lVar12 + 0x108d8) == (long *)0x0) {
      uVar11 = 0;
    }
    else {
      puVar13 = (undefined8 *)**(long **)(lVar12 + 0x108d8);
      uVar11 = 0;
      if (puVar13 != (undefined8 *)0x0) {
        uVar11 = (**(code **)*puVar13)();
      }
    }
    pbVar2 = (byte *)(*(long *)(lVar12 + 0x108c0) + *(long *)(lVar12 + 0x108b8));
    uVar14 = (ulong)*pbVar2;
    if ((uVar14 < 0x23) && (bVar6 = pbVar2[1], bVar6 <= (byte)puVar1[uVar14])) {
      local_c4 = *(uint *)(PTR_DAT_04bc2a20 + uVar14 * 4) >> (ulong)(bVar6 & 0x1f) & 1;
    }
    else {
      local_c4 = 0;
    }
    if ((((uVar11 & 1) != 0) && (*(long *)(lVar12 + 0x108d8) != 0)) &&
       (puVar13 = *(undefined8 **)(*(long *)(lVar12 + 0x108d8) + 8), puVar13 != (undefined8 *)0x0))
    {
      (**(code **)*puVar13)();
    }
    if (*(long **)(lVar12 + 0x21070) == (long *)0x0) {
      uVar11 = 0;
    }
    else {
      puVar13 = (undefined8 *)**(long **)(lVar12 + 0x21070);
      uVar11 = 0;
      if (puVar13 != (undefined8 *)0x0) {
        uVar11 = (**(code **)*puVar13)();
      }
    }
    pbVar2 = (byte *)(*(long *)(lVar12 + 0x21058) + *(long *)(lVar12 + 0x21050));
    uVar14 = (ulong)*pbVar2;
    if ((uVar14 < 0x23) && (bVar6 = pbVar2[1], bVar6 <= (byte)puVar1[uVar14])) {
      local_c8 = *(uint *)(PTR_DAT_04bc2a20 + uVar14 * 4) >> (ulong)(bVar6 & 0x1f) & 1;
    }
    else {
      local_c8 = 0;
    }
    if ((((uVar11 & 1) != 0) && (*(long *)(lVar12 + 0x21070) != 0)) &&
       (puVar13 = *(undefined8 **)(*(long *)(lVar12 + 0x21070) + 8), puVar13 != (undefined8 *)0x0))
    {
      (**(code **)*puVar13)();
    }
    if (*(long **)(lVar12 + 0x31808) == (long *)0x0) {
      uVar11 = 0;
    }
    else {
      puVar13 = (undefined8 *)**(long **)(lVar12 + 0x31808);
      uVar11 = 0;
      if (puVar13 != (undefined8 *)0x0) {
        uVar11 = (**(code **)*puVar13)();
      }
    }
    pbVar2 = (byte *)(*(long *)(lVar12 + 0x317f0) + *(long *)(lVar12 + 0x317e8));
    uVar14 = (ulong)*pbVar2;
    if ((uVar14 < 0x23) && (bVar6 = pbVar2[1], bVar6 <= (byte)puVar1[uVar14])) {
      local_cc = *(uint *)(PTR_DAT_04bc2a20 + uVar14 * 4) >> (ulong)(bVar6 & 0x1f) & 1;
    }
    else {
      local_cc = 0;
    }
    if ((((uVar11 & 1) != 0) && (*(long *)(lVar12 + 0x31808) != 0)) &&
       (puVar13 = *(undefined8 **)(*(long *)(lVar12 + 0x31808) + 8), puVar13 != (undefined8 *)0x0))
    {
      (**(code **)*puVar13)();
    }
    if (*(long **)(lVar12 + 0x41fa0) == (long *)0x0) {
      uVar11 = 0;
    }
    else {
      puVar13 = (undefined8 *)**(long **)(lVar12 + 0x41fa0);
      uVar11 = 0;
      if (puVar13 != (undefined8 *)0x0) {
        uVar11 = (**(code **)*puVar13)();
      }
    }
    pbVar2 = (byte *)(*(long *)(lVar12 + 0x41f88) + *(long *)(lVar12 + 0x41f80));
    uVar14 = (ulong)*pbVar2;
    if ((uVar14 < 0x23) && (bVar6 = pbVar2[1], bVar6 <= (byte)puVar1[uVar14])) {
      local_d0 = *(uint *)(PTR_DAT_04bc2a20 + uVar14 * 4) >> (ulong)(bVar6 & 0x1f) & 1;
    }
    else {
      local_d0 = 0;
    }
    if ((((uVar11 & 1) != 0) && (*(long *)(lVar12 + 0x41fa0) != 0)) &&
       (puVar13 = *(undefined8 **)(*(long *)(lVar12 + 0x41fa0) + 8), puVar13 != (undefined8 *)0x0))
    {
      (**(code **)*puVar13)();
    }
    if (*(long **)(lVar12 + 0x52738) == (long *)0x0) {
      uVar11 = 0;
    }
    else {
      puVar13 = (undefined8 *)**(long **)(lVar12 + 0x52738);
      uVar11 = 0;
      if (puVar13 != (undefined8 *)0x0) {
        uVar11 = (**(code **)*puVar13)();
      }
    }
    pbVar2 = (byte *)(*(long *)(lVar12 + 0x52720) + *(long *)(lVar12 + 0x52718));
    uVar14 = (ulong)*pbVar2;
    if ((uVar14 < 0x23) && (bVar6 = pbVar2[1], bVar6 <= (byte)puVar1[uVar14])) {
      uVar19 = *(uint *)(PTR_DAT_04bc2a20 + uVar14 * 4) >> (ulong)(bVar6 & 0x1f) & 1;
    }
    else {
      uVar19 = 0;
    }
    if ((((uVar11 & 1) != 0) && (*(long *)(lVar12 + 0x52738) != 0)) &&
       (puVar13 = *(undefined8 **)(*(long *)(lVar12 + 0x52738) + 8), puVar13 != (undefined8 *)0x0))
    {
      (**(code **)*puVar13)();
    }
    if (*(long **)(lVar12 + 0x62ed0) == (long *)0x0) {
      uVar11 = 0;
    }
    else {
      puVar13 = (undefined8 *)**(long **)(lVar12 + 0x62ed0);
      uVar11 = 0;
      if (puVar13 != (undefined8 *)0x0) {
        uVar11 = (**(code **)*puVar13)();
      }
    }
    pbVar2 = (byte *)(*(long *)(lVar12 + 0x62eb8) + *(long *)(lVar12 + 0x62eb0));
    uVar14 = (ulong)*pbVar2;
    if ((uVar14 < 0x23) && (bVar6 = pbVar2[1], bVar6 <= (byte)puVar1[uVar14])) {
      uVar4 = *(uint *)(PTR_DAT_04bc2a20 + uVar14 * 4) >> (ulong)(bVar6 & 0x1f) & 1;
    }
    else {
      uVar4 = 0;
    }
    if ((((uVar11 & 1) != 0) && (*(long *)(lVar12 + 0x62ed0) != 0)) &&
       (puVar13 = *(undefined8 **)(*(long *)(lVar12 + 0x62ed0) + 8), puVar13 != (undefined8 *)0x0))
    {
      (**(code **)*puVar13)();
    }
    if (*(long **)(lVar12 + 0x73668) == (long *)0x0) {
      uVar11 = 0;
    }
    else {
      puVar13 = (undefined8 *)**(long **)(lVar12 + 0x73668);
      uVar11 = 0;
      if (puVar13 != (undefined8 *)0x0) {
        uVar11 = (**(code **)*puVar13)();
      }
    }
    pbVar2 = (byte *)(*(long *)(lVar12 + 0x73650) + *(long *)(lVar12 + 0x73648));
    uVar14 = (ulong)*pbVar2;
    if ((uVar14 < 0x23) && (bVar6 = pbVar2[1], bVar6 <= (byte)puVar1[uVar14])) {
      uVar22 = *(uint *)(PTR_DAT_04bc2a20 + uVar14 * 4) >> (ulong)(bVar6 & 0x1f) & 1;
    }
    else {
      uVar22 = 0;
    }
    if ((((uVar11 & 1) != 0) && (*(long *)(lVar12 + 0x73668) != 0)) &&
       (puVar13 = *(undefined8 **)(*(long *)(lVar12 + 0x73668) + 8), puVar13 != (undefined8 *)0x0))
    {
      (**(code **)*puVar13)();
    }
    if (*(long **)(lVar12 + 0x83e00) == (long *)0x0) {
      uVar11 = 0;
    }
    else {
      puVar13 = (undefined8 *)**(long **)(lVar12 + 0x83e00);
      uVar11 = 0;
      if (puVar13 != (undefined8 *)0x0) {
        uVar11 = (**(code **)*puVar13)();
      }
    }
    pbVar2 = (byte *)(*(long *)(lVar12 + 0x83de8) + *(long *)(lVar12 + 0x83de0));
    uVar14 = (ulong)*pbVar2;
    if ((uVar14 < 0x23) && (bVar6 = pbVar2[1], bVar6 <= (byte)puVar1[uVar14])) {
      uVar20 = *(uint *)(PTR_DAT_04bc2a20 + uVar14 * 4) >> (ulong)(bVar6 & 0x1f) & 1;
    }
    else {
      uVar20 = 0;
    }
    if ((((uVar11 & 1) != 0) && (*(long *)(lVar12 + 0x83e00) != 0)) &&
       (puVar13 = *(undefined8 **)(*(long *)(lVar12 + 0x83e00) + 8), puVar13 != (undefined8 *)0x0))
    {
      (**(code **)*puVar13)();
    }
    puVar21 = PTR_DAT_04bb2020;
    if (*(long **)(lVar12 + 0x94598) == (long *)0x0) {
      uVar11 = 0;
    }
    else {
      puVar13 = (undefined8 *)**(long **)(lVar12 + 0x94598);
      uVar11 = 0;
      if (puVar13 != (undefined8 *)0x0) {
        uVar11 = (**(code **)*puVar13)();
      }
    }
    uVar20 = local_c4 + local_c0 + local_c8 + local_cc + local_d0 + uVar19 + uVar4 + uVar22 + uVar20
    ;
    pbVar2 = (byte *)(*(long *)(lVar12 + 0x94580) + *(long *)(lVar12 + 0x94578));
    uVar14 = (ulong)*pbVar2;
    if ((uVar14 < 0x23) && (bVar6 = pbVar2[1], bVar6 <= (byte)puVar1[uVar14])) {
      uVar20 = uVar20 + (*(uint *)(PTR_DAT_04bc2a20 + uVar14 * 4) >> (ulong)(bVar6 & 0x1f) & 1);
    }
    if ((((uVar11 & 1) != 0) && (*(long *)(lVar12 + 0x94598) != 0)) &&
       (puVar13 = *(undefined8 **)(*(long *)(lVar12 + 0x94598) + 8), puVar13 != (undefined8 *)0x0))
    {
      (**(code **)*puVar13)();
    }
    bVar9 = false;
    if (4 < uVar20) {
      bVar9 = bVar18;
    }
    if (bVar9) {
      local_90 = "PlayerHouseBuiltToday";
      local_98 = puVar21 + 0x10;
      iVar10 = FUN_0274ce10(puVar17,&local_98);
      if (iVar10 == 0) {
        pcStack_a0 = "TapDreamFirstTalk";
        local_a8 = puVar21 + 0x10;
        iVar10 = FUN_0274ce10(puVar17,&local_a8);
        if (iVar10 == 0) {
          local_b8 = puVar21 + 0x10;
          pcStack_b0 = "ReceiveTapBedLetter";
          iVar10 = FUN_0274ce10(puVar17,&local_b8);
          if (iVar10 == 0) {
            FUN_01b46be0(&local_98);
            uVar5 = *puVar17;
            if (((*PTR_DAT_04bb8aa8 & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb8aa8), iVar10 != 0)) {
              FUN_00dd5f80(PTR_DAT_04bb8aa0);
              __cxa_guard_release(PTR_DAT_04bb8aa8);
            }
            if (0 < (int)*(uint *)PTR_DAT_04bb8aa0) {
              uVar11 = 0;
              do {
                if (*(int *)(*(long *)(PTR_DAT_04bb8aa0 + 8) + uVar11 * 4) == 0x2e)
                goto LAB_01b2e1ec;
                uVar11 = uVar11 + 1;
              } while (*(uint *)PTR_DAT_04bb8aa0 != uVar11);
            }
            uVar11 = 0;
LAB_01b2e1ec:
            lVar12 = *param_1;
            uVar8 = *(ushort *)(lVar12 + 0x10);
            bVar6 = *(byte *)(lVar12 + 0x12);
            bVar7 = *(byte *)(lVar12 + 0x13);
            nn::time::IsValidDate((uint)uVar8,(uint)bVar6,(uint)bVar7);
            local_a8 = (undefined *)0x33a5;
            FUN_0277d4ac(&local_a8);
            local_78 = (undefined4)uVar11;
            uStack_74 = 0x1b;
            local_70 = 2;
            local_90 = (char *)CONCAT44((uint)bVar7 << 0x18 | (uint)bVar6 << 0x10 | (uint)uVar8,
                                        uVar5);
            local_64 = 0x100;
            local_6c = (undefined4)local_a8;
            uStack_68 = local_a8._4_4_;
            FUN_01b35b30(&local_98);
            local_a8 = puVar21 + 0x10;
            pcStack_a0 = "ReceiveTapBedLetter";
            FUN_0274d104(puVar17,&local_a8,1);
          }
        }
      }
    }
  }
LAB_01b2e26c:
  local_98 = (undefined *)((ulong)local_98 & 0xffffffff00000000);
  uVar11 = FUN_02b5e950(&local_98,*puVar17);
  if ((uVar11 & 1) == 0) {
    bVar18 = true;
  }
  else {
    iVar10 = FUN_0266ca90((ulong)local_98 & 0xffffffff);
    local_a8 = (undefined *)CONCAT44(local_a8._4_4_,iVar10);
    bVar18 = 1 < iVar10;
  }
  local_98 = puVar21 + 0x10;
  local_90 = "PlayerHouseBuiltToday";
  iVar10 = FUN_0274ce10(puVar17,&local_98);
  if ((!bVar18) && (iVar10 == 0)) {
    local_a8 = puVar21 + 0x10;
    pcStack_a0 = "RcoPaid1stCharge";
    iVar10 = FUN_0274ce10(puVar17,&local_a8);
  }
  if (iVar10 != 0) {
    FUN_01b46be0(&local_98);
    uVar5 = *puVar17;
    if (((*PTR_DAT_04bb8aa8 & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(PTR_DAT_04bb8aa8), iVar10 != 0)) {
      FUN_00dd5f80(PTR_DAT_04bb8aa0);
      __cxa_guard_release(PTR_DAT_04bb8aa8);
    }
    if (0 < (int)*(uint *)PTR_DAT_04bb8aa0) {
      uVar11 = 0;
      do {
        if (*(int *)(*(long *)(PTR_DAT_04bb8aa0 + 8) + uVar11 * 4) == 0x19) goto LAB_01b2e330;
        uVar11 = uVar11 + 1;
      } while (*(uint *)PTR_DAT_04bb8aa0 != uVar11);
    }
    uVar11 = 0;
LAB_01b2e330:
    lVar12 = *param_1;
    uVar8 = *(ushort *)(lVar12 + 0x10);
    bVar6 = *(byte *)(lVar12 + 0x12);
    bVar7 = *(byte *)(lVar12 + 0x13);
    nn::time::IsValidDate((uint)uVar8,(uint)bVar6,(uint)bVar7);
    local_90 = (char *)CONCAT44((uint)bVar7 << 0x18 | (uint)bVar6 << 0x10 | (uint)uVar8,uVar5);
    local_78 = (undefined4)uVar11;
    uStack_74 = 8;
    local_70 = 0x15;
    local_64 = 0;
    local_6c = *(undefined4 *)PTR_DAT_04bb37e0;
    uStack_68 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
    lVar12 = (**(code **)(local_98 + 0x20))(&local_98,*(undefined8 *)PTR_DAT_04bc0580);
    if (lVar12 != 0) {
      plVar15 = *(long **)PTR_DAT_04bb4fa8;
      lVar16 = *plVar15;
      plVar3 = (long *)(*(int *)((long)plVar15 + 0x14) + lVar12);
      *plVar15 = (long)plVar3;
      *plVar3 = lVar16;
      plVar3[1] = (long)plVar15;
      if (lVar16 != 0) {
        *(long **)(lVar16 + 8) = plVar3;
      }
      *(int *)(plVar15 + 2) = (int)plVar15[2] + 1;
    }
  }
  return;
}

