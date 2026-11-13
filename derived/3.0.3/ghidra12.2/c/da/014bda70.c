
void FUN_014bda70(long param_1,uint *param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined1 auStack_38 [4];
  undefined4 local_34;
  
  puVar2 = PTR_DAT_04bb27c0;
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  if (lVar6 == 0) {
    return;
  }
  uVar9 = *param_2;
  if ((((uVar9 == 0) ||
       (plVar7 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                           ((ulong)(uVar9 >> 0x11) & 0x7ff8)), plVar7 == (long *)0x0)) ||
      ((*(uint *)(plVar7 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar7 + 0x46) != uVar9)) {
    plVar7 = (long *)0x0;
  }
  if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar4 + 0x60))();
    if (iVar3 < 0x11) {
      uVar9 = 1;
      goto joined_r0x014bdb30;
    }
    if (*(uint *)(lVar6 + 0x5e8) < 5) {
      uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x014bdb30;
    }
  }
  uVar9 = 0;
joined_r0x014bdb30:
  if (plVar7 != (long *)0x0) {
    lVar6 = plVar7[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar5 = (**(code **)(*plVar7 + 0x20))(plVar7,PTR_DAT_04bb37d0);
    uVar1 = 0;
    if ((int)lVar6 == 1) {
      uVar1 = uVar9;
    }
    if (((uVar5 & 1) != 0) && (uVar1 != 0)) {
      puVar8 = (undefined8 *)plVar7[0x77];
      if (((*PTR_DAT_04bb6710 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb6710), iVar3 != 0)) {
        *(undefined **)PTR_DAT_04bb6708 = PTR_DAT_04bb6718 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb6710);
      }
      if ((puVar8 != (undefined8 *)0x0) &&
         (uVar5 = (**(code **)*puVar8)(puVar8,PTR_DAT_04bb6708), (uVar5 & 1) != 0)) {
        lVar6 = *(long *)(param_1 + 8);
        local_34 = **(undefined4 **)(param_1 + 0x10);
        FUN_01fa5530(local_34,puVar8,lVar6 + 0xc,lVar6 + 4,*(undefined4 *)(lVar6 + 0x18),auStack_38)
        ;
      }
    }
  }
  return;
}

