
void FUN_00c31ec4(long *param_1,undefined4 *param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 local_8;
  undefined4 uStack_4;
  
  local_8 = *param_2;
  uStack_4 = param_2[1];
  iVar1 = FUN_0277d6c4(&local_8);
  if (iVar1 == 0x9c6) {
    pcVar2 = "MncBoxStone";
  }
  else {
    iVar1 = FUN_0277d6c4(&local_8);
    if (iVar1 == 0x9c9) {
      pcVar2 = "MncBoxGold";
    }
    else {
      iVar1 = FUN_0277d6c4(&local_8);
      if (iVar1 == 0x9cf) {
        pcVar2 = "MncBoxIron";
      }
      else {
        iVar1 = FUN_0277d6c4(&local_8);
        if (iVar1 == 0xacf) {
          pcVar2 = "MncBoxWoodSoft";
        }
        else {
          iVar1 = FUN_0277d6c4(&local_8);
          if (iVar1 == 0xad0) {
            pcVar2 = "MncBoxWoodNormal";
          }
          else {
            iVar1 = FUN_0277d6c4(&local_8);
            if (iVar1 == 0xad1) {
              pcVar2 = "MncBoxWoodHard";
            }
            else {
              iVar1 = FUN_0277d6c4(&local_8);
              if (iVar1 != 0xc12) {
                iVar1 = FUN_0277d6c4(&local_8);
                *param_1 = (long)(PTR_DAT_04bb2020 + 0x10);
                if (iVar1 == 0x9c4) {
                  pcVar2 = "MncBoxBranch";
                }
                else {
                  pcVar2 = "";
                }
                param_1[1] = (long)pcVar2;
                return;
              }
              pcVar2 = "MncBoxClay";
            }
          }
        }
      }
    }
  }
  *param_1 = (long)(PTR_DAT_04bb2020 + 0x10);
  param_1[1] = (long)pcVar2;
  return;
}

