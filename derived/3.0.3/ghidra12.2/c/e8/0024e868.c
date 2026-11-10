
void FUN_0024e868(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 local_58;
  int local_44;
  ErrorResultVariant aEStack_40 [12];
  undefined4 local_34;
  
  local_44 = 0;
  local_58 = local_58 & 0xffffffff00000000;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_40,(Result *)&local_58);
  if ((*(char *)(param_2 + 0x78) != '\0') &&
     (uVar2 = FUN_0025c770(*(undefined8 *)(param_2 + 0x70)), (uVar2 & 1) != 0)) {
    uVar1 = FUN_0022bed8(param_2 + 0x80);
    FUN_0025bf70(*(undefined8 *)(param_2 + 0x70),uVar1);
  }
  FUN_0025b6fc(&local_58,*(undefined8 *)(param_2 + 0x70),param_4);
  FUN_00229780(&local_44,&local_58);
  if (local_44 == 0) {
    local_58 = 0;
    FUN_002282f0(&local_58);
    plVar3 = (long *)FUN_00228380();
    *(ulong *)(param_2 + 0x68) = local_58 + *plVar3 * 3000;
    FUN_0024e644(&local_58,param_2,param_3,3);
    FUN_00229780(&local_44,&local_58);
    if (local_44 == 0) {
      local_58 = (ulong)local_58._4_4_ << 0x20;
      *(undefined8 *)(param_2 + 0x30) = 0x50;
      *(undefined8 *)(param_2 + 0x38) = 1;
      *(char **)(param_2 + 0x40) = "LocalBackgroundProcessJob::CreateNetwork";
    }
    else {
      local_58 = CONCAT44(local_58._4_4_,0x10c08);
    }
  }
  else {
    local_58 = CONCAT44(local_58._4_4_,0x10c07);
  }
  local_34 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((long)&local_58 + 4),(Result *)&local_34);
  FUN_002296c4(param_1,&local_58);
  return;
}

