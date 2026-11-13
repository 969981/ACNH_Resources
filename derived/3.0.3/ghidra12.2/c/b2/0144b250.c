
bool FUN_0144b250(long *param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  
  (**(code **)(*param_1 + 0x18))();
  lVar7 = 0;
  do {
    if (*(char *)(param_1[1] + lVar7) == '\0') goto LAB_0144b2cc;
    lVar2 = param_1[1] + lVar7;
    if (*(char *)(lVar2 + 1) == '\0') {
      lVar7 = lVar7 + 1;
      goto LAB_0144b2cc;
    }
    if (*(char *)(lVar2 + 2) == '\0') {
      lVar7 = lVar7 + 2;
      goto LAB_0144b2cc;
    }
    lVar7 = lVar7 + 3;
  } while (lVar7 != 0x80001);
  lVar7 = 0;
LAB_0144b2cc:
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar2 = 0;
  do {
    iVar5 = (int)lVar7;
    if (*(char *)(param_2[1] + lVar2) == '\0') {
LAB_0144b318:
      iVar1 = (int)lVar2;
      if (iVar5 < iVar1) goto LAB_0144b320;
LAB_0144b334:
      if ((int)lVar2 < 1) goto LAB_0144b3b0;
      uVar8 = 0;
      iVar6 = -1;
      goto LAB_0144b34c;
    }
    lVar4 = param_2[1] + lVar2;
    if (*(char *)(lVar4 + 1) == '\0') {
      lVar2 = lVar2 + 1;
      goto LAB_0144b318;
    }
    if (*(char *)(lVar4 + 2) == '\0') {
      lVar2 = lVar2 + 2;
      iVar1 = (int)lVar2;
      if (iVar1 <= iVar5) goto LAB_0144b334;
      goto LAB_0144b320;
    }
    lVar2 = lVar2 + 3;
  } while (lVar2 != 0x80001);
  if (iVar5 < 0) {
LAB_0144b320:
    iVar6 = -1;
  }
  else {
LAB_0144b3b0:
    (**(code **)(*param_2 + 0x18))(param_2);
    iVar6 = 0;
  }
  goto LAB_0144b3cc;
  while( true ) {
    pcVar3 = (char *)param_2[1];
    lVar4 = lVar2;
    while( true ) {
      lVar4 = lVar4 + -1;
      if (*(char *)(lVar7 + uVar8) != *pcVar3) break;
      if ((*(char *)(lVar7 + uVar8) == '\0') || (lVar7 = lVar7 + 1, pcVar3 = pcVar3 + 1, lVar4 == 0)
         ) goto LAB_0144b3c8;
    }
    uVar8 = uVar8 + 1;
    if (uVar8 == (iVar5 - iVar1) + 1) break;
LAB_0144b34c:
    lVar7 = param_1[1];
    (**(code **)(*param_2 + 0x18))(param_2);
    if ((char *)(lVar7 + uVar8) == (char *)param_2[1]) {
LAB_0144b3c8:
      iVar6 = (int)uVar8;
      break;
    }
  }
LAB_0144b3cc:
  return iVar6 != -1;
}

