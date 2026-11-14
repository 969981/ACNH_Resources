
undefined8 FUN_0150ac24(long param_1,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  byte *pbVar11;
  undefined2 local_48;
  undefined1 local_46;
  undefined1 local_45;
  undefined4 local_44;
  undefined1 auStack_26 [2];
  uint local_24;
  
  uVar6 = *(uint *)(param_1 + 8);
  local_24 = uVar6;
  uVar7 = FUN_015039ac(&local_24);
  puVar3 = PTR_DAT_04bb27c0;
  if ((uVar7 & 1) == 0) {
    return 0;
  }
  lVar9 = *(long *)PTR_DAT_04bb27c0;
  if (lVar9 == 0) {
    return 0;
  }
  if ((((uVar6 == 0) ||
       (plVar10 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                            ((ulong)(uVar6 >> 0x11) & 0x7ff8)), plVar10 == (long *)0x0)) ||
      ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar10 + 0x46) != uVar6)) {
    plVar10 = (long *)0x0;
  }
  if (*(int *)(lVar9 + 0x288) == 1 || *(int *)(lVar9 + 0x288) == -1) {
    plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar9 = *(long *)puVar3;
    iVar4 = (**(code **)(*plVar8 + 0x60))();
    if (iVar4 < 0x11) {
      uVar6 = 1;
      goto joined_r0x0150acf8;
    }
    if (*(uint *)(lVar9 + 0x5e8) < 5) {
      uVar6 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x0150acf8;
    }
  }
  uVar6 = 0;
joined_r0x0150acf8:
  if (plVar10 != (long *)0x0) {
    lVar9 = plVar10[0x2a];
    uVar1 = *(uint *)(plVar10 + 0x49);
    if (((*PTR_DAT_04bb5928 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb5928);
    }
    uVar5 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb5920);
    if ((int)lVar9 != 1) {
      return 0;
    }
    if ((uVar5 & uVar6) == 0) {
      return 0;
    }
    if ((uVar1 >> 4 & 1) == 0) {
      return 0;
    }
    uVar2 = *(undefined4 *)(param_2 + 0x10);
    FUN_007ef010(auStack_26,param_2 + 0x18);
    uVar7 = FUN_01479d98(plVar10,uVar2,auStack_26,*(undefined4 *)(param_2 + 0x14));
    if (((((uVar7 & 1) != 0) && (pbVar11 = (byte *)(param_2 + 0x1a), *pbVar11 < 8)) &&
        ((uVar6 = FUN_02582d8c(pbVar11,1), puVar3 = PTR_DAT_04bb4fb8, uVar6 < 8 &&
         (((*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar6 * 0x13f0 + 0x13d4) != '\0' &&
           (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar6 * 0x13f0 + 0x13d6) != '\0')) &&
          (uVar6 = FUN_02582d8c(pbVar11,1), uVar6 < 8)))))) &&
       (*(char *)(*(long *)puVar3 + (ulong)uVar6 * 0x13f0 + 0x13d4) != '\0')) {
      lVar9 = *(long *)puVar3 + (ulong)uVar6 * 0x13f0;
      FUN_01476a50(&local_48,plVar10);
      *(undefined2 *)(lVar9 + 0x560) = local_48;
      *(undefined1 *)(lVar9 + 0x562) = local_46;
      *(undefined1 *)(lVar9 + 0x563) = local_45;
      *(undefined4 *)(lVar9 + 0x564) = local_44;
      *(undefined1 *)(lVar9 + 0x568) = *(undefined1 *)(plVar10[0x151] + 0x308);
      *(int *)(lVar9 + 0x578) = (int)plVar10[0x59];
      *(undefined4 *)(lVar9 + 0x57c) = *(undefined4 *)((long)plVar10 + 0x2cc);
      *(int *)(lVar9 + 0x580) = (int)plVar10[0x5a];
      *(int *)(lVar9 + 0x584) = (int)plVar10[0x46];
      return 1;
    }
  }
  return 0;
}

