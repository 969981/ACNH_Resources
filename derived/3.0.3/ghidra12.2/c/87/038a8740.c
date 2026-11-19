
undefined8 FUN_038a8740(uint *param_1,uint param_2,long *param_3,undefined4 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  size_t __size;
  undefined8 *puVar5;
  
  lVar1 = DAT_05ae7600;
  if ((int)param_2 < 1) {
    return 0;
  }
  __size = (ulong)param_2 * 0x40 + (ulong)param_2 * -8;
  if (DAT_05ae7600 == 0) {
    puVar3 = malloc(__size);
  }
  else {
    if (param_3 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      param_3 = (long *)(lVar1 + 8);
      if (lVar2 != 0) {
        param_3 = (long *)(lVar2 + 0xa8);
      }
      param_3 = (long *)*param_3;
      if (param_3 == (long *)0x0) {
        return 0;
      }
    }
    puVar3 = (undefined8 *)(**(code **)(*param_3 + 0x30))(param_3,__size,param_4);
  }
  if (puVar3 == (undefined8 *)0x0) {
    return 0;
  }
  puVar5 = puVar3;
  do {
    uVar4 = nn::os::GetSystemTick();
    *puVar5 = uVar4;
    uVar4 = nn::os::GetSystemTick();
    puVar5[1] = uVar4;
    uVar4 = nn::os::GetSystemTick();
    puVar5[2] = uVar4;
    uVar4 = nn::os::GetSystemTick();
    puVar5[3] = uVar4;
    uVar4 = nn::os::GetSystemTick();
    puVar5[4] = uVar4;
    uVar4 = nn::os::GetSystemTick();
    puVar5[5] = uVar4;
    uVar4 = nn::os::GetSystemTick();
    puVar5[6] = uVar4;
    puVar5 = puVar5 + 7;
  } while (puVar5 != puVar3 + (ulong)param_2 * 7);
  *param_1 = param_2;
  *(undefined8 **)(param_1 + 2) = puVar3;
  return 1;
}

