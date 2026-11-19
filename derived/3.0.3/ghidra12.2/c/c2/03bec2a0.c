
void * FUN_03bec2a0(long *param_1,undefined8 *param_2,long *param_3,int param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  void *pvVar7;
  char *__s2;
  void *pvVar8;
  long *plVar9;
  long lVar10;
  
  __s2 = (char *)*param_2;
  plVar4 = (long *)(**(code **)(*param_1 + 0x38))();
  (**(code **)(*plVar4 + 0x10))();
  if ((int)param_1[4] != 0) {
    if ((long *)param_1[3] != param_1 + 2) {
      lVar10 = (long)*(int *)((long)param_1 + 0x24);
      plVar9 = (long *)param_1[0x10];
      pvVar8 = (void *)(param_1[3] - lVar10);
      do {
        if (((*(long **)((long)pvVar8 + 0x38) == param_3 ||
              *(long **)((long)pvVar8 + 0x38) == plVar9) &&
            (*(int *)((long)pvVar8 + 0x40) == param_4)) &&
           (iVar3 = strcmp(*(char **)((long)pvVar8 + 0x10),__s2), iVar3 == 0)) goto LAB_03bec36c;
        pvVar8 = (void *)(*(long *)((long)pvVar8 + lVar10 + 8) - lVar10);
      } while (pvVar8 != (void *)((long)(param_1 + 2) - lVar10));
    }
  }
  pvVar8 = (void *)0x0;
LAB_03bec36c:
  (**(code **)(*plVar4 + 0x18))(plVar4);
  if (pvVar8 != (void *)0x0) {
    return pvVar8;
  }
  if ((long *)param_1[0x10] != (long *)0x0) {
    uVar5 = (**(code **)(*(long *)param_1[0x10] + 0x78))();
    if (uVar5 >> 10 < 5) {
      return (void *)0x0;
    }
    param_3 = (long *)param_1[0x10];
  }
  lVar10 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    pvVar8 = malloc(0x68);
  }
  else {
    plVar4 = param_3;
    if (param_3 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar4 = (long *)(lVar10 + 8);
      if (lVar6 != 0) {
        plVar4 = (long *)(lVar6 + 0xa8);
      }
      plVar4 = (long *)*plVar4;
      if (plVar4 == (long *)0x0) {
        pvVar8 = (void *)0x0;
        goto LAB_03bec414;
      }
    }
    pvVar8 = (void *)(**(code **)(*plVar4 + 0x30))(plVar4,0x68,8);
  }
LAB_03bec414:
  FUN_03bf2ed8(pvVar8,__s2,param_3,param_1,param_4);
  plVar9 = param_1 + 2;
  lVar10 = *plVar9;
  plVar4 = (long *)((long)*(int *)((long)param_1 + 0x24) + (long)pvVar8);
  *plVar9 = (long)plVar4;
  *plVar4 = lVar10;
  plVar4[1] = (long)plVar9;
  if (lVar10 != 0) {
    *(long **)(lVar10 + 8) = plVar4;
  }
  *(int *)(param_1 + 4) = (int)param_1[4] + 1;
  lVar10 = DAT_05ae7600;
  uVar2 = *(uint *)(param_2 + 6);
  if ((param_2[7] == 0) || ((int)uVar2 < 1)) {
    *(short *)((long)pvVar8 + 0x46) = (short)uVar2;
    if ((int)(uVar2 * 0x10000) < 1) goto LAB_03bec528;
    pvVar7 = (void *)0x0;
  }
  else {
    if (DAT_05ae7600 == 0) {
      pvVar7 = malloc((ulong)uVar2 << 3);
    }
    else {
      if (param_3 == (long *)0x0) {
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        puVar1 = (undefined8 *)(lVar10 + 8);
        if (lVar6 != 0) {
          puVar1 = (undefined8 *)(lVar6 + 0xa8);
        }
        param_3 = (long *)*puVar1;
        if (param_3 == (long *)0x0) {
          pvVar7 = (void *)0x0;
          goto LAB_03bec4e4;
        }
      }
      pvVar7 = (void *)(**(code **)(*param_3 + 0x30))(param_3,(ulong)uVar2 << 3,8);
    }
LAB_03bec4e4:
    iVar3 = *(int *)(param_2 + 6);
    if (0 < iVar3) {
      lVar10 = 0;
      do {
        lVar6 = lVar10 * 8;
        lVar10 = lVar10 + 1;
        *(undefined8 *)((long)pvVar7 + lVar6) = *(undefined8 *)(param_2[7] + lVar6);
        iVar3 = *(int *)(param_2 + 6);
      } while (lVar10 < iVar3);
    }
    *(short *)((long)pvVar8 + 0x46) = (short)iVar3;
    if (iVar3 * 0x10000 < 1) goto LAB_03bec528;
  }
  *(void **)((long)pvVar8 + 0x58) = pvVar7;
LAB_03bec528:
  FUN_03bf3190(pvVar8,*(undefined4 *)((long)param_2 + 0x34));
  return pvVar8;
}

