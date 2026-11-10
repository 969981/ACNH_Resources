
void FUN_001fb450(long param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined4 uVar4;
  undefined *puVar5;
  long *plVar6;
  bool bVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  
  plVar8 = (long *)FUN_00187df4(0x88);
  puVar5 = PTR_DAT_04bc0ec8;
  *(undefined1 *)(plVar8 + 3) = *(undefined1 *)(param_2 + 8);
  plVar8[8] = (long)(puVar5 + 0x10);
  lVar10 = *(long *)(param_2 + 0x10);
  uVar4 = *(undefined4 *)(param_2 + 0x18);
  lVar1 = *(long *)(param_2 + 0x20);
  lVar3 = *(long *)(param_2 + 0x28);
  *plVar8 = 0;
  plVar8[4] = lVar10;
  *(undefined4 *)(plVar8 + 5) = uVar4;
  plVar8[2] = (long)&PTR_FUN_0483e618;
  plVar8[6] = lVar1;
  plVar8[7] = lVar3;
  *(undefined1 *)(plVar8 + 9) = 0;
  plVar8[0xb] = (long)(plVar8 + 9);
  plVar8[0xc] = 0x10;
  FUN_0018b070(plVar8 + 8,*(undefined8 *)(param_2 + 0x48),0xffffffffffffffff);
  plVar8[0x10] = 0;
  plVar11 = plVar8 + 0xf;
  *plVar11 = 0;
  plVar8[0xe] = (long)plVar11;
  plVar9 = *(long **)(param_2 + 0x60);
  plVar8[0xd] = *(long *)(param_2 + 0x58);
  while (plVar9 != (long *)(param_2 + 0x68)) {
    FUN_00202ed8(plVar8 + 0xe,plVar11,plVar9 + 4,plVar9 + 4);
    plVar6 = (long *)plVar9[1];
    plVar12 = plVar9;
    if ((long *)plVar9[1] == (long *)0x0) {
      do {
        plVar9 = (long *)plVar12[2];
        bVar7 = (long *)*plVar9 != plVar12;
        plVar12 = plVar9;
      } while (bVar7);
    }
    else {
      do {
        plVar9 = plVar6;
        plVar6 = (long *)*plVar9;
      } while ((long *)*plVar9 != (long *)0x0);
    }
  }
  puVar2 = *(undefined8 **)(param_1 + 8);
  lVar1 = *(long *)(param_1 + 0x10);
  *plVar8 = param_1;
  plVar8[1] = (long)puVar2;
  puVar5 = PTR_DAT_04bcc9e8;
  *puVar2 = plVar8;
  plVar8[2] = (long)(puVar5 + 0x10);
  *(long **)(param_1 + 8) = plVar8;
  *(long *)(param_1 + 0x10) = lVar1 + 1;
  return;
}

