
void FUN_038e166c(long param_1,long *param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined **local_458;
  undefined1 *local_450;
  undefined4 local_448;
  undefined1 local_444 [1023];
  undefined1 local_45;
  
  local_450 = local_444;
  local_448 = 0x400;
  local_444[0] = 0;
  local_458 = &PTR_LAB_048fcfa0;
  uVar2 = param_4 / 3;
  uVar1 = uVar2;
  if (param_4 % 3 != 0) {
    uVar1 = uVar2 + 1;
  }
  if (uVar1 * 4 < 0x400) {
    uVar3 = (ulong)uVar2;
    local_45 = 0;
    if (param_4 % 3 != 0) {
      uVar3 = uVar3 + 1;
    }
    local_450[uVar3 * 4] = 0;
    FUN_038e8220(local_450,param_3,param_4,0);
    (**(code **)(*param_2 + 8))(param_2,&DAT_040c7c06,1);
    (*(code *)local_458[3])(&local_458);
    (**(code **)(*param_2 + 8))(param_2,local_450,uVar1 * 4);
    (**(code **)(*param_2 + 8))(param_2,&DAT_040c7c06,1);
    (**(code **)(*(long *)(param_1 + 8) + 0x18))((long *)(param_1 + 8));
    (**(code **)(*param_2 + 8))(param_2,*(undefined8 *)(param_1 + 0x10),1);
  }
  return;
}

