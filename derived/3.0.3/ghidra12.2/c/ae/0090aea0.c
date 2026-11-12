
void FUN_0090aea0(undefined8 *param_1,long param_2,uint param_3)

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
      goto LAB_0090b220;
      iVar8 = 0xc;
      if (*(char *)((long)puVar6 + 10) != '\0') {
        iVar8 = 0x1c;
      }
      puVar6 = (uint *)((ulong)(puVar6[1] * param_3 + (uint)(ushort)puVar6[2] * 8 + iVar8) +
                       (long)puVar6);
    }
    else {
      if (*(uint *)(lVar7 + 0x1c0) <= param_3) goto LAB_0090b220;
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
            if (DAT_04cf00d4 < 0) {
              if (DAT_04cf00d4._4_4_ == 0xffffffff) goto LAB_0090af5c;
LAB_0090b23c:
              uVar11 = 0;
            }
            else {
              if ((undefined4 *)((ulong)DAT_04cf00d4._4_4_ + (long)puVar6) == (undefined4 *)0x0)
              goto LAB_0090b23c;
              uVar11 = *(undefined4 *)((ulong)DAT_04cf00d4._4_4_ + (long)puVar6);
            }
LAB_0090b240:
            uVar2 = *puVar6;
            *(undefined4 *)param_1 = uVar11;
            if (uVar2 == 0) goto LAB_0090b2d8;
            uVar11 = 0;
            uVar3 = (uint)DAT_04cf00dc;
            goto LAB_0090b26c;
          }
          cVar9 = '\x01';
          DAT_04cf00cc = -1;
          DAT_04cf00d4 = -1;
          DAT_04cf00c8 = '\x01';
          DAT_04cf016c = 0xffffffffffffffff;
          DAT_04cf0174 = 0xffffffff;
          DAT_04cf00dc = -1;
          DAT_04cf00e4 = 0xffffffffffffffff;
          DAT_04cf00ec = 0xffffffffffffffff;
          DAT_04cf00f4 = 0xffffffffffffffff;
          DAT_04cf00fc = 0xffffffffffffffff;
          DAT_04cf0104 = 0xffffffffffffffff;
          DAT_04cf010c = 0xffffffffffffffff;
          DAT_04cf0114 = 0xffffffffffffffff;
          DAT_04cf011c = 0xffffffffffffffff;
          DAT_04cf0124 = 0xffffffffffffffff;
          DAT_04cf012c = 0xffffffffffffffff;
          DAT_04cf0134 = 0xffffffffffffffff;
          DAT_04cf013c = 0xffffffffffffffff;
          DAT_04cf0144 = 0xffffffffffffffff;
          DAT_04cf014c = 0xffffffffffffffff;
          DAT_04cf0154 = 0xffffffffffffffff;
          DAT_04cf015c = 0xffffffffffffffff;
          DAT_04cf0164 = 0xffffffffffffffff;
LAB_0090af5c:
          lVar7 = (long)puVar6 - (ulong)*puVar6;
          if ((*puVar6 == 0) || (lVar7 == 0)) goto LAB_0090b240;
          lVar1 = 0xc;
          if (*(char *)(lVar7 + 10) != '\0') {
            lVar1 = 0x1c;
          }
          if (lVar1 + lVar7 == 0) goto LAB_0090b240;
          uVar10 = (ulong)*(ushort *)(lVar7 + 8);
          DAT_04cf00d4 = CONCAT44(0xfffffffe,(uint)DAT_04cf00d4);
          if (uVar10 == 0) goto LAB_0090b240;
          piVar5 = (int *)(lVar1 + lVar7 + 4);
          while (piVar5[-1] != -0x79948902) {
            piVar5 = piVar5 + 2;
            uVar10 = uVar10 - 1;
            if (uVar10 == 0) goto LAB_0090b240;
          }
          iVar8 = 0;
          if (*piVar5 != -1) {
            iVar8 = *piVar5;
          }
          DAT_04cf00d4 = CONCAT44(iVar8,(uint)DAT_04cf00d4);
        } while (*puVar6 != 0);
      }
      *(undefined4 *)param_1 = 0;
