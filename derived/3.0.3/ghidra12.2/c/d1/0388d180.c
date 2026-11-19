
void FUN_0388d180(long param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  if (*(int *)(param_1 + 8) != 0) {
    puVar6 = *(undefined8 **)(param_1 + 0x10);
    do {
      puVar10 = puVar6 + 1;
      (*(code *)**(undefined8 **)*puVar6)();
      puVar6 = puVar10;
    } while (puVar10 != (undefined8 *)(*(long *)(param_1 + 0x10) + (long)*(int *)(param_1 + 8) * 8))
    ;
  }
  uVar5 = *(uint *)(param_1 + 0x158);
  if (0 < (int)uVar5) {
    uVar2 = 0;
    do {
      uVar1 = uVar2;
      if (uVar5 <= uVar2) {
        uVar1 = 0;
      }
      *(undefined1 *)(*(long *)(param_1 + 0x160) + (ulong)uVar1) = 0xff;
      uVar5 = uVar2;
      if (*(uint *)(param_1 + 0x168) <= uVar2) {
        uVar5 = 0;
      }
      uVar2 = uVar2 + 1;
      *(undefined1 *)(*(long *)(param_1 + 0x170) + (ulong)uVar5) = 0xff;
      uVar5 = *(uint *)(param_1 + 0x158);
    } while ((int)uVar2 < (int)uVar5);
  }
  FUN_0388d320(param_1);
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x80) = 6;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined2 *)(param_1 + 0x98) = 0xffff;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined1 *)(param_1 + 0x9a) = 0xff;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  *(undefined2 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined8 *)(param_1 + 0x180) = 0;
  *(undefined8 *)(param_1 + 0x188) = 0;
  *(undefined8 *)(param_1 + 400) = 0;
  **(undefined2 **)(param_1 + 0xb8) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined2 *)(param_1 + 0x1a4) = 0;
  *(undefined1 *)(param_1 + 0x1a6) = 0;
  *(undefined4 *)(param_1 + 0x1bc) = 0;
  if (*(int *)(param_1 + 0x1a8) != 0) {
    lVar3 = *(long *)(param_1 + 0x1b0);
    iVar4 = 0;
    do {
      puVar6 = (undefined8 *)(lVar3 + (long)iVar4 * 0x30);
      *puVar6 = 0;
      *(undefined1 *)(puVar6 + 1) = 0;
      piVar7 = (int *)(puVar6 + 2);
      if (0 < *piVar7) {
        lVar8 = 0;
        lVar9 = lVar3 + (long)iVar4 * 0x30;
        puVar10 = (undefined8 *)(lVar9 + 0x20);
        puVar6 = (undefined8 *)*puVar10;
        do {
          puVar11 = *(undefined8 **)(*(long *)(lVar9 + 0x18) + lVar8 * 8);
          lVar8 = lVar8 + 1;
          *puVar11 = puVar6;
          *puVar10 = puVar11;
          puVar6 = puVar11;
        } while (lVar8 < *piVar7);
      }
      *piVar7 = 0;
      iVar4 = iVar4 + 1;
    } while (*(int *)(param_1 + 0x1a8) != iVar4);
  }
  *(undefined1 *)(param_1 + 0x1b8) = 0;
  return;
}

