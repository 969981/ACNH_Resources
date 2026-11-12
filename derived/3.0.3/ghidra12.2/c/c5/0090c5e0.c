
void FUN_0090c5e0(undefined8 *param_1,long param_2,uint param_3)

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
      goto LAB_0090c960;
      iVar8 = 0xc;
      if (*(char *)((long)puVar6 + 10) != '\0') {
        iVar8 = 0x1c;
      }
      puVar6 = (uint *)((ulong)(puVar6[1] * param_3 + (uint)(ushort)puVar6[2] * 8 + iVar8) +
                       (long)puVar6);
    }
    else {
      if (*(uint *)(lVar7 + 0x1c0) <= param_3) goto LAB_0090c960;
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
            if (DAT_04cf00ec < 0) {
              if (DAT_04cf00ec._4_4_ == 0xffffffff) goto LAB_0090c69c;
LAB_0090c97c:
              uVar11 = 0;
            }
            else {
              if ((undefined4 *)((ulong)DAT_04cf00ec._4_4_ + (long)puVar6) == (undefined4 *)0x0)
              goto LAB_0090c97c;
              uVar11 = *(undefined4 *)((ulong)DAT_04cf00ec._4_4_ + (long)puVar6);
            }
LAB_0090c980:
            uVar2 = *puVar6;
            *(undefined4 *)param_1 = uVar11;
            if (uVar2 == 0) goto LAB_0090ca18;
            uVar11 = 0;
            uVar3 = (uint)DAT_04cf00f4;
            goto LAB_0090c9ac;
          }
          cVar9 = '\x01';
          DAT_04cf00cc = 0xffffffffffffffff;
          DAT_04cf00d4 = 0xffffffffffffffff;
          DAT_04cf00c8 = '\x01';
          DAT_04cf016c = 0xffffffffffffffff;
          DAT_04cf0174 = 0xffffffff;
          DAT_04cf00dc = 0xffffffffffffffff;
          DAT_04cf00e4 = -1;
          DAT_04cf00ec = -1;
          DAT_04cf00f4 = -1;
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
LAB_0090c69c:
          lVar7 = (long)puVar6 - (ulong)*puVar6;
          if ((*puVar6 == 0) || (lVar7 == 0)) goto LAB_0090c980;
          lVar1 = 0xc;
          if (*(char *)(lVar7 + 10) != '\0') {
            lVar1 = 0x1c;
          }
          if (lVar1 + lVar7 == 0) goto LAB_0090c980;
          uVar10 = (ulong)*(ushort *)(lVar7 + 8);
          DAT_04cf00ec = CONCAT44(0xfffffffe,(uint)DAT_04cf00ec);
          if (uVar10 == 0) goto LAB_0090c980;
          piVar5 = (int *)(lVar1 + lVar7 + 4);
          while (piVar5[-1] != -0x79a617cc) {
            piVar5 = piVar5 + 2;
            uVar10 = uVar10 - 1;
            if (uVar10 == 0) goto LAB_0090c980;
          }
          iVar8 = 0;
          if (*piVar5 != -1) {
            iVar8 = *piVar5;
          }
          DAT_04cf00ec = CONCAT44(iVar8,(uint)DAT_04cf00ec);
        } while (*puVar6 != 0);
      }
      *(undefined4 *)param_1 = 0;
LAB_0090c708:
      uVar11 = 0;
