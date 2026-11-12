
undefined8 FUN_00695ab0(long param_1,long *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  char *local_70;
  ulong local_68;
  undefined8 local_60;
  long lStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  byte local_28 [4];
  uint local_24;
  
  lVar1 = param_1 + 8;
  uVar2 = FUN_00694030(lVar1);
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  local_50 = 0;
  uStack_48 = 0;
  local_60 = 7;
  lStack_58 = param_3;
  if ((*(code **)(param_1 + 0x220) != (code *)0x0) &&
     (uVar2 = (**(code **)(param_1 + 0x220))(lVar1,&local_60,*(undefined8 *)(param_1 + 0x228)),
     (uVar2 & 1) == 0)) {
    return 0;
  }
  do {
    if (param_3 == 0) {
      FUN_00694514(lVar1);
      local_60 = CONCAT44(local_60._4_4_,8);
      if ((*(code **)(param_1 + 0x220) == (code *)0x0) ||
         (uVar2 = (**(code **)(param_1 + 0x220))(lVar1,&local_60,*(undefined8 *)(param_1 + 0x228)),
         (uVar2 & 1) != 0)) {
        FUN_00694588(lVar1);
        return 1;
      }
      return 0;
    }
    local_28[0] = 0;
    uVar2 = (**(code **)(*param_2 + 0x10))(param_2,local_28,1);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    local_70 = (char *)0x0;
    local_68 = 0;
    if (local_28[0] < 0xa0) {
      return 0;
    }
    if (local_28[0] < 0xc0) {
      uVar2 = (ulong)local_28[0] & 0x1f;
      uVar4 = (uint)uVar2;
joined_r0x00695b94:
      if (uVar4 != 0) {
LAB_00695bf4:
        uVar3 = (**(code **)(*param_2 + 0x18))(param_2,&local_70,uVar2);
        if ((uVar3 & 1) == 0) {
          if (*(ulong *)(param_1 + 0x218) < uVar2) {
            return 0;
          }
          uVar3 = (**(code **)(*param_2 + 0x10))(param_2,*(undefined8 *)(param_1 + 0x210),uVar2);
          if ((uVar3 & 1) == 0) {
            return 0;
          }
          local_70 = *(char **)(param_1 + 0x210);
        }
        uVar3 = nn::util::VerifyUtf8String(local_70,uVar2);
        if ((uVar3 & 1) == 0) {
          return 0;
        }
      }
    }
    else {
      if (local_28[0] != 0xd9) {
        if (local_28[0] == 0xda) {
          local_24 = local_24 & 0xffff0000;
          uVar2 = (**(code **)(*param_2 + 0x10))(param_2,&local_24,2);
          if ((uVar2 & 1) == 0) {
            return 0;
          }
          uVar4 = local_24 & 0xffff;
          uVar2 = (ulong)(local_24 >> 8 & 0xff | (local_24 & 0xff) << 8);
        }
        else {
          if (local_28[0] != 0xdb) {
            return 0;
          }
          local_24 = 0;
          uVar2 = (**(code **)(*param_2 + 0x10))(param_2,&local_24,4);
          if ((uVar2 & 1) == 0) {
            return 0;
          }
          uVar4 = (local_24 & 0xff00ff00) >> 8 | (local_24 & 0xff00ff) << 8;
          uVar2 = (ulong)(uVar4 >> 0x10 | uVar4 << 0x10);
          uVar4 = local_24;
        }
        goto joined_r0x00695b94;
      }
      local_24 = local_24 & 0xffffff00;
      uVar2 = (**(code **)(*param_2 + 0x10))(param_2,&local_24,1);
      if ((uVar2 & 1) == 0) {
        return 0;
      }
      uVar2 = (ulong)(byte)local_24;
      if (uVar2 != 0) goto LAB_00695bf4;
    }
    local_68 = uVar2;
    uVar2 = FUN_0069438c(lVar1,local_70,uVar2);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    uVar2 = FUN_00694b3c(param_1,param_2);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    param_3 = param_3 + -1;
  } while( true );
}

