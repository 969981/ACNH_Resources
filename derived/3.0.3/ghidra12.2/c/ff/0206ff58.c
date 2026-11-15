
void FUN_0206ff58(void)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  undefined *local_50;
  char *pcStack_48;
  undefined4 local_40;
  undefined1 local_3c [7];
  undefined1 local_35;
  
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "NpcInteriorCoordinate";
  local_50 = puVar1;
  iVar3 = FUN_02743000(&local_50);
  if (iVar3 == 0) {
    return;
  }
  pcStack_48 = "UISelectedNpcVillagerIndex";
  local_50 = puVar1;
  iVar3 = FUN_02743000(&local_50);
  local_35 = 0;
  local_40 = 8;
  pcStack_48 = local_3c;
  local_3c[0] = 0;
  local_50 = PTR_DAT_04bb3768 + 0x10;
  uVar5 = FUN_021d7c00(&local_50,iVar3 + -1);
  if ((uVar5 & 1) == 0) {
    return;
  }
  uVar4 = FUN_020a4f40(*(undefined8 *)PTR_DAT_04bb3968,&local_50,PTR_DAT_04bb3238,1);
  puVar1 = PTR_DAT_04bb27c0;
  if (uVar4 == 0) {
    return;
  }
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) {
    return;
  }
  plVar8 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) + (ulong)(uVar4 >> 0x14) * 8);
  if (((plVar8 == (long *)0x0) || ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar8 + 0x46) != uVar4)) {
    plVar8 = (long *)0x0;
  }
  if ((*(int *)(lVar7 + 0x288) == 1) || (*(int *)(lVar7 + 0x288) == -1)) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar1;
    iVar3 = (**(code **)(*plVar6 + 0x60))();
    if (iVar3 < 0x11) {
      uVar4 = 1;
      goto joined_r0x020700ac;
    }
    if (*(uint *)(lVar7 + 0x5e8) < 5) {
      uVar4 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x020700ac;
    }
  }
  uVar4 = 0;
joined_r0x020700ac:
  if (plVar8 != (long *)0x0) {
    lVar7 = plVar8[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar5 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb37d0);
    uVar2 = 0;
    if ((int)lVar7 == 1) {
      uVar2 = uVar4;
    }
    if (((uVar5 & 1) != 0) && (uVar2 != 0)) {
      puVar9 = (undefined8 *)plVar8[0x77];
      if (((*PTR_DAT_04bc1e50 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc1e50), iVar3 != 0)) {
        *(undefined **)PTR_DAT_04bc1e48 = PTR_DAT_04bb6718 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc1e50);
      }
      if ((puVar9 != (undefined8 *)0x0) &&
         (uVar5 = (**(code **)*puVar9)(puVar9,PTR_DAT_04bc1e48), (uVar5 & 1) != 0)) {
        FUN_01eb3f28(puVar9);
      }
    }
  }
  return;
}

