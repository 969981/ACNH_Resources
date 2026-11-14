
void FUN_01c66e30(undefined8 *param_1,long param_2,long param_3,ulong param_4)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  
  lVar3 = param_1[2];
  plVar6 = (long *)*param_1;
  if ((ulong)((lVar3 - (long)plVar6 >> 3) * -0x3333333333333333) < param_4) {
    if (plVar6 != (long *)0x0) {
      plVar4 = (long *)param_1[1];
      plVar2 = plVar6;
      if (plVar4 != plVar6) {
        do {
          plVar4 = plVar4 + -5;
          (**(code **)*plVar4)(plVar4);
        } while (plVar4 != plVar6);
        plVar2 = (long *)*param_1;
      }
      param_1[1] = plVar6;
      FUN_00187e4c(plVar2);
      lVar3 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = 0;
    }
    if (param_4 < 0x666666666666667) {
      uVar5 = (lVar3 >> 3) * -0x6666666666666666;
      if (uVar5 <= param_4) {
        uVar5 = param_4;
      }
      if (0x333333333333332 < (ulong)((lVar3 >> 3) * -0x3333333333333333)) {
        uVar5 = 0x666666666666666;
      }
      if (uVar5 < 0x666666666666667) {
        plVar6 = (long *)FUN_00187df4(uVar5 * 0x28);
        param_1[2] = plVar6 + uVar5 * 5;
        *param_1 = plVar6;
        param_1[1] = plVar6;
        if (param_2 != param_3) {
          puVar1 = PTR_DAT_04bc0ec8 + 0x10;
          do {
            *plVar6 = (long)puVar1;
            *(undefined1 *)(plVar6 + 1) = 0;
            plVar6[3] = (long)(plVar6 + 1);
            plVar6[4] = 0x10;
            FUN_0018b070(plVar6,*(undefined8 *)(param_2 + 0x18),0xffffffffffffffff);
            param_2 = param_2 + 0x28;
            plVar6 = plVar6 + 5;
          } while (param_2 != param_3);
        }
        param_1[1] = plVar6;
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01c670e8(param_1);
  }
  plVar4 = (long *)param_1[1];
  lVar3 = (long)plVar4 - (long)plVar6 >> 3;
  if ((ulong)(lVar3 * -0x3333333333333333) < param_4) {
    lVar7 = param_2 + lVar3 * 8;
    if (plVar4 != plVar6) {
      lVar3 = lVar3 << 3;
      do {
        FUN_00189504(plVar6,param_2);
        param_2 = param_2 + 0x28;
        plVar6 = plVar6 + 5;
        lVar3 = lVar3 + -0x28;
      } while (lVar3 != 0);
      plVar6 = (long *)param_1[1];
    }
    plVar4 = plVar6;
    if (lVar7 != param_3) {
      puVar1 = PTR_DAT_04bc0ec8 + 0x10;
      do {
        *plVar6 = (long)puVar1;
        *(undefined1 *)(plVar6 + 1) = 0;
        plVar6[3] = (long)(plVar6 + 1);
        plVar6[4] = 0x10;
        FUN_0018b070(plVar6,*(undefined8 *)(lVar7 + 0x18),0xffffffffffffffff);
        lVar7 = lVar7 + 0x28;
        plVar4 = plVar4 + 5;
        plVar6 = plVar6 + 5;
      } while (lVar7 != param_3);
    }
    param_1[1] = plVar4;
    return;
  }
  plVar2 = plVar6;
  if (param_2 == param_3) {
    if (plVar4 == plVar6) goto LAB_01c670c0;
  }
  else {
    do {
      FUN_00189504(plVar6,param_2);
      param_2 = param_2 + 0x28;
      plVar6 = plVar6 + 5;
      plVar2 = plVar2 + 5;
    } while (param_2 != param_3);
    plVar4 = (long *)param_1[1];
    plVar6 = plVar2;
    if (plVar4 == plVar2) goto LAB_01c670c0;
  }
  do {
    plVar4 = plVar4 + -5;
    (**(code **)*plVar4)(plVar4);
    plVar2 = plVar6;
  } while (plVar4 != plVar6);
LAB_01c670c0:
  param_1[1] = plVar2;
  return;
}

