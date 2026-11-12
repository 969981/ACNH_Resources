
void FUN_00744b60(long *param_1,long *param_2,undefined8 *param_3,long *param_4)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  undefined **ppuVar9;
  void *__ptr;
  ulong local_50;
  undefined8 *local_48;
  
  *param_1 = (long)(PTR_DAT_04bb3050 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar8 = param_2[1];
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = lVar8;
  ppuVar9 = &PTR_LAB_049045c8;
  lVar8 = param_2[6];
  *param_1 = (long)&PTR_LAB_049045c8;
  *(undefined8 *)((long)param_1 + 0x24) = 0;
  param_1[7] = 0;
  *(int *)(param_1 + 4) = (int)lVar8;
  *(undefined8 *)((long)param_1 + 0x2c) = 0x3f80000000000000;
  if (param_4 != (long *)0x0) {
    (**(code **)(*param_4 + 0x140))(param_4,param_1);
    ppuVar9 = (undefined **)*param_1;
  }
  puVar3 = (undefined8 *)(*(code *)ppuVar9[0x1e])(param_1);
  uVar1 = param_3[1];
  *puVar3 = *param_3;
  puVar3[1] = uVar1;
  uVar2 = *(uint *)(param_1 + 4);
  uVar7 = uVar2 | 0x1000000;
  *(uint *)(param_1 + 4) = uVar7;
  if ((uVar2 >> 7 & 1) != 0) goto LAB_00744da4;
  uVar4 = (**(code **)(**(long **)(DAT_05aed538 + 0x330) + 0x88))
                    (*(long **)(DAT_05aed538 + 0x330),param_1[7]);
  if (((uVar4 & 1) != 0) && (__ptr = (void *)param_1[7], __ptr != (void *)0x0)) {
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else {
      plVar5 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,__ptr);
      }
    }
  }
  param_1[7] = 0;
  local_50 = 0;
  local_48 = (undefined8 *)0x0;
  nn::os::GetCurrentStackInfo((ulong *)&local_48,&local_50);
  if ((param_3 < local_48) || ((undefined8 *)(local_50 + (long)local_48) <= param_3)) {
    if (DAT_05ae7600 != 0) {
      if (DAT_05ae7550 != 0) {
        lVar8 = (long)DAT_05ae7550 << 3;
        puVar3 = DAT_05ae7558;
        do {
          uVar4 = (**(code **)(*(long *)*puVar3 + 0x88))((long *)*puVar3,param_3);
          if ((uVar4 & 1) != 0) goto LAB_00744cac;
          puVar3 = puVar3 + 1;
          lVar8 = lVar8 + -8;
        } while (lVar8 != 0);
      }
      if (DAT_05ae7580 != 0) {
        lVar8 = (long)DAT_05ae7580 << 3;
        puVar3 = DAT_05ae7588;
        do {
          uVar4 = (**(code **)(*(long *)*puVar3 + 0x88))((long *)*puVar3,param_3);
          if ((uVar4 & 1) != 0) goto LAB_00744cac;
          puVar3 = puVar3 + 1;
          lVar8 = lVar8 + -8;
        } while (lVar8 != 0);
      }
    }
  }
  else {
LAB_00744cac:
    lVar8 = DAT_05ae7600;
    if (DAT_05ae7600 == 0) {
      puVar3 = malloc(0x10);
    }
    else {
      plVar5 = *(long **)(DAT_05aed538 + 0x330);
      if (plVar5 == (long *)0x0) {
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar5 = (long *)(lVar8 + 8);
        if (lVar6 != 0) {
          plVar5 = (long *)(lVar6 + 0xa8);
        }
        plVar5 = (long *)*plVar5;
        puVar3 = (undefined8 *)0x0;
        if (plVar5 == (long *)0x0) goto LAB_00744d90;
      }
      puVar3 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,0x10,8);
    }
LAB_00744d90:
    uVar1 = param_3[1];
    *puVar3 = *param_3;
    puVar3[1] = uVar1;
    param_3 = puVar3;
  }
  uVar7 = *(uint *)(param_1 + 4);
  param_1[7] = (long)param_3;
LAB_00744da4:
  *(uint *)(param_1 + 4) = uVar7 & 0xfeffffff;
  return;
}

