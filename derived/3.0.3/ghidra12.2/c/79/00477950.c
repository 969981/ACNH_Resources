
void FUN_00477950(long param_1,long *param_2)

{
  uint *puVar1;
  long *plVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  uint local_44;
  
  iVar4 = FUN_00477b40(param_2);
  if (iVar4 != 0) {
    uVar5 = *(uint *)(param_1 + 0xa0);
    if (uVar5 == (*(uint *)(param_1 + 0xa4) & 0x3fffffff)) {
      FUN_00426990(PTR_DAT_048607b8,param_1 + 0x98,8);
      uVar5 = *(uint *)(param_1 + 0xa0);
    }
    *(long **)(*(long *)(param_1 + 0x98) + (long)(int)uVar5 * 8) = param_2;
    *(uint *)(param_1 + 0xa0) = uVar5 + 1;
    lVar6 = *param_2;
    if (lVar6 == param_2[1]) {
      local_44 = 0;
    }
    else {
      local_44 = FUN_00446840(lVar6,param_2[1] - lVar6);
    }
    uVar5 = (int)param_2[4] * -0x61c8864f;
    uVar5 = (uVar5 & 0xff00ff00) >> 8 | (uVar5 & 0xff00ff) << 8;
    uVar5 = uVar5 >> 0x10 | uVar5 << 0x10;
    local_44 = uVar5 + local_44 * 0x40 + (uVar5 >> 2) + 0x9e3779b9 ^ local_44;
    lVar6 = param_2[2];
    plVar2 = (long *)(param_1 + 0x168);
    if (lVar6 == param_2[3]) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_00446840(lVar6,param_2[3] - lVar6);
    }
    uVar3 = *(int *)((long)param_2 + 0x24) * -0x61c8864f;
    uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
    uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
    uVar5 = uVar5 * 0x40 + -0x61c88647 + uVar3 + (uVar3 >> 2) ^ uVar5;
    local_44 = local_44 * 0x40 + -0x61c88647 + uVar5 + (uVar5 >> 2) ^ local_44;
    uVar5 = FUN_0047c6d0(plVar2,&local_44);
    if (*(uint *)(param_1 + 0x170) == uVar5) {
      if ((*(uint *)(param_1 + 0x174) & 0x3fffffff) == uVar5) {
        FUN_00426990(PTR_DAT_048607b8,plVar2,0x10);
        uVar5 = *(uint *)(param_1 + 0x170);
      }
      puVar1 = (uint *)(*(long *)(param_1 + 0x168) + (long)(int)uVar5 * 0x10);
      *puVar1 = local_44;
      *(long **)(puVar1 + 2) = param_2;
      *(uint *)(param_1 + 0x170) = uVar5 + 1;
      iVar4 = *(int *)(param_1 + 0xb0);
    }
    else {
      *(long **)(*plVar2 + ((long)((ulong)uVar5 << 0x20) >> 0x1c) + 8) = param_2;
      iVar4 = *(int *)(param_1 + 0xb0);
    }
    if (iVar4 != 0) {
      *(undefined4 *)(param_1 + 0xb0) = 0;
      FUN_0043d590(param_1 + 0xb8);
    }
    iVar4 = *(int *)(param_1 + 0xf0);
    if (iVar4 != 0) {
      if (0 < iVar4) {
        lVar6 = *(long *)(param_1 + 0xe8) + (long)iVar4 * 0x10;
        do {
          lVar6 = lVar6 + -0x10;
          FUN_0043be10(lVar6);
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      *(undefined4 *)(param_1 + 0xf0) = 0;
      FUN_0043d590(param_1 + 0xf8);
    }
  }
  return;
}

