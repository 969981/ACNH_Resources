
undefined8 FUN_030190c0(uint *param_1,uint param_2,long *param_3,undefined4 param_4)

{
  size_t __size;
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  if ((int)param_2 < 1) {
    return 0;
  }
  __size = (ulong)param_2 << 8;
  lVar4 = *(long *)PTR_DAT_04bb2698;
  if (lVar4 == 0) {
    puVar2 = malloc(__size);
  }
  else {
    if (param_3 == (long *)0x0) {
      lVar1 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      param_3 = (long *)(lVar4 + 8);
      if (lVar1 != 0) {
        param_3 = (long *)(lVar1 + 0xa8);
      }
      param_3 = (long *)*param_3;
      if (param_3 == (long *)0x0) {
        return 0;
      }
    }
    puVar2 = (undefined8 *)(**(code **)(*param_3 + 0x30))(param_3,__size,param_4);
  }
  if (puVar2 == (undefined8 *)0x0) {
    return 0;
  }
  puVar3 = puVar2;
  do {
    *puVar3 = 0;
    puVar3[1] = 0x3f80000000000000;
    puVar3[2] = 0;
    puVar3[3] = 0x3f80000000000000;
    puVar3[4] = 0;
    puVar3[5] = 0x3f80000000000000;
    puVar3[6] = 0;
    puVar3[7] = 0x3f80000000000000;
    puVar3[8] = 0;
    puVar3[9] = 0x3f80000000000000;
    puVar3[10] = 0;
    puVar3[0xb] = 0x3f80000000000000;
    puVar3[0xc] = 0;
    puVar3[0xd] = 0x3f80000000000000;
    puVar3[0xe] = 0;
    puVar3[0xf] = 0x3f80000000000000;
    puVar3[0x10] = 0;
    puVar3[0x11] = 0x3f80000000000000;
    puVar3[0x12] = 0;
    puVar3[0x13] = 0x3f80000000000000;
    puVar3[0x14] = 0;
    puVar3[0x15] = 0x3f80000000000000;
    puVar3[0x16] = 0;
    puVar3[0x17] = 0x3f80000000000000;
    puVar3[0x18] = 0;
    puVar3[0x19] = 0x3f80000000000000;
    puVar3[0x1a] = 0;
    puVar3[0x1b] = 0x3f80000000000000;
    puVar3[0x1c] = 0;
    puVar3[0x1d] = 0x3f80000000000000;
    puVar3[0x1e] = 0;
    puVar3[0x1f] = 0x3f80000000000000;
    puVar3 = puVar3 + 0x20;
  } while (puVar3 != puVar2 + (ulong)param_2 * 0x20);
  *param_1 = param_2;
  *(undefined8 **)(param_1 + 2) = puVar2;
  return 1;
}

