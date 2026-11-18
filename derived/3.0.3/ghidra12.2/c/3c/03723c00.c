
/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_03723c00(long param_1,long *param_2,undefined4 *param_3,undefined4 *param_4,undefined1 param_5,
            uint *param_6)

{
  undefined *puVar1;
  ulong *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong *__src;
  undefined8 local_168;
  undefined *local_160;
  undefined8 local_158;
  int iStack_150;
  ulong local_14c [2];
  undefined *local_138;
  uint *puStack_130;
  uint local_128;
  uint local_124 [31];
  undefined1 local_a5;
  undefined4 local_a0;
  undefined2 local_9c;
  undefined8 local_98;
  undefined *local_90;
  ulong *local_88;
  int local_80;
  undefined1 local_7c [7];
  undefined1 local_75;
  undefined2 local_6c;
  undefined1 local_6a;
  
  plVar10 = (long *)PTR_DAT_04bb2720;
  lVar8 = *(long *)PTR_DAT_04bb2720;
  if (lVar8 == 0) {
    puVar12 = &DAT_055c04a0;
  }
  else {
    puVar12 = &DAT_055c04a0;
    if (*(long *)(lVar8 + 0x330) != 0) {
      puVar12 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar8 + 0x338));
      iVar3 = FUN_006bd550(*puVar12,0);
      puVar12 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar3 != 0x758f7eaf) {
        puVar12 = &DAT_055c04a0;
      }
    }
  }
  iVar3 = *(int *)(puVar12 + 7);
  if ((iVar3 != -0x7975b8e8 && iVar3 != -0x17df00c3) && iVar3 != -0x3e092032) {
    return 0;
  }
  local_75 = 0;
  local_80 = 8;
  local_88 = (ulong *)local_7c;
  local_7c[0] = 0;
  local_90 = PTR_DAT_04bb3768 + 0x10;
  uVar6 = FUN_037242d0(param_1,param_2);
  puVar2 = local_88;
  if ((uVar6 & 1) == 0) {
    (**(code **)(*param_2 + 0x18))(param_2);
    __src = (ulong *)param_2[1];
    if (puVar2 != __src) {
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar8 = 0;
      do {
        if (*(char *)(param_2[1] + lVar8) == '\0') goto LAB_03723dac;
        lVar11 = param_2[1] + lVar8;
        if (*(char *)(lVar11 + 1) == '\0') {
          lVar8 = lVar8 + 1;
          goto LAB_03723dac;
        }
        if (*(char *)(lVar11 + 2) == '\0') {
          lVar8 = lVar8 + 2;
          goto LAB_03723dac;
        }
        lVar8 = lVar8 + 3;
      } while (lVar8 != 0x80001);
      lVar8 = 0;
LAB_03723dac:
      iVar3 = (int)lVar8;
      if (local_80 <= (int)lVar8) {
        iVar3 = local_80 + -1;
      }
      memcpy(puVar2,__src,(long)iVar3);
      *(undefined1 *)((long)puVar2 + (long)iVar3) = 0;
    }
    local_14c[1] = local_14c[1] & 0xffffffffffffff;
    local_14c[0] = local_14c[0] & 0xffffffffffffff00;
    iStack_150 = 0x10;
    local_128 = local_128 & 0xffffff00;
    local_160 = PTR_DAT_04bb2ab0 + 0x10;
    local_124[0] = 0;
    local_168 = CONCAT26(local_168._6_2_,1);
    local_138 = (undefined *)0xffffffff;
    puStack_130 = (uint *)0xffffffff00000000;
    local_158 = local_14c;
    (**(code **)(local_90 + 0x18))(&local_90);
    puVar2 = local_88;
    if (local_14c != local_88) {
      (**(code **)(local_90 + 0x18))(&local_90);
      lVar8 = 0;
      do {
        if (*(char *)((long)local_88 + lVar8) == '\0') goto LAB_03723e90;
        if (*(char *)((long)local_88 + lVar8 + 1) == '\0') {
          lVar8 = lVar8 + 1;
          goto LAB_03723e90;
        }
        if (*(char *)((long)local_88 + lVar8 + 2) == '\0') {
          lVar8 = lVar8 + 2;
          goto LAB_03723e90;
        }
        lVar8 = lVar8 + 3;
      } while (lVar8 != 0x80001);
      lVar8 = 0;
LAB_03723e90:
      iVar3 = (int)lVar8;
      if (iStack_150 <= (int)lVar8) {
        iVar3 = iStack_150 + -1;
      }
      memcpy(local_14c,puVar2,(long)iVar3);
      *(undefined1 *)((long)local_14c + (long)iVar3) = 0;
    }
    local_124[0] = *param_6;
    local_168._0_5_ = CONCAT14(1,(undefined4)local_168);
    local_128 = CONCAT31(local_128._1_3_,param_5) & 0xffffff01;
    FUN_03724440(param_1,&local_168);
    plVar10 = (long *)PTR_DAT_04bb2720;
  }
  else {
    FUN_021d7aa0(&local_90,param_2);
    *(uint *)(&DAT_00001230 + param_1) = *(uint *)(&DAT_00001230 + param_1) | 0x8000;
  }
  puVar1 = PTR_DAT_04bb27c0;
  lVar8 = *(long *)PTR_DAT_04bb27c0;
  if (lVar8 == 0) {
    return 0;
  }
  uVar4 = FUN_03722560(param_1,&local_90);
  if (uVar4 == 0xffffffff) {
    return 0;
  }
  if (uVar4 < *(uint *)(param_1 + 0xe0)) {
    lVar11 = *(long *)(*(long *)(param_1 + 0xe8) + (long)(int)uVar4 * 8);
  }
  else {
    lVar11 = 0;
  }
  *(ushort *)(lVar11 + 0x114) = *(ushort *)(lVar11 + 0x114) | 8;
  *(undefined4 *)(lVar11 + 0xf0) = *param_3;
  *(undefined4 *)(lVar11 + 0xf4) = param_3[1];
  *(undefined4 *)(lVar11 + 0xf8) = param_3[2];
  *(undefined4 *)(lVar11 + 0xfc) = *param_4;
  lVar9 = *plVar10;
  if (lVar9 == 0) {
    puVar12 = &DAT_055c04a0;
  }
  else {
    puVar12 = &DAT_055c04a0;
    if (*(long *)(lVar9 + 0x330) != 0) {
      puVar12 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar9 + 0x338));
      iVar3 = FUN_006bd550(*puVar12,0);
      puVar12 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar3 != 0x758f7eaf) {
        puVar12 = &DAT_055c04a0;
      }
    }
  }
  local_158._0_4_ = 0;
  local_158._4_4_ = 0x3f800000;
  iStack_150 = 0;
  local_168 = 0xffffffff00000000;
  local_160 = (undefined *)0x0;
  puStack_130 = local_124;
  *(undefined4 *)(lVar11 + 0x100) = *(undefined4 *)(puVar12 + 7);
  local_a5 = 0;
  local_128 = 0x80;
  local_124[0] = local_124[0] & 0xffffff00;
  local_138 = PTR_DAT_04bb2d88 + 0x10;
  local_98 = 0;
  local_9c = 0;
  local_14c[0] = 0;
  local_14c[1] = 0;
  local_a0 = 7;
  uVar6 = FUN_03725e90(param_1,&local_168,lVar11);
  if ((uVar6 & 1) == 0) {
    return 0;
  }
  if (DAT_05abbc50 == *(int *)(lVar11 + 0xe4)) {
LAB_03724030:
    FUN_037289d0(param_1,lVar11 + 0x10,0);
  }
  else if (((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
           ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)) && (*(int *)(lVar11 + 0x3c) == 0)) {
    local_6c = 0x23;
    local_6a = 8;
    FUN_020fd3a0(&local_6c,lVar11 + 0x10);
    uVar4 = FUN_021d7d60(&local_6c);
    if (((uVar4 < 10) && ((&DAT_053fee41)[(ulong)uVar4 * 0xba0] != '\0')) &&
       (((&DAT_053fede8)[(ulong)uVar4 * 0x174] != 0 &&
        (*(int *)((&DAT_053fede8)[(ulong)uVar4 * 0x174] + 4) == 1)))) goto LAB_03724030;
  }
  *(uint *)(&DAT_00001230 + param_1) = *(uint *)(&DAT_00001230 + param_1) & 0xfffff7ff;
  uVar4 = FUN_007402e0(lVar8,&local_168,local_168 & 0xffffffff,0);
  lVar8 = *(long *)puVar1;
  if (lVar8 == 0) {
    return 1;
  }
  if (((uVar4 == 0) ||
      (plVar10 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) + (ulong)(uVar4 >> 0x14) * 8),
      plVar10 == (long *)0x0)) ||
     (((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar10 + 0x46) != uVar4)))) {
    plVar10 = (long *)0x0;
  }
  if ((*(int *)(lVar8 + 0x288) == 1) || (*(int *)(lVar8 + 0x288) == -1)) {
    plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)puVar1;
    iVar3 = (**(code **)(*plVar7 + 0x60))();
    if (iVar3 < 0x11) {
      uVar4 = 1;
      goto joined_r0x037241b4;
    }
    uVar4 = *(uint *)(lVar8 + 0x5e8);
    if (uVar4 < 5) {
      uVar4 = 0x1aU >> (ulong)(uVar4 & 0x1f) & 1;
      goto joined_r0x037241b4;
    }
  }
  uVar4 = 0;
joined_r0x037241b4:
  if (plVar10 != (long *)0x0) {
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar5 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb37d0);
    if ((uVar4 & uVar5) == 1) {
      puVar12 = (undefined8 *)plVar10[0x77];
      if (((*PTR_DAT_04bb6710 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb6710), iVar3 != 0)) {
        *(undefined **)PTR_DAT_04bb6708 = PTR_DAT_04bb6718 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb6710);
      }
      if ((puVar12 != (undefined8 *)0x0) &&
         (uVar6 = (**(code **)*puVar12)(puVar12,PTR_DAT_04bb6708), (uVar6 & 1) != 0)) {
        puVar12[0x15ab] = puVar12[0x15ab] & 0xffffffffffffffbf;
        *(ushort *)((long)puVar12 + 0xaf64) = *(ushort *)((long)puVar12 + 0xaf64) | 2;
        *(uint *)(puVar12 + 0x15f6) = *(uint *)(puVar12 + 0x15f6) | 0x2000000;
      }
    }
  }
  return 1;
}

