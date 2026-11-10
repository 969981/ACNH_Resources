
void FUN_0023bf00(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined4 uVar1;
  long lVar2;
  int *piVar3;
  int local_110;
  ErrorResultVariant aEStack_10c [12];
  long local_100;
  undefined2 local_f8;
  undefined4 local_f4;
  int local_ec [4];
  undefined4 local_dc;
  undefined **local_d8;
  undefined4 local_d0;
  undefined1 auStack_b8 [132];
  undefined4 local_34;
  
  piVar3 = &local_110;
  uVar1 = FUN_00232c24(*(undefined8 *)
                        (DAT_04c60f48 + (ulong)*(byte *)(DAT_04c60f48 + 0x162) * 8 + 0x168));
  lVar2 = FUN_002ba788(*(undefined8 *)PTR_DAT_04bc1510);
  FUN_0023ff44(&local_d8,uVar1,lVar2 + 8);
  local_dc = 0;
  FUN_0023ffac(local_ec,&local_d8,param_2 + 0xd8,&local_dc,0x5d8);
  local_f8 = (undefined2)local_dc;
  local_f4 = local_d0;
  local_100 = param_2 + 0xd8;
  FUN_0023d6e0(&local_110,param_2,&local_100,param_3,1,0,1);
  FUN_00229780(local_ec,&local_110);
  if (local_ec[0] == 0) {
    FUN_0023d6e0(&local_110,param_2,&local_100,param_3,1,0,1);
    FUN_00229780(local_ec,&local_110);
    if (local_ec[0] == 0) {
      local_110 = 0;
      local_34 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_10c,(Result *)&local_34);
      goto LAB_0023c000;
    }
  }
  piVar3 = local_ec;
LAB_0023c000:
  FUN_002296c4(param_1,piVar3);
  local_d8 = &PTR_LAB_04841b20;
  FUN_002b4104(auStack_b8);
  return;
}

