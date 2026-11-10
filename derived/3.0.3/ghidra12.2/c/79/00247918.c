
void FUN_00247918(undefined8 param_1,undefined8 param_2,Result *param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  undefined4 local_30;
  ErrorResultVariant aEStack_2c [12];
  undefined4 local_14;
  
  uVar2 = *(uint *)param_3;
  uVar4 = (ulong)uVar2;
  if (uVar2 == 0) {
    local_30 = 0;
  }
  else {
    uVar3 = uVar2 >> 9 & 0x1fff;
    if ((uVar2 & 0x1ff) == 0xcb && uVar3 - 0x11 < 5) {
switchD_002479bc_caseD_5:
      local_14 = 0;
      local_30 = 0xa46e;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_2c,(Result *)&local_14);
      FUN_002296c4(param_1,&local_30);
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&local_30,param_3);
      FUN_0022b434(param_1,&local_30);
      return;
    }
    if (((uVar2 & 0x1ff) == 0xcb) && (uVar3 - 0x16 < 5)) {
      if ((uVar4 & 0x3fffff) == 0x30cb) {
        local_30 = 0xc421;
      }
      else {
        if ((uVar4 & 0x3fffff) != 0x2ecb) goto switchD_002479bc_caseD_5;
        local_30 = 0xc420;
      }
    }
    else {
      uVar1 = (uVar4 & 0x3fe1ff) - 0x40cb;
      switch(uVar1 >> 0xd | uVar1 << 0x33) {
      case 0:
        local_30 = 0x6c1b;
        break;
      default:
        local_30 = 0x10c08;
        break;
      case 2:
        uVar4 = uVar4 & 0x3fffff;
        if (uVar4 == 0x86cb) {
          local_30 = 0x6838;
        }
        else if (uVar4 == 0x84cb) {
          local_30 = 0x6c0e;
        }
        else {
          if (uVar4 != 0x82cb) goto switchD_002479bc_caseD_5;
          local_30 = 0x6c1c;
        }
        break;
      case 5:
        goto switchD_002479bc_caseD_5;
      case 7:
        local_30 = 0x6422;
      }
    }
  }
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_2c,(Result *)&local_14);
  FUN_002296c4(param_1,&local_30);
  return;
}

