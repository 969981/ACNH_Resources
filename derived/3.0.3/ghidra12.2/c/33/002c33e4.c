
void FUN_002c33e4(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [16];
  int local_50;
  ErrorResultVariant aEStack_4c [12];
  int local_40 [4];
  undefined4 local_24;
  
  if ((*(char *)(param_1 + 0x20) != '\0') && (*(long *)(param_1 + 8) != 0)) {
    if ((param_2 & 1) != 0) {
      if ((DAT_04c603c8 == 0) || (uVar2 = FUN_0026c550(), (uVar2 & 1) == 0)) {
        *(undefined2 *)(PTR_DAT_04bccf00 + 0x5c) =
             *(undefined2 *)(*(long *)(param_1 + 0x200) + 0x6a8);
      }
      if (*(int *)(param_1 + 0x208) == 4) {
        FUN_00220f24(param_1 + 0x208);
        return;
      }
      lVar1 = param_1 + 0x20c;
      FUN_002296c4(local_40,lVar1);
      if (local_40[0] != 0) {
        FUN_002296c4(local_40,lVar1);
        local_24 = 0;
        local_50 = 0x6c05;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4c,(Result *)&local_24);
        uVar3 = *(undefined8 *)(param_1 + 8);
        if (local_40[0] == local_50) {
          FUN_00221064(uVar3);
        }
        else {
          FUN_002296c4(auStack_60,lVar1);
          FUN_00220ff8(uVar3,auStack_60);
        }
        *(undefined8 *)(param_1 + 8) = 0;
        FUN_00220f24(param_1 + 0x208);
        return;
      }
    }
    FUN_002c30d0(param_1);
  }
  return;
}

