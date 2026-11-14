
void FUN_01da5550(long param_1)

{
  long lVar1;
  undefined8 *__dest;
  uint uVar2;
  long lVar3;
  int iVar4;
  size_t __n;
  long *plVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  long *plVar10;
  undefined1 local_14 [4];
  
  lVar3 = **(long **)(*(long *)PTR_DAT_04bb49f0 + 8);
  lVar1 = (*(long **)(*(long *)PTR_DAT_04bb49f0 + 8))[1];
  if (lVar3 == 0 && lVar1 == 0) {
    *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
    *(undefined1 *)(param_1 + 0x1b2) = 1;
    return;
  }
  puVar9 = *(uint **)(param_1 + 0x20);
  if ((puVar9 == (uint *)0x0) || (*puVar9 == 0)) {
    plVar5 = (long *)0x0;
  }
  else {
    plVar5 = (long *)**(undefined8 **)(puVar9 + 2);
  }
  uVar2 = *(uint *)(param_1 + 8);
  if (uVar2 == 0) {
    uVar7 = 0xffffffff;
  }
  else {
    uVar8 = 0;
    uVar6 = 0xffffffff;
    do {
      plVar10 = (long *)(*(long *)(param_1 + 0x10) + ((long)((ulong)uVar8 << 0x20) >> 0x1a));
      if (*plVar10 == lVar3 && plVar10[1] == lVar1) {
        *(uint *)(param_1 + 0x28) = uVar8;
        if (puVar9 == (uint *)0x0) goto LAB_01da5774;
        uVar2 = *puVar9;
        if ((int)uVar2 < 1) goto LAB_01da5774;
        __dest = *(undefined8 **)(puVar9 + 2);
        lVar3 = 0;
        __n = (long)(int)uVar2 * 8;
        goto LAB_01da56d0;
      }
      uVar7 = uVar8;
      if (plVar10 != plVar5) {
        uVar7 = uVar6;
      }
      uVar8 = uVar8 + 1;
      uVar6 = uVar7;
    } while (uVar2 != uVar8);
  }
  *(uint *)(param_1 + 0x28) = uVar7;
  if (uVar2 <= uVar7) {
    uVar7 = 0;
  }
  plVar10 = (long *)(*(long *)(param_1 + 0x10) + (long)(int)uVar7 * 0x40);
  *(undefined4 *)(plVar10 + 4) = 0;
  *plVar10 = lVar3;
  plVar10[1] = lVar1;
  plVar5 = (long *)plVar10[5];
  *(undefined4 *)(*plVar5 + 0x10) = 0;
  *(undefined4 *)(plVar5[1] + 0x10) = 0;
  *(undefined4 *)(plVar5[2] + 0x10) = 0;
  *(undefined2 *)(plVar10 + 6) = 0;
  *(undefined1 *)((long)plVar10 + 0x3a) = 0;
  *(undefined2 *)(plVar10 + 7) = 0xff;
  puVar9 = *(uint **)(param_1 + 0x20);
  if (puVar9 != (uint *)0x0) {
    uVar2 = *puVar9;
    if (0 < (int)uVar2) {
      __dest = *(undefined8 **)(puVar9 + 2);
      lVar3 = 0;
      __n = (long)(int)uVar2 * 8;
      do {
        __n = __n - 8;
        if ((long *)*__dest == plVar10) {
          if ((int)lVar3 != 1) {
            iVar4 = -(int)lVar3;
            if ((-1 < iVar4) && (iVar4 < (int)uVar2)) {
LAB_01da5728:
              if (1 - (int)lVar3 < (int)uVar2) {
                memmove(__dest,__dest + 1,__n);
                uVar2 = *puVar9;
              }
              *puVar9 = uVar2 - 1;
              puVar9 = *(uint **)(param_1 + 0x20);
              uVar2 = *puVar9;
            }
LAB_01da5754:
            if ((int)uVar2 < (int)puVar9[1]) {
              *(long **)(*(long *)(puVar9 + 2) + (long)(int)uVar2 * 8) = plVar10;
              *puVar9 = *puVar9 + 1;
            }
          }
          break;
        }
        lVar3 = lVar3 + -1;
        __dest = __dest + 1;
      } while ((ulong)uVar2 + lVar3 != 0);
    }
  }
LAB_01da5774:
  if (*(int *)(param_1 + 0x68) == 0 && *(int *)(param_1 + 0xb0) == 0) {
    local_14[0] = 1;
    FUN_01da4dbc(param_1,local_14,1);
  }
  return;
  while( true ) {
    lVar3 = lVar3 + -1;
    __dest = __dest + 1;
    if ((ulong)uVar2 + lVar3 == 0) break;
LAB_01da56d0:
    __n = __n - 8;
    if ((long *)*__dest == plVar10) {
      if ((int)lVar3 != 1) {
        iVar4 = -(int)lVar3;
        if ((iVar4 < 0) || ((int)uVar2 <= iVar4)) goto LAB_01da5754;
        goto LAB_01da5728;
      }
      break;
    }
  }
  goto LAB_01da5774;
}

