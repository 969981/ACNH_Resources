
void FUN_039684f0(undefined8 *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_04b68358;
  param_1[0x331] = PTR_DAT_04bbdd00 + 0x10;
  FUN_038f4940(param_1 + 0x331);
  param_1[0x30d] = &PTR_LAB_04b65f58;
  lVar4 = DAT_05ae78f0;
  if (param_1[0x32d] != 0) {
    (*DAT_04c620d0)(param_1 + 0x30e);
    piVar1 = (int *)(lVar4 + 0x650);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    *(undefined1 *)(param_1 + 0x315) = 0;
    *(undefined1 *)((long)param_1 + 0x18b4) = 0;
    *(undefined1 *)(param_1 + 0x318) = 0;
    *(undefined1 *)((long)param_1 + 0x18cc) = 0;
    *(undefined1 *)(param_1 + 0x31b) = 0;
    *(undefined1 *)((long)param_1 + 0x18e4) = 0;
    *(undefined1 *)(param_1 + 0x31e) = 0;
    *(undefined1 *)((long)param_1 + 0x18fc) = 0;
    *(undefined1 *)(param_1 + 0x321) = 0;
    *(undefined1 *)((long)param_1 + 0x1914) = 0;
    *(undefined1 *)(param_1 + 0x324) = 0;
    *(undefined1 *)((long)param_1 + 0x192c) = 0;
    *(undefined1 *)(param_1 + 0x327) = 0;
    *(undefined1 *)((long)param_1 + 0x1944) = 0;
    *(undefined1 *)(param_1 + 0x32a) = 0;
    *(undefined1 *)((long)param_1 + 0x195c) = 0;
    *(undefined4 *)(param_1 + 0x32c) = 0;
    param_1[0x32f] = 0;
    *(undefined4 *)(param_1 + 0x330) = 0;
    param_1[0x32d] = 0;
    param_1[0x32e] = 0;
  }
  FUN_0390e230(param_1 + 0x2d1);
  FUN_0390e230(param_1 + 0x295);
  FUN_0390e230(param_1 + 0x259);
  FUN_0390e230(param_1 + 0x21d);
  FUN_0390e230(param_1 + 0x1e1);
  FUN_0390e230(param_1 + 0x1a5);
  FUN_0390e230(param_1 + 0x169);
  FUN_0390e230(param_1 + 0x12d);
  FUN_0390e230(param_1 + 0xf1);
  FUN_0390e230(param_1 + 0xb5);
  FUN_0390e230(param_1 + 0x79);
  FUN_0390e230(param_1 + 0x3d);
  FUN_0390e230(param_1 + 1);
  return;
}

