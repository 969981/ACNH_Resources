
uint FUN_01fa3be8(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  undefined *local_50;
  undefined8 *puStack_48;
  undefined4 local_24;
  
  puVar2 = PTR_DAT_04bb27c0;
  if ((*(int *)(param_1 + 0x77b0) == 0x40) && (lVar7 = *(long *)PTR_DAT_04bb27c0, lVar7 != 0)) {
    uVar9 = *(uint *)(param_1 + 0x7d70);
    if ((uVar9 == 0) ||
       (((plVar8 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                             ((ulong)(uVar9 >> 0x11) & 0x7ff8)), plVar8 == (long *)0x0 ||
         ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar8 + 0x46) != uVar9)))) {
      plVar8 = (long *)0x0;
    }
    if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
      plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar7 = *(long *)puVar2;
      iVar3 = (**(code **)(*plVar5 + 0x60))();
      if (iVar3 < 0x11) {
        uVar9 = 1;
      }
      else {
        if (4 < *(uint *)(lVar7 + 0x5e8)) goto LAB_01fa3cbc;
        uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_01fa3cbc:
      uVar9 = 0;
    }
    if (plVar8 != (long *)0x0) {
      lVar7 = plVar8[0x2a];
      if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar3 != 0)) {
        *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb37d8);
      }
      uVar6 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb37d0);
      uVar4 = 0;
      uVar1 = 0;
      if ((int)lVar7 == 1) {
        uVar1 = uVar9;
      }
      if (((uVar6 & 1) != 0) && (uVar1 != 0)) {
        lVar7 = *(long *)(*(long *)(param_1 + 8) + 0x68);
        local_24 = FUN_006f0400(*(float *)(plVar8[0xd] + 0x278) - *(float *)(lVar7 + 0x278),
                                *(float *)(plVar8[0xd] + 0x280) - *(float *)(lVar7 + 0x280));
        FUN_02085e20(*(undefined8 *)(param_1 + 0x18),0,*(undefined4 *)(param_1 + 0x7d70),
                     PTR_DAT_04bb6928,0);
        local_50 = PTR_DAT_04bb2020 + 0x10;
        puStack_48 = &DAT_0407ebb1;
        uVar4 = FUN_01e5ab70(*(undefined8 *)(param_1 + 0x10),&local_24,PTR_DAT_04bb65b0,&local_50,6)
        ;
      }
      goto LAB_01fa3d98;
    }
  }
  uVar4 = 0;
LAB_01fa3d98:
  return uVar4 & 1;
}