LAB_0090afc8:
      uVar11 = 0;
LAB_0090afcc:
      uVar2 = *puVar6;
      *(undefined4 *)((long)param_1 + 4) = uVar11;
      if (uVar2 != 0) {
        uVar11 = 0;
        cVar9 = DAT_04cf00c8;
        do {
          if (cVar9 == '\0') {
            cVar9 = '\x01';
            DAT_04cf00cc = -1;
            DAT_04cf00d4 = -1;
            DAT_04cf00c8 = '\x01';
            DAT_04cf016c = 0xffffffffffffffff;
            DAT_04cf0174 = 0xffffffff;
            DAT_04cf00dc = -1;
            DAT_04cf00e4 = 0xffffffffffffffff;
            DAT_04cf00ec = 0xffffffffffffffff;
            DAT_04cf00f4 = 0xffffffffffffffff;
            DAT_04cf00fc = 0xffffffffffffffff;
            DAT_04cf0104 = 0xffffffffffffffff;
            DAT_04cf010c = 0xffffffffffffffff;
            DAT_04cf0114 = 0xffffffffffffffff;
            DAT_04cf011c = 0xffffffffffffffff;
            DAT_04cf0124 = 0xffffffffffffffff;
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
            if (-1 < DAT_04cf00dc) {
              if ((undefined4 *)((ulong)DAT_04cf00dc._4_4_ + (long)puVar6) == (undefined4 *)0x0)
              goto LAB_0090b2dc;
              uVar11 = *(undefined4 *)((ulong)DAT_04cf00dc._4_4_ + (long)puVar6);
              goto LAB_0090b2e0;
            }
            if (DAT_04cf00dc._4_4_ != 0xffffffff) goto LAB_0090b2dc;
          }
          lVar7 = (long)puVar6 - (ulong)*puVar6;
          if ((*puVar6 == 0) || (lVar7 == 0)) goto LAB_0090b2e0;
          lVar1 = 0xc;
          if (*(char *)(lVar7 + 10) != '\0') {
            lVar1 = 0x1c;
          }
          if (lVar1 + lVar7 == 0) goto LAB_0090b2e0;
          uVar10 = (ulong)*(ushort *)(lVar7 + 8);
          DAT_04cf00dc = CONCAT44(0xfffffffe,(uint)DAT_04cf00dc);
          if (uVar10 == 0) goto LAB_0090b2e0;
          piVar5 = (int *)(lVar1 + lVar7 + 4);
          while (piVar5[-1] != -0x354da62) {
            piVar5 = piVar5 + 2;
            uVar10 = uVar10 - 1;
            if (uVar10 == 0) goto LAB_0090b2e0;
          }
          iVar8 = 0;
          if (*piVar5 != -1) {
            iVar8 = *piVar5;
          }
          DAT_04cf00dc = CONCAT44(iVar8,(uint)DAT_04cf00dc);
        } while (*puVar6 != 0);
      }
      *(undefined4 *)(param_1 + 1) = 0;
LAB_0090b0b8:
      uVar11 = 0;
