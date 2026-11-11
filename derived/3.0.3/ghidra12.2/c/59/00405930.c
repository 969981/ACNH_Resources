
void FUN_00405930(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  undefined2 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  
  uVar7 = *(undefined1 *)(param_2 + 8);
  uVar12 = *(undefined8 *)(param_2 + 0x10);
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  uVar6 = *(undefined4 *)(param_2 + 0x20);
  *(undefined1 *)(param_1 + 6) = 0;
  puVar1 = PTR_DAT_04bc0ec8;
  param_1[5] = PTR_DAT_04bc0ec8 + 0x10;
  *(undefined1 *)(param_1 + 1) = uVar7;
  param_1[2] = uVar12;
  param_1[3] = uVar4;
  *(undefined4 *)(param_1 + 4) = uVar6;
  param_1[8] = param_1 + 6;
  param_1[9] = 0x10;
  uVar12 = *(undefined8 *)(param_2 + 0x40);
  *param_1 = &PTR_FUN_04a427a8;
  FUN_0018b070(param_1 + 5,uVar12,0xffffffffffffffff);
  *(undefined2 *)(param_1 + 10) = *(undefined2 *)(param_2 + 0x50);
  FUN_0019d894(param_1 + 0xb,param_2 + 0x58);
  puVar10 = PTR_DAT_04bc0f08;
  param_1[0x14] = 0;
  param_1[0x12] = puVar10 + 0x10;
  uVar8 = *(undefined2 *)(param_2 + 0x98);
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(undefined2 *)(param_1 + 0x13) = uVar8;
  lVar3 = *(long *)(param_2 + 0xa0);
  lVar5 = *(long *)(param_2 + 0xa8);
  lVar14 = lVar5 - lVar3;
  if (lVar14 != 0) {
    if (-1 < lVar14) {
      lVar11 = FUN_00187df4(lVar14);
      lVar13 = 0;
      param_1[0x14] = lVar11;
      param_1[0x16] = lVar11 + (lVar14 >> 3) * 8;
      do {
        *(undefined8 *)(lVar11 + lVar13) = *(undefined8 *)(lVar3 + lVar13);
        lVar13 = lVar13 + 8;
      } while (lVar3 + lVar13 != lVar5);
      param_1[0x15] = lVar11 + lVar13;
      goto LAB_00405a24;
    }
LAB_00405c6c:
    FUN_01c6892c();
LAB_00405c70:
                    /* WARNING: Subroutine does not return */
    FUN_01c670e8(param_1 + 0x22);
  }
LAB_00405a24:
  puVar9 = PTR_DAT_04bc0f00;
  param_1[0x19] = 0;
  param_1[0x17] = puVar10 + 0x10;
  param_1[0x12] = puVar9 + 0x10;
  uVar8 = *(undefined2 *)(param_2 + 0xc0);
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined2 *)(param_1 + 0x18) = uVar8;
  lVar3 = *(long *)(param_2 + 200);
  lVar5 = *(long *)(param_2 + 0xd0);
  lVar14 = lVar5 - lVar3;
  if (lVar14 != 0) {
    if (lVar14 < 0) goto LAB_00405c6c;
    lVar11 = FUN_00187df4(lVar14);
    lVar13 = 0;
    param_1[0x19] = lVar11;
    param_1[0x1b] = lVar11 + (lVar14 >> 3) * 8;
    do {
      *(undefined8 *)(lVar11 + lVar13) = *(undefined8 *)(lVar3 + lVar13);
      lVar13 = lVar13 + 8;
    } while (lVar3 + lVar13 != lVar5);
    param_1[0x1a] = lVar11 + lVar13;
  }
  param_1[0x17] = puVar9 + 0x10;
  FUN_0018652c(param_1 + 0x1c,param_2 + 0xe0);
  FUN_0018652c(param_1 + 0x1d,param_2 + 0xe8);
  *(undefined2 *)(param_1 + 0x1e) = *(undefined2 *)(param_2 + 0xf0);
  *(undefined1 *)((long)param_1 + 0xf2) = *(undefined1 *)(param_2 + 0xf2);
  *(undefined8 *)((long)param_1 + 0xf4) = *(undefined8 *)(param_2 + 0xf4);
  *(undefined4 *)((long)param_1 + 0xfc) = *(undefined4 *)(param_2 + 0xfc);
  FUN_0018652c(param_1 + 0x20,param_2 + 0x100);
  FUN_0018652c(param_1 + 0x21,param_2 + 0x108);
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  lVar3 = *(long *)(param_2 + 0x110);
  lVar5 = *(long *)(param_2 + 0x118);
  lVar14 = lVar5 - lVar3;
  if (lVar14 != 0) {
    lVar14 = lVar14 >> 3;
    if (0x666666666666666 < (ulong)(lVar14 * -0x3333333333333333)) goto LAB_00405c70;
    lVar11 = FUN_00187df4();
    lVar13 = 0;
    param_1[0x24] = lVar11 + lVar14 * 8;
    param_1[0x22] = lVar11;
    param_1[0x23] = lVar11;
    do {
      plVar2 = (long *)(lVar11 + lVar13);
      *plVar2 = (long)(puVar1 + 0x10);
      *(undefined1 *)(plVar2 + 1) = 0;
      plVar2[3] = (long)(plVar2 + 1);
      plVar2[4] = 0x10;
      FUN_0018b070(plVar2,*(undefined8 *)(lVar3 + lVar13 + 0x18),0xffffffffffffffff);
      lVar13 = lVar13 + 0x28;
    } while (lVar3 + lVar13 != lVar5);
    param_1[0x23] = lVar11 + lVar13;
  }
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  lVar3 = *(long *)(param_2 + 0x128);
  lVar5 = *(long *)(param_2 + 0x130);
  lVar14 = lVar5 - lVar3;
  if (lVar14 != 0) {
    lVar14 = lVar14 >> 3;
    if (0x492492492492492 < (ulong)(lVar14 * 0x6db6db6db6db6db7)) {
      FUN_00405918(param_1 + 0x25);
                    /* WARNING: Subroutine does not return */
      FUN_01c67100("vector");
    }
    lVar11 = FUN_00187df4();
    puVar10 = PTR_DAT_04bd26e0;
    param_1[0x25] = lVar11;
    lVar13 = 0;
    param_1[0x27] = lVar11 + lVar14 * 8;
    puVar1 = PTR_DAT_04bd28a0 + 0x10;
    do {
      lVar14 = lVar3 + lVar13;
      plVar2 = (long *)(lVar11 + lVar13);
      uVar8 = *(undefined2 *)(lVar14 + 8);
      lVar13 = lVar13 + 0x38;
      plVar2[2] = (long)(puVar10 + 0x10);
      *plVar2 = (long)puVar1;
      *(undefined2 *)(plVar2 + 1) = uVar8;
      *(undefined1 *)(plVar2 + 3) = *(undefined1 *)(lVar14 + 0x18);
      plVar2[4] = *(long *)(lVar14 + 0x20);
      uVar6 = *(undefined4 *)(lVar14 + 0x28);
      plVar2[6] = *(long *)(lVar14 + 0x30);
      *(undefined4 *)(plVar2 + 5) = uVar6;
    } while (lVar3 + lVar13 != lVar5);
    param_1[0x26] = lVar11 + lVar13;
  }
  return;
}

