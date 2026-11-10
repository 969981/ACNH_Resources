
bool FUN_002c4e88(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  undefined4 local_54 [4];
  int local_44;
  ErrorResultVariant aEStack_40 [12];
  undefined4 local_34;
  
  local_34 = 0;
  local_44 = 0;
  local_54[0] = 0;
  lVar1 = 0;
  if (*(int *)(param_1 + 0x90) != 0) {
    lVar1 = *(long *)(param_1 + 0x88);
  }
  lVar2 = 0;
  if (lVar1 != 0) {
    lVar2 = lVar1 + 0x10;
  }
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_40,(Result *)local_54);
  uVar3 = (*(uint *)(lVar2 + 0x20) & 0xff00ff00) >> 8 | (*(uint *)(lVar2 + 0x20) & 0xff00ff) << 8;
  *(uint *)(param_1 + 0x60) = uVar3 >> 0x10 | uVar3 << 0x10;
  uVar3 = (*(uint *)(lVar2 + 0x24) & 0xff00ff00) >> 8 | (*(uint *)(lVar2 + 0x24) & 0xff00ff) << 8;
  *(uint *)(param_1 + 100) = uVar3 >> 0x10 | uVar3 << 0x10;
  uVar3 = (*(uint *)(lVar2 + 0x28) & 0xff00ff00) >> 8 | (*(uint *)(lVar2 + 0x28) & 0xff00ff) << 8;
  *(uint *)(param_1 + 0x68) = uVar3 >> 0x10 | uVar3 << 0x10;
  uVar3 = (*(uint *)(lVar2 + 0x2c) & 0xff00ff00) >> 8 | (*(uint *)(lVar2 + 0x2c) & 0xff00ff) << 8;
  *(uint *)(param_1 + 0x6c) = uVar3 >> 0x10 | uVar3 << 0x10;
  FUN_00226ec4(local_54,param_1 + 8,(uint *)(param_1 + 0x60),0x10,lVar2,&local_34);
  FUN_00229780(&local_44,local_54);
  iVar4 = local_44;
  if (local_44 == 0) {
    FUN_0021f584(lVar2);
    FUN_00223704(param_1 + 0x80,lVar2 + -0x10);
    FUN_002236e0(param_1 + 0x98,param_1 + 0x98,lVar2 + -0x10 + (long)*(int *)(param_1 + 0xac));
  }
  return iVar4 == 0;
}

