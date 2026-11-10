
void FUN_002bae80(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 local_34;
  ErrorResultVariant aEStack_30 [12];
  undefined4 local_24;
  
  puVar1 = PTR_DAT_04bc1510;
  if (*(char *)(param_2 + 8) == '\0') {
    lVar2 = FUN_002ba7a0(*(undefined8 *)PTR_DAT_04bc1510);
    if (lVar2 != 0) {
      FUN_002baac0(param_2 + 0x3510);
      uVar3 = **(undefined8 **)puVar1;
      *(undefined1 *)(param_2 + 8) = 1;
      local_34 = 0;
      *(undefined8 *)(param_2 + 0x3920) = uVar3;
      goto LAB_002baee4;
    }
  }
  local_34 = 0x10c08;
LAB_002baee4:
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_30,(Result *)&local_24);
  FUN_002296c4(param_1,&local_34);
  return;
}

