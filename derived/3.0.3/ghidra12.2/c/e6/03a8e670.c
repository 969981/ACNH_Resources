
void FUN_03a8e670(long param_1,long *param_2,undefined8 param_3,long *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  long lVar14;
  long *plVar15;
  ulong *puVar16;
  void *pvVar17;
  long *plVar18;
  long lVar19;
  size_t sVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 local_70;
  undefined4 uStack_6c;
  long local_68;
  
  plVar18 = (long *)PTR_DAT_04bb2698;
  uVar10 = *(uint *)(param_2 + 2);
  if (0 < (int)uVar10) {
    lVar19 = *(long *)PTR_DAT_04bb2698;
    sVar20 = (ulong)uVar10 * 0x1b8 + 8;
    if (lVar19 == 0) {
      puVar16 = malloc(sVar20);
      puVar12 = (undefined4 *)PTR_DAT_04bd0ea8;
      puVar13 = (undefined4 *)PTR_DAT_04bd0eb0;
    }
    else {
      plVar15 = param_4;
      if (param_4 == (long *)0x0) {
        lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar15 = (long *)(lVar19 + 8);
        if (lVar14 != 0) {
          plVar15 = (long *)(lVar14 + 0xa8);
        }
        plVar15 = (long *)*plVar15;
        if (plVar15 == (long *)0x0) goto LAB_03a8e8a4;
      }
      puVar16 = (ulong *)(**(code **)(*plVar15 + 0x30))(plVar15,sVar20,8);
      puVar12 = (undefined4 *)PTR_DAT_04bd0ea8;
      puVar13 = (undefined4 *)PTR_DAT_04bd0eb0;
    }
    PTR_DAT_04bd0ea8 = (undefined *)puVar12;
    PTR_DAT_04bd0eb0 = (undefined *)puVar13;
    if (puVar16 != (ulong *)0x0) {
      *puVar16 = (ulong)uVar10;
      uVar11 = *puVar12;
      uVar21 = *puVar13;
      uVar22 = *(undefined4 *)PTR_DAT_04bd0eb8;
      uVar4 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x20);
      uVar7 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x28);
      uVar5 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x10);
      uVar8 = *(undefined8 *)(PTR_DAT_04bb2f80 + 0x18);
      puVar1 = PTR_DAT_04bbd858 + 0x10;
      uVar6 = *(undefined8 *)PTR_DAT_04bb2f80;
      uVar9 = *(undefined8 *)(PTR_DAT_04bb2f80 + 8);
      puVar2 = PTR_DAT_04bd0e98 + 0x10;
      puVar3 = PTR_DAT_04bd0f08 + 0x10;
      lVar19 = 0;
      do {
        lVar14 = lVar19 + 0x1b8;
        *(undefined4 *)((long)puVar16 + lVar19 + 0x94) = uVar11;
        *(undefined4 *)((long)puVar16 + lVar19 + 0x98) = uVar21;
        *(undefined4 *)((long)puVar16 + lVar19 + 0x9c) = uVar22;
        *(undefined8 *)((long)puVar16 + lVar19 + 0x14c) = 0x3f80000000000000;
        *(undefined **)((long)puVar16 + lVar19 + 8) = puVar1;
        *(undefined8 *)((long)puVar16 + lVar19 + 0x18c) = 0x461c40003dcccccd;
        *(undefined4 *)((long)puVar16 + lVar19 + 0xb8) = 0x3faaaaab;
        *(undefined8 *)((long)puVar16 + lVar19 + 0xbc) = 0;
        *(undefined8 *)((long)puVar16 + lVar19 + 0xb0) = 0x3ed413cd3f6c835e;
        *(undefined2 *)((long)puVar16 + lVar19 + 0x10) = 0x101;
        *(undefined4 *)((long)puVar16 + lVar19 + 0x148) = uVar11;
        *(undefined8 *)((long)puVar16 + lVar19 + 0x158) = 0;
        *(undefined4 *)((long)puVar16 + lVar19 + 0x170) = 3;
        *(undefined4 *)((long)puVar16 + lVar19 + 0x188) = 0;
        *(undefined8 *)((long)puVar16 + lVar19 + 0x194) = 0xffffffff00000000;
        *(undefined8 *)((long)puVar16 + lVar19 + 0xa0) = 0x461c40003f800000;
        *(undefined8 *)((long)puVar16 + lVar19 + 0xa8) = 0x3ec3ef163f490fdb;
        *(undefined8 *)((long)puVar16 + lVar19 + 0xe8) = uVar8;
        *(undefined8 *)((long)puVar16 + lVar19 + 0xf0) = uVar4;
        *(undefined8 *)((long)puVar16 + lVar19 + 0xd8) = uVar9;
        *(undefined8 *)((long)puVar16 + lVar19 + 0xe0) = uVar5;
        *(undefined **)((long)puVar16 + lVar19 + 200) = puVar2;
        *(undefined8 *)((long)puVar16 + lVar19 + 0xd0) = uVar6;
        *(undefined8 *)((long)puVar16 + lVar19 + 0x118) = uVar8;
        *(undefined8 *)((long)puVar16 + lVar19 + 0x120) = uVar4;
        *(undefined8 *)((long)puVar16 + lVar19 + 0x108) = uVar9;
        *(undefined8 *)((long)puVar16 + lVar19 + 0x110) = uVar5;
        *(undefined8 *)((long)puVar16 + lVar19 + 0xf8) = uVar7;
        *(undefined8 *)((long)puVar16 + lVar19 + 0x100) = uVar6;
        *(undefined8 *)((long)puVar16 + lVar19 + 0x128) = uVar7;
        *(undefined **)((long)puVar16 + lVar19 + 0x130) = puVar3;
        *(undefined8 *)((long)puVar16 + lVar19 + 0x138) = 0x7f7fffff7f7fffff;
        *(undefined8 *)((long)puVar16 + lVar19 + 0x140) = 0xff7fffffff7fffff;
        *(undefined8 *)((long)puVar16 + lVar19 + 0x160) = 0;
        *(undefined8 *)((long)puVar16 + lVar19 + 0x168) = 0;
        *(undefined8 *)((long)puVar16 + lVar19 + 0x178) = 0;
        *(undefined8 *)((long)puVar16 + lVar19 + 0x180) = 0;
        *(undefined4 *)((long)puVar16 + lVar19 + 0x19c) = 0;
        *(undefined2 *)((long)puVar16 + lVar19 + 0x1a0) = 1;
        *(undefined8 *)((long)puVar16 + lVar19 + 0x1a8) = 0;
        *(undefined8 *)((long)puVar16 + lVar19 + 0x1b0) = 0;
        lVar19 = lVar14;
      } while ((ulong)uVar10 * 0x1b8 != lVar14);
      *(uint *)(param_1 + 0xd80) = uVar10;
      *(ulong **)(param_1 + 0xd88) = puVar16 + 1;
      plVar18 = (long *)PTR_DAT_04bb2698;
    }
  }
