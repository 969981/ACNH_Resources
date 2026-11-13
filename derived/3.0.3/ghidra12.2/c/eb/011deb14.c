
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_011deb14(long param_1,long param_2,ulong param_3,undefined4 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined **local_a8;
  undefined *puStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  float local_88;
  undefined1 auStack_80 [8];
  undefined4 local_78;
  undefined4 local_70;
  float local_6c;
  undefined4 uStack_68;
  float local_64;
  undefined8 local_60;
  undefined4 uStack_58;
  float fStack_54;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 uStack_38;
  float fStack_34;
  
  local_64 = (float)*(int *)(param_2 + 0xc) * 5.0 + 5.0;
  local_6c = (float)*(int *)(param_2 + 8) * 5.0 + 5.0;
  uStack_68 = FUN_0093a950(DAT_04cfae30 + 0x28,&local_6c,0);
  uVar1 = 0;
  local_78 = 0;
  local_70 = 0;
  local_60 = _DAT_04102200;
  uStack_50 = _DAT_04102880;
  _uStack_48 = CONCAT44(uStack_68,(int)_UNK_04102888);
  local_40 = _DAT_041023d0;
  _uStack_38 = CONCAT44(local_64,(int)_UNK_041023d8);
  _uStack_58 = CONCAT44(local_6c,(int)_UNK_04102208);
  if ((*(byte *)(param_1 + 0x1e1b8) & 1) != 0) {
    lVar2 = *(long *)(param_1 + 0x1e1c0);
    if (lVar2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined8 *)(lVar2 + 0x18);
      if ((*(byte *)(lVar2 + 8) & 10) != 2) {
        uVar1 = 0;
      }
    }
  }
  if ((param_3 & 1) == 0) {
    puStack_a0 = &DAT_04061f93;
  }
  else {
    puStack_a0 = &DAT_040a0a3f;
  }
  uStack_90 = CONCAT44(uStack_68,local_6c);
  local_a8 = &PTR_LAB_048f9770;
  local_98 = 0;
  local_88 = local_64;
  FUN_037f09b0(uVar1,&local_a8,auStack_80,1,param_4,&local_60);
  return;
}

