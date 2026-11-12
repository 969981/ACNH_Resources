
void FUN_006fdfc0(long *param_1,long *param_2,undefined8 *param_3,long *param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  uint uVar7;
  long lVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  void *__ptr;
  ulong local_50;
  undefined8 *local_48;
  
  *param_1 = (long)(PTR_DAT_04bb3050 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar8 = param_2[1];
  param_1[3] = 0;
  param_1[1] = lVar8;
  param_1[2] = 0;
  ppuVar9 = &PTR_FUN_048fd860;
  lVar8 = param_2[6];
  *param_1 = (long)&PTR_FUN_048fd860;
  param_1[6] = 0;
  *(int *)(param_1 + 4) = (int)lVar8;
  if (param_4 != (long *)0x0) {
    (**(code **)(*param_4 + 0x140))(param_4,param_1);
    ppuVar9 = (undefined **)*param_1;
  }
  puVar2 = (undefined4 *)(*(code *)ppuVar9[0x1e])(param_1);
  *puVar2 = *(undefined4 *)param_3;
  puVar2[1] = *(undefined4 *)((long)param_3 + 4);
  puVar2[2] = *(undefined4 *)(param_3 + 1);
  uVar1 = *(uint *)(param_1 + 4);
  uVar7 = uVar1 | 0x1000000;
  *(uint *)(param_1 + 4) = uVar7;
  if ((uVar1 >> 7 & 1) != 0) goto LAB_006fe21c;
  uVar3 = (**(code **)(**(long **)(DAT_05aed538 + 0x330) + 0x88))
                    (*(long **)(DAT_05aed538 + 0x330),param_1[6]);
  if (((uVar3 & 1) != 0) && (__ptr = (void *)param_1[6], __ptr != (void *)0x0)) {
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else {
      plVar4 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,__ptr);
      }
    }
  }
  param_1[6] = 0;
  local_50 = 0;
  local_48 = (undefined8 *)0x0;
  nn::os::GetCurrentStackInfo((ulong *)&local_48,&local_50);
  if ((param_3 < local_48) || ((undefined8 *)(local_50 + (long)local_48) <= param_3)) {
    if (DAT_05ae7600 != 0) {
      if (DAT_05ae7550 != 0) {
        lVar8 = (long)DAT_05ae7550 << 3;
        puVar6 = DAT_05ae7558;
        do {
          uVar3 = (**(code **)(*(long *)*puVar6 + 0x88))((long *)*puVar6,param_3);
          if ((uVar3 & 1) != 0) goto LAB_006fe110;
          puVar6 = puVar6 + 1;
          lVar8 = lVar8 + -8;
        } while (lVar8 != 0);
      }
      if (DAT_05ae7580 != 0) {
        lVar8 = (long)DAT_05ae7580 << 3;
        puVar6 = DAT_05ae7588;
        do {
          uVar3 = (**(code **)(*(long *)*puVar6 + 0x88))((long *)*puVar6,param_3);
          if ((uVar3 & 1) != 0) goto LAB_006fe110;
          puVar6 = puVar6 + 1;
          lVar8 = lVar8 + -8;
        } while (lVar8 != 0);
      }
    }
  }
  else {
LAB_006fe110:
    lVar8 = DAT_05ae7600;
    if (DAT_05ae7600 == 0) {
      puVar6 = malloc(0xc);
    }
    else {
      plVar4 = *(long **)(DAT_05aed538 + 0x330);
      if (plVar4 == (long *)0x0) {
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar4 = (long *)(lVar8 + 8);
        if (lVar5 != 0) {
          plVar4 = (long *)(lVar5 + 0xa8);
        }
        plVar4 = (long *)*plVar4;
        puVar6 = (undefined8 *)0x0;
        if (plVar4 == (long *)0x0) goto LAB_006fe200;
      }
      puVar6 = (undefined8 *)(**(code **)(*plVar4 + 0x30))(plVar4,0xc,8);
    }
LAB_006fe200:
    uVar10 = *param_3;
    *(undefined4 *)(puVar6 + 1) = *(undefined4 *)(param_3 + 1);
    *puVar6 = uVar10;
    param_3 = puVar6;
  }
  uVar7 = *(uint *)(param_1 + 4);
  param_1[6] = (long)param_3;
LAB_006fe21c:
  *(uint *)(param_1 + 4) = uVar7 & 0xfeffffff;
  return;
}

