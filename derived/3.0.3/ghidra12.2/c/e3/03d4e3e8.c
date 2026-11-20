
void FUN_03d4e3e8(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  
  *param_1 = 0;
  param_1[9] = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  FUN_038e18e4(param_1 + 0xb);
  FUN_038e18e4(param_1 + 0x13);
  lVar1 = DAT_05ae7600;
  if (DAT_05ae7600 == 0) {
    puVar4 = malloc(0x40);
  }
  else {
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar3 = (long *)(lVar1 + 8);
    if (lVar2 != 0) {
      plVar3 = (long *)(lVar2 + 0xa8);
    }
    plVar3 = (long *)*plVar3;
    puVar4 = (undefined8 *)0x0;
    if (plVar3 != (long *)0x0) {
      puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0x40,8);
    }
  }
  *(undefined4 *)(puVar4 + 2) = 0;
  puVar4[3] = 0;
  *(undefined4 *)(puVar4 + 4) = 0;
  puVar4[5] = 0;
  puVar4[6] = 0;
  puVar4[7] = 0;
  *puVar4 = &PTR_LAB_04b736c0;
  puVar4[1] = 0;
  param_1[1] = puVar4;
  uVar5 = (**(code **)(**(long **)PTR_DAT_04bb26b8 + 0x60))();
  param_1[2] = uVar5;
  return;
}

