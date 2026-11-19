
int FUN_038d0b80(void *param_1,int *param_2,int param_3,void *param_4,uint param_5,long *param_6,
                long *param_7,char *param_8)

{
  undefined2 *puVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  void *__s2;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  void *__src;
  int iVar10;
  uint uVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  ulong uVar15;
  uint uVar16;
  
  *param_8 = '\0';
  uVar9 = (long)param_3 - 1;
  (**(code **)(*param_6 + 0x18))(param_6);
  __s2 = (void *)param_6[1];
  (**(code **)(*param_6 + 0x18))(param_6);
  uVar15 = 0;
  do {
    if (*(short *)(param_6[1] + uVar15 * 2) == 0) {
LAB_038d0c34:
      iVar13 = (int)uVar15;
joined_r0x038d0c34:
      if (iVar13 != 0) {
        (**(code **)(*param_7 + 0x18))(param_7);
        __src = (void *)param_7[1];
        (**(code **)(*param_7 + 0x18))(param_7);
        lVar12 = 0;
        goto LAB_038d0c70;
      }
      break;
    }
    lVar12 = param_6[1] + uVar15 * 2;
    if (*(short *)(lVar12 + 2) == 0) {
      uVar15 = uVar15 + 1;
      goto LAB_038d0c34;
    }
    if (*(short *)(lVar12 + 4) == 0) {
      uVar15 = uVar15 + 2;
      iVar13 = (int)uVar15;
      goto joined_r0x038d0c34;
    }
    uVar15 = uVar15 + 3;
  } while (uVar15 != 0x80001);
  if (param_1 == param_4) {
    return 0;
  }
  *param_8 = param_3 <= (int)param_5;
  if ((int)param_5 < param_3) {
    memcpy(param_1,param_4,
           -(ulong)(param_5 + 1 >> 0x1f) & 0xfffffffe00000000 | (ulong)(param_5 + 1) << 1);
    iVar7 = 0;
    uVar9 = (ulong)param_5;
  }
  else {
    uVar15 = -(uVar9 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar9 & 0xffffffff) << 1;
    memcpy(param_1,param_4,uVar15);
    iVar7 = 0;
    *(undefined2 *)((long)param_1 + uVar15) = 0;
  }
  goto joined_r0x038d0f7c;
  while( true ) {
    lVar3 = param_7[1] + lVar12 * 2;
    if (*(short *)(lVar3 + 2) == 0) {
      lVar12 = lVar12 + 1;
      goto LAB_038d0d20;
    }
    if (*(short *)(lVar3 + 4) == 0) {
      lVar12 = lVar12 + 2;
      goto LAB_038d0d20;
    }
    lVar12 = lVar12 + 3;
    if (lVar12 == 0x80001) break;
LAB_038d0c70:
    if (*(short *)(param_7[1] + lVar12 * 2) == 0) goto LAB_038d0d20;
  }
  lVar12 = 0;
LAB_038d0d20:
  uVar11 = (uint)lVar12;
  iVar14 = (int)uVar15;
  iVar13 = (int)uVar9;
  if ((param_1 == param_4) && (iVar14 < (int)uVar11)) {
    iVar7 = 0;
    iVar10 = 0;
    uVar15 = -(uVar15 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar15 & 0xffffffff) << 1;
    do {
      if ((int)param_5 <= iVar10) {
        if (*param_8 != '\0') goto LAB_038d0e4c;
        *(undefined2 *)((long)param_1 + (long)iVar7 * 2) = 0;
        iVar6 = iVar7;
        goto joined_r0x038d0f90;
      }
      iVar5 = memcmp((void *)((long)param_1 + (long)iVar10 * 2),__s2,uVar15);
      iVar6 = iVar14;
      uVar16 = uVar11;
      if (iVar5 != 0) {
        uVar16 = 1;
        iVar6 = 1;
      }
      iVar7 = uVar16 + iVar7;
      iVar10 = iVar6 + iVar10;
    } while (iVar7 < param_3);
    *param_8 = '\x01';
LAB_038d0e4c:
    *(undefined2 *)((long)param_1 + uVar9 * 2) = 0;
    iVar6 = iVar13;
joined_r0x038d0f90:
    if (param_2 != (int *)0x0) {
      *param_2 = iVar6;
    }
    iVar6 = 0;
    uVar16 = iVar10 - 1;
    if (iVar10 < 1) {
      return 0;
    }
    uVar8 = iVar7 - 1;
    do {
      while( true ) {
        puVar1 = (undefined2 *)((long)param_1 + (ulong)uVar16 * 2);
        iVar7 = memcmp(puVar1 + (1 - (long)iVar14),__s2,uVar15);
        if (iVar7 == 0) break;
        if ((int)uVar8 < iVar13) {
          *(undefined2 *)((long)param_1 + (long)(int)uVar8 * 2) = *puVar1;
        }
        uVar16 = uVar16 - 1;
        uVar8 = uVar8 - 1;
        if ((int)uVar16 < 0) {
          return iVar6;
        }
      }
      uVar2 = iVar13 + ~(uVar8 - uVar11);
      uVar4 = uVar11;
      if ((int)uVar2 <= (int)uVar11) {
        uVar4 = uVar2;
      }
      if (0 < (int)uVar4) {
        memcpy((void *)((long)param_1 + (long)(int)uVar8 * 2 + (long)(int)uVar11 * -2 + 2),__src,
               (ulong)uVar4 << 1);
        iVar6 = iVar6 + 1;
      }
      uVar16 = uVar16 - iVar14;
      uVar8 = uVar8 - uVar11;
    } while (-1 < (int)uVar16);
    return iVar6;
  }
  if ((int)param_5 < 1) {
    iVar7 = 0;
    uVar16 = 0;
  }
  else {
    iVar10 = 0;
    uVar16 = 0;
    iVar7 = 0;
    do {
      puVar1 = (undefined2 *)((long)param_4 + (long)iVar10 * 2);
      iVar6 = memcmp(puVar1,__s2,
                     -(uVar15 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar15 & 0xffffffff) << 1);
      if (iVar6 == 0) {
        uVar2 = iVar13 - uVar16;
        uVar8 = uVar11;
        if ((int)uVar2 <= (int)uVar11) {
          uVar8 = uVar2;
        }
        if (0 < (int)uVar8) {
          memcpy((void *)((long)param_1 + (long)(int)uVar16 * 2),__src,(ulong)uVar8 << 1);
        }
        if (uVar11 == 0 || 0 < (int)uVar8) {
          iVar7 = iVar7 + 1;
        }
        if ((int)uVar2 < (int)uVar11) {
LAB_038d0f64:
          *param_8 = '\x01';
          *(undefined2 *)((long)param_1 + (long)iVar13 * 2) = 0;
          goto joined_r0x038d0f7c;
        }
        iVar6 = iVar14;
        uVar8 = uVar11;
      }
      else {
        if (iVar13 <= (int)uVar16) goto LAB_038d0f64;
        iVar6 = 1;
        *(undefined2 *)((long)param_1 + (long)(int)uVar16 * 2) = *puVar1;
        uVar8 = 1;
      }
      iVar10 = iVar6 + iVar10;
      uVar16 = uVar8 + uVar16;
    } while (iVar10 < (int)param_5);
  }
  uVar9 = (ulong)uVar16;
  *(undefined2 *)((long)param_1 + (long)(int)uVar16 * 2) = 0;
joined_r0x038d0f7c:
  if (param_2 != (int *)0x0) {
    *param_2 = (int)uVar9;
  }
  return iVar7;
}

