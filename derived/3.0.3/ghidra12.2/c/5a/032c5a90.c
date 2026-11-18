
void FUN_032c5a90(long param_1,long param_2,long *param_3,long param_4,long *param_5)

{
  byte *pbVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  size_t sVar6;
  uint uVar7;
  byte *__s;
  uint uVar8;
  undefined8 uVar9;
  long lVar10;
  
  __s = (byte *)param_3[1];
  if (*__s != 0) {
    cVar3 = *(char *)param_5[1];
    uVar9 = *(undefined8 *)(DAT_05688e68 + 0x68);
    (**(code **)(*param_3 + 0x18))(param_3);
    lVar10 = param_3[1];
    if (cVar3 == '\0') {
      uVar9 = FUN_0036a120(param_2,uVar9,lVar10,1);
    }
    else {
      (**(code **)(*param_5 + 0x18))(param_5);
      uVar5 = FUN_00367720(*(undefined8 *)(param_2 + 0x20),param_5[1]);
      uVar9 = FUN_00369dfc(param_2,uVar9,lVar10,uVar5,1);
    }
    *(undefined8 *)(param_1 + 0x28) = uVar9;
    __s = (byte *)param_3[1];
  }
  if (**(byte **)(param_4 + 8) != 0) {
    __s = *(byte **)(param_4 + 8);
  }
  sVar6 = strlen((char *)__s);
  uVar4 = (uint)sVar6;
  if (uVar4 == 0) {
    uVar8 = 0;
  }
  else {
    uVar7 = uVar4 & 3;
    if (uVar4 < 4) {
      uVar8 = 0xffffffff;
    }
    else {
      uVar4 = uVar4 & 0xfffffffc;
      uVar8 = 0xffffffff;
      do {
        uVar4 = uVar4 - 4;
        uVar2 = crc32b(uVar8,(uint)*__s,0x4c11db7);
        uVar2 = crc32b(uVar2,(uint)__s[1],0x4c11db7);
        uVar2 = crc32b(uVar2,(uint)__s[2],0x4c11db7);
        pbVar1 = __s + 3;
        __s = __s + 4;
        uVar8 = crc32b(uVar2,(uint)*pbVar1,0x4c11db7);
      } while (uVar4 != 0);
    }
    if ((sVar6 & 3) != 0) {
      do {
        uVar7 = uVar7 - 1;
        uVar8 = crc32b(uVar8,(uint)*__s,0x4c11db7);
        __s = __s + 1;
      } while (uVar7 != 0);
    }
    uVar8 = ~uVar8;
  }
  *(uint *)(param_1 + 0x68) = uVar8;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  return;
}

