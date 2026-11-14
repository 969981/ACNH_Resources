
void FUN_01cb0590(long *param_1,long *param_2)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  lVar3 = *param_2;
  lVar4 = param_2[1];
  lVar11 = lVar4 - lVar3;
  if (lVar11 != 0) {
    lVar11 = lVar11 >> 3;
    if (0x492492492492492 < (ulong)(lVar11 * 0x6db6db6db6db6db7)) {
      FUN_01c692c0(param_1);
      FUN_00185ac4();
      return;
    }
    lVar10 = FUN_00187df4();
    puVar9 = PTR_DAT_04bc0f68;
    puVar8 = PTR_DAT_04bc0f60;
    puVar7 = PTR_DAT_04bc0f58;
    lVar12 = 0;
    *param_1 = lVar10;
    param_1[1] = lVar10;
    param_1[2] = lVar10 + lVar11 * 8;
    puVar1 = PTR_DAT_04bc0f50 + 0x10;
    do {
      plVar2 = (long *)(lVar10 + lVar12);
      lVar11 = lVar3 + lVar12;
      *plVar2 = (long)(puVar7 + 0x10);
      lVar12 = lVar12 + 0x38;
      *(undefined1 *)(plVar2 + 1) = *(undefined1 *)(lVar11 + 8);
      uVar5 = *(undefined1 *)(lVar11 + 9);
      plVar2[2] = (long)(puVar9 + 0x10);
      *(undefined1 *)((long)plVar2 + 9) = uVar5;
      *(undefined1 *)(plVar2 + 3) = *(undefined1 *)(lVar11 + 0x18);
      *(undefined1 *)((long)plVar2 + 0x19) = *(undefined1 *)(lVar11 + 0x19);
      *(undefined1 *)((long)plVar2 + 0x1a) = *(undefined1 *)(lVar11 + 0x1a);
      *(undefined1 *)((long)plVar2 + 0x1b) = *(undefined1 *)(lVar11 + 0x1b);
      plVar2[4] = *(long *)(lVar11 + 0x20);
      *(undefined4 *)(plVar2 + 5) = *(undefined4 *)(lVar11 + 0x28);
      *(undefined4 *)((long)plVar2 + 0x2c) = *(undefined4 *)(lVar11 + 0x2c);
      *(undefined1 *)(plVar2 + 6) = *(undefined1 *)(lVar11 + 0x30);
      uVar6 = *(undefined2 *)(lVar11 + 0x32);
      plVar2[2] = (long)(puVar8 + 0x10);
      *plVar2 = (long)puVar1;
      *(undefined2 *)((long)plVar2 + 0x32) = uVar6;
    } while (lVar3 + lVar12 != lVar4);
    param_1[1] = lVar10 + lVar12;
  }
  return;
}

