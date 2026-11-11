
void FUN_005d4c60(undefined8 param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined2 local_60;
  undefined2 local_5e;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  undefined1 local_40;
  
  if ((*(char *)(param_3 + 0x268) != '\0') && ((*(byte *)(param_3 + 0x26c) >> 2 & 1) != 0)) {
    lVar1 = FUN_0043c4e0(DAT_04c6f410);
    uVar2 = 0;
    if (lVar1 != 0) {
      uVar2 = FUN_00443a00(lVar1,"TtVCP Collision Compute Contact Planes");
    }
    uStack_68 = *(undefined8 *)(param_3 + 0x1c8);
    local_58 = *(undefined8 *)(param_3 + 0x1d0);
    uStack_50 = *(undefined8 *)(param_3 + 0x1e0);
    local_80 = *(undefined8 *)(param_3 + 0x1b0);
    uStack_78 = *(undefined8 *)(param_3 + 0x1b8);
    local_60 = *(undefined2 *)(*(long *)(param_3 + 0x18) + 0x1d8);
    local_70 = *(undefined8 *)(param_3 + 0x1c0);
    local_40 = 1;
    local_5e = local_60;
    local_48 = param_3;
    FUN_005d4710(uVar2,param_2,param_3,&local_80,*param_4);
    lVar1 = FUN_0043c4e0(DAT_04c6f410);
    if (lVar1 != 0) {
      FUN_00443a70(lVar1,&DAT_04085310);
    }
  }
  return;
}

