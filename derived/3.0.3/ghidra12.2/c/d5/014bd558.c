
void FUN_014bd558(long param_1,uint *param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  uint *puVar7;
  long *plVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined1 local_38 [4];
  uint local_34;
  
  puVar2 = PTR_DAT_04bb27c0;
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  if (lVar6 == 0) {
    return;
  }
  uVar10 = *param_2;
  if ((((uVar10 == 0) ||
       (plVar8 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                           ((ulong)(uVar10 >> 0x11) & 0x7ff8)), plVar8 == (long *)0x0)) ||
      ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar8 + 0x46) != uVar10)) {
    plVar8 = (long *)0x0;
  }
  if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar4 + 0x60))();
    if (iVar3 < 0x11) {
      uVar10 = 1;
      goto joined_r0x014bd618;
    }
    if (*(uint *)(lVar6 + 0x5e8) < 5) {
      uVar10 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x014bd618;
    }
  }
  uVar10 = 0;
joined_r0x014bd618:
  if (plVar8 != (long *)0x0) {
    lVar6 = plVar8[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar5 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb37d0);
    uVar1 = 0;
    if ((int)lVar6 == 1) {
      uVar1 = uVar10;
    }
    if (((uVar5 & 1) != 0) && (uVar1 != 0)) {
      puVar9 = (undefined8 *)plVar8[0x77];
      if (((*PTR_DAT_04bb6710 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb6710), iVar3 != 0)) {
        *(undefined **)PTR_DAT_04bb6708 = PTR_DAT_04bb6718 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb6710);
      }
      if ((puVar9 != (undefined8 *)0x0) &&
         (uVar5 = (**(code **)*puVar9)(puVar9,PTR_DAT_04bb6708), (uVar5 & 1) != 0)) {
        puVar7 = *(uint **)(param_1 + 8);
        local_34 = *puVar7;
        local_38[0] = (undefined1)(1 << (ulong)(local_34 & 0x1f));
        FUN_01fa439c(puVar9,puVar7 + 3,puVar7 + 1,puVar7[6],local_38);
      }
    }
  }
  return;
}

