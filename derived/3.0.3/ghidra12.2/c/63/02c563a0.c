
void FUN_02c563a0(long *param_1,undefined8 param_2,undefined8 *param_3)

{
  long *plVar1;
  undefined *puVar2;
  undefined *puVar3;
  void *pvVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  byte bVar8;
  undefined2 uVar9;
  undefined4 uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  long lVar16;
  undefined1 *puVar17;
  void *pvVar18;
  undefined1 *puVar19;
  long *plVar20;
  undefined *local_80;
  undefined1 *local_78;
  int local_70;
  undefined1 local_6c [7];
  undefined1 local_65;
  
  plVar1 = param_1 + 0x4009;
  FUN_03868244();
  *(undefined2 *)(param_1 + 0x39) = 0;
  puVar2 = PTR_DAT_04bc5668;
  *(undefined4 *)(param_1 + 0x3a) = 0;
  puVar5 = PTR_DAT_04bd4738;
  param_1[0x37] = 0xffffffff;
  param_1[0x38] = 0xffffffff;
  param_1[0x3b] = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)((long)param_1 + 0x1fc) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x40) = 0;
  *(undefined1 *)((long)param_1 + 0x202) = 0;
  param_1[0x41] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x35] = (long)(puVar5 + 0x10);
  param_1[0x36] = 0xffffffff;
  *(undefined1 *)(param_1 + 0x3f) = 0xff;
  if (param_3 != (undefined8 *)0x0) {
    bVar8 = *(byte *)((long)param_3 + 0xe);
    if (7 < bVar8) {
      bVar8 = 0xff;
    }
    *(byte *)(param_1 + 0x3f) = bVar8;
    *(undefined4 *)((long)param_1 + 0x1fc) = *(undefined4 *)(param_3 + 2);
  }
  param_1[0x45] = 0;
  param_1[0x42] = 0;
  puVar5 = PTR_DAT_04bc9ca8;
  *param_1 = (long)&PTR_FUN_04ab1bc0;
  puVar2 = PTR_DAT_04bc9be0;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  param_1[0x47] = (long)(puVar5 + 0x10);
  param_1[0x3e] = -1;
  param_1[0x4b] = (long)(puVar2 + 0x10);
  *(undefined4 *)(param_1 + 0x46) = 0;
  memset(param_1 + 0x4c,0,0x1bf30);
  puVar5 = PTR_DAT_04bb2bc0;
  lVar16 = 0x10e;
  puVar2 = PTR_DAT_04bb2bc0 + 0x10;
  plVar20 = param_1;
  do {
    FUN_03463544(plVar20 + 0x4c,0);
    *(undefined4 *)(plVar20 + 0x77) = 0x40;
    lVar16 = lVar16 + -1;
    plVar20[0x76] = (long)plVar20 + 0x3bc;
    *(undefined1 *)((long)plVar20 + 0x3fb) = 0;
    *(undefined1 *)((long)plVar20 + 0x3bc) = 0;
    plVar20[0x75] = (long)puVar2;
    *(undefined4 *)(plVar20 + 0x80) = 0;
    puVar3 = PTR_DAT_04bc8e10;
    plVar20 = plVar20 + 0x35;
  } while (lVar16 != 0);
  *(undefined4 *)(param_1 + 0x3834) = 0;
  *(undefined4 *)(param_1 + 0x3835) = 0;
  param_1[0x3837] = 0;
  param_1[0x3838] = -0xfffff800;
  puVar19 = (undefined1 *)((long)param_1 + 0x1c203);
  lVar16 = 500;
  param_1[0x3836] = -0x100000000;
  param_1[0x3832] = (long)(puVar3 + 0x10);
  param_1[0x3833] = -1;
  puVar2 = PTR_DAT_04bb3768 + 0x10;
  do {
    *(undefined4 *)(puVar19 + -0x2b) = 8;
    lVar16 = lVar16 + -2;
    puVar19[-0x27] = 0;
    *(undefined1 **)(puVar19 + -0x33) = puVar19 + -0x27;
    puVar19[-0x20] = 0;
    puVar19[-7] = 0;
    *(undefined **)(puVar19 + -0x3b) = puVar2;
    *(undefined1 **)(puVar19 + -0x13) = puVar19 + -7;
    *(undefined4 *)(puVar19 + -0xb) = 8;
    *puVar19 = 0;
    *(undefined **)(puVar19 + -0x1b) = puVar2;
    puVar19 = puVar19 + 0x40;
  } while (lVar16 != 0);
  *(undefined1 *)((long)param_1 + 0x20063) = 0;
  *(undefined4 *)(param_1 + 0x400b) = 8;
  *(undefined1 *)((long)param_1 + 0x2005c) = 0;
  *(undefined1 *)((long)param_1 + 0x2007c) = 0;
  puVar2 = PTR_DAT_04bb3768;
  *(undefined4 *)(param_1 + 0x400f) = 8;
  *(undefined1 *)((long)param_1 + 0x20083) = 0;
  puVar2 = puVar2 + 0x10;
  *(undefined4 *)(param_1 + 0x4013) = 8;
  *plVar1 = (long)puVar2;
  param_1[0x400a] = (long)param_1 + 0x2005c;
  *(undefined1 *)((long)param_1 + 0x2009c) = 0;
  *(undefined1 *)((long)param_1 + 0x200a3) = 0;
  *(undefined4 *)(param_1 + 0x4017) = 8;
  *(undefined1 *)((long)param_1 + 0x200c3) = 0;
  *(undefined1 *)((long)param_1 + 0x20163) = 0;
  *(undefined1 *)((long)param_1 + 0x2015c) = 0;
  *(undefined4 *)(param_1 + 0x402f) = 8;
  *(undefined1 *)((long)param_1 + 0x20183) = 0;
  param_1[0x4011] = (long)puVar2;
  param_1[0x4012] = (long)param_1 + 0x2009c;
  param_1[0x400d] = (long)puVar2;
  param_1[0x400e] = (long)param_1 + 0x2007c;
  *(undefined1 *)((long)param_1 + 0x200bc) = 0;
  param_1[0x4016] = (long)param_1 + 0x200bc;
  *(undefined1 *)((long)param_1 + 0x2011c) = 0;
  param_1[0x4015] = (long)puVar2;
  *(undefined4 *)(param_1 + 0x401b) = 8;
  *(undefined1 *)((long)param_1 + 0x200dc) = 0;
  param_1[0x401a] = (long)param_1 + 0x200dc;
  *(undefined1 *)((long)param_1 + 0x200e3) = 0;
  *(undefined1 *)((long)param_1 + 0x200fc) = 0;
  param_1[0x401e] = (long)param_1 + 0x200fc;
  param_1[0x4026] = (long)param_1 + 0x2013c;
  param_1[0x4019] = (long)puVar2;
  *(undefined4 *)(param_1 + 0x401f) = 8;
  *(undefined1 *)((long)param_1 + 0x2017c) = 0;
  *(undefined1 *)((long)param_1 + 0x20103) = 0;
  param_1[0x401d] = (long)puVar2;
  param_1[0x4022] = (long)param_1 + 0x2011c;
  *(undefined4 *)(param_1 + 0x4023) = 8;
  *(undefined1 *)((long)param_1 + 0x20123) = 0;
  param_1[0x4021] = (long)puVar2;
  *(undefined4 *)(param_1 + 0x4027) = 8;
  *(undefined1 *)((long)param_1 + 0x20143) = 0;
  *(undefined1 *)((long)param_1 + 0x2013c) = 0;
  param_1[0x4025] = (long)puVar2;
  param_1[0x402a] = (long)param_1 + 0x2015c;
  *(undefined4 *)(param_1 + 0x402b) = 8;
  param_1[0x4029] = (long)puVar2;
  param_1[0x402e] = (long)param_1 + 0x2017c;
  puVar3 = PTR_DAT_04bbb868 + 0x10;
  param_1[0x402d] = (long)puVar2;
  param_1[0x4031] = (long)puVar3;
  *(undefined4 *)(param_1 + 0x4032) = 0;
  puVar3 = PTR_DAT_04bbb848 + 0x10;
  *(undefined1 *)((long)param_1 + 0x201f3) = 0;
  *(undefined1 *)((long)param_1 + 0x201b4) = 0;
  param_1[0x4033] = (long)puVar3;
  param_1[0x4034] = (long)(puVar5 + 0x10);
  param_1[0x4035] = (long)param_1 + 0x201b4;
  param_1[0x4040] = (long)param_1 + 0x2020c;
  *(undefined4 *)(param_1 + 0x4036) = 0x40;
  *(undefined4 *)(param_1 + 0x4041) = 0x40;
  *(undefined2 *)(param_1 + 0x404b) = 0xff;
  pvVar4 = (void *)((long)param_1 + 0x2027c);
  *(undefined1 *)((long)param_1 + 0x2024b) = 0;
  *(undefined1 *)((long)param_1 + 0x2020c) = 0;
  param_1[0x403f] = (long)(puVar5 + 0x10);
  param_1[0x404a] = 0;
  param_1[0x404e] = (long)pvVar4;
  puVar5 = PTR_DAT_04bb6a30 + 0x10;
  *(undefined4 *)(param_1 + 0x404f) = 8;
  plVar20 = (long *)PTR_PTR_04bb2238;
  *(undefined1 *)((long)param_1 + 0x20283) = 0;
  param_1[0x404c] = 0;
  param_1[0x404d] = (long)puVar5;
  (**(code **)(*plVar20 + 0x18))(plVar20);
  pvVar18 = *(void **)((long)plVar20 + 8);
  if (pvVar4 != pvVar18) {
    (**(code **)(*plVar20 + 0x18))(plVar20);
    lVar16 = 0;
    do {
      if (*(char *)(*(long *)((long)plVar20 + 8) + lVar16) == '\0') goto LAB_02c567ac;
      lVar11 = *(long *)((long)plVar20 + 8) + lVar16;
      if (*(char *)(lVar11 + 1) == '\0') {
        lVar16 = lVar16 + 1;
        goto LAB_02c567ac;
      }
      if (*(char *)(lVar11 + 2) == '\0') {
        lVar16 = lVar16 + 2;
        goto LAB_02c567ac;
      }
      lVar16 = lVar16 + 3;
    } while (lVar16 != 0x80001);
    lVar16 = 0;
LAB_02c567ac:
    iVar6 = (int)lVar16;
    if ((int)param_1[0x404f] <= (int)lVar16) {
      iVar6 = (int)param_1[0x404f] + -1;
    }
    memcpy(pvVar4,pvVar18,(long)iVar6);
    *(undefined1 *)((long)pvVar4 + (long)iVar6) = 0;
    plVar20 = (long *)PTR_PTR_04bb2238;
  }
  param_1[0x404d] = (long)puVar2;
  pvVar4 = (void *)((long)param_1 + 0x2029c);
  *(undefined4 *)(param_1 + 0x4053) = 8;
  *(undefined1 *)((long)param_1 + 0x202a3) = 0;
  param_1[0x4051] = (long)puVar5;
  param_1[0x4052] = (long)pvVar4;
  (**(code **)(*plVar20 + 0x18))(plVar20);
  pvVar18 = (void *)plVar20[1];
  if (pvVar4 != pvVar18) {
    (**(code **)(*plVar20 + 0x18))(plVar20);
    lVar16 = 0;
    do {
      if (*(char *)(plVar20[1] + lVar16) == '\0') goto LAB_02c5686c;
      lVar11 = plVar20[1] + lVar16;
      if (*(char *)(lVar11 + 1) == '\0') {
        lVar16 = lVar16 + 1;
        goto LAB_02c5686c;
      }
      if (*(char *)(lVar11 + 2) == '\0') {
        lVar16 = lVar16 + 2;
        goto LAB_02c5686c;
      }
      lVar16 = lVar16 + 3;
    } while (lVar16 != 0x80001);
    lVar16 = 0;
LAB_02c5686c:
    iVar6 = (int)lVar16;
    if ((int)param_1[0x4053] <= (int)lVar16) {
      iVar6 = (int)param_1[0x4053] + -1;
    }
    memcpy(pvVar4,pvVar18,(long)iVar6);
    *(undefined1 *)((long)pvVar4 + (long)iVar6) = 0;
    plVar20 = (long *)PTR_PTR_04bb2238;
  }
  puVar2 = PTR_DAT_04bb3768;
  param_1[0x42] = 0;
  *(undefined4 *)(param_1 + 0x4055) = 0xffffffff;
  param_1[0x4051] = (long)(puVar2 + 0x10);
  param_1[0x4056] = -0x100000000;
  local_70 = 8;
  local_65 = 0;
  local_80 = PTR_DAT_04bb6a30 + 0x10;
  local_78 = local_6c;
  (**(code **)(*plVar20 + 0x18))(plVar20);
  puVar19 = (undefined1 *)plVar20[1];
  if (local_6c != puVar19) {
    (**(code **)(*plVar20 + 0x18))(plVar20);
    lVar16 = 0;
    do {
      if (*(char *)(plVar20[1] + lVar16) == '\0') goto LAB_02c5695c;
      lVar11 = plVar20[1] + lVar16;
      if (*(char *)(lVar11 + 1) == '\0') {
        lVar16 = lVar16 + 1;
        goto LAB_02c5695c;
      }
      if (*(char *)(lVar11 + 2) == '\0') {
        lVar16 = lVar16 + 2;
        goto LAB_02c5695c;
      }
      lVar16 = lVar16 + 3;
    } while (lVar16 != 0x80001);
    lVar16 = 0;
LAB_02c5695c:
    iVar6 = (int)lVar16;
    if (local_70 <= (int)lVar16) {
      iVar6 = local_70 + -1;
    }
    memcpy(local_6c,puVar19,(long)iVar6);
    local_6c[iVar6] = 0;
  }
  lVar16 = 0;
  local_80 = puVar2 + 0x10;
  do {
    puVar17 = (undefined1 *)param_1[lVar16 * 4 + 0x383a];
    (**(code **)(local_80 + 0x18))(&local_80);
    puVar19 = local_78;
    if (puVar17 != local_78) {
      (**(code **)(local_80 + 0x18))(&local_80);
      lVar11 = 0;
      do {
        if (local_78[lVar11] == '\0') goto LAB_02c56994;
        if (local_78[lVar11 + 1] == '\0') {
          lVar11 = lVar11 + 1;
          goto LAB_02c56994;
        }
        if (local_78[lVar11 + 2] == '\0') {
          lVar11 = lVar11 + 2;
          goto LAB_02c56994;
        }
        lVar11 = lVar11 + 3;
      } while (lVar11 != 0x80001);
      lVar11 = 0;
LAB_02c56994:
      iVar6 = (int)lVar11;
      if ((int)param_1[lVar16 * 4 + 0x383b] <= (int)lVar11) {
        iVar6 = (int)param_1[lVar16 * 4 + 0x383b] + -1;
      }
      memcpy(puVar17,puVar19,(long)iVar6);
      puVar17[iVar6] = 0;
    }
    puVar2 = PTR_PTR_04bb2238;
    lVar16 = lVar16 + 1;
  } while (lVar16 != 500);
  local_65 = 0;
  local_70 = 8;
  local_80 = PTR_DAT_04bb6a30 + 0x10;
  local_78 = local_6c;
  (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
  puVar19 = *(undefined1 **)(puVar2 + 8);
  if (local_6c != puVar19) {
    (**(code **)(*(long *)puVar2 + 0x18))(puVar2);
    lVar16 = 0;
    do {
      if (*(char *)(*(long *)(puVar2 + 8) + lVar16) == '\0') goto LAB_02c56adc;
      lVar11 = *(long *)(puVar2 + 8) + lVar16;
      if (*(char *)(lVar11 + 1) == '\0') {
        lVar16 = lVar16 + 1;
        goto LAB_02c56adc;
      }
      if (*(char *)(lVar11 + 2) == '\0') {
        lVar16 = lVar16 + 2;
        goto LAB_02c56adc;
      }
      lVar16 = lVar16 + 3;
    } while (lVar16 != 0x80001);
    lVar16 = 0;
LAB_02c56adc:
    iVar6 = (int)lVar16;
    if (local_70 <= (int)lVar16) {
      iVar6 = local_70 + -1;
    }
    memcpy(local_6c,puVar19,(long)iVar6);
    local_6c[iVar6] = 0;
  }
  lVar16 = 0;
  local_80 = PTR_DAT_04bb3768 + 0x10;
  do {
    puVar17 = (undefined1 *)plVar1[lVar16 * 4 + 1];
    (**(code **)(local_80 + 0x18))(&local_80);
    puVar19 = local_78;
    if (puVar17 != local_78) {
      (**(code **)(local_80 + 0x18))(&local_80);
      lVar11 = 0;
      do {
        if (local_78[lVar11] == '\0') goto LAB_02c56b20;
        if (local_78[lVar11 + 1] == '\0') {
          lVar11 = lVar11 + 1;
          goto LAB_02c56b20;
        }
        if (local_78[lVar11 + 2] == '\0') {
          lVar11 = lVar11 + 2;
          goto LAB_02c56b20;
        }
        lVar11 = lVar11 + 3;
      } while (lVar11 != 0x80001);
      lVar11 = 0;
LAB_02c56b20:
      iVar6 = (int)lVar11;
      if ((int)plVar1[lVar16 * 4 + 2] <= (int)lVar11) {
        iVar6 = (int)plVar1[lVar16 * 4 + 2] + -1;
      }
      memcpy(puVar17,puVar19,(long)iVar6);
      puVar17[iVar6] = 0;
    }
    lVar16 = lVar16 + 1;
    if (lVar16 == 10) {
      if (((*PTR_DAT_04bc59a8 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04bc59a8), iVar6 != 0)) {
        *(undefined **)PTR_DAT_04bc59a0 = PTR_DAT_04bc5020 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc59a8);
      }
      if ((param_3 == (undefined8 *)0x0) ||
         (uVar7 = (**(code **)*param_3)(param_3,PTR_DAT_04bc59a0), (uVar7 & 1) == 0)) {
        *(undefined2 *)((long)param_1 + 0x202ac) = 0;
      }
      else {
        uVar9 = 1;
        if (*(char *)(param_3 + 3) == '\0') {
          uVar9 = 2;
        }
        *(undefined2 *)((long)param_1 + 0x202ac) = uVar9;
        *(undefined4 *)(param_1 + 0x4056) = *(undefined4 *)((long)param_3 + 0x14);
      }
      if ((*(long *)PTR_DAT_04bb2230 != 0) &&
         (puVar12 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0x460),
         puVar12 != (undefined8 *)0x0)) {
        puVar15 = (undefined4 *)*puVar12;
        if (puVar15 == (undefined4 *)0x0) {
          uVar13 = 0;
          uVar10 = 0;
          uVar14 = 0x800;
        }
        else {
          uVar10 = *puVar15;
          uVar13 = puVar15[1];
          uVar14 = puVar15[2];
        }
        *(undefined4 *)(param_1 + 0x3837) = uVar10;
        *(undefined4 *)((long)param_1 + 0x1c1bc) = uVar13;
        *(undefined4 *)(param_1 + 0x3838) = uVar14;
      }
      return;
    }
  } while( true );
}

