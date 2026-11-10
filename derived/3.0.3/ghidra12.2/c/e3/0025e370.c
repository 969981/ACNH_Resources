
void FUN_0025e370(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 local_24;
  
  FUN_00227770();
  puVar1 = PTR_DAT_04bcd600;
  param_1[0xc] = 0;
  *param_1 = (long)(puVar1 + 0x10);
  FUN_00220ebc(param_1 + 0xd);
  param_1[0x13] = 0;
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)(param_1 + 0x14),(Result *)&local_24);
  param_1[0x16] = param_2;
  uVar2 = FUN_0021f454();
  lVar3 = FUN_00285d10(0x70,uVar2);
  if (lVar3 != 0) {
    FUN_0025e7cc(lVar3,param_2);
  }
  param_1[0xb] = lVar3;
  return;
}

