
void FUN_00768920(long *param_1,long *param_2,undefined8 *param_3,long *param_4)

{
  undefined8 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  uint uVar8;
  long lVar9;
  undefined **ppuVar10;
  void *__ptr;
  ulong local_50;
  undefined8 *local_48;
  
  *param_1 = (long)(PTR_DAT_04bb3050 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar9 = param_2[1];
  param_1[3] = 0;
  param_1[1] = lVar9;
  param_1[2] = 0;
  ppuVar10 = &PTR_LAB_049096a0;
  lVar9 = param_2[6];
  *param_1 = (long)&PTR_LAB_049096a0;
  param_1[7] = 0;
  *(int *)(param_1 + 4) = (int)lVar9;
  if (param_4 != (long *)0x0) {
    (**(code **)(*param_4 + 0x140))(param_4,param_1);
    ppuVar10 = (undefined **)*param_1;
  }
  puVar3 = (undefined4 *)(*(code *)ppuVar10[0x1e])(param_1);
  *puVar3 = *(undefined4 *)param_3;
  puVar3[1] = *(undefined4 *)((long)param_3 + 4);
  puVar3[2] = *(undefined4 *)(param_3 + 1);
  puVar3[3] = *(undefined4 *)((long)param_3 + 0xc);
  uVar2 = *(uint *)(param_1 + 4);
  uVar8 = uVar2 | 0x1000000;
  *(uint *)(param_1 + 4) = uVar8;
  if ((uVar2 >> 7 & 1) != 0) goto LAB_00768b74;
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
        lVar9 = (long)DAT_05ae7550 << 3;
        puVar7 = DAT_05ae7558;
        do {
          uVar4 = (**(code **)(*(long *)*puVar7 + 0x88))((long *)*puVar7,param_3);
          if ((uVar4 & 1) != 0) goto LAB_00768a78;
          puVar7 = puVar7 + 1;
          lVar9 = lVar9 + -8;
        } while (lVar9 != 0);
      }
      if (DAT_05ae7580 != 0) {
        lVar9 = (long)DAT_05ae7580 << 3;
        puVar7 = DAT_05ae7588;
        do {
          uVar4 = (**(code **)(*(long *)*puVar7 + 0x88))((long *)*puVar7,param_3);
          if ((uVar4 & 1) != 0) goto LAB_00768a78;
          puVar7 = puVar7 + 1;
          lVar9 = lVar9 + -8;
        } while (lVar9 != 0);
      }
    }
  }
  else {
LAB_00768a78:
    lVar9 = DAT_05ae7600;
    if (DAT_05ae7600 == 0) {
      puVar7 = malloc(0x10);
    }
    else {
      plVar5 = *(long **)(DAT_05aed538 + 0x330);
      if (plVar5 == (long *)0x0) {
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar5 = (long *)(lVar9 + 8);
        if (lVar6 != 0) {
          plVar5 = (long *)(lVar6 + 0xa8);
        }
        plVar5 = (long *)*plVar5;
        puVar7 = (undefined8 *)0x0;
        if (plVar5 == (long *)0x0) goto LAB_00768b60;
      }
      puVar7 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5,0x10,8);
    }
LAB_00768b60:
    uVar1 = param_3[1];
    *puVar7 = *param_3;
    puVar7[1] = uVar1;
    param_3 = puVar7;
  }
  uVar8 = *(uint *)(param_1 + 4);
  param_1[7] = (long)param_3;
LAB_00768b74:
  *(uint *)(param_1 + 4) = uVar8 & 0xfeffffff;
  return;
}

