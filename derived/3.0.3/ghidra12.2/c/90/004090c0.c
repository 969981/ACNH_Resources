
void FUN_004090c0(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  
  puVar9 = PTR_DAT_04bc0ec8;
  puVar1 = PTR_DAT_04bd2920 + 0x10;
  puVar2 = PTR_DAT_04bc0ec8 + 0x10;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 8);
  *param_1 = (long)puVar1;
  *(undefined4 *)((long)param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  param_1[2] = (long)puVar2;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[5] = (long)(param_1 + 3);
  param_1[6] = 0x10;
  FUN_0018b070(param_1 + 2,*(undefined8 *)(param_2 + 0x28),0xffffffffffffffff);
  puVar1 = PTR_DAT_04bc0f08;
  param_1[9] = 0;
  param_1[7] = (long)(puVar1 + 0x10);
  uVar7 = *(undefined2 *)(param_2 + 0x40);
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined2 *)(param_1 + 8) = uVar7;
  lVar4 = *(long *)(param_2 + 0x48);
  lVar5 = *(long *)(param_2 + 0x50);
  lVar8 = lVar5 - lVar4;
  if (lVar8 != 0) {
    if (-1 < lVar8) {
      lVar10 = FUN_00187df4(lVar8);
      lVar11 = 0;
      param_1[9] = lVar10;
      param_1[0xb] = lVar10 + (lVar8 >> 3) * 8;
      do {
        *(undefined8 *)(lVar10 + lVar11) = *(undefined8 *)(lVar4 + lVar11);
        lVar11 = lVar11 + 8;
      } while (lVar4 + lVar11 != lVar5);
      param_1[10] = lVar10 + lVar11;
      goto LAB_004091a0;
    }
LAB_00409300:
    FUN_01c6892c();
LAB_00409304:
                    /* WARNING: Subroutine does not return */
    FUN_01c670e8();
  }
LAB_004091a0:
  puVar2 = PTR_DAT_04bc0f00;
  param_1[0xe] = 0;
  param_1[0xc] = (long)(puVar1 + 0x10);
  param_1[7] = (long)(puVar2 + 0x10);
  uVar7 = *(undefined2 *)(param_2 + 0x68);
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0xd) = uVar7;
  lVar4 = *(long *)(param_2 + 0x70);
  lVar5 = *(long *)(param_2 + 0x78);
  lVar8 = lVar5 - lVar4;
  if (lVar8 != 0) {
    if (lVar8 < 0) goto LAB_00409300;
    lVar10 = FUN_00187df4(lVar8);
    lVar11 = 0;
    param_1[0xe] = lVar10;
    param_1[0x10] = lVar10 + (lVar8 >> 3) * 8;
    do {
      *(undefined8 *)(lVar10 + lVar11) = *(undefined8 *)(lVar4 + lVar11);
      lVar11 = lVar11 + 8;
    } while (lVar4 + lVar11 != lVar5);
    param_1[0xf] = lVar10 + lVar11;
  }
  uVar7 = *(undefined2 *)(param_2 + 0x88);
  param_1[0xc] = (long)(puVar2 + 0x10);
  *(undefined2 *)(param_1 + 0x11) = uVar7;
  FUN_0019d894(param_1 + 0x12,param_2 + 0x90);
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  lVar4 = *(long *)(param_2 + 200);
  lVar5 = *(long *)(param_2 + 0xd0);
  param_1[0x1b] = 0;
  lVar8 = lVar5 - lVar4;
  if (lVar8 != 0) {
    if (0x666666666666666 < (ulong)((lVar8 >> 3) * -0x3333333333333333)) goto LAB_00409304;
    lVar10 = FUN_00187df4(lVar8);
    lVar11 = 0;
    param_1[0x1b] = lVar10 + (lVar8 >> 3) * 8;
    param_1[0x19] = lVar10;
    param_1[0x1a] = lVar10;
    do {
      plVar3 = (long *)(lVar10 + lVar11);
      *plVar3 = (long)(puVar9 + 0x10);
      *(undefined1 *)(plVar3 + 1) = 0;
      plVar3[3] = (long)(plVar3 + 1);
      plVar3[4] = 0x10;
      FUN_0018b070(plVar3,*(undefined8 *)(lVar4 + lVar11 + 0x18),0xffffffffffffffff);
      lVar11 = lVar11 + 0x28;
    } while (lVar4 + lVar11 != lVar5);
    param_1[0x1a] = lVar10 + lVar11;
  }
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0xe0);
  uVar6 = *(undefined1 *)(param_2 + 0xe6);
  *(undefined2 *)((long)param_1 + 0xe4) = *(undefined2 *)(param_2 + 0xe4);
  *(undefined1 *)((long)param_1 + 0xe6) = uVar6;
  return;
}

