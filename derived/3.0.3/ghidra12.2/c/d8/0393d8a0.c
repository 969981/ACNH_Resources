
void FUN_0393d8a0(long param_1,uint param_2,byte param_3,long *param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  *(byte *)(param_1 + 0x14) = param_3;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  *(uint *)(param_1 + 0xc) = param_2;
  if ((param_3 & 1) == 0) {
    uVar9 = (ulong)param_2;
    *(uint *)(param_1 + 0x10) = param_2;
    *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
    if ((int)param_2 < 1) {
      return;
    }
  }
  else {
    uVar9 = 1;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x10) = 1;
  }
  lVar4 = DAT_05ae7600;
  uVar10 = uVar9 * 0x30 | 8;
  if (DAT_05ae7600 == 0) {
    puVar6 = malloc(uVar10);
  }
  else {
    if (param_4 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      param_4 = (long *)(lVar4 + 8);
      if (lVar5 != 0) {
        param_4 = (long *)(lVar5 + 0xa8);
      }
      param_4 = (long *)*param_4;
      if (param_4 == (long *)0x0) {
        return;
      }
    }
    puVar6 = (ulong *)(**(code **)(*param_4 + 0x30))(param_4,uVar10,8);
  }
  if (puVar6 != (ulong *)0x0) {
    uVar8 = uVar9 * 0x30 - 0x30;
    puVar7 = puVar6 + 1;
    *puVar6 = uVar9;
    puVar3 = PTR_DAT_04bd1068;
    uVar1 = ((uint)(uVar8 / 0x30) & 0x7ffffff) + 1;
    uVar10 = (ulong)uVar1 & 3;
    puVar6 = puVar7;
    if ((uVar1 & 3) != 0) {
      puVar2 = PTR_DAT_04bd1068 + 0x10;
      do {
        *puVar6 = (ulong)puVar2;
        puVar6[1] = 0;
        uVar10 = uVar10 - 1;
        puVar6[2] = 0;
        puVar6[3] = 0;
        puVar6[4] = 0;
        puVar6[5] = 0;
        puVar6 = puVar6 + 6;
      } while (uVar10 != 0);
    }
    if (0x8f < uVar8) {
      puVar3 = puVar3 + 0x10;
      do {
        *puVar6 = (ulong)puVar3;
        puVar6[1] = 0;
        puVar6[2] = 0;
        puVar6[3] = 0;
        puVar6[4] = 0;
        puVar6[5] = 0;
        puVar6[6] = (ulong)puVar3;
        puVar6[7] = 0;
        puVar6[8] = 0;
        puVar6[9] = 0;
        puVar6[10] = 0;
        puVar6[0xb] = 0;
        puVar6[0xc] = (ulong)puVar3;
        puVar6[0xd] = 0;
        puVar6[0xe] = 0;
        puVar6[0xf] = 0;
        puVar6[0x10] = 0;
        puVar6[0x11] = 0;
        puVar6[0x16] = 0;
        puVar6[0x17] = 0;
        puVar6[0x14] = 0;
        puVar6[0x15] = 0;
        puVar6[0x12] = (ulong)puVar3;
        puVar6[0x13] = 0;
        puVar6 = puVar6 + 0x18;
      } while (puVar6 != puVar7 + uVar9 * 6);
    }
    *(int *)(param_1 + 0x20) = (int)uVar9;
    *(ulong **)(param_1 + 0x28) = puVar7;
  }
  return;
}

