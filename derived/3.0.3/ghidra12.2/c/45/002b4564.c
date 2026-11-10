
void FUN_002b4564(undefined8 param_1,long param_2,undefined1 *param_3,int *param_4,uint param_5)

{
  undefined1 *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  undefined4 *puVar6;
  undefined4 local_7c;
  undefined4 local_78;
  ErrorResultVariant aEStack_74 [12];
  undefined1 auStack_68 [4];
  undefined4 local_64;
  ErrorResultVariant aEStack_60 [12];
  undefined4 local_54;
  
  if ((param_3 == (undefined1 *)0x0) || (param_4 == (int *)0x0)) {
    local_64 = 0x10c07;
  }
  else {
    uVar3 = FUN_0021f84c(param_2 + 8);
    uVar4 = FUN_0021f84c(param_2 + 0x28);
    if (uVar3 + uVar4 + 0x1c <= param_5) {
      local_78 = 0;
      local_64 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_64);
      FUN_002296c4(&local_64,&local_78);
      puVar1 = param_3 + 2;
      *param_3 = (char)uVar3;
      param_3[1] = (char)uVar4;
      FUN_0021fa08(&local_78,param_2 + 8,puVar1,auStack_68,uVar3);
      FUN_00229780(&local_64,&local_78);
      FUN_0021fa08(&local_78,param_2 + 0x28,puVar1 + uVar3,auStack_68,uVar4);
      FUN_00229780(&local_64,&local_78);
      lVar2 = param_2 + 0x48;
      puVar1 = puVar1 + uVar3 + uVar4;
      local_7c = 0;
      uVar5 = FUN_0021f6f8(lVar2);
      if (((uVar5 & 1) == 0) || (uVar5 = FUN_0021f720(lVar2), (uVar5 & 1) != 0)) {
        local_7c = 0;
      }
      else {
        FUN_0021f618(&local_78,lVar2,&local_7c);
      }
      FUN_00228480(puVar1,local_7c);
      FUN_002284a0(puVar1 + 4,*(undefined2 *)(param_2 + 0x60));
      FUN_00228460(puVar1 + 6,*(undefined8 *)(param_2 + 0x68));
      FUN_00228480(puVar1 + 0xe,*(undefined4 *)(param_2 + 0x70));
      FUN_00228480(puVar1 + 0x12,*(undefined4 *)(param_2 + 0x74));
      FUN_002284c0(puVar1 + 0x16,*(undefined1 *)(param_2 + 0x78));
      FUN_002284c0(puVar1 + 0x17,*(undefined1 *)(param_2 + 0x79));
      FUN_002284c0(puVar1 + 0x18,*(undefined1 *)(param_2 + 0x7a));
      FUN_002284c0(puVar1 + 0x19,*(undefined1 *)(param_2 + 0x7b));
      local_78 = 0;
      local_54 = 0;
      *param_4 = ((int)puVar1 - (int)param_3) + 0x1a;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_74,(Result *)&local_54);
      puVar6 = &local_78;
      goto LAB_002b45f0;
    }
    local_64 = 0x4c0d;
  }
  local_78 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_60,(Result *)&local_78);
  puVar6 = &local_64;
LAB_002b45f0:
  FUN_002296c4(param_1,puVar6);
  return;
}

