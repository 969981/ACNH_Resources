
bool FUN_01d4c290(long param_1,int param_2,long *param_3,undefined8 *param_4)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  void *pvVar4;
  uint uVar5;
  undefined4 uVar6;
  long lVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  void *__dest;
  void *__src;
  ulong __n;
  
  iVar3 = *(int *)(param_1 + 0x380);
  if (iVar3 != 3) goto LAB_01d4c4b8;
  *(int *)(param_1 + 0xaa8) = param_2;
  __dest = DAT_0536d378;
  pvVar4 = DAT_0536d358;
  if (param_2 == 1) {
    (**(code **)(*param_3 + 0x18))(param_3);
    __src = (void *)param_3[1];
    if (pvVar4 != __src) {
      (**(code **)(*param_3 + 0x18))(param_3);
      lVar7 = 0;
      do {
        if (*(short *)(param_3[1] + lVar7 * 2) == 0) goto LAB_01d4c3cc;
        lVar2 = param_3[1] + lVar7 * 2;
        if (*(short *)(lVar2 + 2) == 0) {
          lVar7 = lVar7 + 1;
          goto LAB_01d4c3cc;
        }
        if (*(short *)(lVar2 + 4) == 0) {
          lVar7 = lVar7 + 2;
          goto LAB_01d4c3cc;
        }
        lVar7 = lVar7 + 3;
      } while (lVar7 != 0x80001);
      lVar7 = 0;
LAB_01d4c3cc:
      uVar5 = (uint)lVar7;
      __dest = pvVar4;
      iVar8 = DAT_0536d360;
LAB_01d4c3ec:
      if (iVar8 <= (int)uVar5) {
        uVar5 = iVar8 - 1;
      }
      __n = -(ulong)(uVar5 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar5 << 1;
      memcpy(__dest,__src,__n);
      *(undefined2 *)((long)__dest + __n) = 0;
    }
  }
  else {
    (**(code **)(*param_3 + 0x18))(param_3);
    __src = (void *)param_3[1];
    if (__dest != __src) {
      (**(code **)(*param_3 + 0x18))(param_3);
      lVar7 = 0;
      do {
        if (*(short *)(param_3[1] + lVar7 * 2) == 0) goto LAB_01d4c3e4;
        lVar2 = param_3[1] + lVar7 * 2;
        if (*(short *)(lVar2 + 2) == 0) {
          lVar7 = lVar7 + 1;
          goto LAB_01d4c3e4;
        }
        if (*(short *)(lVar2 + 4) == 0) {
          lVar7 = lVar7 + 2;
          goto LAB_01d4c3e4;
        }
        lVar7 = lVar7 + 3;
      } while (lVar7 != 0x80001);
      lVar7 = 0;
LAB_01d4c3e4:
      uVar5 = (uint)lVar7;
      iVar8 = DAT_0536d380;
      goto LAB_01d4c3ec;
    }
  }
  plVar1 = (long *)(param_1 + 0x3f0);
  uVar6 = 3;
  if (4 < *(int *)(param_1 + 0xaa8) - 7U) {
    uVar6 = 0;
  }
  *(undefined4 *)(param_1 + 0xaa0) = uVar6;
  if (param_4 != (undefined8 *)0x0) {
    *plVar1 = (long)param_4;
    *param_4 = plVar1;
    lVar7 = *plVar1;
    *(undefined8 *)(lVar7 + 8) = 0;
    *(undefined8 *)(lVar7 + 0x10) = 0;
  }
  *(undefined4 *)(param_1 + 0x3e0) = 7;
  FUN_03ebb160(param_1 + 0x378,5);
  if (*(int *)(param_1 + 0x3e0) == 5) {
    lVar7 = *(long *)(param_1 + 0x3f0);
    if (*(int *)(param_1 + 1000) == 0) {
      if (lVar7 == 0) goto LAB_01d4c4b8;
      uVar6 = 0;
      uVar9 = 0;
      uVar10 = 1;
    }
    else {
      if (lVar7 == 0) goto LAB_01d4c4b8;
      uVar6 = *(undefined4 *)(param_1 + 1000);
      uVar10 = 0xffffffff;
      uVar9 = *(undefined4 *)(param_1 + 0x3ec);
    }
    *(undefined4 *)(lVar7 + 8) = uVar10;
    *(undefined4 *)(lVar7 + 0xc) = uVar6;
    *(undefined4 *)(lVar7 + 0x10) = uVar9;
    *(undefined4 *)(lVar7 + 0x14) = 0;
    if ((undefined8 *)*plVar1 != (undefined8 *)0x0) {
      *(undefined8 *)*plVar1 = 0;
      *plVar1 = 0;
    }
  }
LAB_01d4c4b8:
  return iVar3 == 3;
}

