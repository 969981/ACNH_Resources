
undefined8 FUN_03856d98(undefined8 *param_1,int param_2,long *param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  ulong __size;
  void *pvVar9;
  long lVar10;
  
  pvVar9 = (void *)*param_1;
  *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) + 1;
  puVar5 = PTR_DAT_04bb2698;
  if (pvVar9 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar9);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar9);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,pvVar9);
      }
    }
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
  }
  if (param_2 < 1) {
    uVar8 = 0;
    goto LAB_03856ed0;
  }
  lVar10 = *(long *)puVar5;
  *(int *)(param_1 + 1) = param_2;
  __size = (ulong)((param_2 - 1U >> 3 & 0x1ffffffc) + 4);
  if (lVar10 == 0) {
    pvVar9 = malloc(__size);
    *param_1 = pvVar9;
joined_r0x03856e94:
    if (pvVar9 != (void *)0x0) {
      iVar4 = *(int *)(param_1 + 1);
      iVar2 = iVar4 + 0x1e;
      if (0 < iVar4) {
        iVar2 = iVar4 + -1;
      }
      uVar1 = (iVar2 >> 5) + 1;
      memset(pvVar9,0,-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2);
      uVar8 = 1;
      goto LAB_03856ed0;
    }
  }
  else {
    if (param_3 != (long *)0x0) {
LAB_03856e5c:
      pvVar9 = (void *)(**(code **)(*param_3 + 0x30))(param_3,__size,8);
      *param_1 = pvVar9;
      goto joined_r0x03856e94;
    }
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    puVar3 = (undefined8 *)(lVar10 + 8);
    if (lVar7 != 0) {
      puVar3 = (undefined8 *)(lVar7 + 0xa8);
    }
    param_3 = (long *)*puVar3;
    if (param_3 != (long *)0x0) goto LAB_03856e5c;
    *param_1 = 0;
  }
  uVar8 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
LAB_03856ed0:
  *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) + -1;
  return uVar8;
}

