
void FUN_0090c010(undefined8 *param_1,long param_2,uint param_3)

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
      goto LAB_0090c390;
      iVar8 = 0xc;
      if (*(char *)((long)puVar6 + 10) != '\0') {
        iVar8 = 0x1c;
      }
      puVar6 = (uint *)((ulong)(puVar6[1] * param_3 + (uint)(ushort)puVar6[2] * 8 + iVar8) +
                       (long)puVar6);
    }
    else {
      if (*(uint *)(lVar7 + 0x1c0) <= param_3) goto LAB_0090c390;
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
            if (DAT_04cf0134 < 0) {
              if (DAT_04cf0134._4_4_ == 0xffffffff) goto LAB_0090c0cc;
LAB_0090c3ac:
              uVar11 = 0;
            }
            else {
              if ((undefined4 *)((ulong)DAT_04cf0134._4_4_ + (long)puVar6) == (undefined4 *)0x0)
              goto LAB_0090c3ac;
              uVar11 = *(undefined4 *)((ulong)DAT_04cf0134._4_4_ + (long)puVar6);
            }
LAB_0090c3b0:
            uVar2 = *puVar6;
            *(undefined4 *)param_1 = uVar11;
            if (uVar2 == 0) goto LAB_0090c448;
            uVar11 = 0;
            uVar3 = (uint)DAT_04cf013c;
            goto LAB_0090c3dc;
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
          DAT_04cf0114 = 0xffffffffffffffff;
          DAT_04cf011c = 0xffffffffffffffff;
          DAT_04cf0124 = 0xffffffffffffffff;
          DAT_04cf012c = -1;
          DAT_04cf0134 = -1;
          DAT_04cf013c = -1;
          DAT_04cf0144 = 0xffffffffffffffff;
          DAT_04cf014c = 0xffffffffffffffff;
          DAT_04cf0154 = 0xffffffffffffffff;
          DAT_04cf015c = 0xffffffffffffffff;
          DAT_04cf0164 = 0xffffffffffffffff;
LAB_0090c0cc:
          lVar7 = (long)puVar6 - (ulong)*puVar6;
          if ((*puVar6 == 0) || (lVar7 == 0)) goto LAB_0090c3b0;
          lVar1 = 0xc;
          if (*(char *)(lVar7 + 10) != '\0') {
            lVar1 = 0x1c;
          }
          if (lVar1 + lVar7 == 0) goto LAB_0090c3b0;
          uVar10 = (ulong)*(ushort *)(lVar7 + 8);
          DAT_04cf0134 = CONCAT44(0xfffffffe,(uint)DAT_04cf0134);
          if (uVar10 == 0) goto LAB_0090c3b0;
          piVar5 = (int *)(lVar1 + lVar7 + 4);
          while (piVar5[-1] != 0xa2d6f3e) {
            piVar5 = piVar5 + 2;
            uVar10 = uVar10 - 1;
            if (uVar10 == 0) goto LAB_0090c3b0;
          }
          iVar8 = 0;
          if (*piVar5 != -1) {
            iVar8 = *piVar5;
          }
          DAT_04cf0134 = CONCAT44(iVar8,(uint)DAT_04cf0134);
        } while (*puVar6 != 0);
      }
      *(undefined4 *)param_1 = 0;
LAB_0090c138:
      uVar11 = 0;
