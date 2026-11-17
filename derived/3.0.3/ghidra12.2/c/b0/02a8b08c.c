
bool FUN_02a8b08c(long param_1)

{
  uint *puVar1;
  int *piVar2;
  char cVar3;
  char *pcVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  
  lVar5 = *(long *)PTR_DAT_04bbc218;
  uVar7 = *(uint *)(param_1 + 0x1b4);
  puVar1 = (uint *)(lVar5 + 0x20) + (ulong)*(uint *)(param_1 + 0x1b0) * 4;
  if (0x1d < *(uint *)(param_1 + 0x1b0)) {
    puVar1 = (uint *)(lVar5 + 0x20);
  }
  if (*puVar1 <= uVar7) {
    uVar7 = 0;
  }
  lVar6 = *(long *)(puVar1 + 2) + (long)(int)uVar7 * 0x30;
  uVar7 = *(uint *)(lVar6 + 8);
  if (*(uint *)(lVar5 + 0x10) <= uVar7) {
    uVar7 = 0;
  }
  pcVar4 = (char *)(**(code **)(**(long **)(*(long *)(*(long *)(*(long *)(lVar5 + 0x18) +
                                                                (long)(int)uVar7 * 0x18 + 0x10) +
                                                      (long)*(int *)(lVar6 + 0xc) * 0x10 + 8) +
                                            (long)*(int *)(lVar6 + 0x10) * 0x518 + 0x78) + 0x28))();
  cVar3 = *pcVar4;
  if ((cVar3 == '\x05' || cVar3 == '\x03') &&
     (*(ushort *)(param_1 + 0x280) = *(ushort *)(param_1 + 0x280) & 0xfff7 | 0x100,
     *(char *)(DAT_05351250 + 0x198) != '\0')) {
    uVar7 = 9;
    if (cVar3 != '\x03') {
      uVar7 = 0xb;
    }
    piVar2 = (int *)(DAT_05351250 + 0x14c) + uVar7;
    if (0xd < uVar7) {
      piVar2 = (int *)(DAT_05351250 + 0x14c);
    }
    *piVar2 = *piVar2 + 1;
  }
  return cVar3 == '\x03' || cVar3 == '\x05';
}

