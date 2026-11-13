
void FUN_01332bd0(long *param_1,long *param_2,undefined8 *param_3,long *param_4)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  uint uVar6;
  long lVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  void *__ptr;
  ulong local_60;
  undefined8 *local_58;
  
  *param_1 = (long)(PTR_DAT_04bb3050 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar7 = param_2[1];
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = lVar7;
  ppuVar8 = &PTR_FUN_0498f858;
  lVar7 = param_2[6];
  *param_1 = (long)&PTR_FUN_0498f858;
  param_1[8] = 0;
  *(int *)(param_1 + 4) = (int)lVar7;
  param_1[5] = (long)&PTR_LAB_0498f998;
  param_1[6] = 0;
  *(undefined8 *)((long)param_1 + 0x36) = 0;
  if (param_4 != (long *)0x0) {
    (**(code **)(*param_4 + 0x140))(param_4,param_1);
    ppuVar8 = (undefined **)*param_1;
  }
  lVar7 = (*(code *)ppuVar8[0x1e])(param_1);
  uVar9 = *(undefined8 *)((long)param_3 + 0xe);
  *(undefined8 *)(lVar7 + 8) = param_3[1];
  *(undefined8 *)(lVar7 + 0xe) = uVar9;
  uVar1 = *(uint *)(param_1 + 4);
  uVar6 = uVar1 | 0x1000000;
  *(uint *)(param_1 + 4) = uVar6;
  if ((uVar1 >> 7 & 1) != 0) goto LAB_01332e40;
  uVar2 = (**(code **)(**(long **)(DAT_05aed538 + 0x330) + 0x88))
                    (*(long **)(DAT_05aed538 + 0x330),param_1[8]);
  if (((uVar2 & 1) != 0) && (__ptr = (void *)param_1[8], __ptr != (void *)0x0)) {
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else {
      plVar3 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,__ptr);
      }
    }
  }
  param_1[8] = 0;
  local_60 = 0;
  local_58 = (undefined8 *)0x0;
  nn::os::GetCurrentStackInfo((ulong *)&local_58,&local_60);
  if ((param_3 < local_58) || ((undefined8 *)(local_60 + (long)local_58) <= param_3)) {
    if (DAT_05ae7600 != 0) {
      if (DAT_05ae7550 != 0) {
        lVar7 = (long)DAT_05ae7550 << 3;
        puVar5 = DAT_05ae7558;
        do {
          uVar2 = (**(code **)(*(long *)*puVar5 + 0x88))((long *)*puVar5,param_3);
          if ((uVar2 & 1) != 0) goto LAB_01332d30;
          puVar5 = puVar5 + 1;
          lVar7 = lVar7 + -8;
        } while (lVar7 != 0);
      }
      if (DAT_05ae7580 != 0) {
        lVar7 = (long)DAT_05ae7580 << 3;
        puVar5 = DAT_05ae7588;
        do {
          uVar2 = (**(code **)(*(long *)*puVar5 + 0x88))((long *)*puVar5,param_3);
          if ((uVar2 & 1) != 0) goto LAB_01332d30;
          puVar5 = puVar5 + 1;
          lVar7 = lVar7 + -8;
        } while (lVar7 != 0);
      }
    }
  }
  else {
LAB_01332d30:
    lVar7 = DAT_05ae7600;
    if (DAT_05ae7600 == 0) {
      puVar5 = malloc(0x18);
    }
    else {
      plVar3 = *(long **)(DAT_05aed538 + 0x330);
      if (plVar3 == (long *)0x0) {
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar3 = (long *)(lVar7 + 8);
        if (lVar4 != 0) {
          plVar3 = (long *)(lVar4 + 0xa8);
        }
        plVar3 = (long *)*plVar3;
        if (plVar3 == (long *)0x0) {
          puVar5 = (undefined8 *)0x0;
          goto LAB_01332e24;
        }
      }
      puVar5 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0x18,8);
    }
LAB_01332e24:
    *puVar5 = &PTR_LAB_0498f998;
    uVar9 = param_3[1];
    *(undefined8 *)((long)puVar5 + 0xe) = *(undefined8 *)((long)param_3 + 0xe);
    puVar5[1] = uVar9;
    param_3 = puVar5;
  }
  uVar6 = *(uint *)(param_1 + 4);
  param_1[8] = (long)param_3;
LAB_01332e40:
  *(uint *)(param_1 + 4) = uVar6 & 0xfeffffff;
  return;
}

