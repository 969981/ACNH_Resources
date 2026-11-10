
void FUN_0023c824(undefined8 param_1,long param_2,long param_3,byte param_4)

{
  long lVar1;
  undefined1 uVar2;
  ulong uVar3;
  undefined4 uVar4;
  undefined8 local_48;
  undefined8 uStack_40;
  uint local_34;
  
  uVar3 = FUN_0021f6f8(param_3);
  if ((uVar3 & 1) == 0) {
    local_48 = CONCAT44(local_48._4_4_,0x10c07);
  }
  else {
    lVar1 = param_2 + 0x50;
    FUN_0021f54c(lVar1,param_3);
    uVar3 = FUN_0021f720(lVar1);
    if ((uVar3 & 1) == 0) {
      local_34 = 0;
      FUN_0021f618(&local_48,lVar1,&local_34);
      local_34 = local_34 | *(uint *)(param_3 + 0x20) ^ 0xffffffff;
      FUN_0021f5a0(param_2 + 0x70);
      uVar4 = 0xffffffff;
    }
    else {
      local_48 = 0;
      uStack_40 = 0;
      memcpy(&local_48,&DAT_0410e30a,0x10);
      FUN_0021f5dc(param_2 + 0x70,local_48,uStack_40);
      uVar4 = *(undefined4 *)(param_3 + 0x24);
    }
    *(undefined4 *)(param_2 + 0x90) = uVar4;
    uVar2 = *(undefined1 *)(param_3 + 0x28);
    local_48 = local_48 & 0xffffffff00000000;
    *(byte *)(param_2 + 0x99) = param_4 & 1;
    *(undefined1 *)(param_2 + 0x98) = uVar2;
  }
  local_34 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((long)&local_48 + 4),(Result *)&local_34);
  FUN_002296c4(param_1,&local_48);
  return;
}

