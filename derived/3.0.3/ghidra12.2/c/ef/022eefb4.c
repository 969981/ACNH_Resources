
uint FUN_022eefb4(undefined8 param_1,undefined2 *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined2 local_88 [4];
  undefined *local_80;
  undefined *puStack_78;
  int local_70;
  int iStack_6c;
  undefined *local_68;
  int local_60;
  int iStack_5c;
  undefined2 local_58;
  undefined4 local_56;
  undefined1 local_52;
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_44;
  undefined2 local_3c;
  undefined2 local_38;
  undefined2 local_36;
  undefined2 local_34;
  undefined *local_30;
  undefined8 local_28;
  
  local_30 = PTR_DAT_04bb2018 + 0x10;
  local_28 = 0;
  uVar4 = FUN_022ef154(param_1,&local_30,param_2);
  if ((uVar4 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    local_34 = *param_2;
    local_50 = 0xffffffffffffffff;
    local_38 = (undefined2)local_28;
    local_36 = (undefined2)((ulong)local_28 >> 0x20);
    local_58 = 0xff00;
    local_56 = 0;
    local_3c = 0xff00;
    local_52 = 0;
    local_48 = 0;
    local_80 = PTR_DAT_04bbc1a0 + 0x10;
    puStack_78 = PTR_DAT_04bb2010 + 0x10;
    local_88[0] = *(undefined2 *)PTR_DAT_04bb6298;
    fVar5 = (float)(int)local_28 * 10.0 + 2.5;
    fVar6 = (float)local_28._4_4_ * 10.0 + 2.5;
    fVar8 = (float)(int)local_28 * 10.0 + 10.0 + -2.5;
    fVar7 = (float)local_28._4_4_ * 10.0 + 10.0 + -2.5;
    local_60 = (int)((float)(int)fVar5 / 5.0) - (uint)(fVar5 < 0.0);
    iStack_5c = (int)((float)(int)fVar6 / 5.0) - (uint)(fVar6 < 0.0);
    iVar1 = (int)((float)(int)fVar8 / 5.0) - (uint)(fVar8 < 0.0);
    iVar2 = (int)((float)(int)fVar7 / 5.0) - (uint)(fVar7 < 0.0);
    local_70 = local_60;
    if (iVar1 <= local_60) {
      local_70 = iVar1;
    }
    if (local_60 <= iVar1) {
      local_60 = iVar1;
    }
    iStack_6c = iStack_5c;
    if (iVar2 <= iStack_5c) {
      iStack_6c = iVar2;
    }
    if (iStack_5c <= iVar2) {
      iStack_5c = iVar2;
    }
    local_44 = 0x100000041200000;
    local_68 = puStack_78;
    uVar3 = FUN_022ef4b0(param_1,local_88,&local_38);
  }
  return uVar3 & 1;
}

