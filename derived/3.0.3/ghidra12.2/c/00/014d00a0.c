
uint FUN_014d00a0(long param_1,undefined4 *param_2,undefined1 param_3,long param_4,long param_5,
                 undefined1 param_6)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long *plVar4;
  uint *puVar5;
  uint *puVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined **local_b0;
  undefined **ppuStack_a8;
  undefined **local_a0;
  undefined *local_90;
  undefined *puStack_88;
  undefined8 local_80;
  undefined *puStack_78;
  undefined8 local_70;
  undefined *local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined1 local_44;
  undefined1 local_43;
  
  puVar6 = (uint *)PTR_DAT_04bb3238;
  local_50 = *(undefined4 *)(param_1 + 8);
  uStack_4c = *(undefined4 *)(param_1 + 0xc);
  ppuStack_a8 = &local_58;
  local_48 = *param_2;
  puStack_88 = PTR_DAT_04bb2010 + 0x10;
  local_80 = 0;
  local_60 = 0;
  local_70 = 0;
  local_90 = PTR_DAT_04bbc1a0 + 0x10;
  local_b0 = &PTR_FUN_049a6cc0;
  local_a0 = &local_90;
  iVar2 = *(int *)(*(long *)PTR_DAT_04bb3968 + 0xb88);
  puStack_78 = puStack_88;
  local_68 = puStack_88;
  local_58 = puStack_88;
  local_44 = param_3;
  local_43 = param_6;
  if (iVar2 != 0) {
    puVar8 = *(undefined8 **)(*(long *)PTR_DAT_04bb3968 + 0xb90);
    lVar9 = (long)iVar2 << 3;
    do {
      puVar5 = (uint *)*puVar8;
      uVar3 = (*(code *)*local_b0)(&local_b0,puVar5);
      if ((uVar3 & 1) != 0) {
        puVar6 = puVar5;
        break;
      }
      puVar8 = puVar8 + 1;
      lVar9 = lVar9 + -8;
    } while (lVar9 != 0);
  }
  uVar1 = *puVar6;
  lVar9 = *(long *)PTR_DAT_04bb27c0;
  if (lVar9 != 0) {
    if ((((uVar1 == 0) ||
         (plVar7 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                             ((ulong)(uVar1 >> 0x11) & 0x7ff8)), plVar7 == (long *)0x0)) ||
        ((*(uint *)(plVar7 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar7 + 0x46) != uVar1)) {
      plVar7 = (long *)0x0;
    }
    if ((*(int *)(lVar9 + 0x288) == 1) || (*(int *)(lVar9 + 0x288) == -1)) {
      plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      (**(code **)(*plVar4 + 0x60))();
    }
    if (plVar7 != (long *)0x0) {
      if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar2 != 0)) {
        *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb37d8);
      }
      (**(code **)(*plVar7 + 0x20))(plVar7,PTR_DAT_04bb37d0);
      puVar8 = (undefined8 *)plVar7[0x77];
      if (((*PTR_DAT_04bb6728 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb6728), iVar2 != 0)) {
        *(undefined **)PTR_DAT_04bb6720 = PTR_DAT_04bb4100 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb6728);
      }
      if ((puVar8 != (undefined8 *)0x0) &&
         (uVar3 = (**(code **)*puVar8)(puVar8,PTR_DAT_04bb6720), (uVar3 & 1) != 0)) {
        if (param_4 != 0) {
          *(undefined4 *)(param_4 + 0x10) = (undefined4)local_80;
          *(undefined4 *)(param_4 + 0x14) = local_80._4_4_;
          *(undefined4 *)(param_4 + 0x20) = (undefined4)local_70;
          *(undefined4 *)(param_4 + 0x24) = local_70._4_4_;
        }
        if (param_5 != 0) {
          *(undefined4 *)(param_5 + 8) = (undefined4)local_60;
          *(undefined4 *)(param_5 + 0xc) = local_60._4_4_;
        }
      }
    }
  }
  return uVar1;
}

