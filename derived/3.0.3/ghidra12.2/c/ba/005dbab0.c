
void FUN_005dbab0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,uint param_5
                 ,uint param_6,uint param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_68;
  
  if (*(uint *)(param_4 + 0x26c) != 0) {
    if (((*(uint *)(param_4 + 0x26c) >> 2 & 1) != 0) && ((param_7 & 1) != 0)) {
      uVar2 = *(undefined8 *)(param_4 + 0x18);
      lVar1 = FUN_0053b100(param_4);
      local_68 = CONCAT44(*(undefined4 *)(lVar1 + 0x14),*(undefined4 *)(lVar1 + 0x14));
      FUN_005d4350(param_4 + 0x1b0,uVar2,param_4 + 0x20,param_4 + 0x30,&local_68);
      FUN_005d4c60(param_2,param_3,param_4,param_4 + 0x1f0);
    }
    uVar2 = FUN_0053b3d0(param_4);
    if ((*(byte *)(param_4 + 0x26c) >> 2 & 1) != 0) {
      FUN_0053b380(param_4,*(undefined8 *)(param_4 + 0x1f0));
    }
    lVar1 = FUN_0043c4e0(DAT_04c6f410);
    if (lVar1 != 0) {
      FUN_00443a00(lVar1,"TtVCP Collision");
    }
    FUN_005dbbf0(param_1,param_4,param_5 & 1,param_6 & 1,1);
    lVar1 = FUN_0043c4e0(DAT_04c6f410);
    if (lVar1 != 0) {
      FUN_00443a70(lVar1,&DAT_04085310);
    }
    FUN_0053b380(param_4,uVar2);
  }
  return;
}

