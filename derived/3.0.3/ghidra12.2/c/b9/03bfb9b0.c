
void FUN_03bfb9b0(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  bool local_24 [4];
  
  uVar1 = *(uint *)(param_1 + 0xe4);
  if (uVar1 == 0xf) {
    *(undefined4 *)(param_1 + 0xe4) = 0xffffffff;
  }
  else if (*(int *)(param_1 + 0x10) == 1) {
    if ((uVar1 < 8) && ((1 << (ulong)(uVar1 & 0x1f) & 0xd4U) != 0)) {
      uVar3 = 5;
      goto LAB_03bfba50;
    }
  }
  else if ((uVar1 - 3 < 5) || (uVar1 == 1)) {
    if (*(int *)(param_1 + 0x10) != 0) {
      uVar3 = 3;
      goto LAB_03bfba50;
    }
    local_24[0] = false;
    iVar2 = nn::account::IsNetworkServiceAccountAvailable(local_24,(UserHandle *)(param_1 + 0x420));
    uVar4 = 3;
    if (*(char *)(param_1 + 0x415) != '\0') {
      uVar4 = 0x1f;
    }
    if (local_24[0] != false && iVar2 == 0) {
      uVar4 = 3;
    }
    FUN_03ebb160(param_1 + 0x30,uVar4);
  }
  else if (uVar1 == 0) {
    uVar3 = 1;
LAB_03bfba50:
    FUN_03ebb160(param_1 + 0x30,uVar3);
    return;
  }
  return;
}

