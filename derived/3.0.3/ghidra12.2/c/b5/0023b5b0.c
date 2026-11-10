
void FUN_0023b5b0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined4 local_54 [4];
  int local_44;
  ErrorResultVariant aEStack_40 [16];
  
  puVar1 = PTR_DAT_04bcb8b8;
  if (*(int *)(param_2 + 0x13a4) != 0) {
    uVar3 = *(undefined8 *)
             (*(long *)PTR_DAT_04bcb8b8 + (ulong)*(byte *)(*(long *)PTR_DAT_04bcb8b8 + 0x162) * 8 +
             0x168);
    uVar2 = FUN_00232d58(uVar3);
    if ((uVar2 & 1) != 0) {
      FUN_0021f210(&local_44);
      local_44 = *(int *)(param_2 + 0x13a4);
      if (local_44 != 0) {
        FUN_00232c2c(uVar3);
        uVar3 = FUN_002414b4();
        FUN_0023b698(local_54,param_2,uVar3,0x20,aEStack_40,0x10);
      }
      FUN_002973a8(*(undefined8 *)(*(long *)puVar1 + 8),&local_44);
      *(undefined1 *)(param_2 + 0x13b8) = 1;
    }
  }
  local_44 = 0;
  local_54[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_40,(Result *)local_54);
  FUN_002296c4(param_1,&local_44);
  return;
}

