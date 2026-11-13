
bool FUN_010f6690(long param_1)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  
  plVar6 = (long *)(param_1 + 8);
  (**(code **)(*plVar6 + 0x18))(plVar6);
  (**(code **)(*plVar6 + 0x18))(plVar6);
  lVar7 = *(long *)(param_1 + 0x10);
  (**(code **)(DAT_050b4c08 + 0x18))(&DAT_050b4c08);
  if (lVar7 == DAT_050b4c10) {
    if (*(char *)(param_1 + 0x50) != '\0') {
      return true;
    }
  }
  else {
    uVar5 = 0;
    bVar4 = true;
    do {
      cVar3 = *(char *)(*(long *)(param_1 + 0x10) + uVar5);
      if (cVar3 != *(char *)(DAT_050b4c10 + uVar5)) break;
      if (cVar3 == '\0') {
        if ((bool)(bVar4 & *(char *)(param_1 + 0x50) != '\0')) {
          return true;
        }
        break;
      }
      bVar4 = uVar5 < 0x80000;
      uVar5 = uVar5 + 1;
    } while (uVar5 != 0x80001);
  }
  lVar7 = *(long *)(*(long *)(param_1 + 0x48) + 0x288);
  iVar2 = *(int *)(lVar7 + 0x20);
  if (iVar2 == 0) {
    bVar4 = true;
  }
  else {
    bVar4 = *(char *)(lVar7 + 0x24) == '\0';
  }
  bVar1 = false;
  if (iVar2 != 0) {
    bVar1 = bVar4;
  }
  return bVar1;
}

