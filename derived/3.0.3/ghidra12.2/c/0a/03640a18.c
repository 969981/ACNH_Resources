
void FUN_03640a18(undefined8 *param_1,undefined4 param_2,uint param_3)

{
  char cVar1;
  
  switch(param_2) {
  case 0x4020:
    *(uint *)((long)param_1 + 0x9c) = param_3 | (uint)*(byte *)((long)param_1 + 0x9d) << 8;
    return;
  case 0x4021:
    *(uint *)((long)param_1 + 0x9c) = (uint)*(byte *)((long)param_1 + 0x9c) | param_3 << 8;
    return;
  case 0x4022:
    cVar1 = *(char *)((long)param_1 + 0x99);
    *(byte *)(param_1 + 0x13) = (byte)param_3 & 1;
    *(byte *)((long)param_1 + 0x99) = (byte)(param_3 >> 1) & 1;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)((long)param_1 + 0x9c);
    if (cVar1 == '\0') {
      *(uint *)*param_1 = *(uint *)*param_1 & 0xffffffdf;
      return;
    }
    break;
  case 0x4023:
    *(byte *)((long)param_1 + 9) = (byte)param_3 & 1;
    *(byte *)((long)param_1 + 10) = (byte)(param_3 >> 1) & 1;
    *(undefined4 *)((long)param_1 + 0x8c) = 0;
    return;
  case 0x4024:
    if (*(char *)((long)param_1 + 9) != '\0') {
      *(uint *)((long)param_1 + 0x14) = param_3;
      *(uint *)*param_1 = *(uint *)*param_1 & 0xffffffbf;
      *(undefined4 *)((long)param_1 + 0x8c) = 0;
      return;
    }
    break;
  case 0x4025:
    FUN_03640c30(param_1,param_3);
    return;
  case 0x4026:
    if (*(char *)((long)param_1 + 9) != '\0') {
      *(uint *)((long)param_1 + 0x1c) = param_3;
      *(undefined4 *)((long)param_1 + 0x8c) = 0;
      return;
    }
  }
  return;
}

