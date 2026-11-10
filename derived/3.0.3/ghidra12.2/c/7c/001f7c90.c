
void FUN_001f7c90(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  undefined1 uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  
  puVar7 = PTR_DAT_04bcc1b8;
  if ((*(long *)PTR_DAT_04bcc1b8 == 0xffffffff) &&
     (puVar8 = (undefined8 *)FUN_0018adb4(0x1fffffffe8), puVar2 = PTR_DAT_04bcc950,
     puVar8 != (undefined8 *)0x0)) {
    *puVar8 = 0xffffffff;
    lVar9 = 0;
    while( true ) {
      *(undefined1 *)((long)puVar8 + lVar9 + 0x20) = 1;
      *(undefined1 *)((long)puVar8 + lVar9 + 0x14) = 0;
      *(undefined4 *)((long)puVar8 + lVar9 + 0x10) = 0;
      *(undefined8 *)((long)puVar8 + lVar9 + 0x18) = 0;
      *(undefined **)((long)puVar8 + lVar9 + 8) = puVar2 + 0x10;
      if (lVar9 == 0x1fffffffc0) break;
      *(undefined1 *)((long)puVar8 + lVar9 + 0x40) = 1;
      *(undefined1 *)((long)puVar8 + lVar9 + 0x34) = 0;
      *(undefined4 *)((long)puVar8 + lVar9 + 0x30) = 0;
      *(undefined8 *)((long)puVar8 + lVar9 + 0x38) = 0;
      *(undefined **)((long)puVar8 + lVar9 + 0x28) = puVar2 + 0x10;
      lVar9 = lVar9 + 0x40;
    }
  }
  lVar9 = FUN_00187df4(*(long *)puVar7 << 5);
  uVar10 = *(ulong *)puVar7;
  *(long *)(param_1 + 0x10) = lVar9;
  if (uVar10 != 0) {
    if (lVar9 == 0) {
      uVar11 = 1;
      do {
        bVar1 = uVar11 < uVar10;
        uVar11 = (ulong)((int)uVar11 + 1);
      } while (bVar1);
    }
    else {
      puVar2 = PTR_DAT_04bcc928 + 0x10;
      puVar3 = PTR_DAT_04bcc950 + 0x10;
      uVar11 = 1;
      uVar13 = 0;
      do {
        uVar12 = uVar11;
        if (*(long *)(param_1 + 0x10) != 0) {
          plVar4 = (long *)(*(long *)(param_1 + 0x10) + uVar13 * 0x20);
          *plVar4 = (long)puVar2;
          uVar6 = *(undefined1 *)(param_1 + 0x50);
          lVar9 = *(long *)(param_1 + 0x40);
          lVar5 = *(long *)(param_1 + 0x48);
          *plVar4 = (long)puVar3;
          *(undefined1 *)(plVar4 + 3) = uVar6;
          plVar4[1] = lVar9;
          plVar4[2] = lVar5;
          uVar10 = *(ulong *)puVar7;
        }
        uVar11 = (ulong)((int)uVar12 + 1);
        uVar13 = uVar12;
      } while (uVar12 < uVar10);
    }
  }
  return;
}

