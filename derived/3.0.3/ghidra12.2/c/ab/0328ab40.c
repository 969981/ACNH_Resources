
bool FUN_0328ab40(long param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  size_t sVar3;
  uint uVar4;
  byte *pbVar5;
  long lVar6;
  uint uVar7;
  byte *__s;
  long lVar8;
  
  if (*(long *)(param_1 + 0x430) == 0) {
    return false;
  }
  if (param_2 < 0xd) {
    pbVar5 = (&PTR_s_FocusKey_04b17960)[param_2];
  }
  else {
    pbVar5 = (byte *)&DAT_0407ebb1;
  }
  if (param_2 < 0xd) {
    uVar2 = *(uint *)(&DAT_04184664 + (long)(int)param_2 * 4);
  }
  else {
    uVar2 = 3;
  }
  if (*(uint *)(param_1 + 0x460) <= uVar2) {
    uVar2 = 0;
  }
  lVar8 = *(long *)(*(long *)(param_1 + 0x468) + (long)(int)uVar2 * 8);
  if (lVar8 != 0) {
    __s = PTR_DAT_04bb2120;
    if (pbVar5 != (byte *)0x0) {
      __s = pbVar5;
    }
    sVar3 = strlen((char *)__s);
    uVar2 = (uint)sVar3;
    if (uVar2 == 0) {
      uVar7 = 0;
      lVar6 = *(long *)(param_1 + 0x450);
    }
    else {
      uVar4 = uVar2 & 3;
      if (uVar2 < 4) {
        uVar7 = 0xffffffff;
      }
      else {
        uVar2 = uVar2 & 0xfffffffc;
        uVar7 = 0xffffffff;
        do {
          uVar2 = uVar2 - 4;
          uVar1 = crc32b(uVar7,(uint)*__s,0x4c11db7);
          uVar1 = crc32b(uVar1,(uint)__s[1],0x4c11db7);
          uVar1 = crc32b(uVar1,(uint)__s[2],0x4c11db7);
          pbVar5 = __s + 3;
          __s = __s + 4;
          uVar7 = crc32b(uVar1,(uint)*pbVar5,0x4c11db7);
        } while (uVar2 != 0);
      }
      if ((sVar3 & 3) != 0) {
        do {
          uVar4 = uVar4 - 1;
          uVar7 = crc32b(uVar7,(uint)*__s,0x4c11db7);
          __s = __s + 1;
        } while (uVar4 != 0);
      }
      uVar7 = ~uVar7;
      lVar6 = *(long *)(param_1 + 0x450);
    }
    for (; (lVar6 != 0 && (*(uint *)(lVar6 + 0x68) != uVar7)); lVar6 = *(long *)(lVar6 + 0x10)) {
    }
    if (lVar8 == lVar6) {
      do {
        lVar6 = lVar8;
        lVar8 = *(long *)(lVar6 + 0x18);
      } while (*(long *)(lVar6 + 0x18) != 0 && *(long *)(lVar6 + 0x28) == 0);
      return *(int *)(lVar6 + 0x6c) == 2;
    }
  }
  return false;
}

