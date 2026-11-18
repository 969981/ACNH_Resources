
/* WARNING: Removing unreachable block (ram,0x033902a8) */
/* WARNING: Removing unreachable block (ram,0x033902c4) */

void FUN_03390250(long param_1,int param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  void *__dest;
  void *__src;
  long *plVar4;
  ulong __n;
  
  if ((param_2 == 0) && (DAT_05739db8 != 0)) {
    lVar3 = DAT_05739da8;
    if (DAT_05739db8 < 1) {
      lVar3 = 0;
    }
    if (*(char *)(lVar3 + 0xa8) != '\0') {
      *(undefined1 *)(lVar3 + 0xa9) = 1;
    }
  }
  *(undefined2 *)(param_1 + 0x1d50) = *(undefined2 *)(param_3 + 8);
  __dest = *(void **)(param_1 + 0x1d60);
  plVar4 = (long *)(param_3 + 0x10);
  (**(code **)(*plVar4 + 0x18))(plVar4);
  __src = *(void **)(param_3 + 0x18);
  if (__dest != __src) {
    (**(code **)(*(long *)(param_3 + 0x10) + 0x18))(plVar4);
    lVar3 = 0;
    do {
      if (*(short *)(*(long *)(param_3 + 0x18) + lVar3 * 2) == 0) goto LAB_0339035c;
      lVar1 = *(long *)(param_3 + 0x18) + lVar3 * 2;
      if (*(short *)(lVar1 + 2) == 0) {
        lVar3 = lVar3 + 1;
        goto LAB_0339035c;
      }
      if (*(short *)(lVar1 + 4) == 0) {
        lVar3 = lVar3 + 2;
        goto LAB_0339035c;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_0339035c:
    uVar2 = (uint)lVar3;
    if (*(int *)(param_1 + 0x1d68) <= (int)(uint)lVar3) {
      uVar2 = *(int *)(param_1 + 0x1d68) - 1;
    }
    __n = -(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1;
    memcpy(__dest,__src,__n);
    *(undefined2 *)((long)__dest + __n) = 0;
  }
  *(undefined1 *)(param_1 + 0x1db0) = *(undefined1 *)(param_3 + 0x68);
  return;
}

