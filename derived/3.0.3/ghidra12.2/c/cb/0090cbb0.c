
void FUN_0090cbb0(undefined8 *param_1,long param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  int *piVar5;
  uint *puVar6;
  long lVar7;
  int iVar8;
  char cVar9;
  ulong uVar10;
  undefined4 uVar11;
  
  lVar7 = *(long *)(param_2 + 8);
  if (lVar7 != 0) {
    if ((int)*(uint *)(lVar7 + 0x1c0) < 1) {
      if ((((*(long *)(lVar7 + 0xb0) == 0) ||
           (puVar6 = *(uint **)(*(long *)(lVar7 + 0xb0) + 8), puVar6 == (uint *)0x0)) ||
          ((param_3 < *(uint *)(lVar7 + 200) &&
           (*(char *)(*(long *)(lVar7 + 0xd0) + (long)(int)param_3) == '\0')))) ||
         (((*puVar6 <= param_3 || (puVar6[1] == 0)) || ((ushort)puVar6[2] == 0))))
      goto LAB_0090cf30;
      iVar8 = 0xc;
      if (*(char *)((long)puVar6 + 10) != '\0') {
        iVar8 = 0x1c;
      }
      puVar6 = (uint *)((ulong)(puVar6[1] * param_3 + (uint)(ushort)puVar6[2] * 8 + iVar8) +
                       (long)puVar6);
    }
    else {
      if (*(uint *)(lVar7 + 0x1c0) <= param_3) goto LAB_0090cf30;
      if (*(uint *)(lVar7 + 0x1b0) <= param_3) {
        param_3 = 0;
      }
      puVar6 = *(uint **)(*(long *)(lVar7 + 0x1b8) + (ulong)param_3 * 8);
    }
    if (puVar6 != (uint *)0x0) {
      if (*puVar6 != 0) {
        uVar11 = 0;
        cVar9 = DAT_04cf00c8;
        do {
          if (cVar9 != '\0') {
            if (DAT_04cf011c < 0) {
              if (DAT_04cf011c._4_4_ == 0xffffffff) goto LAB_0090cc6c;
LAB_0090cf4c:
              uVar11 = 0;
            }
            else {
              if ((undefined4 *)((ulong)DAT_04cf011c._4_4_ + (long)puVar6) == (undefined4 *)0x0)
              goto LAB_0090cf4c;
              uVar11 = *(undefined4 *)((ulong)DAT_04cf011c._4_4_ + (long)puVar6);
            }
LAB_0090cf50:
            uVar2 = *puVar6;
            *(undefined4 *)param_1 = uVar11;
            if (uVar2 == 0) goto LAB_0090cfe8;
            uVar11 = 0;
            uVar3 = (uint)DAT_04cf0124;
            goto LAB_0090cf7c;
          }
          cVar9 = '\x01';
          DAT_04cf00cc = 0xffffffffffffffff;
          DAT_04cf00d4 = 0xffffffffffffffff;
          DAT_04cf00c8 = '\x01';
          DAT_04cf016c = 0xffffffffffffffff;
          DAT_04cf0174 = 0xffffffff;
          DAT_04cf00dc = 0xffffffffffffffff;
          DAT_04cf00e4 = 0xffffffffffffffff;
          DAT_04cf00ec = 0xffffffffffffffff;
          DAT_04cf00f4 = 0xffffffffffffffff;
          DAT_04cf00fc = 0xffffffffffffffff;
          DAT_04cf0104 = 0xffffffffffffffff;
          DAT_04cf010c = 0xffffffffffffffff;
          DAT_04cf0114 = -1;
          DAT_04cf011c = -1;
          DAT_04cf0124 = -1;
          DAT_04cf012c = 0xffffffffffffffff;
          DAT_04cf0134 = 0xffffffffffffffff;
          DAT_04cf013c = 0xffffffffffffffff;
          DAT_04cf0144 = 0xffffffffffffffff;
          DAT_04cf014c = 0xffffffffffffffff;
          DAT_04cf0154 = 0xffffffffffffffff;
          DAT_04cf015c = 0xffffffffffffffff;
          DAT_04cf0164 = 0xffffffffffffffff;
LAB_0090cc6c:
          lVar7 = (long)puVar6 - (ulong)*puVar6;
          if ((*puVar6 == 0) || (lVar7 == 0)) goto LAB_0090cf50;
          lVar1 = 0xc;
          if (*(char *)(lVar7 + 10) != '\0') {
            lVar1 = 0x1c;
          }
          if (lVar1 + lVar7 == 0) goto LAB_0090cf50;
          uVar10 = (ulong)*(ushort *)(lVar7 + 8);
          DAT_04cf011c = CONCAT44(0xfffffffe,(uint)DAT_04cf011c);
          if (uVar10 == 0) goto LAB_0090cf50;
          piVar5 = (int *)(lVar1 + lVar7 + 4);
          while (piVar5[-1] != 0x40dfcd36) {
            piVar5 = piVar5 + 2;
            uVar10 = uVar10 - 1;
            if (uVar10 == 0) goto LAB_0090cf50;
          }
          iVar8 = 0;
          if (*piVar5 != -1) {
            iVar8 = *piVar5;
          }
          DAT_04cf011c = CONCAT44(iVar8,(uint)DAT_04cf011c);
        } while (*puVar6 != 0);
      }
      *(undefined4 *)param_1 = 0;
LAB_0090ccd8:
      uVar11 = 0;
LAB_0090ccdc:
      uVar2 = *puVar6;
      *(undefined4 *)((long)param_1 + 4) = uVar11;
      if (uVar2 != 0) {
        uVar11 = 0;
        cVar9 = DAT_04cf00c8;
        do {
          if (cVar9 == '\0') {
            cVar9 = '\x01';
            DAT_04cf00cc = 0xffffffffffffffff;
            DAT_04cf00d4 = 0xffffffffffffffff;
            DAT_04cf00c8 = '\x01';
            DAT_04cf016c = 0xffffffffffffffff;
            DAT_04cf0174 = 0xffffffff;
            DAT_04cf00dc = 0xffffffffffffffff;
            DAT_04cf00e4 = 0xffffffffffffffff;
            DAT_04cf00ec = 0xffffffffffffffff;
            DAT_04cf00f4 = 0xffffffffffffffff;
            DAT_04cf00fc = 0xffffffffffffffff;
            DAT_04cf0104 = 0xffffffffffffffff;
            DAT_04cf010c = 0xffffffffffffffff;
            DAT_04cf0114 = -1;
            DAT_04cf011c = -1;
            DAT_04cf0124 = -1;
            DAT_04cf012c = 0xffffffffffffffff;
            DAT_04cf0134 = 0xffffffffffffffff;
            DAT_04cf013c = 0xffffffffffffffff;
            DAT_04cf0144 = 0xffffffffffffffff;
            DAT_04cf014c = 0xffffffffffffffff;
            DAT_04cf0154 = 0xffffffffffffffff;
            DAT_04cf015c = 0xffffffffffffffff;
            DAT_04cf0164 = 0xffffffffffffffff;
          }
          else {
            if (-1 < DAT_04cf0124) {
              if ((undefined4 *)((ulong)DAT_04cf0124._4_4_ + (long)puVar6) == (undefined4 *)0x0)
              goto LAB_0090cfec;
              uVar11 = *(undefined4 *)((ulong)DAT_04cf0124._4_4_ + (long)puVar6);
              goto LAB_0090cff0;
            }
            if (DAT_04cf0124._4_4_ != 0xffffffff) goto LAB_0090cfec;
          }
          lVar7 = (long)puVar6 - (ulong)*puVar6;
          if ((*puVar6 == 0) || (lVar7 == 0)) goto LAB_0090cff0;
          lVar1 = 0xc;
          if (*(char *)(lVar7 + 10) != '\0') {
            lVar1 = 0x1c;
          }
          if (lVar1 + lVar7 == 0) goto LAB_0090cff0;
          uVar10 = (ulong)*(ushort *)(lVar7 + 8);
          DAT_04cf0124 = CONCAT44(0xfffffffe,(uint)DAT_04cf0124);
          if (uVar10 == 0) goto LAB_0090cff0;
          piVar5 = (int *)(lVar1 + lVar7 + 4);
          while (piVar5[-1] != 0x3a1f9e56) {
            piVar5 = piVar5 + 2;
            uVar10 = uVar10 - 1;
            if (uVar10 == 0) goto LAB_0090cff0;
          }
          iVar8 = 0;
          if (*piVar5 != -1) {
            iVar8 = *piVar5;
          }
          DAT_04cf0124 = CONCAT44(iVar8,(uint)DAT_04cf0124);
        } while (*puVar6 != 0);
      }
      *(undefined4 *)(param_1 + 1) = 0;
LAB_0090cdc8:
      uVar11 = 0;
LAB_0090cdcc:
      uVar2 = *puVar6;
      *(undefined4 *)((long)param_1 + 0xc) = uVar11;
      if (uVar2 != 0) {
        uVar11 = 0;
        cVar9 = DAT_04cf00c8;
        do {
          if (cVar9 == '\0') {
            cVar9 = '\x01';
            DAT_04cf00cc = 0xffffffffffffffff;
            DAT_04cf00d4 = 0xffffffffffffffff;
            DAT_04cf00c8 = '\x01';
            DAT_04cf016c = 0xffffffffffffffff;
            DAT_04cf0174 = 0xffffffff;
            DAT_04cf00dc = 0xffffffffffffffff;
            DAT_04cf00e4 = 0xffffffffffffffff;
            DAT_04cf00ec = 0xffffffffffffffff;
            DAT_04cf00f4 = 0xffffffffffffffff;
            DAT_04cf00fc = 0xffffffffffffffff;
            DAT_04cf0104 = 0xffffffffffffffff;
            DAT_04cf010c = 0xffffffffffffffff;
            DAT_04cf0114 = -1;
            DAT_04cf011c = -1;
            DAT_04cf0124 = -1;
            DAT_04cf012c = 0xffffffffffffffff;
            DAT_04cf0134 = 0xffffffffffffffff;
            DAT_04cf013c = 0xffffffffffffffff;
            DAT_04cf0144 = 0xffffffffffffffff;
            DAT_04cf014c = 0xffffffffffffffff;
            DAT_04cf0154 = 0xffffffffffffffff;
            DAT_04cf015c = 0xffffffffffffffff;
            DAT_04cf0164 = 0xffffffffffffffff;
          }
          else {
            if (-1 < DAT_04cf0114) {
              if ((undefined4 *)((ulong)DAT_04cf0114._4_4_ + (long)puVar6) == (undefined4 *)0x0)
              goto LAB_0090d08c;
              uVar11 = *(undefined4 *)((ulong)DAT_04cf0114._4_4_ + (long)puVar6);
              goto LAB_0090d090;
            }
            if (DAT_04cf0114._4_4_ != 0xffffffff) goto LAB_0090d08c;
          }
          lVar7 = (long)puVar6 - (ulong)*puVar6;
          if ((*puVar6 == 0) || (lVar7 == 0)) goto LAB_0090d090;
          lVar1 = 0xc;
          if (*(char *)(lVar7 + 10) != '\0') {
            lVar1 = 0x1c;
          }
          if (lVar1 + lVar7 == 0) goto LAB_0090d090;
          uVar10 = (ulong)*(ushort *)(lVar7 + 8);
          DAT_04cf0114 = CONCAT44(0xfffffffe,(uint)DAT_04cf0114);
          if (uVar10 == 0) goto LAB_0090d090;
          piVar5 = (int *)(lVar1 + lVar7 + 4);
          while (piVar5[-1] != 0x1a361bd7) {
            piVar5 = piVar5 + 2;
            uVar10 = uVar10 - 1;
            if (uVar10 == 0) goto LAB_0090d090;
          }
          iVar8 = 0;
          if (*piVar5 != -1) {
            iVar8 = *piVar5;
          }
          DAT_04cf0114 = CONCAT44(iVar8,(uint)DAT_04cf0114);
        } while (*puVar6 != 0);
      }
      *(undefined4 *)(param_1 + 2) = 0;
      *(undefined4 *)((long)param_1 + 0x14) = 0;
      return;
    }
  }
LAB_0090cf30:
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  return;
  while( true ) {
    if ((uVar3 != 0xffffffff) || (lVar7 = (long)puVar6 - (ulong)uVar2, lVar7 == 0))
    goto LAB_0090ccdc;
    lVar1 = 0xc;
    if (*(char *)(lVar7 + 10) != '\0') {
      lVar1 = 0x1c;
    }
    if (lVar1 + lVar7 == 0) goto LAB_0090ccdc;
    uVar10 = (ulong)*(ushort *)(lVar7 + 8);
    DAT_04cf0124 = CONCAT44(DAT_04cf0124._4_4_,0xfffffffe);
    if (uVar10 == 0) goto LAB_0090ccdc;
    puVar4 = (uint *)(lVar1 + lVar7 + 4);
    while (puVar4[-1] != 0x7dbfe486) {
      puVar4 = puVar4 + 2;
      uVar10 = uVar10 - 1;
      if (uVar10 == 0) goto LAB_0090ccdc;
    }
    uVar3 = 0;
    if (*puVar4 != 0xffffffff) {
      uVar3 = *puVar4;
    }
    DAT_04cf0124 = CONCAT44(DAT_04cf0124._4_4_,uVar3);
    uVar2 = *puVar6;
    if (uVar2 == 0) break;
LAB_0090cf7c:
    if (-1 < (int)uVar3) {
      if ((undefined4 *)((long)puVar6 + (ulong)uVar3) == (undefined4 *)0x0) goto LAB_0090ccd8;
      uVar11 = *(undefined4 *)((long)puVar6 + (ulong)uVar3);
      goto LAB_0090ccdc;
    }
  }
LAB_0090cfe8:
  *(undefined4 *)((long)param_1 + 4) = 0;
LAB_0090cfec:
  uVar11 = 0;
LAB_0090cff0:
  uVar2 = *puVar6;
  *(undefined4 *)(param_1 + 1) = uVar11;
  if (uVar2 != 0) {
    uVar11 = 0;
    uVar3 = (uint)DAT_04cf0114;
    do {
      if (-1 < (int)uVar3) {
        if ((undefined4 *)((long)puVar6 + (ulong)uVar3) == (undefined4 *)0x0) goto LAB_0090cdc8;
        uVar11 = *(undefined4 *)((long)puVar6 + (ulong)uVar3);
        goto LAB_0090cdcc;
      }
      if ((uVar3 != 0xffffffff) || (lVar7 = (long)puVar6 - (ulong)uVar2, lVar7 == 0))
      goto LAB_0090cdcc;
      lVar1 = 0xc;
      if (*(char *)(lVar7 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      if (lVar1 + lVar7 == 0) goto LAB_0090cdcc;
      uVar10 = (ulong)*(ushort *)(lVar7 + 8);
      DAT_04cf0114 = CONCAT44(DAT_04cf0114._4_4_,0xfffffffe);
      if (uVar10 == 0) goto LAB_0090cdcc;
      puVar4 = (uint *)(lVar1 + lVar7 + 4);
      while (puVar4[-1] != 0x27563267) {
        puVar4 = puVar4 + 2;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) goto LAB_0090cdcc;
      }
      uVar3 = 0;
      if (*puVar4 != 0xffffffff) {
        uVar3 = *puVar4;
      }
      DAT_04cf0114 = CONCAT44(DAT_04cf0114._4_4_,uVar3);
      uVar2 = *puVar6;
    } while (uVar2 != 0);
  }
  *(undefined4 *)((long)param_1 + 0xc) = 0;
LAB_0090d08c:
  uVar11 = 0;
LAB_0090d090:
  uVar2 = *puVar6;
  *(undefined4 *)(param_1 + 2) = uVar11;
  uVar11 = 0;
  if (uVar2 != 0) {
    uVar3 = (uint)DAT_04cf011c;
    while ((int)uVar3 < 0) {
      if ((uVar3 != 0xffffffff) || (lVar7 = (long)puVar6 - (ulong)uVar2, lVar7 == 0))
      goto LAB_0090d138;
      lVar1 = 0xc;
      if (*(char *)(lVar7 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      if (lVar1 + lVar7 == 0) goto LAB_0090d138;
      uVar10 = (ulong)*(ushort *)(lVar7 + 8);
      DAT_04cf011c = CONCAT44(DAT_04cf011c._4_4_,0xfffffffe);
      if (uVar10 == 0) goto LAB_0090d138;
      puVar4 = (uint *)(lVar1 + lVar7 + 4);
      while (puVar4[-1] != 0x5d966107) {
        puVar4 = puVar4 + 2;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) goto LAB_0090d138;
      }
      uVar3 = 0;
      if (*puVar4 != 0xffffffff) {
        uVar3 = *puVar4;
      }
      DAT_04cf011c = CONCAT44(DAT_04cf011c._4_4_,uVar3);
      uVar2 = *puVar6;
      if (uVar2 == 0) goto LAB_0090d138;
    }
    if ((undefined4 *)((long)puVar6 + (ulong)uVar3) != (undefined4 *)0x0) {
      uVar11 = *(undefined4 *)((long)puVar6 + (ulong)uVar3);
    }
  }
LAB_0090d138:
  *(undefined4 *)((long)param_1 + 0x14) = uVar11;
  return;
}

