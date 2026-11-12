
void FUN_006d00c0(uint *param_1,long *param_2,uint param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  size_t __size;
  uint uVar7;
  long lVar8;
  
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  puVar3 = PTR_DAT_04bb3350;
  puVar2 = PTR_DAT_04bb2698;
  if ((int)param_3 < 1) goto LAB_006d023c;
  __size = *(size_t *)(*(long *)PTR_DAT_04bb21c8 + 0xb8);
  lVar8 = *(long *)PTR_DAT_04bb2698;
  if (lVar8 == 0) {
    pvVar6 = malloc((ulong)param_3 * 0x30);
    if (pvVar6 == (void *)0x0) goto LAB_006d0184;
LAB_006d016c:
    *param_1 = param_3;
    *(void **)(param_1 + 2) = pvVar6;
  }
  else {
    plVar5 = param_2;
    if (param_2 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar5 = (long *)(lVar8 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) goto LAB_006d0184;
    }
    pvVar6 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,(ulong)param_3 * 0x30,8);
    if (pvVar6 != (void *)0x0) goto LAB_006d016c;
LAB_006d0184:
    if ((int)*param_1 < 1) goto LAB_006d023c;
  }
  uVar7 = 0;
  do {
    lVar8 = *(long *)puVar2;
    if (lVar8 == 0) {
      pvVar6 = malloc(__size);
    }
    else {
      plVar5 = param_2;
      if (param_2 == (long *)0x0) {
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
        plVar5 = (long *)(lVar8 + 8);
        if (lVar4 != 0) {
          plVar5 = (long *)(lVar4 + 0xa8);
        }
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) {
          pvVar6 = (void *)0x0;
          goto LAB_006d01b4;
        }
      }
      pvVar6 = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,__size,8);
    }
LAB_006d01b4:
    uVar1 = uVar7;
    if (*param_1 <= uVar7) {
      uVar1 = 0;
    }
    *(void **)(*(long *)(param_1 + 2) + (ulong)uVar1 * 0x30 + 0x18) = pvVar6;
    uVar1 = uVar7;
    if (*param_1 <= uVar7) {
      uVar1 = 0;
    }
    uVar7 = uVar7 + 1;
    *(size_t *)(*(long *)(param_1 + 2) + (ulong)uVar1 * 0x30 + 0x20) = __size;
  } while ((int)uVar7 < (int)*param_1);
LAB_006d023c:
  param_1[4] = 0;
  return;
}

