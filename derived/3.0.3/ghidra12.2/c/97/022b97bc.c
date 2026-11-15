
uint FUN_022b97bc(undefined8 param_1,undefined4 param_2,undefined4 param_3,uint param_4,long param_5
                 ,undefined4 param_6,byte param_7)

{
  uint *puVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined *local_80;
  float local_78;
  uint uStack_74;
  long local_70;
  undefined8 local_68;
  undefined1 local_44 [4];
  
  local_68 = 0x9c6;
  FUN_0277d4ac(&local_68);
  uVar4 = FUN_01229624(1);
  if ((uVar4 & 1) != 0) {
    local_88 = 0x30de;
    FUN_0277d4ac(&local_88);
    puVar2 = PTR_DAT_04bb43c0;
    local_70 = 0;
    local_80 = PTR_DAT_04bc0510 + 0x10;
    local_78 = (float)local_88;
    uStack_74 = local_88._4_4_;
    lVar6 = *(long *)PTR_DAT_04bb43c0;
    uVar3 = FUN_0277d6c4(&local_78);
    if (*(long *)puVar2 != 0) {
      lVar6 = *(long *)(lVar6 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar6 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
        lVar6 = *(long *)PTR_DAT_04bc0428;
        uVar3 = FUN_0277d6c4(&local_88);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
        if (uVar3 < *(uint *)(lVar6 + 0x1d8)) {
          lVar6 = *(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8);
          if (lVar6 != 0) {
            local_70 = lVar6;
          }
        }
      }
    }
    uVar4 = FUN_01b15170(&local_80);
    if ((uVar4 & 1) != 0) {
      uStack_74 = uStack_74 | 0x10000;
    }
    local_68 = CONCAT44(uStack_74,local_78);
  }
  if ((uint)DAT_04c487d4 == (param_4 & 0xffff)) {
    local_78 = (float)*(int *)(param_5 + 0xc) * 5.0 + 5.0;
    local_80 = (undefined *)CONCAT44(local_80._4_4_,(float)*(int *)(param_5 + 8) * 5.0 + 5.0);
    if (*(long *)PTR_DAT_04bb27c8 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = FUN_0093a950(*(long *)PTR_DAT_04bb27c8 + 0x28,&local_80,0);
    }
  }
  else {
    local_78 = (float)*(int *)(param_5 + 0xc) * 5.0 + 5.0;
    local_80 = (undefined *)CONCAT44(local_80._4_4_,(float)*(int *)(param_5 + 8) * 5.0 + 5.0);
    if ((*(long *)PTR_DAT_04bb27c8 == 0) ||
       (lVar6 = *(long *)(*(long *)PTR_DAT_04bb27c8 + 0x90), lVar6 == 0)) {
      uVar7 = 0xc3fa0000;
    }
    else {
      local_44[0] = 0;
      if (DAT_04c487d4 == 0xffff) {
        uVar5 = 7;
      }
      else {
        local_88 = CONCAT44(local_88._4_4_,1);
        puVar1 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)DAT_04c487d4 & 0xffffffffU) * 8);
        if (0xff < DAT_04c487d4) {
          puVar1 = (uint *)PTR_DAT_04bc39f8;
        }
        uVar5 = 7;
        if ((*puVar1 & 2) != 0) {
          uVar5 = 5;
        }
      }
      local_88 = CONCAT44(local_88._4_4_,uVar5);
      uVar7 = FUN_00962700(lVar6,&local_80,&local_88,0,local_44);
    }
  }
  local_90 = (undefined4)local_68;
  uStack_8c = local_68._4_4_;
  uVar3 = FUN_022b8d90(uVar7,param_1,param_2,param_3,&local_90,param_4,param_5,param_6,1,param_7 & 1
                      );
  return uVar3 & 1;
}

