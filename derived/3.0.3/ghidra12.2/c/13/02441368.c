
void FUN_02441368(long param_1)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  uint uVar5;
  long *plVar6;
  undefined *local_40;
  undefined8 local_38;
  
  if ((*(uint *)(param_1 + 0x17d4) & 0x60) == 0x20) {
    uVar5 = (uint)*(byte *)(param_1 + 0x1ee8);
    lVar1 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)uVar5 * 0x740;
    if (7 < uVar5) {
      lVar1 = *(long *)PTR_DAT_04bb4f78 + 0x20;
    }
    *(undefined4 *)(lVar1 + 0x424) = 2;
    local_40._0_4_ = FUN_01392d64(lVar1 + 0x4c8);
    *(int *)(lVar1 + 0x420) = (int)local_40;
    *(int *)(lVar1 + 0x4c0) = *(int *)(lVar1 + 0x4c0) + 1;
    if ((int)local_40 != 3) {
      if ((int)local_40 == 1) {
        puVar3 = *(undefined8 **)(param_1 + 0x60);
        if (puVar3 == (undefined8 *)0x0) {
          if (((DAT_052461c0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_052461c0), iVar2 != 0))
          {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
            puVar3 = &DAT_05240280;
          }
          else {
            puVar3 = &DAT_05240280;
          }
        }
        local_40 = PTR_DAT_04bb2020 + 0x10;
        local_38 = "PlayerSharePlayWarpSceneIn";
        FUN_017029bc(puVar3,&local_40,6,0,0);
        uVar5 = *(uint *)(param_1 + 0x17d4);
      }
      else {
        uVar4 = FUN_02546f34((byte *)(param_1 + 0x1ee8),*(undefined4 *)(param_1 + 0x230));
        if ((uVar4 & 1) == 0) {
          local_38 = (char *)((ulong)local_38._4_4_ << 0x20);
          local_40 = (undefined *)CONCAT35(local_40._5_3_,0x100000006);
          FUN_02374e74(param_1,&local_40);
        }
        uVar5 = *(uint *)(param_1 + 0x17d4) & 0xffffff9f;
      }
      *(uint *)(param_1 + 0x17d4) = uVar5 | 0x40;
    }
  }
  else {
    puVar3 = *(undefined8 **)(param_1 + 0x60);
    if (puVar3 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar2 = __cxa_guard_acquire(&DAT_052461c0);
        puVar3 = &DAT_05240280;
        if (iVar2 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar3 = &DAT_05240280;
      }
    }
    local_40 = (undefined *)CONCAT44(local_40._4_4_,0x34);
    if ((puVar3[0x227] != 0) && (uVar4 = FUN_03850890(puVar3[0x227],0x34,0,0), (uVar4 & 1) != 0)) {
      plVar6 = *(long **)(param_1 + 0x60);
      if (plVar6 == (long *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar2 = __cxa_guard_acquire(&DAT_052461c0);
          plVar6 = &DAT_05240280;
          if (iVar2 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          plVar6 = &DAT_05240280;
        }
      }
      (**(code **)(*plVar6 + 0x4e8))(plVar6,1);
    }
    puVar3 = *(undefined8 **)(param_1 + 0x60);
    if (puVar3 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar2 = __cxa_guard_acquire(&DAT_052461c0);
        puVar3 = &DAT_05240280;
        if (iVar2 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar3 = &DAT_05240280;
      }
    }
    uVar4 = FUN_0170a6d0(puVar3,0);
    if (((uVar4 & 1) != 0) || (0x5a < *(uint *)(param_1 + 0x1c04))) {
      if (*(int *)(param_1 + 0x178) != 0) {
        *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 8;
        FUN_023164ec(param_1,6);
        return;
      }
      local_38 = (char *)((ulong)local_38._5_3_ << 0x28);
      local_40 = (undefined *)0x1000000000006;
      FUN_02374564(param_1,&local_40);
    }
  }
  return;
}

