
void FUN_0021b050(long *param_1)

{
  ushort uVar1;
  ushort uVar2;
  short sVar3;
  long lVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined8 local_2c;
  undefined4 local_24;
  
  if (param_1[10] == 0) {
    local_24 = 0;
    local_2c = 0x800000000000000;
    (**(code **)(*param_1 + 0x10))(param_1,&local_2c);
    sVar3 = (short)param_1[0x10];
  }
  else {
    sVar3 = (short)param_1[0x10];
  }
  while( true ) {
    if (sVar3 == 0) {
      return;
    }
    lVar4 = param_1[0x11];
    if (lVar4 == 0) {
      local_2c = 0x800000000000000;
      local_24 = 0;
      (**(code **)(*param_1 + 0x10))(param_1,&local_2c);
      lVar4 = param_1[0x11];
    }
    uVar1 = *(ushort *)((long)param_1 + 0x82);
    pcVar6 = (char *)(lVar4 + (ulong)uVar1 * 0xc + 8);
    if (*pcVar6 == '\0') break;
    puVar5 = (undefined8 *)(lVar4 + (ulong)uVar1 * 0xc);
    *pcVar6 = '\0';
    *puVar5 = 0;
    *(undefined1 *)((long)puVar5 + 9) = 0;
    uVar2 = *(ushort *)(param_1 + 0x12);
    sVar3 = 0;
    if (uVar2 != 0) {
      sVar3 = (short)((uVar1 + 1) / (uint)uVar2);
    }
    *(ushort *)((long)param_1 + 0x82) = (short)(uVar1 + 1) - sVar3 * uVar2;
    sVar3 = (short)param_1[0x10];
    if (sVar3 == 0) {
      local_2c = 0x800000000000000;
      local_24 = 0;
      (**(code **)(*param_1 + 0x10))(param_1,&local_2c);
      sVar3 = (short)param_1[0x10];
    }
    sVar3 = sVar3 + -1;
    *(short *)(param_1 + 0x10) = sVar3;
  }
  return;
}

