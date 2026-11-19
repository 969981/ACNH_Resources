
void FUN_038f3a90(long param_1,long *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
  lVar4 = DAT_05ae7600;
  if (param_2 == (long *)0x0) {
    param_2 = *(long **)(param_1 + 200);
  }
  if (DAT_05ae7600 == 0) {
    plVar6 = malloc(0xd0);
  }
  else {
    if (param_2 == (long *)0x0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      param_2 = (long *)(lVar4 + 8);
      if (lVar5 != 0) {
        param_2 = (long *)(lVar5 + 0xa8);
      }
      param_2 = (long *)*param_2;
      if (param_2 == (long *)0x0) {
        plVar6 = (long *)0x0;
        goto LAB_038f3b18;
      }
    }
    plVar6 = (long *)(**(code **)(*param_2 + 0x30))(param_2,0xd0,8);
  }
LAB_038f3b18:
  puVar3 = PTR_DAT_04bd0f48;
  puVar1 = (undefined8 *)((long)plVar6 + 0x3c);
  plVar2 = plVar6 + 1;
  *(undefined1 *)((long)plVar6 + 0x7b) = 0;
  plVar6[2] = 0;
  plVar6[3] = 0;
  plVar6[6] = (long)puVar1;
  *(undefined4 *)(plVar6 + 7) = 0x40;
  *plVar6 = (long)(puVar3 + 0x10);
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  plVar7 = plVar6 + 4;
  *plVar7 = 0;
  puVar3 = PTR_DAT_04bb2bc0;
  plVar6[0x10] = 0;
  *(undefined4 *)(plVar6 + 0x11) = 0;
  *(undefined1 *)((long)plVar6 + 0x8c) = 0;
  *(undefined4 *)(plVar6 + 0x12) = 0;
  *(undefined4 *)(plVar6 + 0x15) = 0;
  plVar6[0x16] = 0;
  plVar6[0x17] = 0;
  *(undefined4 *)(plVar6 + 0x18) = 0;
  plVar6[0x19] = 0;
  plVar6[1] = 0;
  plVar6[5] = (long)(puVar3 + 0x10);
  plVar6[0x13] = (long)(plVar6 + 0x13);
  plVar6[0x14] = (long)(plVar6 + 0x13);
  if (*(long *)(param_1 + 0x10) == 0) {
    *(long **)(param_1 + 0x10) = plVar2;
    *plVar2 = param_1 + 8;
  }
  else {
    plVar6 = *(long **)(*(long *)(param_1 + 0x10) + 0x18);
    plVar6[2] = (long)plVar2;
    *plVar7 = (long)plVar6;
    *plVar2 = *plVar6;
    plVar7 = (long *)(*(long *)(param_1 + 0x10) + 0x18);
  }
  *plVar7 = (long)plVar2;
  return;
}

