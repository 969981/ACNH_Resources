
uint FUN_001935e0(long *param_1,undefined8 param_2)

{
  byte bVar1;
  undefined1 uVar2;
  byte bVar3;
  uint uVar4;
  byte *pbVar5;
  ulong uVar6;
  undefined **local_78;
  undefined4 local_70;
  undefined1 local_6c;
  long local_68;
  ulong local_60;
  ulong uStack_58;
  long local_50;
  undefined1 local_48;
  undefined2 local_47;
  
  uVar4 = (**(code **)(*param_1 + 0x20))();
  if ((uVar4 & 1) != 0) {
    if ((char)param_1[2] == '\0') {
      uVar2 = (**(code **)(*param_1 + 0x38))(param_1);
      *(undefined1 *)(param_1 + 2) = uVar2;
    }
    uStack_58 = (**(code **)(*param_1 + 0x38))(param_1);
    uStack_58 = uStack_58 & 0xff;
    local_70 = 1;
    local_6c = 0;
    local_60 = 0;
    local_50 = 0;
    local_48 = 0;
    local_78 = &PTR_FUN_048393d8;
    local_68 = FUN_00196a4c(&local_78);
    local_47 = 0;
    (**(code **)(*param_1 + 0x10))(param_1,param_2,&local_78);
    bVar1 = *(byte *)(param_1 + 2);
    bVar3 = (**(code **)(*param_1 + 0x38))(param_1);
    if (bVar1 < bVar3) {
      bVar1 = *(byte *)(param_1 + 2);
      uVar6 = (ulong)bVar1;
      bVar3 = (**(code **)(*param_1 + 0x38))(param_1);
      if (bVar1 < bVar3) {
        do {
          pbVar5 = (byte *)FUN_001939b4(&local_78,uVar6);
          bVar1 = *pbVar5;
          pbVar5 = (byte *)FUN_001939b4(&local_78,(ulong)*(byte *)(param_1 + 2) - 1);
          uVar6 = uVar6 + 1;
          *pbVar5 = *pbVar5 ^ bVar1;
        } while (bVar3 != uVar6);
      }
      local_60 = (ulong)*(byte *)(param_1 + 2);
    }
    FUN_00193030(param_2,local_68 + local_50,local_60,0xffffffffffffffff);
    FUN_00196ce0(&local_78);
  }
  return uVar4 & 1;
}

