
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c000c8(long param_1,uint *param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  undefined *puVar10;
  uint local_100 [2];
  undefined ***pppuStack_f8;
  undefined *puStack_f0;
  undefined8 local_e8;
  undefined *puStack_e0;
  undefined *local_d8;
  undefined *puStack_d0;
  undefined *local_c8;
  undefined *puStack_c0;
  char *local_b8;
  undefined8 uStack_b0;
  undefined **local_a8;
  undefined *puStack_a0;
  undefined *local_98;
  undefined *puStack_90;
  undefined *local_88;
  undefined8 uStack_80;
  ulong local_78;
  undefined *puStack_70;
  undefined *local_68;
  undefined *puStack_60;
  undefined *local_58;
  undefined8 uStack_50;
  uint local_44;
  
  puVar1 = PTR_DAT_04bb27c0;
  uVar4 = *param_2;
  lVar5 = *(long *)PTR_DAT_04bb27c0;
  if (lVar5 == 0) {
    if (_DAT_0000015c == 10) goto LAB_01c00220;
    if (_DAT_0000015c != 0x4f) goto LAB_01c00280;
LAB_01c00230:
    nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    local_78 = 0xffff0039ffffffff;
    uVar3 = 0x39;
  }
  else {
    if (uVar4 == 0) {
LAB_01c00220:
      if (_DAT_0000015c == 0x4f) goto LAB_01c00230;
LAB_01c00280:
      uVar7 = (ulong)(uVar4 >> 0x14);
      lVar6 = *(long *)(*(long *)(lVar5 + 0x1c0) + 8);
    }
    else {
      plVar9 = *(long **)(*(long *)(*(long *)(lVar5 + 0x1c0) + 8) +
                         ((ulong)(uVar4 >> 0x11) & 0x7ff8));
      if (plVar9 != (long *)0x0) {
        iVar2 = _DAT_0000015c;
        if (*(uint *)(plVar9 + 0x46) == uVar4) {
          iVar2 = *(int *)((long)plVar9 + 0x15c);
        }
        if (((iVar2 == 10) && ((*(uint *)(plVar9 + 0x49) >> 1 & 1) == 0)) &&
           (*(uint *)(plVar9 + 0x46) == uVar4)) {
          if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
             (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar2 != 0)) {
            *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
            __cxa_guard_release(PTR_DAT_04bb37d8);
          }
          uVar7 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb37d0);
          if ((uVar7 & 1) != 0) {
            FUN_01c003f0(param_1,plVar9 + 0x7c,0);
            return;
          }
          lVar5 = *(long *)puVar1;
          uVar4 = *param_2;
          if ((lVar5 == 0) || (uVar4 == 0)) goto LAB_01c00220;
        }
      }
      uVar7 = (ulong)(uVar4 >> 0x14);
      lVar6 = *(long *)(*(long *)(lVar5 + 0x1c0) + 8);
      lVar8 = *(long *)(lVar6 + uVar7 * 8);
      if ((lVar8 == 0) || (*(uint *)(lVar8 + 0x230) != uVar4)) goto LAB_01c00220;
      if (*(int *)(lVar8 + 0x15c) == 0x4f) goto LAB_01c00230;
    }
    if (*(int *)(*(long *)(lVar6 + uVar7 * 8) + 0x15c) != 0x85) {
      return;
    }
    nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    local_78 = 0xffff003affffffff;
    uVar3 = 0x3a;
  }
  puVar1 = PTR_DAT_04bb2120;
  uStack_80 = 0;
  puVar10 = PTR_DAT_04bb2020 + 0x10;
  uStack_50 = 0;
  local_78 = local_78 & 0xffffffffffff;
  local_a8 = &PTR_LAB_04a3e588;
  local_68 = &DAT_040e4c75;
  lVar6 = *(long *)PTR_DAT_04bb26a8;
  local_100[0] = 0xffffffff;
  local_100[1] = 0;
  pppuStack_f8._0_4_ = 0;
  puStack_a0 = puVar10;
  local_98 = PTR_DAT_04bb2120;
  puStack_90 = puVar10;
  local_88 = PTR_DAT_04bb2120;
  puStack_70 = puVar10;
  puStack_60 = puVar10;
  local_58 = PTR_DAT_04bb2120;
  FUN_029b41c4(lVar6 + 0xb4598,local_100,0,uVar3);
  local_44 = local_100[0];
  nn::os::LockMutex((MutexType *)(lVar6 + 0xb6088));
  lVar5 = lVar6 + 0xb45a0 + (ulong)local_44 * 0x20;
  if (8 < local_44) {
    lVar5 = lVar6 + 0xb45a0;
  }
  uVar3 = *(undefined8 *)(lVar5 + 0x18);
  nn::os::UnlockMutex((MutexType *)(lVar6 + 0xb6088));
  pppuStack_f8 = &local_a8;
  local_100[0] = local_100[0] & 0xffff0000;
  local_b8 = "DoubutsugoObject";
  uStack_b0 = 0;
  puStack_f0 = puVar10;
  local_e8 = uVar3;
  puStack_e0 = puVar10;
  local_d8 = puVar1;
  puStack_d0 = puVar10;
  local_c8 = puVar1;
  puStack_c0 = puVar10;
  FUN_038387b8(param_1 + 0x188,local_100);
  *(undefined1 *)(param_1 + 0x1b8) = 1;
  return;
}

