
void FUN_00367a40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  
  uVar4 = nn::os::GetSystemTick();
  nn::util::ReferSymbol("SDK MW+Nintendo+NintendoWare_Ui2d-9_3_1-Release");
  FUN_00367aec(param_1,param_2,param_3);
  *(undefined **)PTR_DAT_04bd07f0 = PTR_PTR_04bd07e8;
  puVar3 = PTR_DAT_04bd07f8;
  uVar4 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 1;
  uVar1 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 2;
  uVar2 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 3;
  *(uint *)PTR_DAT_04bd07f8 = uVar4;
  *(uint *)(puVar3 + 4) = uVar1;
  *(uint *)(puVar3 + 8) = uVar2;
  *(uint *)(puVar3 + 0xc) = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 4;
  return;
}

