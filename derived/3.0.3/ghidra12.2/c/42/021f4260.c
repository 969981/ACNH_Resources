
bool FUN_021f4260(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined **local_70;
  char *pcStack_68;
  undefined8 local_60;
  char local_34 [4];
  
  uVar3 = FUN_016d948c();
  puVar1 = PTR_DAT_04bb27c0;
  if ((uVar3 & 1) == 0) {
    return false;
  }
  local_34[0] = '\0';
  lVar5 = *(long *)PTR_DAT_04bb27c0;
  if (lVar5 == 0) goto LAB_021f4420;
  uVar8 = *(uint *)PTR_DAT_04bb4b88;
  if ((((uVar8 == 0) ||
       (plVar7 = *(long **)(*(long *)(*(long *)(lVar5 + 0x1c0) + 8) +
                           ((ulong)(uVar8 >> 0x11) & 0x7ff8)), plVar7 == (long *)0x0)) ||
      ((*(uint *)(plVar7 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar7 + 0x46) != uVar8)) {
    plVar7 = (long *)0x0;
  }
  if (*(int *)(lVar5 + 0x288) == 1 || *(int *)(lVar5 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar5 = *(long *)puVar1;
    iVar2 = (**(code **)(*plVar4 + 0x60))();
    if (iVar2 < 0x11) {
      uVar8 = 1;
    }
    else {
      if (4 < *(uint *)(lVar5 + 0x5e8)) goto LAB_021f4340;
      uVar8 = 0x1aU >> (ulong)(*(uint *)(lVar5 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_021f4340:
    uVar8 = 0;
  }
  if (plVar7 != (long *)0x0) {
    lVar5 = plVar7[0x2a];
    if (((*PTR_DAT_04bb4b78 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb4b78), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bb4b70 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb4b78);
    }
    uVar3 = (**(code **)(*plVar7 + 0x20))(plVar7,PTR_DAT_04bb4b70);
    uVar10 = 0;
    if ((int)lVar5 == 1) {
      uVar10 = uVar8;
    }
    if (((uVar3 & 1) != 0) && (uVar10 != 0)) {
      pcStack_68 = local_34;
      local_70 = &PTR_FUN_04a771d0;
      lVar5 = plVar7[0x54];
      if ((lVar5 != 0) && (iVar2 = *(int *)(lVar5 + 0x288), iVar2 != 0)) {
        lVar5 = *(long *)(lVar5 + 0x290);
        iVar9 = 0;
        local_60 = param_2;
        do {
          lVar6 = lVar5 + (long)iVar9 * 0x30;
          uVar8 = *(uint *)(lVar6 + 0x10);
          if (uVar8 != 0) {
            lVar6 = *(long *)(lVar6 + 0x18);
            uVar10 = 0;
            do {
              (*(code *)*local_70)(&local_70,lVar6 + ((long)((ulong)uVar10 << 0x20) >> 0x1e));
              uVar10 = uVar10 + 1;
            } while (uVar8 != uVar10);
          }
          iVar9 = iVar9 + 1;
        } while (iVar2 != iVar9);
      }
    }
  }
LAB_021f4420:
  return local_34[0] == '\0';
}

