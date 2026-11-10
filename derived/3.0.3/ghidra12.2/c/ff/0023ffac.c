
void FUN_0023ffac(undefined8 param_1,long param_2,long param_3,uint *param_4)

{
  uint uVar1;
  int *piVar2;
  uint *puVar3;
  int local_58;
  ErrorResultVariant aEStack_54 [12];
  int local_48;
  int local_44 [4];
  undefined4 local_34;
  
  FUN_0023fc04(local_44);
  if (local_44[0] == 0) {
    local_48 = 0;
    uVar1 = (*(uint *)(param_2 + 0x18) & 0xff00ff00) >> 8 |
            (*(uint *)(param_2 + 0x18) & 0xff00ff) << 8;
    puVar3 = (uint *)(param_3 + (ulong)*param_4) + 1;
    *(uint *)(param_3 + (ulong)*param_4) = uVar1 >> 0x10 | uVar1 << 0x10;
    FUN_002b4564(&local_58,param_2 + 0x20,puVar3,&local_48,0x5c8);
    FUN_00229780(local_44,&local_58);
    if (local_44[0] == 0) {
      local_58 = 0;
      local_34 = 0;
      *param_4 = ((int)puVar3 + local_48) - (int)param_3;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_54,(Result *)&local_34);
      piVar2 = &local_58;
      goto LAB_00240028;
    }
  }
  piVar2 = local_44;
LAB_00240028:
  FUN_002296c4(param_1,piVar2);
  return;
}

