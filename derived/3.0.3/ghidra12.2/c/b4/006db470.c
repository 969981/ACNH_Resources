
undefined8 FUN_006db470(long param_1,int *param_2)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  char *__src;
  int iVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  char *__dest;
  undefined *local_50;
  long lStack_48;
  undefined *local_40;
  undefined8 uStack_38;
  
  memset((void *)(param_1 + 0x50),0,0x324);
  **(undefined1 **)(param_1 + 0x380) = 0;
  if (0 < *param_2) {
    uVar6 = *(uint *)(param_1 + 0x370);
    lVar5 = 0;
    do {
      uVar7 = (ulong)uVar6;
      if (99 < uVar6) {
        uVar7 = 0;
      }
      lVar1 = lVar5 * 8;
      lVar5 = lVar5 + 1;
      *(undefined8 *)(param_1 + 0x50 + uVar7 * 8) =
           **(undefined8 **)(*(long *)(param_2 + 2) + lVar1);
      uVar6 = *(int *)(param_1 + 0x370) + 1;
      *(uint *)(param_1 + 0x370) = uVar6;
    } while (lVar5 < *param_2);
  }
  if (param_2[0x198] == 0) {
    __dest = *(char **)(param_1 + 0x380);
    if (__dest == "RECEIVED") goto LAB_006db574;
    iVar4 = *(int *)(param_1 + 0x388);
    __src = "RECEIVED";
  }
  else {
    if ((param_2[0x198] != 1) || (__dest = *(char **)(param_1 + 0x380), __dest == "REJECTED"))
    goto LAB_006db574;
    iVar4 = *(int *)(param_1 + 0x388);
    __src = "REJECTED";
  }
  iVar2 = 8;
  if (iVar4 < 9) {
    iVar2 = iVar4 + -1;
  }
  memcpy(__dest,__src,(long)iVar2);
  __dest[iVar2] = '\0';
LAB_006db574:
  *(undefined1 *)(param_1 + 0x4c) = *PTR_DAT_04bb2950;
  local_40 = PTR_LAB_04bb2a30;
  *(undefined2 *)(param_1 + 0x4d) = 0;
  uStack_38 = 0;
  local_50 = PTR_DAT_04bb2a38 + 0x10;
  lStack_48 = param_1;
  uVar3 = FUN_006d6214(*(undefined8 *)(*(long *)PTR_DAT_04bcb7d8 + 0x88),&local_50,
                       (undefined1 *)(param_1 + 0x4c),0,0,0);
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  return 1;
}

