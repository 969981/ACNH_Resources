
bool FUN_0328a900(long param_1)

{
  byte *pbVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  size_t sVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  char *pcVar9;
  long lVar10;
  long lVar11;
  
  if (*(long *)(param_1 + 0x430) == 0) {
    return false;
  }
  uVar4 = *(uint *)(param_1 + 0x460);
  lVar10 = *(long *)(param_1 + 0x468);
  lVar11 = *(long *)(lVar10 + (ulong)(2 < uVar4) * 0x10);
  if (lVar11 != 0) {
    sVar5 = strlen(s_DecideTouch_04b17908);
    uVar3 = (uint)sVar5;
    if (uVar3 == 0) {
      uVar8 = 0;
      lVar7 = *(long *)(param_1 + 0x450);
    }
    else {
      uVar6 = uVar3 & 3;
      if (uVar3 < 4) {
        uVar8 = 0xffffffff;
        pcVar9 = s_DecideTouch_04b17908;
      }
      else {
        uVar3 = uVar3 & 0xfffffffc;
        uVar8 = 0xffffffff;
        pcVar9 = s_DecideTouch_04b17908;
        do {
          uVar3 = uVar3 - 4;
          uVar2 = crc32b(uVar8,(uint)(byte)*pcVar9,0x4c11db7);
          uVar2 = crc32b(uVar2,(uint)(byte)pcVar9[1],0x4c11db7);
          uVar2 = crc32b(uVar2,(uint)(byte)pcVar9[2],0x4c11db7);
          pbVar1 = (byte *)(pcVar9 + 3);
          pcVar9 = pcVar9 + 4;
          uVar8 = crc32b(uVar2,(uint)*pbVar1,0x4c11db7);
        } while (uVar3 != 0);
      }
      if ((sVar5 & 3) != 0) {
        do {
          uVar6 = uVar6 - 1;
          uVar8 = crc32b(uVar8,(uint)(byte)*pcVar9,0x4c11db7);
          pcVar9 = pcVar9 + 1;
        } while (uVar6 != 0);
      }
      uVar8 = ~uVar8;
      lVar7 = *(long *)(param_1 + 0x450);
    }
    for (; (lVar7 != 0 && (*(uint *)(lVar7 + 0x68) != uVar8)); lVar7 = *(long *)(lVar7 + 0x10)) {
    }
    if (lVar11 == lVar7) {
      do {
        lVar7 = lVar11;
        lVar11 = *(long *)(lVar7 + 0x18);
      } while (*(long *)(lVar7 + 0x18) != 0 && *(long *)(lVar7 + 0x28) == 0);
      if (*(int *)(lVar7 + 0x6c) == 2) {
        return true;
      }
    }
  }
  lVar11 = *(long *)(lVar10 + (ulong)(1 < uVar4) * 8);
  if (lVar11 != 0) {
    sVar5 = strlen(s_DecideKey_04b178fc);
    uVar4 = (uint)sVar5;
    if (uVar4 == 0) {
      uVar3 = 0;
      lVar10 = *(long *)(param_1 + 0x450);
    }
    else {
      uVar8 = uVar4 & 3;
      if (uVar4 < 4) {
        uVar3 = 0xffffffff;
        pcVar9 = s_DecideKey_04b178fc;
      }
      else {
        uVar4 = uVar4 & 0xfffffffc;
        uVar3 = 0xffffffff;
        pcVar9 = s_DecideKey_04b178fc;
        do {
          uVar4 = uVar4 - 4;
          uVar2 = crc32b(uVar3,(uint)(byte)*pcVar9,0x4c11db7);
          uVar2 = crc32b(uVar2,(uint)(byte)pcVar9[1],0x4c11db7);
          uVar2 = crc32b(uVar2,(uint)(byte)pcVar9[2],0x4c11db7);
          pbVar1 = (byte *)(pcVar9 + 3);
          pcVar9 = pcVar9 + 4;
          uVar3 = crc32b(uVar2,(uint)*pbVar1,0x4c11db7);
        } while (uVar4 != 0);
      }
      if ((sVar5 & 3) != 0) {
        do {
          uVar8 = uVar8 - 1;
          uVar3 = crc32b(uVar3,(uint)(byte)*pcVar9,0x4c11db7);
          pcVar9 = pcVar9 + 1;
        } while (uVar8 != 0);
      }
      uVar3 = ~uVar3;
      lVar10 = *(long *)(param_1 + 0x450);
    }
    for (; (lVar10 != 0 && (*(uint *)(lVar10 + 0x68) != uVar3)); lVar10 = *(long *)(lVar10 + 0x10))
    {
    }
    if (lVar11 == lVar10) {
      do {
        lVar10 = lVar11;
        lVar11 = *(long *)(lVar10 + 0x18);
      } while (*(long *)(lVar10 + 0x18) != 0 && *(long *)(lVar10 + 0x28) == 0);
      return *(int *)(lVar10 + 0x6c) == 2;
    }
  }
  return false;
}

