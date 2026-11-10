
/* WARNING: Type propagation algorithm not settling */

int FUN_00163050(long *param_1,undefined4 param_2,char *param_3,uint param_4)

{
  size_t sVar1;
  char cVar2;
  char *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  void *__src;
  size_t sVar8;
  char *__s;
  ulong uVar9;
  size_t sVar10;
  long lVar11;
  long lVar12;
  char cVar13;
  char *pcVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  long *plVar18;
  char *pcVar19;
  undefined8 local_68;
  
  if (param_1 == (long *)0x0) {
    return 1;
  }
  if (param_3 == (char *)0x0) {
    switch(param_2) {
    case 0:
      return 0;
    case 1:
      break;
    case 2:
      param_1 = param_1 + 1;
      break;
    case 3:
      param_1 = param_1 + 2;
      break;
    case 4:
      param_1 = param_1 + 3;
      break;
    case 5:
      param_1 = param_1 + 4;
      break;
    case 6:
      param_1 = param_1 + 5;
      break;
    case 7:
      param_1 = param_1 + 6;
      break;
    case 8:
      param_1 = param_1 + 7;
      break;
    case 9:
      param_1 = param_1 + 8;
      break;
    default:
      goto LAB_0016349c;
    }
    if (*param_1 == 0) {
      return 0;
    }
    FUN_00143300();
    *param_1 = 0;
    return 0;
  }
  switch(param_2) {
  case 0:
    local_68 = 0;
    uVar9 = FUN_0016297c(param_3,0,8);
    if (((uVar9 & 1) != 0) || (iVar7 = FUN_00162bec(param_1,0,&local_68,param_4), iVar7 != 0)) {
      __src = (void *)FUN_00143330(0x58,1);
      if (__src == (void *)0x0) {
        return 7;
      }
      iVar7 = FUN_00163554(param_3,__src,param_4);
joined_r0x0016351c:
      if (iVar7 == 0) {
        FUN_00162a7c(param_1);
        memcpy(param_1,__src,0x58);
      }
      else {
        FUN_00162a7c(__src);
      }
      FUN_00143300(__src);
      return iVar7;
    }
    __s = (char *)FUN_00163c34(local_68,param_3);
    FUN_00143300(local_68);
    if (__s == (char *)0x0) {
      return 7;
    }
    __src = (void *)FUN_00143330(0x58,1);
    if (__src != (void *)0x0) {
      iVar7 = FUN_00163554(__s,__src,param_4);
      FUN_00143300(__s);
      goto joined_r0x0016351c;
    }
    goto LAB_00163440;
  case 1:
    if (((param_4 >> 3 & 1) == 0) && (lVar12 = FUN_0014fe60(param_3), lVar12 == 0)) {
      return 5;
    }
    uVar15 = 0;
    lVar12 = 0;
    plVar18 = param_1;
    goto LAB_00163184;
  case 2:
    plVar18 = param_1 + 1;
    break;
  case 3:
    plVar18 = param_1 + 2;
    break;
  case 4:
    plVar18 = param_1 + 3;
    break;
  case 5:
    plVar18 = param_1 + 4;
    break;
  case 6:
    lVar12 = strtol(param_3,(char **)0x0,10);
    if (lVar12 - 0x10000U < 0xffffffffffff0001) {
      return 4;
    }
    uVar15 = 0;
    plVar18 = param_1 + 5;
    goto LAB_00163184;
  case 7:
    uVar15 = 0;
    plVar18 = param_1 + 6;
    if ((param_4 >> 7 & 1) != 0) {
      bVar5 = false;
      bVar6 = false;
      goto LAB_0016321c;
    }
    goto LAB_00163180;
  case 8:
    uVar15 = param_4 >> 8 & 1;
    plVar18 = param_1 + 7;
    if ((param_4 >> 7 & 1) == 0) goto LAB_00163180;
    bVar5 = true;
    bVar6 = true;
    goto LAB_0016321c;
  case 9:
    plVar18 = param_1 + 8;
    break;
  default:
LAB_0016349c:
    return 9;
  }
  if ((param_4 >> 7 & 1) == 0) {
    uVar15 = 0;
LAB_00163180:
    lVar12 = 0;
LAB_00163184:
    __s = (char *)FUN_00143320(param_3);
    if (__s != (char *)0x0) {
      pcVar14 = __s;
      do {
        if (*pcVar14 == '%') {
          iVar7 = FUN_00146594(pcVar14[1]);
          if (((iVar7 == 0) || (iVar7 = FUN_00146594(pcVar14[2]), iVar7 == 0)) ||
             ((iVar7 = FUN_0014660c(pcVar14[1]), iVar7 == 0 &&
              (iVar7 = FUN_0014660c(pcVar14[2]), iVar7 == 0)))) goto LAB_001631fc;
          iVar7 = tolower((uint)(byte)pcVar14[1]);
          pcVar14[1] = (char)iVar7;
          iVar7 = tolower((uint)(byte)pcVar14[2]);
          lVar11 = 3;
          pcVar14[2] = (char)iVar7;
        }
        else {
          if (*pcVar14 == '\0') goto LAB_00163328;
LAB_001631fc:
          lVar11 = 1;
        }
        pcVar14 = pcVar14 + lVar11;
      } while( true );
    }
  }
  else {
    uVar15 = 0;
    bVar6 = false;
    bVar5 = true;
LAB_0016321c:
    sVar8 = strlen(param_3);
    __s = (char *)FUN_001432f0(sVar8 * 3 + 1);
    if (__s != (char *)0x0) {
      if (bVar6) {
        lVar12 = 0;
        do {
          cVar2 = param_3[lVar12];
          cVar13 = '+';
          if (cVar2 != ' ') {
            if (cVar2 == '\0') goto LAB_00163268;
            cVar13 = cVar2;
          }
          __s[lVar12] = cVar13;
          lVar12 = lVar12 + 1;
        } while( true );
      }
LAB_0016327c:
      pcVar14 = __s;
      if (*param_3 != '\0') {
        pcVar3 = param_3;
        uVar16 = uVar15;
        do {
          pcVar19 = pcVar3 + 1;
          uVar9 = FUN_00144c44();
          cVar2 = *pcVar3;
          bVar4 = bVar5;
          if (cVar2 != '/') {
            bVar4 = true;
          }
          uVar17 = uVar16;
          if (((uVar9 & 1) != 0) || (!bVar4)) {
LAB_001632ec:
            *pcVar14 = cVar2;
            if (uVar16 != 0) {
              uVar17 = 0;
            }
            if (cVar2 != '=') {
              uVar17 = uVar16;
            }
            lVar12 = 1;
          }
          else {
            bVar4 = false;
            if (cVar2 == '+') {
              bVar4 = bVar6;
            }
            if (((cVar2 == '=' & uVar16) != 0) || (bVar4)) goto LAB_001632ec;
            FUN_001460b8(pcVar14,4,"%%%02x");
            lVar12 = 3;
          }
          pcVar14 = pcVar14 + lVar12;
          pcVar3 = pcVar19;
          uVar16 = uVar17;
        } while (*pcVar19 != '\0');
      }
      *pcVar14 = '\0';
      if (bVar6) {
        FUN_00143300(param_3);
      }
      lVar12 = 0;
LAB_00163328:
      if (((uVar15 == 0) || (pcVar14 = (char *)param_1[7], pcVar14 == (char *)0x0)) ||
         (sVar8 = strlen(pcVar14), sVar8 == 0)) {
        FUN_00143300(*plVar18);
        *plVar18 = (long)__s;
        if (lVar12 == 0) {
          return 0;
        }
        param_1[10] = lVar12;
        return 0;
      }
      cVar2 = pcVar14[sVar8 - 1];
      sVar10 = strlen(__s);
      sVar1 = sVar8;
      if (cVar2 != '&') {
        sVar1 = sVar8 + 1;
      }
      pcVar14 = (char *)FUN_001432f0(sVar10 + sVar1 + 1);
      if (pcVar14 != (char *)0x0) {
        strcpy(pcVar14,(char *)param_1[7]);
        if (cVar2 != '&') {
          pcVar14[sVar8] = '&';
        }
        strcpy(pcVar14 + sVar1,__s);
        FUN_00143300(__s);
        FUN_00143300(*plVar18);
        *plVar18 = (long)pcVar14;
        return 0;
      }
LAB_00163440:
      FUN_00143300(__s);
    }
  }
  return 7;
LAB_00163268:
  __s[lVar12] = '\0';
  param_3 = (char *)FUN_00143320(__s);
  if (param_3 != (char *)0x0) goto LAB_0016327c;
  goto LAB_00163440;
}

