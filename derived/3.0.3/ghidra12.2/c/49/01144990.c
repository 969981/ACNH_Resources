
uint FUN_01144990(undefined4 param_1,long param_2,long *param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  byte *local_48;
  undefined4 local_40;
  undefined4 local_34;
  
  lVar4 = *(long *)(param_2 + 0x18);
  uVar2 = 0;
  if (lVar4 != 0) {
    local_34 = 0;
    (**(code **)(*param_3 + 0x18))(param_3);
    local_48 = (byte *)param_3[1];
    if (local_48 == (byte *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (ulong)*local_48;
      if (*local_48 != 0) {
        uVar3 = 0;
        do {
          lVar1 = uVar3 + 1;
          uVar3 = uVar3 + 1;
        } while (local_48[lVar1] != 0);
      }
    }
    local_40 = (undefined4)uVar3;
    uVar2 = FUN_0068c150(lVar4,&local_34,&local_48);
    if ((uVar2 & 1) != 0) {
      uVar5 = *(undefined8 *)(param_2 + 0x18);
      (**(code **)(*param_3 + 0x18))(param_3);
      local_48 = (byte *)param_3[1];
      if (local_48 == (byte *)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = (ulong)*local_48;
        if (*local_48 != 0) {
          uVar3 = 0;
          do {
            lVar4 = uVar3 + 1;
            uVar3 = uVar3 + 1;
          } while (local_48[lVar4] != 0);
        }
      }
      local_40 = (undefined4)uVar3;
      FUN_0068cba0(param_1,uVar5,&local_48);
    }
  }
  return uVar2 & 1;
}

