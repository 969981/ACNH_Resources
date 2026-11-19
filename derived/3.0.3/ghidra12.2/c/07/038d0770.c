
int FUN_038d0770(void *param_1,int *param_2,int param_3,void *param_4,uint param_5,long *param_6,
                long *param_7,char *param_8)

{
  long lVar1;
  uint uVar2;
  void *__s2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  size_t __n;
  void *__src;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  uint uVar12;
  size_t __n_00;
  uint uVar13;
  
  *param_8 = '\0';
  __n = (long)param_3 - 1;
  (**(code **)(*param_6 + 0x18))(param_6);
  __s2 = (void *)param_6[1];
  (**(code **)(*param_6 + 0x18))(param_6);
  lVar11 = 0;
  do {
    if (*(char *)(param_6[1] + lVar11) == '\0') {
LAB_038d0820:
      iVar10 = (int)lVar11;
joined_r0x038d0820:
      if (iVar10 != 0) {
        (**(code **)(*param_7 + 0x18))(param_7);
        __src = (void *)param_7[1];
        (**(code **)(*param_7 + 0x18))(param_7);
        lVar11 = 0;
        goto LAB_038d0860;
      }
      break;
    }
    lVar1 = param_6[1] + lVar11;
    if (*(char *)(lVar1 + 1) == '\0') {
      lVar11 = lVar11 + 1;
      goto LAB_038d0820;
    }
    if (*(char *)(lVar1 + 2) == '\0') {
      iVar10 = (int)lVar11 + 2;
      goto joined_r0x038d0820;
    }
    lVar11 = lVar11 + 3;
  } while (lVar11 != 0x80001);
  if (param_1 == param_4) {
    return 0;
  }
  *param_8 = param_3 <= (int)param_5;
  if ((int)param_5 < param_3) {
    memcpy(param_1,param_4,(long)(int)(param_5 + 1));
    iVar5 = 0;
    __n = (size_t)param_5;
  }
  else {
    memcpy(param_1,param_4,__n);
    iVar5 = 0;
    *(undefined1 *)((long)param_1 + __n) = 0;
  }
  goto joined_r0x038d0b64;
  while( true ) {
    lVar1 = param_7[1] + lVar11;
    if (*(char *)(lVar1 + 1) == '\0') {
      lVar11 = lVar11 + 1;
      goto LAB_038d090c;
    }
    if (*(char *)(lVar1 + 2) == '\0') {
      uVar12 = (int)lVar11 + 2;
      goto joined_r0x038d0a4c;
    }
    lVar11 = lVar11 + 3;
    if (lVar11 == 0x80001) break;
LAB_038d0860:
    iVar7 = (int)__n;
    if (*(char *)(param_7[1] + lVar11) == '\0') {
LAB_038d090c:
      uVar12 = (uint)lVar11;
      goto joined_r0x038d0a4c;
    }
  }
  uVar12 = 0;
joined_r0x038d0a4c:
  if ((param_1 == param_4) && (iVar10 < (int)uVar12)) {
    iVar5 = 0;
    iVar8 = 0;
    __n_00 = (size_t)iVar10;
    do {
      if ((int)param_5 <= iVar8) {
        if (*param_8 != '\0') goto LAB_038d0978;
        *(undefined1 *)((long)param_1 + (long)iVar5) = 0;
        iVar6 = iVar5;
        goto joined_r0x038d0b78;
      }
      iVar4 = memcmp((void *)((long)param_1 + (long)iVar8),__s2,__n_00);
      iVar6 = iVar10;
      uVar9 = uVar12;
      if (iVar4 != 0) {
        uVar9 = 1;
        iVar6 = 1;
      }
      iVar5 = uVar9 + iVar5;
      iVar8 = iVar6 + iVar8;
    } while (iVar5 < param_3);
    *param_8 = '\x01';
LAB_038d0978:
    *(undefined1 *)((long)param_1 + __n) = 0;
    iVar6 = iVar7;
joined_r0x038d0b78:
    if (param_2 != (int *)0x0) {
      *param_2 = iVar6;
    }
    iVar6 = 0;
    uVar9 = iVar8 - 1;
    if (iVar8 < 1) {
      return 0;
    }
    uVar13 = iVar5 - 1;
    do {
      while( true ) {
        iVar5 = memcmp((undefined1 *)((long)param_1 + (ulong)uVar9) + (1 - __n_00),__s2,__n_00);
        if (iVar5 == 0) break;
        if ((int)uVar13 < iVar7) {
          *(undefined1 *)((long)param_1 + (long)(int)uVar13) =
               *(undefined1 *)((long)param_1 + (ulong)uVar9);
        }
        uVar9 = uVar9 - 1;
        uVar13 = uVar13 - 1;
        if ((int)uVar9 < 0) {
          return iVar6;
        }
      }
      uVar3 = iVar7 + ~(uVar13 - uVar12);
      uVar2 = uVar12;
      if ((int)uVar3 <= (int)uVar12) {
        uVar2 = uVar3;
      }
      if (0 < (int)uVar2) {
        memcpy((void *)((long)param_1 + (long)(int)uVar13 + (1 - (long)(int)uVar12)),__src,
               (ulong)uVar2);
        iVar6 = iVar6 + 1;
      }
      uVar9 = uVar9 - iVar10;
      uVar13 = uVar13 - uVar12;
    } while (-1 < (int)uVar9);
    return iVar6;
  }
  if ((int)param_5 < 1) {
    iVar5 = 0;
    uVar9 = 0;
  }
  else {
    iVar8 = 0;
    uVar9 = 0;
    iVar5 = 0;
    do {
      iVar6 = memcmp((undefined1 *)((long)param_4 + (long)iVar8),__s2,(long)iVar10);
      if (iVar6 == 0) {
        uVar3 = iVar7 - uVar9;
        uVar13 = uVar12;
        if ((int)uVar3 <= (int)uVar12) {
          uVar13 = uVar3;
        }
        if (0 < (int)uVar13) {
          memcpy((void *)((long)param_1 + (long)(int)uVar9),__src,(ulong)uVar13);
        }
        if (uVar12 == 0 || 0 < (int)uVar13) {
          iVar5 = iVar5 + 1;
        }
        if ((int)uVar3 < (int)uVar12) {
LAB_038d0b4c:
          *param_8 = '\x01';
          *(undefined1 *)((long)param_1 + __n) = 0;
          goto joined_r0x038d0b64;
        }
        iVar6 = iVar10;
        uVar13 = uVar12;
      }
      else {
        if (iVar7 <= (int)uVar9) goto LAB_038d0b4c;
        iVar6 = 1;
        *(undefined1 *)((long)param_1 + (long)(int)uVar9) =
             *(undefined1 *)((long)param_4 + (long)iVar8);
        uVar13 = 1;
      }
      iVar8 = iVar6 + iVar8;
      uVar9 = uVar13 + uVar9;
    } while (iVar8 < (int)param_5);
  }
  __n = (size_t)uVar9;
  *(undefined1 *)((long)param_1 + (long)(int)uVar9) = 0;
joined_r0x038d0b64:
  if (param_2 != (int *)0x0) {
    *param_2 = (int)__n;
  }
  return iVar5;
}

