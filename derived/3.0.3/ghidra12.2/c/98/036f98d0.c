
uint FUN_036f98d0(long param_1,uint *param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  uint uVar4;
  int *piVar5;
  long lVar6;
  uint *puVar7;
  int iVar8;
  char cVar9;
  ulong uVar10;
  uint *puVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined1 auStack_634 [4];
  undefined8 local_630 [192];
  
  uVar12 = *param_2;
  if ((int)*(uint *)(param_1 + 0xb20) < 1) {
    if ((((*(long *)(param_1 + 0xa10) != 0) &&
         (puVar7 = *(uint **)(*(long *)(param_1 + 0xa10) + 8), puVar7 != (uint *)0x0)) &&
        ((*(uint *)(param_1 + 0xa28) <= uVar12 ||
         (*(char *)(*(long *)(param_1 + 0xa30) + (long)(int)uVar12) != '\0')))) &&
       (((uVar12 < *puVar7 && (puVar7[1] != 0)) && ((ushort)puVar7[2] != 0)))) {
      iVar8 = 0xc;
      if (*(char *)((long)puVar7 + 10) != '\0') {
        iVar8 = 0x1c;
      }
      puVar7 = (uint *)((ulong)(puVar7[1] * uVar12 + (uint)(ushort)puVar7[2] * 8 + iVar8) +
                       (long)puVar7);
      goto joined_r0x036f9a54;
    }
  }
  else if (uVar12 < *(uint *)(param_1 + 0xb20)) {
    if (*(uint *)(param_1 + 0xb10) <= uVar12) {
      uVar12 = 0;
    }
    puVar7 = *(uint **)(*(long *)(param_1 + 0xb18) + (ulong)uVar12 * 8);
joined_r0x036f9a54:
    if (puVar7 != (uint *)0x0) {
      if (*puVar7 != 0) {
        cVar9 = DAT_05ab9860;
        do {
          if (cVar9 != '\0') {
            if (DAT_05ab9864 < 0) {
              if (DAT_05ab9864._4_4_ == 0xffffffff) goto LAB_036f9974;
            }
            else if ((short *)((ulong)DAT_05ab9864._4_4_ + (long)puVar7) != (short *)0x0) {
              lVar6 = (long)*(short *)((ulong)DAT_05ab9864._4_4_ + (long)puVar7);
              goto LAB_036f9a88;
            }
            goto LAB_036f9a84;
          }
          cVar9 = '\x01';
          DAT_05ab9864 = -1;
          DAT_05ab986c = 0xffffffffffffffff;
          DAT_05ab9860 = '\x01';
          DAT_05ab9874 = 0xffffffffffffffff;
LAB_036f9974:
          puVar11 = (uint *)(ulong)*puVar7;
          lVar6 = 0;
          if ((*puVar7 == 0) || (puVar7 == puVar11)) {
LAB_036f9a88:
            uVar12 = *puVar7;
            if (uVar12 == 0) goto LAB_036f9b2c;
            uVar4 = (uint)DAT_05ab9864;
            goto LAB_036f9aac;
          }
          lVar6 = 0xc;
          if (*(char *)((long)puVar7 + (10 - (long)puVar11)) != '\0') {
            lVar6 = 0x1c;
          }
          lVar6 = (long)puVar7 + (lVar6 - (long)puVar11);
          if (lVar6 == 0) {
LAB_036f9a84:
            lVar6 = 0;
            goto LAB_036f9a88;
          }
          uVar10 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar11));
          DAT_05ab9864 = CONCAT44(0xfffffffe,(uint)DAT_05ab9864);
          if (uVar10 == 0) goto LAB_036f9a84;
          piVar5 = (int *)(lVar6 + 4);
          while (piVar5[-1] != -0x6cb8e6bc) {
            piVar5 = piVar5 + 2;
            uVar10 = uVar10 - 1;
            if (uVar10 == 0) goto LAB_036f9a84;
          }
          iVar8 = 0;
          if (*piVar5 != -1) {
            iVar8 = *piVar5;
          }
          DAT_05ab9864 = CONCAT44(iVar8,(uint)DAT_05ab9864);
        } while (*puVar7 != 0);
      }
      lVar6 = 0;
LAB_036f9b2c:
      uVar12 = 0;
LAB_036f9b30:
      uVar4 = FUN_0291e130(local_630,auStack_634,lVar6);
      if ((uVar4 & 1) != 0) {
        puVar2 = (undefined8 *)((long)local_630 + (ulong)uVar12 * 0xc);
        if (0x7f < uVar12) {
          puVar2 = local_630;
        }
        uVar13 = *(undefined4 *)(puVar2 + 1);
        *param_3 = *puVar2;
        *(undefined4 *)(param_3 + 1) = uVar13;
      }
      goto LAB_036f9a5c;
    }
  }
  uVar4 = 0;
LAB_036f9a5c:
  return uVar4 & 1;
LAB_036f9aac:
  if (-1 < (int)uVar4) {
    if ((short *)((long)puVar7 + (ulong)uVar4) != (short *)0x0) {
      uVar12 = (uint)*(short *)((long)puVar7 + (ulong)uVar4);
      goto LAB_036f9b30;
    }
    goto LAB_036f9b2c;
  }
  if ((uVar4 != 0xffffffff) || (lVar3 = (long)puVar7 - (ulong)uVar12, lVar3 == 0))
  goto LAB_036f9b2c;
  lVar1 = 0xc;
  if (*(char *)(lVar3 + 10) != '\0') {
    lVar1 = 0x1c;
  }
  if (lVar1 + lVar3 == 0) goto LAB_036f9b2c;
  uVar10 = (ulong)*(ushort *)(lVar3 + 8);
  DAT_05ab9864 = CONCAT44(DAT_05ab9864._4_4_,0xfffffffe);
  if (uVar10 == 0) goto LAB_036f9b2c;
  puVar11 = (uint *)(lVar1 + lVar3 + 4);
  while (puVar11[-1] != 0x3198c2ac) {
    puVar11 = puVar11 + 2;
    uVar10 = uVar10 - 1;
    if (uVar10 == 0) goto LAB_036f9b2c;
  }
  uVar4 = 0;
  if (*puVar11 != 0xffffffff) {
    uVar4 = *puVar11;
  }
  DAT_05ab9864 = CONCAT44(DAT_05ab9864._4_4_,uVar4);
  uVar12 = *puVar7;
  if (uVar12 == 0) goto LAB_036f9b2c;
  goto LAB_036f9aac;
}

