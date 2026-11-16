
void FUN_027cdae0(long param_1)

{
  short *psVar1;
  long lVar2;
  undefined2 *puVar3;
  undefined4 uVar4;
  undefined2 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  uVar8 = FUN_027cd808();
  if (-1 < (int)uVar8) {
    do {
      uVar11 = (ulong)uVar8;
      uVar9 = uVar8;
      if (uVar8 < 0x24) {
        uVar9 = 0x23;
      }
      lVar10 = (uVar11 + (ulong)uVar8 * 2) * 4;
      lVar12 = lVar10 + 0x20;
      do {
        lVar10 = lVar10 + 0xc;
        if (uVar9 == uVar11) {
          return;
        }
        psVar1 = (short *)(param_1 + lVar12);
        uVar11 = uVar11 + 1;
        lVar12 = lVar12 + 0xc;
      } while (*psVar1 == -2);
      lVar12 = 0;
      do {
        lVar2 = param_1 + lVar10;
        uVar9 = uVar8 + (int)lVar12;
        uVar6 = *(undefined1 *)(lVar2 + 0x1e);
        puVar3 = (undefined2 *)(param_1 + 0x14) + (ulong)uVar9 * 6;
        if (0x23 < uVar9) {
          puVar3 = (undefined2 *)(param_1 + 0x14);
        }
        uVar5 = *(undefined2 *)(lVar2 + 0x1c);
        uVar7 = *(undefined1 *)(lVar2 + 0x1f);
        *puVar3 = *(undefined2 *)(lVar2 + 0x14);
        *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(lVar2 + 0x16);
        *(undefined1 *)((long)puVar3 + 3) = *(undefined1 *)(lVar2 + 0x17);
        uVar4 = *(undefined4 *)(lVar2 + 0x18);
        puVar3[4] = uVar5;
        *(undefined4 *)(puVar3 + 2) = uVar4;
        *(undefined1 *)(puVar3 + 5) = uVar6;
        *(undefined1 *)((long)puVar3 + 0xb) = uVar7;
        *(undefined4 *)(lVar2 + 0x14) = 0xfffe;
        *(undefined8 *)(lVar2 + 0x18) = 0;
        FUN_0277d4ac();
        lVar12 = lVar12 + 1;
        lVar10 = lVar10 + 0xc;
        *(undefined4 *)(lVar2 + 0x1c) = 0xffff;
      } while ((uVar11 + lVar12) - 1 < 0x23);
      uVar8 = FUN_027cd808(param_1);
    } while (-1 < (int)uVar8);
  }
  return;
}