LAB_03a8e8a4:
  uVar10 = *(uint *)((long)param_2 + 0xc);
  if (0 < (int)uVar10) {
    lVar19 = *plVar18;
    sVar20 = (ulong)uVar10 * 0x18;
    if (lVar19 == 0) {
      pvVar17 = malloc(sVar20);
    }
    else {
      plVar15 = param_4;
      if (param_4 == (long *)0x0) {
        lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar15 = (long *)(lVar19 + 8);
        if (lVar14 != 0) {
          plVar15 = (long *)(lVar14 + 0xa8);
        }
        plVar15 = (long *)*plVar15;
        if (plVar15 == (long *)0x0) goto LAB_03a8e944;
      }
      pvVar17 = (void *)(**(code **)(*plVar15 + 0x30))(plVar15,sVar20,0x20);
    }
    if (pvVar17 != (void *)0x0) {
      memset(pvVar17,0,((sVar20 - 0x18) / 0x18) * 0x18 + 0x18);
      *(uint *)(param_1 + 0x38) = uVar10;
      *(void **)(param_1 + 0x40) = pvVar17;
    }
  }
LAB_03a8e944:
  lVar19 = *plVar18;
  uVar10 = *(int *)((long)param_2 + 0xc) + 7U & 0xfffffff8;
  sVar20 = (ulong)uVar10 << 3;
  if ((int)uVar10 < 0) {
    sVar20 = 0xffffffffffffffff;
  }
  if (lVar19 == 0) {
    pvVar17 = malloc(sVar20);
  }
  else {
    plVar15 = param_4;
    if (param_4 == (long *)0x0) {
      lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar15 = (long *)(lVar19 + 8);
      if (lVar14 != 0) {
        plVar15 = (long *)(lVar14 + 0xa8);
      }
      plVar15 = (long *)*plVar15;
      pvVar17 = (void *)0x0;
      if (plVar15 == (long *)0x0) goto LAB_03a8e9b4;
    }
    pvVar17 = (void *)(**(code **)(*plVar15 + 0x30))(plVar15,sVar20,0x40);
  }
LAB_03a8e9b4:
  *(void **)(param_1 + 0x70) = pvVar17;
  *(void **)(param_1 + 0x78) = pvVar17;
  *(uint *)(param_1 + 0x80) = uVar10;
  *(undefined4 *)(param_1 + 0x84) = 0;
  lVar19 = *plVar18;
  uVar10 = *(int *)((long)param_2 + 0xc) + 7U & 0xfffffff8;
  sVar20 = (ulong)uVar10 << 3;
  if ((int)uVar10 < 0) {
    sVar20 = 0xffffffffffffffff;
  }
  if (lVar19 == 0) {
    pvVar17 = malloc(sVar20);
  }
  else {
    plVar18 = param_4;
    if (param_4 == (long *)0x0) {
      lVar14 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar18 = (long *)(lVar19 + 8);
      if (lVar14 != 0) {
        plVar18 = (long *)(lVar14 + 0xa8);
      }
      plVar18 = (long *)*plVar18;
      pvVar17 = (void *)0x0;
      if (plVar18 == (long *)0x0) goto LAB_03a8ea30;
    }
    pvVar17 = (void *)(**(code **)(*plVar18 + 0x30))(plVar18,sVar20,0x40);
  }
LAB_03a8ea30:
  *(void **)(param_1 + 0xb0) = pvVar17;
  *(void **)(param_1 + 0xb8) = pvVar17;
  *(uint *)(param_1 + 0xc0) = uVar10;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  if (*param_2 == 0) {
    local_70 = 1;
  }
  else {
    local_70 = *(undefined4 *)(*param_2 + 0x1e8);
  }
  uStack_6c = 0x20;
  local_68 = param_2[3];
  FUN_039eba40(param_1 + 200,&local_70,param_4);
  *(long *)(param_1 + 0x3d8) = *param_2;
  FUN_03916fe0(param_1 + 0x490,param_3,param_4);
  memset((void *)(param_1 + 0xda0),0,0x158);
  return;
}

