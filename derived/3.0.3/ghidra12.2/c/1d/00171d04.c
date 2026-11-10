
int FUN_00171d04(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_28;
  
  if (*(char *)(param_1 + 0x9aa) == '\0') {
    if (*(int *)(param_1 + 0x930) == 1) goto LAB_00171d54;
  }
  else if (*(int *)(param_1 + 0x938) < 1) {
LAB_00171d54:
    if (0x2aaaaaaaaaaaaaaa <
        ((ulong)(param_3 * -0x5555555555555555) >> 1 | param_3 * -0x5555555555555555 << 0x3f)) {
      return -0x1f5;
    }
    local_28 = 0;
    local_88 = 0;
    local_50 = 0;
    uStack_48 = 0;
    local_98 = 0;
    local_90 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_80 = 0;
    uStack_78 = 0;
    iVar1 = FUN_00167c38(&local_28,&local_88,param_2,param_3,param_1 + 0x890);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (*(char *)(param_1 + 0x9aa) == '\0') {
      iVar1 = FUN_001671b4(param_1,0,local_28,local_88);
    }
    else {
      FUN_00167594(&local_80,param_3,4,0,0);
      local_70 = local_88;
      uStack_68 = local_28;
      iVar1 = FUN_0016e824(param_1,&local_80,1);
    }
    FUN_001689f8(param_1 + 0x890,local_28);
    if (iVar1 != 0) {
      return iVar1;
    }
    FUN_00167498(&local_98);
    if (*(char *)(param_1 + 0x9aa) != '\0') {
      param_4 = 0;
    }
    lVar2 = FUN_0016c73c(param_1,1,0,&local_98,1,param_4);
    if (lVar2 == 0) {
      return -0x385;
    }
    if (*(char *)(param_1 + 0x9aa) == '\0') {
      FUN_001728a4(lVar2,2);
      *(undefined4 *)(param_1 + 0x934) = 1;
      *(int *)(param_1 + 0x930) = *(int *)(param_1 + 0x930) + 2;
      return 0;
    }
    FUN_001728a4(lVar2,1);
    *(undefined8 *)(param_1 + 0x938) = 0x100000001;
    return 0;
  }
  return -0x1f9;
}

