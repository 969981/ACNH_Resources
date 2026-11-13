
void FUN_014c9268(long param_1,undefined8 param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined8 local_64;
  undefined4 local_5c;
  uint local_58;
  undefined4 uStack_54;
  undefined1 local_50;
  undefined4 local_4c;
  undefined1 local_48;
  int local_44;
  
  puVar2 = PTR_DAT_04bb27c0;
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  local_58 = 0;
  if (lVar6 == 0) goto LAB_014c93b0;
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
      if (4 < *(uint *)(lVar6 + 0x5e8)) goto LAB_014c9338;
      uVar8 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_014c9338:
    uVar8 = 0;
  }
  if (plVar7 == (long *)0x0) {
    local_58 = 0;
  }
  else {
    lVar6 = plVar7[0x2a];
    if (((*PTR_DAT_04bb3280 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3280);
    }
    uVar5 = (**(code **)(*plVar7 + 0x20))(plVar7,PTR_DAT_04bb3278);
    local_58 = 0;
    uVar1 = 0;
    if ((int)lVar6 == 1) {
      uVar1 = uVar8;
    }
    if (((uVar5 & 1) != 0) && (uVar1 != 0)) {
      FUN_00900940(&local_44,plVar7);
      local_58 = local_44 + 0x20000000U >> 0x1e;
    }
  }
LAB_014c93b0:
  local_5c = *(undefined4 *)(param_1 + 0xa44);
  local_64 = *(undefined8 *)(param_1 + 0xa3c);
  local_4c = 0;
  local_6c = *param_3;
  uStack_68 = param_3[1];
  local_50 = 0;
  uStack_54 = *(undefined4 *)(param_1 + 0xb28);
  local_48 = 1;
  FUN_0148c3f0(param_2,&local_6c);
  return;
}

