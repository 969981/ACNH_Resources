
int FUN_001710b4(long param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  
  uVar1 = *(uint *)(param_1 + 0x1a8);
  if (uVar1 == 0) {
    uVar5 = 1;
    pcVar6 = "DATA: stream_id == 0";
  }
  else {
    if ((uVar1 & 1) == (uint)(*(char *)(param_1 + 0x9aa) == '\0')) {
      iVar2 = *(int *)(param_1 + 0x934);
    }
    else {
      iVar2 = *(int *)(param_1 + 0x938);
    }
    if (iVar2 < (int)uVar1) {
      uVar5 = 1;
      pcVar6 = "DATA: stream in idle";
    }
    else {
      lVar4 = FUN_001726f0(param_1,uVar1);
      if (((lVar4 == 0) || ((*(byte *)(lVar4 + 0xe4) >> 1 & 1) != 0)) ||
         (iVar2 = *(int *)(lVar4 + 0xdc), iVar2 == 5)) {
        lVar4 = FUN_001726f0(param_1,uVar1);
        if (lVar4 == 0) {
          return -0x68;
        }
        if ((*(byte *)(lVar4 + 0xe5) & 1) == 0) {
          return -0x68;
        }
        uVar5 = 5;
        pcVar6 = "DATA: stream closed";
      }
      else if ((*(byte *)(lVar4 + 0xe5) & 1) == 0) {
        if (((uVar1 ^ *(char *)(param_1 + 0x9aa) == '\0') & 1) == 0) {
          if (iVar2 == 3) {
            return -0x68;
          }
          if (iVar2 == 2) {
            return 0;
          }
          uVar5 = 1;
          pcVar6 = "DATA: stream not opened";
        }
        else {
          if (iVar2 == 3) {
            return -0x68;
          }
          if (iVar2 != 4) {
            return 0;
          }
          uVar5 = 1;
          pcVar6 = "DATA: stream in reserved";
        }
      }
      else {
        uVar5 = 5;
        pcVar6 = "DATA: stream in half-closed(remote)";
      }
    }
  }
  iVar3 = FUN_0016bcd4(param_1,*(undefined4 *)(param_1 + 0x93c),uVar5,pcVar6);
  iVar2 = -0x68;
  if (iVar3 < -900) {
    iVar2 = iVar3;
  }
  return iVar2;
}

