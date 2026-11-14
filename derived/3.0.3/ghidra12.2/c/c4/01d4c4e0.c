
bool FUN_01d4c4e0(long param_1,long *param_2,undefined8 *param_3)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  void *__dest;
  long lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  void *__src;
  ulong __n;
  
  __dest = DAT_0536d378;
  iVar4 = *(int *)(param_1 + 0x380);
  if (iVar4 == 3) {
    (**(code **)(*param_2 + 0x18))(param_2);
    __src = (void *)param_2[1];
    if (__dest != __src) {
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar5 = 0;
      do {
        if (*(short *)(param_2[1] + lVar5 * 2) == 0) goto LAB_01d4c59c;
        lVar2 = param_2[1] + lVar5 * 2;
        if (*(short *)(lVar2 + 2) == 0) {
          lVar5 = lVar5 + 1;
          goto LAB_01d4c59c;
        }
        if (*(short *)(lVar2 + 4) == 0) {
          lVar5 = lVar5 + 2;
          goto LAB_01d4c59c;
        }
        lVar5 = lVar5 + 3;
      } while (lVar5 != 0x80001);
      lVar5 = 0;
LAB_01d4c59c:
      uVar3 = (uint)lVar5;
      if (DAT_0536d380 <= (int)(uint)lVar5) {
        uVar3 = DAT_0536d380 - 1;
      }
      __n = -(ulong)(uVar3 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar3 << 1;
      memcpy(__dest,__src,__n);
      *(undefined2 *)((long)__dest + __n) = 0;
    }
    plVar1 = (long *)(param_1 + 0x3f0);
    *(undefined1 *)(param_1 + 0xab5) = 1;
    if (param_3 != (undefined8 *)0x0) {
      *plVar1 = (long)param_3;
      *param_3 = plVar1;
      lVar5 = *plVar1;
      *(undefined8 *)(lVar5 + 8) = 0;
      *(undefined8 *)(lVar5 + 0x10) = 0;
    }
    *(undefined4 *)(param_1 + 0x3e0) = 3;
    FUN_03ebb160(param_1 + 0x378,4);
    if (*(int *)(param_1 + 0x3e0) == 4) {
      lVar5 = *(long *)(param_1 + 0x3f0);
      if (*(int *)(param_1 + 1000) == 0) {
        if (lVar5 == 0) goto LAB_01d4c65c;
        uVar6 = 0;
        uVar7 = 0;
        uVar8 = 1;
      }
      else {
        if (lVar5 == 0) goto LAB_01d4c65c;
        uVar6 = *(undefined4 *)(param_1 + 1000);
        uVar8 = 0xffffffff;
        uVar7 = *(undefined4 *)(param_1 + 0x3ec);
      }
      *(undefined4 *)(lVar5 + 8) = uVar8;
      *(undefined4 *)(lVar5 + 0xc) = uVar6;
      *(undefined4 *)(lVar5 + 0x10) = uVar7;
      *(undefined4 *)(lVar5 + 0x14) = 0;
      if ((undefined8 *)*plVar1 != (undefined8 *)0x0) {
        *(undefined8 *)*plVar1 = 0;
        *plVar1 = 0;
      }
    }
  }
LAB_01d4c65c:
  return iVar4 == 3;
}

