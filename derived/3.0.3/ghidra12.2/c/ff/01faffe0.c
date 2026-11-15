
bool FUN_01faffe0(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  bool bVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined **local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  char *pcStack_30;
  char local_24 [4];
  
  local_24[0] = '\0';
  local_48 = &PTR_FUN_04a699f8;
  pcStack_30 = local_24;
  iVar1 = *(int *)(*(long *)PTR_DAT_04bb3968 + 0xb88);
  if (iVar1 == 0) {
    bVar2 = false;
  }
  else {
    lVar4 = (long)iVar1 << 3;
    puVar3 = *(undefined8 **)(*(long *)PTR_DAT_04bb3968 + 0xb90);
    uStack_40 = param_1;
    local_38 = param_2;
    do {
      (*(code *)*local_48)(&local_48,*puVar3);
      lVar4 = lVar4 + -8;
      puVar3 = puVar3 + 1;
    } while (lVar4 != 0);
    bVar2 = local_24[0] != '\0';
  }
  return bVar2;
}

