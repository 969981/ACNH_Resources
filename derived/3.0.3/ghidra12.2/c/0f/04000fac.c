
void FUN_04000fac(long *param_1)

{
  size_t __n;
  void *__dest;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  long local_ed;
  long local_e5;
  long local_dd;
  long local_d5;
  long local_cd;
  uint local_c4;
  uint uStack_c0;
  uint local_bc;
  uint uStack_b8;
  uint local_b4;
  Sha1Impl aSStack_b0 [104];
  undefined4 local_48;
  long local_28;
  
  if (*(int *)((long)param_1 + 0xc) == 1) {
    cVar1 = *(char *)((long)param_1 + 0xed);
    if ((*(char *)((long)param_1 + 0xec) == '\0') && (cVar1 == '\0')) {
      return;
    }
    if ((*(uint *)(param_1 + 0x43) & *(uint *)(param_1 + 0x1d)) == 0) {
      *(undefined2 *)((long)param_1 + 0xec) = 0;
      return;
    }
    if (*(char *)((long)param_1 + 0xec) != '\0') {
      if (*(char *)((long)param_1 + 0xef) != '\0') {
        local_28 = 0;
        if (((ulong)param_1[4] < 0x37) ||
           (uVar9 = (**(code **)(*(long *)param_1[2] + 0x20))
                              ((long *)param_1[2],param_1[3] + 0x36,param_1[4] - 0x36,&local_28),
           (uVar9 & 1) == 0)) {
          param_1[5] = 0;
                    /* WARNING: Does not return */
          pcVar7 = (code *)UndefinedInstructionException(0x8002,0x40012fc);
          (*pcVar7)();
        }
        puVar11 = (undefined8 *)param_1[3];
        *puVar11 = CONCAT26(s_HANASTATEv001_041ed4b4._6_2_,s_HANASTATEv001_041ed4b4._0_6_);
        *(ulong *)((long)puVar11 + 6) =
             CONCAT62(s_HANASTATEv001_041ed4b4._8_6_,s_HANASTATEv001_041ed4b4._6_2_);
        local_48 = 0;
        lVar10 = param_1[3];
        nn::crypto::detail::Sha1Impl::Initialize();
        nn::crypto::detail::Sha1Impl::Update(aSStack_b0,lVar10 + 0x36);
        nn::crypto::detail::Sha1Impl::GetHash(aSStack_b0,(ulong)&local_c4);
        uVar2 = (local_c4 & 0xff00ff00) >> 8 | (local_c4 & 0xff00ff) << 8;
        uVar3 = (uStack_c0 & 0xff00ff00) >> 8 | (uStack_c0 & 0xff00ff) << 8;
        uVar4 = (local_bc & 0xff00ff00) >> 8 | (local_bc & 0xff00ff) << 8;
        uVar5 = (uStack_b8 & 0xff00ff00) >> 8 | (uStack_b8 & 0xff00ff) << 8;
        uVar6 = (local_b4 & 0xff00ff00) >> 8 | (local_b4 & 0xff00ff) << 8;
        FUN_04002a40(&local_ed,0x29,"%08x%08x%08x%08x%08x",uVar2 >> 0x10 | uVar2 << 0x10,
                     uVar3 >> 0x10 | uVar3 << 0x10,uVar4 >> 0x10 | uVar4 << 0x10,
                     uVar5 >> 0x10 | uVar5 << 0x10,uVar6 >> 0x10 | uVar6 << 0x10);
        nn::crypto::detail::Sha1Impl::~Sha1Impl(aSStack_b0);
        return;
      }
      local_28 = 0;
      __dest = (void *)param_1[0x3e];
      uVar9 = param_1[0x3f];
      if (((ulong)param_1[4] < 0x37) ||
         (uVar8 = (**(code **)(*(long *)param_1[2] + 0x20))
                            ((long *)param_1[2],param_1[3] + 0x36,param_1[4] - 0x36,&local_28),
         (uVar8 & 1) == 0)) {
        param_1[5] = 0;
        goto LAB_040012c4;
      }
      puVar11 = (undefined8 *)param_1[3];
      *puVar11 = CONCAT26(s_HANASTATEv001_041ed4b4._6_2_,s_HANASTATEv001_041ed4b4._0_6_);
      *(ulong *)((long)puVar11 + 6) =
           CONCAT62(s_HANASTATEv001_041ed4b4._8_6_,s_HANASTATEv001_041ed4b4._6_2_);
      local_48 = 0;
      lVar10 = param_1[3];
      nn::crypto::detail::Sha1Impl::Initialize();
      nn::crypto::detail::Sha1Impl::Update(aSStack_b0,lVar10 + 0x36);
      nn::crypto::detail::Sha1Impl::GetHash(aSStack_b0,(ulong)&local_c4);
      uVar2 = (local_c4 & 0xff00ff00) >> 8 | (local_c4 & 0xff00ff) << 8;
      uVar3 = (uStack_c0 & 0xff00ff00) >> 8 | (uStack_c0 & 0xff00ff) << 8;
      uVar4 = (local_bc & 0xff00ff00) >> 8 | (local_bc & 0xff00ff) << 8;
      uVar5 = (uStack_b8 & 0xff00ff00) >> 8 | (uStack_b8 & 0xff00ff) << 8;
      uVar6 = (local_b4 & 0xff00ff00) >> 8 | (local_b4 & 0xff00ff) << 8;
      FUN_04002a40(&local_ed,0x29,"%08x%08x%08x%08x%08x",uVar2 >> 0x10 | uVar2 << 0x10,
                   uVar3 >> 0x10 | uVar3 << 0x10,uVar4 >> 0x10 | uVar4 << 0x10,
                   uVar5 >> 0x10 | uVar5 << 0x10,uVar6 >> 0x10 | uVar6 << 0x10);
      nn::crypto::detail::Sha1Impl::~Sha1Impl(aSStack_b0);
      lVar10 = param_1[3];
      *(long *)(lVar10 + 0x2e) = local_cd;
      *(long *)(lVar10 + 0x16) = local_e5;
      *(long *)(lVar10 + 0x1e) = local_dd;
      *(long *)(lVar10 + 0x26) = local_d5;
      *(long *)(lVar10 + 0xe) = local_ed;
      __n = local_28 + 0x36;
      param_1[5] = __n;
      if (uVar9 < __n) goto LAB_040012c4;
      memcpy(__dest,(void *)param_1[3],__n);
      if ((code *)param_1[0x40] != (code *)0x0) {
        (*(code *)param_1[0x40])(param_1[5],param_1[0x42]);
      }
      cVar1 = *(char *)((long)param_1 + 0xed);
      *(undefined1 *)((long)param_1 + 0xec) = 0;
    }
    if (cVar1 != '\0') {
      uVar9 = param_1[0x3f];
      *(undefined4 *)(param_1 + 0x1d) = 0;
      if ((ulong)param_1[4] < uVar9) {
LAB_040012c4:
                    /* WARNING: Does not return */
        pcVar7 = (code *)UndefinedInstructionException(0x8002,0x40012c4);
        (*pcVar7)();
      }
      memcpy((void *)param_1[3],(void *)param_1[0x3e],uVar9);
      param_1[5] = uVar9;
      if ((uVar9 < 0x37) ||
         (plVar12 = (long *)param_1[3],
         *plVar12 != 0x54415453414e4148 || *(long *)((long)plVar12 + 6) != 0x31303076455441))
      goto LAB_040012c4;
      local_48 = 0;
      nn::crypto::detail::Sha1Impl::Initialize();
      nn::crypto::detail::Sha1Impl::Update(aSStack_b0,(long)plVar12 + 0x36);
      nn::crypto::detail::Sha1Impl::GetHash(aSStack_b0,(ulong)&local_c4);
      uVar2 = (local_c4 & 0xff00ff00) >> 8 | (local_c4 & 0xff00ff) << 8;
      uVar3 = (uStack_c0 & 0xff00ff00) >> 8 | (uStack_c0 & 0xff00ff) << 8;
      uVar4 = (local_bc & 0xff00ff00) >> 8 | (local_bc & 0xff00ff) << 8;
      uVar5 = (uStack_b8 & 0xff00ff00) >> 8 | (uStack_b8 & 0xff00ff) << 8;
      uVar6 = (local_b4 & 0xff00ff00) >> 8 | (local_b4 & 0xff00ff) << 8;
      FUN_04002a40(&local_ed,0x29,"%08x%08x%08x%08x%08x",uVar2 >> 0x10 | uVar2 << 0x10,
                   uVar3 >> 0x10 | uVar3 << 0x10,uVar4 >> 0x10 | uVar4 << 0x10,
                   uVar5 >> 0x10 | uVar5 << 0x10,uVar6 >> 0x10 | uVar6 << 0x10);
      nn::crypto::detail::Sha1Impl::~Sha1Impl(aSStack_b0);
      if (((((local_ed != *(long *)((long)plVar12 + 0xe) ||
             local_e5 != *(long *)((long)plVar12 + 0x16)) ||
            local_dd != *(long *)((long)plVar12 + 0x1e)) ||
           local_d5 != *(long *)((long)plVar12 + 0x26)) ||
           local_cd != *(long *)((long)plVar12 + 0x2e)) ||
         (uVar9 = (**(code **)(*param_1 + 0x30))(param_1), (uVar9 & 1) == 0)) goto LAB_040012c4;
      if ((code *)param_1[0x41] != (code *)0x0) {
        (*(code *)param_1[0x41])(param_1[0x42]);
      }
      *(undefined1 *)((long)param_1 + 0xed) = 0;
    }
    if (((*(char *)((long)param_1 + 0xee) != '\0') && (*(int *)((long)param_1 + 0xc) == 1)) &&
       (*(char *)((long)param_1 + 0x82) == '\0')) {
      *(undefined1 *)((long)param_1 + 0x82) = 1;
      (**(code **)(*param_1 + 0x10))(param_1);
    }
  }
  return;
}

