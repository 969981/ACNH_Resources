
undefined8 FUN_03a72a80(uint *param_1,uint param_2,long *param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  ulong *puVar6;
  ulong *puVar7;
  long lVar8;
  ulong __size;
  
  if ((int)param_2 < 1) {
    return 0;
  }
  __size = (ulong)param_2 * 0x560 | 8;
  lVar8 = *(long *)PTR_DAT_04bb2698;
  if (lVar8 == 0) {
    puVar6 = malloc(__size);
    if (puVar6 == (ulong *)0x0) {
      return 0;
    }
  }
  else {
    if (param_3 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      param_3 = (long *)(lVar8 + 8);
      if (lVar5 != 0) {
        param_3 = (long *)(lVar5 + 0xa8);
      }
      param_3 = (long *)*param_3;
      if (param_3 == (long *)0x0) {
        return 0;
      }
    }
    puVar6 = (ulong *)(**(code **)(*param_3 + 0x30))(param_3,__size,param_4);
    if (puVar6 == (ulong *)0x0) {
      return 0;
    }
  }
  puVar4 = PTR_DAT_04bd11b8;
  puVar3 = PTR_DAT_04bd1178;
  puVar7 = puVar6 + 1;
  *puVar6 = (ulong)param_2;
  puVar1 = PTR_DAT_04bd1198 + 0x10;
  puVar2 = PTR_DAT_04bd11a0 + 0x10;
  puVar6 = puVar7;
  do {
    puVar6[6] = 0;
    *puVar6 = (ulong)(puVar4 + 0x10);
    puVar6[1] = 0;
    *(undefined4 *)(puVar6 + 7) = 0x10001;
    *(undefined1 *)((long)puVar6 + 0x3c) = 0;
    puVar6[0xe] = 0;
    puVar6[2] = 0;
    puVar6[3] = 0;
    puVar6[4] = 0;
    puVar6[5] = 0;
    FUN_0390cee0(puVar6 + 0xf);
    FUN_0390cee0(puVar6 + 0x2b);
    FUN_0390cee0(puVar6 + 0x47);
    puVar6[0x68] = 0;
    puVar6[0x67] = (ulong)&DAT_3f8000003f800000;
    puVar6[0x69] = (ulong)&DAT_3f8000003f800000;
    puVar6[0x66] = (ulong)(puVar3 + 0x10);
    puVar6[0x6a] = 0;
    puVar6[0x6b] = 0;
    puVar6[0x6c] = 0;
    puVar6[0x6d] = 0;
    puVar6[0x6e] = 0;
    puVar6[0x6f] = 0;
    puVar6[0x70] = 0;
    puVar6[0x71] = 0;
    puVar6[0x72] = 0;
    puVar6[0x74] = 0;
    puVar6[0x75] = 0;
    puVar6[0x76] = 0;
    puVar6[0x77] = 0;
    puVar6[0x78] = 0;
    puVar6[0x79] = 0;
    puVar6[0x7a] = 0;
    puVar6[0x7b] = 0;
    puVar6[0x7c] = 0;
    puVar6[0x7d] = 0;
    *(undefined4 *)(puVar6 + 0x7e) = 0xffffffff;
    puVar6[0x7f] = 0;
    puVar6[0x80] = 0;
    puVar6[0x81] = 0;
    puVar6[0x82] = 0;
    puVar6[0x83] = 0;
    puVar6[0x84] = 0;
    puVar6[0x85] = 0;
    puVar6[0x86] = (ulong)"agl::TextureData";
    *(undefined4 *)(puVar6 + 0x87) = 0x10000;
    *(undefined4 *)(puVar6 + 0x8a) = 0xff;
    *(undefined4 *)((long)puVar6 + 0x454) = 0;
    puVar6[0x73] = (ulong)puVar1;
    puVar6[0x8b] = 0x80000000000;
    puVar6[0x8c] = 0;
    puVar6[0x8d] = 0;
    puVar6[0x8e] = 0;
    puVar6[0x99] = 0;
    puVar6[0x98] = 0;
    puVar6[0x97] = 0;
    puVar6[0x96] = 0;
    puVar6[0x95] = 0;
    puVar6[0x94] = 0;
    puVar6[0x93] = 0;
    puVar6[0x92] = 0;
    puVar6[0x91] = 0;
    puVar6[0x90] = 0;
    *(undefined4 *)(puVar6 + 0x9a) = 0xffffffff;
    puVar6[0xa1] = 0;
    puVar6[0xa0] = 0;
    puVar6[0x9f] = 0;
    puVar6[0x9e] = 0;
    puVar6[0x9d] = 0;
    puVar6[0x9c] = 0;
    puVar6[0x9b] = 0;
    puVar6[0xa2] = (ulong)"agl::TextureData";
    *(undefined4 *)(puVar6 + 0xa3) = 0x10000;
    *(undefined4 *)(puVar6 + 0xa6) = 0xff;
    *(undefined4 *)((long)puVar6 + 0x534) = 0;
    puVar6[0x8f] = (ulong)puVar2;
    puVar6[0xa7] = 0x80000000000;
    puVar6[0xaa] = 0;
    puVar6[0xa9] = 0;
    puVar6[0xa8] = 0;
    (**(code **)PTR_DAT_04bcf220)(puVar6 + 0xa4);
    puVar6 = puVar6 + 0xac;
  } while (puVar6 != puVar7 + (ulong)param_2 * 0xac);
  *param_1 = param_2;
  *(ulong **)(param_1 + 2) = puVar7;
  return 1;
}

