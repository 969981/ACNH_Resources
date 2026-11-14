
void FUN_01cb0230(long *param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  *param_1 = (long)(PTR_DAT_04bc0f20 + 0x10);
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 8);
  puVar1 = PTR_DAT_04bc0ec8 + 0x10;
  *(undefined4 *)((long)param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  param_1[2] = (long)puVar1;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[5] = (long)(param_1 + 3);
  param_1[6] = 0x10;
  FUN_0018b070(param_1 + 2,*(undefined8 *)(param_2 + 0x28),0xffffffffffffffff);
  *(undefined2 *)(param_1 + 7) = *(undefined2 *)(param_2 + 0x38);
  FUN_0019d894(param_1 + 8,param_2 + 0x40);
  puVar1 = PTR_DAT_04bc0f08 + 0x10;
  param_1[0xf] = (long)puVar1;
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x80);
  uVar6 = *(undefined1 *)(param_2 + 0x81);
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  *(undefined1 *)((long)param_1 + 0x81) = uVar6;
  lVar3 = *(long *)(param_2 + 0x88);
  lVar4 = *(long *)(param_2 + 0x90);
  lVar10 = lVar4 - lVar3;
  if (lVar10 != 0) {
    if (-1 < lVar10) {
      lVar8 = FUN_00187df4(lVar10);
      lVar9 = 0;
      param_1[0x13] = lVar8 + (lVar10 >> 3) * 8;
      param_1[0x11] = lVar8;
      param_1[0x12] = lVar8;
      do {
        *(undefined8 *)(lVar8 + lVar9) = *(undefined8 *)(lVar3 + lVar9);
        lVar9 = lVar9 + 8;
      } while (lVar3 + lVar9 != lVar4);
      param_1[0x12] = lVar8 + lVar9;
      goto LAB_01cb0330;
    }
LAB_01cb0578:
    FUN_01c6892c();
LAB_01cb057c:
                    /* WARNING: Subroutine does not return */
    FUN_01c670e8();
  }
LAB_01cb0330:
  puVar7 = PTR_DAT_04bc0f00;
  param_1[0x14] = (long)puVar1;
  param_1[0xf] = (long)(puVar7 + 0x10);
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_2 + 0xa8);
  uVar6 = *(undefined1 *)(param_2 + 0xa9);
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined1 *)((long)param_1 + 0xa9) = uVar6;
  lVar3 = *(long *)(param_2 + 0xb0);
  lVar4 = *(long *)(param_2 + 0xb8);
  lVar10 = lVar4 - lVar3;
  if (lVar10 != 0) {
    if (lVar10 < 0) goto LAB_01cb0578;
    lVar8 = FUN_00187df4(lVar10);
    lVar9 = 0;
    param_1[0x18] = lVar8 + (lVar10 >> 3) * 8;
    param_1[0x16] = lVar8;
    param_1[0x17] = lVar8;
    do {
      *(undefined8 *)(lVar8 + lVar9) = *(undefined8 *)(lVar3 + lVar9);
      lVar9 = lVar9 + 8;
    } while (lVar3 + lVar9 != lVar4);
    param_1[0x17] = lVar8 + lVar9;
  }
  param_1[0x14] = (long)(puVar7 + 0x10);
  *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_2 + 200);
  *(undefined2 *)((long)param_1 + 0xcc) = *(undefined2 *)(param_2 + 0xcc);
  uVar5 = *(undefined4 *)(param_2 + 0xd0);
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1a) = uVar5;
  lVar3 = *(long *)(param_2 + 0xd8);
  lVar4 = *(long *)(param_2 + 0xe0);
  lVar10 = lVar4 - lVar3;
  if (lVar10 != 0) {
    if (0x666666666666666 < (ulong)((lVar10 >> 3) * -0x3333333333333333)) goto LAB_01cb057c;
    lVar8 = FUN_00187df4(lVar10);
    param_1[0x1b] = lVar8;
    param_1[0x1c] = lVar8;
    lVar9 = 0;
    puVar1 = PTR_DAT_04bc0ec8 + 0x10;
    param_1[0x1d] = lVar8 + (lVar10 >> 3) * 8;
    do {
      plVar2 = (long *)(lVar8 + lVar9);
      *plVar2 = (long)puVar1;
      *(undefined1 *)(plVar2 + 1) = 0;
      plVar2[3] = (long)(plVar2 + 1);
      plVar2[4] = 0x10;
      FUN_0018b070(plVar2,*(undefined8 *)(lVar3 + lVar9 + 0x18),0xffffffffffffffff);
      lVar9 = lVar9 + 0x28;
    } while (lVar3 + lVar9 != lVar4);
    param_1[0x1c] = lVar8 + lVar9;
  }
  FUN_01cb0590(param_1 + 0x1e,param_2 + 0xf0);
  param_1[0x21] = (long)&PTR_FUN_04a45638;
  *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_2 + 0x110);
  *(undefined2 *)((long)param_1 + 0x112) = *(undefined2 *)(param_2 + 0x112);
  puVar1 = PTR_DAT_04bc0f70;
  uVar6 = *(undefined1 *)(param_2 + 0x114);
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  *(undefined1 *)((long)param_1 + 0x114) = uVar6;
  param_1[0x21] = (long)(puVar1 + 0x10);
  lVar3 = *(long *)(param_2 + 0x118);
  lVar4 = *(long *)(param_2 + 0x120);
  lVar10 = lVar4 - lVar3;
  if (lVar10 != 0) {
    lVar10 = lVar10 >> 3;
    if (0x666666666666666 < (ulong)(lVar10 * -0x3333333333333333)) {
                    /* WARNING: Subroutine does not return */
      FUN_01c670e8(param_1 + 0x23);
    }
    lVar8 = FUN_00187df4();
    param_1[0x23] = lVar8;
    param_1[0x24] = lVar8;
    lVar9 = 0;
    puVar1 = PTR_DAT_04bc0ec8 + 0x10;
    param_1[0x25] = lVar8 + lVar10 * 8;
    do {
      plVar2 = (long *)(lVar8 + lVar9);
      *plVar2 = (long)puVar1;
      *(undefined1 *)(plVar2 + 1) = 0;
      plVar2[3] = (long)(plVar2 + 1);
      plVar2[4] = 0x10;
      FUN_0018b070(plVar2,*(undefined8 *)(lVar3 + lVar9 + 0x18),0xffffffffffffffff);
      lVar9 = lVar9 + 0x28;
    } while (lVar3 + lVar9 != lVar4);
    param_1[0x24] = lVar8 + lVar9;
  }
  return;
}

