
void FUN_00408e20(long *param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  puVar8 = PTR_DAT_04bc0ec8;
  param_1[4] = (long)(PTR_DAT_04bc0ec8 + 0x10);
  lVar12 = *(long *)(param_2 + 0x10);
  puVar1 = PTR_DAT_04bd2918 + 0x10;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 8);
  param_1[2] = lVar12;
  *param_1 = (long)puVar1;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[7] = (long)(param_1 + 5);
  param_1[8] = 0x10;
  FUN_0018b070(param_1 + 4,*(undefined8 *)(param_2 + 0x38),0xffffffffffffffff);
  puVar1 = PTR_DAT_04bc0f08;
  param_1[0xb] = 0;
  param_1[9] = (long)(puVar1 + 0x10);
  uVar6 = *(undefined2 *)(param_2 + 0x50);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined2 *)(param_1 + 10) = uVar6;
  lVar12 = *(long *)(param_2 + 0x58);
  lVar3 = *(long *)(param_2 + 0x60);
  lVar7 = lVar3 - lVar12;
  if (lVar7 != 0) {
    if (-1 < lVar7) {
      lVar10 = FUN_00187df4(lVar7);
      lVar11 = 0;
      param_1[0xb] = lVar10;
      param_1[0xd] = lVar10 + (lVar7 >> 3) * 8;
      do {
        *(undefined8 *)(lVar10 + lVar11) = *(undefined8 *)(lVar12 + lVar11);
        lVar11 = lVar11 + 8;
      } while (lVar12 + lVar11 != lVar3);
      param_1[0xc] = lVar10 + lVar11;
      goto LAB_00408f00;
    }
LAB_004090ac:
    FUN_01c6892c();
LAB_004090b0:
                    /* WARNING: Subroutine does not return */
    FUN_01c670e8();
  }
LAB_00408f00:
  puVar9 = PTR_DAT_04bc0f00;
  param_1[0x10] = 0;
  param_1[0xe] = (long)(puVar1 + 0x10);
  param_1[9] = (long)(puVar9 + 0x10);
  uVar6 = *(undefined2 *)(param_2 + 0x78);
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(undefined2 *)(param_1 + 0xf) = uVar6;
  lVar12 = *(long *)(param_2 + 0x80);
  lVar3 = *(long *)(param_2 + 0x88);
  lVar7 = lVar3 - lVar12;
  if (lVar7 != 0) {
    if (lVar7 < 0) goto LAB_004090ac;
    lVar10 = FUN_00187df4(lVar7);
    lVar11 = 0;
    param_1[0x10] = lVar10;
    param_1[0x12] = lVar10 + (lVar7 >> 3) * 8;
    do {
      *(undefined8 *)(lVar10 + lVar11) = *(undefined8 *)(lVar12 + lVar11);
      lVar11 = lVar11 + 8;
    } while (lVar12 + lVar11 != lVar3);
    param_1[0x11] = lVar10 + lVar11;
  }
  uVar6 = *(undefined2 *)(param_2 + 0x98);
  param_1[0xe] = (long)(puVar9 + 0x10);
  *(undefined2 *)(param_1 + 0x13) = uVar6;
  FUN_0019d894(param_1 + 0x14,param_2 + 0xa0);
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  lVar12 = *(long *)(param_2 + 0xd8);
  lVar3 = *(long *)(param_2 + 0xe0);
  param_1[0x1d] = 0;
  lVar7 = lVar3 - lVar12;
  if (lVar7 != 0) {
    if (0x666666666666666 < (ulong)((lVar7 >> 3) * -0x3333333333333333)) goto LAB_004090b0;
    lVar10 = FUN_00187df4(lVar7);
    lVar11 = 0;
    param_1[0x1d] = lVar10 + (lVar7 >> 3) * 8;
    param_1[0x1b] = lVar10;
    param_1[0x1c] = lVar10;
    do {
      plVar2 = (long *)(lVar10 + lVar11);
      *plVar2 = (long)(puVar8 + 0x10);
      *(undefined1 *)(plVar2 + 1) = 0;
      plVar2[3] = (long)(plVar2 + 1);
      plVar2[4] = 0x10;
      FUN_0018b070(plVar2,*(undefined8 *)(lVar12 + lVar11 + 0x18),0xffffffffffffffff);
      lVar11 = lVar11 + 0x28;
    } while (lVar12 + lVar11 != lVar3);
    param_1[0x1c] = lVar10 + lVar11;
  }
  uVar4 = *(undefined4 *)(param_2 + 0xf8);
  param_1[0x1e] = *(long *)(param_2 + 0xf0);
  uVar6 = *(undefined2 *)(param_2 + 0xfc);
  uVar5 = *(undefined1 *)(param_2 + 0xfe);
  *(undefined4 *)(param_1 + 0x1f) = uVar4;
  *(undefined2 *)((long)param_1 + 0xfc) = uVar6;
  *(undefined1 *)((long)param_1 + 0xfe) = uVar5;
  FUN_004090c0(param_1 + 0x20,param_2 + 0x100);
  puVar8 = PTR_DAT_04bc0f38;
  puVar1 = PTR_DAT_04bd2928 + 0x10;
  lVar12 = *(long *)(param_2 + 0x1f8);
  *(undefined1 *)(param_1 + 0x3e) = *(undefined1 *)(param_2 + 0x1f0);
  param_1[0x3f] = lVar12;
  param_1[0x20] = (long)puVar1;
  *(undefined2 *)(param_1 + 0x40) = *(undefined2 *)(param_2 + 0x200);
  param_1[0x3d] = (long)(puVar8 + 0x10);
  return;
}

