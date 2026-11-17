
void FUN_02ff5850(undefined8 *param_1,int param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  void *pvVar4;
  int iVar5;
  ulong uVar6;
  int iVar7;
  size_t __size;
  ulong uVar8;
  long lVar9;
  
  iVar5 = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_04af0b70;
  param_1[1] = 0;
  lVar9 = DAT_05ae7600;
  if (param_2 < 1) {
    iVar7 = 0;
    goto LAB_02ff5928;
  }
  iVar7 = 0;
  if (param_3 < 1) goto LAB_02ff5928;
  uVar1 = param_3 * param_2;
  __size = -(ulong)(uVar1 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar1 << 2;
  if ((int)uVar1 < 0) {
    __size = 0xffffffffffffffff;
  }
  if (DAT_05ae7600 == 0) {
    pvVar4 = malloc(__size);
joined_r0x02ff5914:
    if (pvVar4 != (void *)0x0) {
      *(int *)(param_1 + 1) = param_2;
      *(int *)((long)param_1 + 0xc) = param_3;
      param_1[2] = pvVar4;
      iVar7 = param_2;
      iVar5 = param_3;
      goto LAB_02ff5928;
    }
  }
  else {
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar3 = (long *)(lVar9 + 8);
    if (lVar2 != 0) {
      plVar3 = (long *)(lVar2 + 0xa8);
    }
    plVar3 = (long *)*plVar3;
    if (plVar3 != (long *)0x0) {
      pvVar4 = (void *)(**(code **)(*plVar3 + 0x30))(plVar3,__size,8);
      goto joined_r0x02ff5914;
    }
  }
  iVar7 = *(int *)(param_1 + 1);
  iVar5 = *(int *)((long)param_1 + 0xc);
LAB_02ff5928:
  uVar1 = iVar7 * iVar5;
  if (0 < (int)uVar1) {
    uVar6 = (ulong)uVar1 & 3;
    if (uVar1 < 4) {
      uVar8 = 0;
    }
    else {
      uVar8 = 0;
      do {
        lVar9 = uVar8 * 4;
        uVar8 = uVar8 + 4;
        *(undefined4 *)(param_1[2] + lVar9) = 0;
        *(undefined4 *)(param_1[2] + lVar9 + 4) = 0;
        *(undefined4 *)(param_1[2] + lVar9 + 8) = 0;
        *(undefined4 *)(param_1[2] + lVar9 + 0xc) = 0;
      } while (((ulong)uVar1 & 0xfffffffc) != uVar8);
    }
    if ((uVar1 & 3) != 0) {
      lVar9 = uVar8 << 2;
      do {
        uVar6 = uVar6 - 1;
        *(undefined4 *)(param_1[2] + lVar9) = 0;
        lVar9 = lVar9 + 4;
      } while (uVar6 != 0);
    }
  }
  return;
}

