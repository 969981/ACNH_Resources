
void FUN_0014996c(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  int local_38;
  int local_34;
  
  if (((param_1 != 0) && (lVar2 = *(long *)(param_1 + 0xd8), lVar2 != 0)) && (param_2 != -1)) {
    local_38 = param_2;
    lVar1 = FUN_0014b0d0(lVar2 + 0xb8,&local_38,4);
    if (lVar1 != 0) {
      if (*(code **)(lVar2 + 0x60) != (code *)0x0) {
        (**(code **)(lVar2 + 0x60))
                  (param_1,param_2,4,*(undefined8 *)(lVar2 + 0x68),*(undefined8 *)(lVar1 + 0x28));
      }
      local_34 = param_2;
      FUN_0014b02c(lVar2 + 0xb8,&local_34,4);
    }
  }
  return;
}

