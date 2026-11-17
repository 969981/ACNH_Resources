
bool FUN_030c01b4(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)(param_1 + 0x388);
  if (plVar4 != (long *)0x0) {
    iVar1 = (**(code **)(*plVar4 + 0x80))(plVar4,0);
    iVar2 = (**(code **)(*plVar4 + 0x80))(plVar4,1);
    lVar3 = *(long *)(plVar4[0xd] + (long)(iVar1 + (int)plVar4[0xc] * iVar2) * 0x18);
    if ((lVar3 != 0) && (*(long *)(lVar3 + 8) != 0)) {
      return *(char *)(*(long *)(param_1 + 0x388) + 0x20) == '\0';
    }
  }
  return false;
}

