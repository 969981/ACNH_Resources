
long FUN_0014b8f4(undefined8 param_1,char *param_2,long param_3,byte param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  FILE *__stream;
  long lVar4;
  long lVar5;
  char *pcVar6;
  long lVar7;
  
  lVar7 = param_3;
  if (param_3 == 0) {
    lVar7 = FUN_00143330(1,0x820);
    if (lVar7 == 0) {
      return 0;
    }
    pcVar6 = "none";
    if (param_2 != (char *)0x0) {
      pcVar6 = param_2;
    }
    lVar4 = FUN_00143320(pcVar6);
    *(long *)(lVar7 + 0x800) = lVar4;
    if (lVar4 != 0) goto LAB_0014b924;
    FUN_00143300();
    __stream = (FILE *)0x0;
    bVar1 = true;
LAB_0014bab0:
    FUN_0014ca60(lVar7);
LAB_0014bab8:
    lVar7 = 0;
    if ((bVar1) && (__stream != (FILE *)0x0)) {
      fclose(__stream);
      lVar7 = 0;
    }
  }
  else {
LAB_0014b924:
    *(undefined1 *)(lVar7 + 0x808) = 0;
    if (param_2 == (char *)0x0) {
LAB_0014b970:
      *(byte *)(lVar7 + 0x818) = param_4 & 1;
    }
    else {
      iVar2 = strcmp(param_2,"-");
      bVar1 = iVar2 != 0;
      if (iVar2 == 0) {
        __stream = *(FILE **)PTR_stdin_04bcb8f0;
      }
      else {
        if (*param_2 == '\0') goto LAB_0014b970;
        __stream = fopen(param_2,"r");
      }
      *(byte *)(lVar7 + 0x818) = param_4 & 1;
      if (__stream != (FILE *)0x0) {
        lVar4 = FUN_001432f0(5000);
        if (lVar4 == 0) {
          FUN_00143300();
          if (param_3 == 0) goto LAB_0014bab0;
          goto LAB_0014bab8;
        }
        lVar5 = FUN_0014c9d0(lVar4,5000,__stream);
        while (lVar5 != 0) {
          iVar3 = thunk_FUN_00144b34("Set-Cookie:",lVar4,0xb);
          lVar5 = 0xb;
          if (iVar3 == 0) {
            lVar5 = 0;
          }
          for (pcVar6 = (char *)(lVar4 + lVar5); *pcVar6 == ' ' || *pcVar6 == '\t';
              pcVar6 = pcVar6 + 1) {
          }
          FUN_0014bad4(param_1,lVar7,iVar3 != 0,1,pcVar6,0,0,1);
          lVar5 = FUN_0014c9d0(lVar4,5000,__stream);
        }
        FUN_00143300(lVar4);
        FUN_0014c868(lVar7);
        if (iVar2 != 0) {
          fclose(__stream);
        }
      }
    }
    *(undefined1 *)(lVar7 + 0x808) = 1;
  }
  return lVar7;
}

