
void FUN_01cb0090(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 uStack_51;
  
  param_1 = (undefined8 *)*param_1;
  uVar5 = *(uint *)(param_1 + 0x26);
  if (uVar5 != 0xffffffff) {
    if (uVar5 == 1) {
      FUN_004004b8(param_2,param_3);
      return;
    }
    (*(code *)(&PTR_LAB_04a45520)[uVar5])(&uStack_51,param_1);
  }
  *(undefined4 *)(param_1 + 0x26) = 0xffffffff;
  *param_1 = &PTR_LAB_04a428b8;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_3 + 8);
  param_1[2] = *(undefined8 *)(param_3 + 0x10);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_3 + 0x18);
  uVar8 = *(undefined8 *)(param_3 + 0x20);
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = uVar8;
  lVar3 = *(long *)(param_3 + 0x28);
  lVar4 = *(long *)(param_3 + 0x30);
  lVar6 = lVar4 - lVar3;
  if (lVar6 != 0) {
    if (0x666666666666666 < (ulong)((lVar6 >> 3) * -0x3333333333333333)) {
                    /* WARNING: Subroutine does not return */
      FUN_01c670e8();
    }
    lVar7 = FUN_00187df4(lVar6);
    param_1[5] = lVar7;
    param_1[6] = lVar7;
    lVar9 = 0;
    puVar1 = PTR_DAT_04bc0ec8 + 0x10;
    param_1[7] = lVar7 + (lVar6 >> 3) * 8;
    do {
      plVar2 = (long *)(lVar7 + lVar9);
      *plVar2 = (long)puVar1;
      *(undefined1 *)(plVar2 + 1) = 0;
      plVar2[3] = (long)(plVar2 + 1);
      plVar2[4] = 0x10;
      FUN_0018b070(plVar2,*(undefined8 *)(lVar3 + lVar9 + 0x18),0xffffffffffffffff);
      lVar9 = lVar9 + 0x28;
    } while (lVar3 + lVar9 != lVar4);
    param_1[6] = lVar7 + lVar9;
  }
  *param_1 = &PTR_LAB_04a429d8;
  *(undefined4 *)(param_1 + 0x26) = 1;
  return;
}

