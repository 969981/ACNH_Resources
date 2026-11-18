
undefined8 FUN_0334add0(long param_1,int param_2,ulong param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  
  if ((*(int *)(param_1 + 0x20f4) == 1) && (uVar3 = *(uint *)(param_1 + 0x1fd0), 1 < (int)uVar3)) {
    uVar5 = *(int *)(param_1 + 0x2060) + param_2;
    if ((int)uVar5 < 0) {
      if ((param_3 & 1) == 0) goto LAB_0334aeb8;
      uVar5 = uVar3 - 1;
    }
    else if ((uVar3 <= uVar5) && (uVar5 = 0, (param_3 & 1) == 0)) {
      return 0;
    }
    FUN_03349d64(param_1,uVar5,*(undefined4 *)(param_1 + 0x2064));
    FUN_03368d70(*(undefined8 *)(param_1 + 0x3b8));
    lVar7 = *(long *)PTR_DAT_04bb4fb0;
    uVar4 = FUN_03368ef0(DAT_05734ea0,2);
    lVar6 = *(long *)(lVar7 + 8);
    if (lVar6 == 0) {
      uVar8 = 1;
    }
    else {
      lVar1 = 0xd8;
      if (-1 < param_2) {
        lVar1 = 0xe0;
      }
      uVar8 = 1;
      lVar2 = 0;
      if (*(char *)(lVar6 + 0x38) != '\0') {
        lVar2 = lVar6 + 8;
      }
      FUN_03366350(lVar7,lVar2,*(undefined8 *)((long)&PTR_s_Decide_Erase_04b20ae8 + lVar1),1,uVar4,0
                  );
    }
  }
  else {
LAB_0334aeb8:
    uVar8 = 0;
  }
  return uVar8;
}

