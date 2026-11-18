
void FUN_032ebd40(int *param_1)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  short sVar4;
  undefined8 *puVar5;
  long lVar6;
  long *plVar7;
  short sVar8;
  void *__dest;
  void *__src;
  ulong __n;
  int local_28;
  int iStack_24;
  
  *(undefined1 *)(param_1 + 0x1a4) = 0;
  if (param_1[0x11d] < 1) {
    if (*param_1 == 0) {
      sVar8 = 0;
    }
    else {
      sVar8 = *(short *)(**(long **)(param_1 + 8) + (long)(*param_1 + -1) * 2);
    }
    sVar4 = FUN_033624b0(sVar8);
    if (sVar8 == sVar4) {
      return;
    }
    iVar3 = *param_1;
    if (iVar3 == 0) {
      return;
    }
    if ((((0 < iVar3) && (plVar7 = *(long **)(param_1 + 8), iVar3 <= (int)plVar7[1])) &&
        (*(short *)(*plVar7 + (ulong)(iVar3 - 1U) * 2) = sVar4, sVar4 == 0)) &&
       (iVar3 <= *(int *)((long)plVar7 + 0xc))) {
      *(uint *)((long)plVar7 + 0xc) = iVar3 - 1U;
    }
    param_1[2] = -1;
    FUN_03363ed0(param_1 + 0x114,**(undefined8 **)(param_1 + 8));
    __dest = *(void **)(param_1 + 0x1de);
    (**(code **)(*(long *)(param_1 + 0x1a6) + 0x18))(param_1 + 0x1a6);
    __src = *(void **)(param_1 + 0x1a8);
    if (__dest == __src) goto LAB_032ebf94;
    (**(code **)(*(long *)(param_1 + 0x1a6) + 0x18))(param_1 + 0x1a6);
    lVar6 = 0;
    do {
      if (*(short *)(*(long *)(param_1 + 0x1a8) + lVar6 * 2) == 0) goto LAB_032ebf6c;
      lVar1 = *(long *)(param_1 + 0x1a8) + lVar6 * 2;
      if (*(short *)(lVar1 + 2) == 0) goto LAB_032ebf60;
      if (*(short *)(lVar1 + 4) == 0) goto LAB_032ebf68;
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
  }
  else {
    sVar8 = *(short *)(*(long *)(param_1 + 0x11a) + (ulong)(param_1[0x11d] - 1) * 2);
    sVar4 = FUN_033624b0(sVar8);
    if (sVar8 == sVar4) {
      return;
    }
    iVar3 = param_1[0x11d];
    if (0 < iVar3) {
      param_1[0x11d] = iVar3 - 1U;
      *(undefined2 *)(*(long *)(param_1 + 0x11a) + (ulong)(iVar3 - 1U) * 2) = 0;
      iVar3 = param_1[0x11d];
    }
    if (iVar3 < param_1[0x11c] + -1) {
      *(short *)(*(long *)(param_1 + 0x11a) + (long)iVar3 * 2) = sVar4;
      iVar3 = param_1[0x11d];
      param_1[0x11d] = (int)((long)iVar3 + 1);
      *(undefined2 *)(*(long *)(param_1 + 0x11a) + ((long)iVar3 + 1) * 2) = 0;
    }
    FUN_032ea1b0(param_1,4);
    FUN_03363ed0(param_1 + 0x114,**(undefined8 **)(param_1 + 8));
    __dest = *(void **)(param_1 + 0x1de);
    (**(code **)(*(long *)(param_1 + 0x1a6) + 0x18))(param_1 + 0x1a6);
    __src = *(void **)(param_1 + 0x1a8);
    if (__dest == __src) goto LAB_032ebf94;
    (**(code **)(*(long *)(param_1 + 0x1a6) + 0x18))(param_1 + 0x1a6);
    lVar6 = 0;
    do {
      if (*(short *)(*(long *)(param_1 + 0x1a8) + lVar6 * 2) == 0) goto LAB_032ebf6c;
      lVar1 = *(long *)(param_1 + 0x1a8) + lVar6 * 2;
      if (*(short *)(lVar1 + 2) == 0) goto LAB_032ebf60;
      if (*(short *)(lVar1 + 4) == 0) goto LAB_032ebf68;
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
  }
  lVar6 = 0;
  goto LAB_032ebf6c;
LAB_032ebf60:
  lVar6 = lVar6 + 1;
  goto LAB_032ebf6c;
LAB_032ebf68:
  lVar6 = lVar6 + 2;
LAB_032ebf6c:
  uVar2 = (uint)lVar6;
  if (param_1[0x1e0] <= (int)(uint)lVar6) {
    uVar2 = param_1[0x1e0] - 1;
  }
  __n = -(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1;
  memcpy(__dest,__src,__n);
  *(undefined2 *)((long)__dest + __n) = 0;
LAB_032ebf94:
  param_1[1] = *param_1;
  FUN_03363ed0(param_1 + 0x11e,*(undefined8 *)(param_1 + 0x11a));
  param_1[0x185] = param_1[0x183];
  iStack_24 = *param_1;
  puVar5 = *(undefined8 **)(param_1 + 4);
  param_1[0x186] = param_1[0x184];
  local_28 = iStack_24 + -1;
  if (puVar5 != (undefined8 *)0x0) {
    (**(code **)*puVar5)(puVar5,&local_28);
  }
  return;
}

