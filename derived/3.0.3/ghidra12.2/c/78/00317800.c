
void FUN_00317800(long *param_1,long param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined *puVar3;
  long *plVar4;
  bool bVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  
  plVar6 = (long *)FUN_00187df4(0x88);
  puVar3 = PTR_DAT_04bc0ec8;
  *(undefined1 *)(plVar6 + 3) = *(undefined1 *)(param_2 + 8);
  plVar6[8] = (long)(puVar3 + 0x10);
  lVar8 = *(long *)(param_2 + 0x10);
  uVar2 = *(undefined4 *)(param_2 + 0x18);
  lVar9 = *(long *)(param_2 + 0x20);
  lVar1 = *(long *)(param_2 + 0x28);
  *plVar6 = 0;
  plVar6[4] = lVar8;
  *(undefined4 *)(plVar6 + 5) = uVar2;
  plVar6[2] = (long)&PTR_FUN_0483e618;
  plVar6[6] = lVar9;
  plVar6[7] = lVar1;
  *(undefined1 *)(plVar6 + 9) = 0;
  plVar6[0xb] = (long)(plVar6 + 9);
  plVar6[0xc] = 0x10;
  FUN_0018b070(plVar6 + 8,*(undefined8 *)(param_2 + 0x48),0xffffffffffffffff);
  plVar6[0x10] = 0;
  plVar10 = plVar6 + 0xf;
  *plVar10 = 0;
  plVar6[0xe] = (long)plVar10;
  plVar7 = *(long **)(param_2 + 0x60);
  plVar6[0xd] = *(long *)(param_2 + 0x58);
  while (plVar7 != (long *)(param_2 + 0x68)) {
    FUN_00202ed8(plVar6 + 0xe,plVar10,plVar7 + 4,plVar7 + 4);
    plVar4 = (long *)plVar7[1];
    plVar11 = plVar7;
    if ((long *)plVar7[1] == (long *)0x0) {
      do {
        plVar7 = (long *)plVar11[2];
        bVar5 = (long *)*plVar7 != plVar11;
        plVar11 = plVar7;
      } while (bVar5);
    }
    else {
      do {
        plVar7 = plVar4;
        plVar4 = (long *)*plVar7;
      } while ((long *)*plVar7 != (long *)0x0);
    }
  }
  lVar9 = *param_1;
  *plVar6 = lVar9;
  plVar6[1] = (long)param_1;
  *(long **)(lVar9 + 8) = plVar6;
  *param_1 = (long)plVar6;
  plVar6[2] = (long)&PTR_FUN_0483e5c8;
  param_1[2] = param_1[2] + 1;
  return;
}

