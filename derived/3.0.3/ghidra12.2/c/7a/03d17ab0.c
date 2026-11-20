
void FUN_03d17ab0(long *param_1,ulong param_2,undefined4 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  
  uVar2 = FUN_03ca6934(param_2,param_3);
  lVar1 = DAT_05ae7600;
  puVar8 = (undefined8 *)(long)*(int *)((long)param_1 + 0x14);
  if ((long *)*param_1 != param_1) {
    lVar9 = *param_1 - (long)puVar8;
    do {
      if (*(ulong *)(lVar9 + 0x10) < param_2) {
        if (DAT_05ae7600 == 0) {
          puVar5 = malloc(0x20);
        }
        else {
          lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          puVar5 = (undefined8 *)(lVar1 + 8);
          if (lVar4 != 0) {
            puVar5 = (undefined8 *)(lVar4 + 0xa8);
          }
          puVar5 = (undefined8 *)(**(code **)(*(long *)*puVar5 + 0x30))((long *)*puVar5,0x20,8);
        }
        *puVar5 = 0;
        puVar5[1] = 0;
        plVar6 = (long *)(lVar9 + (long)puVar8);
        puVar5[2] = param_2;
        puVar5[3] = uVar2;
        puVar3 = puVar8;
        goto LAB_03d17bf4;
      }
      lVar9 = *(long *)(lVar9 + (long)puVar8) - (long)puVar8;
    } while (lVar9 != (long)param_1 - (long)puVar8);
  }
  if (DAT_05ae7600 == 0) {
    puVar3 = malloc(0x20);
  }
  else {
    lVar9 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    puVar5 = (undefined8 *)(lVar1 + 8);
    if (lVar9 != 0) {
      puVar5 = (undefined8 *)(lVar9 + 0xa8);
    }
    puVar3 = (undefined8 *)(**(code **)(*(long *)*puVar5 + 0x30))((long *)*puVar5,0x20,8);
  }
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = param_2;
  puVar3[3] = uVar2;
  plVar6 = param_1;
  puVar5 = puVar8;
LAB_03d17bf4:
  plVar7 = (long *)plVar6[1];
  puVar5 = (undefined8 *)((long)puVar5 + (long)puVar3);
  plVar6[1] = (long)puVar5;
  *puVar5 = plVar6;
  puVar5[1] = plVar7;
  if (plVar7 != (long *)0x0) {
    *plVar7 = (long)puVar5;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}

