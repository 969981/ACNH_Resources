
bool FUN_03289ec0(long param_1)

{
  byte *pbVar1;
  long *plVar2;
  undefined4 uVar3;
  uint uVar4;
  size_t sVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  char *pcVar9;
  long lVar10;
  uint uVar11;
  
  sVar5 = strlen(s_Invalid_04b17916);
  uVar4 = (uint)sVar5;
  if (uVar4 == 0) {
    uVar8 = 0;
    lVar7 = *(long *)(param_1 + 0x450);
  }
  else {
    uVar6 = uVar4 & 3;
    if (uVar4 < 4) {
      uVar8 = 0xffffffff;
      pcVar9 = s_Invalid_04b17916;
    }
    else {
      uVar11 = uVar4 & 0xfffffffc;
      uVar8 = 0xffffffff;
      pcVar9 = s_Invalid_04b17916;
      do {
        uVar11 = uVar11 - 4;
        uVar3 = crc32b(uVar8,(uint)(byte)*pcVar9,0x4c11db7);
        uVar3 = crc32b(uVar3,(uint)(byte)pcVar9[1],0x4c11db7);
        uVar3 = crc32b(uVar3,(uint)(byte)pcVar9[2],0x4c11db7);
        pbVar1 = (byte *)(pcVar9 + 3);
        pcVar9 = pcVar9 + 4;
        uVar8 = crc32b(uVar3,(uint)*pbVar1,0x4c11db7);
      } while (uVar11 != 0);
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
  if (lVar7 == 0) {
    return true;
  }
  lVar10 = lVar7;
  while (*(uint *)(lVar10 + 0x68) != uVar8) {
    lVar10 = *(long *)(lVar10 + 0x10);
    if (lVar10 == 0) {
      return true;
    }
  }
  do {
    plVar2 = (long *)(lVar10 + 0x28);
    lVar10 = *(long *)(lVar10 + 0x18);
  } while (lVar10 != 0 && *plVar2 == 0);
  if (*plVar2 == 0) {
    return true;
  }
  lVar10 = 0x18;
  if (*(uint *)(param_1 + 0x460) < 4) {
    lVar10 = 0;
  }
  lVar10 = *(long *)(*(long *)(param_1 + 0x468) + lVar10);
  if (lVar10 != 0) {
    if (uVar4 == 0) {
      uVar8 = 0;
    }
    else {
      uVar6 = uVar4 & 3;
      if (uVar4 < 4) {
        uVar8 = 0xffffffff;
        pcVar9 = s_Invalid_04b17916;
      }
      else {
        uVar4 = uVar4 & 0xfffffffc;
        uVar8 = 0xffffffff;
        pcVar9 = s_Invalid_04b17916;
        do {
          uVar4 = uVar4 - 4;
          uVar3 = crc32b(uVar8,(uint)(byte)*pcVar9,0x4c11db7);
          uVar3 = crc32b(uVar3,(uint)(byte)pcVar9[1],0x4c11db7);
          uVar3 = crc32b(uVar3,(uint)(byte)pcVar9[2],0x4c11db7);
          pbVar1 = (byte *)(pcVar9 + 3);
          pcVar9 = pcVar9 + 4;
          uVar8 = crc32b(uVar3,(uint)*pbVar1,0x4c11db7);
        } while (uVar4 != 0);
      }
      if ((sVar5 & 3) != 0) {
        do {
          uVar6 = uVar6 - 1;
          uVar8 = crc32b(uVar8,(uint)(byte)*pcVar9,0x4c11db7);
          pcVar9 = pcVar9 + 1;
        } while (uVar6 != 0);
      }
      uVar8 = ~uVar8;
    }
    do {
      if (*(uint *)(lVar7 + 0x68) == uVar8) break;
      lVar7 = *(long *)(lVar7 + 0x10);
    } while (lVar7 != 0);
    if (lVar10 == lVar7) {
      do {
        plVar2 = (long *)(lVar10 + 0x28);
        lVar10 = *(long *)(lVar10 + 0x18);
      } while (lVar10 != 0 && *plVar2 == 0);
      return *(float *)(*plVar2 + 0x20) == 0.0;
    }
  }
  return false;
}

