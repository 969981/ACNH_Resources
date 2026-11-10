
uint FUN_00285e20(byte *param_1,uint param_2)

{
  byte *pbVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  
  puVar3 = PTR_DAT_04bcdc60;
  puVar2 = PTR_DAT_04bcdc58;
  if (*PTR_DAT_04bcdc60 == '\0') {
    uVar5 = 0;
    do {
      uVar6 = (uint)(uVar5 >> 1) & 0x7fffffff;
      if ((uVar5 & 1) != 0) {
        uVar6 = uVar6 ^ 0xedb88320;
      }
      uVar4 = uVar6 >> 1;
      if ((uVar6 & 1) != 0) {
        uVar4 = uVar6 >> 1 ^ 0xedb88320;
      }
      uVar6 = uVar4 >> 1;
      if ((uVar4 & 1) != 0) {
        uVar6 = uVar4 >> 1 ^ 0xedb88320;
      }
      uVar4 = uVar6 >> 1;
      if ((uVar6 & 1) != 0) {
        uVar4 = uVar6 >> 1 ^ 0xedb88320;
      }
      uVar6 = uVar4 >> 1;
      if ((uVar4 & 1) != 0) {
        uVar6 = uVar4 >> 1 ^ 0xedb88320;
      }
      uVar4 = uVar6 >> 1;
      if ((uVar6 & 1) != 0) {
        uVar4 = uVar6 >> 1 ^ 0xedb88320;
      }
      uVar6 = uVar4 >> 1;
      if ((uVar4 & 1) != 0) {
        uVar6 = uVar4 >> 1 ^ 0xedb88320;
      }
      uVar4 = uVar6 >> 1;
      if ((uVar6 & 1) != 0) {
        uVar4 = uVar6 >> 1 ^ 0xedb88320;
      }
      *(uint *)(puVar2 + uVar5 * 4) = uVar4;
      uVar5 = uVar5 + 1;
    } while (uVar5 != 0x100);
    *puVar3 = 1;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 == 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar6 = param_2 & 0xfffffffe;
    uVar4 = 0xffffffff;
    do {
      uVar6 = uVar6 - 2;
      uVar4 = *(uint *)(puVar2 + ((ulong)(*param_1 ^ uVar4) & 0xff) * 4) ^ uVar4 >> 8;
      pbVar1 = param_1 + 1;
      param_1 = param_1 + 2;
      uVar4 = *(uint *)(puVar2 + ((ulong)(*pbVar1 ^ uVar4) & 0xff) * 4) ^ uVar4 >> 8;
    } while (uVar6 != 0);
  }
  if ((param_2 & 1) != 0) {
    uVar4 = *(uint *)(puVar2 + ((ulong)(*param_1 ^ uVar4) & 0xff) * 4) ^ uVar4 >> 8;
  }
  return ~uVar4;
}

