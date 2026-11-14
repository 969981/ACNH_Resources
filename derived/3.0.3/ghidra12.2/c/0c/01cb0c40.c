
void FUN_01cb0c40(long *param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 uStack_41;
  
  *param_1 = (long)(PTR_DAT_04bc0fd8 + 0x10);
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 8);
  uVar6 = *(undefined1 *)(param_2 + 9);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)((long)param_1 + 9) = uVar6;
  lVar3 = *(long *)(param_2 + 0x10);
  lVar4 = *(long *)(param_2 + 0x18);
  lVar7 = lVar4 - lVar3;
  if (lVar7 != 0) {
    if (-1 < lVar7) {
      lVar8 = FUN_00187df4(lVar7);
      lVar9 = 0;
      param_1[4] = lVar8 + (lVar7 >> 3) * 8;
      param_1[2] = lVar8;
      param_1[3] = lVar8;
      do {
        *(undefined8 *)(lVar8 + lVar9) = *(undefined8 *)(lVar3 + lVar9);
        lVar9 = lVar9 + 8;
      } while (lVar3 + lVar9 != lVar4);
      param_1[3] = lVar8 + lVar9;
      goto LAB_01cb0ce0;
    }
LAB_01cb0f10:
    FUN_01c6892c();
LAB_01cb0f14:
                    /* WARNING: Subroutine does not return */
    FUN_01c670e8();
  }
LAB_01cb0ce0:
  uVar6 = *(undefined1 *)(param_2 + 0x28);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 5) = uVar6;
  lVar3 = *(long *)(param_2 + 0x30);
  lVar4 = *(long *)(param_2 + 0x38);
  lVar7 = lVar4 - lVar3;
  if (lVar7 != 0) {
    if (lVar7 < 0) goto LAB_01cb0f10;
    lVar8 = FUN_00187df4(lVar7);
    lVar9 = 0;
    param_1[8] = lVar8 + (lVar7 >> 3) * 8;
    param_1[6] = lVar8;
    param_1[7] = lVar8;
    do {
      *(undefined8 *)(lVar8 + lVar9) = *(undefined8 *)(lVar3 + lVar9);
      lVar9 = lVar9 + 8;
    } while (lVar3 + lVar9 != lVar4);
    param_1[7] = lVar8 + lVar9;
  }
  *(undefined2 *)(param_1 + 9) = *(undefined2 *)(param_2 + 0x48);
  FUN_0018652c(param_1 + 10,param_2 + 0x50);
  FUN_0018652c(param_1 + 0xb,param_2 + 0x58);
  FUN_0018652c(param_1 + 0xc,param_2 + 0x60);
  FUN_0018652c(param_1 + 0xd,param_2 + 0x68);
  uVar5 = *(undefined4 *)(param_2 + 0x70);
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0xe) = uVar5;
  lVar3 = *(long *)(param_2 + 0x78);
  lVar4 = *(long *)(param_2 + 0x80);
  lVar7 = lVar4 - lVar3;
  if (lVar7 != 0) {
    if (0x666666666666666 < (ulong)((lVar7 >> 3) * -0x3333333333333333)) goto LAB_01cb0f14;
    lVar8 = FUN_00187df4(lVar7);
    param_1[0xf] = lVar8;
    param_1[0x10] = lVar8;
    lVar9 = 0;
    puVar1 = PTR_DAT_04bc0ec8 + 0x10;
    param_1[0x11] = lVar8 + (lVar7 >> 3) * 8;
    do {
      plVar2 = (long *)(lVar8 + lVar9);
      *plVar2 = (long)puVar1;
      *(undefined1 *)(plVar2 + 1) = 0;
      plVar2[3] = (long)(plVar2 + 1);
      plVar2[4] = 0x10;
      FUN_0018b070(plVar2,*(undefined8 *)(lVar3 + lVar9 + 0x18),0xffffffffffffffff);
      lVar9 = lVar9 + 0x28;
    } while (lVar3 + lVar9 != lVar4);
    param_1[0x10] = lVar8 + lVar9;
  }
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x90);
  *(undefined1 *)((long)param_1 + 0x91) = *(undefined1 *)(param_2 + 0x91);
  param_1[0x13] = (long)&PTR_FUN_04a456d8;
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 0xa0);
  *(undefined4 *)((long)param_1 + 0xa4) = *(undefined4 *)(param_2 + 0xa4);
  *(undefined4 *)(param_1 + 0x15) = *(undefined4 *)(param_2 + 0xa8);
  param_1[0x13] = (long)&PTR_FUN_04a42f10;
  *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_2 + 0xb0);
  *(undefined4 *)((long)param_1 + 0xb4) = *(undefined4 *)(param_2 + 0xb4);
  *(undefined1 *)(param_1 + 0x17) = *(undefined1 *)(param_2 + 0xb8);
  uVar6 = *(undefined1 *)(param_2 + 0xb9);
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  *(undefined1 *)((long)param_1 + 0xb9) = uVar6;
  FUN_006bc11c(&uStack_41,param_2 + 0xd0);
  param_1[0x1a] = 0;
  lVar3 = *(long *)(param_2 + 0xc0);
  lVar4 = *(long *)(param_2 + 200);
  lVar7 = lVar4 - lVar3;
  if (lVar7 != 0) {
    if (lVar7 < 0) {
      FUN_01c6e558(param_1 + 0x18);
      FUN_00185ac4();
      return;
    }
    lVar8 = FUN_00187df4();
    lVar9 = 0;
    param_1[0x1a] = lVar8 + (lVar7 >> 1) * 2;
    param_1[0x18] = lVar8;
    param_1[0x19] = lVar8;
    do {
      *(undefined2 *)(lVar8 + lVar9) = *(undefined2 *)(lVar3 + lVar9);
      lVar9 = lVar9 + 2;
    } while (lVar3 + lVar9 != lVar4);
    param_1[0x19] = lVar8 + lVar9;
  }
  return;
}

