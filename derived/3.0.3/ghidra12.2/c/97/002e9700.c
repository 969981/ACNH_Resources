
void FUN_002e9700(undefined8 param_1,long param_2,int param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined4 local_40;
  ErrorResultVariant aEStack_3c [12];
  undefined4 local_24;
  
  if ((((*(int *)(param_2 + 0x10) == param_3) || (*(int *)(param_2 + 0x658) == param_3)) ||
      (*(int *)(param_2 + 0xca0) == param_3)) || (*(int *)(param_2 + 0x12e8) == param_3)) {
    local_40 = 0x10c0f;
  }
  else {
    uVar3 = 4;
    if (*(int *)(param_2 + 0x658) == 0) {
      uVar3 = 1;
    }
    uVar4 = 0;
    if (*(int *)(param_2 + 0x10) != 0) {
      uVar4 = uVar3;
    }
    uVar3 = 2;
    if (*(int *)(param_2 + 0xca0) != 0) {
      uVar3 = 4;
    }
    if (uVar4 != 4) {
      uVar3 = uVar4;
    }
    uVar4 = 3;
    if (*(int *)(param_2 + 0x12e8) != 0) {
      uVar4 = 4;
    }
    if (uVar3 != 4) {
      uVar4 = uVar3;
    }
    if (uVar4 == 4) {
      local_40 = 0x4c0d;
    }
    else {
      param_2 = param_2 + (ulong)uVar4 * 0x648;
      *(int *)(param_2 + 0x10) = param_3;
      puVar1 = (undefined8 *)(param_2 + 0x18);
      if (*(undefined8 **)(param_2 + 0x20) != puVar1) {
        puVar2 = *(undefined8 **)(param_2 + 0x20);
        do {
          puVar5 = (undefined8 *)puVar2[1];
          *puVar2 = 0;
          puVar2[1] = 0;
          FUN_002236e0(param_2 + 0x30,param_2 + 0x30,(long)*(int *)(param_2 + 0x44) + (long)puVar2);
          puVar2 = puVar5;
        } while (puVar5 != puVar1);
      }
      FUN_002236b0(puVar1);
      local_40 = 0;
    }
  }
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_24);
  FUN_002296c4(param_1,&local_40);
  return;
}

