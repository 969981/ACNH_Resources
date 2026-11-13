
void FUN_014cc9f0(undefined8 param_1,undefined4 param_2)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  uint uVar10;
  
  if (*(long *)PTR_DAT_04bb59d8 == 0) {
    bVar3 = false;
  }
  else {
    lVar7 = *(long *)PTR_DAT_04bb2720;
    if (lVar7 == 0) {
      puVar8 = &DAT_055c04a0;
    }
    else {
      puVar8 = &DAT_055c04a0;
      if (*(long *)(lVar7 + 0x330) != 0) {
        puVar8 = (undefined8 *)
                 (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                           (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar7 + 0x338));
        iVar4 = FUN_006bd550(*puVar8,0);
        puVar8 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar4 != 0x758f7eaf) {
          puVar8 = &DAT_055c04a0;
        }
      }
    }
    bVar3 = *(int *)(puVar8 + 7) == -0x17df00c3;
  }
  puVar2 = PTR_DAT_04bb27c0;
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) {
    return;
  }
  uVar10 = *(uint *)PTR_DAT_04bb32f8;
  if ((((uVar10 == 0) ||
       (plVar9 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                           ((ulong)(uVar10 >> 0x11) & 0x7ff8)), plVar9 == (long *)0x0)) ||
      ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar9 + 0x46) != uVar10)) {
    plVar9 = (long *)0x0;
  }
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar2;
    iVar4 = (**(code **)(*plVar5 + 0x60))();
    if (iVar4 < 0x11) {
      uVar10 = 1;
      goto joined_r0x014ccb50;
    }
    if (*(uint *)(lVar7 + 0x5e8) < 5) {
      uVar10 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x014ccb50;
    }
  }
  uVar10 = 0;
joined_r0x014ccb50:
  if (plVar9 != (long *)0x0) {
    lVar7 = plVar9[0x2a];
    if (((*PTR_DAT_04bb3280 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3280);
    }
    uVar6 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb3278);
    uVar1 = 0;
    if ((int)lVar7 == 1) {
      uVar1 = uVar10;
    }
    if (((uVar6 & 1) != 0) && (uVar1 != 0)) {
      if (!bVar3) {
        FUN_008fe3d0(plVar9,param_2);
        return;
      }
      FUN_008fe5f0();
      return;
    }
  }
  return;
}

