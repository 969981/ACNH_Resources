
void FUN_01cb0af0(long *param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  *param_1 = (long)(PTR_DAT_04bc0f18 + 0x10);
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 8);
  param_1[2] = *(long *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  param_1[4] = (long)&PTR_FUN_04a456b8;
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 0x28);
  param_1[6] = *(long *)(param_2 + 0x30);
  *(undefined2 *)(param_1 + 7) = *(undefined2 *)(param_2 + 0x38);
  param_1[4] = (long)&PTR_FUN_04a42a40;
  lVar6 = *(long *)(param_2 + 0x40);
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = lVar6;
  lVar6 = *(long *)(param_2 + 0x48);
  lVar3 = *(long *)(param_2 + 0x50);
  lVar4 = lVar3 - lVar6;
  if (lVar4 != 0) {
    if (0x666666666666666 < (ulong)((lVar4 >> 3) * -0x3333333333333333)) {
                    /* WARNING: Subroutine does not return */
      FUN_01c670e8();
    }
    lVar5 = FUN_00187df4(lVar4);
    param_1[9] = lVar5;
    param_1[10] = lVar5;
    lVar7 = 0;
    puVar1 = PTR_DAT_04bc0ec8 + 0x10;
    param_1[0xb] = lVar5 + (lVar4 >> 3) * 8;
    do {
      plVar2 = (long *)(lVar5 + lVar7);
      *plVar2 = (long)puVar1;
      *(undefined1 *)(plVar2 + 1) = 0;
      plVar2[3] = (long)(plVar2 + 1);
      plVar2[4] = 0x10;
      FUN_0018b070(plVar2,*(undefined8 *)(lVar6 + lVar7 + 0x18),0xffffffffffffffff);
      lVar7 = lVar7 + 0x28;
    } while (lVar6 + lVar7 != lVar3);
    param_1[10] = lVar5 + lVar7;
  }
  return;
}