LAB_0090c70c:
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
            DAT_04cf00e4 = -1;
            DAT_04cf00ec = -1;
            DAT_04cf00f4 = -1;
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
            if (-1 < DAT_04cf00f4) {
              if ((undefined4 *)((ulong)DAT_04cf00f4._4_4_ + (long)puVar6) == (undefined4 *)0x0)
              goto LAB_0090ca1c;
              uVar11 = *(undefined4 *)((ulong)DAT_04cf00f4._4_4_ + (long)puVar6);
              goto LAB_0090ca20;
            }
            if (DAT_04cf00f4._4_4_ != 0xffffffff) goto LAB_0090ca1c;
          }
          lVar7 = (long)puVar6 - (ulong)*puVar6;
          if ((*puVar6 == 0) || (lVar7 == 0)) goto LAB_0090ca20;
          lVar1 = 0xc;
          if (*(char *)(lVar7 + 10) != '\0') {
            lVar1 = 0x1c;
          }
          if (lVar1 + lVar7 == 0) goto LAB_0090ca20;
          uVar10 = (ulong)*(ushort *)(lVar7 + 8);
          DAT_04cf00f4 = CONCAT44(0xfffffffe,(uint)DAT_04cf00f4);
          if (uVar10 == 0) goto LAB_0090ca20;
          piVar5 = (int *)(lVar1 + lVar7 + 4);
          while (piVar5[-1] != -0x36644ac) {
            piVar5 = piVar5 + 2;
            uVar10 = uVar10 - 1;
            if (uVar10 == 0) goto LAB_0090ca20;
          }
          iVar8 = 0;
          if (*piVar5 != -1) {
            iVar8 = *piVar5;
          }
          DAT_04cf00f4 = CONCAT44(iVar8,(uint)DAT_04cf00f4);
        } while (*puVar6 != 0);
      }
      *(undefined4 *)(param_1 + 1) = 0;
LAB_0090c7f8:
      uVar11 = 0;
LAB_0090c7fc:
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
            DAT_04cf00e4 = -1;
            DAT_04cf00ec = -1;
            DAT_04cf00f4 = -1;
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
            if (-1 < DAT_04cf00e4) {
              if ((undefined4 *)((ulong)DAT_04cf00e4._4_4_ + (long)puVar6) == (undefined4 *)0x0)
              goto LAB_0090cabc;
              uVar11 = *(undefined4 *)((ulong)DAT_04cf00e4._4_4_ + (long)puVar6);
              goto LAB_0090cac0;
            }
            if (DAT_04cf00e4._4_4_ != 0xffffffff) goto LAB_0090cabc;
          }
          lVar7 = (long)puVar6 - (ulong)*puVar6;
          if ((*puVar6 == 0) || (lVar7 == 0)) goto LAB_0090cac0;
          lVar1 = 0xc;
          if (*(char *)(lVar7 + 10) != '\0') {
            lVar1 = 0x1c;
          }
          if (lVar1 + lVar7 == 0) goto LAB_0090cac0;
          uVar10 = (ulong)*(ushort *)(lVar7 + 8);
          DAT_04cf00e4 = CONCAT44(0xfffffffe,(uint)DAT_04cf00e4);
          if (uVar10 == 0) goto LAB_0090cac0;
          piVar5 = (int *)(lVar1 + lVar7 + 4);
          while (piVar5[-1] != -0xb010322) {
            piVar5 = piVar5 + 2;
            uVar10 = uVar10 - 1;
            if (uVar10 == 0) goto LAB_0090cac0;
          }
          iVar8 = 0;
          if (*piVar5 != -1) {
            iVar8 = *piVar5;
          }
          DAT_04cf00e4 = CONCAT44(iVar8,(uint)DAT_04cf00e4);
        } while (*puVar6 != 0);
      }
      *(undefined4 *)(param_1 + 2) = 0;
      *(undefined4 *)((long)param_1 + 0x14) = 0;
      return;
    }
  }
LAB_0090c960:
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 0;
  return;
  while( true ) {
    if ((uVar3 != 0xffffffff) || (lVar7 = (long)puVar6 - (ulong)uVar2, lVar7 == 0))
    goto LAB_0090c70c;
    lVar1 = 0xc;
    if (*(char *)(lVar7 + 10) != '\0') {
      lVar1 = 0x1c;
    }
    if (lVar1 + lVar7 == 0) goto LAB_0090c70c;
    uVar10 = (ulong)*(ushort *)(lVar7 + 8);
    DAT_04cf00f4 = CONCAT44(DAT_04cf00f4._4_4_,0xfffffffe);
    if (uVar10 == 0) goto LAB_0090c70c;
    puVar4 = (uint *)(lVar1 + lVar7 + 4);
    while (puVar4[-1] != 0xbb39c184) {
      puVar4 = puVar4 + 2;
      uVar10 = uVar10 - 1;
      if (uVar10 == 0) goto LAB_0090c70c;
    }
    uVar3 = 0;
    if (*puVar4 != 0xffffffff) {
      uVar3 = *puVar4;
    }
    DAT_04cf00f4 = CONCAT44(DAT_04cf00f4._4_4_,uVar3);
    uVar2 = *puVar6;
    if (uVar2 == 0) break;
LAB_0090c9ac:
    if (-1 < (int)uVar3) {
      if ((undefined4 *)((long)puVar6 + (ulong)uVar3) == (undefined4 *)0x0) goto LAB_0090c708;
      uVar11 = *(undefined4 *)((long)puVar6 + (ulong)uVar3);
      goto LAB_0090c70c;
    }
  }
