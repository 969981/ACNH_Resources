
void FUN_026f3190(long param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  void *pvVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  
  if ((param_2 < 8) && (*(long *)(param_1 + 0x10) != 0)) {
    uVar9 = (ulong)param_2;
    plVar4 = *(long **)(*(long *)(param_1 + 0x10) + (ulong)param_2 * 8 + 0xa0);
    if (plVar4 != (long *)0x0) {
      lVar5 = (**(code **)(*plVar4 + 0x10))();
      if (lVar5 != 0) {
        pvVar6 = (void *)(**(code **)(**(long **)(*(long *)(param_1 + 0x10) + uVar9 * 8 + 0xa0) +
                                     0x10))();
        memset(pvVar6,0,0x47430);
        *(undefined8 *)((long)pvVar6 + 0x40) = 0;
        *(undefined2 *)((long)pvVar6 + 0xe) = 0xffff;
        *(undefined8 *)((long)pvVar6 + 0x46) = 0;
        *(undefined2 *)((long)pvVar6 + 0x4e) = 0xffff;
        memset((void *)((long)pvVar6 + 0x110),0,0x46e60);
        puVar10 = (undefined8 *)((long)pvVar6 + 0x484);
        lVar5 = 300;
        do {
          *(undefined2 *)((long)puVar10 + -0x374) = 0;
          *(undefined1 *)((long)puVar10 + -700) = 0;
          *(undefined1 *)(puVar10 + -99) = 0;
          puVar10[-0x57] = 0xfffe00000000;
          *(undefined4 *)(puVar10 + -0x56) = 0;
          FUN_0277d4ac((long)puVar10 + -0x2b4);
          *(undefined1 *)((long)puVar10 + -0x2ac) = 0;
          *(undefined1 *)(puVar10 + -0x55) = 0;
          memset((void *)((long)puVar10 + -0x2a6),0,0x2a2);
          *(undefined2 *)((long)puVar10 + -4) = 0xfffe;
          lVar5 = lVar5 + -1;
          *puVar10 = 0;
          puVar10[1] = 0;
          puVar10[2] = 0;
          puVar10[3] = 0;
          puVar10[4] = 0;
          puVar10[5] = 0;
          puVar10[6] = 0;
          puVar10[7] = 0;
          puVar10 = puVar10 + 0x79;
        } while (lVar5 != 0);
        memset((void *)((long)pvVar6 + 0x46f70),0,0x4b0);
        iVar7 = 0;
        uVar8 = 0;
        do {
          uVar2 = uVar8 << 2;
          uVar3 = uVar8 >> 0x1f;
          uVar1 = (int)uVar8 + 1;
          uVar8 = (ulong)uVar1;
          *(int *)((long)pvVar6 + 0x46f70 + (-uVar3 & 0xfffffffc00000000 | uVar2)) = iVar7;
          iVar7 = iVar7 + 1;
        } while (uVar1 != 300);
        *(undefined4 *)((long)pvVar6 + 0x47420) = 0;
      }
      lVar5 = (**(code **)(**(long **)(*(long *)(param_1 + 0x10) + uVar9 * 8 + 0xa0) + 0x20))();
      if (lVar5 != 0) {
        pvVar6 = (void *)(**(code **)(**(long **)(*(long *)(param_1 + 0x10) + uVar9 * 8 + 0xa0) +
                                     0x20))();
        memset(pvVar6,0,0x47430);
        *(undefined8 *)((long)pvVar6 + 0x40) = 0;
        *(undefined2 *)((long)pvVar6 + 0xe) = 0xffff;
        *(undefined8 *)((long)pvVar6 + 0x46) = 0;
        *(undefined2 *)((long)pvVar6 + 0x4e) = 0xffff;
        memset((void *)((long)pvVar6 + 0x110),0,0x46e60);
        puVar10 = (undefined8 *)((long)pvVar6 + 0x484);
        lVar5 = 300;
        do {
          *(undefined2 *)((long)puVar10 + -0x374) = 0;
          *(undefined1 *)((long)puVar10 + -700) = 0;
          *(undefined1 *)(puVar10 + -99) = 0;
          puVar10[-0x57] = 0xfffe00000000;
          *(undefined4 *)(puVar10 + -0x56) = 0;
          FUN_0277d4ac((long)puVar10 + -0x2b4);
          *(undefined1 *)((long)puVar10 + -0x2ac) = 0;
          *(undefined1 *)(puVar10 + -0x55) = 0;
          memset((void *)((long)puVar10 + -0x2a6),0,0x2a2);
          *(undefined2 *)((long)puVar10 + -4) = 0xfffe;
          lVar5 = lVar5 + -1;
          *puVar10 = 0;
          puVar10[1] = 0;
          puVar10[2] = 0;
          puVar10[3] = 0;
          puVar10[4] = 0;
          puVar10[5] = 0;
          puVar10[6] = 0;
          puVar10[7] = 0;
          puVar10 = puVar10 + 0x79;
        } while (lVar5 != 0);
        memset((void *)((long)pvVar6 + 0x46f70),0,0x4b0);
        iVar7 = 0;
        uVar8 = 0;
        do {
          uVar2 = uVar8 << 2;
          uVar3 = uVar8 >> 0x1f;
          uVar1 = (int)uVar8 + 1;
          uVar8 = (ulong)uVar1;
          *(int *)((long)pvVar6 + 0x46f70 + (-uVar3 & 0xfffffffc00000000 | uVar2)) = iVar7;
          iVar7 = iVar7 + 1;
        } while (uVar1 != 300);
        *(undefined4 *)((long)pvVar6 + 0x47420) = 0;
      }
      if (param_2 < *(uint *)(param_1 + 0x68)) {
        pvVar6 = (void *)(*(long *)(param_1 + 0x70) + uVar9 * 0x300);
        memset(pvVar6,0,0x300);
        *(undefined8 *)((long)pvVar6 + 0x40) = 0;
        *(undefined2 *)((long)pvVar6 + 0xe) = 0xffff;
        *(undefined8 *)((long)pvVar6 + 0x46) = 0;
        *(undefined2 *)((long)pvVar6 + 0x4e) = 0xffff;
        memset((void *)((long)pvVar6 + 0x100),0,0x200);
        uVar9 = 0;
        do {
          uVar8 = uVar9 << 2;
          uVar2 = uVar9 >> 0x1f;
          uVar1 = (int)uVar9 + 1;
          uVar9 = (ulong)uVar1;
          *(undefined4 *)((long)pvVar6 + 0x100 + (-uVar2 & 0xfffffffc00000000 | uVar8)) = 0;
        } while (uVar1 != 0x80);
      }
    }
  }
  return;
}

