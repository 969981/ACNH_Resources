
undefined8 FUN_01fa01e8(long param_1,uint *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  undefined4 *puVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  undefined8 *puVar12;
  undefined4 local_1f8 [25];
  undefined4 local_194;
  undefined2 local_190;
  undefined1 local_18e;
  undefined4 local_10c;
  undefined1 local_ec;
  
  puVar3 = PTR_DAT_04bb27c0;
  lVar9 = *(long *)PTR_DAT_04bb27c0;
  if (lVar9 == 0) {
    return 0;
  }
  uVar11 = *param_2;
  if ((((uVar11 == 0) ||
       (plVar10 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                            ((ulong)(uVar11 >> 0x11) & 0x7ff8)), plVar10 == (long *)0x0)) ||
      ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar10 + 0x46) != uVar11)) {
    plVar10 = (long *)0x0;
  }
  if (*(int *)(lVar9 + 0x288) == 1 || *(int *)(lVar9 + 0x288) == -1) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar9 = *(long *)puVar3;
    iVar5 = (**(code **)(*plVar6 + 0x60))();
    if (iVar5 < 0x11) {
      uVar11 = 1;
      goto joined_r0x01fa02b0;
    }
    if (*(uint *)(lVar9 + 0x5e8) < 5) {
      uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x01fa02b0;
    }
  }
  uVar11 = 0;
joined_r0x01fa02b0:
  if (plVar10 != (long *)0x0) {
    lVar9 = plVar10[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar7 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb37d0);
    puVar3 = PTR_DAT_04bb6710;
    uVar1 = 0;
    if ((int)lVar9 == 1) {
      uVar1 = uVar11;
    }
    if ((uVar7 & 1) == 0) {
      return 0;
    }
    if (uVar1 == 0) {
      return 0;
    }
    plVar6 = (long *)plVar10[0x77];
    if (((*PTR_DAT_04bb6710 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb6710), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bb6708 = PTR_DAT_04bb6718 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb6710);
    }
    puVar4 = PTR_DAT_04bb6708;
    if (((((plVar6 != (long *)0x0) &&
          (uVar7 = (**(code **)*plVar6)(plVar6,PTR_DAT_04bb6708), (uVar7 & 1) != 0)) &&
         (*(int *)(plVar6[1] + 0x750) != 3)) &&
        ((4 < (int)plVar6[0xef6] - 3U &&
         (uVar7 = (**(code **)(*plVar6 + 0x608))(plVar6), (uVar7 & 1) == 0)))) &&
       ((((char)plVar6[0x15f2] == '\0' && *(char *)((long)plVar6 + 0xaf9c) == '\0' &&
         ((*(int *)((long)plVar6 + 0x77f4) != 0x3e && ((int)plVar6[0xef6] != 0x3e)))) &&
        (uVar7 = (**(code **)(*plVar6 + 0x540))(plVar6), (uVar7 & 1) != 0)))) {
      puVar12 = (undefined8 *)plVar10[0x77];
      if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb6710), iVar5 != 0)) {
        *(undefined **)puVar4 = PTR_DAT_04bb6718 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb6710);
      }
      if ((((puVar12 != (undefined8 *)0x0) &&
           (uVar7 = (**(code **)*puVar12)(puVar12,PTR_DAT_04bb6708), (uVar7 & 1) != 0)) &&
          (*(int *)((long)puVar12 + 0x77f4) != 0x10)) && (*(int *)(puVar12 + 0xef6) != 0x10)) {
        uVar2 = *(undefined4 *)(*(long *)(param_1 + 8) + 0x230);
        if ((*(int *)(puVar12[2] + 0x360) != 0x13) &&
           (local_1f8[0] = 0x13, *(int *)(puVar12[2] + 0x378) != 0x13)) {
          plVar6 = (long *)FUN_016debb0(puVar12[1]);
          uVar7 = (**(code **)(*plVar6 + 0x100))();
          if (((uVar7 & 1) != 0) && (*(char *)((long)puVar12 + 0xaf9c) == '\0')) {
            *(undefined4 *)(puVar12 + 0x15f4) = 0;
            *(undefined4 *)((long)puVar12 + 0xafa4) = uVar2;
            *(undefined1 *)((long)puVar12 + 0xaf9c) = 1;
            puVar3 = PTR_DAT_04bb37e0;
            *(undefined2 *)(puVar12 + 0x15f5) = *(undefined2 *)PTR_DAT_04bb37e0;
            *(undefined *)((long)puVar12 + 0xafaa) = puVar3[2];
            *(undefined *)((long)puVar12 + 0xafab) = puVar3[3];
            uVar2 = *(undefined4 *)(puVar3 + 4);
            *(undefined1 *)(puVar12 + 0x15f3) = 0;
            *(undefined4 *)((long)puVar12 + 0xafac) = uVar2;
            *(undefined1 *)(puVar12 + 0x15f2) = 0;
            lVar9 = plVar10[0x46];
            *(undefined1 *)(param_1 + 0x7878) = 1;
            *(int *)(param_1 + 0x7d70) = (int)lVar9;
            FUN_01e63f1c(local_1f8);
            local_1f8[0] = 0x40;
            local_ec = 1;
            puVar8 = (undefined4 *)
                     (**(code **)(*(long *)(*(long *)PTR_DAT_04bb3968 + 0x177c0) + 0xf0))();
            local_10c = *puVar8;
            local_18e = 1;
            local_190 = 0x101;
            local_194 = 1;
            FUN_01fb1020(param_1,local_1f8,0x1e);
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

