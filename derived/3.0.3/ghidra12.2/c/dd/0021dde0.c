
uint FUN_0021dde0(long *param_1,long param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  undefined8 local_40;
  undefined4 local_38;
  int local_34 [4];
  byte local_24 [4];
  
  if (param_2 == 0) {
    return 0;
  }
  cVar1 = FUN_002aaa44();
  if ((cVar1 != -3) &&
     (FUN_002ba1c4(local_34,*(undefined8 *)PTR_DAT_04bc1510,local_24,param_2), local_34[0] == 0)) {
    if (local_24[0] < *(byte *)(param_1 + 0xc)) {
      bVar2 = FUN_002aaa44(param_1);
      if (local_24[0] == bVar2) {
        return 1;
      }
      lVar4 = param_1[0xb];
      if (lVar4 == 0) {
        local_38 = 0;
        local_40 = 0x800000000000000;
        (**(code **)(*param_1 + 0x10))(param_1,&local_40);
        lVar4 = param_1[0xb];
      }
      uVar3 = FUN_002aee28(lVar4,param_2);
      return uVar3 & 1;
    }
  }
  return 0;
}

