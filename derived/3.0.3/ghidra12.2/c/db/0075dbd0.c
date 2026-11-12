
bool FUN_0075dbd0(long param_1)

{
  bool bVar1;
  long lVar2;
  char cVar3;
  
  if (*(long **)(param_1 + 0x3b0) == (long *)0x0) {
    bVar1 = true;
  }
  else {
    lVar2 = (**(code **)(**(long **)(param_1 + 0x3b0) + 0x388))();
    if (lVar2 == 0) {
      cVar3 = '\x01';
    }
    else {
      cVar3 = *(char *)(lVar2 + 0xee);
    }
    lVar2 = (**(code **)(**(long **)(param_1 + 0x3b0) + 0x390))();
    if (lVar2 != 0) {
      cVar3 = cVar3 != '\0' && *(char *)(lVar2 + 0xee) != '\0';
    }
    lVar2 = (**(code **)(**(long **)(param_1 + 0x3b0) + 0x398))();
    if (lVar2 != 0) {
      cVar3 = cVar3 != '\0' && *(char *)(lVar2 + 0xee) != '\0';
    }
    lVar2 = (**(code **)(**(long **)(param_1 + 0x3b0) + 0x3a0))();
    if (lVar2 != 0) {
      cVar3 = cVar3 != '\0' && *(char *)(lVar2 + 0xee) != '\0';
    }
    lVar2 = (**(code **)(**(long **)(param_1 + 0x3b0) + 0x3a8))();
    if (lVar2 != 0) {
      cVar3 = cVar3 != '\0' && *(char *)(lVar2 + 0xee) != '\0';
    }
    lVar2 = (**(code **)(**(long **)(param_1 + 0x3b0) + 0x3b0))();
    if (lVar2 != 0) {
      cVar3 = cVar3 != '\0' && *(char *)(lVar2 + 0xee) != '\0';
    }
    lVar2 = (**(code **)(**(long **)(param_1 + 0x3b0) + 0x3b8))();
    if (lVar2 != 0) {
      cVar3 = cVar3 != '\0' && *(char *)(lVar2 + 0xee) != '\0';
    }
    lVar2 = (**(code **)(**(long **)(param_1 + 0x3b0) + 0x3c0))();
    if (lVar2 != 0) {
      cVar3 = cVar3 != '\0' && *(char *)(lVar2 + 0xee) != '\0';
    }
    bVar1 = cVar3 != '\0';
  }
  return bVar1;
}

