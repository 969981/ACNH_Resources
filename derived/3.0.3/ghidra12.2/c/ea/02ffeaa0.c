
void FUN_02ffeaa0(uint *param_1,undefined4 *param_2,ulong param_3)

{
  undefined4 *puVar1;
  ulong uVar2;
  ulong uVar3;
  size_t __size;
  long lVar4;
  long *plVar5;
  void *__s;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  if ((int)(uint)param_3 < 1) {
    if (param_3 == 0) {
      return;
    }
  }
  else {
    __size = (param_3 & 0xffffffff) << 2;
    lVar9 = *(long *)PTR_DAT_04bb2698;
    if (lVar9 == 0) {
      __s = malloc(__size);
    }
    else {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar5 = (long *)(lVar9 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
      if (plVar5 == (long *)0x0) goto LAB_02ffeb64;
      __s = (void *)(**(code **)(*plVar5 + 0x30))(plVar5,__size,8);
    }
    if (__s != (void *)0x0) {
      memset(__s,0xff,__size);
      *param_1 = (uint)param_3;
      *(void **)(param_1 + 2) = __s;
    }
  }
LAB_02ffeb64:
  uVar3 = param_3 - 1 & 0x3fffffffffffffff;
  uVar2 = uVar3 + 1;
  uVar8 = 0;
  if (uVar3 != 0) {
    uVar8 = 0;
    do {
      uVar6 = (uint)uVar8;
      uVar7 = uVar6;
      if (*param_1 <= uVar6) {
        uVar7 = 0;
      }
      *(undefined4 *)(*(long *)(param_1 + 2) + (ulong)uVar7 * 4) = *param_2;
      puVar1 = param_2 + 1;
      param_2 = param_2 + 2;
      uVar7 = 0;
      if (uVar6 + 1 < *param_1) {
        uVar7 = uVar6 + 1;
      }
      uVar8 = uVar8 + 2;
      *(undefined4 *)(*(long *)(param_1 + 2) + (ulong)uVar7 * 4) = *puVar1;
    } while ((uVar2 & 0x7ffffffffffffffe) != uVar8);
  }
  if ((uVar2 & 1) != 0) {
    uVar7 = (uint)uVar8;
    if (*param_1 <= uVar7) {
      uVar7 = 0;
    }
    *(undefined4 *)(*(long *)(param_1 + 2) + (ulong)uVar7 * 4) = *param_2;
  }
  return;
}

