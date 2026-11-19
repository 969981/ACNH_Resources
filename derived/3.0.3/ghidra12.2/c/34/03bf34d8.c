
void FUN_03bf34d8(undefined8 *param_1,long param_2,undefined8 param_3,long param_4,long *param_5)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  undefined8 uVar4;
  size_t __size;
  
  param_1[6] = param_4;
  param_1[2] = param_1 + 1;
  param_1[3] = 0xffffffff00000000;
  *param_1 = &DAT_04b7bf38;
  param_1[1] = param_1 + 1;
  param_1[7] = *(undefined8 *)(param_2 + 8);
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  param_1[8] = *(undefined8 *)(param_2 + 0x10);
  param_1[9] = uVar4;
  param_1[10] = *(undefined8 *)(param_2 + 0x20);
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0xb] = uVar4;
  *(undefined4 *)(param_1 + 0xc) = 0x7f800000;
  *(undefined4 *)((long)param_1 + 0x1c) = 0x10;
  if (*(long *)(param_2 + 0x28) == 0) {
    param_1[0xb] = &DAT_0419b59c;
  }
  lVar1 = DAT_05ae7600;
  if ((ulong)*(ushort *)(param_4 + 0x44) == 0) goto LAB_03bf35ec;
  __size = (ulong)*(ushort *)(param_4 + 0x44) << 2;
  if (DAT_05ae7600 == 0) {
    pvVar3 = malloc(__size);
  }
  else {
    if (param_5 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      param_5 = (long *)(lVar1 + 8);
      if (lVar2 != 0) {
        param_5 = (long *)(lVar2 + 0xa8);
      }
      param_5 = (long *)*param_5;
      if (param_5 == (long *)0x0) {
        pvVar3 = (void *)0x0;
        goto LAB_03bf35e8;
      }
    }
    pvVar3 = (void *)(**(code **)(*param_5 + 0x30))(param_5,__size,8);
  }
LAB_03bf35e8:
  param_1[0xf] = pvVar3;
LAB_03bf35ec:
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}

