
void FUN_029990c0(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  undefined2 *puVar6;
  undefined1 *puVar7;
  long *plVar8;
  long lVar9;
  int iVar10;
  undefined2 *puVar11;
  
  lVar9 = *(long *)(param_1 + 0x160);
  if (lVar9 != param_1 + 0x158) {
    lVar5 = lVar9 + -8;
    do {
      lVar9 = *(long *)(lVar9 + 8);
      FUN_02997890(param_1,lVar5);
      lVar5 = lVar9 + -8;
    } while (lVar5 != param_1 + 0x150);
  }
  iVar3 = *(int *)(param_1 + 0x198);
  if (iVar3 != 0) {
    lVar9 = *(long *)(param_1 + 0x1a0);
    iVar10 = 0;
    do {
      puVar11 = (undefined2 *)(lVar9 + (long)iVar10 * 0x50);
      puVar6 = *(undefined2 **)(puVar11 + 0x14);
      if (puVar6 != puVar11 + 0x10) {
        do {
          puVar1 = (undefined8 *)(puVar6 + -4);
          puVar6 = *(undefined2 **)(puVar6 + 4);
          FUN_0299ae60(param_1,*puVar1);
        } while (puVar6 + -4 != puVar11 + 0xc);
      }
      puVar7 = *(undefined1 **)(lVar9 + (long)iVar10 * 0x50 + 0x18);
      *(undefined8 *)(puVar7 + 0x14) = 0xffffffff00000000;
      puVar7[8] = 0;
      *(undefined8 *)(puVar7 + 0xc) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x20) = 0;
      *(undefined4 *)(puVar7 + 0x28) = 0xffffffff;
      *(undefined8 *)(puVar7 + 0x30) = 0;
      puVar7[0x120] = 0;
      *(undefined4 *)(puVar7 + 300) = 0xffffffff;
      *(undefined2 *)(puVar7 + 0x122) = 0xfffe;
      *(undefined8 *)(puVar7 + 0x124) = 0xffffffffffffffff;
      plVar4 = *(long **)(puVar7 + 0x50);
      while (plVar4 != (long *)(puVar7 + 0x48)) {
        plVar2 = (long *)plVar4[1];
        plVar8 = plVar2;
        if (*plVar4 != 0) {
          *(long **)(*plVar4 + 8) = plVar2;
          plVar8 = (long *)plVar4[1];
        }
        if (plVar8 != (long *)0x0) {
          *plVar8 = *plVar4;
        }
        *plVar4 = 0;
        plVar4[1] = 0;
        *(int *)(puVar7 + 0x58) = *(int *)(puVar7 + 0x58) + -1;
        plVar4[-1] = *(long *)(puVar7 + 0x60);
        *(long **)(puVar7 + 0x60) = plVar4 + -1;
        plVar4 = plVar2;
      }
      lVar5 = lVar9 + (long)iVar10 * 0x50;
      *(undefined4 *)(puVar7 + 0x40) = 0xffffffff;
      *puVar7 = 1;
      *(undefined4 *)(puVar7 + 0x138) = 0;
      *(undefined2 *)(puVar7 + 0x131) = 0x101;
      *(undefined8 *)(puVar7 + 0x140) = 0xffffffffffffffff;
      *(undefined1 *)(lVar5 + 8) = 1;
      *(undefined4 *)(lVar5 + 0xc) = 0;
      *(undefined8 *)(lVar5 + 0x10) = 0xffffffffffffffff;
      iVar10 = iVar10 + 1;
      *puVar11 = 0;
      *(undefined4 *)(puVar11 + 2) = 0;
    } while (iVar3 != iVar10);
  }
  iVar3 = *(int *)(param_1 + 0x1a8);
  if (iVar3 != 0) {
    lVar9 = *(long *)(param_1 + 0x1b0);
    iVar10 = 0;
    do {
      puVar11 = (undefined2 *)(lVar9 + (long)iVar10 * 0x50);
      puVar6 = *(undefined2 **)(puVar11 + 0x14);
      if (puVar6 != puVar11 + 0x10) {
        do {
          puVar1 = (undefined8 *)(puVar6 + -4);
          puVar6 = *(undefined2 **)(puVar6 + 4);
          FUN_0299ae60(param_1,*puVar1);
        } while (puVar6 + -4 != puVar11 + 0xc);
      }
      puVar7 = *(undefined1 **)(lVar9 + (long)iVar10 * 0x50 + 0x18);
      *(undefined8 *)(puVar7 + 0x14) = 0xffffffff00000000;
      puVar7[8] = 0;
      *(undefined8 *)(puVar7 + 0xc) = 0xffffffffffffffff;
      *(undefined8 *)(puVar7 + 0x20) = 0;
      *(undefined4 *)(puVar7 + 0x28) = 0xffffffff;
      *(undefined8 *)(puVar7 + 0x30) = 0;
      puVar7[0x120] = 0;
      *(undefined4 *)(puVar7 + 300) = 0xffffffff;
      *(undefined2 *)(puVar7 + 0x122) = 0xfffe;
      *(undefined8 *)(puVar7 + 0x124) = 0xffffffffffffffff;
      plVar4 = *(long **)(puVar7 + 0x50);
      while (plVar4 != (long *)(puVar7 + 0x48)) {
        plVar2 = (long *)plVar4[1];
        plVar8 = plVar2;
        if (*plVar4 != 0) {
          *(long **)(*plVar4 + 8) = plVar2;
          plVar8 = (long *)plVar4[1];
        }
        if (plVar8 != (long *)0x0) {
          *plVar8 = *plVar4;
        }
        *plVar4 = 0;
        plVar4[1] = 0;
        *(int *)(puVar7 + 0x58) = *(int *)(puVar7 + 0x58) + -1;
        plVar4[-1] = *(long *)(puVar7 + 0x60);
        *(long **)(puVar7 + 0x60) = plVar4 + -1;
        plVar4 = plVar2;
      }
      lVar5 = lVar9 + (long)iVar10 * 0x50;
      *(undefined4 *)(puVar7 + 0x40) = 0xffffffff;
      *puVar7 = 1;
      *(undefined4 *)(puVar7 + 0x138) = 0;
      *(undefined2 *)(puVar7 + 0x131) = 0x101;
      *(undefined8 *)(puVar7 + 0x140) = 0xffffffffffffffff;
      *(undefined1 *)(lVar5 + 8) = 1;
      *(undefined4 *)(lVar5 + 0xc) = 0;
      *(undefined8 *)(lVar5 + 0x10) = 0xffffffffffffffff;
      iVar10 = iVar10 + 1;
      *puVar11 = 0;
      *(undefined4 *)(puVar11 + 2) = 0;
    } while (iVar3 != iVar10);
  }
  return;
}

