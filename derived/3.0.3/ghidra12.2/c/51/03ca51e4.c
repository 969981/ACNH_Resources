
void FUN_03ca51e4(long param_1,long param_2)

{
  undefined **local_68;
  undefined8 *puStack_60;
  undefined8 *local_58;
  undefined8 local_48;
  undefined **local_40 [4];
  undefined8 local_8;
  
  local_8 = 0;
  local_48 = 0;
  if (*(long *)(param_1 + 0x48) != 0) {
    puStack_60 = &local_8;
    local_68 = &PTR_FUN_04b89690;
    local_58 = &local_48;
    local_40[0] = &PTR_LAB_04b85358;
    FUN_03c90cc0(*(undefined8 *)(*(long *)(param_1 + 0x48) + 0xc9),&local_68,local_40,param_2 + 0x30
                 ,PTR_FUN_04bd4128,0);
  }
  FUN_03ca527c(param_2,local_8,local_48);
  return;
}

