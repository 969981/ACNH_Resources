
bool FUN_028d7ba0(long param_1,short *param_2,long param_3)

{
  bool bVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  char *__dest;
  char cVar7;
  char local_34 [7];
  undefined1 local_2d;
  uint local_24;
  
  uVar2 = nn::time::GetDayOfWeek
                    ((int)*param_2,(int)(char)param_2[1],(int)*(char *)((long)param_2 + 3));
  if (((DAT_0537d558 == 0) || (*(long *)(DAT_0537d558 + 0x28) == 0)) ||
     (*(int *)(DAT_0537d558 + 0x80) != 1)) {
    uVar5 = (ulong)uVar2;
    if (6 < uVar2) {
      uVar5 = 0;
    }
    local_24 = *(uint *)(param_1 + uVar5 * 4);
    if (0xb < local_24) {
      local_24 = 0;
    }
  }
  else {
    local_24 = 0;
  }
  if (local_24 < 0xc) {
    __dest = (&PTR_DAT_04a92640)[local_24];
    pcVar3 = __dest;
    if (local_34 == __dest) goto LAB_028d7cf8;
  }
  else {
    pcVar3 = "";
  }
  local_2d = 0;
  __dest = local_34;
  lVar6 = 0;
  do {
    if (pcVar3[lVar6] == '\0') {
LAB_028d7cd4:
      iVar4 = (int)lVar6;
joined_r0x028d7cd8:
      if (7 < iVar4) {
        iVar4 = 7;
      }
      goto LAB_028d7ce0;
    }
    if (pcVar3[lVar6 + 1] == '\0') {
      lVar6 = lVar6 + 1;
      goto LAB_028d7cd4;
    }
    if (pcVar3[lVar6 + 2] == '\0') {
      iVar4 = (int)lVar6 + 2;
      goto joined_r0x028d7cd8;
    }
    lVar6 = lVar6 + 3;
  } while (lVar6 != 0x80001);
  iVar4 = 0;
LAB_028d7ce0:
  memcpy(__dest,pcVar3,(long)iVar4);
  local_34[iVar4] = '\0';
LAB_028d7cf8:
  cVar7 = *__dest;
  if (cVar7 == '\0') {
    bVar1 = true;
  }
  else {
    pcVar3 = *(char **)(param_3 + 8);
    do {
      __dest = __dest + 1;
      bVar1 = *pcVar3 == cVar7;
      if (!bVar1) {
        return bVar1;
      }
      cVar7 = *__dest;
      pcVar3 = pcVar3 + 1;
    } while (cVar7 != '\0');
  }
  return bVar1;
}

