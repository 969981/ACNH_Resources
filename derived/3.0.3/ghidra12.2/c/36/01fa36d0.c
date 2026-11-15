
undefined8 FUN_01fa36d0(long *param_1,uint *param_2,long *param_3,undefined1 *param_4)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  void *pvVar10;
  void *pvVar11;
  
  puVar2 = PTR_DAT_04bb27c0;
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 != 0) {
    uVar6 = *param_2;
    if ((((uVar6 == 0) ||
         (plVar8 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                             ((ulong)(uVar6 >> 0x11) & 0x7ff8)), plVar8 == (long *)0x0)) ||
        ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar8 + 0x46) != uVar6)) {
      plVar8 = (long *)0x0;
    }
    if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
      plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      (**(code **)(*plVar4 + 0x60))();
    }
    if (plVar8 != (long *)0x0) {
      if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar3 != 0)) {
        *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb37d8);
      }
      (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb37d0);
    }
  }
  uVar5 = (**(code **)(*param_1 + 0x540))(param_1);
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  if ((*(char *)((long)param_1 + 0xaf9c) != '\0') && ((int)param_1[0x15f4] == 1)) {
    return 0;
  }
  lVar7 = *(long *)puVar2;
  if (lVar7 == 0) goto LAB_01fa38cc;
  uVar6 = *param_2;
  if ((((uVar6 == 0) ||
       (lVar9 = *(long *)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                         ((ulong)(uVar6 >> 0x11) & 0x7ff8)), lVar9 == 0)) ||
      ((*(uint *)(lVar9 + 0x248) >> 1 & 1) != 0)) || (*(uint *)(lVar9 + 0x230) != uVar6)) {
    lVar9 = 0;
  }
  if ((*(int *)(lVar7 + 0x288) == 1) || (*(int *)(lVar7 + 0x288) == -1)) {
    plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar8 + 0x60))();
    if (iVar3 < 0x11) {
      uVar6 = 1;
    }
    else {
      uVar6 = *(uint *)(lVar7 + 0x5e8);
      if (4 < uVar6) goto LAB_01fa3884;
      uVar6 = 0x1aU >> (ulong)(uVar6 & 0x1f) & 1;
    }
  }
  else {
LAB_01fa3884:
    uVar6 = 0;
  }
  if (lVar9 != 0) {
    uVar6 = uVar6 ^ 1;
    if (*(int *)(lVar9 + 0x150) != 1) {
      uVar6 = 1;
    }
    if ((uVar6 == 0) &&
       (uVar5 = FUN_021fc000(*(long *)(param_1[1] + 0x68) + 0x278,*(long *)(lVar9 + 0x68) + 0x278),
       (uVar5 & 1) != 0)) {
      return 0;
    }
  }
LAB_01fa38cc:
  pvVar10 = (void *)param_1[0x245c];
  (**(code **)(*param_3 + 0x18))(param_3);
  pvVar11 = (void *)param_3[1];
  if (pvVar10 != pvVar11) {
    (**(code **)(*param_3 + 0x18))(param_3);
    lVar7 = 0;
    do {
      if (*(char *)(param_3[1] + lVar7) == '\0') goto LAB_01fa395c;
      lVar9 = param_3[1] + lVar7;
      if (*(char *)(lVar9 + 1) == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_01fa395c;
      }
      if (*(char *)(lVar9 + 2) == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_01fa395c;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_01fa395c:
    iVar3 = (int)lVar7;
    if ((int)param_1[0x245d] <= (int)lVar7) {
      iVar3 = (int)param_1[0x245d] + -1;
    }
    memcpy(pvVar10,pvVar11,(long)iVar3);
    *(undefined1 *)((long)pvVar10 + (long)iVar3) = 0;
  }
  *(int *)(param_1 + 0x2466) = (int)param_3[0xb];
  *(undefined8 *)((long)param_1 + 0x12334) = *(undefined8 *)((long)param_3 + 0x5c);
  pvVar10 = (void *)param_1[0x246a];
  *(undefined4 *)((long)param_1 + 0x1233c) = *(undefined4 *)((long)param_3 + 100);
  plVar8 = (long *)(param_4 + 8);
  (**(code **)(*plVar8 + 0x18))(plVar8);
  pvVar11 = *(void **)(param_4 + 0x10);
  if (pvVar10 != pvVar11) {
    (**(code **)(*(long *)(param_4 + 8) + 0x18))(plVar8);
    lVar7 = 0;
    do {
      if (*(char *)(*(long *)(param_4 + 0x10) + lVar7) == '\0') goto LAB_01fa3a1c;
      lVar9 = *(long *)(param_4 + 0x10) + lVar7;
      if (*(char *)(lVar9 + 1) == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_01fa3a1c;
      }
      if (*(char *)(lVar9 + 2) == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_01fa3a1c;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_01fa3a1c:
    iVar3 = (int)lVar7;
    if ((int)param_1[0x246b] <= (int)lVar7) {
      iVar3 = (int)param_1[0x246b] + -1;
    }
    memcpy(pvVar10,pvVar11,(long)iVar3);
    *(undefined1 *)((long)pvVar10 + (long)iVar3) = 0;
  }
  *(undefined4 *)(param_1 + 0x2474) = *(undefined4 *)(param_4 + 0x60);
  *(undefined8 *)((long)param_1 + 0x123a4) = *(undefined8 *)(param_4 + 100);
  *(undefined4 *)((long)param_1 + 0x123ac) = *(undefined4 *)(param_4 + 0x6c);
  *(undefined1 *)(param_1 + 0x2468) = *param_4;
  if ((((*(int *)((long)param_1 + 0x77f4) == 0x10) || ((int)param_1[0xef6] == 0x10)) ||
      (*(int *)(param_1[2] + 0x360) == 0x13)) || (*(int *)(param_1[2] + 0x378) == 0x13)) {
    return 0;
  }
  plVar8 = *(long **)(param_1[1] + 0x60);
  if (plVar8 == (long *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar3 = __cxa_guard_acquire(&DAT_052461c0);
      plVar8 = &DAT_05240280;
      if (iVar3 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      plVar8 = &DAT_05240280;
    }
  }
  uVar5 = (**(code **)(*plVar8 + 0x100))(plVar8);
  puVar2 = PTR_DAT_04bb37e0;
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  if (*(char *)((long)param_1 + 0xaf9c) == '\0') {
    *(undefined4 *)(param_1 + 0x15f4) = 1;
    *(undefined1 *)((long)param_1 + 0xaf9c) = 1;
    *(uint *)((long)param_1 + 0xafa4) = *param_2;
    *(undefined2 *)(param_1 + 0x15f5) = *(undefined2 *)puVar2;
    *(undefined *)((long)param_1 + 0xafaa) = puVar2[2];
    *(undefined *)((long)param_1 + 0xafab) = puVar2[3];
    uVar1 = *(undefined4 *)(puVar2 + 4);
    *(undefined1 *)(param_1 + 0x15f2) = 0;
    *(undefined1 *)(param_1 + 0x15f3) = 0;
    *(undefined4 *)((long)param_1 + 0xafac) = uVar1;
    return 1;
  }
  return 0;
}

