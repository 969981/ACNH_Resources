
/* WARNING: Removing unreachable block (ram,0x0338f9f0) */
/* WARNING: Removing unreachable block (ram,0x0338fa0c) */

void FUN_0338f990(long param_1,int param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  void *__dest;
  void *__src;
  long *plVar6;
  ulong __n;
  
  if ((param_2 == 0) && (DAT_05739db8 != 0)) {
    lVar5 = DAT_05739da8;
    if (DAT_05739db8 < 1) {
      lVar5 = 0;
    }
    if (*(char *)(lVar5 + 0x7e) != '\0') {
      *(undefined1 *)(lVar5 + 0x7f) = 1;
    }
  }
  *(undefined2 *)(param_1 + 0x938) = *(undefined2 *)(param_3 + 8);
  uVar3 = *(undefined4 *)(param_1 + 0xd40);
  __dest = *(void **)(param_1 + 0x948);
  plVar6 = (long *)(param_3 + 0x10);
  (**(code **)(*plVar6 + 0x18))(plVar6);
  __src = *(void **)(param_3 + 0x18);
  if (__dest != __src) {
    (**(code **)(*(long *)(param_3 + 0x10) + 0x18))(plVar6);
    lVar5 = 0;
    do {
      if (*(short *)(*(long *)(param_3 + 0x18) + lVar5 * 2) == 0) goto LAB_0338faa0;
      lVar1 = *(long *)(param_3 + 0x18) + lVar5 * 2;
      if (*(short *)(lVar1 + 2) == 0) {
        lVar5 = lVar5 + 1;
        goto LAB_0338faa0;
      }
      if (*(short *)(lVar1 + 4) == 0) {
        lVar5 = lVar5 + 2;
        goto LAB_0338faa0;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_0338faa0:
    uVar2 = (uint)lVar5;
    if (*(int *)(param_1 + 0x950) <= (int)(uint)lVar5) {
      uVar2 = *(int *)(param_1 + 0x950) - 1;
    }
    __n = -(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1;
    memcpy(__dest,__src,__n);
    *(undefined2 *)((long)__dest + __n) = 0;
  }
  uVar4 = *(undefined4 *)(param_3 + 0x410);
  *(undefined4 *)(param_1 + 0xd44) = uVar3;
  *(undefined4 *)(param_1 + 0xd40) = uVar4;
  return;
}

