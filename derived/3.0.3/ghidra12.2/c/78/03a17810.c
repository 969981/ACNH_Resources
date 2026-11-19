
void FUN_03a17810(long *param_1,uint *param_2,uint param_3,long param_4,long *param_5,long param_6)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined *puVar18;
  int iVar19;
  long *plVar20;
  long lVar21;
  ulong uVar22;
  undefined1 *puVar23;
  undefined8 uVar24;
  long lVar25;
  void *pvVar26;
  void *pvVar27;
  undefined *puVar28;
  uint local_480 [264];
  
  iVar19 = (**(code **)(*param_1 + 0xb0))();
  puVar28 = PTR_DAT_04bd11e0;
  FUN_038d1270(param_1 + 0x199,&DAT_040ec793,*(undefined8 *)(PTR_DAT_04bd11e0 + (long)iVar19 * 0x28)
               ,(short)param_1[0x16]);
  plVar20 = (long *)(**(code **)(*param_1 + 0x80))(param_1);
  (**(code **)(*plVar20 + 0x18))();
  FUN_038d1270(param_1 + 0x1a0,"%s %d",plVar20[1],(short)param_1[0x16]);
  param_1[0x197] = param_6;
  lVar25 = *(long *)PTR_DAT_04bd1158;
  if ((lVar25 != 0) && (*(long *)(*(long *)PTR_DAT_04bb4e50 + 0x58) != 0)) {
    (**(code **)(*(long *)(lVar25 + 8) + 0x18))((long *)(lVar25 + 8));
    FUN_006e9454(local_480,&DAT_0406a3d7,"Icon=EFFECT",*(undefined8 *)(lVar25 + 0x10));
  }
  param_1[0x24] = param_4;
  puVar18 = PTR_PTR_04bb2238;
  if (param_4 == 0) {
    pvVar26 = (void *)param_1[0x27];
    (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
    pvVar27 = *(void **)(puVar18 + 8);
    if (pvVar26 != pvVar27) {
      (**(code **)(*(long *)puVar18 + 0x18))(puVar18);
      lVar25 = 0;
      do {
        if (*(char *)(*(long *)(puVar18 + 8) + lVar25) == '\0') goto LAB_03a17a54;
        lVar21 = *(long *)(puVar18 + 8) + lVar25;
        if (*(char *)(lVar21 + 1) == '\0') {
          lVar25 = lVar25 + 1;
          goto LAB_03a17a54;
        }
        if (*(char *)(lVar21 + 2) == '\0') {
          lVar25 = lVar25 + 2;
          goto LAB_03a17a54;
        }
        lVar25 = lVar25 + 3;
      } while (lVar25 != 0x80001);
      lVar25 = 0;
LAB_03a17a54:
      iVar19 = (int)lVar25;
      if ((int)param_1[0x28] <= (int)lVar25) {
        iVar19 = (int)param_1[0x28] + -1;
      }
      memcpy(pvVar26,pvVar27,(long)iVar19);
      puVar23 = (undefined1 *)((long)pvVar26 + (long)iVar19);
      goto LAB_03a17a7c;
    }
  }
  else {
    pvVar26 = (void *)param_1[0x27];
    (**(code **)(*(long *)(param_4 + 0x238) + 0x18))(param_4 + 0x238);
    pvVar27 = *(void **)(param_4 + 0x240);
    if (pvVar26 != pvVar27) {
      (**(code **)(*(long *)(param_4 + 0x238) + 0x18))(param_4 + 0x238);
      lVar25 = 0;
      do {
        if (*(char *)(*(long *)(param_4 + 0x240) + lVar25) == '\0') goto LAB_03a17a1c;
        lVar21 = *(long *)(param_4 + 0x240) + lVar25;
        if (*(char *)(lVar21 + 1) == '\0') {
          lVar25 = lVar25 + 1;
          goto LAB_03a17a1c;
        }
        if (*(char *)(lVar21 + 2) == '\0') {
          lVar25 = lVar25 + 2;
          goto LAB_03a17a1c;
        }
        lVar25 = lVar25 + 3;
      } while (lVar25 != 0x80001);
      lVar25 = 0;
LAB_03a17a1c:
      iVar19 = (int)lVar25;
      if ((int)param_1[0x28] <= (int)lVar25) {
        iVar19 = (int)param_1[0x28] + -1;
      }
      memcpy(pvVar26,pvVar27,(long)iVar19);
      puVar23 = (undefined1 *)((long)pvVar26 + (long)iVar19);
LAB_03a17a7c:
      *puVar23 = 0;
    }
  }
  uVar16 = *param_2;
  if (0 < (int)uVar16) {
    lVar25 = *(long *)PTR_DAT_04bb2698;
    if (lVar25 == 0) {
      pvVar26 = malloc((ulong)uVar16 * 0x2f0);
    }
    else {
      plVar20 = param_5;
      if (param_5 == (long *)0x0) {
        lVar21 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar20 = (long *)(lVar25 + 8);
        if (lVar21 != 0) {
          plVar20 = (long *)(lVar21 + 0xa8);
        }
        plVar20 = (long *)*plVar20;
        if (plVar20 == (long *)0x0) goto LAB_03a17c90;
      }
      pvVar26 = (void *)(**(code **)(*plVar20 + 0x30))(plVar20,(ulong)uVar16 * 0x2f0,0x20);
    }
    if (pvVar26 != (void *)0x0) {
      uVar2 = *(undefined8 *)((long)PTR_DAT_04bb2f80 + 0x10);
      uVar9 = *(undefined8 *)((long)PTR_DAT_04bb2f80 + 0x18);
      uVar3 = *(undefined8 *)((long)PTR_DAT_04bbd558 + 0x20);
      uVar10 = *(undefined8 *)((long)PTR_DAT_04bbd558 + 0x28);
      uVar4 = *(undefined8 *)((long)PTR_DAT_04bbd558 + 0x30);
      uVar11 = *(undefined8 *)((long)PTR_DAT_04bbd558 + 0x38);
      uVar5 = *(undefined8 *)PTR_DAT_04bbd558;
      uVar12 = *(undefined8 *)((long)PTR_DAT_04bbd558 + 8);
      uVar6 = *(undefined8 *)((long)PTR_DAT_04bbd558 + 0x10);
      uVar13 = *(undefined8 *)((long)PTR_DAT_04bbd558 + 0x18);
      uVar7 = *(undefined8 *)((long)PTR_DAT_04bb2f80 + 0x20);
      uVar14 = *(undefined8 *)((long)PTR_DAT_04bb2f80 + 0x28);
      uVar8 = *(undefined8 *)PTR_DAT_04bb2f80;
      uVar15 = *(undefined8 *)((long)PTR_DAT_04bb2f80 + 8);
      uVar17 = *(undefined4 *)((long)PTR_DAT_04bb4bc8 + 8);
      uVar24 = *(undefined8 *)PTR_DAT_04bb4bc8;
      lVar25 = 0;
      do {
        lVar21 = lVar25 + 0x2f0;
        *(undefined4 *)((long)pvVar26 + lVar25 + 0x1b8) = 0;
        *(undefined4 *)((long)pvVar26 + lVar25 + 0x264) = uVar17;
        *(undefined8 *)((long)pvVar26 + lVar25 + 0x25c) = uVar24;
        *(undefined4 *)((long)pvVar26 + lVar25 + 0x268) = 0;
        *(undefined8 *)((long)pvVar26 + lVar25 + 0x26c) = uVar24;
        *(undefined4 *)((long)pvVar26 + lVar25 + 0x274) = uVar17;
        *(undefined8 *)((long)pvVar26 + lVar25 + 0x27c) = uVar24;
        *(undefined4 *)((long)pvVar26 + lVar25 + 0x278) = 0;
        *(undefined8 *)((long)pvVar26 + lVar25 + 0x28c) = uVar24;
        *(undefined4 *)((long)pvVar26 + lVar25 + 0x284) = uVar17;
        *(undefined8 *)((long)pvVar26 + lVar25 + 0x29c) = uVar24;
        *(undefined4 *)((long)pvVar26 + lVar25 + 0x288) = 0;
        *(undefined4 *)((long)pvVar26 + lVar25 + 0x294) = uVar17;
        *(undefined4 *)((long)pvVar26 + lVar25 + 0x298) = 0;
        *(undefined4 *)((long)pvVar26 + lVar25 + 0x2a4) = uVar17;
        *(undefined4 *)((long)pvVar26 + lVar25 + 0x2a8) = 0;
        *(undefined4 *)((long)pvVar26 + lVar25 + 0x2b4) = uVar17;
        *(undefined8 *)((long)pvVar26 + lVar25 + 0x2ac) = uVar24;
        *(undefined8 *)((long)pvVar26 + lVar25 + 0x2b8) = 0x7f7fffff00000000;
        *(undefined8 *)((long)pvVar26 + lVar25 + 0x2c0) = 0x7f7fffff7f7fffff;
        *(undefined8 *)((long)pvVar26 + lVar25 + 0x2c8) = 0xff7fffffff7fffff;
        *(undefined8 *)((long)pvVar26 + lVar25 + 0x2d0) = 0x7f7fffffff7fffff;
        *(undefined8 *)((long)pvVar26 + lVar25 + 0x2d8) = 0x7f7fffff7f7fffff;
        *(undefined8 *)((long)pvVar26 + lVar25 + 0x2e0) = 0xff7fffffff7fffff;
        *(undefined4 *)((long)pvVar26 + lVar25 + 0x2e8) = 0xff7fffff;
        *(undefined1 *)((long)pvVar26 + lVar25 + 0x2ec) = 0;
        *(undefined8 *)((long)pvVar26 + lVar25 + 200) = uVar2;
        *(undefined8 *)((long)pvVar26 + lVar25 + 0xd0) = uVar9;
        *(undefined8 *)((long)pvVar26 + lVar25 + 0xd8) = uVar7;
        *(undefined8 *)((long)pvVar26 + lVar25 + 0xe0) = uVar14;
        *(undefined8 *)((long)pvVar26 + lVar25 + 0xb8) = uVar8;
        *(undefined8 *)((long)pvVar26 + lVar25 + 0xc0) = uVar15;
        *(undefined8 *)((long)pvVar26 + lVar25 + 0xf8) = uVar2;
        *(undefined8 *)((long)pvVar26 + lVar25 + 0x100) = uVar9;
        *(undefined8 *)((long)pvVar26 + lVar25 + 0x108) = uVar7;
        *(undefined8 *)((long)pvVar26 + lVar25 + 0x110) = uVar14;
        *(undefined8 *)((long)pvVar26 + lVar25 + 0xe8) = uVar8;
        *(undefined8 *)((long)pvVar26 + lVar25 + 0xf0) = uVar15;
        *(undefined8 *)((long)pvVar26 + lVar25 + 0x138) = uVar3;
        *(undefined8 *)((long)pvVar26 + lVar25 + 0x140) = uVar10;
        *(undefined8 *)((long)pvVar26 + lVar25 + 0x148) = uVar4;
        *(undefined8 *)((long)pvVar26 + lVar25 + 0x150) = uVar11;
        *(undefined8 *)((long)pvVar26 + lVar25 + 0x118) = uVar5;
        *(undefined8 *)((long)pvVar26 + lVar25 + 0x120) = uVar12;
        *(undefined8 *)((long)pvVar26 + lVar25 + 0x128) = uVar6;
        *(undefined8 *)((long)pvVar26 + lVar25 + 0x130) = uVar13;
        *(undefined8 *)((long)pvVar26 + lVar25 + 0x158) = uVar5;
        *(undefined8 *)((long)pvVar26 + lVar25 + 0x160) = uVar12;
        *(undefined8 *)((long)pvVar26 + lVar25 + 0x168) = uVar6;
        *(undefined8 *)((long)pvVar26 + lVar25 + 0x170) = uVar13;
        *(undefined8 *)((long)pvVar26 + lVar25 + 0x178) = uVar3;
        *(undefined8 *)((long)pvVar26 + lVar25 + 0x180) = uVar10;
        *(undefined8 *)((long)pvVar26 + lVar25 + 0x188) = uVar4;
        *(undefined8 *)((long)pvVar26 + lVar25 + 400) = uVar11;
        *(undefined8 *)((long)pvVar26 + lVar25 + 0x198) = 0x447a00003f800000;
        *(undefined8 *)((long)pvVar26 + lVar25 + 0x1a0) = 0x3fe38e393f490fdb;
        *(undefined1 **)((long)pvVar26 + lVar25 + 0x1a8) = &DAT_3f8000003f800000;
        *(undefined8 *)((long)pvVar26 + lVar25 + 0x1b0) = 0x3f800000;
        lVar25 = lVar21;
      } while ((ulong)uVar16 * 0x2f0 != lVar21);
      *(uint *)(param_1 + 0x22) = uVar16;
      param_1[0x23] = (long)pvVar26;
      puVar28 = PTR_DAT_04bd11e0;
    }
  }
LAB_03a17c90:
  local_480[0] = *param_2;
  piVar1 = (int *)(param_1[0x197] + 0x514) + param_3;
  if (0x7f < param_3) {
    piVar1 = (int *)(param_1[0x197] + 0x514);
  }
  plVar20 = (long *)(**(code **)(puVar28 + (long)*piVar1 * 0x28 + 0x10))(param_5);
  if (((*PTR_DAT_04bd14f0 & 1) == 0) &&
     (iVar19 = __cxa_guard_acquire(PTR_DAT_04bd14f0), iVar19 != 0)) {
    *(undefined **)PTR_DAT_04bd14e8 = PTR_DAT_04bb2000 + 0x10;
    __cxa_guard_release(PTR_DAT_04bd14f0);
  }
  if (plVar20 == (long *)0x0) {
    plVar20 = (long *)0x0;
  }
  else {
    uVar22 = (**(code **)(*plVar20 + 0x48))(plVar20,PTR_DAT_04bd14e8);
    if ((uVar22 & 1) == 0) {
      plVar20 = (long *)0x0;
    }
  }
  param_1[0x25] = (long)plVar20;
  (**(code **)(*param_1 + 0xd8))(param_1,plVar20,local_480,0,param_5);
  FUN_03a266a0(param_1 + 0x2e,*param_2,param_5);
  param_1[0x193] = 0;
  param_1[0x191] = (long)&DAT_3f8000003f800000;
  param_1[0x192] = (long)&DAT_3f8000003f800000;
  param_1[0x194] = (long)&DAT_3f8000003f800000;
  param_1[0x195] = 0x3f800000;
  param_1[0x196] = 0x3f80000000000000;
  (**(code **)(*param_1 + 0xe0))(param_1,param_2,param_5);
  return;
}

