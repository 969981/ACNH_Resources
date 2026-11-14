
void FUN_014ea1d0(ulong param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  undefined *local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  
  puVar3 = PTR_DAT_04bbbc20;
  puVar2 = PTR_DAT_04bb27c0;
  local_68 = *(undefined8 *)(param_2 + 8);
  local_60 = *(undefined8 *)(param_2 + 0x10);
  local_58 = *(undefined4 *)(param_2 + 0x18);
  local_70 = PTR_DAT_04bbbc20 + 0x10;
  uVar6 = param_1;
  if ((*(int *)(param_1 + 0x18) != 1) || (lVar8 = *(long *)PTR_DAT_04bb27c0, lVar8 == 0))
  goto LAB_014ea3a4;
  uVar10 = *(uint *)(param_1 + 0x8c);
  if ((uVar10 == 0) ||
     (((plVar9 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                           ((ulong)(uVar10 >> 0x11) & 0x7ff8)), plVar9 == (long *)0x0 ||
       ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar9 + 0x46) != uVar10)))) {
    plVar9 = (long *)0x0;
  }
  if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)puVar2;
    uVar6 = (**(code **)(*plVar5 + 0x60))();
    if ((int)uVar6 < 0x11) {
      uVar10 = 0;
    }
    else {
      if (4 < *(uint *)(lVar8 + 0x5e8)) goto LAB_014ea2c8;
      uVar10 = 5U >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_014ea2c8:
    uVar10 = 1;
  }
  if (plVar9 != (long *)0x0) {
    lVar8 = plVar9[0x2a];
    uVar1 = *(uint *)(plVar9 + 0x49);
    if (((*PTR_DAT_04bb5928 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb5928);
    }
    uVar6 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb5920);
    if ((uVar6 & 1) != 0) {
      if ((int)lVar8 != 1) {
        uVar10 = 1;
      }
      if ((uVar10 == 0) && ((uVar1 >> 4 & 1) != 0)) {
        uVar7 = FUN_0147ddd0(plVar9,2,&local_70);
        if ((int)*(uint *)(param_1 + 0xe8) < 1) {
          return;
        }
        plVar9 = *(long **)(param_1 + 0xf0);
        lVar8 = (ulong)*(uint *)(param_1 + 0xe8) << 3;
        do {
          local_88 = local_68;
          local_80 = (undefined4)local_60;
          local_7c = local_60._4_4_;
          uStack_78 = local_58;
          local_90 = puVar3 + 0x10;
          plVar5 = (long *)FUN_014e7558(uVar7,*(undefined4 *)(*plVar9 + 0x14));
          uVar7 = 0;
          if (plVar5 != (long *)0x0) {
            uVar7 = (**(code **)(*plVar5 + 0x360))(plVar5,&local_90,1);
          }
          plVar9 = plVar9 + 1;
          lVar8 = lVar8 + -8;
        } while (lVar8 != 0);
        return;
      }
    }
  }
LAB_014ea3a4:
  if (*(int *)(param_1 + 0x98) != 0) {
    plVar9 = (long *)FUN_014ba988(param_1 + 0x90);
    uVar6 = 0;
    if (plVar9 != (long *)0x0) {
      uVar7 = (**(code **)(*plVar9 + 0x60))(plVar9,&local_70);
      if ((int)*(uint *)(param_1 + 0xe8) < 1) {
        return;
      }
      plVar9 = *(long **)(param_1 + 0xf0);
      lVar8 = (ulong)*(uint *)(param_1 + 0xe8) << 3;
      do {
        local_88 = local_68;
        local_80 = (undefined4)local_60;
        local_7c = local_60._4_4_;
        uStack_78 = local_58;
        local_90 = puVar3 + 0x10;
        plVar5 = (long *)FUN_014e7558(uVar7,*(undefined4 *)(*plVar9 + 0x14));
        uVar7 = 0;
        if (plVar5 != (long *)0x0) {
          uVar7 = (**(code **)(*plVar5 + 0x360))(plVar5,&local_90,1);
        }
        plVar9 = plVar9 + 1;
        lVar8 = lVar8 + -8;
      } while (lVar8 != 0);
      return;
    }
  }
  if ((*(int *)(param_1 + 0x18) == 3) &&
     (plVar9 = (long *)FUN_014e7558(uVar6,*(undefined4 *)(param_1 + 0x8c)), plVar9 != (long *)0x0))
  {
    (**(code **)(*plVar9 + 0x360))(plVar9,&local_70,0);
  }
  return;
}

