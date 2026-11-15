
undefined8 FUN_0204ec5c(long param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  
  puVar3 = PTR_DAT_04bb27c0;
  lVar8 = *(long *)PTR_DAT_04bb27c0;
  if (lVar8 != 0) {
    uVar2 = *param_2;
    if ((((uVar2 == 0) ||
         (plVar9 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                             ((ulong)(uVar2 >> 0x11) & 0x7ff8)), plVar9 == (long *)0x0)) ||
        ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar9 + 0x46) != uVar2)) {
      plVar9 = (long *)0x0;
    }
    if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
      plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar8 = *(long *)puVar3;
      iVar4 = (**(code **)(*plVar6 + 0x60))();
      if (iVar4 < 0x11) {
        uVar2 = 1;
      }
      else {
        uVar2 = 0;
        if (*(uint *)(lVar8 + 0x5e8) < 5) {
          uVar2 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
        }
      }
    }
    else {
      uVar2 = 0;
    }
    if (plVar9 != (long *)0x0) {
      lVar8 = plVar9[0x2a];
      if (((*PTR_DAT_04bb3760 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb3760), iVar4 != 0)) {
        *(undefined **)PTR_DAT_04bb3758 = PTR_DAT_04bb3290 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb3760);
      }
      uVar7 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb3758);
      uVar1 = 0;
      if ((int)lVar8 == 1) {
        uVar1 = uVar2;
      }
      if (((uVar7 & 1) != 0) && (uVar1 != 0)) {
        lVar8 = *(long *)(*(long *)(param_1 + 8) + 0x68);
        uVar5 = FUN_006f0400(*(float *)(plVar9[0xd] + 0x278) - *(float *)(lVar8 + 0x278),
                             *(float *)(plVar9[0xd] + 0x280) - *(float *)(lVar8 + 0x280));
        goto LAB_0204eda0;
      }
    }
  }
  uVar5 = *(undefined4 *)(*(long *)(*(long *)(param_1 + 8) + 0x68) + 0x2b4);
LAB_0204eda0:
  *(undefined4 *)(param_1 + 0xac) = uVar5;
  *(undefined1 *)(param_1 + 0xb0) = 1;
  FUN_03ebb160(param_1 + 0x10,1);
  return 1;
}

