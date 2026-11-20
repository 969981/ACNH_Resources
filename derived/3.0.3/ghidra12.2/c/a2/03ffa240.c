
void FUN_03ffa240(long param_1,void *param_2,ulong param_3)

{
  void *__src;
  short *psVar1;
  uint uVar2;
  void *__dest;
  size_t __n;
  ulong uVar3;
  uint uVar4;
  int iVar5;
  void *__src_00;
  uint uVar6;
  ulong uVar7;
  
  uVar7 = (ulong)*(ushort *)(*(long *)(param_1 + 0x18) + 0x10042) & 0x7fff;
  __src_00 = *(void **)(*(long *)(param_1 + 0x18) + 0x10);
  uVar6 = (uint)uVar7;
  uVar3 = (ulong)(0x8000 - uVar6);
  __src = (void *)((long)__src_00 + uVar7 * 2);
  if (param_3 < uVar3) {
    __n = param_3 << 1;
    __dest = param_2;
    __src_00 = __src;
  }
  else {
    memcpy(param_2,__src,uVar3 * 2);
    __dest = (void *)((long)param_2 + uVar3 * 2);
    __n = (param_3 - uVar3) * 2;
  }
  memcpy(__dest,__src_00,__n);
  if ((*(byte *)(param_1 + 0x108a) & 1) != 0) {
    uVar3 = (ulong)(*(ushort *)(param_1 + 0x1084) - uVar6 & 0x7fff);
    if (uVar3 < param_3) {
      uVar4 = 0x7e;
      *(undefined4 *)(param_1 + 0x1080) = 0x7e;
      for (; uVar3 < param_3; uVar3 = uVar3 + 2) {
LAB_03ffa344:
        if ((int)uVar4 < 0) goto LAB_03ffa3b8;
        psVar1 = (short *)((long)param_2 + uVar3 * 2);
        iVar5 = (&DAT_041ed2b4)[uVar4] * (int)*psVar1;
        *psVar1 = (short)((ulong)((long)iVar5 * 0xe070381d) >> 0x27) -
                  ((short)(iVar5 / -0x6e000000) + (short)(iVar5 >> 0x1f));
        iVar5 = (&DAT_041ed2b4)[*(int *)(param_1 + 0x1080)] * (int)psVar1[1];
        psVar1[1] = (short)((ulong)((long)iVar5 * 0xe070381d) >> 0x27) -
                    ((short)(iVar5 / -0x6e000000) + (short)(iVar5 >> 0x1f));
        uVar4 = *(int *)(param_1 + 0x1080) - 1;
        *(uint *)(param_1 + 0x1080) = uVar4;
      }
    }
    else {
      uVar2 = (uVar6 | 0x8000) - (uint)*(ushort *)(param_1 + 0x1084);
      uVar4 = uVar2 & 0x7fff;
      uVar2 = -uVar2;
      if (-1 < (int)uVar2) {
        uVar4 = -(uVar2 & 0x7fff);
      }
      if ((uint)(*(int *)(param_1 + 0x28) * 0x7f) <= uVar4) goto LAB_03ffa3bc;
      uVar4 = *(uint *)(param_1 + 0x1080);
      uVar3 = 0;
      if (param_3 != 0) goto LAB_03ffa344;
    }
    if ((int)uVar4 < 1) {
LAB_03ffa3b8:
      *(byte *)(param_1 + 0x108a) = 0;
    }
  }
LAB_03ffa3bc:
  if ((*(byte *)(param_1 + 0x108b) & 1) != 0) {
    uVar3 = (ulong)(*(ushort *)(param_1 + 0x1086) - uVar6 & 0x7fff);
    if (uVar3 < param_3) {
      iVar5 = 0;
      *(undefined4 *)(param_1 + 0x1080) = 0;
      for (; uVar3 < param_3; uVar3 = uVar3 + 2) {
LAB_03ffa440:
        if (0x7e < iVar5) goto LAB_03ffa4b8;
        psVar1 = (short *)((long)param_2 + uVar3 * 2);
        iVar5 = (&DAT_041ed2b4)[iVar5] * (int)*psVar1;
        *psVar1 = (short)((ulong)((long)iVar5 * 0xe070381d) >> 0x27) -
                  ((short)(iVar5 / -0x6e000000) + (short)(iVar5 >> 0x1f));
        iVar5 = (&DAT_041ed2b4)[*(int *)(param_1 + 0x1080)] * (int)psVar1[1];
        psVar1[1] = (short)((ulong)((long)iVar5 * 0xe070381d) >> 0x27) -
                    ((short)(iVar5 / -0x6e000000) + (short)(iVar5 >> 0x1f));
        iVar5 = *(int *)(param_1 + 0x1080) + 1;
        *(int *)(param_1 + 0x1080) = iVar5;
      }
    }
    else {
      uVar2 = (uVar6 | 0x8000) - (uint)*(ushort *)(param_1 + 0x1086);
      uVar4 = uVar2 & 0x7fff;
      uVar2 = -uVar2;
      if (-1 < (int)uVar2) {
        uVar4 = -(uVar2 & 0x7fff);
      }
      if ((uint)(*(int *)(param_1 + 0x28) * 0x7f) <= uVar4) goto LAB_03ffa4c0;
      iVar5 = *(int *)(param_1 + 0x1080);
      uVar3 = 0;
      if (param_3 != 0) goto LAB_03ffa440;
    }
    if (0x7e < iVar5) {
LAB_03ffa4b8:
      *(undefined1 *)(param_1 + 0x108b) = 0;
    }
  }
LAB_03ffa4c0:
  if ((*(byte *)(param_1 + 0x108c) & 1) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x108d) == '\0') {
    uVar3 = (ulong)(*(ushort *)(param_1 + 0x1088) - uVar6 & 0x7fff);
    if (param_3 <= uVar3) {
      return;
    }
    *(undefined1 *)(param_1 + 0x108d) = 1;
  }
  else {
    uVar3 = 0;
  }
  memset((void *)((long)param_2 + uVar3 * 2),0,(param_3 - uVar3) * 2);
  return;
}

