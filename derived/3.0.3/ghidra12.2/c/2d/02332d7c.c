
bool FUN_02332d7c(long param_1,ulong param_2)

{
  byte *pbVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  uint *puVar11;
  undefined8 *puVar12;
  bool bVar13;
  long lVar14;
  undefined4 local_60;
  undefined4 uStack_5c;
  char local_58;
  char local_57;
  undefined4 local_34;
  
  puVar4 = PTR_DAT_04bb4718;
  if (*(int *)(param_1 + 0x178) != 0) {
    return false;
  }
  pbVar1 = (byte *)(param_1 + 0x1ee8);
  if (*(long *)PTR_DAT_04bb4718 == 0) {
    if ((DAT_054f0960 & 1) == 0) {
      iVar8 = __cxa_guard_acquire(&DAT_054f0960);
      puVar11 = (uint *)&DAT_054f0958;
      if (iVar8 != 0) {
        DAT_054f0958 = 0;
        __cxa_guard_release(&DAT_054f0960);
        puVar11 = (uint *)&DAT_054f0958;
      }
    }
    else {
      puVar11 = (uint *)&DAT_054f0958;
    }
  }
  else {
    puVar11 = (uint *)(*(long *)PTR_DAT_04bb4718 + 0x204);
    if ((ulong)*pbVar1 < 8) {
      puVar11 = puVar11 + (ulong)*pbVar1 * 2;
    }
  }
  local_60 = 9;
  if ((*puVar11 >> 9 & 1) != 0) {
    lVar10 = *(long *)puVar4;
    if (lVar10 == 0) {
      if ((DAT_054f0960 & 1) == 0) {
        iVar8 = __cxa_guard_acquire(&DAT_054f0960);
        puVar11 = (uint *)&DAT_054f0958;
        if (iVar8 != 0) {
          DAT_054f0958 = 0;
          __cxa_guard_release(&DAT_054f0960);
        }
      }
      else {
        puVar11 = (uint *)&DAT_054f0958;
      }
    }
    else {
      puVar11 = (uint *)(lVar10 + 0x204);
      if ((ulong)*pbVar1 < 8) {
        puVar11 = puVar11 + (ulong)*pbVar1 * 2;
      }
    }
    *puVar11 = *puVar11 & 0xfffffdff;
    return false;
  }
  uVar7 = *(uint *)(param_1 + 0x17d0);
  if ((uVar7 >> 4 & 1) == 0) {
    bVar13 = false;
  }
  else {
    if (((param_2 & 1) == 0) && (*pbVar1 < 8)) {
      uVar7 = FUN_02582d8c(pbVar1,1);
      puVar5 = PTR_DAT_04bb4fb8;
      if ((uVar7 < 8) &&
         ((*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar7 * 0x13f0 + 0x13d4) != '\0' &&
          (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar7 * 0x13f0 + 0x13d6) != '\0')))) {
        uVar7 = FUN_02582d8c(pbVar1,1);
        puVar3 = PTR_DAT_04bb43c0;
        if ((uVar7 < 8) &&
           (lVar10 = *(long *)puVar5, *(char *)(lVar10 + (ulong)uVar7 * 0x13f0 + 0x13d4) != '\0')) {
          uVar9 = (ulong)uVar7;
          if (*(char *)(lVar10 + uVar9 * 0x13f0 + 0x18) != '\0') {
            return true;
          }
          lVar14 = *(long *)PTR_DAT_04bb43c0;
          uVar7 = FUN_0277d6c4(lVar10 + uVar9 * 0x13f0 + 0x1c);
          if (*(long *)puVar3 != 0) {
            lVar14 = *(long *)(lVar14 + 0x57e58);
            uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
            if ((uVar7 < *(uint *)(lVar14 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
              return true;
            }
          }
          if (((**(char **)(lVar10 + uVar9 * 0x13f0 + 0xe0) != '\0') &&
              (**(char **)(lVar10 + uVar9 * 0x13f0 + 0x138) != '\0')) &&
             (*(char *)(lVar10 + uVar9 * 0x13f0 + 0x1e0) != '\0')) {
            return true;
          }
        }
      }
    }
    local_34 = *(undefined4 *)(param_1 + 0x230);
    FUN_0071c8d0(&local_60,PTR_DAT_04bb32f8,&local_34,0);
    plVar2 = (long *)CONCAT44(uStack_5c,local_60);
    if (plVar2 != (long *)0x0) {
      if (((*PTR_DAT_04bb3280 & 1) == 0) &&
         (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar8 != 0)) {
        *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb3280);
      }
      uVar9 = (**(code **)(*plVar2 + 0x20))(plVar2,PTR_DAT_04bb3278);
      if ((uVar9 & 1) == 0) {
        local_57 = '\0';
      }
    }
    bVar6 = CONCAT44(uStack_5c,local_60) == 0;
    bVar13 = (!bVar6 && local_58 != '\0') && local_57 != '\0';
    if ((bVar6 || local_58 == '\0') || local_57 == '\0') {
      uVar7 = *(uint *)(param_1 + 0x17d0);
    }
    else {
      lVar10 = *(long *)puVar4;
      if (lVar10 == 0) {
        if ((DAT_054f0960 & 1) == 0) {
          iVar8 = __cxa_guard_acquire(&DAT_054f0960);
          puVar12 = &DAT_054f0958;
          if (iVar8 != 0) {
            DAT_054f0958 = 0;
            __cxa_guard_release(&DAT_054f0960);
          }
        }
        else {
          puVar12 = &DAT_054f0958;
        }
      }
      else {
        puVar12 = (undefined8 *)(lVar10 + 0x204);
        if ((ulong)*pbVar1 < 8) {
          puVar12 = puVar12 + *pbVar1;
        }
      }
      local_34 = 0x2d;
      if ((*(uint *)((long)puVar12 + 4) >> 0xd & 1) == 0) {
        FUN_008fc6e4(CONCAT44(uStack_5c,local_60),0,0xffffffff);
      }
      uVar7 = *(uint *)(param_1 + 0x17d0) & 0xffffffef;
      *(uint *)(param_1 + 0x17d0) = uVar7;
    }
  }
  if ((uVar7 >> 3 & 1) == 0) {
    return bVar13;
  }
  local_34 = *(undefined4 *)(param_1 + 0x230);
  FUN_0071c8d0(&local_60,PTR_DAT_04bb32f8,&local_34,0);
  plVar2 = (long *)CONCAT44(uStack_5c,local_60);
  if (plVar2 != (long *)0x0) {
    if (((*PTR_DAT_04bb3280 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar8 != 0)) {
      *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3280);
    }
    uVar9 = (**(code **)(*plVar2 + 0x20))(plVar2,PTR_DAT_04bb3278);
    if ((uVar9 & 1) == 0) {
      local_57 = '\0';
    }
  }
  if (CONCAT44(uStack_5c,local_60) == 0) {
    return bVar13;
  }
  if (local_58 == '\0') {
    return bVar13;
  }
  if (local_57 == '\0') {
    return bVar13;
  }
  FUN_008fc6e4(CONCAT44(uStack_5c,local_60),0,0xffffffff);
  *(uint *)(param_1 + 0x17d0) = *(uint *)(param_1 + 0x17d0) & 0xfffffff7;
  return true;
}

