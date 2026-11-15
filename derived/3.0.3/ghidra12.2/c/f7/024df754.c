
void FUN_024df754(long param_1,ulong param_2,ulong param_3)

{
  byte *pbVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined4 local_4c;
  undefined1 local_48;
  undefined4 local_44;
  
  if ((*(byte *)(param_1 + 0x17d2) >> 3 & 1) != 0) {
    if (*(int *)(param_1 + 0x178) != 0) {
      return;
    }
    pbVar1 = (byte *)(param_1 + 0x1ee8);
    FUN_02549a64(pbVar1);
    puVar3 = PTR_DAT_04bb4718;
    if (*(uint *)(param_1 + 0x1c04) < 0xf0) {
      if (*(long *)PTR_DAT_04bb4718 == 0) {
        if ((DAT_054f0960 & 1) == 0) {
          iVar4 = __cxa_guard_acquire(&DAT_054f0960);
          puVar6 = &DAT_054f0958;
          if (iVar4 != 0) {
            DAT_054f0958 = 0;
            __cxa_guard_release(&DAT_054f0960);
          }
        }
        else {
          puVar6 = &DAT_054f0958;
        }
      }
      else {
        puVar6 = (undefined8 *)(*(long *)PTR_DAT_04bb4718 + 0x204);
        if ((ulong)*pbVar1 < 8) {
          puVar6 = puVar6 + *pbVar1;
        }
      }
      local_4c = 0x2c;
      if ((*(uint *)((long)puVar6 + 4) >> 0xc & 1) == 0) {
        return;
      }
    }
    uVar5 = FUN_02546f34(pbVar1,*(undefined4 *)(param_1 + 0x230));
    if ((uVar5 & 1) == 0) {
      local_44 = 0;
      local_4c = 6;
      local_48 = 1;
      FUN_02374e74(param_1,&local_4c);
    }
    FUN_02549bb8(pbVar1);
    if (*(long *)puVar3 == 0) {
      if ((DAT_054f0960 & 1) == 0) {
        iVar4 = __cxa_guard_acquire(&DAT_054f0960);
        puVar6 = &DAT_054f0958;
        if (iVar4 != 0) {
          DAT_054f0958 = 0;
          __cxa_guard_release(&DAT_054f0960);
        }
      }
      else {
        puVar6 = &DAT_054f0958;
      }
    }
    else {
      puVar6 = (undefined8 *)(*(long *)puVar3 + 0x204);
      if ((ulong)*pbVar1 < 8) {
        puVar6 = puVar6 + *pbVar1;
      }
    }
    *(uint *)((long)puVar6 + 4) = *(uint *)((long)puVar6 + 4) & 0xffffefff;
    return;
  }
  if (((*(int *)(param_1 + 0x178) == 0) && ((param_2 & 1) == 0)) &&
     (uVar5 = FUN_02473484(param_1), (uVar5 & 1) != 0)) {
    return;
  }
  puVar6 = *(undefined8 **)(param_1 + 0x60);
  if (puVar6 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(&DAT_052461c0);
      puVar6 = &DAT_05240280;
      if (iVar4 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar6 = &DAT_05240280;
    }
  }
  local_4c = 0;
  if ((puVar6[0x227] == 0) || (uVar5 = FUN_03850368(puVar6[0x227],0), (uVar5 & 1) == 0)) {
    puVar6 = *(undefined8 **)(param_1 + 0x60);
    if (puVar6 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar4 = __cxa_guard_acquire(&DAT_052461c0);
        puVar6 = &DAT_05240280;
        if (iVar4 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar6 = &DAT_05240280;
      }
    }
    local_4c = 0;
    if (((puVar6[0x227] == 0) || (uVar5 = FUN_03850368(puVar6[0x227],0), (uVar5 & 1) != 0)) ||
       ((puVar6[0x227] == 0 ||
        ((uVar5 = FUN_03850368(puVar6[0x227],0), (uVar5 & 1) != 0 ||
         (uVar5 = FUN_0384fca4(puVar6[0x227],0), (uVar5 & 1) != 0)))))) goto LAB_024df8c0;
    uVar2 = *(uint *)(param_1 + 0x1c04);
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x1c04);
  }
  if (uVar2 < 0x3d) {
    return;
  }
LAB_024df8c0:
  puVar6 = *(undefined8 **)(param_1 + 0x60);
  if (puVar6 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar4 = __cxa_guard_acquire(&DAT_052461c0);
      puVar6 = &DAT_05240280;
      if (iVar4 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar6 = &DAT_05240280;
    }
  }
  local_4c = 0;
  if ((((puVar6[0x227] != 0) && (uVar5 = FUN_03850368(puVar6[0x227],0), (uVar5 & 1) == 0)) &&
      (puVar6[0x227] != 0)) && (uVar5 = FUN_03850368(puVar6[0x227],0), (uVar5 & 1) == 0)) {
    FUN_0384fca4(puVar6[0x227],0);
  }
  if (*(int *)(param_1 + 0x178) == 0) {
    if ((param_2 & 1) == 0) {
      if ((param_3 & 1) != 0) {
        FUN_02373ee0(param_1,6,1,1);
        return;
      }
      uVar5 = FUN_02546f34(param_1 + 0x1ee8,*(undefined4 *)(param_1 + 0x230));
      if ((uVar5 & 1) == 0) {
        local_44 = 0;
        local_4c = 6;
        local_48 = 1;
        FUN_02374e74(param_1,&local_4c);
      }
      return;
    }
    *(uint *)(param_1 + 0x17d0) = *(uint *)(param_1 + 0x17d0) | 0x80000;
  }
  else {
    *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 8;
  }
  FUN_023164ec(param_1,6);
  return;
}

