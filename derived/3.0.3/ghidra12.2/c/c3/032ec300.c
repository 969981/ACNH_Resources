
void FUN_032ec300(int *param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  short sVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  short sVar10;
  void *__dest;
  void *__src;
  ulong __n;
  int local_28;
  int iStack_24;
  
  *(undefined1 *)(param_1 + 0x1a4) = 0;
  if (param_1[0x11d] < 1) {
    if (*param_1 == 0) {
      sVar10 = 0;
    }
    else {
      sVar10 = *(short *)(**(long **)(param_1 + 8) + (long)(*param_1 + -1) * 2);
    }
    sVar4 = FUN_03363090(sVar10);
    if (sVar10 == sVar4) goto LAB_032ec44c;
    iVar3 = *param_1;
    if (iVar3 == 0) {
      return;
    }
    if ((((0 < iVar3) && (plVar8 = *(long **)(param_1 + 8), iVar3 <= (int)plVar8[1])) &&
        (*(short *)(*plVar8 + (ulong)(iVar3 - 1U) * 2) = sVar4, sVar4 == 0)) &&
       (iVar3 <= *(int *)((long)plVar8 + 0xc))) {
      *(uint *)((long)plVar8 + 0xc) = iVar3 - 1U;
    }
    param_1[2] = -1;
    FUN_03363ed0(param_1 + 0x114,**(undefined8 **)(param_1 + 8));
    __dest = *(void **)(param_1 + 0x1de);
    (**(code **)(*(long *)(param_1 + 0x1a6) + 0x18))(param_1 + 0x1a6);
    __src = *(void **)(param_1 + 0x1a8);
    if (__dest == __src) goto LAB_032ec5b4;
    (**(code **)(*(long *)(param_1 + 0x1a6) + 0x18))(param_1 + 0x1a6);
    lVar7 = 0;
    do {
      if (*(short *)(*(long *)(param_1 + 0x1a8) + lVar7 * 2) == 0) goto LAB_032ec58c;
      lVar9 = *(long *)(param_1 + 0x1a8) + lVar7 * 2;
      if (*(short *)(lVar9 + 2) == 0) goto LAB_032ec580;
      if (*(short *)(lVar9 + 4) == 0) goto LAB_032ec588;
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
  }
  else {
    sVar10 = *(short *)(*(long *)(param_1 + 0x11a) + (ulong)(param_1[0x11d] - 1) * 2);
    sVar4 = FUN_03363090(sVar10);
    if (sVar10 == sVar4) {
LAB_032ec44c:
      lVar9 = *(long *)PTR_DAT_04bb4fb0;
      uVar5 = FUN_03368ef0(DAT_05734ea0,0);
      lVar7 = *(long *)(lVar9 + 8);
      if (lVar7 == 0) {
        return;
      }
      lVar2 = 0;
      if (*(char *)(lVar7 + 0x38) != '\0') {
        lVar2 = lVar7 + 8;
      }
      FUN_03366350(lVar9,lVar2,s_Decide_Error_04b209a3,1,uVar5,0);
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
    if (__dest == __src) goto LAB_032ec5b4;
    (**(code **)(*(long *)(param_1 + 0x1a6) + 0x18))(param_1 + 0x1a6);
    lVar7 = 0;
    do {
      if (*(short *)(*(long *)(param_1 + 0x1a8) + lVar7 * 2) == 0) goto LAB_032ec58c;
      lVar9 = *(long *)(param_1 + 0x1a8) + lVar7 * 2;
      if (*(short *)(lVar9 + 2) == 0) goto LAB_032ec580;
      if (*(short *)(lVar9 + 4) == 0) goto LAB_032ec588;
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
  }
  lVar7 = 0;
  goto LAB_032ec58c;
LAB_032ec580:
  lVar7 = lVar7 + 1;
  goto LAB_032ec58c;
LAB_032ec588:
  lVar7 = lVar7 + 2;
LAB_032ec58c:
  uVar1 = (uint)lVar7;
  if (param_1[0x1e0] <= (int)(uint)lVar7) {
    uVar1 = param_1[0x1e0] - 1;
  }
  __n = -(ulong)(uVar1 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar1 << 1;
  memcpy(__dest,__src,__n);
  *(undefined2 *)((long)__dest + __n) = 0;
LAB_032ec5b4:
  param_1[1] = *param_1;
  FUN_03363ed0(param_1 + 0x11e,*(undefined8 *)(param_1 + 0x11a));
  param_1[0x185] = param_1[0x183];
  iStack_24 = *param_1;
  puVar6 = *(undefined8 **)(param_1 + 4);
  param_1[0x186] = param_1[0x184];
  local_28 = iStack_24 + -1;
  if (puVar6 != (undefined8 *)0x0) {
    (**(code **)*puVar6)(puVar6,&local_28);
  }
  return;
}

