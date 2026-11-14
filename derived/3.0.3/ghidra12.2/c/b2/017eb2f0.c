
void FUN_017eb2f0(long param_1)

{
  long lVar1;
  uint uVar2;
  uint *puVar3;
  short sVar4;
  undefined *puVar5;
  bool bVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long *plVar13;
  undefined8 uVar14;
  undefined1 uVar15;
  long lVar16;
  long *plVar17;
  uint uVar18;
  undefined1 *__src;
  short local_12c [2];
  uint local_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined8 local_11c;
  undefined4 local_114;
  undefined4 local_110;
  undefined8 local_10c;
  undefined8 local_104;
  undefined *local_f8;
  undefined1 *puStack_f0;
  int local_e8;
  undefined1 local_e4 [127];
  undefined1 local_65;
  long local_60;
  long local_58;
  
  if ((*(short *)(param_1 + 0xd0) == -2) ||
     (uVar11 = FUN_0277d7b4((short *)(param_1 + 0xd0),param_1 + 0xe8), (uVar11 & 1) != 0)) {
    FUN_007ef010(&local_128,param_1 + 0xd8);
    if (((local_128 & 0xffff) != (uint)*(ushort *)PTR_DAT_04bb3170) &&
       ((*(byte *)(param_1 + 0xf2) != (*(byte *)(param_1 + 0x13c) >> 4 & 1) ||
        (FUN_007ef010(local_12c,param_1 + 0xd8), local_12c[0] != *(short *)(param_1 + 0xf0)))))
    goto LAB_017eb3c0;
    bVar6 = *(int *)(param_1 + 0x1f0) != -1;
    if ((bVar6) && (*(byte *)(param_1 + 0xf2) == (*(byte *)(param_1 + 0x13c) >> 4 & 1))) {
      bVar6 = *(int *)(param_1 + 0x1f0) != *(int *)(param_1 + 0x1f8);
    }
    if (bVar6) goto LAB_017eb3c0;
    uVar15 = 0;
  }
  else {
LAB_017eb3c0:
    uVar15 = 1;
  }
  *(undefined1 *)(param_1 + 0x210) = uVar15;
  puVar5 = PTR_DAT_04bb2720;
  lVar16 = *(long *)PTR_DAT_04bb2720;
  iVar9 = 0;
  if (lVar16 != 0) {
    if (*(long *)(lVar16 + 0x330) == 0) {
      iVar9 = 0;
    }
    else {
      puVar12 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar16 + 0x338));
      iVar8 = FUN_006bd550(*puVar12,0);
      iVar9 = 0;
      if (iVar8 == 0x758f7eaf) {
        iVar9 = 0;
        if (*(long *)puVar5 != 0) {
          lVar16 = *(long *)(*(long *)puVar5 + 0x330);
          iVar9 = 0;
          if (lVar16 != 0) {
            iVar9 = *(int *)(lVar16 + 0x244);
          }
        }
      }
    }
  }
  puVar5 = PTR_DAT_04bb32e8;
  if ((*(int *)(PTR_DAT_04bbe4b0 + 0xa4) == iVar9) && ((*(byte *)(param_1 + 0x1ec) & 1) != 0)) {
    uVar11 = FUN_00a8255c(*(long *)PTR_DAT_04bb32e8 + 0x4060,(undefined8 *)(param_1 + 0x1e0));
    if (uVar11 != 0) {
      if (((long)uVar11 < 0) || (0x1d < uVar11)) {
        *(byte *)(param_1 + 0x1ec) = *(byte *)(param_1 + 0x1ec) | 1;
        *(undefined8 *)(param_1 + 0x1e0) = *(undefined8 *)(*(long *)puVar5 + 0x4060);
      }
      else if ((*(long *)PTR_DAT_04bb3960 == 0) ||
              (*(uint *)(*(long *)PTR_DAT_04bb3960 + 0xf5b58) < 0x709)) {
        *(undefined8 *)(param_1 + 0x1e0) = *(undefined8 *)(*(long *)puVar5 + 0x4060);
        *(int *)(param_1 + 0x1e8) = *(int *)(param_1 + 0x1e8) + (int)uVar11;
      }
      else {
        *(undefined8 *)(param_1 + 0x1e0) = *(undefined8 *)(*(long *)puVar5 + 0x4060);
      }
    }
  }
  sVar4 = *(short *)PTR_DAT_04bb6298;
  if (sVar4 != -1) {
    local_128 = 0x15;
    puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
    if (0xff < (uint)(int)sVar4) {
      puVar3 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar3 >> 0x15 & 1) != 0) {
      bVar7 = FUN_01810f30();
      *(byte *)(param_1 + 0x1bc) = bVar7 & 1;
    }
  }
  if (*(char *)(param_1 + 0x134) != '\0') {
    *(undefined1 *)(param_1 + 0x134) = 0;
    FUN_017e5788(param_1);
  }
  uVar18 = *(int *)(param_1 + 0x150) + 1;
  *(uint *)(param_1 + 0x150) = uVar18;
  if ((*(char *)(param_1 + 0x160) == '\0') && (*(uint *)(param_1 + 0x158) < uVar18)) {
    *(uint *)(param_1 + 0x150) = *(uint *)(param_1 + 0x158);
  }
  uVar18 = *(int *)(param_1 + 0x154) + 1;
  *(uint *)(param_1 + 0x154) = uVar18;
  if ((*(char *)(param_1 + 0x161) == '\0') && (*(uint *)(param_1 + 0x15c) < uVar18)) {
    *(uint *)(param_1 + 0x154) = *(uint *)(param_1 + 0x15c);
  }
  uVar18 = *(int *)(param_1 + 0x168) + 1;
  *(uint *)(param_1 + 0x168) = uVar18;
  if ((*(char *)(param_1 + 0x178) == '\0') && (*(uint *)(param_1 + 0x170) < uVar18)) {
    *(uint *)(param_1 + 0x168) = *(uint *)(param_1 + 0x170);
  }
  uVar18 = *(int *)(param_1 + 0x16c) + 1;
  *(uint *)(param_1 + 0x16c) = uVar18;
  if ((*(char *)(param_1 + 0x179) == '\0') && (*(uint *)(param_1 + 0x174) < uVar18)) {
    *(uint *)(param_1 + 0x16c) = *(uint *)(param_1 + 0x174);
  }
  puVar5 = PTR_DAT_04bb27c0;
  if (*(char *)(param_1 + 0x1a0) != '\0') {
    lVar16 = *(long *)PTR_DAT_04bb27c0;
    if (lVar16 == 0) {
      plVar17 = (long *)0x0;
      bVar6 = false;
      uVar11 = 0;
    }
    else {
      uVar18 = *(uint *)(param_1 + 0xac);
      if ((((uVar18 == 0) ||
           (plVar17 = *(long **)(*(long *)(*(long *)(lVar16 + 0x1c0) + 8) +
                                ((ulong)(uVar18 >> 0x11) & 0x7ff8)), plVar17 == (long *)0x0)) ||
          ((*(uint *)(plVar17 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar17 + 0x46) != uVar18)) {
        plVar17 = (long *)0x0;
      }
      if ((*(int *)(lVar16 + 0x288) == 1) || (*(int *)(lVar16 + 0x288) == -1)) {
        plVar13 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        lVar16 = *(long *)puVar5;
        iVar9 = (**(code **)(*plVar13 + 0x60))();
        if (iVar9 < 0x11) {
          uVar11 = 1;
          uVar18 = 1;
        }
        else {
          if (4 < *(uint *)(lVar16 + 0x5e8)) goto LAB_017eb6b4;
          uVar11 = 0x101000100 >> (((ulong)*(uint *)(lVar16 + 0x5e8) & 7) << 3);
          uVar18 = (uint)uVar11;
        }
      }
      else {
LAB_017eb6b4:
        uVar11 = 0;
        uVar18 = 0;
      }
      if (plVar17 == (long *)0x0) {
        bVar6 = false;
      }
      else {
        bVar6 = (int)plVar17[0x2a] == 1;
        if (((*PTR_DAT_04bbe478 & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(PTR_DAT_04bbe478), iVar9 != 0)) {
          *(undefined **)PTR_DAT_04bbe470 = PTR_DAT_04bb2e50 + 0x10;
          __cxa_guard_release(PTR_DAT_04bbe478);
        }
        uVar11 = (**(code **)(*plVar17 + 0x20))(plVar17,PTR_DAT_04bbe470);
        if ((uVar11 & 1) == 0) {
          uVar18 = 0;
        }
        uVar11 = (ulong)uVar18;
      }
    }
    local_65 = 0;
    local_e4[0] = 0;
    local_e8 = 0x80;
    local_f8 = PTR_DAT_04bb2d88 + 0x10;
    local_58 = 0;
    local_60 = CONCAT26(local_60._6_2_,7);
    puStack_f0 = local_e4;
    if (((plVar17 != (long *)0x0) && (bVar6)) && ((uVar11 & 0xff) != 0)) {
      *(undefined1 *)(param_1 + 0x1a0) = 0;
      local_128 = *(uint *)(plVar17 + 0x2b);
      uStack_124 = *(undefined4 *)((long)plVar17 + 0x15c);
      local_120 = (undefined4)plVar17[0x2c];
      local_11c = *(undefined8 *)((long)plVar17 + 0x164);
      local_114 = *(undefined4 *)((long)plVar17 + 0x16c);
      local_110 = (undefined4)plVar17[0x2e];
      local_10c = *(undefined8 *)((long)plVar17 + 0x174);
      local_104 = *(undefined8 *)((long)plVar17 + 0x17c);
      (**(code **)(plVar17[0x31] + 0x18))(plVar17 + 0x31);
      __src = (undefined1 *)plVar17[0x32];
      if (local_e4 != __src) {
        (**(code **)(plVar17[0x31] + 0x18))(plVar17 + 0x31);
        lVar16 = 0;
        do {
          if (*(char *)(plVar17[0x32] + lVar16) == '\0') goto LAB_017eb81c;
          lVar1 = plVar17[0x32] + lVar16;
          if (*(char *)(lVar1 + 1) == '\0') {
            lVar16 = lVar16 + 1;
            goto LAB_017eb81c;
          }
          if (*(char *)(lVar1 + 2) == '\0') {
            lVar16 = lVar16 + 2;
            goto LAB_017eb81c;
          }
          lVar16 = lVar16 + 3;
        } while (lVar16 != 0x80001);
        lVar16 = 0;
LAB_017eb81c:
        iVar9 = (int)lVar16;
        if (local_e8 <= (int)lVar16) {
          iVar9 = local_e8 + -1;
        }
        memcpy(local_e4,__src,(long)iVar9);
        local_e4[iVar9] = 0;
      }
      local_60 = plVar17[0x44];
      local_58 = plVar17[0x45];
      FUN_006fb3d0(plVar17);
      *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)(param_1 + 0xd0);
      *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_1 + 0xd4);
      *(undefined2 *)(param_1 + 0xe4) = *(undefined2 *)(param_1 + 0xd8);
      *(undefined4 *)(param_1 + 500) = *(undefined4 *)(param_1 + 0x1f0);
      *(byte *)(param_1 + 0x10e) = *(byte *)(param_1 + 0x13c) >> 7;
      *(byte *)(param_1 + 0xe6) = *(byte *)(param_1 + 0x13c) >> 4 & 1;
      *(undefined1 *)(param_1 + 0x10f) = *(undefined1 *)(param_1 + 0xfe);
      *(undefined4 *)(param_1 + 0x104) = *(undefined4 *)(param_1 + 0xf4);
      *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(param_1 + 0xf8);
      *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_1 + 0x100);
      *(undefined2 *)(param_1 + 0x10c) = *(undefined2 *)(param_1 + 0xfc);
      *(undefined4 *)(param_1 + 0x200) = *(undefined4 *)(param_1 + 0x1fc);
      FUN_017e8150(param_1,0);
      FUN_017e83a0(param_1,0);
      FUN_017e8610(param_1,0);
      FUN_017ebc00(param_1,1);
      uVar14 = *(undefined8 *)puVar5;
      *(undefined1 *)(param_1 + 0x184) = 1;
      uVar10 = FUN_007402e0(uVar14,&local_128,local_128,1);
      *(undefined4 *)(param_1 + 0xac) = uVar10;
    }
  }
  if (*(char *)(param_1 + 0x184) == '\0') {
    return;
  }
  lVar16 = *(long *)puVar5;
  if (lVar16 == 0) {
    return;
  }
  uVar18 = *(uint *)(param_1 + 0xac);
  if (((uVar18 == 0) ||
      (plVar17 = *(long **)(*(long *)(*(long *)(lVar16 + 0x1c0) + 8) +
                           ((ulong)(uVar18 >> 0x11) & 0x7ff8)), plVar17 == (long *)0x0)) ||
     (((*(uint *)(plVar17 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar17 + 0x46) != uVar18)))) {
    plVar17 = (long *)0x0;
  }
  if ((*(int *)(lVar16 + 0x288) == 1) || (*(int *)(lVar16 + 0x288) == -1)) {
    plVar13 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar16 = *(long *)puVar5;
    iVar9 = (**(code **)(*plVar13 + 0x60))();
    if (iVar9 < 0x11) {
      uVar18 = 1;
      goto joined_r0x017eb9b8;
    }
    if (*(uint *)(lVar16 + 0x5e8) < 5) {
      uVar18 = 0x1aU >> (ulong)(*(uint *)(lVar16 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x017eb9b8;
    }
  }
  uVar18 = 0;
joined_r0x017eb9b8:
  if (plVar17 != (long *)0x0) {
    lVar16 = plVar17[0x2a];
    if (((*PTR_DAT_04bbe478 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04bbe478), iVar9 != 0)) {
      *(undefined **)PTR_DAT_04bbe470 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbe478);
    }
    uVar11 = (**(code **)(*plVar17 + 0x20))(plVar17,PTR_DAT_04bbe470);
    uVar2 = 0;
    if ((int)lVar16 == 1) {
      uVar2 = uVar18;
    }
    if (((uVar11 & 1) != 0) && (uVar2 != 0)) {
      *(undefined1 *)(param_1 + 0x184) = 0;
    }
  }
  return;
}

