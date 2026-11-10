
void FUN_003697c0(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                 long *param_6)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  void *__s;
  long lVar6;
  undefined8 *puVar7;
  size_t __n;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  long *local_78;
  
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_3 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_3 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_3 + 0x38);
  uVar8 = *(undefined8 *)(param_3 + 0x40);
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x40) = uVar8;
  puVar3 = PTR_DAT_04bd0830;
  lVar13 = param_6[4];
  if (*(long *)(param_3 + 0x58) == 0) {
    *(int *)(param_6 + 1) = (int)param_6[1] + 1;
    if (lVar13 != 0) goto LAB_003698b0;
  }
  else {
    if (lVar13 == 0) {
      __s = (void *)param_6[5];
      *param_6 = (long)__s;
      __n = (long)*(int *)puVar3 * 8;
      *(int *)((long)param_6 + 0xc) = *(int *)puVar3;
      pvVar1 = (void *)((long)__s + __n);
      memset(__s,0,__n);
      lVar13 = (long)pvVar1 + 0x10;
      *(void **)pvVar1 = pvVar1;
      *(void **)((long)pvVar1 + 8) = pvVar1;
      param_6[2] = (long)pvVar1;
      FUN_0036ae20(lVar13,(long)pvVar1 + 0x40);
      param_6[4] = lVar13;
    }
    *(int *)(param_6 + 1) = (int)param_6[1] + 1;
LAB_003698b0:
    plVar9 = (long *)(*(long *)(lVar13 + 0x20) + (long)*(int *)(lVar13 + 0x28) * 0x68);
    *(int *)(lVar13 + 0x28) = *(int *)(lVar13 + 0x28) + 1;
    *(int *)(param_6 + 3) = (int)param_6[3] + 1;
    lVar13 = param_6[4];
    *(undefined4 *)(plVar9 + 9) = 0;
    *(undefined4 *)(plVar9 + 0xc) = 0;
    plVar9[2] = param_1;
    lVar11 = *plVar9;
    plVar9[5] = 0;
    plVar9[6] = lVar13;
    plVar10 = (long *)param_6[2];
    *plVar9 = *plVar10;
    *(long **)(lVar11 + 8) = plVar10;
    *(long **)(*plVar10 + 8) = plVar9;
    *plVar10 = lVar11;
    *(long **)(*param_6 + (long)(int)param_6[1] * 8 + -8) = plVar9;
  }
  local_78 = param_6 + 4;
  plVar9 = param_6 + 1;
  lVar13 = 0;
  if (*(long *)(*(long *)(param_3 + 0x18) + 0x18) != 0) {
    lVar13 = param_1;
  }
  uVar8 = FUN_0038d220(*(long *)(param_3 + 0x18),lVar13,param_2,param_1,param_6);
  *(undefined8 *)(param_1 + 0x18) = uVar8;
  if (param_5 != 0) {
    FUN_0037c2a0(uVar8,param_5);
  }
  puVar4 = PTR_DAT_04bd0810;
  puVar3 = PTR_DAT_04bd0800;
  lVar13 = (**(code **)PTR_DAT_04bd0800)(0x10,4,*(undefined8 *)PTR_DAT_04bd0810);
  if (lVar13 != 0) {
    *(long *)lVar13 = lVar13;
    *(long *)(lVar13 + 8) = lVar13;
  }
  *(long *)(param_1 + 0x20) = lVar13;
  lVar13 = *(long *)(param_3 + 0x20);
  for (lVar11 = *(long *)(lVar13 + 8); lVar11 != lVar13; lVar11 = *(long *)(lVar11 + 8)) {
    uVar8 = *(undefined8 *)(param_1 + 0x18);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    lVar6 = (**(code **)puVar3)(0x38,4,*(undefined8 *)puVar4);
    if (lVar6 != 0) {
      FUN_003674e0(lVar6,lVar11 + -8,uVar8);
    }
    FUN_00367700(uVar2,lVar6);
  }
  if (param_4 != 0) {
    plVar10 = *(long **)(param_1 + 0x18);
    if (((*PTR_DAT_04bc9008 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc9008), puVar3 = PTR_DAT_04bc8f30, iVar5 != 0)) {
      if (((*PTR_DAT_04bc8f38 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar5 != 0)) {
        *(undefined8 *)puVar3 = 0;
        __cxa_guard_release(PTR_DAT_04bc8f38);
      }
      *(undefined **)PTR_DAT_04bc9000 = puVar3;
      __cxa_guard_release(PTR_DAT_04bc9008);
    }
    if (plVar10 != (long *)0x0) {
      puVar7 = (undefined8 *)(**(code **)(*plVar10 + 0x10))(plVar10);
      if (puVar7 != (undefined8 *)PTR_DAT_04bc9000) {
        do {
          puVar7 = (undefined8 *)*puVar7;
        } while (puVar7 != (undefined8 *)PTR_DAT_04bc9000 && puVar7 != (undefined8 *)0x0);
        if (puVar7 == (undefined8 *)0x0) goto LAB_00369a50;
      }
      plVar10 = plVar10 + 0x1b;
      lVar13 = *plVar10;
      plVar12 = (long *)(param_4 + 0x48);
      *plVar10 = *plVar12;
      *(long **)(lVar13 + 8) = plVar12;
      *(long **)(*plVar12 + 8) = plVar10;
      *plVar12 = lVar13;
    }
  }
LAB_00369a50:
  if (*local_78 != 0) {
    iVar5 = (int)*plVar9;
    uVar8 = 0;
    if ((0 < iVar5) && (iVar5 <= *(int *)PTR_DAT_04bd0830)) {
      uVar8 = *(undefined8 *)(*param_6 + (ulong)(iVar5 - 1) * 8);
    }
    FUN_003693f0(param_1,uVar8);
  }
  iVar5 = (int)*plVar9 + -1;
  if ((int)*plVar9 < 1) {
    iVar5 = 0;
  }
  *(int *)plVar9 = iVar5;
  return;
}

