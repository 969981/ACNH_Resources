
/* WARNING: Removing unreachable block (ram,0x03390410) */
/* WARNING: Removing unreachable block (ram,0x0339042c) */

void FUN_033903b0(long param_1,int param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong __n;
  void *__dest;
  void *__src;
  long *plVar7;
  
  if ((param_2 == 0) && (DAT_05739db8 != 0)) {
    lVar5 = DAT_05739da8;
    if (DAT_05739db8 < 1) {
      lVar5 = 0;
    }
    if (*(char *)(lVar5 + 0xb0) != '\0') {
      *(undefined1 *)(lVar5 + 0xb1) = 1;
    }
  }
  *(undefined2 *)(param_1 + 0x1e30) = *(undefined2 *)(param_3 + 8);
  __dest = *(void **)(param_1 + 0x1ea0);
  *(undefined4 *)(param_1 + 0x1e34) = *(undefined4 *)(param_3 + 0xc);
  *(undefined2 *)(param_1 + 0x1e38) = *(undefined2 *)(param_3 + 0x10);
  *(undefined1 *)(param_1 + 0x1e3a) = *(undefined1 *)(param_3 + 0x12);
  *(undefined1 *)(param_1 + 0x1e3b) = *(undefined1 *)(param_3 + 0x13);
  *(undefined4 *)(param_1 + 0x1e3c) = *(undefined4 *)(param_3 + 0x14);
  uVar3 = *(undefined8 *)(param_3 + 0x18);
  uVar4 = *(undefined8 *)(param_3 + 0x20);
  *(undefined8 *)(param_1 + 0x1e50) = *(undefined8 *)(param_3 + 0x28);
  *(undefined8 *)(param_1 + 0x1e48) = uVar4;
  *(undefined8 *)(param_1 + 0x1e40) = uVar3;
  uVar3 = *(undefined8 *)(param_3 + 0x30);
  uVar6 = *(undefined8 *)(param_3 + 0x38);
  uVar4 = *(undefined8 *)(param_3 + 0x40);
  *(undefined8 *)(param_1 + 0x1e70) = *(undefined8 *)(param_3 + 0x48);
  *(undefined8 *)(param_1 + 0x1e68) = uVar4;
  *(undefined8 *)(param_1 + 0x1e60) = uVar6;
  *(undefined8 *)(param_1 + 0x1e58) = uVar3;
  uVar3 = *(undefined8 *)(param_3 + 0x50);
  uVar4 = *(undefined8 *)(param_3 + 0x58);
  uVar6 = *(undefined8 *)(param_3 + 0x60);
  *(undefined2 *)(param_1 + 0x1e90) = *(undefined2 *)(param_3 + 0x68);
  *(undefined8 *)(param_1 + 0x1e88) = uVar6;
  *(undefined8 *)(param_1 + 0x1e80) = uVar4;
  *(undefined8 *)(param_1 + 0x1e78) = uVar3;
  plVar7 = (long *)(param_3 + 0x70);
  (**(code **)(*plVar7 + 0x18))(plVar7);
  __src = *(void **)(param_3 + 0x78);
  if (__dest != __src) {
    (**(code **)(*(long *)(param_3 + 0x70) + 0x18))(plVar7);
    lVar5 = 0;
    do {
      if (*(short *)(*(long *)(param_3 + 0x78) + lVar5 * 2) == 0) goto LAB_0339052c;
      lVar1 = *(long *)(param_3 + 0x78) + lVar5 * 2;
      if (*(short *)(lVar1 + 2) == 0) {
        lVar5 = lVar5 + 1;
        goto LAB_0339052c;
      }
      if (*(short *)(lVar1 + 4) == 0) {
        lVar5 = lVar5 + 2;
        goto LAB_0339052c;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_0339052c:
    uVar2 = (uint)lVar5;
    if (*(int *)(param_1 + 0x1ea8) <= (int)(uint)lVar5) {
      uVar2 = *(int *)(param_1 + 0x1ea8) - 1;
    }
    __n = -(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1;
    memcpy(__dest,__src,__n);
    *(undefined2 *)((long)__dest + __n) = 0;
  }
  return;
}

