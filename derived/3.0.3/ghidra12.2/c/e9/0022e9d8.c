
void FUN_0022e9d8(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  int *piVar2;
  int local_98;
  ErrorResultVariant aEStack_94 [12];
  undefined8 local_88;
  undefined1 auStack_80 [32];
  int local_60;
  ErrorResultVariant aEStack_5c [12];
  undefined1 auStack_50 [32];
  undefined1 local_28 [4];
  undefined4 local_24;
  
  FUN_0021f4e0(auStack_50);
  local_28[0] = 0;
  local_60 = 0;
  local_88 = (undefined **)((ulong)local_88._4_4_ << 0x20);
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_5c,(Result *)&local_88);
  FUN_00226d78(&local_88,param_3,param_4 + 0x38,0x5dc,auStack_50,local_28,param_4 + 0x5f8);
  FUN_00229780(&local_60,&local_88);
  if (local_60 == 0) {
    uVar1 = FUN_0021fea0(auStack_50);
    if (((((uVar1 & 1) != 0) && (uVar1 = FUN_002200e4(param_2 + 0x20,auStack_50), (uVar1 & 1) == 0))
        && (uVar1 = FUN_002200e4(param_2 + 0x40,auStack_50), (uVar1 & 1) == 0)) &&
       ((uVar1 = FUN_002200e4(param_2 + 0x60,auStack_50), (uVar1 & 1) == 0 &&
        (uVar1 = FUN_002200e4(param_2 + 0x80,auStack_50), (uVar1 & 1) == 0)))) {
      FUN_00227258(&local_88);
      FUN_00227440(&local_98,&local_88,auStack_50);
      FUN_00227418(param_4 + 0x630,&local_88);
      *(undefined1 *)(param_4 + 0x628) = local_28[0];
      FUN_0022b59c(&local_98,param_4);
      FUN_00229780(&local_60,&local_98);
      if (local_60 == 0) {
        local_98 = 0;
        local_24 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_94,(Result *)&local_24);
        piVar2 = &local_98;
      }
      else {
        piVar2 = &local_60;
      }
      FUN_002296c4(param_1,piVar2);
      local_88 = &PTR_LAB_04840580;
      FUN_0021f584(auStack_80);
      goto LAB_0022eb28;
    }
LAB_0022eb18:
    local_88 = (undefined **)CONCAT44(local_88._4_4_,0x2c09);
    local_98 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((long)&local_88 + 4),(Result *)&local_98);
    piVar2 = (int *)&local_88;
  }
  else {
    if (*(char *)(param_2 + 8) == '\0') {
      local_98 = 0;
      local_88._0_4_ = 0x2c09;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((long)&local_88 + 4),(Result *)&local_98);
      goto LAB_0022eb18;
    }
    local_98 = 0;
    local_88 = (undefined **)CONCAT44(local_88._4_4_,0x10c07);
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((long)&local_88 + 4),(Result *)&local_98);
    piVar2 = &local_60;
  }
  FUN_002296c4(param_1,piVar2);
LAB_0022eb28:
  FUN_0021f584(auStack_50);
  return;
}

