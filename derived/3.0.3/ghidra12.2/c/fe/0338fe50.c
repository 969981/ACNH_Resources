
/* WARNING: Removing unreachable block (ram,0x0338feb8) */
/* WARNING: Removing unreachable block (ram,0x0338fed4) */

void FUN_0338fe50(long param_1,int param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  void *__dest;
  void *__src;
  ulong __n;
  
  if ((param_2 == 0) && (DAT_05739db8 != 0)) {
    lVar3 = DAT_05739da8;
    if (DAT_05739db8 < 1) {
      lVar3 = 0;
    }
    if (*(char *)(lVar3 + 0x92) != '\0') {
      *(undefined1 *)(lVar3 + 0x93) = 1;
    }
  }
  *(undefined2 *)(param_1 + 0x18b8) = *(undefined2 *)(param_3 + 8);
  *(undefined4 *)(param_1 + 0x18bc) = *(undefined4 *)(param_3 + 0xc);
  *(undefined4 *)(param_1 + 0x18c8) = *(undefined4 *)(param_3 + 0x18);
  uVar4 = *(undefined8 *)(param_3 + 0x24);
  *(undefined8 *)(param_1 + 0x18cc) = *(undefined8 *)(param_3 + 0x1c);
  *(undefined8 *)(param_1 + 0x18d4) = uVar4;
  FUN_02c634f4(param_1 + 0x18dc,param_3 + 0x2c);
  __dest = *(void **)(param_1 + 0x1b40);
  *(undefined2 *)(param_1 + 0x1b34) = *(undefined2 *)(param_3 + 0x284);
  (**(code **)(*(long *)(param_3 + 0x288) + 0x18))(param_3 + 0x288);
  __src = *(void **)(param_3 + 0x290);
  if (__dest != __src) {
    (**(code **)(*(long *)(param_3 + 0x288) + 0x18))(param_3 + 0x288);
    lVar3 = 0;
    do {
      if (*(short *)(*(long *)(param_3 + 0x290) + lVar3 * 2) == 0) goto LAB_0338ffac;
      lVar1 = *(long *)(param_3 + 0x290) + lVar3 * 2;
      if (*(short *)(lVar1 + 2) == 0) {
        lVar3 = lVar3 + 1;
        goto LAB_0338ffac;
      }
      if (*(short *)(lVar1 + 4) == 0) {
        lVar3 = lVar3 + 2;
        goto LAB_0338ffac;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_0338ffac:
    uVar2 = (uint)lVar3;
    if (*(int *)(param_1 + 0x1b48) <= (int)(uint)lVar3) {
      uVar2 = *(int *)(param_1 + 0x1b48) - 1;
    }
    __n = -(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1;
    memcpy(__dest,__src,__n);
    *(undefined2 *)((long)__dest + __n) = 0;
  }
  *(undefined4 *)(param_1 + 0x1bb0) = *(undefined4 *)(param_3 + 0x300);
  *(undefined4 *)(param_1 + 0x1bb4) = *(undefined4 *)(param_3 + 0x304);
  *(undefined1 *)(param_1 + 0x1bb8) = *(undefined1 *)(param_3 + 0x308);
  *(undefined2 *)(param_1 + 0x1bc0) = *(undefined2 *)(param_3 + 0x310);
  *(undefined1 *)(param_1 + 0x1bc2) = *(undefined1 *)(param_3 + 0x312);
  *(undefined1 *)(param_1 + 0x1bc3) = *(undefined1 *)(param_3 + 0x313);
  *(undefined4 *)(param_1 + 0x1bc4) = *(undefined4 *)(param_3 + 0x314);
  *(undefined2 *)(param_1 + 0x1bc8) = *(undefined2 *)(param_3 + 0x318);
  return;
}

