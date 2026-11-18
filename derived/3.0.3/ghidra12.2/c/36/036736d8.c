
byte FUN_036736d8(long param_1,ulong *param_2,ulong param_3)

{
  long lVar1;
  short *psVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 *puVar9;
  bool bVar10;
  byte bVar11;
  void *__dest;
  uint uVar12;
  undefined **local_2e8;
  undefined4 local_2e0;
  undefined1 local_2dc;
  undefined4 local_2d8;
  undefined *local_2d0;
  undefined1 local_2c8;
  undefined1 auStack_2c0 [64];
  undefined4 local_280;
  undefined1 *local_c0;
  undefined1 **local_b8;
  undefined1 *local_b0;
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  long local_90;
  undefined8 uStack_88;
  ulong local_79;
  ulong uStack_71;
  ulong local_69;
  ulong uStack_61;
  ulong local_59;
  
  iVar3 = *(int *)(param_1 + 0x388);
  if (iVar3 == 0x9f || iVar3 == 0x10) {
    uVar12 = *(uint *)(param_1 + 0x1f14);
LAB_03673900:
    bVar10 = true;
    if ((iVar3 != 0x10) && (iVar3 != 0x9f)) {
      bVar10 = *(char *)(param_1 + 0x390) != '\0';
    }
    bVar11 = 1;
    if ((uVar12 == 0) || (!bVar10)) goto LAB_03673a28;
    if (uVar12 + 0x28 <= param_3) {
      local_280 = 0;
      nn::crypto::detail::Sha1Impl::Initialize();
      nn::crypto::detail::Sha1Impl::Update(&local_2e8,(ulong)(param_2 + 5));
      nn::crypto::detail::Sha1Impl::GetHash(&local_2e8,(ulong)&local_a0);
      uVar4 = ((uint)local_a0 & 0xff00ff00) >> 8 | ((uint)local_a0 & 0xff00ff) << 8;
      uVar5 = (local_a0._4_4_ & 0xff00ff00) >> 8 | (local_a0._4_4_ & 0xff00ff) << 8;
      uVar6 = ((uint)local_98 & 0xff00ff00) >> 8 | ((uint)local_98 & 0xff00ff) << 8;
      uVar7 = (local_98._4_4_ & 0xff00ff00) >> 8 | (local_98._4_4_ & 0xff00ff) << 8;
      uVar8 = ((uint)local_90 & 0xff00ff00) >> 8 | ((uint)local_90 & 0xff00ff) << 8;
      FUN_04002a40(&local_79,0x29,"%08x%08x%08x%08x%08x",uVar4 >> 0x10 | uVar4 << 0x10,
                   uVar5 >> 0x10 | uVar5 << 0x10,uVar6 >> 0x10 | uVar6 << 0x10,
                   uVar7 >> 0x10 | uVar7 << 0x10,uVar8 >> 0x10 | uVar8 << 0x10);
      nn::crypto::detail::Sha1Impl::~Sha1Impl((Sha1Impl *)&local_2e8);
      bVar11 = (((local_79 ^ *param_2) == 0 && (uStack_71 ^ param_2[1]) == 0) &&
               ((local_69 ^ param_2[2]) == 0 && (uStack_61 ^ param_2[3]) == 0)) &&
               (local_59 ^ param_2[4]) == 0;
      if ((((local_79 ^ *param_2) == 0 && (uStack_71 ^ param_2[1]) == 0) &&
          ((local_69 ^ param_2[2]) == 0 && (uStack_61 ^ param_2[3]) == 0)) &&
          (local_59 ^ param_2[4]) == 0) {
        if ((*(int *)(param_1 + 0x388) == 0x9f) || (*(int *)(param_1 + 0x388) == 0x10)) {
          __dest = (void *)(param_1 + 0x1f18);
        }
        else {
          __dest = *(void **)(param_1 + 0x12f0);
        }
        memcpy(__dest,param_2 + 5,(ulong)uVar12);
      }
      goto LAB_03673a28;
    }
  }
  else {
    if (iVar3 != 6) {
      uVar12 = 0x8000;
      goto LAB_03673900;
    }
    if ((0x35 < param_3) &&
       (*param_2 == 0x41544c4544534446 && *(long *)((long)param_2 + 5) == 0x3130307641544c)) {
      local_280 = 0;
      nn::crypto::detail::Sha1Impl::Initialize();
      nn::crypto::detail::Sha1Impl::Update(&local_2e8,(long)param_2 + 0x35U);
      nn::crypto::detail::Sha1Impl::GetHash(&local_2e8,(ulong)&local_a0);
      uVar12 = ((uint)local_a0 & 0xff00ff00) >> 8 | ((uint)local_a0 & 0xff00ff) << 8;
      uVar4 = (local_a0._4_4_ & 0xff00ff00) >> 8 | (local_a0._4_4_ & 0xff00ff) << 8;
      uVar5 = ((uint)local_98 & 0xff00ff00) >> 8 | ((uint)local_98 & 0xff00ff) << 8;
      uVar6 = (local_98._4_4_ & 0xff00ff00) >> 8 | (local_98._4_4_ & 0xff00ff) << 8;
      uVar7 = ((uint)local_90 & 0xff00ff00) >> 8 | ((uint)local_90 & 0xff00ff) << 8;
      FUN_04002a40(&local_79,0x29,"%08x%08x%08x%08x%08x",uVar12 >> 0x10 | uVar12 << 0x10,
                   uVar4 >> 0x10 | uVar4 << 0x10,uVar5 >> 0x10 | uVar5 << 0x10,
                   uVar6 >> 0x10 | uVar6 << 0x10,uVar7 >> 0x10 | uVar7 << 0x10);
      nn::crypto::detail::Sha1Impl::~Sha1Impl((Sha1Impl *)&local_2e8);
      bVar11 = 0;
      if ((((local_79 == *(ulong *)((long)param_2 + 0xd) &&
            uStack_71 == *(ulong *)((long)param_2 + 0x15)) &&
           local_69 == *(ulong *)((long)param_2 + 0x1d)) &&
          uStack_61 == *(ulong *)((long)param_2 + 0x25)) &&
          local_59 == *(ulong *)((long)param_2 + 0x2d)) {
        local_2dc = 1;
        local_2e0 = 0;
        uStack_88 = 0;
        local_a0 = PTR_DAT_04bdf2e8 + 0x10;
        local_2d8 = 0xff00;
        local_2c8 = 0;
        local_c0 = auStack_2c0;
        local_2e8 = &PTR_LAB_04bb16c8;
        local_2d0 = PTR_DAT_04bdf308 + 0x10;
        local_b8 = &local_c0;
        local_b0 = local_c0;
        local_98 = (long)param_2 + 0x35U;
        local_90 = param_3 - 0x35;
        local_a8 = (undefined8 *)FUN_04000714(&local_a0,&local_2d0);
        psVar2 = *(short **)(param_1 + 0x20);
        bVar10 = (char)psVar2[1] == 'S';
        lVar1 = *(long *)(param_1 + 0x28);
        if (*psVar2 == 0x4446 && bVar10) {
          lVar1 = *(long *)(param_1 + 0x28) + -0x10;
        }
        bVar11 = FUN_03640670(param_1 + 0x13e40,&local_2e8,
                              psVar2 + (ulong)(*psVar2 == 0x4446 && bVar10) * 8,lVar1);
        puVar9 = local_a8;
        local_2e8 = &PTR_LAB_04bb16c8;
        if (local_a8 != (undefined8 *)0x0) {
          (**(code **)*local_a8)(local_a8);
          (**(code **)(local_2d0 + 0x18))(&local_2d0,puVar9);
        }
      }
      goto LAB_03673a28;
    }
  }
  bVar11 = 0;
LAB_03673a28:
  return bVar11 & 1;
}

