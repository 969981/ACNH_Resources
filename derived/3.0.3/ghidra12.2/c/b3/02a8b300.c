
bool FUN_02a8b300(long param_1)

{
  byte bVar1;
  uint *puVar2;
  int *piVar3;
  byte bVar4;
  byte *pbVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  
  lVar6 = *(long *)PTR_DAT_04bbc218;
  uVar7 = *(uint *)(param_1 + 0x1b4);
  puVar2 = (uint *)(lVar6 + 0x20) + (ulong)*(uint *)(param_1 + 0x1b0) * 4;
  if (0x1d < *(uint *)(param_1 + 0x1b0)) {
    puVar2 = (uint *)(lVar6 + 0x20);
  }
  if (*puVar2 <= uVar7) {
    uVar7 = 0;
  }
  lVar8 = *(long *)(puVar2 + 2) + (long)(int)uVar7 * 0x30;
  uVar7 = *(uint *)(lVar8 + 8);
  if (*(uint *)(lVar6 + 0x10) <= uVar7) {
    uVar7 = 0;
  }
  pbVar5 = (byte *)(**(code **)(**(long **)(*(long *)(*(long *)(*(long *)(lVar6 + 0x18) +
                                                                (long)(int)uVar7 * 0x18 + 0x10) +
                                                      (long)*(int *)(lVar8 + 0xc) * 0x10 + 8) +
                                            (long)*(int *)(lVar8 + 0x10) * 0x518 + 0x78) + 0x28))();
  bVar4 = *pbVar5;
  bVar1 = bVar4 & 0xfd;
  if (bVar1 == 4) {
    *(ushort *)(param_1 + 0x280) = *(ushort *)(param_1 + 0x280) & 0xfff7 | 0x100;
    if (*(char *)(DAT_05351250 + 0x198) != '\0') {
      uVar7 = 10;
      if (bVar4 != 4) {
        uVar7 = 0xc;
      }
      piVar3 = (int *)(DAT_05351250 + 0x14c) + uVar7;
      if (0xd < uVar7) {
        piVar3 = (int *)(DAT_05351250 + 0x14c);
      }
      *piVar3 = *piVar3 + 1;
    }
  }
  return bVar1 == 4;
}

