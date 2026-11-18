
void FUN_032c7a60(long param_1,long param_2,uint param_3)

{
  byte *pbVar1;
  undefined4 uVar2;
  uint uVar3;
  long *plVar4;
  size_t sVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  byte *__s;
  
  lVar7 = *(long *)(param_1 + 0x48);
  uVar3 = param_3;
  if (*(uint *)(param_1 + 0x40) <= param_3) {
    uVar3 = 0;
  }
  lVar9 = (long)(int)uVar3;
  if ((*(byte *)(lVar7 + lVar9) & 1) == 0) {
    *(byte *)(lVar7 + lVar9) = *(byte *)(lVar7 + lVar9) & 0xfd;
    uVar3 = param_3;
    if (*(uint *)(param_1 + 0x30) <= param_3) {
      uVar3 = 0;
    }
    lVar7 = *(long *)(*(long *)(param_1 + 0x38) + (long)(int)uVar3 * 8);
    if (lVar7 != 0) {
      do {
        lVar9 = lVar7;
        plVar4 = *(long **)(lVar9 + 0x28);
        lVar7 = *(long *)(lVar9 + 0x18);
      } while (*(long *)(lVar9 + 0x18) != 0 && plVar4 == (long *)0x0);
      *(undefined4 *)(lVar9 + 0x6c) = 0;
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x20))(plVar4,0);
      }
    }
    __s = *(byte **)(param_2 + 8);
    sVar5 = strlen((char *)__s);
    uVar3 = (uint)sVar5;
    if (uVar3 == 0) {
      uVar8 = 0;
      lVar7 = *(long *)(param_1 + 0x20);
    }
    else {
      uVar6 = uVar3 & 3;
      if (uVar3 < 4) {
        uVar8 = 0xffffffff;
      }
      else {
        uVar3 = uVar3 & 0xfffffffc;
        uVar8 = 0xffffffff;
        do {
          uVar3 = uVar3 - 4;
          uVar2 = crc32b(uVar8,(uint)*__s,0x4c11db7);
          uVar2 = crc32b(uVar2,(uint)__s[1],0x4c11db7);
          uVar2 = crc32b(uVar2,(uint)__s[2],0x4c11db7);
          pbVar1 = __s + 3;
          __s = __s + 4;
          uVar8 = crc32b(uVar2,(uint)*pbVar1,0x4c11db7);
        } while (uVar3 != 0);
      }
      if ((sVar5 & 3) != 0) {
        do {
          uVar6 = uVar6 - 1;
          uVar8 = crc32b(uVar8,(uint)*__s,0x4c11db7);
          __s = __s + 1;
        } while (uVar6 != 0);
      }
      uVar8 = ~uVar8;
      lVar7 = *(long *)(param_1 + 0x20);
    }
    for (; (lVar7 != 0 && (*(uint *)(lVar7 + 0x68) != uVar8)); lVar7 = *(long *)(lVar7 + 0x10)) {
    }
    uVar3 = param_3;
    if (*(uint *)(param_1 + 0x30) <= param_3) {
      uVar3 = 0;
    }
    *(long *)(*(long *)(param_1 + 0x38) + (long)(int)uVar3 * 8) = lVar7;
    if (*(uint *)(param_1 + 0x30) <= param_3) {
      param_3 = 0;
    }
    lVar7 = *(long *)(*(long *)(param_1 + 0x38) + (long)(int)param_3 * 8);
    do {
      lVar9 = lVar7;
      plVar4 = *(long **)(lVar9 + 0x28);
      lVar7 = *(long *)(lVar9 + 0x18);
    } while (*(long *)(lVar9 + 0x18) != 0 && plVar4 == (long *)0x0);
    *(undefined4 *)(lVar9 + 0x6c) = 0;
    if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x032c7c28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar4 + 0x20))(plVar4,1);
      return;
    }
  }
  return;
}

