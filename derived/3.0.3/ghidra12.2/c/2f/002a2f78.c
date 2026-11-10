
void FUN_002a2f78(undefined8 param_1,long param_2,undefined1 param_3,long param_4,byte param_5)

{
  long lVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  int local_78;
  ErrorResultVariant aEStack_74 [12];
  undefined4 local_68;
  undefined4 uStack_64;
  byte local_60;
  int local_54;
  ErrorResultVariant aEStack_50 [12];
  undefined4 local_44;
  
  local_54 = 0;
  local_68 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_50,(Result *)&local_68);
  uVar4 = FUN_0026c89c(DAT_04c603c8);
  uVar3 = FUN_002aaa44(param_2);
  FUN_00261010(&local_78,uVar4,&local_68,uVar3);
  FUN_00229780(&local_54,&local_78);
  if (local_54 == 0) {
    lVar1 = CONCAT44(uStack_64,local_68);
    if (lVar1 != param_4) {
      uVar4 = FUN_0026c89c(DAT_04c603c8);
      FUN_002610a0(&local_78,uVar4,&local_68,param_4);
      FUN_00229780(&local_54,&local_78);
      if (local_54 != 0) goto LAB_002a2ffc;
      lVar7 = *(long *)(param_2 + 0x50);
      bVar2 = FUN_002aaa44(param_2);
      if (lVar7 != 0) {
        lVar7 = lVar7 + (long)(int)((uint)local_60 - (uint)(bVar2 <= local_60)) * 0x6b0;
        uVar5 = FUN_002aed20(lVar7);
        if ((uVar5 & 1) != 0) {
          *(undefined1 *)(param_2 + 0x5a) = 0x13;
          *(undefined1 *)(param_2 + 0x5b) = param_3;
          *(byte *)(param_2 + 0x5c) = param_5 & 1;
          FUN_00228460(param_2 + 0x5d,lVar1);
          FUN_002b0d5c(param_1,lVar7,(undefined1 *)(param_2 + 0x5a),0xb,0);
          return;
        }
      }
    }
    local_44 = 0;
    local_78 = 0x10c08;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_44);
    piVar6 = &local_78;
  }
  else {
LAB_002a2ffc:
    piVar6 = &local_54;
  }
  FUN_002296c4(param_1,piVar6);
  return;
}