LAB_0090c13c:
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
            DAT_04cf0114 = 0xffffffffffffffff;
            DAT_04cf011c = 0xffffffffffffffff;
            DAT_04cf0124 = 0xffffffffffffffff;
            DAT_04cf012c = -1;
            DAT_04cf0134 = -1;
            DAT_04cf013c = -1;
            DAT_04cf0144 = 0xffffffffffffffff;
            DAT_04cf014c = 0xffffffffffffffff;
            DAT_04cf0154 = 0xffffffffffffffff;
            DAT_04cf015c = 0xffffffffffffffff;
            DAT_04cf0164 = 0xffffffffffffffff;
          }
          else {
            if (-1 < DAT_04cf013c) {
              if ((undefined4 *)((ulong)DAT_04cf013c._4_4_ + (long)puVar6) == (undefined4 *)0x0)
              goto LAB_0090c44c;
              uVar11 = *(undefined4 *)((ulong)DAT_04cf013c._4_4_ + (long)puVar6);
              goto LAB_0090c450;
            }
            if (DAT_04cf013c._4_4_ != 0xffffffff) goto LAB_0090c44c;
          }
          lVar7 = (long)puVar6 - (ulong)*puVar6;
          if ((*puVar6 == 0) || (lVar7 == 0)) goto LAB_0090c450;
          lVar1 = 0xc;
          if (*(char *)(lVar7 + 10) != '\0') {
            lVar1 = 0x1c;
          }
          if (lVar1 + lVar7 == 0) goto LAB_0090c450;
          uVar10 = (ulong)*(ushort *)(lVar7 + 8);
          DAT_04cf013c = CONCAT44(0xfffffffe,(uint)DAT_04cf013c);
          if (uVar10 == 0) goto LAB_0090c450;
          piVar5 = (int *)(lVar1 + lVar7 + 4);
          while (piVar5[-1] != 0x70ed3c5e) {
            piVar5 = piVar5 + 2;
            uVar10 = uVar10 - 1;
            if (uVar10 == 0) goto LAB_0090c450;
          }
          iVar8 = 0;
          if (*piVar5 != -1) {
            iVar8 = *piVar5;
          }
          DAT_04cf013c = CONCAT44(iVar8,(uint)DAT_04cf013c);
        } while (*puVar6 != 0);
      }
      *(undefined4 *)(param_1 + 1) = 0;
LAB_0090c228:
      uVar11 = 0;
LAB_0090c22c:
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
            DAT_04cf0114 = 0xffffffffffffffff;
            DAT_04cf011c = 0xffffffffffffffff;
            DAT_04cf0124 = 0xffffffffffffffff;
            DAT_04cf012c = -1;
            DAT_04cf0134 = -1;
            DAT_04cf013c = -1;
            DAT_04cf0144 = 0xffffffffffffffff;
            DAT_04cf014c = 0xffffffffffffffff;
            DAT_04cf0154 = 0xffffffffffffffff;
            DAT_04cf015c = 0xffffffffffffffff;
            DAT_04cf0164 = 0xffffffffffffffff;
          }
          else {
            if (-1 < DAT_04cf012c) {
              if ((undefined4 *)((ulong)DAT_04cf012c._4_4_ + (long)puVar6) == (undefined4 *)0x0)
              goto LAB_0090c4ec;
              uVar11 = *(undefined4 *)((ulong)DAT_04cf012c._4_4_ + (long)puVar6);
              goto LAB_0090c4f0;
            }
            if (DAT_04cf012c._4_4_ != 0xffffffff) goto LAB_0090c4ec;
          }
          lVar7 = (long)puVar6 - (ulong)*puVar6;
          if ((*puVar6 == 0) || (lVar7 == 0)) goto LAB_0090c4f0;
          lVar1 = 0xc;
          if (*(char *)(lVar7 + 10) != '\0') {
            lVar1 = 0x1c;
          }
          if (lVar1 + lVar7 == 0) goto LAB_0090c4f0;
          uVar10 = (ulong)*(ushort *)(lVar7 + 8);
          DAT_04cf012c = CONCAT44(0xfffffffe,(uint)DAT_04cf012c);
          if (uVar10 == 0) goto LAB_0090c4f0;
          piVar5 = (int *)(lVar1 + lVar7 + 4);
          while (piVar5[-1] != 0x14a76147) {
            piVar5 = piVar5 + 2;
            uVar10 = uVar10 - 1;
            if (uVar10 == 0) goto LAB_0090c4f0;
          }
          iVar8 = 0;
          if (*piVar5 != -1) {
            iVar8 = *piVar5;
          }
          DAT_04cf012c = CONCAT44(iVar8,(uint)DAT_04cf012c);
        } while (*puVar6 != 0);
      }
      *(undefined4 *)(param_1 + 2) = 0;
      *(undefined4 *)((long)param_1 + 0x14) = 0;
      return;
    }
  }
