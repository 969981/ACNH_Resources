
bool FUN_002c9978(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  undefined *local_80;
  undefined1 auStack_78 [32];
  undefined *local_58;
  undefined1 auStack_50 [32];
  
  FUN_002b4378(&local_58);
  FUN_002b4378(&local_80,param_2);
  uVar5 = FUN_002200e4(auStack_50,auStack_78);
  if ((uVar5 & 1) == 0) {
    bVar2 = false;
  }
  else {
    iVar3 = FUN_002b43fc(param_1);
    iVar4 = FUN_002b43fc(param_2);
    bVar2 = iVar3 == iVar4;
  }
  puVar1 = PTR_DAT_04bcba18 + 0x10;
  local_80 = puVar1;
  FUN_0021f584(auStack_78);
  local_58 = puVar1;
  FUN_0021f584(auStack_50);
  return bVar2;
}

