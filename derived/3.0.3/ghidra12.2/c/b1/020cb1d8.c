
void FUN_020cb1d8(long param_1,uint *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined4 local_38;
  undefined4 local_34;
  
  puVar3 = PTR_DAT_04bb27c0;
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) {
    return;
  }
  uVar9 = *param_2;
  if ((((uVar9 == 0) ||
       (plVar8 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                           ((ulong)(uVar9 >> 0x11) & 0x7ff8)), plVar8 == (long *)0x0)) ||
      ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar8 + 0x46) != uVar9)) {
    plVar8 = (long *)0x0;
  }
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar3;
    iVar4 = (**(code **)(*plVar5 + 0x60))();
    if (iVar4 < 0x11) {
      uVar9 = 1;
      goto joined_r0x020cb298;
    }
    if (*(uint *)(lVar7 + 0x5e8) < 5) {
      uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x020cb298;
    }
  }
  uVar9 = 0;
joined_r0x020cb298:
  if (plVar8 != (long *)0x0) {
    lVar7 = plVar8[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar6 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb37d0);
    uVar1 = 0;
    if ((int)lVar7 == 1) {
      uVar1 = uVar9;
    }
    if (((uVar6 & 1) != 0) && (uVar1 != 0)) {
      puVar10 = (undefined8 *)plVar8[0x77];
      if (((*PTR_DAT_04bb6710 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb6710), iVar4 != 0)) {
        *(undefined **)PTR_DAT_04bb6708 = PTR_DAT_04bb6718 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb6710);
      }
      if ((puVar10 == (undefined8 *)0x0) ||
         (uVar6 = (**(code **)*puVar10)(puVar10,PTR_DAT_04bb6708), (uVar6 & 1) == 0)) {
        plVar8 = (long *)plVar8[0x77];
        if (((*PTR_DAT_04bb9a60 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb9a60), iVar4 != 0)) {
          *(undefined **)PTR_DAT_04bb9a58 = PTR_DAT_04bb6718 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb9a60);
        }
        if ((plVar8 != (long *)0x0) &&
           (uVar6 = (**(code **)*plVar8)(plVar8,PTR_DAT_04bb9a58), (uVar6 & 1) != 0)) {
          uVar2 = **(undefined4 **)(param_1 + 8);
          uVar6 = FUN_01f0a858(plVar8);
          if (((uVar6 & 1) != 0) &&
             (uVar6 = (**(code **)(*plVar8 + 0x350))(plVar8), (uVar6 & 1) != 0)) {
            local_34 = uVar2;
            (**(code **)(*plVar8 + 0x590))(plVar8,&local_34);
          }
        }
      }
      else {
        local_38 = **(undefined4 **)(param_1 + 8);
        FUN_01fa5780(puVar10,&local_38);
      }
    }
  }
  return;
}