LAB_0090b0bc:
      uVar2 = *puVar6;
      *(undefined4 *)((long)param_1 + 0xc) = uVar11;
      if (uVar2 != 0) {
        uVar11 = 0;
        cVar9 = DAT_04cf00c8;
        do {
          if (cVar9 == '\0') {
            cVar9 = '\x01';
            DAT_04cf00cc = -1;
            DAT_04cf00d4 = -1;
            DAT_04cf00c8 = '\x01';
            DAT_04cf016c = 0xffffffffffffffff;
            DAT_04cf0174 = 0xffffffff;
            DAT_04cf00dc = -1;
            DAT_04cf00e4 = 0xffffffffffffffff;
            DAT_04cf00ec = 0xffffffffffffffff;
            DAT_04cf00f4 = 0xffffffffffffffff;
            DAT_04cf00fc = 0xffffffffffffffff;
            DAT_04cf0104 = 0xffffffffffffffff;
            DAT_04cf010c = 0xffffffffffffffff;
            DAT_04cf0114 = 0xffffffffffffffff;
            DAT_04cf011c = 0xffffffffffffffff;
            DAT_04cf0124 = 0xffffffffffffffff;
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
            if (-1 < DAT_04cf00cc) {
              if ((undefined4 *)((ulong)DAT_04cf00cc._4_4_ + (long)puVar6) == (undefined4 *)0x0)
              goto LAB_0090b37c;
              uVar11 = *(undefined4 *)((ulong)DAT_04cf00cc._4_4_ + (long)puVar6);
              goto LAB_0090b380;
            }
            if (DAT_04cf00cc._4_4_ != 0xffffffff) goto LAB_0090b37c;
          }
          lVar7 = (long)puVar6 - (ulong)*puVar6;
          if ((*puVar6 == 0) || (lVar7 == 0)) goto LAB_0090b380;
          lVar1 = 0xc;
          if (*(char *)(lVar7 + 10) != '\0') {
            lVar1 = 0x1c;
          }
          if (lVar1 + lVar7 == 0) goto LAB_0090b380;
          uVar10 = (ulong)*(ushort *)(lVar7 + 8);
          DAT_04cf00cc = CONCAT44(0xfffffffe,(uint)DAT_04cf00cc);
          if (uVar10 == 0) goto LAB_0090b380;
          piVar5 = (int *)(lVar1 + lVar7 + 4);
          while (piVar5[-1] != -0x70b01a12) {
            piVar5 = piVar5 + 2;
            uVar10 = uVar10 - 1;
            if (uVar10 == 0) goto LAB_0090b380;
          }
          iVar8 = 0;
          if (*piVar5 != -1) {
            iVar8 = *piVar5;
          }
          DAT_04cf00cc = CONCAT44(iVar8,(uint)DAT_04cf00cc);
        } while (*puVar6 != 0);
      }
      *(undefined4 *)(param_1 + 2) = 0;
      *(undefined4 *)((long)param_1 + 0x14) = 0;
      return;
    }
  }
LAB_0090b220:
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  return;
  while( true ) {
    if ((uVar3 != 0xffffffff) || (lVar7 = (long)puVar6 - (ulong)uVar2, lVar7 == 0))
    goto LAB_0090afcc;
    lVar1 = 0xc;
    if (*(char *)(lVar7 + 10) != '\0') {
      lVar1 = 0x1c;
    }
    if (lVar1 + lVar7 == 0) goto LAB_0090afcc;
    uVar10 = (ulong)*(ushort *)(lVar7 + 8);
    DAT_04cf00dc = CONCAT44(DAT_04cf00dc._4_4_,0xfffffffe);
    if (uVar10 == 0) goto LAB_0090afcc;
    puVar4 = (uint *)(lVar1 + lVar7 + 4);
    while (puVar4[-1] != 0xbb0b5f4e) {
      puVar4 = puVar4 + 2;
      uVar10 = uVar10 - 1;
      if (uVar10 == 0) goto LAB_0090afcc;
    }
    uVar3 = 0;
    if (*puVar4 != 0xffffffff) {
      uVar3 = *puVar4;
    }
    DAT_04cf00dc = CONCAT44(DAT_04cf00dc._4_4_,uVar3);
    uVar2 = *puVar6;
    if (uVar2 == 0) break;
LAB_0090b26c:
    if (-1 < (int)uVar3) {
      if ((undefined4 *)((long)puVar6 + (ulong)uVar3) == (undefined4 *)0x0) goto LAB_0090afc8;
      uVar11 = *(undefined4 *)((long)puVar6 + (ulong)uVar3);
      goto LAB_0090afcc;
    }
  }
