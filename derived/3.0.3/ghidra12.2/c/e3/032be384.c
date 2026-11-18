
void FUN_032be384(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  int local_64;
  undefined *local_60;
  undefined ***local_58;
  undefined **local_50;
  long local_48;
  code *local_40;
  undefined8 uStack_38;
  
  uVar4 = *param_2;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  local_58 = &local_50;
  local_60 = PTR_DAT_04bc8ec8 + 0x10;
  local_40 = FUN_032be430;
  uStack_38 = 0;
  local_50 = &PTR_LAB_04b1ac38;
  local_48 = param_1;
  iVar3 = FUN_032862c0(1);
  local_64 = 0;
  if (iVar3 != -1) {
    local_64 = iVar3;
  }
  FUN_03285bcc(param_1 + 0x48,uVar4,uVar2,uVar1,&local_60,&local_64);
  if (local_58 != (undefined ***)0x0) {
    (*(code *)(*local_58)[1])();
  }
  return;
}

