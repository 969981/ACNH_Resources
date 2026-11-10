
int FUN_0016e340(long param_1,long param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  int iVar4;
  
  if (*(uint *)(param_2 + 8) == 0) {
    pcVar3 = "HEADERS: stream_id == 0";
    uVar2 = 0xfffffe07;
  }
  else {
    if ((*(byte *)(param_3 + 0xe5) & 1) == 0) {
      if (((*(uint *)(param_2 + 8) ^ (uint)(*(char *)(param_1 + 0x9aa) == '\0')) & 1) == 0) {
        if (*(int *)(param_3 + 0xdc) != 2) {
          return -0x67;
        }
      }
      else if (*(int *)(param_3 + 0xdc) == 3) {
        return -0x67;
      }
      if (*(code **)(param_1 + 0x820) == (code *)0x0) {
        return 0;
      }
      iVar1 = (**(code **)(param_1 + 0x820))(param_1,param_2,*(undefined8 *)(param_1 + 0x8b8));
      iVar4 = 0;
      if (iVar1 != 0) {
        iVar4 = -0x386;
      }
      if (iVar1 != -0x209) {
        iVar1 = iVar4;
      }
      return iVar1;
    }
    pcVar3 = "HEADERS: stream closed";
    uVar2 = 0xfffffe02;
  }
  iVar1 = FUN_0016e544(param_1,param_2,uVar2,pcVar3);
  iVar4 = -0x67;
  if (iVar1 < -900) {
    iVar4 = iVar1;
  }
  return iVar4;
}

