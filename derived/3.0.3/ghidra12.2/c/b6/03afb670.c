
void FUN_03afb670(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_04b727f8;
  puVar1 = param_1 + 0x104;
  puVar2 = (undefined8 *)param_1[0x105];
  while (puVar2 != puVar1) {
    puVar5 = (undefined8 *)puVar2[1];
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2 = puVar5;
  }
  *(undefined4 *)(param_1 + 0x106) = 0;
  param_1[0x105] = puVar1;
  param_1[0x104] = puVar1;
  puVar1 = DAT_05ae9348;
  puVar3 = PTR_DAT_04bd16a0;
  if (*(long *)PTR_DAT_04bd16a0 != 0) {
    lVar7 = *(long *)(DAT_05ae92f0 + 0x58);
    if (lVar7 == 0) {
      if (DAT_05ae9348 != (undefined8 *)0x0) {
        DAT_05ae9348 = (undefined8 *)0x0;
        (**(code **)*puVar1)();
        if (*(long **)puVar3 != (long *)0x0) {
          (**(code **)(**(long **)puVar3 + 8))();
        }
        *(undefined8 *)puVar3 = 0;
      }
    }
    else {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      lVar6 = *(long *)(lVar4 + 0xa8);
      *(long *)(lVar4 + 0xa8) = lVar7;
      puVar1 = DAT_05ae9348;
      if (DAT_05ae9348 != (undefined8 *)0x0) {
        DAT_05ae9348 = (undefined8 *)0x0;
        (**(code **)*puVar1)();
        if (*(long **)puVar3 != (long *)0x0) {
          (**(code **)(**(long **)puVar3 + 8))();
        }
        *(undefined8 *)puVar3 = 0;
      }
      if (lVar6 != 1) {
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        *(long *)(lVar7 + 0xa8) = lVar6;
      }
    }
  }
  FUN_038e1a84(param_1 + 0x107);
  return;
}

