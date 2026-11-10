
void FUN_00220528(long param_1,int param_2)

{
  long lVar1;
  ulong uVar2;
  int local_30 [4];
  
  if (DAT_04be2344 != '\0') {
    DAT_04c5fc04 = FUN_00221d08();
    DAT_04c5fc08 = FUN_00221d2c();
    lVar1 = FUN_00221d98();
    if (lVar1 != 0) {
      DAT_04c5ff40 = FUN_00221d98();
      DAT_04c5ff44 = FUN_00221dbc();
    }
    FUN_002219fc();
    FUN_00221d38();
    lVar1 = param_1 + 0x20;
    uVar2 = FUN_002212e4(lVar1);
    if (((uVar2 & 1) == 0) && (uVar2 = FUN_0021f6f8(param_1 + 0x578), (uVar2 & 1) != 0)) {
      *(int *)(param_1 + 0x1c) = param_2;
      if (param_2 == 0) {
        *(undefined1 *)(param_1 + 0x570) = 1;
      }
      FUN_00220bcc(local_30,lVar1,param_1,param_2);
      if (local_30[0] == 0) {
        FUN_002211bc(lVar1,1);
      }
    }
  }
  return;
}

