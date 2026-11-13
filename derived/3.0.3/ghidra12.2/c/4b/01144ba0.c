
uint FUN_01144ba0(long param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  byte *local_40;
  undefined4 local_38;
  
  lVar4 = *(long *)(param_1 + 0x18);
  if (lVar4 == 0) {
    uVar2 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x18))(param_2);
    local_40 = (byte *)param_2[1];
    if (local_40 == (byte *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (ulong)*local_40;
      if (*local_40 != 0) {
        uVar3 = 0;
        do {
          lVar1 = uVar3 + 1;
          uVar3 = uVar3 + 1;
        } while (local_40[lVar1] != 0);
      }
    }
    local_38 = (undefined4)uVar3;
    uVar2 = FUN_0068bec0(lVar4,param_3,&local_40);
  }
  return uVar2 & 1;
}

