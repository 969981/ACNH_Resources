
int FUN_008ce890(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  long *plVar9;
  undefined **local_60;
  undefined8 uStack_58;
  
  puVar2 = PTR_DAT_04bb27c0;
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  if (lVar6 == 0) goto LAB_008cea10;
  uVar8 = *(uint *)PTR_DAT_04bb32f8;
  if ((((uVar8 == 0) ||
       (plVar7 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                           ((ulong)(uVar8 >> 0x11) & 0x7ff8)), plVar7 == (long *)0x0)) ||
      ((*(uint *)(plVar7 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar7 + 0x46) != uVar8)) {
    plVar7 = (long *)0x0;
  }
  if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar4 + 0x60))();
    if (iVar3 < 0x11) {
      uVar8 = 1;
    }
    else {
      if (4 < *(uint *)(lVar6 + 0x5e8)) goto LAB_008ce958;
      uVar8 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_008ce958:
    uVar8 = 0;
  }
  if (plVar7 != (long *)0x0) {
    lVar6 = plVar7[0x2a];
    if (((*PTR_DAT_04bb3280 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3280);
    }
    uVar5 = (**(code **)(*plVar7 + 0x20))(plVar7,PTR_DAT_04bb3278);
    puVar2 = PTR_DAT_04bb3238;
    uVar1 = 0;
    if ((int)lVar6 == 1) {
      uVar1 = uVar8;
    }
    if (((uVar5 & 1) != 0) && (uVar1 != 0)) {
      plVar4 = (long *)plVar7[0x51];
      local_60 = &PTR_FUN_04926b40;
      uStack_58 = param_1;
      if (plVar4 == plVar7 + 0x50) {
        plVar9 = (long *)puVar2;
      }
      else {
        plVar9 = plVar4 + -1;
        do {
          uVar5 = (*(code *)*local_60)(&local_60,plVar9);
          if ((uVar5 & 1) != 0) goto LAB_008cea3c;
          plVar4 = (long *)plVar4[1];
          plVar9 = plVar4 + -1;
        } while (plVar9 != plVar7 + 0x4f);
        plVar9 = (long *)puVar2;
      }
LAB_008cea3c:
      local_60 = (undefined **)CONCAT44(local_60._4_4_,(int)*plVar9);
      if ((int)*plVar9 == 0) {
        return 0;
      }
      iVar3 = FUN_008f8bf0(plVar7,param_1,&local_60);
      if (iVar3 != 0) {
        local_60._0_4_ = iVar3;
      }
      return (int)local_60;
    }
  }
LAB_008cea10:
  return *(int *)PTR_DAT_04bb3238;
}

