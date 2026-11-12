
void FUN_006dd034(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  void *pvVar7;
  
  param_1[8] = 0xc37c0;
  puVar3 = PTR_DAT_04bb2a38;
  *(undefined4 *)(param_1 + 9) = 0xffffffff;
  puVar2 = PTR_DAT_04bb2950;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  uVar1 = *puVar2;
  *(undefined2 *)((long)param_1 + 0x4d) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined1 *)((long)param_1 + 0xb4) = 0;
  *(undefined1 *)((long)param_1 + 0x4c) = uVar1;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *param_1 = &PTR_LAB_048fb280;
  param_1[1] = puVar3 + 0x10;
  *(undefined4 *)(param_1 + 0x10) = 0x31;
  *(undefined1 *)((long)param_1 + 0x84) = 0;
  *(undefined2 *)(param_1 + 0x17) = 0;
  *(undefined1 *)((long)param_1 + 0xba) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0xe] = &PTR_LAB_048fac78;
  param_1[0xf] = (long)param_1 + 0x84;
  lVar4 = DAT_05ae7600;
  *(undefined4 *)(param_1 + 0x19) = 0;
  param_1[0x1a] = 0;
  if (lVar4 == 0) {
    pvVar7 = malloc(0x200);
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar6 = (long *)(lVar4 + 8);
    if (lVar5 != 0) {
      plVar6 = (long *)(lVar5 + 0xa8);
    }
    plVar6 = (long *)*plVar6;
    if (plVar6 == (long *)0x0) {
      return;
    }
    pvVar7 = (void *)(**(code **)(*plVar6 + 0x30))(plVar6,0x200,8);
  }
  if (pvVar7 != (void *)0x0) {
    param_1[0x1a] = pvVar7;
    *(undefined4 *)(param_1 + 0x19) = 0x200;
  }
  return;
}

