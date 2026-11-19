
void FUN_03856c54(undefined8 *param_1,int param_2,long *param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  ulong __size;
  void *pvVar8;
  long lVar9;
  
  pvVar8 = (void *)*param_1;
  *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) + 1;
  puVar5 = PTR_DAT_04bb2698;
  if (pvVar8 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar8);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar8);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,pvVar8);
      }
    }
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
  }
  if (0 < param_2) {
    lVar9 = *(long *)puVar5;
    *(int *)(param_1 + 1) = param_2;
    __size = (ulong)((param_2 - 1U >> 3 & 0x1ffffffc) + 4);
    if (lVar9 == 0) {
      pvVar8 = malloc(__size);
      *param_1 = pvVar8;
    }
    else {
      if (param_3 == (long *)0x0) {
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        puVar3 = (undefined8 *)(lVar9 + 8);
        if (lVar7 != 0) {
          puVar3 = (undefined8 *)(lVar7 + 0xa8);
        }
        param_3 = (long *)*puVar3;
        if (param_3 == (long *)0x0) {
          *param_1 = 0;
          goto LAB_03856d70;
        }
      }
      pvVar8 = (void *)(**(code **)(*param_3 + 0x30))(param_3,__size,8);
      *param_1 = pvVar8;
    }
    if (pvVar8 != (void *)0x0) {
      iVar4 = *(int *)(param_1 + 1);
      iVar2 = iVar4 + 0x1e;
      if (0 < iVar4) {
        iVar2 = iVar4 + -1;
      }
      uVar1 = (iVar2 >> 5) + 1;
      memset(pvVar8,0,-(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2);
    }
  }
LAB_03856d70:
  *(int *)((long)param_1 + 0xc) = *(int *)((long)param_1 + 0xc) + -1;
  return;
}

