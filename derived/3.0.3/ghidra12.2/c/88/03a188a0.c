
undefined8 FUN_03a188a0(long *param_1,uint param_2)

{
  int *piVar1;
  uint *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  void *pvVar10;
  long lVar11;
  long *plVar12;
  void *pvVar13;
  
  *(uint *)(param_1 + 0x2d) = param_2;
  lVar11 = param_1[0x197];
  iVar4 = (**(code **)(*param_1 + 0xb0))();
  if (0 < (int)*(uint *)(lVar11 + 0x308)) {
    uVar8 = 0;
    piVar9 = (int *)(lVar11 + 0x314);
    do {
      piVar1 = piVar9;
      if (0x7f < uVar8) {
        piVar1 = (int *)(lVar11 + 0x314);
      }
      if (*piVar1 == iVar4) {
        uVar6 = (uint)uVar8;
        goto joined_r0x03a1892c;
      }
      uVar8 = uVar8 + 1;
      piVar9 = piVar9 + 1;
    } while (*(uint *)(lVar11 + 0x308) != uVar8);
  }
  uVar6 = 0xffffffff;
joined_r0x03a1892c:
  if (-1 < (int)param_2) {
    lVar7 = *(long *)(lVar11 + 0x300);
    puVar2 = (uint *)(lVar11 + 0x514) + uVar6;
    if (0x7f < uVar6) {
      puVar2 = (uint *)(lVar11 + 0x514);
    }
    uVar6 = *puVar2;
    if (*(uint *)(lVar7 + 0x18) <= uVar6) {
      uVar6 = 0;
    }
    if (param_2 < *(ushort *)(*(long *)(lVar7 + 0x20) + (long)(int)uVar6 * 4 + 2)) {
      plVar12 = *(long **)(*(long *)(lVar7 + 0x30) +
                          ((ulong)*(ushort *)(*(long *)(lVar7 + 0x20) + (long)(int)uVar6 * 4) +
                          (ulong)param_2) * 8);
      goto LAB_03a18988;
    }
  }
  plVar12 = (long *)0x0;
LAB_03a18988:
  if (((*PTR_DAT_04bd14f0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bd14f0), iVar4 != 0))
  {
    *(undefined **)PTR_DAT_04bd14e8 = PTR_DAT_04bb2000 + 0x10;
    __cxa_guard_release(PTR_DAT_04bd14f0);
  }
  if ((plVar12 == (long *)0x0) ||
     (uVar8 = (**(code **)(*plVar12 + 0x48))(plVar12,PTR_DAT_04bd14e8), (uVar8 & 1) == 0)) {
    param_1[0x24] = 0;
    puVar3 = PTR_PTR_04bb2238;
    pvVar10 = (void *)param_1[0x27];
    (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
    pvVar13 = *(void **)(puVar3 + 8);
    if (pvVar10 == pvVar13) {
      uVar5 = 0;
    }
    else {
      (**(code **)(*(long *)puVar3 + 0x18))(puVar3);
      lVar11 = 0;
      do {
        if (*(char *)(*(long *)(puVar3 + 8) + lVar11) == '\0') goto LAB_03a18ac4;
        lVar7 = *(long *)(puVar3 + 8) + lVar11;
        if (*(char *)(lVar7 + 1) == '\0') {
          lVar11 = lVar11 + 1;
          goto LAB_03a18ac4;
        }
        if (*(char *)(lVar7 + 2) == '\0') {
          lVar11 = lVar11 + 2;
          goto LAB_03a18ac4;
        }
        lVar11 = lVar11 + 3;
      } while (lVar11 != 0x80001);
      lVar11 = 0;
LAB_03a18ac4:
      iVar4 = (int)lVar11;
      if ((int)param_1[0x28] <= (int)lVar11) {
        iVar4 = (int)param_1[0x28] + -1;
      }
      memcpy(pvVar10,pvVar13,(long)iVar4);
      uVar5 = 0;
      *(undefined1 *)((long)pvVar10 + (long)iVar4) = 0;
    }
  }
  else {
    param_1[0x24] = (long)plVar12;
    pvVar10 = (void *)param_1[0x27];
    (**(code **)(plVar12[0x47] + 0x18))(plVar12 + 0x47);
    pvVar13 = (void *)plVar12[0x48];
    if (pvVar10 != pvVar13) {
      (**(code **)(plVar12[0x47] + 0x18))(plVar12 + 0x47);
      lVar11 = 0;
      do {
        if (*(char *)(plVar12[0x48] + lVar11) == '\0') goto LAB_03a18b00;
        lVar7 = plVar12[0x48] + lVar11;
        if (*(char *)(lVar7 + 1) == '\0') {
          lVar11 = lVar11 + 1;
          goto LAB_03a18b00;
        }
        if (*(char *)(lVar7 + 2) == '\0') {
          lVar11 = lVar11 + 2;
          goto LAB_03a18b00;
        }
        lVar11 = lVar11 + 3;
      } while (lVar11 != 0x80001);
      lVar11 = 0;
LAB_03a18b00:
      iVar4 = (int)lVar11;
      if ((int)param_1[0x28] <= (int)lVar11) {
        iVar4 = (int)param_1[0x28] + -1;
      }
      memcpy(pvVar10,pvVar13,(long)iVar4);
      *(undefined1 *)((long)pvVar10 + (long)iVar4) = 0;
    }
    FUN_03a174e0(param_1[0x25],param_1[0x24]);
    uVar5 = 1;
  }
  return uVar5;
}

