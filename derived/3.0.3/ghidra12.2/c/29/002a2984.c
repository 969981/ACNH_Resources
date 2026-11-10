
void FUN_002a2984(undefined8 param_1,long param_2,undefined1 param_3,undefined1 param_4,long param_5
                 ,byte param_6)

{
  long lVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  int local_80;
  ErrorResultVariant aEStack_7c [12];
  undefined4 local_70;
  undefined4 uStack_6c;
  byte local_68;
  int local_60;
  ErrorResultVariant aEStack_5c [12];
  undefined4 local_44;
  
  piVar6 = &local_80;
  local_60 = 0;
  local_70 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_5c,(Result *)&local_70);
  uVar4 = FUN_0026c89c(DAT_04c603c8);
  uVar3 = FUN_002aaa44(param_2);
  FUN_00261010(&local_80,uVar4,&local_70,uVar3);
  FUN_00229780(&local_60,&local_80);
  if (local_60 == 0) {
    lVar1 = CONCAT44(uStack_6c,local_70);
    if (lVar1 != param_5) {
      uVar4 = FUN_0026c89c(DAT_04c603c8);
      FUN_002610a0(&local_80,uVar4,&local_70,param_5);
      FUN_00229780(&local_60,&local_80);
      if (local_60 != 0) goto LAB_002a2a10;
      if (local_68 != 0xfd) {
        lVar7 = *(long *)(param_2 + 0x50);
        bVar2 = FUN_002aaa44(param_2);
        if (lVar7 != 0) {
          lVar7 = lVar7 + (long)(int)((uint)local_68 - (uint)(bVar2 <= local_68)) * 0x6b0;
          uVar5 = FUN_002aed20(lVar7);
          if ((uVar5 & 1) != 0) {
            *(undefined1 *)(param_2 + 0x5a) = param_3;
            *(undefined1 *)(param_2 + 0x5b) = param_4;
            *(byte *)(param_2 + 0x5c) = param_6 & 1;
            FUN_00228460(param_2 + 0x5d,lVar1);
            FUN_002b0d5c(param_1,lVar7,(undefined1 *)(param_2 + 0x5a),0xb,0);
            return;
          }
        }
      }
    }
    local_44 = 0;
    local_80 = 0x10c08;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_7c,(Result *)&local_44);
  }
  else {
LAB_002a2a10:
    piVar6 = &local_60;
  }
  FUN_002296c4(param_1,piVar6);
  return;
}

