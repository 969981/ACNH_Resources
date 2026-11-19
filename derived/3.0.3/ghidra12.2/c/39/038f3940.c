
void FUN_038f3940(long param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  
  lVar6 = DAT_05ae7600;
  if (param_2 == (long *)0x0) {
    param_2 = *(long **)(param_1 + 200);
  }
  if (DAT_05ae7600 == 0) {
    plVar4 = malloc(0xd0);
  }
  else {
    if (param_2 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      param_2 = (long *)(lVar6 + 8);
      if (lVar3 != 0) {
        param_2 = (long *)(lVar3 + 0xa8);
      }
      param_2 = (long *)*param_2;
      if (param_2 == (long *)0x0) {
        plVar4 = (long *)0x0;
        goto LAB_038f39c8;
      }
    }
    plVar4 = (long *)(**(code **)(*param_2 + 0x30))(param_2,0xd0,8);
  }
LAB_038f39c8:
  puVar2 = PTR_DAT_04bd0f48;
  puVar1 = (undefined8 *)((long)plVar4 + 0x3c);
  *(undefined1 *)((long)plVar4 + 0x7b) = 0;
  plVar4[2] = 0;
  plVar4[3] = 0;
  plVar4[6] = (long)puVar1;
  *(undefined4 *)(plVar4 + 7) = 0x40;
  *plVar4 = (long)(puVar2 + 0x10);
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  plVar4[0x13] = (long)(plVar4 + 0x13);
  plVar4[0x14] = (long)(plVar4 + 0x13);
  plVar4[0x10] = 0;
  *(undefined4 *)(plVar4 + 0x11) = 0;
  *(undefined1 *)((long)plVar4 + 0x8c) = 0;
  *(undefined4 *)(plVar4 + 0x12) = 0;
  *(undefined4 *)(plVar4 + 0x15) = 0;
  *(undefined4 *)(plVar4 + 0x18) = 0;
  plVar4[0x19] = 0;
  plVar4[1] = 0;
  plVar4[0x16] = 0;
  plVar4[0x17] = 0;
  plVar4[4] = 0;
  plVar4[5] = (long)&PTR_LAB_048fb9f8;
  plVar7 = (long *)(param_1 + 8);
  if ((*plVar7 == 0) || (lVar6 = *(long *)(*plVar7 + 8), lVar6 == 0)) {
    do {
      plVar5 = plVar7;
      plVar7 = (long *)plVar5[2];
    } while ((long *)plVar5[2] != (long *)0x0);
  }
  else {
    plVar5 = *(long **)(lVar6 + 0x18);
    *(long **)(lVar6 + 0x18) = plVar4 + 1;
  }
  plVar5[2] = (long)(plVar4 + 1);
  plVar4[4] = (long)plVar5;
  plVar4[1] = *plVar5;
  return;
}

