
int FUN_004def00(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 local_68;
  undefined8 local_60;
  ulong uStack_58;
  undefined4 local_50;
  long local_48;
  
  puVar2 = PTR_DAT_048607b8;
  local_48 = (long)*(int *)(param_1 + 0x240);
  local_68 = param_2;
  lVar3 = FUN_004705d0(param_1 + 0x2c8,PTR_DAT_048607b8,&local_68,&local_48);
  iVar1 = *(int *)(*(long *)(param_1 + 0x2c8) + ((lVar3 << 0x20) >> 0x1c) + 8);
  if (*(int *)(param_1 + 0x240) == iVar1) {
    local_60 = DAT_04c70e10;
    uStack_58 = DAT_04c70e18;
    local_68 = DAT_04c70e08;
    if ((DAT_04c70e18 & 1) == 0) {
      local_50 = DAT_04c70e20;
      FUN_004dae00(param_1 + 0x210,iVar1,&local_68);
    }
    else {
      uVar5 = DAT_04c70e18 & 0xfffffffffffffffe;
      FUN_0043dd30(uVar5);
      local_50 = DAT_04c70e20;
      FUN_004dae00(param_1 + 0x210,iVar1,&local_68);
      FUN_0043dd50(uVar5);
    }
    uVar4 = *(uint *)(param_1 + 0x2b8);
    if (uVar4 == (*(uint *)(param_1 + 700) & 0x3fffffff)) {
      FUN_00426990(puVar2,param_1 + 0x2b0,4);
      uVar4 = *(uint *)(param_1 + 0x2b8);
    }
    *(undefined4 *)(*(long *)(param_1 + 0x2b0) + (long)(int)uVar4 * 4) = 0;
    *(uint *)(param_1 + 0x2b8) = uVar4 + 1;
  }
  return iVar1;
}

