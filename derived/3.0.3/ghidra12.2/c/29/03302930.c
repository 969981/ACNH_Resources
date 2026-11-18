
void FUN_03302930(long param_1,long *param_2,byte param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  void *__dest;
  void *__src;
  ulong __n;
  
  if ((*(int *)(param_1 + 0x1050) != 1) &&
     ((*(char *)(param_1 + 0x106a) != '\0' ||
      ((*(char *)(param_1 + 0x16408) != '\0' && (*(int *)(param_1 + 0x1568) == 0)))))) {
    __dest = *(void **)(param_1 + 0x1828);
    iVar3 = 0;
    if (*(int *)PTR_DAT_04bc96c0 != -2) {
      iVar3 = *(int *)PTR_DAT_04bc96c0 + 1;
    }
    *(int *)PTR_DAT_04bc96c0 = iVar3;
    *(int *)(param_1 + 0x1814) = iVar3;
    *(undefined4 *)(param_1 + 0x1810) = 1;
    (**(code **)(*param_2 + 0x18))(param_2);
    __src = (void *)param_2[1];
    if (__dest != __src) {
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar4 = 0;
      do {
        if (*(short *)(param_2[1] + lVar4 * 2) == 0) goto LAB_03302a2c;
        lVar1 = param_2[1] + lVar4 * 2;
        if (*(short *)(lVar1 + 2) == 0) {
          lVar4 = lVar4 + 1;
          goto LAB_03302a2c;
        }
        if (*(short *)(lVar1 + 4) == 0) {
          lVar4 = lVar4 + 2;
          goto LAB_03302a2c;
        }
        lVar4 = lVar4 + 3;
      } while (lVar4 != 0x80001);
      lVar4 = 0;
LAB_03302a2c:
      uVar2 = (uint)lVar4;
      if (*(int *)(param_1 + 0x1830) <= (int)(uint)lVar4) {
        uVar2 = *(int *)(param_1 + 0x1830) - 1;
      }
      __n = -(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1;
      memcpy(__dest,__src,__n);
      *(undefined2 *)((long)__dest + __n) = 0;
    }
    *(int *)(param_1 + 0x1a68) = iVar3;
    *(byte *)(param_1 + 0x1818) = param_3 & 1;
    *(undefined1 *)(*(long *)(param_1 + 0x520) + 0x177d) = 0;
    *(undefined2 *)(param_1 + 0x16406) = 0x101;
    if ((*(long *)(param_1 + 0x6e0) != 0) && (*(long *)(*(long *)(param_1 + 0x6e0) + 8) != 0)) {
      FUN_03321ed0();
      return;
    }
  }
  return;
}

