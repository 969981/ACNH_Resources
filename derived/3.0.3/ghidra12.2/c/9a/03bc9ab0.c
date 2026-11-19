
undefined8 FUN_03bc9ab0(uint *param_1,uint param_2,long *param_3,undefined4 param_4)

{
  long lVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  size_t __size;
  
  lVar1 = DAT_05ae7600;
  if ((int)param_2 < 1) {
    return 0;
  }
  __size = ((ulong)param_2 + (ulong)param_2 * 2) * 0x100;
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
    puVar3 = (undefined4 *)(**(code **)(*param_3 + 0x30))(param_3,__size,param_4);
  }
  if (puVar3 == (undefined4 *)0x0) {
    return 0;
  }
  puVar4 = puVar3;
  do {
    *puVar4 = 0;
    *(undefined8 *)(puVar4 + 2) = 0;
    puVar4[4] = 0;
    *(undefined8 *)(puVar4 + 6) = 0;
    puVar4[8] = 0;
    *(undefined8 *)(puVar4 + 10) = 0;
    puVar4[0xc] = 0;
    *(undefined8 *)(puVar4 + 0xe) = 0;
    puVar4[0x10] = 0;
    *(undefined8 *)(puVar4 + 0x12) = 0;
    puVar4[0x14] = 0;
    *(undefined8 *)(puVar4 + 0x16) = 0;
    puVar4[0x18] = 0;
    *(undefined8 *)(puVar4 + 0x1a) = 0;
    puVar4[0x1c] = 0;
    *(undefined8 *)(puVar4 + 0x1e) = 0;
    puVar4[0x20] = 0;
    *(undefined8 *)(puVar4 + 0x22) = 0;
    puVar4[0x24] = 0;
    *(undefined8 *)(puVar4 + 0x26) = 0;
    puVar4[0x28] = 0;
    *(undefined8 *)(puVar4 + 0x2a) = 0;
    puVar4[0x2c] = 0;
    *(undefined8 *)(puVar4 + 0x2e) = 0;
    puVar4[0x30] = 0;
    *(undefined8 *)(puVar4 + 0x32) = 0;
    puVar4[0x34] = 0;
    *(undefined8 *)(puVar4 + 0x36) = 0;
    puVar4[0x38] = 0;
    *(undefined8 *)(puVar4 + 0x3a) = 0;
    puVar4[0x3c] = 0;
    *(undefined8 *)(puVar4 + 0x3e) = 0;
    puVar4[0x40] = 0;
    *(undefined8 *)(puVar4 + 0x42) = 0;
    puVar4[0x44] = 0;
    *(undefined8 *)(puVar4 + 0x46) = 0;
    puVar4[0x48] = 0;
    *(undefined8 *)(puVar4 + 0x4a) = 0;
    puVar4[0x4c] = 0;
    *(undefined8 *)(puVar4 + 0x4e) = 0;
    puVar4[0x50] = 0;
    *(undefined8 *)(puVar4 + 0x52) = 0;
    puVar4[0x54] = 0;
    *(undefined8 *)(puVar4 + 0x56) = 0;
    puVar4[0x58] = 0;
    *(undefined8 *)(puVar4 + 0x5a) = 0;
    puVar4[0x5c] = 0;
    *(undefined8 *)(puVar4 + 0x5e) = 0;
    puVar4[0x60] = 0;
    *(undefined8 *)(puVar4 + 0x62) = 0;
    puVar4[100] = 0;
    *(undefined8 *)(puVar4 + 0x66) = 0;
    puVar4[0x68] = 0;
    *(undefined8 *)(puVar4 + 0x6a) = 0;
    puVar4[0x6c] = 0;
    *(undefined8 *)(puVar4 + 0x6e) = 0;
    puVar4[0x70] = 0;
    *(undefined8 *)(puVar4 + 0x72) = 0;
    puVar4[0x74] = 0;
    *(undefined8 *)(puVar4 + 0x76) = 0;
    puVar4[0x78] = 0;
    *(undefined8 *)(puVar4 + 0x7a) = 0;
    puVar4[0x7c] = 0;
    *(undefined8 *)(puVar4 + 0x7e) = 0;
    puVar4[0x80] = 0;
    *(undefined8 *)(puVar4 + 0x82) = 0;
    puVar4[0x84] = 0;
    *(undefined8 *)(puVar4 + 0x86) = 0;
    puVar4[0x88] = 0;
    *(undefined8 *)(puVar4 + 0x8a) = 0;
    puVar4[0x8c] = 0;
    *(undefined8 *)(puVar4 + 0x8e) = 0;
    puVar4[0x90] = 0;
    *(undefined8 *)(puVar4 + 0x92) = 0;
    puVar4[0x94] = 0;
    *(undefined8 *)(puVar4 + 0x96) = 0;
    puVar4[0x98] = 0;
    *(undefined8 *)(puVar4 + 0x9a) = 0;
    puVar4[0x9c] = 0;
    *(undefined8 *)(puVar4 + 0x9e) = 0;
    puVar4[0xa0] = 0;
    *(undefined8 *)(puVar4 + 0xa2) = 0;
    puVar4[0xa4] = 0;
    *(undefined8 *)(puVar4 + 0xa6) = 0;
    puVar4[0xa8] = 0;
    *(undefined8 *)(puVar4 + 0xaa) = 0;
    puVar4[0xac] = 0;
    *(undefined8 *)(puVar4 + 0xae) = 0;
    puVar4[0xb0] = 0;
    *(undefined8 *)(puVar4 + 0xb2) = 0;
    puVar4[0xb4] = 0;
    *(undefined8 *)(puVar4 + 0xb6) = 0;
    puVar4[0xb8] = 0;
    *(undefined8 *)(puVar4 + 0xba) = 0;
    puVar4[0xbc] = 0;
    *(undefined8 *)(puVar4 + 0xbe) = 0;
    puVar4 = puVar4 + 0xc0;
  } while (puVar4 != puVar3 + (ulong)param_2 * 0xc0);
  *param_1 = param_2;
  *(undefined4 **)(param_1 + 2) = puVar3;
  return 1;
}

