
void FUN_03ad27b0(long param_1,long param_2)

{
  long lVar1;
  void *__dest;
  long lVar2;
  ulong uVar3;
  size_t __n;
  long lVar4;
  
  lVar2 = (long)*(char *)(*(long *)(param_1 + 8) + 0xf0);
  if (lVar2 != -1) {
    lVar4 = *(long *)(*(long *)(param_1 + 8) + 0x58);
    __n = *(ulong *)(param_2 + 0x60);
    if (lVar4 != 0 && __n != 0) {
      lVar4 = lVar4 + lVar2 * 0x20;
      uVar3 = (ulong)*(ushort *)(lVar4 + 0x1a);
      if (uVar3 <= __n) {
        __n = uVar3;
      }
      if (*(char *)(param_2 + 10) != '\0') {
        lVar2 = 0;
        uVar3 = 0;
        do {
          lVar1 = 0;
          if (*(long *)(param_2 + 0x40) != 0 && (*(ushort *)(param_2 + 8) & 1) != 0) {
            lVar1 = *(long *)(param_2 + 0x40) + lVar2;
          }
          __dest = (void *)FUN_00347cc4(lVar1);
          memcpy(__dest,*(void **)(lVar4 + 0x10),__n);
          lVar1 = 0;
          if (*(long *)(param_2 + 0x40) != 0 && (*(ushort *)(param_2 + 8) & 1) != 0) {
            lVar1 = *(long *)(param_2 + 0x40) + lVar2;
          }
          FUN_00347cdc(lVar1,0,*(undefined8 *)(param_2 + 0x60));
          lVar1 = 0;
          if (*(long *)(param_2 + 0x40) != 0 && (*(ushort *)(param_2 + 8) & 1) != 0) {
            lVar1 = *(long *)(param_2 + 0x40) + lVar2;
          }
          FUN_00347cd8(lVar1);
          uVar3 = uVar3 + 1;
          lVar2 = lVar2 + 0x48;
        } while (uVar3 < *(byte *)(param_2 + 10));
      }
    }
  }
  return;
}

