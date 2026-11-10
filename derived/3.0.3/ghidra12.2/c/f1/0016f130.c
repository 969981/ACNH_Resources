
undefined8 FUN_0016f130(long param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  
  if (*(int *)(param_2 + 8) == 0) {
    uVar1 = *(uint *)(param_2 + 0x10);
    if ((((int)uVar1 < 1) || (((uVar1 ^ *(char *)(param_1 + 0x9aa) == '\0') & 1) == 0)) &&
       ((int)uVar1 <= *(int *)(param_1 + 0x948))) {
      *(byte *)(param_1 + 0x9ab) = *(byte *)(param_1 + 0x9ab) | 8;
      *(undefined4 *)(param_1 + 0x948) = *(undefined4 *)(param_2 + 0x10);
      if ((*(code **)(param_1 + 0x7e8) == (code *)0x0) ||
         (iVar2 = (**(code **)(param_1 + 0x7e8))(param_1,param_2,*(undefined8 *)(param_1 + 0x8b8)),
         iVar2 == 0)) {
        uVar3 = FUN_0016f1fc(param_1,*(undefined4 *)(param_2 + 0x10),0);
        return uVar3;
      }
      return 0xfffffc7a;
    }
    pcVar4 = "GOAWAY: invalid last_stream_id";
  }
  else {
    pcVar4 = "GOAWAY: stream_id != 0";
  }
  uVar3 = FUN_0016e544(param_1,param_2,0xfffffe07,pcVar4);
  return uVar3;
}

