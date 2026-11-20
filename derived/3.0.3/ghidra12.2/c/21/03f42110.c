
bool FUN_03f42110(long *param_1)

{
  byte bVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  (**(code **)(*param_1 + 0x20))();
  if ((int)param_1[4] == 0) {
    if ((*(byte *)(param_1 + 1) & 1) != 0) {
      (**(code **)(*param_1 + 0x20))(param_1);
    }
    if ((int)param_1[0xd] == 0) {
      bVar2 = true;
      bVar1 = *(byte *)(param_1 + 1);
    }
    else {
      lVar4 = (long)(int)param_1[0xd] * 8;
      plVar3 = (long *)param_1[0xe];
      do {
        lVar4 = lVar4 + -8;
        lVar5 = *plVar3;
        if (*(char *)(lVar5 + 0x104) < '\0') break;
        plVar3 = plVar3 + 1;
      } while (lVar4 != 0);
      bVar2 = -1 < *(char *)(lVar5 + 0x104);
      bVar1 = *(byte *)(param_1 + 1);
    }
    if ((bVar1 & 1) != 0) {
      (**(code **)(*param_1 + 0x28))(param_1);
    }
  }
  else {
    bVar2 = false;
  }
  (**(code **)(*param_1 + 0x28))(param_1);
  return bVar2;
}

