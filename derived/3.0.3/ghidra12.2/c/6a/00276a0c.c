
void FUN_00276a0c(long *param_1,long param_2,undefined1 param_3,undefined8 param_4,
                 undefined4 param_5,uint param_6)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined4 local_68 [4];
  undefined1 local_58;
  undefined1 local_57;
  undefined1 local_56;
  undefined1 auStack_4d [5];
  undefined4 local_48;
  undefined1 local_44;
  
  plVar1 = (long *)FUN_002aaa54();
  local_44 = 0;
  local_48 = 0x1000000;
  if ((param_6 & 1) == 0) {
    local_68[0] = (**(code **)(*param_1 + 0x18))(param_1);
    lVar3 = FUN_002a9fb0(plVar1,local_68,param_2 + 0x18,0xf,&local_48);
  }
  else {
    plVar2 = (long *)FUN_002ba790(DAT_04c61168);
    lVar3 = (**(code **)(*plVar2 + 0x38))(plVar2,*(undefined8 *)(param_2 + 0x10));
    if (lVar3 == 0) {
      return;
    }
    if (0x1f < *(byte *)(lVar3 + 0x38)) {
      return;
    }
    local_68[0] = (**(code **)(*param_1 + 0x18))(param_1);
    lVar3 = (**(code **)(*plVar1 + 0x68))
                      (plVar1,local_68,*(undefined1 *)(lVar3 + 0x38),0xf,&local_48);
  }
  if (lVar3 != 0) {
    local_58 = 2;
    local_56 = 0;
    local_57 = param_3;
    FUN_00228460((ulong)&local_58 | 3,param_4);
    FUN_00228480(auStack_4d,param_5);
    FUN_002a9f34(local_68,plVar1,&local_58);
  }
  return;
}

