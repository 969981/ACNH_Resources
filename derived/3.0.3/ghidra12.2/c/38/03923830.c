
undefined8 FUN_03923830(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long *plVar6;
  uint uVar7;
  long lVar8;
  void *__dest;
  void *__src;
  
  if (param_2 == (long *)0x0) {
    return 0;
  }
  uVar4 = (**(code **)(*param_2 + 0xb0))(param_2);
  if (*(uint *)(param_1 + 0x18) <= uVar4) {
    uVar4 = 0;
  }
  if (*(short *)(*(long *)(param_1 + 0x20) + (long)(int)uVar4 * 4 + 2) != 0) {
    uVar4 = 0;
    do {
      uVar5 = (**(code **)(*param_2 + 0xb0))(param_2);
      if (*(uint *)(param_1 + 0x18) <= uVar5) {
        uVar5 = 0;
      }
      uVar7 = (uint)*(ushort *)
                     (*(long *)(param_1 + 0x20) +
                     (-(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar5 << 2));
      uVar5 = uVar4 + uVar7;
      if (*(uint *)(param_1 + 0x158) <= uVar5) {
        uVar5 = 0;
      }
      lVar1 = *(long *)(param_1 + 0x160) + (ulong)uVar5 * 0x100;
      if ((*(int *)(lVar1 + 0x80) < 0) && (*(int *)(lVar1 + 0x80) != -2)) {
        uVar7 = uVar7 + uVar4;
        if (*(uint *)(param_1 + 0x28) <= uVar7) {
          uVar7 = 0;
        }
        *(long **)(*(long *)(param_1 + 0x30) + (ulong)uVar7 * 8) = param_2;
        plVar6 = (long *)(**(code **)(*param_2 + 0x80))(param_2);
        __dest = *(void **)(lVar1 + 0x50);
        (**(code **)(*plVar6 + 0x18))();
        __src = (void *)plVar6[1];
        if (__dest == __src) goto LAB_039239e4;
        (**(code **)(*plVar6 + 0x18))(plVar6);
        lVar8 = 0;
        goto LAB_03923970;
      }
      uVar4 = uVar4 + 1;
      uVar5 = (**(code **)(*param_2 + 0xb0))(param_2);
      if (*(uint *)(param_1 + 0x18) <= uVar5) {
        uVar5 = 0;
      }
    } while (uVar4 < *(ushort *)(*(long *)(param_1 + 0x20) + (long)(int)uVar5 * 4 + 2));
  }
  return 0;
  while( true ) {
    lVar2 = plVar6[1] + lVar8;
    if (*(char *)(lVar2 + 1) == '\0') {
      lVar8 = lVar8 + 1;
      goto LAB_039239bc;
    }
    if (*(char *)(lVar2 + 2) == '\0') {
      lVar8 = lVar8 + 2;
      goto LAB_039239bc;
    }
    lVar8 = lVar8 + 3;
    if (lVar8 == 0x80001) break;
LAB_03923970:
    if (*(char *)(plVar6[1] + lVar8) == '\0') goto LAB_039239bc;
  }
  lVar8 = 0;
LAB_039239bc:
  iVar3 = (int)lVar8;
  if (*(int *)(lVar1 + 0x58) <= (int)lVar8) {
    iVar3 = *(int *)(lVar1 + 0x58) + -1;
  }
  memcpy(__dest,__src,(long)iVar3);
  *(undefined1 *)((long)__dest + (long)iVar3) = 0;
LAB_039239e4:
  FUN_0394dcc0(lVar1 + 0x30);
  return 1;
}

