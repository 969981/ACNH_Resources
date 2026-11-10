
void FUN_0026e858(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  FUN_002aa86c();
  puVar1 = PTR_DAT_04bcdb18;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0x3e800000000;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  *(undefined2 *)((long)param_1 + 0x8a) = 0;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined4 *)((long)param_1 + 0xac) = 0;
  param_1[0x16] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  *(undefined4 *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  puVar1 = PTR_DAT_04bcd028;
  lVar2 = *(long *)PTR_DAT_04bcd028;
  *(undefined2 *)(param_1 + 0x19) = 0;
  *(undefined1 *)((long)param_1 + 0xca) = 0;
  if (lVar2 != 0) {
    uVar3 = FUN_002290b0(lVar2,9);
    FUN_002290c4(uVar3,"MeshProtocolReliable send buffer num");
    if (*(long *)puVar1 != 0) {
      uVar3 = FUN_002290b0(*(long *)puVar1,10);
      FUN_002290c4(uVar3,"MeshProtocolReliable receive buffer num");
      return;
    }
  }
  return;
}

