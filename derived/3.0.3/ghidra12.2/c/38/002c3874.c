
void FUN_002c3874(long param_1,long *param_2)

{
  int iVar1;
  ulong uVar2;
  undefined *local_58;
  undefined4 local_50 [8];
  
  FUN_002b4378(&local_58,param_2);
  uVar2 = FUN_0021fea0(local_50);
  if ((uVar2 & 1) == 0) {
    local_58 = PTR_DAT_04bcba18 + 0x10;
    FUN_0021f584(local_50);
  }
  else {
    iVar1 = FUN_002b43fc(param_2);
    local_58 = PTR_DAT_04bcba18 + 0x10;
    FUN_0021f584(local_50);
    if (iVar1 != 0) {
      if (*(long *)(param_1 + 0x18) != 0) {
        uVar2 = FUN_002b44c4(param_2);
        if ((uVar2 & 1) == 0) {
          FUN_002c7624(*(undefined8 *)(param_1 + 0x18),param_2);
          return;
        }
        FUN_002c7538();
      }
      return;
    }
  }
  local_50[0] = 0;
  local_58 = (undefined *)0x1;
  (**(code **)(*param_2 + 0x20))(param_2,&local_58);
  return;
}

