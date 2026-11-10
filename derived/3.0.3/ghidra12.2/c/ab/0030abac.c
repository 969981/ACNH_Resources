
void FUN_0030abac(undefined8 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  ushort *puVar2;
  uint uVar3;
  undefined4 local_40;
  ErrorResultVariant aEStack_3c [12];
  undefined4 local_24;
  
  iVar1 = FUN_00227cb0(param_3);
  if (iVar1 == 2) {
    iVar1 = FUN_00227d94(param_3);
    puVar2 = (ushort *)FUN_00227acc(param_3);
    if (iVar1 == 2) {
      if (0xffffffe5 < *puVar2 - 0x5b) {
        uVar3 = (uint)puVar2[1];
joined_r0x0030ac34:
        if (0xffffffe5 < uVar3 - 0x5b) {
          FUN_00227af0(&local_40,param_2 + 0x9e0,param_3);
          local_40 = 0;
          *(uint *)(param_2 + 0xd30) = *(uint *)(param_2 + 0xd30) | 0x80000;
          goto LAB_0030ac4c;
        }
      }
    }
    else if (0xffffffe5 < (byte)*puVar2 - 0x5b) {
      uVar3 = (uint)*(byte *)((long)puVar2 + 1);
      goto joined_r0x0030ac34;
    }
  }
  local_40 = 0x10c07;
LAB_0030ac4c:
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_24);
  FUN_002296c4(param_1,&local_40);
  return;
}