LAB_0090ca18:
  *(undefined4 *)((long)param_1 + 4) = 0;
LAB_0090ca1c:
  uVar11 = 0;
LAB_0090ca20:
  uVar2 = *puVar6;
  *(undefined4 *)(param_1 + 1) = uVar11;
  if (uVar2 != 0) {
    uVar11 = 0;
    uVar3 = (uint)DAT_04cf00e4;
    do {
      if (-1 < (int)uVar3) {
        if ((undefined4 *)((long)puVar6 + (ulong)uVar3) == (undefined4 *)0x0) goto LAB_0090c7f8;
        uVar11 = *(undefined4 *)((long)puVar6 + (ulong)uVar3);
        goto LAB_0090c7fc;
      }
      if ((uVar3 != 0xffffffff) || (lVar7 = (long)puVar6 - (ulong)uVar2, lVar7 == 0))
      goto LAB_0090c7fc;
      lVar1 = 0xc;
      if (*(char *)(lVar7 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      if (lVar1 + lVar7 == 0) goto LAB_0090c7fc;
      uVar10 = (ulong)*(ushort *)(lVar7 + 8);
      DAT_04cf00e4 = CONCAT44(DAT_04cf00e4._4_4_,0xfffffffe);
      if (uVar10 == 0) goto LAB_0090c7fc;
      puVar4 = (uint *)(lVar1 + lVar7 + 4);
      while (puVar4[-1] != 0xc99ed56e) {
        puVar4 = puVar4 + 2;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) goto LAB_0090c7fc;
      }
      uVar3 = 0;
      if (*puVar4 != 0xffffffff) {
        uVar3 = *puVar4;
      }
      DAT_04cf00e4 = CONCAT44(DAT_04cf00e4._4_4_,uVar3);
      uVar2 = *puVar6;
    } while (uVar2 != 0);
  }
  *(undefined4 *)((long)param_1 + 0xc) = 0;
LAB_0090cabc:
  uVar11 = 0;
LAB_0090cac0:
  uVar2 = *puVar6;
  *(undefined4 *)(param_1 + 2) = uVar11;
  uVar11 = 0;
  if (uVar2 != 0) {
    uVar3 = (uint)DAT_04cf00ec;
    while ((int)uVar3 < 0) {
      if ((uVar3 != 0xffffffff) || (lVar7 = (long)puVar6 - (ulong)uVar2, lVar7 == 0))
      goto LAB_0090cb68;
      lVar1 = 0xc;
      if (*(char *)(lVar7 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      if (lVar1 + lVar7 == 0) goto LAB_0090cb68;
      uVar10 = (ulong)*(ushort *)(lVar7 + 8);
      DAT_04cf00ec = CONCAT44(DAT_04cf00ec._4_4_,0xfffffffe);
      if (uVar10 == 0) goto LAB_0090cb68;
      puVar4 = (uint *)(lVar1 + lVar7 + 4);
      while (puVar4[-1] != 0xb35e860e) {
        puVar4 = puVar4 + 2;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) goto LAB_0090cb68;
      }
      uVar3 = 0;
      if (*puVar4 != 0xffffffff) {
        uVar3 = *puVar4;
      }
      DAT_04cf00ec = CONCAT44(DAT_04cf00ec._4_4_,uVar3);
      uVar2 = *puVar6;
      if (uVar2 == 0) goto LAB_0090cb68;
    }
    if ((undefined4 *)((long)puVar6 + (ulong)uVar3) != (undefined4 *)0x0) {
      uVar11 = *(undefined4 *)((long)puVar6 + (ulong)uVar3);
    }
  }
LAB_0090cb68:
  *(undefined4 *)((long)param_1 + 0x14) = uVar11;
  return;
}

