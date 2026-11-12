
void FUN_00948180(undefined4 param_1,undefined4 param_2,long param_3,undefined8 param_4,
                 undefined8 param_5,long param_6,int param_7,uint param_8)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined *local_78;
  undefined *puStack_70;
  undefined8 local_68;
  undefined *local_60;
  undefined8 local_58;
  
  lVar1 = FUN_00947b80();
  if (((lVar1 != 0) || (lVar1 = FUN_00947d80(0,param_4), lVar1 != 0)) ||
     (lVar1 = FUN_00947f80(0,param_4), lVar1 != 0)) {
    if (param_7 == 1) {
      lVar2 = *(long *)(param_3 + 0x68);
    }
    else if (param_7 == 3) {
      lVar2 = *(long *)(param_3 + 0x78);
    }
    else {
      if (param_7 != 2) {
        return;
      }
      lVar2 = *(long *)(param_3 + 0x70);
    }
    if (lVar2 != 0) {
      local_68 = 0;
      local_78 = PTR_DAT_04bbc1a0 + 0x10;
      puStack_70 = PTR_DAT_04bb2010 + 0x10;
      local_58 = 0;
      local_60 = puStack_70;
      uVar3 = FUN_0096dcb0(param_1,param_2,lVar2,lVar1,param_5,&local_78,param_8 & 1);
      if ((uVar3 & 1) != 0) {
        if (param_7 == 1) {
          puVar4 = (undefined8 *)(param_3 + 0x68);
        }
        else if (param_7 == 3) {
          puVar4 = (undefined8 *)(param_3 + 0x78);
        }
        else {
          puVar4 = (undefined8 *)(param_3 + 0x70);
        }
        FUN_0096e9e0(*puVar4,&local_78);
        if (param_6 != 0) {
          *(undefined4 *)(param_6 + 0x10) = (undefined4)local_68;
          *(undefined4 *)(param_6 + 0x14) = local_68._4_4_;
          *(undefined4 *)(param_6 + 0x20) = (undefined4)local_58;
          *(undefined4 *)(param_6 + 0x24) = local_58._4_4_;
        }
      }
    }
  }
  return;
}

