
void FUN_03c26ca0(undefined8 *param_1,int param_2,long *param_3)

{
  uint uVar1;
  undefined1 auVar2 [16];
  long lVar3;
  undefined4 *puVar4;
  size_t __size;
  undefined4 *puVar5;
  undefined4 *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(int *)(param_1 + 3) = param_2;
  lVar7 = DAT_05ae7600;
  if (param_3 == (long *)0x0) {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    param_2 = *(int *)(param_1 + 3);
    param_3 = (long *)(lVar7 + 8);
    if (lVar3 != 0) {
      param_3 = (long *)(lVar3 + 0xa8);
    }
    param_3 = (long *)*param_3;
  }
  lVar7 = DAT_05ae7600;
  uVar10 = (ulong)param_2;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar10;
  __size = (uVar10 + (long)param_2 * 4) * 4;
  if (SUB168(auVar2 * ZEXT816(0x14),8) != 0) {
    __size = 0xffffffffffffffff;
  }
  if (DAT_05ae7600 == 0) {
    puVar4 = malloc(__size);
  }
  else {
    if (param_3 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      param_3 = (long *)(lVar7 + 8);
      if (lVar3 != 0) {
        param_3 = (long *)(lVar3 + 0xa8);
      }
      param_3 = (long *)*param_3;
      if (param_3 == (long *)0x0) {
        puVar4 = (undefined4 *)0x0;
        goto joined_r0x03c26e7c;
      }
    }
    puVar4 = (undefined4 *)(**(code **)(*param_3 + 0x30))(param_3,__size,8);
  }
joined_r0x03c26e7c:
  if (param_2 != 0) {
    uVar8 = uVar10 * 0x14 - 0x14;
    uVar1 = ((uint)(uVar8 / 0x14) & 0xfffffff) + 1;
    uVar9 = (ulong)uVar1 & 3;
    puVar6 = puVar4;
    if ((uVar1 & 3) != 0) {
      puVar5 = puVar4;
      do {
        uVar9 = uVar9 - 1;
        puVar6 = puVar5 + 5;
        *puVar5 = 0xffffffff;
        puVar5 = puVar6;
      } while (uVar9 != 0);
    }
    if (0x3b < uVar8) {
      do {
        *puVar6 = 0xffffffff;
        puVar6[5] = 0xffffffff;
        puVar6[10] = 0xffffffff;
        puVar6[0xf] = 0xffffffff;
        puVar6 = puVar6 + 0x14;
      } while (puVar6 != puVar4 + uVar10 * 5);
    }
  }
  param_1[2] = puVar4;
  *(undefined4 *)(param_1 + 6) = 0;
  *(undefined1 *)((long)param_1 + 0x34) = 0;
  *(undefined8 *)((long)param_1 + 0x1c) = 0x3d4ccccd41a00000;
  if (0 < *(int *)(param_1 + 3)) {
    lVar3 = 0;
    lVar7 = 0;
    do {
      lVar7 = lVar7 + 1;
      puVar4 = (undefined4 *)(param_1[2] + lVar3);
      lVar3 = lVar3 + 0x14;
      *puVar4 = 0xffffffff;
      *(undefined8 *)(puVar4 + 1) = 0;
      *(undefined8 *)(puVar4 + 3) = 0;
    } while (lVar7 < *(int *)(param_1 + 3));
    puVar4 = (undefined4 *)param_1[2];
  }
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  param_1[5] = &DAT_0407ebb1;
  puVar4[3] = 0x3f800000;
  return;
}

