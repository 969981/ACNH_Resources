
void FUN_0144539c(long *param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined4 local_3c;
  undefined2 local_38;
  undefined2 local_36;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined8 local_2c;
  byte local_24;
  undefined4 local_8;
  undefined4 uStack_4;
  
  uVar2 = (**(code **)(*param_1 + 0x298))();
  if (((uVar2 & 1) != 0) && (iVar1 = (**(code **)(*param_1 + 0x198))(param_1), iVar1 != 0)) {
    lVar3 = param_1[0x5d];
    local_8 = *(undefined4 *)(lVar3 + 0x2d0);
    local_3c._0_3_ = CONCAT12((char)local_8,DAT_04c487d4);
    local_38 = (undefined2)*(undefined4 *)(lVar3 + 0x2c8);
    local_36 = (undefined2)*(undefined4 *)(lVar3 + 0x2cc);
    FUN_01476a50(&local_8);
    local_2c = 0;
    local_34 = local_8;
    uStack_30 = uStack_4;
    local_24 = (**(code **)(*param_1 + 0x1a0))(param_1,0);
    local_24 = local_24 & 1;
    FUN_0150b318(&local_3c);
  }
  local_3c = 2;
  if ((*(uint *)(param_1 + 0x75) >> 2 & 1) == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01445484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x340))(param_1);
  return;
}

