
void FUN_002a27dc(undefined8 param_1,long param_2,undefined1 param_3,long param_4)

{
  long lVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  int local_70;
  ErrorResultVariant aEStack_6c [12];
  undefined4 local_60;
  undefined4 uStack_5c;
  byte local_58;
  int local_50;
  ErrorResultVariant aEStack_4c [12];
  undefined4 local_34;
  
  piVar6 = &local_70;
  local_50 = 0;
  local_60 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4c,(Result *)&local_60);
  uVar4 = FUN_0026c89c(DAT_04c603c8);
  uVar3 = FUN_002aaa44(param_2);
  FUN_00261010(&local_70,uVar4,&local_60,uVar3);
  FUN_00229780(&local_50,&local_70);
  if (local_50 == 0) {
    lVar1 = CONCAT44(uStack_5c,local_60);
    if (lVar1 != param_4) {
      uVar4 = FUN_0026c89c(DAT_04c603c8);
      FUN_002610a0(&local_70,uVar4,&local_60,param_4);
      FUN_00229780(&local_50,&local_70);
      if (local_50 != 0) goto LAB_002a285c;
      lVar7 = *(long *)(param_2 + 0x50);
      bVar2 = FUN_002aaa44(param_2);
      if (lVar7 != 0) {
        lVar7 = lVar7 + (long)(int)((uint)local_58 - (uint)(bVar2 <= local_58)) * 0x6b0;
        uVar5 = FUN_002aed20(lVar7);
        if ((uVar5 & 1) != 0) {
          *(undefined1 *)(param_2 + 0x5a) = 0x16;
          *(undefined1 *)(param_2 + 0x5b) = param_3;
          FUN_00228460(param_2 + 0x5c,lVar1);
          FUN_002b0d5c(param_1,lVar7,(undefined1 *)(param_2 + 0x5a),10,0);
          return;
        }
      }
    }
    local_34 = 0;
    local_70 = 0x10c08;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_6c,(Result *)&local_34);
  }
  else {
LAB_002a285c:
    piVar6 = &local_50;
  }
  FUN_002296c4(param_1,piVar6);
  return;
}

