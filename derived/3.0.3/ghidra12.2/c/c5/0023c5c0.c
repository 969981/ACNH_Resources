
void FUN_0023c5c0(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  ushort uVar5;
  undefined4 local_c0 [4];
  undefined8 local_b0;
  undefined1 auStack_a8 [24];
  short local_90;
  long local_88;
  undefined2 local_80;
  undefined4 local_7c;
  int local_74 [4];
  undefined4 local_64;
  undefined1 auStack_60 [8];
  undefined4 local_58;
  
  uVar4 = FUN_00232c24(*(undefined8 *)
                        (DAT_04c60f48 + (ulong)*(byte *)(DAT_04c60f48 + 0x162) * 8 + 0x168));
  FUN_002401cc(auStack_60,uVar4);
  lVar1 = param_2 + 0xd8;
  local_64 = 0;
  FUN_00240224(local_74,auStack_60,lVar1,&local_64,0x5d8);
  puVar3 = PTR_DAT_04bcba18;
  local_80 = (undefined2)local_64;
  local_7c = local_58;
  local_88 = lVar1;
  if (*(short *)(param_2 + 0xd0) != 0) {
    uVar5 = 0;
    puVar2 = PTR_DAT_04bcba18 + 0x10;
    do {
      FUN_00227258(&local_b0);
      FUN_00227440(local_c0,&local_b0,param_2 + 0x70);
      local_90 = uVar5 + 0xc000;
      FUN_0023d6e0(local_c0,param_2,&local_88,&local_b0,1,0,1);
      FUN_00229780(local_74,local_c0);
      if (local_74[0] != 0) {
        FUN_002296c4(param_1,local_74);
        local_b0 = puVar3 + 0x10;
        FUN_0021f584(auStack_a8);
        return;
      }
      local_b0 = puVar2;
      FUN_0021f584(auStack_a8);
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(ushort *)(param_2 + 0xd0));
  }
  local_b0 = (undefined *)((ulong)local_b0 & 0xffffffff00000000);
  local_c0[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((long)&local_b0 + 4),(Result *)local_c0);
  FUN_002296c4(param_1,&local_b0);
  return;
}

