
void FUN_002b04b0(undefined8 param_1,long *param_2,undefined8 param_3,undefined4 *param_4,
                 uint param_5)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  uint uVar7;
  undefined4 local_630;
  ErrorResultVariant aEStack_62c [4];
  undefined8 local_628;
  undefined8 local_620;
  undefined *local_618;
  undefined8 local_610;
  byte local_608;
  uint local_604;
  undefined1 auStack_600 [1440];
  undefined8 local_60;
  undefined4 local_44;
  
  puVar5 = (undefined8 *)&local_630;
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  if (*(int *)((long)param_2 + 0x674) == 0) {
    local_630 = 0;
    local_60 = local_60 & 0xffffffff00000000;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_62c,(Result *)&local_60);
    goto LAB_002b06c8;
  }
  local_618 = PTR_DAT_04bce080 + 0x10;
  memset(&local_604,0,4);
  local_610 = 0;
  local_608 = 0;
  memset(&local_604,0,4);
  local_630 = (uint)local_630._2_2_ << 0x10;
  local_628 = 0;
  local_620 = 0;
  local_610 = 0;
  local_608 = 0;
  memset(&local_604,0,4);
  uVar2 = local_610;
  local_610 = CONCAT71(local_610._1_7_,0x20);
  uVar3 = local_610;
  lVar6 = 0;
  local_610._6_2_ = SUB82(uVar2,6);
  local_610._0_6_ = CONCAT24(0xffff,(int)uVar3);
  local_610._0_2_ = CONCAT11(*(undefined1 *)((long)param_2 + 0x36),0x20);
  uVar7 = local_604;
  do {
    uVar1 = 1 << (ulong)((uint)lVar6 & 0x1f);
    if (param_2[lVar6 + 0xa7] != 0 && (*(uint *)((long)param_2 + 0x674) & uVar1) != 0) {
      uVar7 = uVar7 | uVar1;
      local_604 = uVar7;
    }
    lVar6 = lVar6 + 1;
  } while (lVar6 != 0x20);
  local_608 = (**(code **)(*param_2 + 0x38))(param_2);
  local_44 = 0;
  FUN_002a6b90(&local_60,&local_618,auStack_600,&local_44,0x5a0);
  uVar7 = (local_608 + 0x1f >> 3 & 0x3c) + 9;
  local_620 = CONCAT44(local_620._4_4_,uVar7);
  if (param_5 < uVar7) {
LAB_002b06b4:
    local_60 = CONCAT44(local_60._4_4_,0x4c0d);
  }
  else {
    memset(&local_60,0,4);
    memset(&local_60,0xff,4);
    uVar4 = (**(code **)(*param_2 + 0x50))(param_2,&local_60,param_3,&local_630);
    if ((uVar4 & 1) == 0) goto LAB_002b06b4;
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = (undefined4)local_620;
    }
    local_60 = 0;
    FUN_002282f0(&local_60);
    uVar4 = local_60;
    local_60 = local_60 & 0xffffffff00000000;
    param_2[0xd1] = uVar4;
  }
  local_44 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((long)&local_60 + 4),(Result *)&local_44);
  puVar5 = &local_60;
LAB_002b06c8:
  FUN_002296c4(param_1,puVar5);
  return;
}

