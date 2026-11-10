
bool FUN_001b9898(long param_1,long param_2)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  undefined *local_110;
  undefined1 local_108 [16];
  undefined1 *local_f8;
  undefined8 uStack_f0;
  undefined *local_e8;
  undefined1 local_e0 [16];
  undefined1 *local_d0;
  undefined8 uStack_c8;
  undefined1 local_c0 [128];
  
  local_c0[0] = 0;
  if (*(char *)(param_1 + 0x68) == '\0') {
    FUN_001b8590(param_1);
    iVar3 = FUN_001e1884(*(undefined8 *)(param_1 + 8));
  }
  else {
    iVar3 = FUN_001e1884(*(undefined8 *)(param_1 + 8));
  }
  if (iVar3 != 0) {
    FUN_001e188c(*(undefined8 *)(param_1 + 8),local_c0,0x80);
  }
  puVar1 = PTR_DAT_04bc0ec8;
  local_e0[0] = 0;
  local_e8 = PTR_DAT_04bc0ec8 + 0x10;
  local_d0 = local_e0;
  uStack_c8 = 0x10;
  FUN_0018b070(&local_e8,local_c0,0xffffffffffffffff);
  local_c0[0] = 0;
  if (*(char *)(param_2 + 0x68) == '\0') {
    FUN_001b8590(param_2);
    iVar3 = FUN_001e1884(*(undefined8 *)(param_2 + 8));
  }
  else {
    iVar3 = FUN_001e1884(*(undefined8 *)(param_2 + 8));
  }
  if (iVar3 != 0) {
    FUN_001e188c(*(undefined8 *)(param_2 + 8),local_c0,0x80);
  }
  puVar1 = puVar1 + 0x10;
  local_108[0] = 0;
  local_f8 = local_108;
  uStack_f0 = 0x10;
  local_110 = puVar1;
  FUN_0018b070(&local_110,local_c0,0xffffffffffffffff);
  uVar5 = FUN_0018b44c(local_d0,local_f8);
  bVar2 = false;
  if ((uVar5 & 1) != 0) {
    iVar3 = FUN_001b8fa0(param_1,&DAT_0410a6c4,0xffffffff);
    iVar4 = FUN_001b8fa0(param_2,&DAT_0410a6c4,0xffffffff);
    if (iVar3 == iVar4) {
      iVar3 = FUN_001b8fa0(param_1,"RVCID",0);
      iVar4 = FUN_001b8fa0(param_2,"RVCID",0);
      bVar2 = iVar3 == iVar4;
    }
    else {
      bVar2 = false;
    }
  }
  local_110 = puVar1;
  FUN_0018b1a0(&local_110);
  local_e8 = puVar1;
  FUN_0018b1a0(&local_e8);
  return bVar2;
}

