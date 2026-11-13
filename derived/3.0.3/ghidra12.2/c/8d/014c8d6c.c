
void FUN_014c8d6c(long param_1,undefined8 param_2,undefined4 *param_3,uint *param_4,
                 undefined4 param_5)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  uint uVar10;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  long local_90;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined8 local_7c;
  undefined4 local_74;
  uint local_70;
  undefined4 uStack_6c;
  undefined1 local_68;
  undefined4 local_64;
  undefined1 local_60;
  int local_5c;
  int local_58;
  int local_54;
  
  puVar2 = PTR_DAT_04bb27c0;
  if (param_4 != (uint *)0x0) {
    uVar10 = *param_4;
    goto LAB_014c8ec8;
  }
  lVar9 = *(long *)PTR_DAT_04bb27c0;
  if (lVar9 != 0) {
    uVar10 = *(uint *)PTR_DAT_04bb32f8;
    if ((((uVar10 == 0) ||
         (plVar8 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                             ((ulong)(uVar10 >> 0x11) & 0x7ff8)), plVar8 == (long *)0x0)) ||
        ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar8 + 0x46) != uVar10)) {
      plVar8 = (long *)0x0;
    }
    if (*(int *)(lVar9 + 0x288) == 1 || *(int *)(lVar9 + 0x288) == -1) {
      plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar9 = *(long *)puVar2;
      iVar3 = (**(code **)(*plVar6 + 0x60))();
      if (iVar3 < 0x11) {
        uVar4 = 1;
      }
      else {
        if (4 < *(uint *)(lVar9 + 0x5e8)) goto LAB_014c8e50;
        uVar4 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_014c8e50:
      uVar4 = 0;
    }
    if (plVar8 != (long *)0x0) {
      lVar9 = plVar8[0x2a];
      if (((*PTR_DAT_04bb3280 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar3 != 0)) {
        *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb3280);
      }
      uVar7 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb3278);
      uVar10 = 0;
      uVar1 = 0;
      if ((int)lVar9 == 1) {
        uVar1 = uVar4;
      }
      if (((uVar7 & 1) != 0) && (uVar1 != 0)) {
        FUN_00900940(&local_5c,plVar8);
        uVar10 = local_5c + 0x20000000U >> 0x1e;
      }
      goto LAB_014c8ec8;
    }
  }
  uVar10 = 0;
LAB_014c8ec8:
  puVar2 = PTR_DAT_04bb43c0;
  local_68 = 0;
  local_90 = 0;
  local_a0 = PTR_DAT_04bc0510 + 0x10;
  local_98 = *param_3;
  uStack_94 = param_3[1];
  lVar9 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(&local_98);
  if (*(long *)puVar2 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      lVar9 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4(param_3);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar9 + 0x1d8)) &&
         (lVar9 = *(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8), lVar9 != 0)) {
        local_90 = lVar9;
      }
    }
  }
  local_54 = 0xd;
  local_58 = FUN_01ae7550(&local_a0);
  local_84 = *param_3;
  uStack_80 = param_3[1];
  local_74 = *(undefined4 *)(param_1 + 0xa44);
  local_7c = *(undefined8 *)(param_1 + 0xa3c);
  uStack_6c = 6;
  if (local_58 != local_54) {
    uStack_6c = *(undefined4 *)(param_1 + 0xb28);
  }
  local_60 = 1;
  local_70 = uVar10;
  local_64 = param_5;
  uVar5 = FUN_0148a480(param_2,&local_84);
  FUN_01543958(&local_84,uVar5);
  return;
}

