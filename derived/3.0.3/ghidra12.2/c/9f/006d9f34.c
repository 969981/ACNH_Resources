
undefined8 FUN_006d9f34(long param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  undefined4 uVar5;
  char *__src;
  int iVar6;
  char *__dest;
  undefined *local_50;
  long lStack_48;
  undefined *local_40;
  undefined8 uStack_38;
  
  *(undefined8 *)(param_1 + 0x50) = *param_2;
  **(undefined1 **)(param_1 + 0x60) = 0;
  if (*(int *)(param_2 + 1) == 1) {
    __dest = *(char **)(param_1 + 0x60);
    if (__dest == "id_search") goto LAB_006d9fe4;
    iVar2 = *(int *)(param_1 + 0x68);
    __src = "id_search";
    bVar3 = SBORROW4(iVar2,9);
    iVar1 = iVar2 + -9;
    bVar4 = iVar2 == 9;
    iVar6 = 9;
  }
  else {
    if ((*(int *)(param_2 + 1) != 0) || (__dest = *(char **)(param_1 + 0x60), __dest == "download"))
    goto LAB_006d9fe4;
    iVar2 = *(int *)(param_1 + 0x68);
    __src = "download";
    bVar3 = SBORROW4(iVar2,8);
    iVar1 = iVar2 + -8;
    bVar4 = iVar2 == 8;
    iVar6 = 8;
  }
  if (bVar4 || iVar1 < 0 != bVar3) {
    iVar6 = iVar2 + -1;
  }
  memcpy(__dest,__src,(long)iVar6);
  __dest[iVar6] = '\0';
LAB_006d9fe4:
  *(undefined1 *)(param_1 + 0x4c) = *PTR_DAT_04bb2950;
  local_40 = PTR_LAB_04bb2a30;
  *(undefined2 *)(param_1 + 0x4d) = 0;
  uStack_38 = 0;
  local_50 = PTR_DAT_04bb2a38 + 0x10;
  lStack_48 = param_1;
  uVar5 = FUN_006d6214(*(undefined8 *)(*(long *)PTR_DAT_04bcb7d8 + 0x88),&local_50,
                       (undefined1 *)(param_1 + 0x4c),0,0,0);
  *(undefined4 *)(param_1 + 0x44) = uVar5;
  return 1;
}

