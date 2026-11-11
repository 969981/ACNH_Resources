
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0038cce0(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  char *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_04bd0028;
  if (*(long *)(param_2 + *(long *)PTR_DAT_04bd0028) != 0) {
    pcVar3 = *(char **)(*(long *)(param_2 + *(long *)PTR_DAT_04bd0028) + 0x68);
    if (*pcVar3 == '\0') {
      uVar4 = FUN_0034d730(pcVar3,param_1);
      if ((int)uVar4 != 0) goto LAB_0038cd38;
    }
    else {
      uVar4 = 0;
    }
    return uVar4;
  }
LAB_0038cd38:
  lVar5 = *(long *)(param_2 + *(long *)(puVar1 + 8));
  if (lVar5 != 0) {
    pcVar3 = *(char **)(lVar5 + 0x68);
    if ((*pcVar3 != '\0') || (iVar2 = FUN_0034d730(pcVar3,param_1), iVar2 == 0)) {
      return 1;
    }
  }
  lVar5 = *(long *)(param_2 + *(long *)(puVar1 + 0x10));
  if (lVar5 == 0) {
    pcVar3 = _DAT_00000068;
  }
  else {
    pcVar3 = *(char **)(lVar5 + 0x68);
    if (*pcVar3 != '\0') {
      return 2;
    }
  }
  FUN_0034d730(pcVar3,param_1);
  return 2;
}

