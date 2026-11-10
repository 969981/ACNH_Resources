
void FUN_002e78f0(long *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  long lVar7;
  long *plVar8;
  bool bVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  
  puVar1 = PTR_DAT_04bce980;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  lVar2 = *(long *)(param_2 + 0x10);
  lVar3 = *(long *)(param_2 + 0x18);
  *param_1 = (long)(puVar1 + 0x10);
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 8);
  puVar1 = PTR_DAT_04bc0ec8;
  lVar7 = lVar3 - lVar2;
  if (lVar7 != 0) {
    if (0x666666666666666 < (ulong)((lVar7 >> 3) * -0x3333333333333333)) {
                    /* WARNING: Subroutine does not return */
      FUN_01c670e8();
    }
    lVar10 = FUN_00187df4(lVar7);
    lVar15 = 0;
    param_1[4] = lVar10 + (lVar7 >> 3) * 8;
    param_1[2] = lVar10;
    param_1[3] = lVar10;
    do {
      plVar13 = (long *)(lVar10 + lVar15);
      *plVar13 = (long)(puVar1 + 0x10);
      *(undefined1 *)(plVar13 + 1) = 0;
      plVar13[3] = (long)(plVar13 + 1);
      plVar13[4] = 0x10;
      FUN_0018b070(plVar13,*(undefined8 *)(lVar2 + lVar15 + 0x18),0xffffffffffffffff);
      lVar15 = lVar15 + 0x28;
    } while (lVar2 + lVar15 != lVar3);
    param_1[3] = lVar10 + lVar15;
  }
  puVar1 = puVar1 + 0x10;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[8] = (long)(param_1 + 6);
  param_1[9] = 0x10;
  uVar11 = *(undefined8 *)(param_2 + 0x40);
  param_1[5] = (long)puVar1;
  FUN_0018b070(param_1 + 5,uVar11,0xffffffffffffffff);
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xd] = (long)(param_1 + 0xb);
  param_1[0xe] = 0x10;
  uVar11 = *(undefined8 *)(param_2 + 0x68);
  param_1[10] = (long)puVar1;
  FUN_0018b070(param_1 + 10,uVar11,0xffffffffffffffff);
  *(undefined1 *)(param_1 + 0x10) = 0;
  param_1[0x12] = (long)(param_1 + 0x10);
  param_1[0x13] = 0x10;
  uVar11 = *(undefined8 *)(param_2 + 0x90);
  param_1[0xf] = (long)puVar1;
  FUN_0018b070(param_1 + 0xf,uVar11,0xffffffffffffffff);
  *(undefined1 *)(param_1 + 0x15) = 0;
  param_1[0x17] = (long)(param_1 + 0x15);
  param_1[0x18] = 0x10;
  uVar11 = *(undefined8 *)(param_2 + 0xb8);
  param_1[0x14] = (long)puVar1;
  FUN_0018b070(param_1 + 0x14,uVar11,0xffffffffffffffff);
  uVar6 = *(undefined2 *)(param_2 + 200);
  plVar12 = param_1 + 0x1e;
  *plVar12 = 0;
  param_1[0x1d] = (long)plVar12;
  *(undefined2 *)(param_1 + 0x19) = uVar6;
  param_1[0x1f] = 0;
  uVar5 = *(undefined1 *)(param_2 + 0xca);
  plVar13 = *(long **)(param_2 + 0xe8);
  param_1[0x1b] = (long)&PTR_LAB_04849670;
  uVar4 = *(undefined4 *)(param_2 + 0xcc);
  *(undefined1 *)((long)param_1 + 0xca) = uVar5;
  uVar6 = *(undefined2 *)(param_2 + 0xd0);
  *(undefined4 *)((long)param_1 + 0xcc) = uVar4;
  *(undefined2 *)(param_1 + 0x1a) = uVar6;
  *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(param_2 + 0xe0);
  while (plVar13 != (long *)(param_2 + 0xf0)) {
    FUN_00202ed8(param_1 + 0x1d,plVar12,plVar13 + 4,plVar13 + 4);
    plVar8 = (long *)plVar13[1];
    plVar14 = plVar13;
    if ((long *)plVar13[1] == (long *)0x0) {
      do {
        plVar13 = (long *)plVar14[2];
        bVar9 = (long *)*plVar13 != plVar14;
        plVar14 = plVar13;
      } while (bVar9);
    }
    else {
      do {
        plVar13 = plVar8;
        plVar8 = (long *)*plVar13;
      } while ((long *)*plVar13 != (long *)0x0);
    }
  }
  param_1[0x1b] = (long)(PTR_DAT_04bce920 + 0x10);
  uVar6 = *(undefined2 *)(param_2 + 0x100);
  param_1[0x21] = (long)puVar1;
  *(undefined2 *)(param_1 + 0x20) = uVar6;
  uVar4 = *(undefined4 *)(param_2 + 0x104);
  *(undefined1 *)(param_1 + 0x22) = 0;
  param_1[0x24] = (long)(param_1 + 0x22);
  param_1[0x25] = 0x10;
  uVar11 = *(undefined8 *)(param_2 + 0x120);
  *(undefined4 *)((long)param_1 + 0x104) = uVar4;
  FUN_0018b070(param_1 + 0x21,uVar11,0xffffffffffffffff);
  *(undefined1 *)(param_1 + 0x27) = *(undefined1 *)(param_2 + 0x138);
  *(undefined4 *)((long)param_1 + 0x13c) = *(undefined4 *)(param_2 + 0x13c);
  puVar1 = PTR_DAT_04bc0fe8;
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x140);
  param_1[0x26] = (long)(puVar1 + 0x10);
  return;
}

