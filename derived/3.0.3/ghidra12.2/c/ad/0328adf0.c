
void FUN_0328adf0(long param_1,long param_2,undefined4 param_3,ulong param_4,ulong param_5)

{
  byte *pbVar1;
  long *plVar2;
  long lVar3;
  undefined4 uVar4;
  uint uVar5;
  size_t sVar6;
  uint uVar7;
  long lVar8;
  uint uVar9;
  byte *pbVar10;
  byte *__s;
  undefined *local_a0;
  long *local_98;
  undefined *local_70;
  byte *pbStack_68;
  undefined *local_60;
  byte *pbStack_58;
  undefined *local_50;
  byte *pbStack_48;
  
  __s = *(byte **)(param_2 + 8);
  lVar3 = param_1 + 0x430;
  if ((param_4 & 1) == 0) {
    local_a0 = PTR_DAT_04bc8e60 + 0x10;
    local_98 = (long *)0x0;
    sVar6 = strlen((char *)__s);
    uVar5 = (uint)sVar6;
    if (uVar5 == 0) {
      uVar9 = 0;
      lVar8 = *(long *)(param_1 + 0x450);
    }
    else {
      uVar7 = uVar5 & 3;
      pbVar10 = __s;
      if (uVar5 < 4) {
        uVar9 = 0xffffffff;
      }
      else {
        uVar5 = uVar5 & 0xfffffffc;
        uVar9 = 0xffffffff;
        do {
          uVar5 = uVar5 - 4;
          uVar4 = crc32b(uVar9,(uint)*pbVar10,0x4c11db7);
          uVar4 = crc32b(uVar4,(uint)pbVar10[1],0x4c11db7);
          uVar4 = crc32b(uVar4,(uint)pbVar10[2],0x4c11db7);
          pbVar1 = pbVar10 + 3;
          pbVar10 = pbVar10 + 4;
          uVar9 = crc32b(uVar4,(uint)*pbVar1,0x4c11db7);
        } while (uVar5 != 0);
      }
      if ((sVar6 & 3) != 0) {
        do {
          uVar7 = uVar7 - 1;
          uVar9 = crc32b(uVar9,(uint)*pbVar10,0x4c11db7);
          pbVar10 = pbVar10 + 1;
        } while (uVar7 != 0);
      }
      uVar9 = ~uVar9;
      lVar8 = *(long *)(param_1 + 0x450);
    }
    for (; lVar8 != 0; lVar8 = *(long *)(lVar8 + 0x10)) {
      if (*(uint *)(lVar8 + 0x68) == uVar9) {
        do {
          plVar2 = (long *)(lVar8 + 0x28);
          lVar8 = *(long *)(lVar8 + 0x18);
        } while (lVar8 != 0 && *plVar2 == 0);
        if (*plVar2 == 0) {
          return;
        }
        local_50 = PTR_DAT_04bc8e68 + 0x10;
        pbStack_48 = __s;
        FUN_032c7d70(lVar3,&local_50,param_3,&local_a0,0,0);
        if (local_98 == (long *)0x0) {
          return;
        }
        (**(code **)(*local_98 + 8))();
        return;
      }
    }
  }
  else {
    sVar6 = strlen((char *)__s);
    uVar5 = (uint)sVar6;
    if (uVar5 == 0) {
      uVar9 = 0;
      lVar8 = *(long *)(param_1 + 0x450);
    }
    else {
      uVar7 = uVar5 & 3;
      pbVar10 = __s;
      if (uVar5 < 4) {
        uVar9 = 0xffffffff;
      }
      else {
        uVar5 = uVar5 & 0xfffffffc;
        uVar9 = 0xffffffff;
        do {
          uVar5 = uVar5 - 4;
          uVar4 = crc32b(uVar9,(uint)*pbVar10,0x4c11db7);
          uVar4 = crc32b(uVar4,(uint)pbVar10[1],0x4c11db7);
          uVar4 = crc32b(uVar4,(uint)pbVar10[2],0x4c11db7);
          pbVar1 = pbVar10 + 3;
          pbVar10 = pbVar10 + 4;
          uVar9 = crc32b(uVar4,(uint)*pbVar1,0x4c11db7);
        } while (uVar5 != 0);
      }
      if ((sVar6 & 3) != 0) {
        do {
          uVar7 = uVar7 - 1;
          uVar9 = crc32b(uVar9,(uint)*pbVar10,0x4c11db7);
          pbVar10 = pbVar10 + 1;
        } while (uVar7 != 0);
      }
      uVar9 = ~uVar9;
      lVar8 = *(long *)(param_1 + 0x450);
    }
    for (; lVar8 != 0; lVar8 = *(long *)(lVar8 + 0x10)) {
      if (*(uint *)(lVar8 + 0x68) == uVar9) {
        do {
          plVar2 = (long *)(lVar8 + 0x28);
          lVar8 = *(long *)(lVar8 + 0x18);
        } while (lVar8 != 0 && *plVar2 == 0);
        if (*plVar2 == 0) {
          return;
        }
        if ((param_5 & 1) == 0) {
          local_70 = &DAT_04b177a8;
          pbStack_68 = __s;
          FUN_032c87e0(lVar3,&local_70,param_3);
          return;
        }
        local_60 = &DAT_04b177a8;
        pbStack_58 = __s;
        FUN_032c8500(lVar3,&local_60,param_3);
        return;
      }
    }
  }
  return;
}

