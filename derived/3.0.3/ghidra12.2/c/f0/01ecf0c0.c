
bool FUN_01ecf0c0(long param_1)

{
  undefined *puVar1;
  int *piVar2;
  uint *puVar3;
  long lVar4;
  byte bVar5;
  undefined *puVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  int iVar16;
  long lVar17;
  undefined8 *puVar18;
  byte *pbVar19;
  long lVar20;
  ulong uVar21;
  long *plVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  int iVar26;
  int iVar27;
  uint local_77c;
  uint local_778;
  uint local_774;
  undefined4 local_73c;
  undefined4 uStack_738;
  int local_734;
  undefined4 uStack_730;
  undefined4 local_72c;
  undefined *local_728;
  undefined8 local_720;
  undefined4 local_714;
  undefined *local_710;
  undefined8 uStack_708;
  undefined1 *local_700;
  undefined8 uStack_6f8;
  undefined4 local_6f0;
  undefined1 auStack_6ec [128];
  byte local_66c [4];
  undefined8 local_668;
  undefined4 local_660;
  undefined4 local_65c;
  long local_658;
  
  lVar17 = *(long *)PTR_DAT_04bb46b0;
  if (lVar17 == 0) {
LAB_01ecf140:
    lVar17 = 0;
  }
  else {
    puVar18 = *(undefined8 **)(lVar17 + 0x10);
    if ((*(byte *)(lVar17 + 0x453) & 1) == 0) {
      lVar13 = (**(code **)(*(long *)*puVar18 + 0x38))();
      lVar17 = 0;
      if (lVar13 != 0) {
        lVar17 = lVar13 + 0x70;
      }
    }
    else {
      if ((puVar18 == (undefined8 *)0x0) || ((long *)puVar18[0x26] == (long *)0x0))
      goto LAB_01ecf140;
      lVar17 = (**(code **)(*(long *)puVar18[0x26] + 0x38))();
    }
  }
  lVar13 = *(long *)PTR_DAT_04bb39b0;
  pbVar19 = PTR_DAT_04bb32e0;
  if (lVar13 == 0) {
LAB_01ecf1a4:
    if (*pbVar19 < 8) goto LAB_01ecf21c;
LAB_01ecf1b0:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_01ecf214:
      pbVar19 = PTR_DAT_04bb5038;
      goto LAB_01ecf21c;
    }
    lVar13 = **(long **)PTR_DAT_04bb27d0;
    bVar5 = *(byte *)(lVar13 + 0x473);
    pbVar19 = PTR_DAT_04bb5038;
    if ((long)(char)bVar5 != 0xffffffffffffffff) {
      puVar3 = (uint *)(lVar13 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
      if (7 < bVar5) {
        puVar3 = (uint *)(lVar13 + 0x48);
      }
      if ((*puVar3 & 8) != 0) {
        pbVar19 = (byte *)(lVar13 + 0x471);
      }
    }
    local_66c[0] = *pbVar19;
    if (7 < local_66c[0]) goto LAB_01ecf214;
  }
  else {
    if (*(int *)(lVar13 + 0x15c) != 0) {
      pbVar19 = (byte *)(lVar13 + 0x158);
    }
    if (7 < *pbVar19) {
      if ((*(int *)(lVar13 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar19 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_01ecf1a4;
      }
      goto LAB_01ecf1b0;
    }
LAB_01ecf21c:
    local_66c[0] = *pbVar19;
    if (7 < local_66c[0]) {
      local_66c[0] = 0xff;
    }
  }
  lVar13 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_66c,1);
  puVar6 = PTR_DAT_04bb27c0;
  lVar20 = *(long *)PTR_DAT_04bb27c0;
  if (lVar20 == 0) {
    plVar22 = (long *)0x0;
    uVar21 = 0;
  }
  else {
    uVar10 = *(uint *)PTR_DAT_04bb3958;
    if ((((uVar10 == 0) ||
         (plVar22 = *(long **)(*(long *)(*(long *)(lVar20 + 0x1c0) + 8) +
                              ((ulong)(uVar10 >> 0x11) & 0x7ff8)), plVar22 == (long *)0x0)) ||
        ((*(uint *)(plVar22 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar22 + 0x46) != uVar10)) {
      plVar22 = (long *)0x0;
    }
    if ((*(int *)(lVar20 + 0x288) == 1) || (*(int *)(lVar20 + 0x288) == -1)) {
      plVar14 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar20 = *(long *)puVar6;
      iVar9 = (**(code **)(*plVar14 + 0x60))();
      if (iVar9 < 0x11) {
        uVar21 = 1;
        uVar10 = 1;
      }
      else {
        if (4 < *(uint *)(lVar20 + 0x5e8)) goto LAB_01ecf31c;
        uVar21 = 0x101000100 >> (((ulong)*(uint *)(lVar20 + 0x5e8) & 7) << 3);
        uVar10 = (uint)uVar21;
      }
    }
    else {
LAB_01ecf31c:
      uVar21 = 0;
      uVar10 = 0;
    }
    if (plVar22 != (long *)0x0) {
      bVar7 = (int)plVar22[0x2a] == 1;
      if (((*PTR_DAT_04bb3930 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb3930), iVar9 != 0)) {
        *(undefined **)PTR_DAT_04bb3928 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb3930);
      }
      uVar21 = (**(code **)(*plVar22 + 0x20))(plVar22,PTR_DAT_04bb3928);
      if ((uVar21 & 1) == 0) {
        uVar10 = 0;
      }
      uVar21 = (ulong)uVar10;
      goto joined_r0x01ecf368;
    }
  }
  bVar7 = false;
joined_r0x01ecf368:
  bVar8 = false;
  if ((((lVar17 != 0) && (bVar8 = false, lVar13 != 0)) && (bVar8 = false, plVar22 != (long *)0x0))
     && ((bVar7 && ((uVar21 & 0xff) != 0)))) {
    if ((*(long **)(lVar17 + 0xe7290) == (long *)0x0) ||
       (puVar18 = (undefined8 *)**(long **)(lVar17 + 0xe7290), puVar18 == (undefined8 *)0x0)) {
      local_774 = 0;
    }
    else {
      local_774 = (**(code **)*puVar18)();
    }
    lVar23 = *(long *)(lVar17 + 0xe7270);
    lVar20 = *(long *)(lVar17 + 0xe7278);
    piVar2 = (int *)(param_1 + 0xaf38);
    if ((*(long **)(lVar13 + 0x17bb0) == (long *)0x0) ||
       (puVar18 = (undefined8 *)**(long **)(lVar13 + 0x17bb0), puVar18 == (undefined8 *)0x0)) {
      local_778 = 0;
    }
    else {
      local_778 = (**(code **)*puVar18)();
    }
    lVar24 = *(long *)(lVar13 + 0x17b90);
    lVar4 = *(long *)(lVar13 + 0x17b98);
    if ((*(long **)(lVar17 + 0x1a0da0) == (long *)0x0) ||
       (puVar18 = (undefined8 *)**(long **)(lVar17 + 0x1a0da0), puVar18 == (undefined8 *)0x0)) {
      local_77c = 0;
    }
    else {
      local_77c = (**(code **)*puVar18)();
    }
    lVar25 = *(long *)(param_1 + 8);
    local_6f0 = 0x1f;
    puVar3 = (uint *)(plVar22 + 0xb0b);
    local_700 = auStack_6ec;
    uStack_6f8 = 0x1fffffffff;
    local_710 = PTR_DAT_04bb7f30 + 0x10;
    uStack_708 = 0x1f000003c1;
    local_668 = (undefined *)CONCAT44(local_668._4_4_,*(undefined4 *)(lVar25 + 0x230));
    FUN_021454d0(&local_710,&local_668,*puVar3 & 0xffff,*puVar3 >> 0x10);
    local_714 = 0;
    iVar9 = *piVar2;
    local_728 = PTR_DAT_04bb2010 + 0x10;
    local_720 = 0;
    lVar15 = FUN_0265c2a0(*(undefined4 *)(*(long *)(param_1 + 8) + 0x508));
    if (lVar15 == 0) {
      uVar11 = 0;
    }
    else {
      if ((*(long **)(lVar15 + 0x28) == (long *)0x0) ||
         (puVar18 = (undefined8 *)**(long **)(lVar15 + 0x28), puVar18 == (undefined8 *)0x0)) {
        uVar10 = 1;
      }
      else {
        uVar10 = (**(code **)*puVar18)();
        uVar10 = uVar10 ^ 1;
      }
      uVar11 = FUN_020fd7d8(*(long *)(lVar15 + 0x10) + *(long *)(lVar15 + 8));
      if ((((uVar10 & 1) == 0) && (*(long *)(lVar15 + 0x28) != 0)) &&
         (puVar18 = *(undefined8 **)(*(long *)(lVar15 + 0x28) + 8), puVar18 != (undefined8 *)0x0)) {
        (**(code **)*puVar18)();
      }
    }
    lVar20 = lVar20 + lVar23;
    lVar25 = lVar25 + 0x288;
    local_668 = (undefined *)(CONCAT44(local_668._4_4_,uVar11) & 0xffffffff000000ff);
    if ((uint)local_668 < 8) {
      iVar16 = *(int *)(&DAT_04058760 + (long)(int)(uint)local_668 * 4);
    }
    else {
      iVar16 = 1;
    }
    lVar4 = lVar4 + lVar24;
    local_734 = 0;
    FUN_0291e130(&local_668,&local_734,0);
    iVar27 = local_734;
    puVar6 = PTR_DAT_04bb43c0;
    if (local_734 != 0) {
      iVar26 = 0;
      puVar1 = PTR_DAT_04bc0510 + 0x10;
      do {
        if (iVar9 != iVar26) {
          FUN_0289b680(&local_73c,*(long *)(lVar17 + 0x1a0d88) + *(long *)(lVar17 + 0x1a0d80),
                       &local_734,iVar26);
          lVar24 = *(long *)puVar6;
          uVar10 = FUN_0277d6c4(&local_73c);
          lVar23 = *(long *)puVar6;
          if (lVar23 != 0) {
            lVar24 = *(long *)(lVar24 + 0x57e58);
            uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
            if ((uVar10 < *(uint *)(lVar24 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
              local_658 = 0;
              local_660 = local_73c;
              local_65c = uStack_738;
              local_668 = puVar1;
              uVar10 = FUN_0277d6c4(&local_660);
              if (*(long *)puVar6 != 0) {
                lVar23 = *(long *)(lVar23 + 0x57e58);
                uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
                if ((uVar10 < *(uint *)(lVar23 + 0x1d8)) &&
                   (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
                  lVar23 = *(long *)PTR_DAT_04bc0428;
                  uVar10 = FUN_0277d6c4(&local_73c);
                  uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
                  if (uVar10 < *(uint *)(lVar23 + 0x1d8)) {
                    lVar23 = *(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar10 * 8);
                    if (lVar23 != 0) {
                      local_658 = lVar23;
                    }
                  }
                }
              }
              iVar12 = FUN_01ae58b0(&local_668);
              if ((iVar12 != iVar16) &&
                 (uVar21 = FUN_01ecf980(&local_728,&local_714,lVar25,&local_734,&local_73c,puVar3,
                                        &local_710,lVar20,lVar4), (uVar21 & 1) != 0)) {
                *piVar2 = iVar26;
                *(undefined4 *)(param_1 + 0xaf3c) = local_73c;
                *(undefined4 *)(param_1 + 0xaf40) = uStack_738;
                *(undefined4 *)(param_1 + 0xaf64) = local_72c;
                *(ulong *)(param_1 + 0xaf5c) = CONCAT44(uStack_730,local_734);
              }
            }
          }
        }
        iVar26 = iVar26 + 1;
      } while (iVar27 != iVar26);
    }
    local_734 = 0;
    FUN_0291e130(&local_668,&local_734,1);
    iVar16 = local_734;
    if (local_734 != 0) {
      iVar27 = 0;
      do {
        if (iVar9 + -10 != iVar27) {
          FUN_0289beb0(&local_734,*(long *)(lVar17 + 0x1a0d88) + *(long *)(lVar17 + 0x1a0d80),
                       &local_668,iVar27);
          uVar21 = FUN_01ecf980(&local_728,&local_714,lVar25,&local_668,&local_734,puVar3,&local_710
                                ,lVar20,lVar4);
          if ((uVar21 & 1) != 0) {
            *piVar2 = iVar27 + 10;
            *(int *)(param_1 + 0xaf3c) = local_734;
            *(undefined4 *)(param_1 + 0xaf40) = uStack_730;
            *(undefined4 *)(param_1 + 0xaf64) = local_660;
            *(undefined **)(param_1 + 0xaf5c) = local_668;
          }
        }
        iVar27 = iVar27 + 1;
      } while (iVar16 != iVar27);
    }
    bVar8 = (int)local_720 != 0;
    if ((int)local_720 == 0) {
      if ((((local_77c & 1) != 0) && (*(long *)(lVar17 + 0x1a0da0) != 0)) &&
         (puVar18 = *(undefined8 **)(*(long *)(lVar17 + 0x1a0da0) + 8), puVar18 != (undefined8 *)0x0
         )) {
        (**(code **)*puVar18)();
      }
      if ((((local_778 & 1) != 0) && (*(long *)(lVar13 + 0x17bb0) != 0)) &&
         (puVar18 = *(undefined8 **)(*(long *)(lVar13 + 0x17bb0) + 8), puVar18 != (undefined8 *)0x0)
         ) {
        (**(code **)*puVar18)();
      }
      if ((((local_774 & 1) == 0) || (*(long *)(lVar17 + 0xe7290) == 0)) ||
         (puVar18 = *(undefined8 **)(*(long *)(lVar17 + 0xe7290) + 8), puVar18 == (undefined8 *)0x0)
         ) {
        return false;
      }
    }
    else {
      *(float *)(param_1 + 0x56ec) = (float)(int)local_720 * 5.0;
      *(float *)(param_1 + 0x56f4) = (float)local_720._4_4_ * 5.0;
      uVar11 = FUN_006f0400(*(float *)(param_1 + 0xaf5c) - (float)(int)local_720 * 5.0,
                            *(float *)(param_1 + 0xaf64) - (float)local_720._4_4_ * 5.0);
      *(undefined4 *)(param_1 + 0xaf50) = uVar11;
      if ((((local_77c & 1) != 0) && (*(long *)(lVar17 + 0x1a0da0) != 0)) &&
         (puVar18 = *(undefined8 **)(*(long *)(lVar17 + 0x1a0da0) + 8), puVar18 != (undefined8 *)0x0
         )) {
        (**(code **)*puVar18)();
      }
      if ((((local_778 & 1) != 0) && (*(long *)(lVar13 + 0x17bb0) != 0)) &&
         (puVar18 = *(undefined8 **)(*(long *)(lVar13 + 0x17bb0) + 8), puVar18 != (undefined8 *)0x0)
         ) {
        (**(code **)*puVar18)();
      }
      if ((((local_774 & 1) == 0) || (*(long *)(lVar17 + 0xe7290) == 0)) ||
         (puVar18 = *(undefined8 **)(*(long *)(lVar17 + 0xe7290) + 8), puVar18 == (undefined8 *)0x0)
         ) {
        return true;
      }
    }
    (**(code **)*puVar18)();
  }
  return bVar8;
}

