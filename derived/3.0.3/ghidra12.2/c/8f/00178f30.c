
/* WARNING: Removing unreachable block (ram,0x001791fc) */

int FUN_00178f30(char *param_1,long *param_2,long *param_3,undefined1 *param_4,undefined1 *param_5,
                char *param_6)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  FILE *__stream;
  char *pcVar9;
  char *pcVar10;
  long lVar11;
  char *__s1;
  char *__s1_00;
  int iVar12;
  char acStack_1070 [4096];
  undefined8 local_70 [2];
  
  __s1_00 = (char *)*param_2;
  if (__s1_00 == (char *)0x0) {
    bVar5 = false;
  }
  else {
    bVar5 = *__s1_00 != '\0';
  }
  __s1 = (char *)*param_3;
  if (param_6 == (char *)0x0) {
    lVar11 = FUN_00144c18(&DAT_040d22d5);
    if (lVar11 == 0) {
      return 1;
    }
    pcVar9 = (char *)FUN_00146120("%s%s%s",lVar11,&DAT_04079e84,".netrc");
    FUN_00143300(lVar11);
    if (pcVar9 == (char *)0x0) {
      return -1;
    }
    __stream = fopen(pcVar9,"r");
    FUN_00143300(pcVar9);
  }
  else {
    __stream = fopen(param_6,"r");
  }
  if (__stream == (FILE *)0x0) {
    return 1;
  }
  local_70[0] = 0;
  memset(acStack_1070,0,0x1000);
  bVar2 = false;
  bVar1 = false;
  iVar8 = 0;
  bVar4 = false;
  iVar7 = 0;
  iVar12 = 1;
  bVar3 = false;
  do {
    do {
      pcVar9 = fgets(acStack_1070,0x1000,__stream);
      if (pcVar9 == (char *)0x0) {
LAB_00179208:
        if (iVar12 == 0) {
          *param_4 = 0;
          *param_5 = 0;
          if (bVar3) {
            if (*param_2 != 0) {
              FUN_00143300();
            }
            *param_2 = (long)__s1_00;
            *param_4 = 1;
          }
          if (bVar4) {
            if (*param_3 != 0) {
              FUN_00143300();
            }
            iVar12 = 0;
            *param_3 = (long)__s1;
            *param_5 = 1;
          }
          else {
            iVar12 = 0;
          }
        }
        else {
          if (bVar3) {
            FUN_00143300(__s1_00);
          }
LAB_0017921c:
          if (bVar4) {
            FUN_00143300(__s1);
          }
        }
LAB_00179308:
        fclose(__stream);
        return iVar12;
      }
      pcVar9 = (char *)FUN_0014e158(acStack_1070,&DAT_040dcdd6,local_70);
    } while ((pcVar9 == (char *)0x0) || (*pcVar9 == '#'));
    do {
      if ((__s1_00 != (char *)0x0) &&
         (((*__s1_00 != '\0' && (__s1 != (char *)0x0)) && (*__s1 != '\0')))) goto LAB_00179208;
      if (iVar7 == 2) {
        if (bVar1) {
          if (bVar5) {
            iVar8 = FUN_00144a90(__s1_00,pcVar9);
          }
          else if ((__s1_00 == (char *)0x0) || (iVar7 = strcmp(__s1_00,pcVar9), iVar7 != 0)) {
            if (bVar3) {
              FUN_00143300(__s1_00);
            }
            __s1_00 = (char *)FUN_00143320(pcVar9);
            if (__s1_00 == (char *)0x0) {
              iVar12 = -1;
              goto LAB_0017921c;
            }
            bVar3 = true;
          }
          bVar1 = false;
        }
        else if (bVar2) {
          bVar1 = false;
          if (iVar8 == 0) {
            bVar1 = bVar5;
          }
          if (bVar1) {
            bVar1 = false;
            bVar2 = false;
            iVar8 = 0;
          }
          else {
            if ((__s1 == (char *)0x0) || (iVar7 = strcmp(__s1,pcVar9), iVar7 != 0)) {
              if (bVar4) {
                FUN_00143300(__s1);
              }
              __s1 = (char *)FUN_00143320(pcVar9);
              if (__s1 == (char *)0x0) {
                if (bVar3) {
                  FUN_00143300(__s1_00);
                }
                iVar12 = -1;
                goto LAB_00179308;
              }
              bVar4 = true;
            }
            bVar1 = false;
            bVar2 = false;
          }
        }
        else {
          iVar7 = FUN_00144a90("login",pcVar9);
          if (iVar7 == 0) {
            iVar7 = FUN_00144a90("password",pcVar9);
            if (iVar7 == 0) {
              iVar6 = FUN_00144a90("machine",pcVar9);
              bVar1 = false;
              iVar7 = 1;
              if (iVar6 == 0) {
                iVar7 = 2;
              }
              bVar2 = false;
              if (iVar6 != 0) {
                iVar8 = 0;
              }
              goto LAB_001791dc;
            }
            bVar1 = false;
            bVar2 = true;
          }
          else {
            bVar2 = false;
            bVar1 = true;
          }
        }
        iVar7 = 2;
      }
      else if (iVar7 == 1) {
        pcVar10 = param_1;
LAB_00179158:
        iVar7 = FUN_00144a90(pcVar10,pcVar9);
        if (iVar7 != 0) {
          iVar12 = 0;
        }
        iVar7 = (uint)(iVar7 != 0) << 1;
      }
      else if (iVar7 == 0) {
        iVar7 = FUN_00144a90("machine",pcVar9);
        if (iVar7 == 0) {
          pcVar10 = "default";
          goto LAB_00179158;
        }
        iVar7 = 1;
      }
LAB_001791dc:
      pcVar9 = (char *)FUN_0014e158(0,&DAT_040dcdd6,local_70);
    } while (pcVar9 != (char *)0x0);
  } while( true );
}

