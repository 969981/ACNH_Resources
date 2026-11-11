
void FUN_0040bdd8(long *param_1,long param_2,undefined8 param_3,undefined1 *param_4)

{
  short sVar1;
  undefined1 auStack_58 [24];
  undefined *local_40;
  long *local_38;
  long *local_28;
  
  sVar1 = FUN_001fb7fc(param_2);
  if (sVar1 == 1) {
    local_40 = PTR_DAT_04bccad0 + 0x10;
    (**(code **)(*DAT_04c5eb80 + 0x18))(DAT_04c5eb80,param_2,&local_28);
    local_38 = local_28;
    if (*(char *)(param_2 + 8) == '\0') {
      (**(code **)(*param_1 + 0xc0))(param_1,&local_40);
      FUN_001fb7e0(param_3,0x8001);
    }
    if (local_38 != (long *)0x0) {
      (**(code **)(*local_38 + 8))();
    }
  }
  else {
    local_40 = (undefined *)CONCAT44(local_40._4_4_,0x80010002);
    FUN_0018aa70(auStack_58,&local_40);
    FUN_001fc2e0(param_1,auStack_58);
  }
  *param_4 = 1;
  return;
}