LAB_0090b2d8:
  *(undefined4 *)((long)param_1 + 4) = 0;
LAB_0090b2dc:
  uVar11 = 0;
LAB_0090b2e0:
  uVar2 = *puVar6;
  *(undefined4 *)(param_1 + 1) = uVar11;
  if (uVar2 != 0) {
    uVar11 = 0;
    uVar3 = (uint)DAT_04cf00cc;
    do {
      if (-1 < (int)uVar3) {
        if ((undefined4 *)((long)puVar6 + (ulong)uVar3) == (undefined4 *)0x0) goto LAB_0090b0b8;
        uVar11 = *(undefined4 *)((long)puVar6 + (ulong)uVar3);
        goto LAB_0090b0bc;
      }
      if ((uVar3 != 0xffffffff) || (lVar7 = (long)puVar6 - (ulong)uVar2, lVar7 == 0))
      goto LAB_0090b0bc;
      lVar1 = 0xc;
      if (*(char *)(lVar7 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      if (lVar1 + lVar7 == 0) goto LAB_0090b0bc;
      uVar10 = (ulong)*(ushort *)(lVar7 + 8);
      DAT_04cf00cc = CONCAT44(DAT_04cf00cc._4_4_,0xfffffffe);
      if (uVar10 == 0) goto LAB_0090b0bc;
      puVar4 = (uint *)(lVar1 + lVar7 + 4);
      while (puVar4[-1] != 0xb22fcc5e) {
        puVar4 = puVar4 + 2;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) goto LAB_0090b0bc;
      }
      uVar3 = 0;
      if (*puVar4 != 0xffffffff) {
        uVar3 = *puVar4;
      }
      DAT_04cf00cc = CONCAT44(DAT_04cf00cc._4_4_,uVar3);
      uVar2 = *puVar6;
    } while (uVar2 != 0);
  }
  *(undefined4 *)((long)param_1 + 0xc) = 0;
LAB_0090b37c:
  uVar11 = 0;
LAB_0090b380:
  uVar2 = *puVar6;
  *(undefined4 *)(param_1 + 2) = uVar11;
  uVar11 = 0;
  if (uVar2 != 0) {
    uVar3 = (uint)DAT_04cf00d4;
    while ((int)uVar3 < 0) {
      if ((uVar3 != 0xffffffff) || (lVar7 = (long)puVar6 - (ulong)uVar2, lVar7 == 0))
      goto LAB_0090b428;
      lVar1 = 0xc;
      if (*(char *)(lVar7 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      if (lVar1 + lVar7 == 0) goto LAB_0090b428;
      uVar10 = (ulong)*(ushort *)(lVar7 + 8);
      DAT_04cf00d4 = CONCAT44(DAT_04cf00d4._4_4_,0xfffffffe);
      if (uVar10 == 0) goto LAB_0090b428;
      puVar4 = (uint *)(lVar1 + lVar7 + 4);
      while (puVar4[-1] != 0xc8ef9f3e) {
        puVar4 = puVar4 + 2;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) goto LAB_0090b428;
      }
      uVar3 = 0;
      if (*puVar4 != 0xffffffff) {
        uVar3 = *puVar4;
      }
      DAT_04cf00d4 = CONCAT44(DAT_04cf00d4._4_4_,uVar3);
      uVar2 = *puVar6;
      if (uVar2 == 0) goto LAB_0090b428;
    }
    if ((undefined4 *)((long)puVar6 + (ulong)uVar3) != (undefined4 *)0x0) {
      uVar11 = *(undefined4 *)((long)puVar6 + (ulong)uVar3);
    }
  }
LAB_0090b428:
  *(undefined4 *)((long)param_1 + 0x14) = uVar11;
  return;
}

