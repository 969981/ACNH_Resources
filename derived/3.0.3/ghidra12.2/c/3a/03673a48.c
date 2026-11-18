
bool FUN_03673a48(long param_1,size_t *param_2,undefined8 *param_3,ulong param_4)

{
  size_t __n;
  long lVar1;
  short *psVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined *puVar9;
  bool bVar10;
  undefined8 *__src;
  ulong uVar11;
  void *__src_00;
  uint uVar12;
  undefined8 local_159;
  undefined8 local_151;
  undefined8 local_149;
  undefined8 local_141;
  undefined8 local_139;
  undefined8 local_130;
  uint local_128;
  uint local_124;
  uint local_120;
  undefined **local_118;
  long local_110;
  undefined *local_108;
  ulong uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  uint local_e4;
  uint uStack_e0;
  uint local_dc;
  uint local_d8;
  uint uStack_d4;
  Sha1Impl aSStack_d0 [104];
  undefined4 local_68;
  
  puVar9 = PTR_DAT_04bdf328;
  iVar3 = *(int *)(param_1 + 0x388);
  if (iVar3 == 0x9f || iVar3 == 0x10) {
    uVar12 = *(uint *)(param_1 + 0x1f14);
  }
  else {
    if (iVar3 == 6) {
      if (((*(char *)(param_1 + 0x13e48) != '\0') && (*(char *)(param_1 + 0x13e4b) != '\0')) &&
         (*(char *)(param_1 + 0x18610) != '\0')) {
        return false;
      }
      __src = (undefined8 *)
              (**(code **)(**(long **)PTR_DAT_04bdf328 + 0x10))
                        (*(long **)PTR_DAT_04bdf328,0x100000,0);
      if (__src == (undefined8 *)0x0) {
        return false;
      }
      local_108 = PTR_DAT_04bcaa58 + 0x10;
      local_f8 = 0xfffcb;
      uStack_f0 = 0;
      local_128 = 1;
      local_124 = CONCAT31(local_124._1_3_,1);
      local_120 = 0xff00;
      local_130 = &PTR_LAB_04bb1848;
      local_118 = &local_108;
      psVar2 = *(short **)(param_1 + 0x20);
      local_110 = 0;
      bVar10 = (char)psVar2[1] == 'S';
      lVar1 = *(long *)(param_1 + 0x28);
      if (*psVar2 == 0x4446 && bVar10) {
        lVar1 = *(long *)(param_1 + 0x28) + -0x10;
      }
      uStack_100 = (long)__src + 0x35U;
      uVar11 = FUN_03640670(param_1 + 0x13e40,&local_130,
                            psVar2 + (ulong)(*psVar2 == 0x4446 && bVar10) * 8,lVar1);
      lVar1 = local_110;
      DataMemoryBarrier(3,3);
      if ((uVar11 & 1) == 0) {
        (**(code **)(**(long **)puVar9 + 0x18))(*(long **)puVar9,__src);
        return false;
      }
      *__src = CONCAT35(s_FDSDELTAv001_04198cc2._6_3_,s_FDSDELTAv001_04198cc2._1_5_);
      *(ulong *)((long)__src + 5) =
           CONCAT53(s_FDSDELTAv001_04198cc2._9_5_,s_FDSDELTAv001_04198cc2._6_3_);
      local_68 = 0;
      nn::crypto::detail::Sha1Impl::Initialize();
      nn::crypto::detail::Sha1Impl::Update(aSStack_d0,(long)__src + 0x35U);
      nn::crypto::detail::Sha1Impl::GetHash(aSStack_d0,(ulong)&local_e4);
      uVar12 = (local_e4 & 0xff00ff00) >> 8 | (local_e4 & 0xff00ff) << 8;
      uVar4 = (uStack_e0 & 0xff00ff00) >> 8 | (uStack_e0 & 0xff00ff) << 8;
      uVar5 = (local_dc & 0xff00ff00) >> 8 | (local_dc & 0xff00ff) << 8;
      uVar6 = (local_d8 & 0xff00ff00) >> 8 | (local_d8 & 0xff00ff) << 8;
      uVar7 = (uStack_d4 & 0xff00ff00) >> 8 | (uStack_d4 & 0xff00ff) << 8;
      FUN_04002a40(&local_159,0x29,"%08x%08x%08x%08x%08x",uVar12 >> 0x10 | uVar12 << 0x10,
                   uVar4 >> 0x10 | uVar4 << 0x10,uVar5 >> 0x10 | uVar5 << 0x10,
                   uVar6 >> 0x10 | uVar6 << 0x10,uVar7 >> 0x10 | uVar7 << 0x10);
      nn::crypto::detail::Sha1Impl::~Sha1Impl(aSStack_d0);
      __n = lVar1 + 0x35;
      *(undefined8 *)((long)__src + 0x1d) = local_149;
      *(undefined8 *)((long)__src + 0x15) = local_151;
      *(undefined8 *)((long)__src + 0x25) = local_141;
      *(undefined8 *)((long)__src + 0x2d) = local_139;
      *(undefined8 *)((long)__src + 0xd) = local_159;
      if (param_4 < __n) {
        (**(code **)(**(long **)puVar9 + 0x18))(*(long **)puVar9,__src);
        return __n <= param_4;
      }
      memcpy(param_3,__src,__n);
      (**(code **)(**(long **)puVar9 + 0x18))(*(long **)puVar9,__src);
      *param_2 = __n;
      return __n <= param_4;
    }
    uVar12 = 0x8000;
  }
  bVar10 = true;
  if ((iVar3 != 0x10) && (iVar3 != 0x9f)) {
    bVar10 = *(char *)(param_1 + 0x390) != '\0';
  }
  if ((uVar12 != 0) && (bVar10)) {
    if (param_4 < uVar12 + 0x28) {
      return false;
    }
    if ((iVar3 == 0x9f) || (iVar3 == 0x10)) {
      __src_00 = (void *)(param_1 + 0x1f18);
    }
    else {
      __src_00 = *(void **)(param_1 + 0x12f0);
    }
    memcpy(param_3 + 5,__src_00,(ulong)uVar12);
    local_68 = 0;
    nn::crypto::detail::Sha1Impl::Initialize();
    nn::crypto::detail::Sha1Impl::Update(aSStack_d0,(ulong)(param_3 + 5));
    nn::crypto::detail::Sha1Impl::GetHash(aSStack_d0,(ulong)&local_130);
    uVar4 = ((uint)local_130 & 0xff00ff00) >> 8 | ((uint)local_130 & 0xff00ff) << 8;
    uVar5 = (local_130._4_4_ & 0xff00ff00) >> 8 | (local_130._4_4_ & 0xff00ff) << 8;
    uVar6 = (local_128 & 0xff00ff00) >> 8 | (local_128 & 0xff00ff) << 8;
    uVar7 = (local_124 & 0xff00ff00) >> 8 | (local_124 & 0xff00ff) << 8;
    uVar8 = (local_120 & 0xff00ff00) >> 8 | (local_120 & 0xff00ff) << 8;
    FUN_04002a40(&local_159,0x29,"%08x%08x%08x%08x%08x",uVar4 >> 0x10 | uVar4 << 0x10,
                 uVar5 >> 0x10 | uVar5 << 0x10,uVar6 >> 0x10 | uVar6 << 0x10,
                 uVar7 >> 0x10 | uVar7 << 0x10,uVar8 >> 0x10 | uVar8 << 0x10);
    nn::crypto::detail::Sha1Impl::~Sha1Impl(aSStack_d0);
    param_3[2] = local_149;
    param_3[3] = local_141;
    param_3[4] = local_139;
    *param_3 = local_159;
    param_3[1] = local_151;
    *param_2 = (ulong)(uVar12 + 0x28);
    return true;
  }
  *param_2 = 0;
  return true;
}

