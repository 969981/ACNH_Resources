
/* WARNING: Removing unreachable block (ram,0x032c0f18) */
/* WARNING: Removing unreachable block (ram,0x032c0fec) */

void FUN_032c0eb0(long *param_1,long *param_2,uint param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  void *pvVar8;
  ulong uVar9;
  long lVar10;
  
  puVar5 = PTR_DAT_04bb2698;
  if (*param_1 != 0) {
    return;
  }
  if (param_1[3] != 0) {
    return;
  }
  uVar9 = (ulong)param_3;
  if ((int)param_3 < 1) goto LAB_032c0fe0;
  lVar10 = *(long *)PTR_DAT_04bb2698;
  if (lVar10 == 0) {
    pvVar8 = malloc(uVar9 << 2);
joined_r0x032c105c:
    if (pvVar8 != (void *)0x0) {
      *param_1 = (long)pvVar8;
      *(undefined8 *)((long)param_1 + 0xc) = 0;
      *(uint *)(param_1 + 1) = param_3;
    }
  }
  else {
    plVar6 = (long *)*param_2;
    if (plVar6 != (long *)0x0) {
LAB_032c0f64:
      pvVar8 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,uVar9 << 2,8);
      goto joined_r0x032c105c;
    }
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar6 = (long *)(lVar10 + 8);
    if (lVar7 != 0) {
      plVar6 = (long *)(lVar7 + 0xa8);
    }
    plVar6 = (long *)*plVar6;
    if (plVar6 != (long *)0x0) goto LAB_032c0f64;
  }
  if ((int)param_1[2] < (int)param_1[1]) {
    do {
      iVar1 = (int)param_1[2];
      iVar3 = (int)param_1[1];
      if (iVar1 < iVar3) {
        *(int *)(param_1 + 2) = iVar1 + 1;
        iVar1 = *(int *)((long)param_1 + 0xc) + iVar1;
        iVar2 = 0;
        if (iVar3 <= iVar1) {
          iVar2 = iVar3;
        }
        *(undefined4 *)(*param_1 + (long)(iVar1 - iVar2) * 4) = 0xffffffff;
      }
      uVar4 = (int)uVar9 - 1;
      uVar9 = (ulong)uVar4;
    } while (uVar4 != 0);
  }
LAB_032c0fe0:
  if (0 < (int)param_4) {
    lVar10 = *(long *)puVar5;
    if (lVar10 == 0) {
      pvVar8 = malloc((ulong)param_4 << 2);
    }
    else {
      param_2 = (long *)*param_2;
      if (param_2 == (long *)0x0) {
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        param_2 = (long *)(lVar10 + 8);
        if (lVar7 != 0) {
          param_2 = (long *)(lVar7 + 0xa8);
        }
        param_2 = (long *)*param_2;
        if (param_2 == (long *)0x0) {
          return;
        }
      }
      pvVar8 = (void *)(**(code **)(*param_2 + 0x30))(param_2,(ulong)param_4 << 2,8);
    }
    if (pvVar8 != (void *)0x0) {
      param_1[3] = (long)pvVar8;
      *(undefined8 *)((long)param_1 + 0x24) = 0;
      *(uint *)(param_1 + 4) = param_4;
    }
  }
  return;
}

