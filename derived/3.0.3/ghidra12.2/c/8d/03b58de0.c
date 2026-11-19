
void FUN_03b58de0(undefined8 *param_1,long *param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  size_t __size;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  *param_1 = &PTR_FUN_04b76d38;
  param_1[1] = 0;
  __size = -(ulong)(param_3 >> 0x1f) & 0xfffffff000000000 | (ulong)param_3 << 4;
  param_1[2] = 0;
  param_1[3] = 0;
  if ((int)param_3 < 0) {
    __size = 0xffffffffffffffff;
  }
  *(uint *)(param_1 + 4) = param_3;
  lVar8 = *(long *)PTR_DAT_04bb2698;
  if (lVar8 == 0) {
    puVar3 = malloc(__size);
  }
  else {
    if (param_2 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      param_2 = (long *)(lVar8 + 8);
      if (lVar2 != 0) {
        param_2 = (long *)(lVar2 + 0xa8);
      }
      param_2 = (long *)*param_2;
      if (param_2 == (long *)0x0) {
        puVar3 = (undefined8 *)0x0;
        goto joined_r0x03b58f44;
      }
    }
    puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x30))(param_2,__size,8);
  }
joined_r0x03b58f44:
  if (param_3 != 0) {
    uVar6 = (ulong)(int)param_3;
    uVar7 = uVar6 & 3;
    puVar5 = puVar3;
    if (uVar7 != 0) {
      puVar4 = puVar3;
      do {
        puVar5 = puVar4 + 2;
        *puVar4 = 0xffffffffffffffff;
        puVar4[1] = 0;
        uVar7 = uVar7 - 1;
        puVar4 = puVar5;
      } while (uVar7 != 0);
    }
    if (2 < (uVar6 - 1 & 0xfffffffffffffff)) {
      do {
        *puVar5 = 0xffffffffffffffff;
        puVar5[1] = 0;
        puVar5[2] = 0xffffffffffffffff;
        puVar5[3] = 0;
        puVar5[4] = 0xffffffffffffffff;
        puVar5[5] = 0;
        puVar5[6] = 0xffffffffffffffff;
        puVar5[7] = 0;
        puVar5 = puVar5 + 8;
      } while (puVar5 != puVar3 + uVar6 * 2);
    }
  }
  param_1[3] = puVar3;
  if (0 < *(int *)(param_1 + 4)) {
    lVar2 = 0;
    lVar8 = 0;
    do {
      lVar8 = lVar8 + 1;
      *(undefined8 *)(param_1[3] + lVar2) = 0xffffffffffffffff;
      lVar1 = param_1[3] + lVar2;
      lVar2 = lVar2 + 0x10;
      *(undefined8 *)(lVar1 + 8) = 0;
    } while (lVar8 < *(int *)(param_1 + 4));
  }
  return;
}

