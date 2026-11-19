
void FUN_03831c64(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (lVar5 == 0) {
    plVar4 = malloc(0x178);
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar4 = (long *)(lVar5 + 8);
    if (lVar3 != 0) {
      plVar4 = (long *)(lVar3 + 0xa8);
    }
    plVar4 = (long *)*plVar4;
    if (plVar4 == (long *)0x0) {
      plVar4 = (long *)0x0;
    }
    else {
      plVar4 = (long *)(**(code **)(*plVar4 + 0x30))(plVar4,0x178,8);
    }
  }
  *(undefined2 *)(plVar4 + 1) = 0;
  puVar1 = PTR_DAT_04bdf1b8;
  plVar4[9] = 0;
  plVar4[10] = 0;
  plVar4[2] = 0;
  plVar4[3] = 0;
  plVar4[4] = 0;
  plVar4[5] = 0;
  *(undefined4 *)(plVar4 + 8) = 0;
  *plVar4 = (long)(puVar1 + 0x10);
  plVar4[6] = 0;
  plVar4[7] = 0;
  puVar1 = PTR_DAT_04bd0e58 + 0x10;
  plVar4[0xd] = 0;
  plVar4[0xe] = 0;
  plVar4[0xb] = (long)puVar1;
  plVar4[0xc] = 0;
  nn::os::InitializeLightEvent((LightEventType *)(plVar4 + 0xf),0,0);
  puVar1 = PTR_DAT_04bb2120;
  plVar4[0x11] = (long)(PTR_DAT_04bb2020 + 0x10);
  plVar4[0x12] = (long)puVar1;
  nn::os::SignalLightEvent((LightEventType *)(plVar4 + 0xf));
  plVar4[0x14] = 0;
  plVar4[0x15] = 0;
  puVar1 = PTR_DAT_04bcb2f8 + 0x10;
  *(undefined1 *)(plVar4 + 0x13) = 1;
  *(undefined1 *)(plVar4 + 0x17) = 1;
  puVar2 = PTR_DAT_04bcb300;
  plVar4[0x18] = 0;
  plVar4[0x19] = 0;
  *plVar4 = (long)puVar1;
  *(undefined1 *)((long)plVar4 + 0x173) = 0;
  plVar4[0x16] = (long)(puVar2 + 0x10);
  *(undefined4 *)(plVar4 + 0x1e) = 0x80;
  *(undefined1 *)((long)plVar4 + 0xf4) = 0;
  plVar4[0x1a] = 0;
  plVar4[0x1b] = 0;
  plVar4[0x1c] = (long)(PTR_DAT_04bb2d88 + 0x10);
  plVar4[0x1d] = (long)plVar4 + 0xf4;
  *param_2 = plVar4;
  return;
}

