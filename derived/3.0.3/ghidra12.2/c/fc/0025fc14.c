
void FUN_0025fc14(undefined8 param_1,long *param_2,long param_3,long param_4,undefined8 param_5)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 local_60;
  undefined4 local_58 [9];
  undefined4 local_34;
  
  if (param_4 != 0) {
    iVar2 = FUN_002212bc();
    if ((iVar2 != 0) && (iVar2 = FUN_002212bc(param_2), iVar2 != 5)) {
      local_58[0] = 0;
      local_60 = (undefined *)0x200000000000;
      (**(code **)(*param_2 + 0x28))(param_2,&local_60);
      local_60 = (undefined *)CONCAT44(local_60._4_4_,0x10c08);
      goto LAB_0025fd38;
    }
    if (param_3 != 0) {
      param_2[0xd] = param_3;
      FUN_00220f78(param_3);
      param_2[0xe] = param_4;
      FUN_002b4378(&local_60,param_5);
      FUN_00227418(param_4 + 0x10,&local_60);
      local_60 = PTR_DAT_04bcba18 + 0x10;
      FUN_0021f584(local_58);
      lVar3 = param_2[0xe];
      *(undefined4 *)(lVar3 + 0x4c) = 2;
      *(undefined1 *)(lVar3 + 0x89) = 1;
      (**(code **)(*param_2 + 0x10))(param_2,1);
      puVar1 = PTR_FUN_04bcd348;
      local_60 = (undefined *)((ulong)local_60 & 0xffffffff00000000);
      param_2[7] = 0;
      param_2[8] = (long)"ConnectStationJob::SendConnectionRequest";
      param_2[6] = (long)puVar1;
      goto LAB_0025fd38;
    }
  }
  local_60 = (undefined *)CONCAT44(local_60._4_4_,0x10c07);
LAB_0025fd38:
  local_34 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((long)&local_60 + 4),(Result *)&local_34);
  FUN_002296c4(param_1,&local_60);
  return;
}

