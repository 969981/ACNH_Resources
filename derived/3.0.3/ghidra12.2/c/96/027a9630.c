
void FUN_027a9630(long param_1)

{
  undefined2 *puVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined2 uVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined4 *puVar11;
  ulong uVar12;
  uint uVar13;
  
  puVar9 = PTR_DAT_04bb37e0;
  uVar13 = 0;
  do {
    puVar1 = (undefined2 *)(param_1 + ((long)((ulong)uVar13 << 0x20) >> 0x1d));
    uVar10 = FUN_0277e788(puVar1);
    if ((uVar10 & 1) == 0) {
      lVar2 = param_1 + (long)(int)uVar13 * 8;
      *puVar1 = *(undefined2 *)puVar9;
      *(undefined *)(lVar2 + 2) = puVar9[2];
      *(undefined *)(lVar2 + 3) = puVar9[3];
      *(undefined4 *)(lVar2 + 4) = *(undefined4 *)(puVar9 + 4);
    }
    uVar13 = uVar13 + 1;
  } while (uVar13 != 0x50);
  uVar8 = *(undefined2 *)puVar9;
  uVar10 = 0;
  uVar6 = puVar9[2];
  uVar7 = puVar9[3];
  uVar5 = *(undefined4 *)(puVar9 + 4);
  do {
    uVar12 = 0x4f;
    puVar11 = (undefined4 *)(param_1 + 0x27c);
    do {
      if (*(short *)(puVar11 + -3) == -2) {
        uVar3 = puVar11[-1];
        uVar4 = *puVar11;
        *(undefined2 *)(puVar11 + -1) = uVar8;
        *(undefined1 *)((long)puVar11 + -2) = uVar6;
        *(undefined1 *)((long)puVar11 + -1) = uVar7;
        *puVar11 = uVar5;
        puVar11[-3] = uVar3;
        puVar11[-2] = uVar4;
      }
      uVar12 = uVar12 - 1;
      puVar11 = puVar11 + -2;
    } while (uVar10 < uVar12);
    uVar10 = uVar10 + 1;
  } while (uVar10 != 0x4f);
  return;
}

