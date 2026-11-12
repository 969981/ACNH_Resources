
undefined8 FUN_008da514(long param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 *__s;
  undefined *local_60;
  char *pcStack_58;
  undefined *local_50;
  undefined8 *puStack_48;
  
  local_60 = PTR_DAT_04bb2020;
  if (*(int *)(*(long *)PTR_DAT_04bb39b0 + 0x15c) == 0) {
    *(undefined1 *)(param_1 + 0x37fb5) = 0;
    local_60 = local_60 + 0x10;
    puStack_48 = &DAT_0407ebb1;
    pcStack_58 = "cDefault";
    local_50 = local_60;
    FUN_008c5690(param_1,&local_50,&local_60);
    return 1;
  }
  if (*(int *)(param_1 + 0x410) == 0x21) {
    return 1;
  }
  iVar1 = *(int *)(param_1 + 0x31080);
  if (iVar1 < 1) {
    return 1;
  }
  *(undefined2 *)(param_1 + 0x37fac) = 0x101;
  __s = *(undefined8 **)(param_1 + 0x30780);
  *(undefined4 *)(param_1 + 0x307f4) = 0;
  if (__s != &DAT_0407ebb1) {
    iVar1 = 0;
    if (*(int *)(param_1 + 0x30788) < 1) {
      iVar1 = *(int *)(param_1 + 0x30788) + -1;
    }
    memset(__s,0,(long)iVar1);
    *(undefined1 *)((long)__s + (long)iVar1) = 0;
    iVar1 = *(int *)(param_1 + 0x31080);
    if (iVar1 < 1) {
      puVar2 = (undefined4 *)(param_1 + 0x410);
      goto LAB_008da61c;
    }
  }
  puVar2 = *(undefined4 **)(*(long *)(param_1 + 0x31088) + (ulong)(iVar1 - 1) * 8);
LAB_008da61c:
  FUN_03ebb160(param_1 + 0x408,*puVar2);
  *(undefined1 *)(param_1 + 0x37fac) = 0;
  return 1;
}

