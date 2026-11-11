
void FUN_004089c0(undefined8 *param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined2 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  
  puVar6 = PTR_DAT_04bc0ec8;
  param_1[4] = PTR_DAT_04bc0ec8 + 0x10;
  uVar11 = *(undefined8 *)(param_2 + 0x10);
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 8);
  param_1[2] = uVar11;
  *param_1 = &PTR_FUN_04851b40;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[7] = param_1 + 5;
  param_1[8] = 0x10;
  FUN_0018b070(param_1 + 4,*(undefined8 *)(param_2 + 0x38),0xffffffffffffffff);
  puVar8 = PTR_DAT_04bc0f08;
  param_1[0xb] = 0;
  param_1[9] = puVar8 + 0x10;
  uVar4 = *(undefined2 *)(param_2 + 0x50);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined2 *)(param_1 + 10) = uVar4;
  lVar2 = *(long *)(param_2 + 0x58);
  lVar3 = *(long *)(param_2 + 0x60);
  lVar5 = lVar3 - lVar2;
  if (lVar5 != 0) {
    if (-1 < lVar5) {
      lVar9 = FUN_00187df4(lVar5);
      lVar10 = 0;
      param_1[0xb] = lVar9;
      param_1[0xd] = lVar9 + (lVar5 >> 3) * 8;
      do {
        *(undefined8 *)(lVar9 + lVar10) = *(undefined8 *)(lVar2 + lVar10);
        lVar10 = lVar10 + 8;
      } while (lVar2 + lVar10 != lVar3);
      param_1[0xc] = lVar9 + lVar10;
      goto LAB_00408aa0;
    }
LAB_00408bf0:
    FUN_01c6892c();
LAB_00408bf4:
                    /* WARNING: Subroutine does not return */
    FUN_01c670e8();
  }
LAB_00408aa0:
  puVar7 = PTR_DAT_04bc0f00;
  param_1[0x10] = 0;
  param_1[0xe] = puVar8 + 0x10;
  param_1[9] = puVar7 + 0x10;
  uVar4 = *(undefined2 *)(param_2 + 0x78);
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined2 *)(param_1 + 0xf) = uVar4;
  lVar2 = *(long *)(param_2 + 0x80);
  lVar3 = *(long *)(param_2 + 0x88);
  lVar5 = lVar3 - lVar2;
  if (lVar5 != 0) {
    if (lVar5 < 0) goto LAB_00408bf0;
    lVar9 = FUN_00187df4(lVar5);
    lVar10 = 0;
    param_1[0x10] = lVar9;
    param_1[0x12] = lVar9 + (lVar5 >> 3) * 8;
    do {
      *(undefined8 *)(lVar9 + lVar10) = *(undefined8 *)(lVar2 + lVar10);
      lVar10 = lVar10 + 8;
    } while (lVar2 + lVar10 != lVar3);
    param_1[0x11] = lVar9 + lVar10;
  }
  uVar4 = *(undefined2 *)(param_2 + 0x98);
  param_1[0xe] = puVar7 + 0x10;
  *(undefined2 *)(param_1 + 0x13) = uVar4;
  FUN_0019d894(param_1 + 0x14,param_2 + 0xa0);
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  lVar2 = *(long *)(param_2 + 0xd8);
  lVar3 = *(long *)(param_2 + 0xe0);
  param_1[0x1d] = 0;
  lVar5 = lVar3 - lVar2;
  if (lVar5 != 0) {
    if (0x666666666666666 < (ulong)((lVar5 >> 3) * -0x3333333333333333)) goto LAB_00408bf4;
    lVar9 = FUN_00187df4(lVar5);
    lVar10 = 0;
    param_1[0x1d] = lVar9 + (lVar5 >> 3) * 8;
    param_1[0x1b] = lVar9;
    param_1[0x1c] = lVar9;
    do {
      plVar1 = (long *)(lVar9 + lVar10);
      *plVar1 = (long)(puVar6 + 0x10);
      *(undefined1 *)(plVar1 + 1) = 0;
      plVar1[3] = (long)(plVar1 + 1);
      plVar1[4] = 0x10;
      FUN_0018b070(plVar1,*(undefined8 *)(lVar2 + lVar10 + 0x18),0xffffffffffffffff);
      lVar10 = lVar10 + 0x28;
    } while (lVar2 + lVar10 != lVar3);
    param_1[0x1c] = lVar9 + lVar10;
  }
  param_1[0x1e] = *(undefined8 *)(param_2 + 0xf0);
  return;
}

