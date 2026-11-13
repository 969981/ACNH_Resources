
void FUN_013294c0(long *param_1,long *param_2,undefined8 *param_3,long *param_4)

{
  undefined8 *__src;
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  undefined **ppuVar7;
  void *__ptr;
  undefined8 *puVar8;
  ulong local_60;
  undefined8 *local_58;
  
  *param_1 = (long)(PTR_DAT_04bb3050 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar6 = param_2[1];
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = lVar6;
  ppuVar7 = &PTR_FUN_0498e5c0;
  lVar6 = param_2[6];
  *param_1 = (long)&PTR_FUN_0498e5c0;
  param_1[5] = (long)&PTR_LAB_0498e700;
  param_1[0xfc6] = 0;
  *(int *)(param_1 + 4) = (int)lVar6;
  if (param_4 != (long *)0x0) {
    (**(code **)(*param_4 + 0x140))(param_4,param_1);
    ppuVar7 = (undefined **)*param_1;
  }
  lVar6 = (*(code *)ppuVar7[0x1e])(param_1);
  __src = param_3 + 1;
  memcpy((void *)(lVar6 + 8),__src,0x7e00);
  uVar1 = *(uint *)(param_1 + 4);
  uVar5 = uVar1 | 0x1000000;
  *(uint *)(param_1 + 4) = uVar5;
  if ((uVar1 >> 7 & 1) != 0) goto LAB_01329720;
  uVar2 = (**(code **)(**(long **)(DAT_05aed538 + 0x330) + 0x88))
                    (*(long **)(DAT_05aed538 + 0x330),param_1[0xfc6]);
  if (((uVar2 & 1) != 0) && (__ptr = (void *)param_1[0xfc6], __ptr != (void *)0x0)) {
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
  param_1[0xfc6] = 0;
  local_60 = 0;
  local_58 = (undefined8 *)0x0;
  nn::os::GetCurrentStackInfo((ulong *)&local_58,&local_60);
  if ((param_3 < local_58) || ((undefined8 *)(local_60 + (long)local_58) <= param_3)) {
    if (DAT_05ae7600 != 0) {
      if (DAT_05ae7550 != 0) {
        lVar6 = (long)DAT_05ae7550 << 3;
        puVar8 = DAT_05ae7558;
        do {
          uVar2 = (**(code **)(*(long *)*puVar8 + 0x88))((long *)*puVar8,param_3);
          if ((uVar2 & 1) != 0) goto LAB_0132961c;
          puVar8 = puVar8 + 1;
          lVar6 = lVar6 + -8;
        } while (lVar6 != 0);
      }
      if (DAT_05ae7580 != 0) {
        lVar6 = (long)DAT_05ae7580 << 3;
        puVar8 = DAT_05ae7588;
        do {
          uVar2 = (**(code **)(*(long *)*puVar8 + 0x88))((long *)*puVar8,param_3);
          if ((uVar2 & 1) != 0) goto LAB_0132961c;
          puVar8 = puVar8 + 1;
          lVar6 = lVar6 + -8;
        } while (lVar6 != 0);
      }
    }
  }
  else {
LAB_0132961c:
    lVar6 = DAT_05ae7600;
    if (DAT_05ae7600 == 0) {
      param_3 = malloc(0x7e08);
    }
    else {
      plVar3 = *(long **)(DAT_05aed538 + 0x330);
      if (plVar3 == (long *)0x0) {
        lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar3 = (long *)(lVar6 + 8);
        if (lVar4 != 0) {
          plVar3 = (long *)(lVar4 + 0xa8);
        }
        plVar3 = (long *)*plVar3;
        if (plVar3 == (long *)0x0) {
          param_3 = (undefined8 *)0x0;
          goto LAB_01329704;
        }
      }
      param_3 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0x7e08,8);
    }
LAB_01329704:
    *param_3 = &PTR_LAB_0498e700;
    memcpy(param_3 + 1,__src,0x7e00);
  }
  uVar5 = *(uint *)(param_1 + 4);
  param_1[0xfc6] = (long)param_3;
LAB_01329720:
  *(uint *)(param_1 + 4) = uVar5 & 0xfeffffff;
  return;
}

