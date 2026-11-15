
undefined8 FUN_021e6d60(void)

{
  short *psVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR_DAT_04bb32e8;
  psVar1 = (short *)(lVar5 + 0x4060);
  if (*(char *)(lVar5 + 0x4062) == '\t') {
    if (*(char *)(lVar5 + 0x4063) < '\b') {
      iVar3 = nn::time::GetDayOfWeek((int)*psVar1,9,(int)*(char *)(lVar5 + 0x4063));
      if (iVar3 == 0) {
        return 1;
      }
      cVar2 = *(char *)(lVar5 + 0x4063);
      iVar3 = nn::time::GetDayOfWeek((int)*psVar1,(int)*(char *)(lVar5 + 0x4062),(int)cVar2);
      if (cVar2 <= iVar3) {
        return 1;
      }
    }
  }
  else if (*(char *)(lVar5 + 0x4062) == '\b') {
    if (*(char *)(lVar5 + 0x4063) < '\b') {
      uVar4 = nn::time::GetDayOfWeek((int)*psVar1,8,(int)*(char *)(lVar5 + 0x4063));
      if ((int)uVar4 == 0) {
        return uVar4;
      }
      cVar2 = *(char *)(lVar5 + 0x4063);
      iVar3 = nn::time::GetDayOfWeek((int)*psVar1,(int)*(char *)(lVar5 + 0x4062),(int)cVar2);
      if (cVar2 <= iVar3) {
        return 0;
      }
    }
    return 1;
  }
  return 0;
}

