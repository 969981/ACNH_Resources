
void FUN_0040c210(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *plVar12;
  long lVar13;
  
  puVar6 = PTR_DAT_04bcc1b8;
  if ((*(long *)PTR_DAT_04bcc1b8 == 0xffffffff) &&
     (puVar7 = (undefined8 *)FUN_0018adb4(0x1fffffffe8), puVar7 != (undefined8 *)0x0)) {
    lVar13 = 0x1fffffffe0;
    *puVar7 = 0xffffffff;
    puVar2 = PTR_DAT_04bd2990 + 0x10;
    plVar12 = puVar7 + 1;
    do {
      FUN_001f6fd8(plVar12,1);
      lVar13 = lVar13 + -0x20;
      *plVar12 = (long)puVar2;
      plVar12 = plVar12 + 4;
    } while (lVar13 != 0);
  }
  lVar13 = FUN_00187df4(*(long *)puVar6 << 5);
  uVar8 = *(ulong *)puVar6;
  *(long *)(param_1 + 0x10) = lVar13;
  if (uVar8 != 0) {
    if (lVar13 == 0) {
      uVar9 = 1;
      do {
        bVar1 = uVar9 < uVar8;
        uVar9 = (ulong)((int)uVar9 + 1);
      } while (bVar1);
    }
    else {
      puVar2 = PTR_DAT_04bcc928 + 0x10;
      puVar3 = PTR_DAT_04bd2990 + 0x10;
      uVar9 = 1;
      uVar11 = 0;
      do {
        uVar10 = uVar9;
        if (*(long *)(param_1 + 0x10) != 0) {
          plVar12 = (long *)(*(long *)(param_1 + 0x10) + uVar11 * 0x20);
          *plVar12 = (long)puVar2;
          uVar5 = *(undefined1 *)(param_1 + 0x50);
          lVar13 = *(long *)(param_1 + 0x40);
          lVar4 = *(long *)(param_1 + 0x48);
          *plVar12 = (long)puVar3;
          *(undefined1 *)(plVar12 + 3) = uVar5;
          plVar12[1] = lVar13;
          plVar12[2] = lVar4;
          uVar8 = *(ulong *)puVar6;
        }
        uVar9 = (ulong)((int)uVar10 + 1);
        uVar11 = uVar10;
      } while (uVar10 < uVar8);
    }
  }
  return;
}

