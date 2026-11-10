
undefined8 FUN_00166aa4(long param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  size_t sVar3;
  long lVar4;
  
  if ((param_2 != 0) && (*(long *)(param_1 + 0xd8) != 0)) {
    plVar2 = (long *)FUN_00149fdc(*(long *)(param_1 + 0xd8));
    for (lVar4 = *plVar2; lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x10)) {
      sVar3 = strlen((char *)(lVar4 + 0x18));
      iVar1 = FUN_00144b34((char *)(lVar4 + 0x18),param_2,sVar3);
      if (iVar1 != 0) {
        FUN_0014d430(param_1,"Server %s is blacklisted\n",param_2);
        return 1;
      }
    }
  }
  return 0;
}

