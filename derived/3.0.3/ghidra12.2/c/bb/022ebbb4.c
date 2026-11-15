
void FUN_022ebbb4(long param_1,undefined4 *param_2)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  undefined4 uVar4;
  undefined8 local_74;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined1 local_34;
  
  bVar1 = true;
  *(undefined8 *)(param_1 + 0x25) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x30) = 7;
  *(undefined1 *)(param_1 + 0x34) = 0;
  *(undefined8 *)(param_1 + 0x3d) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined1 *)(param_1 + 0x44) = 1;
  lVar2 = param_1;
  if (*(char *)(param_2 + 10) == '\0') {
    local_6c = param_2[5];
    uStack_68 = *param_2;
    local_64 = param_2[1];
    local_50 = 0x40000000;
    local_74 = *(undefined8 *)(param_2 + 3);
    local_4c = 0;
    local_38 = 0;
    local_48 = 0;
    uStack_40 = 0;
    local_34 = 1;
    uStack_60 = param_2[2];
    local_5c = uStack_68;
    uStack_58 = local_64;
    local_54 = uStack_60;
    lVar2 = FUN_016f36e0(&local_74);
    bVar1 = (int)lVar2 == 0;
  }
  *(undefined4 *)(param_1 + 0x48) = *param_2;
  *(undefined4 *)(param_1 + 0x4c) = param_2[1];
  *(undefined4 *)(param_1 + 0x50) = param_2[2];
  uVar3 = FUN_022ebc9c(lVar2,param_2);
  uVar4 = 2;
  if (((uVar3 & 1) != 0) && (bVar1)) {
    uVar4 = 0;
    *(undefined4 *)(param_1 + 0x30) = 0x34;
  }
  *(undefined4 *)(param_1 + 0x10) = uVar4;
  return;
}

