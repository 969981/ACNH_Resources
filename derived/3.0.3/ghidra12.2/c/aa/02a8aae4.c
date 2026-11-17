
/* WARNING: Removing unreachable block (ram,0x02a8ac8c) */

undefined8 FUN_02a8aae4(long param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  puVar3 = PTR_DAT_04bbc218;
  uVar2 = *(uint *)(param_1 + 0x1b4);
  lVar6 = *(long *)PTR_DAT_04bbc218;
  puVar1 = (uint *)(lVar6 + 0x20) + (ulong)*(uint *)(param_1 + 0x1b0) * 4;
  if (0x1d < *(uint *)(param_1 + 0x1b0)) {
    puVar1 = (uint *)(lVar6 + 0x20);
  }
  if (*puVar1 <= uVar2) {
    uVar2 = 0;
  }
  lVar7 = *(long *)(puVar1 + 2) + (long)(int)uVar2 * 0x30;
  uVar2 = *(uint *)(lVar7 + 8);
  if (*(uint *)(lVar6 + 0x10) <= uVar2) {
    uVar2 = 0;
  }
  pcVar4 = (char *)(**(code **)(**(long **)(*(long *)(*(long *)(*(long *)(lVar6 + 0x18) +
                                                                (long)(int)uVar2 * 0x18 + 0x10) +
                                                      (long)*(int *)(lVar7 + 0xc) * 0x10 + 8) +
                                            (long)*(int *)(lVar7 + 0x10) * 0x518 + 0x78) + 0x28))();
  uVar5 = 0;
  if (*pcVar4 == '\0') {
    lVar6 = *(long *)puVar3;
    uVar2 = *(uint *)(param_1 + 0x1fc);
    puVar1 = (uint *)(lVar6 + 0x20) + (ulong)*(uint *)(param_1 + 0x1f8) * 4;
    if (0x1d < *(uint *)(param_1 + 0x1f8)) {
      puVar1 = (uint *)(lVar6 + 0x20);
    }
    if (*puVar1 <= uVar2) {
      uVar2 = 0;
    }
    lVar7 = *(long *)(puVar1 + 2) + (long)(int)uVar2 * 0x30;
    uVar2 = *(uint *)(lVar7 + 8);
    if (*(uint *)(lVar6 + 0x10) <= uVar2) {
      uVar2 = 0;
    }
    pcVar4 = (char *)(**(code **)(**(long **)(*(long *)(*(long *)(*(long *)(lVar6 + 0x18) +
                                                                  (long)(int)uVar2 * 0x18 + 0x10) +
                                                        (long)*(int *)(lVar7 + 0xc) * 0x10 + 8) +
                                              (long)*(int *)(lVar7 + 0x10) * 0x518 + 0x78) + 0x28))
                               ();
    uVar5 = 0;
    if (*pcVar4 == '\x01') {
      uVar5 = 1;
      *(ushort *)(param_1 + 0x280) = *(ushort *)(param_1 + 0x280) & 0xfff7 | 0x100;
      if (*(char *)(DAT_05351250 + 0x198) != '\0') {
        *(int *)(DAT_05351250 + 0x16c) = *(int *)(DAT_05351250 + 0x16c) + 1;
      }
    }
  }
  return uVar5;
}

