
void FUN_03befc90(long param_1,byte *param_2,undefined4 param_3)

{
  long *plVar1;
  char *__s1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  long lVar8;
  uint *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  
  uVar2 = *(ushort *)(*(long *)(param_1 + 0x18) + 4);
  if (-1 < (short)uVar2) {
    sVar3 = *(short *)(*(long *)(param_1 + 0x18) + 6);
    lVar8 = *(long *)(*(long *)(*(long *)(param_1 + 8) + 0x30) + 0x18);
    plVar1 = (long *)(lVar8 + 0x18) + *(uint *)(lVar8 + 0x10);
    if (1 < *(uint *)(lVar8 + 0x10)) {
      plVar1 = (long *)(lVar8 + 0x18);
    }
    if ((int)(uint)uVar2 <= (int)sVar3) {
      lVar12 = (ulong)((int)sVar3 + 1) - (ulong)uVar2;
      uVar10 = *(ulong *)PTR_DAT_04bb38c0;
      puVar9 = (uint *)(*(long *)(*plVar1 + 0x40) + (ulong)uVar2 * 0xc);
      uVar11 = *(ulong *)PTR_DAT_04bb38c8;
      do {
        pcVar7 = (char *)(uVar11 | *puVar9);
        __s1 = pcVar7 + 0x100000000;
        if (uVar10 <= *puVar9) {
          __s1 = pcVar7;
        }
        iVar4 = strcmp(__s1,(char *)param_2);
        if (iVar4 == 0) {
          if (puVar9 != *(uint **)(param_1 + 0x30)) {
            FUN_03bf0020(param_1,puVar9,param_3,lVar8);
          }
          goto LAB_03befd64;
        }
        lVar12 = lVar12 + -1;
        puVar9 = puVar9 + 3;
      } while (lVar12 != 0);
    }
  }
  FUN_03befdd0(param_1);
LAB_03befd64:
  uVar5 = (uint)*param_2;
  if (*param_2 != 0) {
    uVar6 = 0xffffffff;
    do {
      param_2 = param_2 + 1;
      uVar6 = crc32b(uVar6,uVar5,0x4c11db7);
      uVar5 = (uint)*param_2;
    } while (uVar5 != 0);
    uVar5 = ~uVar6;
  }
  *(uint *)(param_1 + 0x20) = uVar5;
  return;
}

