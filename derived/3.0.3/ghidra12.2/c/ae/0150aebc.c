
undefined8 FUN_0150aebc(long param_1,byte *param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  undefined2 local_48;
  undefined1 local_46;
  undefined1 local_45;
  undefined4 local_44;
  uint local_24;
  
  uVar5 = *(uint *)(param_1 + 8);
  local_24 = uVar5;
  uVar6 = FUN_015039ac(&local_24);
  puVar2 = PTR_DAT_04bb27c0;
  if ((uVar6 & 1) == 0) {
    return 0;
  }
  lVar8 = *(long *)PTR_DAT_04bb27c0;
  if (lVar8 == 0) {
    return 0;
  }
  if ((((uVar5 == 0) ||
       (plVar9 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                           ((ulong)(uVar5 >> 0x11) & 0x7ff8)), plVar9 == (long *)0x0)) ||
      ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar9 + 0x46) != uVar5)) {
    plVar9 = (long *)0x0;
  }
  if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
    plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar7 + 0x60))();
    if (iVar3 < 0x11) {
      uVar5 = 1;
      goto joined_r0x0150af90;
    }
    if (*(uint *)(lVar8 + 0x5e8) < 5) {
      uVar5 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x0150af90;
    }
  }
  uVar5 = 0;
joined_r0x0150af90:
  if (plVar9 != (long *)0x0) {
    lVar8 = plVar9[0x2a];
    uVar1 = *(uint *)(plVar9 + 0x49);
    if (((*PTR_DAT_04bb5928 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb5928);
    }
    uVar4 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb5920);
    if ((int)lVar8 != 1) {
      return 0;
    }
    if ((uVar4 & uVar5) == 0) {
      return 0;
    }
    if ((uVar1 >> 4 & 1) == 0) {
      return 0;
    }
    uVar6 = FUN_01479f1c(plVar9,0xffffffff);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    if (7 < *param_2) {
      return 0;
    }
    uVar5 = FUN_02582d8c(param_2,1);
    puVar2 = PTR_DAT_04bb4fb8;
    if (((uVar5 < 8) &&
        (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar5 * 0x13f0 + 0x13d4) != '\0')) &&
       ((*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar5 * 0x13f0 + 0x13d6) != '\0' &&
        ((uVar5 = FUN_02582d8c(param_2,1), uVar5 < 8 &&
         (*(char *)(*(long *)puVar2 + (ulong)uVar5 * 0x13f0 + 0x13d4) != '\0')))))) {
      lVar8 = *(long *)puVar2 + (ulong)uVar5 * 0x13f0;
      FUN_01476a50(&local_48,plVar9);
      *(undefined2 *)(lVar8 + 0x560) = local_48;
      *(undefined1 *)(lVar8 + 0x562) = local_46;
      *(undefined1 *)(lVar8 + 0x563) = local_45;
      *(undefined4 *)(lVar8 + 0x564) = local_44;
      *(undefined1 *)(lVar8 + 0x568) = *(undefined1 *)(plVar9[0x151] + 0x308);
      *(int *)(lVar8 + 0x578) = (int)plVar9[0x59];
      *(undefined4 *)(lVar8 + 0x57c) = *(undefined4 *)((long)plVar9 + 0x2cc);
      *(int *)(lVar8 + 0x580) = (int)plVar9[0x5a];
      *(int *)(lVar8 + 0x584) = (int)plVar9[0x46];
      return 1;
    }
  }
  return 0;
}

