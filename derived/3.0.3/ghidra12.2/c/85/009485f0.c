
void FUN_009485f0(undefined4 param_1,undefined4 param_2,long param_3,undefined8 param_4,
                 undefined8 param_5,long param_6,int param_7)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined *local_68;
  undefined *puStack_60;
  undefined8 local_58;
  undefined *local_50;
  undefined8 local_48;
  
  lVar1 = FUN_00948710();
  if (lVar1 != 0) {
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
      local_58 = 0;
      local_68 = PTR_DAT_04bbc1a0 + 0x10;
      puStack_60 = PTR_DAT_04bb2010 + 0x10;
      local_48 = 0;
      local_50 = puStack_60;
      uVar3 = FUN_0096b8d0(param_1,param_2,lVar2,lVar1,param_5,&local_68);
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
        FUN_0096e9e0(*puVar4,&local_68);
        if (param_6 != 0) {
          *(undefined4 *)(param_6 + 0x10) = (undefined4)local_58;
          *(undefined4 *)(param_6 + 0x14) = local_58._4_4_;
          *(undefined4 *)(param_6 + 0x20) = (undefined4)local_48;
          *(undefined4 *)(param_6 + 0x24) = local_48._4_4_;
        }
      }
    }
  }
  return;
}

