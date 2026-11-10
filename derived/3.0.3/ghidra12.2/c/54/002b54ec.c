
void FUN_002b54ec(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  FUN_002a495c();
  *(undefined4 *)(param_1 + 0xf) = 0;
  puVar1 = PTR_DAT_04bce168;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  *(undefined8 *)((long)param_1 + 0x94) = 0;
  *(undefined8 *)((long)param_1 + 0x9c) = 0;
  *(undefined8 *)((long)param_1 + 0xa4) = 0;
  *(undefined8 *)((long)param_1 + 0xac) = 0;
  *(undefined8 *)((long)param_1 + 0xbc) = 0;
  param_1[0x19] = 0;
  *(undefined2 *)(param_1 + 0x1a) = 0;
  *(undefined1 *)((long)param_1 + 0xd2) = 0;
  *(undefined8 *)((long)param_1 + 0xdb) = 0;
  *(undefined8 *)((long)param_1 + 0xe3) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  *(undefined8 *)((long)param_1 + 0xeb) = 0;
  *(undefined4 *)((long)param_1 + 0xb4) = 0xffffffff;
  *(undefined8 *)((long)param_1 + 0xf3) = 0;
  *(undefined2 *)(param_1 + 0x17) = 0xffff;
  *(undefined8 *)((long)param_1 + 0xfb) = 0;
  *(undefined8 *)((long)param_1 + 0xd3) = 0;
  puVar1 = PTR_DAT_04bcd028;
  lVar2 = *(long *)PTR_DAT_04bcd028;
  *(undefined8 *)((long)param_1 + 0x103) = 0;
  *(undefined8 *)((long)param_1 + 0x10b) = 0;
  if (lVar2 != 0) {
    uVar3 = FUN_002290b0(lVar2,7);
    FUN_002290c4(uVar3,"StreamBroadcastReliableProtocol send buffer num");
    if (*(long *)puVar1 != 0) {
      uVar3 = FUN_002290b0(*(long *)puVar1,8);
      FUN_002290c4(uVar3,"StreamBroadcastReliableProtocol receive buffer num");
      return;
    }
  }
  return;
}