LAB_0090c390:
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  return;
  while( true ) {
    if ((uVar3 != 0xffffffff) || (lVar7 = (long)puVar6 - (ulong)uVar2, lVar7 == 0))
    goto LAB_0090c13c;
    lVar1 = 0xc;
    if (*(char *)(lVar7 + 10) != '\0') {
      lVar1 = 0x1c;
    }
    if (lVar1 + lVar7 == 0) goto LAB_0090c13c;
    uVar10 = (ulong)*(ushort *)(lVar7 + 8);
    DAT_04cf013c = CONCAT44(DAT_04cf013c._4_4_,0xfffffffe);
    if (uVar10 == 0) goto LAB_0090c13c;
    puVar4 = (uint *)(lVar1 + lVar7 + 4);
    while (puVar4[-1] != 0x374d468e) {
      puVar4 = puVar4 + 2;
      uVar10 = uVar10 - 1;
      if (uVar10 == 0) goto LAB_0090c13c;
    }
    uVar3 = 0;
    if (*puVar4 != 0xffffffff) {
      uVar3 = *puVar4;
    }
    DAT_04cf013c = CONCAT44(DAT_04cf013c._4_4_,uVar3);
    uVar2 = *puVar6;
    if (uVar2 == 0) break;
LAB_0090c3dc:
    if (-1 < (int)uVar3) {
      if ((undefined4 *)((long)puVar6 + (ulong)uVar3) == (undefined4 *)0x0) goto LAB_0090c138;
      uVar11 = *(undefined4 *)((long)puVar6 + (ulong)uVar3);
      goto LAB_0090c13c;
    }
  }
LAB_0090c448:
  *(undefined4 *)((long)param_1 + 4) = 0;
LAB_0090c44c:
  uVar11 = 0;
LAB_0090c450:
  uVar2 = *puVar6;
  *(undefined4 *)(param_1 + 1) = uVar11;
  if (uVar2 != 0) {
    uVar11 = 0;
    uVar3 = (uint)DAT_04cf012c;
    do {
      if (-1 < (int)uVar3) {
        if ((undefined4 *)((long)puVar6 + (ulong)uVar3) == (undefined4 *)0x0) goto LAB_0090c228;
        uVar11 = *(undefined4 *)((long)puVar6 + (ulong)uVar3);
        goto LAB_0090c22c;
      }
      if ((uVar3 != 0xffffffff) || (lVar7 = (long)puVar6 - (ulong)uVar2, lVar7 == 0))
      goto LAB_0090c22c;
      lVar1 = 0xc;
      if (*(char *)(lVar7 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      if (lVar1 + lVar7 == 0) goto LAB_0090c22c;
      uVar10 = (ulong)*(ushort *)(lVar7 + 8);
      DAT_04cf012c = CONCAT44(DAT_04cf012c._4_4_,0xfffffffe);
      if (uVar10 == 0) goto LAB_0090c22c;
      puVar4 = (uint *)(lVar1 + lVar7 + 4);
      while (puVar4[-1] != 0x29c748f7) {
        puVar4 = puVar4 + 2;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) goto LAB_0090c22c;
      }
      uVar3 = 0;
      if (*puVar4 != 0xffffffff) {
        uVar3 = *puVar4;
      }
      DAT_04cf012c = CONCAT44(DAT_04cf012c._4_4_,uVar3);
      uVar2 = *puVar6;
    } while (uVar2 != 0);
  }
  *(undefined4 *)((long)param_1 + 0xc) = 0;
LAB_0090c4ec:
  uVar11 = 0;
LAB_0090c4f0:
  uVar2 = *puVar6;
  *(undefined4 *)(param_1 + 2) = uVar11;
  uVar11 = 0;
  if (uVar2 != 0) {
    uVar3 = (uint)DAT_04cf0134;
    while ((int)uVar3 < 0) {
      if ((uVar3 != 0xffffffff) || (lVar7 = (long)puVar6 - (ulong)uVar2, lVar7 == 0))
      goto LAB_0090c598;
      lVar1 = 0xc;
      if (*(char *)(lVar7 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      if (lVar1 + lVar7 == 0) goto LAB_0090c598;
      uVar10 = (ulong)*(ushort *)(lVar7 + 8);
      DAT_04cf0134 = CONCAT44(DAT_04cf0134._4_4_,0xfffffffe);
      if (uVar10 == 0) goto LAB_0090c598;
      puVar4 = (uint *)(lVar1 + lVar7 + 4);
      while (puVar4[-1] != 0x53071b97) {
        puVar4 = puVar4 + 2;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) goto LAB_0090c598;
      }
      uVar3 = 0;
      if (*puVar4 != 0xffffffff) {
        uVar3 = *puVar4;
      }
      DAT_04cf0134 = CONCAT44(DAT_04cf0134._4_4_,uVar3);
      uVar2 = *puVar6;
      if (uVar2 == 0) goto LAB_0090c598;
    }
    if ((undefined4 *)((long)puVar6 + (ulong)uVar3) != (undefined4 *)0x0) {
      uVar11 = *(undefined4 *)((long)puVar6 + (ulong)uVar3);
    }
  }
LAB_0090c598:
  *(undefined4 *)((long)param_1 + 0x14) = uVar11;
  return;
}

