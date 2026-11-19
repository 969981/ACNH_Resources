
void FUN_038dbf60(undefined8 param_1,long *param_2,int param_3,undefined8 param_4)

{
  undefined8 local_8;
  
  local_8 = (**(code **)(PTR_PTR_04bc5650 + ((long)param_3 ^ 1U) * 8 + 0x30))(param_4);
  (**(code **)(*param_2 + 8))(param_2,&local_8,8);
  return;
}

