
undefined8 FUN_003d1b20(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint local_88;
  byte local_84;
  int *local_80 [3];
  undefined8 local_68;
  long local_60;
  undefined4 local_34;
  
  FUN_003d2b70(local_80);
  iVar1 = *local_80[0];
  if (iVar1 != 0) {
    uVar3 = FUN_003d2c48(local_80,&local_68,0);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    if (local_60 == 0) {
      iVar1 = FUN_003d2c98(local_80);
      if (iVar1 == 0) {
        return 1;
      }
      iVar6 = 0;
      do {
        uVar3 = FUN_003d2cb0(local_80,&local_68,iVar6);
        if ((uVar3 & 1) != 0) {
          uVar3 = FUN_003d0c2c(param_1,local_68 & 0xffffffff,param_3,local_68._4_4_,param_4);
          if ((uVar3 & 1) == 0) {
            return 0;
          }
        }
        iVar6 = iVar6 + 1;
      } while (iVar1 != iVar6);
      return 1;
    }
    (**(code **)(*param_1 + 0x10))(param_1,local_68 & 0xffffffff);
    if (iVar1 != 1) {
      iVar6 = 1;
      do {
        uVar3 = FUN_003d2c48(local_80,&local_68,iVar6);
        if ((uVar3 & 1) == 0) {
          return 0;
        }
        if (local_60 != 0) {
          (**(code **)(*param_1 + 0x10))(param_1,local_68 & 0xffffffff);
        }
        iVar6 = iVar6 + 1;
      } while (iVar1 != iVar6);
    }
  }
  iVar1 = FUN_003d2c98(local_80);
  if (iVar1 != 0) {
    iVar6 = 0;
    do {
      uVar3 = FUN_003d2cb0(local_80,&local_88,iVar6);
      if (((uVar3 & 1) != 0) && ((local_84 >> 3 & 1) != 0)) {
        uVar7 = local_88 >> 0x18;
        if (uVar7 == 3) {
          if (local_88 != 0xffffffff) {
            local_34 = 0xffffffff;
            uVar3 = FUN_003b87e4(param_1[1],&local_34,local_88);
            if (((uVar3 & 1) != 0) &&
               (lVar4 = (**(code **)(*param_1 + 0x20))(param_1,local_34), lVar4 != 0)) {
              FUN_003c91bc(&local_68,lVar4);
              piVar5 = (int *)FUN_003c94ac(&local_68);
              if ((piVar5 != (int *)0x0) && (*piVar5 != 0)) {
                FUN_003d20a0(param_1,piVar5[1],param_3);
              }
            }
          }
        }
        else if (uVar7 == 2) {
          local_68 = 0xffffffffffffffff;
          local_60 = 0;
          uVar3 = FUN_003b88c4(param_1[1],local_88,&local_68);
          if (((uVar3 & 1) != 0) && ((uint)local_68 != -1)) {
            iVar2 = FUN_003b8458(param_1[1]);
            if (iVar2 == 3) {
              FUN_003d1fd4(param_1,local_68 & 0xffffffff,param_3);
            }
            else if ((iVar2 == 1) && (uVar7 = (uint)local_68, (uint)local_68 <= local_68._4_4_)) {
              do {
                FUN_003d1dd8(param_1,uVar7,param_3);
                uVar7 = uVar7 + 1;
              } while (uVar7 <= local_68._4_4_);
            }
          }
        }
        else if ((uVar7 == 1) && (iVar2 = FUN_003b8458(param_1[1],local_88), iVar2 == 1)) {
          FUN_003d1dd8(param_1,local_88,param_3);
        }
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 != iVar1);
  }
  return 1;
}

