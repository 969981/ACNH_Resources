
void FUN_0132c2d0(long *param_1,long *param_2,undefined8 *param_3,long *param_4)

{
  long *plVar1;
  undefined8 *__src;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  undefined **ppuVar8;
  void *__ptr;
  undefined8 *puVar9;
  ulong local_68;
  undefined8 *local_48;
  
  *param_1 = (long)(PTR_DAT_04bb3050 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar7 = param_2[1];
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = lVar7;
  ppuVar8 = &PTR_FUN_0498ee60;
  lVar7 = param_2[6];
  *param_1 = (long)&PTR_FUN_0498ee60;
  param_1[5] = (long)&PTR_LAB_0498efa0;
  *(int *)(param_1 + 4) = (int)lVar7;
  plVar1 = param_1 + 0x4986;
  *plVar1 = 0;
  if (param_4 != (long *)0x0) {
    (**(code **)(*param_4 + 0x140))(param_4,param_1);
    ppuVar8 = (undefined **)*param_1;
  }
  lVar7 = (*(code *)ppuVar8[0x1e])(param_1);
  __src = param_3 + 1;
  memcpy((void *)(lVar7 + 8),__src,0x24c00);
  uVar2 = *(uint *)(param_1 + 4);
  uVar6 = uVar2 | 0x1000000;
  *(uint *)(param_1 + 4) = uVar6;
  if ((uVar2 >> 7 & 1) != 0) goto LAB_0132c558;
  uVar3 = (**(code **)(**(long **)(DAT_05aed538 + 0x330) + 0x88))
                    (*(long **)(DAT_05aed538 + 0x330),*plVar1);
  if (((uVar3 & 1) != 0) && (__ptr = (void *)*plVar1, __ptr != (void *)0x0)) {
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
  *plVar1 = 0;
  local_48 = (undefined8 *)0x0;
  local_68 = 0;
  nn::os::GetCurrentStackInfo((ulong *)&local_48,&local_68);
  if ((param_3 < local_48) || ((undefined8 *)(local_68 + (long)local_48) <= param_3)) {
    if (DAT_05ae7600 != 0) {
      if (DAT_05ae7550 != 0) {
        lVar7 = (long)DAT_05ae7550 << 3;
        puVar9 = DAT_05ae7558;
        do {
          uVar3 = (**(code **)(*(long *)*puVar9 + 0x88))((long *)*puVar9,param_3);
          if ((uVar3 & 1) != 0) goto LAB_0132c440;
          puVar9 = puVar9 + 1;
          lVar7 = lVar7 + -8;
        } while (lVar7 != 0);
      }
      if (DAT_05ae7580 != 0) {
        lVar7 = (long)DAT_05ae7580 << 3;
        puVar9 = DAT_05ae7588;
        do {
          uVar3 = (**(code **)(*(long *)*puVar9 + 0x88))((long *)*puVar9,param_3);
          if ((uVar3 & 1) != 0) goto LAB_0132c440;
          puVar9 = puVar9 + 1;
          lVar7 = lVar7 + -8;
        } while (lVar7 != 0);
      }
    }
  }
  else {
LAB_0132c440:
    lVar7 = DAT_05ae7600;
    if (DAT_05ae7600 == 0) {
      param_3 = malloc(0x24c08);
    }
    else {
      plVar4 = *(long **)(DAT_05aed538 + 0x330);
      if (plVar4 == (long *)0x0) {
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar4 = (long *)(lVar7 + 8);
        if (lVar5 != 0) {
          plVar4 = (long *)(lVar5 + 0xa8);
        }
        plVar4 = (long *)*plVar4;
        if (plVar4 == (long *)0x0) {
          param_3 = (undefined8 *)0x0;
          goto LAB_0132c538;
        }
      }
      param_3 = (undefined8 *)(**(code **)(*plVar4 + 0x30))(plVar4,0x24c08,8);
    }
LAB_0132c538:
    *param_3 = &PTR_LAB_0498efa0;
    memcpy(param_3 + 1,__src,0x24c00);
  }
  uVar6 = *(uint *)(param_1 + 4);
  *plVar1 = (long)param_3;
LAB_0132c558:
  *(uint *)(param_1 + 4) = uVar6 & 0xfeffffff;
  return;
}

