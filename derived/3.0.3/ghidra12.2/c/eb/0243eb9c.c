
void FUN_0243eb9c(long param_1)

{
  long lVar1;
  byte *pbVar2;
  long lVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined *local_40;
  undefined8 local_38;
  
  pbVar2 = (byte *)(param_1 + 0x1ee8);
  if ((*(long *)PTR_DAT_04bb4718 != 0) && ((ulong)*pbVar2 < 8)) {
    lVar1 = *(long *)PTR_DAT_04bb4718 + 0xf04;
    *(undefined4 *)(lVar1 + (ulong)*pbVar2 * 8) = 0;
    bVar4 = *pbVar2;
    bVar5 = 7 < bVar4;
    if (bVar5) {
      bVar4 = 0xff;
    }
    lVar3 = lVar1 + ((long)(char)bVar4 & 0xffffffffU) * 8;
    if (bVar5) {
      lVar3 = lVar1;
    }
    *(undefined4 *)(lVar3 + 4) = 0;
  }
  if ((*(uint *)(param_1 + 0x17d4) & 0x60) == 0x20) {
    lVar1 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)*pbVar2 * 0x740;
    if (7 < *pbVar2) {
      lVar1 = *(long *)PTR_DAT_04bb4f78 + 0x20;
    }
    *(undefined4 *)(lVar1 + 0x424) = 2;
    local_40._0_4_ = FUN_01392d64(lVar1 + 0x4c8);
    *(int *)(lVar1 + 0x420) = (int)local_40;
    *(int *)(lVar1 + 0x4c0) = *(int *)(lVar1 + 0x4c0) + 1;
    if ((int)local_40 != 3) {
      if ((int)local_40 == 1) {
        if ((*(long *)(param_1 + 0x70) == 0) || (*(int *)(*(long *)(param_1 + 0x70) + 0x288) != 9))
        {
          plVar8 = *(long **)(param_1 + 0x60);
          if (plVar8 == (long *)0x0) {
            if ((DAT_052461c0 & 1) == 0) {
              iVar6 = __cxa_guard_acquire(&DAT_052461c0);
              plVar8 = &DAT_05240280;
              if (iVar6 != 0) {
                FUN_016fcf10(&DAT_05240280);
                FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
                __cxa_guard_release(&DAT_052461c0);
              }
            }
            else {
              plVar8 = &DAT_05240280;
            }
          }
          (**(code **)(*plVar8 + 0x4e8))(plVar8,0);
          puVar9 = *(undefined8 **)(param_1 + 0x60);
          if (puVar9 == (undefined8 *)0x0) {
            if ((DAT_052461c0 & 1) == 0) {
              iVar6 = __cxa_guard_acquire(&DAT_052461c0);
              puVar9 = &DAT_05240280;
              if (iVar6 != 0) {
                FUN_016fcf10(&DAT_05240280);
                FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
                __cxa_guard_release(&DAT_052461c0);
              }
            }
            else {
              puVar9 = &DAT_05240280;
            }
          }
          local_40 = PTR_DAT_04bb2020 + 0x10;
          local_38 = "PlayerSharePlayWarpIn2";
          FUN_017029bc(puVar9,&local_40,6,0,0);
        }
        else {
          FUN_023164ec(param_1,6);
          plVar8 = *(long **)(param_1 + 0x60);
          if (plVar8 == (long *)0x0) {
            if ((DAT_052461c0 & 1) == 0) {
              iVar6 = __cxa_guard_acquire(&DAT_052461c0);
              plVar8 = &DAT_05240280;
              if (iVar6 != 0) {
                FUN_016fcf10(&DAT_05240280);
                FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
                __cxa_guard_release(&DAT_052461c0);
              }
            }
            else {
              plVar8 = &DAT_05240280;
            }
          }
          (**(code **)(*plVar8 + 0x4e8))(plVar8,1);
        }
        *(uint *)(param_1 + 0x17d4) = *(uint *)(param_1 + 0x17d4) | 0x40;
      }
      else {
        *(uint *)(param_1 + 0x17d4) = *(uint *)(param_1 + 0x17d4) & 0xffffff9f | 0x40;
        uVar7 = FUN_02546f34(pbVar2,*(undefined4 *)(param_1 + 0x230));
        if ((uVar7 & 1) == 0) {
          local_38 = (char *)((ulong)local_38._4_4_ << 0x20);
          local_40 = (undefined *)CONCAT35(local_40._5_3_,0x100000006);
          FUN_02374e74(param_1,&local_40);
        }
      }
    }
  }
  else {
    puVar9 = *(undefined8 **)(param_1 + 0x60);
    if (puVar9 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar6 = __cxa_guard_acquire(&DAT_052461c0);
        puVar9 = &DAT_05240280;
        if (iVar6 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar9 = &DAT_05240280;
      }
    }
    local_40 = (undefined *)CONCAT44(local_40._4_4_,0x34);
    if ((puVar9[0x227] != 0) && (uVar7 = FUN_03850890(puVar9[0x227],0x34,0,0), (uVar7 & 1) != 0)) {
      plVar8 = *(long **)(param_1 + 0x60);
      if (plVar8 == (long *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar6 = __cxa_guard_acquire(&DAT_052461c0);
          plVar8 = &DAT_05240280;
          if (iVar6 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          plVar8 = &DAT_05240280;
        }
      }
      (**(code **)(*plVar8 + 0x4e8))(plVar8,1);
    }
    puVar9 = *(undefined8 **)(param_1 + 0x60);
    if (puVar9 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar6 = __cxa_guard_acquire(&DAT_052461c0);
        puVar9 = &DAT_05240280;
        if (iVar6 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar9 = &DAT_05240280;
      }
    }
    local_40 = (undefined *)((ulong)local_40 & 0xffffffff00000000);
    if ((puVar9[0x227] == 0) || (uVar7 = FUN_03850368(puVar9[0x227],0), (uVar7 & 1) == 0)) {
      puVar9 = *(undefined8 **)(param_1 + 0x60);
      if (puVar9 == (undefined8 *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar6 = __cxa_guard_acquire(&DAT_052461c0);
          puVar9 = &DAT_05240280;
          if (iVar6 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          puVar9 = &DAT_05240280;
        }
      }
      uVar7 = FUN_0170a6d0(puVar9,0);
      if (((uVar7 & 1) == 0) && (*(uint *)(param_1 + 0x1c04) < 0x5b)) {
        return;
      }
    }
    if (*(int *)(param_1 + 0x178) != 0) {
      *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 8;
      FUN_023164ec(param_1,6);
      return;
    }
    local_38 = (char *)((ulong)local_38._5_3_ << 0x28);
    local_40 = (undefined *)0x101000000000006;
    FUN_02374564(param_1,&local_40);
  }
  return;
}

