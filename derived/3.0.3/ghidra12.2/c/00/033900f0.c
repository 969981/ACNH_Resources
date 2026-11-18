
/* WARNING: Removing unreachable block (ram,0x03390148) */
/* WARNING: Removing unreachable block (ram,0x03390164) */

void FUN_033900f0(long param_1,int param_2,long param_3)

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
    if (*(char *)(lVar3 + 0xa2) != '\0') {
      *(undefined1 *)(lVar3 + 0xa3) = 1;
    }
  }
  *(undefined2 *)(param_1 + 0x1cb0) = *(undefined2 *)(param_3 + 8);
  __dest = *(void **)(param_1 + 0x1cc8);
  *(undefined8 *)(param_1 + 0x1cb8) = *(undefined8 *)(param_3 + 0x10);
  plVar4 = (long *)(param_3 + 0x18);
  (**(code **)(*plVar4 + 0x18))(plVar4);
  __src = *(void **)(param_3 + 0x20);
  if (__dest != __src) {
    (**(code **)(*(long *)(param_3 + 0x18) + 0x18))(plVar4);
    lVar3 = 0;
    do {
      if (*(short *)(*(long *)(param_3 + 0x20) + lVar3 * 2) == 0) goto LAB_033901fc;
      lVar1 = *(long *)(param_3 + 0x20) + lVar3 * 2;
      if (*(short *)(lVar1 + 2) == 0) {
        lVar3 = lVar3 + 1;
        goto LAB_033901fc;
      }
      if (*(short *)(lVar1 + 4) == 0) {
        lVar3 = lVar3 + 2;
        goto LAB_033901fc;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_033901fc:
    uVar2 = (uint)lVar3;
    if (*(int *)(param_1 + 0x1cd0) <= (int)(uint)lVar3) {
      uVar2 = *(int *)(param_1 + 0x1cd0) - 1;
    }
    __n = -(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1;
    memcpy(__dest,__src,__n);
    *(undefined2 *)((long)__dest + __n) = 0;
  }
  *(undefined1 *)(param_1 + 0x1d00) = *(undefined1 *)(param_3 + 0x58);
  return;
}

