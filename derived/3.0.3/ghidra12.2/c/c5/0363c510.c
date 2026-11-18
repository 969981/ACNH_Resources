
void FUN_0363c510(void *param_1,long param_2,long param_3,undefined8 param_4,char *param_5,
                 long *param_6)

{
  void *__s1;
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if (param_2 == 0) {
    lVar5 = 0;
    lVar7 = 0;
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    lVar7 = 0;
    lVar5 = 0;
    do {
      uVar1 = *(uint *)((long)param_1 + 0x198);
      if ((uVar1 & 1) == 0) {
LAB_0363c5a8:
        if ((uVar1 >> 1 & 1) == 0) {
          lVar6 = lVar6 + ((ulong)(uVar1 >> 2) & 1);
        }
        else {
          if (param_5[1] == '\0') goto LAB_0363c588;
          lVar7 = lVar7 + 1;
        }
        uVar1 = *(uint *)((long)param_1 + 0x194);
        uVar2 = *(uint *)((long)param_1 + 400);
        if (200 < uVar1) {
          FUN_040023b0(&DAT_0407ebb1,0,&DAT_0407ebb1,0);
        }
        __s1 = (void *)(param_3 + (ulong)uVar2);
        iVar4 = memcmp(__s1,param_1,(ulong)uVar1);
        if (iVar4 != 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)UndefinedInstructionException(0x8002,0x363c630);
          (*pcVar3)();
        }
        memcpy(__s1,(void *)((long)param_1 + 200),(ulong)uVar1);
      }
      else if (*param_5 != '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_0363c5a8;
      }
LAB_0363c588:
      param_2 = param_2 + -1;
      param_1 = (void *)((long)param_1 + 0x19c);
    } while (param_2 != 0);
  }
  if (param_6 != (long *)0x0) {
    *param_6 = lVar5;
    param_6[1] = lVar7;
    param_6[2] = lVar6;
  }
  return;
}

