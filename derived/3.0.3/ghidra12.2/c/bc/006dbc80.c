
void FUN_006dbc80(uint *param_1,size_t param_2,uint param_3,long *param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(size_t *)(param_1 + 4) = param_2;
  puVar3 = PTR_DAT_04bb3350;
  puVar2 = PTR_DAT_04bb2698;
  if ((int)param_3 < 1) {
    if (param_3 == 0) goto LAB_006dbe9c;
  }
  else {
    lVar9 = *(long *)PTR_DAT_04bb2698;
    if (lVar9 == 0) {
      pvVar6 = malloc((ulong)param_3 * 0x48);
    }
    else {
      plVar5 = param_4;
      if (param_4 == (long *)0x0) {
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar5 = (long *)(lVar9 + 8);
        if (lVar4 != 0) {
          plVar5 = (long *)(lVar4 + 0xa8);
        }
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) goto LAB_006dbd40;
      }
      pvVar6 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,(ulong)param_3 * 0x48,8);
    }
    if (pvVar6 != (void *)0x0) {
      *param_1 = param_3;
      *(void **)(param_1 + 2) = pvVar6;
    }
  }
LAB_006dbd40:
  uVar8 = 0;
  do {
    lVar9 = *(long *)puVar2;
    if (lVar9 == 0) {
      pvVar6 = malloc(param_2);
    }
    else {
      plVar5 = param_4;
      if (param_4 == (long *)0x0) {
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
        plVar5 = (long *)(lVar9 + 8);
        if (lVar4 != 0) {
          plVar5 = (long *)(lVar4 + 0xa8);
        }
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          pvVar6 = (void *)0x0;
          goto LAB_006dbd64;
        }
      }
      pvVar6 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,param_2,8);
    }
LAB_006dbd64:
    uVar7 = uVar8;
    if (*param_1 <= uVar8) {
      uVar7 = 0;
    }
    *(void **)(*(long *)(param_1 + 2) + (ulong)uVar7 * 0x48 + 0x30) = pvVar6;
    uVar7 = uVar8;
    if (*param_1 <= uVar8) {
      uVar7 = 0;
    }
    *(size_t *)(*(long *)(param_1 + 2) + (ulong)uVar7 * 0x48 + 0x38) = param_2;
    uVar7 = uVar8;
    if (*param_1 <= uVar8) {
      uVar7 = 0;
    }
    uVar8 = uVar8 + 1;
    *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)uVar7 * 0x48 + 0x40) = 0;
  } while (param_3 != uVar8);
  uVar8 = *param_1;
  if (0 < (int)uVar8) {
    uVar7 = 0;
    do {
      uVar1 = uVar7;
      if (uVar8 <= uVar7) {
        uVar1 = 0;
      }
      *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)uVar1 * 0x48) = 0;
      uVar8 = uVar7;
      if (*param_1 <= uVar7) {
        uVar8 = 0;
      }
      *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)uVar8 * 0x48 + 8) = 0;
      uVar8 = uVar7;
      if (*param_1 <= uVar7) {
        uVar8 = 0;
      }
      *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)uVar8 * 0x48 + 0x10) = 0;
      uVar8 = uVar7;
      if (*param_1 <= uVar7) {
        uVar8 = 0;
      }
      lVar9 = *(long *)(param_1 + 2) + (ulong)uVar8 * 0x48;
      memset(*(void **)(lVar9 + 0x30),0,*(size_t *)(lVar9 + 0x38));
      uVar8 = uVar7;
      if (*param_1 <= uVar7) {
        uVar8 = 0;
      }
      uVar7 = uVar7 + 1;
      *(undefined8 *)(*(long *)(param_1 + 2) + (ulong)uVar8 * 0x48 + 0x40) = 0;
      uVar8 = *param_1;
    } while ((int)uVar7 < (int)uVar8);
  }
LAB_006dbe9c:
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}

