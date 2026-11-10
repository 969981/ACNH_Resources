
int FUN_0017cb70(long *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  ushort uVar8;
  bool bVar9;
  undefined8 uVar10;
  byte *pbVar11;
  void *__dest;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  undefined4 uVar16;
  int iVar17;
  byte *pbVar18;
  ushort *puVar19;
  char *pcVar20;
  undefined1 *puVar22;
  undefined1 *puVar21;
  byte *__src;
  ulong uVar23;
  int iVar24;
  ushort *puVar25;
  int iVar26;
  uint uVar27;
  ushort *puVar28;
  undefined2 uVar29;
  ushort *puVar30;
  ulong uVar31;
  int iVar32;
  uint uVar33;
  ulong uVar34;
  long lVar35;
  undefined1 *__dest_00;
  undefined1 *puVar36;
  uint uVar37;
  uint uVar38;
  ulong uVar39;
  long lVar40;
  byte *pbVar41;
  undefined8 *puVar42;
  int local_70;
  uint local_6c;
  uint local_68;
  undefined4 local_64;
  
  local_64 = 0;
  Libz_SigloMiddlewareInfo();
  if ((((((param_1 == (long *)0x0) || (param_1[8] == 0)) || (param_1[9] == 0)) ||
       ((puVar42 = (undefined8 *)param_1[7], puVar42 == (undefined8 *)0x0 ||
        ((long *)*puVar42 != param_1)))) ||
      ((iVar24 = *(int *)(puVar42 + 1), 0x1f < iVar24 - 0x3f34U ||
       (__dest_00 = (undefined1 *)param_1[3], __dest_00 == (undefined1 *)0x0)))) ||
     ((pbVar41 = (byte *)*param_1, pbVar41 == (byte *)0x0 && ((int)param_1[1] != 0)))) {
LAB_0017e688:
    return -2;
  }
  if (iVar24 == 0x3f3f) {
    iVar24 = 0x3f40;
    *(undefined4 *)(puVar42 + 1) = 0x3f40;
    __dest_00 = (undefined1 *)param_1[3];
    pbVar41 = (byte *)*param_1;
  }
  puVar1 = puVar42 + 0xab;
  puVar2 = puVar42 + 0x12;
  local_6c = *(uint *)(param_1 + 4);
  uVar39 = puVar42[10];
  uVar5 = *(uint *)(param_1 + 1);
  puVar3 = puVar42 + 0x13;
  uVar14 = (ulong)*(uint *)(puVar42 + 0xb);
  puVar4 = puVar42 + 99;
  uVar34 = (ulong)uVar5;
  local_70 = 0;
  local_68 = local_6c;
LAB_0017cc60:
  uVar13 = (uint)uVar14;
  iVar32 = (int)uVar34;
  uVar12 = uVar34;
  __src = pbVar41;
  iVar26 = 1;
  iVar17 = -3;
  pbVar18 = pbVar41;
  switch(iVar24) {
  case 0x3f34:
    uVar38 = *(uint *)(puVar42 + 2);
    if (uVar38 == 0) {
      uVar16 = 0x3f40;
      goto LAB_0017e5a0;
    }
    if (uVar13 < 0x10) {
      if (iVar32 == 0) goto LAB_0017e91c;
      uVar15 = iVar32 - 1;
      __src = pbVar41 + 1;
      uVar39 = ((ulong)*pbVar41 << (uVar14 & 0x3f)) + uVar39;
      uVar12 = uVar14 + 8;
      if (7 < uVar13) {
LAB_0017ccd8:
        uVar34 = (ulong)uVar15;
        uVar14 = uVar12 & 0xffffffff;
        pbVar41 = __src;
        goto LAB_0017d44c;
      }
      uVar13 = (uint)uVar12;
      if (uVar15 != 0) {
        uVar15 = iVar32 - 2;
        __src = pbVar41 + 2;
        uVar39 = ((ulong)pbVar41[1] << (uVar12 & 0x3f)) + uVar39;
        uVar12 = uVar14 + 0x10;
        goto LAB_0017ccd8;
      }
      goto LAB_0017e924;
    }
LAB_0017d44c:
    if (((uVar38 >> 1 & 1) != 0) && (uVar39 == 0x8b1f)) {
      if (*(int *)(puVar42 + 7) == 0) {
        *(undefined4 *)(puVar42 + 7) = 0xf;
      }
      uVar10 = FUN_0017ef30(0,0,0);
      puVar42[4] = uVar10;
      local_64 = CONCAT22(local_64._2_2_,0x8b1f);
      uVar10 = FUN_0017ef30(uVar10,&local_64,2);
      uVar39 = 0;
      puVar42[4] = uVar10;
      uVar14 = 0;
      *(undefined4 *)(puVar42 + 1) = 0x3f35;
      iVar24 = 0x3f35;
      goto LAB_0017cc60;
    }
    if (puVar42[6] != 0) {
      *(undefined4 *)(puVar42[6] + 0x48) = 0xffffffff;
      uVar38 = *(uint *)(puVar42 + 2);
    }
    if (((uVar38 & 1) == 0) ||
       (0x842108421084210 < ((uVar39 & 0xff) * 0x100 + (uVar39 >> 8)) * -0x1084210842108421)) {
      pcVar20 = "incorrect header check";
    }
    else {
      if ((uVar39 & 0xf) == 8) {
        uVar12 = uVar39 >> 4 & 0xf;
        uVar15 = (uint)uVar12;
        uVar13 = uVar15 + 8;
        uVar38 = *(uint *)(puVar42 + 7);
        if (*(uint *)(puVar42 + 7) == 0) {
          *(uint *)(puVar42 + 7) = uVar13;
          uVar38 = uVar13;
        }
        if ((uVar15 < 8) && (uVar13 <= uVar38)) {
          *(undefined4 *)(puVar42 + 3) = 0;
          *(int *)((long)puVar42 + 0x1c) = 0x100 << uVar12;
          lVar35 = FUN_0017f300(0,0,0);
          puVar42[4] = lVar35;
          uVar16 = 0x3f3f;
          if ((uVar39 & 0x2000) != 0) {
            uVar16 = 0x3f3d;
          }
          param_1[0xc] = lVar35;
          uVar14 = 0;
          *(undefined4 *)(puVar42 + 1) = uVar16;
          uVar39 = 0;
        }
        else {
          param_1[6] = (long)"invalid window size";
          uVar39 = uVar39 >> 4;
          uVar14 = (ulong)((int)uVar14 - 4);
          *(undefined4 *)(puVar42 + 1) = 0x3f51;
        }
        iVar24 = *(int *)(puVar42 + 1);
        goto LAB_0017cc60;
      }
      pcVar20 = "unknown compression method";
    }
    param_1[6] = (long)pcVar20;
    *(undefined4 *)(puVar42 + 1) = 0x3f51;
    iVar24 = 0x3f51;
    goto LAB_0017cc60;
  case 0x3f35:
    if (uVar13 < 0x10) {
      if (iVar32 != 0) {
        uVar15 = iVar32 - 1;
        __src = pbVar41 + 1;
        uVar39 = ((ulong)*pbVar41 << (uVar14 & 0x3f)) + uVar39;
        uVar12 = uVar14 + 8;
        if (uVar13 < 8) {
          uVar38 = (uint)uVar12;
          if (uVar15 == 0) goto LAB_0017e978;
          uVar15 = iVar32 - 2;
          __src = pbVar41 + 2;
          uVar39 = ((ulong)pbVar41[1] << (uVar12 & 0x3f)) + uVar39;
          uVar12 = uVar14 + 0x10;
        }
        uVar34 = (ulong)uVar15;
        uVar14 = uVar12 & 0xffffffff;
        goto LAB_0017cd44;
      }
LAB_0017e974:
      uVar38 = uVar13;
LAB_0017e978:
      uVar13 = uVar38;
      pbVar41 = __src;
      goto LAB_0017e9a8;
    }
LAB_0017cd44:
    uVar13 = (uint)uVar39;
    *(uint *)(puVar42 + 3) = uVar13;
    if ((uVar13 & 0xff) == 8) {
      if ((uVar39 & 0xe000) == 0) {
        if ((uint *)puVar42[6] != (uint *)0x0) {
          *(uint *)puVar42[6] = uVar13 >> 8 & 1;
          uVar13 = *(uint *)(puVar42 + 3);
        }
        if (((uVar13 >> 9 & 1) != 0) && ((*(byte *)(puVar42 + 2) >> 2 & 1) != 0)) {
          local_64 = CONCAT22(local_64._2_2_,(short)uVar39);
          uVar10 = FUN_0017ef30(puVar42[4],&local_64,2);
          puVar42[4] = uVar10;
        }
        uVar14 = 0;
        *(undefined4 *)(puVar42 + 1) = 0x3f36;
        uVar39 = 0;
        goto LAB_0017dab8;
      }
      pcVar20 = "unknown header flags set";
    }
    else {
      pcVar20 = "unknown compression method";
    }
    goto LAB_0017e598;
  case 0x3f36:
    if (uVar13 < 0x20) {
LAB_0017dab8:
      uVar13 = (uint)uVar14;
      iVar24 = (int)uVar34;
      if (iVar24 == 0) {
        pbVar18 = __src;
        goto LAB_0017e9e4;
      }
      uVar38 = iVar24 - 1;
      pbVar41 = __src + 1;
      uVar39 = ((ulong)*__src << (uVar14 & 0x3f)) + uVar39;
      if (uVar13 < 0x18) {
        uVar15 = (uint)(uVar14 + 8);
        if (uVar38 == 0) {
LAB_0017e9e0:
          uVar13 = uVar15;
          pbVar18 = pbVar41;
          goto LAB_0017e9e4;
        }
        uVar38 = iVar24 - 2;
        pbVar41 = __src + 2;
        uVar39 = ((ulong)__src[1] << (uVar14 + 8 & 0x3f)) + uVar39;
        if (uVar13 < 0x10) {
          uVar15 = (uint)(uVar14 + 0x10);
          if (uVar38 == 0) goto LAB_0017e9e0;
          uVar38 = iVar24 - 3;
          pbVar41 = __src + 3;
          uVar39 = ((ulong)__src[2] << (uVar14 + 0x10 & 0x3f)) + uVar39;
          if (uVar13 < 8) {
            uVar13 = (uint)(uVar14 + 0x18);
            pbVar18 = pbVar41;
            if (uVar38 == 0) goto LAB_0017e9e4;
            uVar38 = iVar24 - 4;
            pbVar41 = __src + 4;
            uVar39 = ((ulong)__src[3] << (uVar14 + 0x18 & 0x3f)) + uVar39;
          }
        }
      }
      uVar34 = (ulong)uVar38;
    }
    if (puVar42[6] != 0) {
      *(ulong *)(puVar42[6] + 8) = uVar39;
    }
    if (((*(byte *)((long)puVar42 + 0x19) >> 1 & 1) != 0) &&
       ((*(byte *)(puVar42 + 2) >> 2 & 1) != 0)) {
      local_64 = (undefined4)uVar39;
      uVar10 = FUN_0017ef30(puVar42[4],&local_64,4);
      puVar42[4] = uVar10;
    }
    uVar14 = 0;
    *(undefined4 *)(puVar42 + 1) = 0x3f37;
    uVar39 = 0;
    pbVar18 = pbVar41;
LAB_0017db9c:
    uVar13 = (uint)uVar14;
    iVar24 = (int)uVar34;
    pbVar41 = pbVar18;
    if (iVar24 == 0) {
LAB_0017e9a8:
      uVar34 = 0;
      iVar26 = local_70;
      goto switchD_0017cc80_caseD_3f50;
    }
    pbVar41 = pbVar18 + 1;
    uVar39 = ((ulong)*pbVar18 << (uVar14 & 0x3f)) + uVar39;
    if (uVar13 < 8) {
      uVar13 = (uint)(uVar14 + 8);
      if (iVar24 - 1U == 0) goto LAB_0017e9a8;
      uVar34 = (ulong)(iVar24 - 2);
      pbVar41 = pbVar18 + 2;
      uVar39 = ((ulong)pbVar18[1] << (uVar14 + 8 & 0x3f)) + uVar39;
    }
    else {
      uVar34 = (ulong)(iVar24 - 1U);
    }
    break;
  case 0x3f37:
    if (uVar13 < 0x10) goto LAB_0017db9c;
    break;
  case 0x3f38:
    uVar38 = *(uint *)(puVar42 + 3);
    if ((uVar38 >> 10 & 1) != 0) {
      uVar12 = uVar14;
      if (uVar13 < 0x10) goto LAB_0017dc58;
      goto LAB_0017dca4;
    }
    goto LAB_0017dc48;
  case 0x3f39:
    goto switchD_0017cc80_caseD_3f39;
  case 0x3f3a:
    goto switchD_0017cc80_caseD_3f3a;
  case 0x3f3b:
    goto switchD_0017cc80_caseD_3f3b;
  case 0x3f3c:
    goto switchD_0017cc80_caseD_3f3c;
  case 0x3f3d:
    if (uVar13 < 0x20) {
      if (iVar32 == 0) goto LAB_0017e974;
      uVar15 = iVar32 - 1;
      __src = pbVar41 + 1;
      uVar39 = ((ulong)*pbVar41 << (uVar14 & 0x3f)) + uVar39;
      if (uVar13 < 0x18) {
        uVar38 = (uint)(uVar14 + 8);
        if (uVar15 == 0) {
LAB_0017e9f8:
          goto LAB_0017e978;
        }
        uVar15 = iVar32 - 2;
        __src = pbVar41 + 2;
        uVar39 = ((ulong)pbVar41[1] << (uVar14 + 8 & 0x3f)) + uVar39;
        if (uVar13 < 0x10) {
          uVar38 = (uint)(uVar14 + 0x10);
          if (uVar15 == 0) goto LAB_0017e9f8;
          uVar15 = iVar32 - 3;
          __src = pbVar41 + 3;
          uVar39 = ((ulong)pbVar41[2] << (uVar14 + 0x10 & 0x3f)) + uVar39;
          if (uVar13 < 8) {
            uVar38 = (uint)(uVar14 + 0x18);
            if (uVar15 == 0) goto LAB_0017e978;
            uVar34 = (ulong)(iVar32 - 4);
            __src = pbVar41 + 4;
            uVar39 = ((ulong)pbVar41[3] << (uVar14 + 0x18 & 0x3f)) + uVar39;
            goto LAB_0017d2d4;
          }
        }
      }
      uVar34 = (ulong)uVar15;
    }
LAB_0017d2d4:
    uVar13 = ((uint)uVar39 & 0xff00ff00) >> 8 | ((uint)uVar39 & 0xff00ff) << 8;
    uVar39 = (ulong)(uVar13 >> 0x10 | uVar13 << 0x10);
    uVar14 = 0;
    puVar42[4] = uVar39;
    param_1[0xc] = uVar39;
    uVar39 = 0;
    *(undefined4 *)(puVar42 + 1) = 0x3f3e;
  case 0x3f3e:
    if (*(int *)((long)puVar42 + 0x14) == 0) {
      param_1[3] = (long)__dest_00;
      *param_1 = (long)__src;
      *(int *)(param_1 + 1) = (int)uVar34;
      *(uint *)(param_1 + 4) = local_68;
      puVar42[10] = uVar39;
      *(int *)(puVar42 + 0xb) = (int)uVar14;
      return 2;
    }
    lVar35 = FUN_0017f300(0,0,0);
    puVar42[4] = lVar35;
    param_1[0xc] = lVar35;
    *(undefined4 *)(puVar42 + 1) = 0x3f3f;
    pbVar41 = __src;
switchD_0017cc80_caseD_3f3f:
    uVar13 = (uint)uVar14;
    if (param_2 - 5U < 2) goto LAB_0017e8c4;
switchD_0017cc80_caseD_3f40:
    uVar13 = (uint)uVar14;
    if (*(int *)((long)puVar42 + 0xc) != 0) {
      uVar14 = (ulong)(uVar13 & 0xfffffff8);
      uVar39 = uVar39 >> (uVar13 & 7);
      uVar16 = 0x3f4e;
      goto LAB_0017e5a0;
    }
    if (uVar13 < 3) {
      if ((int)uVar34 == 0) {
        iVar17 = local_70;
switchD_0017cc80_caseD_3f51:
        iVar26 = iVar17;
        goto switchD_0017cc80_caseD_3f50;
      }
      uVar34 = (ulong)((int)uVar34 - 1);
      uVar13 = uVar13 + 8;
      uVar39 = ((ulong)*pbVar41 << (uVar14 & 0x3f)) + uVar39;
      pbVar41 = pbVar41 + 1;
    }
    uVar38 = (uint)uVar39;
    *(uint *)((long)puVar42 + 0xc) = uVar38 & 1;
    uVar16 = 0x3f41;
    uVar39 = uVar39 >> 3;
    switch(uVar38 >> 1 & 3) {
    case 1:
      puVar42[0xd] = &DAT_04107906;
      puVar42[0xe] = &DAT_04108106;
      puVar42[0xf] = 0x500000009;
      *(undefined4 *)(puVar42 + 1) = 0x3f47;
      if (param_2 != 6) goto LAB_0017d3f4;
      uVar13 = uVar13 - 3;
      iVar26 = local_70;
      goto switchD_0017cc80_caseD_3f50;
    case 2:
      uVar16 = 0x3f44;
      break;
    case 3:
      param_1[6] = (long)"invalid block type";
      uVar16 = 0x3f51;
    }
    *(undefined4 *)(puVar42 + 1) = uVar16;
LAB_0017d3f4:
    iVar24 = *(int *)(puVar42 + 1);
    uVar14 = (ulong)(uVar13 - 3);
    goto LAB_0017cc60;
  case 0x3f3f:
    goto switchD_0017cc80_caseD_3f3f;
  case 0x3f40:
    goto switchD_0017cc80_caseD_3f40;
  case 0x3f41:
    uVar38 = uVar13 & 0xfffffff8;
    uVar12 = (ulong)uVar38;
    uVar39 = uVar39 >> (uVar13 & 7);
    if (0x1f < uVar38) {
      uVar14 = (ulong)uVar38;
LAB_0017d1e4:
      if ((uVar39 >> 0x10 ^ 0xffff) != (uVar39 & 0xffff)) {
        pcVar20 = "invalid stored block lengths";
        goto LAB_0017e598;
      }
      uVar14 = 0;
      uVar13 = 0;
      *(uint *)((long)puVar42 + 0x5c) = (uint)uVar39 & 0xffff;
      *(undefined4 *)(puVar42 + 1) = 0x3f42;
      uVar39 = 0;
      pbVar41 = __src;
      if (param_2 != 6) goto switchD_0017cc80_caseD_3f42;
      goto LAB_0017e8c4;
    }
    if (iVar32 != 0) {
      uVar15 = iVar32 - 1;
      uVar23 = uVar12 + 8;
      pbVar18 = pbVar41 + 1;
      uVar39 = ((ulong)*pbVar41 << (uVar12 & 0x3f)) + uVar39;
      if (uVar38 < 0x18) {
        uVar13 = (uint)uVar23;
        if (uVar15 == 0) goto LAB_0017e9e4;
        uVar15 = iVar32 - 2;
        pbVar18 = pbVar41 + 2;
        uVar34 = uVar23 & 0x3f;
        uVar23 = uVar12 + 0x10;
        uVar39 = ((ulong)pbVar41[1] << uVar34) + uVar39;
        if (uVar38 < 0x10) {
          uVar13 = (uint)uVar23;
          if (uVar15 == 0) goto LAB_0017e9e4;
          uVar15 = iVar32 - 3;
          pbVar18 = pbVar41 + 3;
          uVar34 = uVar23 & 0x3f;
          uVar23 = uVar12 + 0x18;
          uVar39 = ((ulong)pbVar41[2] << uVar34) + uVar39;
          if ((uVar14 & 0xfffffff8) == 0) {
            uVar13 = (uint)uVar23;
            if (uVar15 == 0) goto LAB_0017e9e4;
            uVar15 = iVar32 - 4;
            pbVar18 = pbVar41 + 4;
            uVar34 = uVar23 & 0x3f;
            uVar23 = uVar12 + 0x20;
            uVar39 = ((ulong)pbVar41[3] << uVar34) + uVar39;
          }
        }
      }
      uVar34 = (ulong)uVar15;
      uVar14 = uVar23 & 0xffffffff;
      __src = pbVar18;
      goto LAB_0017d1e4;
    }
    uVar13 = uVar38;
LAB_0017e9e4:
    uVar34 = 0;
    pbVar41 = pbVar18;
LAB_0017e9ec:
    iVar26 = local_70;
    goto switchD_0017cc80_caseD_3f50;
  case 0x3f42:
switchD_0017cc80_caseD_3f42:
    *(undefined4 *)(puVar42 + 1) = 0x3f43;
  case 0x3f43:
    uVar13 = (uint)uVar14;
    uVar38 = *(uint *)((long)puVar42 + 0x5c);
    if (uVar38 == 0) {
LAB_0017e588:
      uVar16 = 0x3f3f;
      pbVar41 = __src;
      goto LAB_0017e5a0;
    }
    uVar15 = (uint)uVar34;
    if (uVar15 <= uVar38) {
      uVar38 = uVar15;
    }
    if (local_68 <= uVar38) {
      uVar38 = local_68;
    }
    uVar12 = (ulong)uVar38;
    pbVar41 = __src;
    if (uVar38 == 0) goto LAB_0017e8c4;
    memcpy(__dest_00,__src,uVar12);
    uVar34 = (ulong)(uVar15 - uVar38);
    __dest_00 = __dest_00 + uVar12;
    local_68 = local_68 - uVar38;
    pbVar41 = __src + uVar12;
    *(uint *)((long)puVar42 + 0x5c) = *(int *)((long)puVar42 + 0x5c) - uVar38;
    iVar24 = *(int *)(puVar42 + 1);
    goto LAB_0017cc60;
  case 0x3f44:
    if (uVar13 < 0xe) {
      if (iVar32 == 0) goto LAB_0017e974;
      uVar15 = iVar32 - 1;
      __src = pbVar41 + 1;
      uVar39 = ((ulong)*pbVar41 << (uVar14 & 0x3f)) + uVar39;
      uVar38 = (uint)(uVar14 + 8);
      if (uVar13 < 6) {
        if (uVar15 == 0) goto LAB_0017e978;
        uVar15 = iVar32 - 2;
        __src = pbVar41 + 2;
        uVar39 = ((ulong)pbVar41[1] << (uVar14 + 8 & 0x3f)) + uVar39;
        uVar38 = uVar13 + 0x10;
      }
      uVar13 = uVar38;
      uVar34 = (ulong)uVar15;
    }
    uVar37 = (uint)uVar39;
    uVar15 = uVar37 >> 5 & 0x1f;
    *(uint *)((long)puVar42 + 0x84) = (uVar37 & 0x1f) + 0x101;
    *(uint *)(puVar42 + 0x11) = uVar15 + 1;
    uVar38 = (uVar37 >> 10 & 0xf) + 4;
    *(uint *)(puVar42 + 0x10) = uVar38;
    uVar39 = uVar39 >> 0xe;
    uVar14 = (ulong)(uVar13 - 0xe);
    if ((0x1d < (uVar37 & 0x1f)) || (0x1d < uVar15)) {
      pcVar20 = "too many length or distance symbols";
      goto LAB_0017e598;
    }
    uVar15 = 0;
    *(undefined4 *)((long)puVar42 + 0x8c) = 0;
    *(undefined4 *)(puVar42 + 1) = 0x3f45;
LAB_0017cf8c:
    lVar35 = 0;
    do {
      uVar13 = (uint)uVar14;
      pbVar41 = __src;
      if (uVar13 < 3) {
        if ((int)uVar34 == 0) goto LAB_0017e9ec;
        pbVar41 = __src + 1;
        uVar34 = (ulong)((int)uVar34 - 1);
        uVar13 = uVar13 + 8;
        uVar39 = ((ulong)*__src << (uVar14 & 0x3f)) + uVar39;
      }
      uVar8 = (ushort)uVar39;
      uVar39 = uVar39 >> 3;
      *(uint *)((long)puVar42 + 0x8c) = uVar15 + (int)lVar35 + 1;
      uVar14 = (ulong)(uVar13 - 3);
      lVar40 = lVar35 * 2;
      lVar35 = lVar35 + 1;
      *(ushort *)
       ((long)puVar42 + (ulong)*(ushort *)(&DAT_041078e0 + lVar40 + (ulong)uVar15 * 2) * 2 + 0x98) =
           uVar8 & 7;
      __src = pbVar41;
    } while ((ulong)uVar15 + lVar35 < (ulong)uVar38);
    uVar15 = uVar15 + (int)lVar35;
    goto LAB_0017d184;
  case 0x3f45:
    uVar15 = *(uint *)((long)puVar42 + 0x8c);
    uVar38 = *(uint *)(puVar42 + 0x10);
    if (uVar15 < uVar38) goto LAB_0017cf8c;
LAB_0017d184:
    if (uVar15 < 0x13) {
      uVar38 = 3 - uVar15 & 3;
      uVar13 = uVar15 + uVar38;
      if (uVar38 == 0) {
        uVar38 = uVar15;
      }
      else {
        puVar19 = (ushort *)(&DAT_041078e0 + (ulong)uVar15 * 2);
        do {
          uVar38 = uVar38 - 1;
          *(undefined2 *)((long)puVar42 + (ulong)*puVar19 * 2 + 0x98) = 0;
          puVar19 = puVar19 + 1;
        } while (uVar38 != 0);
        uVar38 = uVar13;
      }
      if (2 < uVar15 - 0x10) {
        puVar19 = (ushort *)(&DAT_041078e0 + (ulong)(uVar13 + 3) * 2);
        puVar25 = (ushort *)(&DAT_041078e0 + (ulong)(uVar13 + 2) * 2);
        puVar28 = (ushort *)(&DAT_041078e0 + (ulong)uVar38 * 2);
        puVar30 = (ushort *)(&DAT_041078e0 + (ulong)(uVar13 + 1) * 2);
        uVar13 = uVar38;
        do {
          bVar9 = uVar13 < 0xf;
          *(undefined2 *)((long)puVar42 + (ulong)*puVar28 * 2 + 0x98) = 0;
          *(undefined2 *)((long)puVar42 + (ulong)*puVar30 * 2 + 0x98) = 0;
          *(undefined2 *)((long)puVar42 + (ulong)*puVar25 * 2 + 0x98) = 0;
          *(undefined2 *)((long)puVar42 + (ulong)*puVar19 * 2 + 0x98) = 0;
          uVar13 = uVar13 + 4;
          puVar19 = puVar19 + 4;
          puVar25 = puVar25 + 4;
          puVar28 = puVar28 + 4;
          puVar30 = puVar30 + 4;
        } while (bVar9);
      }
      *(uint *)((long)puVar42 + 0x8c) = uVar13;
    }
    puVar42[0x12] = puVar1;
    puVar42[0xd] = puVar1;
    *(undefined4 *)(puVar42 + 0xf) = 7;
    local_70 = FUN_0017f310(0,puVar3,0x13,puVar2,puVar42 + 0xf,puVar4);
    if (local_70 != 0) {
      param_1[6] = (long)"invalid code lengths set";
      *(undefined4 *)(puVar42 + 1) = 0x3f51;
      iVar24 = 0x3f51;
      goto LAB_0017cc60;
    }
    uVar38 = 0;
    local_70 = 0;
    *(undefined4 *)((long)puVar42 + 0x8c) = 0;
    *(undefined4 *)(puVar42 + 1) = 0x3f46;
    __src = pbVar41;
LAB_0017d608:
    iVar24 = *(int *)((long)puVar42 + 0x84);
    uVar15 = *(int *)(puVar42 + 0x11) + iVar24;
    if (uVar38 < uVar15) {
      lVar35 = puVar42[0xd];
      uVar37 = ~(-1 << (ulong)(*(uint *)(puVar42 + 0xf) & 0x1f));
      uVar12 = uVar34;
      pbVar41 = __src;
      do {
        uVar31 = (ulong)(uVar37 & (uint)uVar39);
        bVar6 = *(byte *)(lVar35 + uVar31 * 4 + 1);
        uVar23 = (ulong)bVar6;
        uVar13 = (uint)uVar14;
        uVar34 = uVar12;
        __src = pbVar41;
        if (uVar13 < bVar6) {
          lVar40 = 0;
          uVar34 = uVar12 & 0xffffffff;
          pbVar18 = pbVar41;
          do {
            if ((int)uVar34 == 0) goto LAB_0017e6a8;
            __src = pbVar18 + 1;
            uVar23 = uVar14 + lVar40;
            lVar40 = lVar40 + 8;
            uVar34 = (ulong)((int)uVar34 - 1);
            uVar39 = ((ulong)*pbVar18 << (uVar23 & 0x3f)) + uVar39;
            uVar31 = (ulong)(uVar37 & (uint)uVar39);
            uVar23 = (ulong)*(byte *)(lVar35 + uVar31 * 4 + 1);
            pbVar18 = __src;
          } while (uVar14 + lVar40 < uVar23);
          uVar14 = (ulong)(uVar13 + (int)lVar40);
        }
        uVar8 = *(ushort *)(lVar35 + uVar31 * 4 + 2);
        uVar13 = (uint)uVar14;
        iVar26 = (int)uVar23;
        if (0xf < uVar8) {
          pbVar41 = __src;
          if (uVar8 == 0x10) {
            if (uVar13 < iVar26 + 2U) {
              lVar40 = 0;
              do {
                if ((int)uVar34 == 0) goto LAB_0017e8dc;
                __src = pbVar41 + 1;
                uVar12 = uVar14 + lVar40;
                lVar40 = lVar40 + 8;
                uVar34 = (ulong)((int)uVar34 - 1);
                uVar39 = ((ulong)*pbVar41 << (uVar12 & 0x3f)) + uVar39;
                pbVar41 = __src;
              } while (uVar14 + lVar40 < (ulong)(iVar26 + 2U));
              uVar13 = uVar13 + (int)lVar40;
            }
            uVar39 = uVar39 >> (uVar23 & 0x3f);
            uVar14 = (ulong)(uVar13 - iVar26);
            if (uVar38 != 0) {
              uVar33 = ((uint)uVar39 & 3) + 3;
              uVar39 = uVar39 >> 2;
              uVar29 = *(undefined2 *)((long)puVar42 + (ulong)(uVar38 - 1) * 2 + 0x98);
              uVar14 = (ulong)((uVar13 - iVar26) - 2);
              goto LAB_0017d7f4;
            }
          }
          else {
            if (uVar8 == 0x11) {
              if (uVar13 < iVar26 + 3U) {
                lVar40 = 0;
                do {
                  if ((int)uVar34 == 0) goto LAB_0017e8dc;
                  __src = pbVar41 + 1;
                  uVar12 = uVar14 + lVar40;
                  lVar40 = lVar40 + 8;
                  uVar34 = (ulong)((int)uVar34 - 1);
                  uVar39 = ((ulong)*pbVar41 << (uVar12 & 0x3f)) + uVar39;
                  pbVar41 = __src;
                } while (uVar14 + lVar40 < (ulong)(iVar26 + 3U));
                uVar13 = uVar13 + (int)lVar40;
              }
              uVar12 = uVar39 >> (uVar23 & 0x3f);
              uVar29 = 0;
              uVar39 = uVar12 >> 3;
              uVar14 = (ulong)((uVar13 - iVar26) - 3);
              uVar33 = ((uint)uVar12 & 7) + 3;
            }
            else {
              if (uVar13 < iVar26 + 7U) {
                lVar40 = 0;
                do {
                  if ((int)uVar34 == 0) goto LAB_0017e8dc;
                  __src = pbVar41 + 1;
                  uVar12 = uVar14 + lVar40;
                  lVar40 = lVar40 + 8;
                  uVar34 = (ulong)((int)uVar34 - 1);
                  uVar39 = ((ulong)*pbVar41 << (uVar12 & 0x3f)) + uVar39;
                  pbVar41 = __src;
                } while (uVar14 + lVar40 < (ulong)(iVar26 + 7U));
                uVar13 = uVar13 + (int)lVar40;
              }
              uVar12 = uVar39 >> (uVar23 & 0x3f);
              uVar29 = 0;
              uVar39 = uVar12 >> 7;
              uVar14 = (ulong)((uVar13 - iVar26) - 7);
              uVar33 = ((uint)uVar12 & 0x7f) + 0xb;
            }
LAB_0017d7f4:
            if (uVar33 + uVar38 <= uVar15) {
              uVar13 = uVar33 & 3;
              if (uVar13 == 0) {
                uVar27 = uVar33;
              }
              else {
                uVar27 = uVar33 & 0xfc;
                do {
                  uVar12 = (ulong)uVar38;
                  uVar38 = uVar38 + 1;
                  uVar13 = uVar13 - 1;
                  *(undefined2 *)((long)puVar42 + uVar12 * 2 + 0x98) = uVar29;
                } while (uVar13 != 0);
              }
              if (3 < uVar33) {
                do {
                  uVar13 = uVar38 + 2;
                  *(undefined2 *)((long)puVar42 + (ulong)uVar38 * 2 + 0x98) = uVar29;
                  uVar27 = uVar27 - 4;
                  *(undefined2 *)((long)puVar42 + (ulong)(uVar38 + 1) * 2 + 0x98) = uVar29;
                  uVar33 = uVar38 + 3;
                  uVar38 = uVar38 + 4;
                  *(undefined2 *)((long)puVar42 + (ulong)uVar13 * 2 + 0x98) = uVar29;
                  *(undefined2 *)((long)puVar42 + (ulong)uVar33 * 2 + 0x98) = uVar29;
                } while (uVar27 != 0);
              }
              *(uint *)((long)puVar42 + 0x8c) = uVar38;
              goto LAB_0017d860;
            }
          }
          pcVar20 = "invalid bit length repeat";
          goto LAB_0017e598;
        }
        uVar12 = (ulong)uVar38;
        uVar38 = uVar38 + 1;
        uVar39 = uVar39 >> (uVar23 & 0x3f);
        *(uint *)((long)puVar42 + 0x8c) = uVar38;
        uVar14 = (ulong)(uVar13 - iVar26);
        *(ushort *)((long)puVar42 + uVar12 * 2 + 0x98) = uVar8;
LAB_0017d860:
        uVar12 = uVar34;
        pbVar41 = __src;
      } while (uVar38 < uVar15);
    }
    uVar13 = (uint)uVar14;
    if (*(short *)(puVar42 + 0x53) == 0) {
      pcVar20 = "invalid code -- missing end-of-block";
      goto LAB_0017e598;
    }
    puVar42[0x12] = puVar1;
    puVar42[0xd] = puVar1;
    *(undefined4 *)(puVar42 + 0xf) = 9;
    local_70 = FUN_0017f310(1,puVar3,iVar24,puVar2,puVar42 + 0xf,puVar4);
    pbVar41 = __src;
    if (local_70 != 0) {
      pcVar20 = "invalid literal/lengths set";
LAB_0017d920:
      param_1[6] = (long)pcVar20;
      *(undefined4 *)(puVar42 + 1) = 0x3f51;
      iVar24 = 0x3f51;
      goto LAB_0017cc60;
    }
    puVar42[0xe] = puVar42[0x12];
    *(undefined4 *)((long)puVar42 + 0x7c) = 6;
    local_70 = FUN_0017f310(2,(long)puVar3 + (ulong)*(uint *)((long)puVar42 + 0x84) * 2,
                            *(undefined4 *)(puVar42 + 0x11),puVar2,(long)puVar42 + 0x7c,puVar4);
    if (local_70 != 0) {
      pcVar20 = "invalid distances set";
      goto LAB_0017d920;
    }
    local_70 = 0;
    *(undefined4 *)(puVar42 + 1) = 0x3f47;
    if (param_2 == 6) goto LAB_0017e8c4;
switchD_0017cc80_caseD_3f47:
    *(undefined4 *)(puVar42 + 1) = 0x3f48;
    uVar12 = uVar34;
    pbVar41 = __src;
switchD_0017cc80_caseD_3f48:
    uVar13 = (uint)uVar14;
    if ((5 < (uint)uVar12) && (0x101 < local_68)) {
      param_1[3] = (long)__dest_00;
      *param_1 = (long)pbVar41;
      *(uint *)(param_1 + 1) = (uint)uVar12;
      *(uint *)(param_1 + 4) = local_68;
      puVar42[10] = uVar39;
      *(uint *)(puVar42 + 0xb) = uVar13;
      FUN_0017f9d0(param_1,local_6c);
      local_68 = *(uint *)(param_1 + 4);
      __dest_00 = (undefined1 *)param_1[3];
      pbVar41 = (byte *)*param_1;
      uVar34 = (ulong)*(uint *)(param_1 + 1);
      uVar39 = puVar42[10];
      uVar14 = (ulong)*(uint *)(puVar42 + 0xb);
      if (*(int *)(puVar42 + 1) != 0x3f3f) goto LAB_0017e5a4;
      *(undefined4 *)((long)puVar42 + 0x1bec) = 0xffffffff;
      iVar24 = *(int *)(puVar42 + 1);
      goto LAB_0017cc60;
    }
    *(undefined4 *)((long)puVar42 + 0x1bec) = 0;
    lVar35 = puVar42[0xd];
    uVar38 = -1 << (ulong)(*(uint *)(puVar42 + 0xf) & 0x1f);
    pbVar18 = (byte *)(lVar35 + (ulong)((uint)uVar39 & (uVar38 ^ 0xffffffff)) * 4);
    uVar23 = (ulong)pbVar18[1];
    uVar34 = uVar12;
    __src = pbVar41;
    if (uVar13 < pbVar18[1]) {
      lVar40 = 0;
      uVar34 = uVar12 & 0xffffffff;
      pbVar11 = pbVar41;
      do {
        if ((int)uVar34 == 0) goto LAB_0017e6a8;
        __src = pbVar11 + 1;
        uVar23 = uVar14 + lVar40;
        lVar40 = lVar40 + 8;
        uVar34 = (ulong)((int)uVar34 - 1);
        uVar39 = ((ulong)*pbVar11 << (uVar23 & 0x3f)) + uVar39;
        pbVar18 = (byte *)(lVar35 + (ulong)(~uVar38 & (uint)uVar39) * 4);
        uVar23 = (ulong)pbVar18[1];
        pbVar11 = __src;
      } while (uVar14 + lVar40 < uVar23);
      uVar14 = (ulong)(uVar13 + (int)lVar40);
    }
    uVar38 = (uint)uVar23;
    uVar13 = (uint)uVar14;
    uVar8 = *(ushort *)(pbVar18 + 2);
    bVar6 = *pbVar18;
    if (bVar6 - 1 < 0xf) {
      uVar15 = -1 << (ulong)(uVar38 + bVar6 & 0x1f);
      pbVar41 = (byte *)(lVar35 + (ulong)((((uint)uVar39 & (uVar15 ^ 0xffffffff)) >>
                                          (ulong)(uVar38 & 0x1f)) + (uint)uVar8) * 4);
      bVar7 = pbVar41[1];
      uVar31 = uVar34;
      pbVar18 = __src;
      if (uVar13 < uVar38 + bVar7) {
        lVar40 = 0;
        uVar31 = uVar34 & 0xffffffff;
        pbVar11 = __src;
        do {
          uVar12 = uVar34;
          pbVar41 = __src;
          if ((int)uVar31 == 0) goto LAB_0017e6a8;
          pbVar18 = pbVar11 + 1;
          uVar12 = uVar14 + lVar40;
          lVar40 = lVar40 + 8;
          uVar31 = (ulong)((int)uVar31 - 1);
          uVar39 = ((ulong)*pbVar11 << (uVar12 & 0x3f)) + uVar39;
          pbVar41 = (byte *)(lVar35 + (ulong)((((uint)uVar39 & ~uVar15) >> (ulong)(uVar38 & 0x1f)) +
                                             (uint)uVar8) * 4);
          bVar7 = pbVar41[1];
          pbVar11 = pbVar18;
        } while (uVar14 + lVar40 < (ulong)(uVar38 + bVar7));
        uVar13 = uVar13 + (int)lVar40;
      }
      uVar8 = *(ushort *)(pbVar41 + 2);
      uVar39 = uVar39 >> (uVar23 & 0x3f);
      uVar13 = uVar13 - uVar38;
      bVar6 = *pbVar41;
      uVar23 = (ulong)bVar7;
      uVar34 = uVar31;
      __src = pbVar18;
    }
    else {
      uVar38 = 0;
    }
    uVar39 = uVar39 >> (uVar23 & 0x3f);
    *(uint *)((long)puVar42 + 0x5c) = (uint)uVar8;
    uVar14 = (ulong)(uVar13 - (int)uVar23);
    *(uint *)((long)puVar42 + 0x1bec) = uVar38 + (int)uVar23;
    if (bVar6 == 0) {
      uVar16 = 0x3f4d;
      pbVar41 = __src;
      goto LAB_0017e5a0;
    }
    if ((bVar6 >> 5 & 1) != 0) {
      *(undefined4 *)((long)puVar42 + 0x1bec) = 0xffffffff;
      goto LAB_0017e588;
    }
    if ((bVar6 >> 6 & 1) == 0) {
      uVar38 = bVar6 & 0xf;
      *(uint *)((long)puVar42 + 100) = uVar38;
      *(undefined4 *)(puVar42 + 1) = 0x3f49;
      if ((bVar6 & 0xf) == 0) {
LAB_0017e230:
        iVar24 = *(int *)((long)puVar42 + 0x5c);
      }
      else {
LAB_0017d014:
        uVar13 = (uint)uVar14;
        if (uVar13 < uVar38) {
          uVar23 = uVar34 & 0xffffffff;
          pbVar18 = __src;
          do {
            uVar12 = uVar34;
            pbVar41 = __src;
            if ((int)uVar23 == 0) goto LAB_0017e6a8;
            pbVar41 = pbVar18 + 1;
            uVar23 = (ulong)((int)uVar23 - 1);
            uVar12 = uVar14 & 0x3f;
            uVar15 = (int)uVar14 + 8;
            uVar14 = (ulong)uVar15;
            uVar39 = ((ulong)*pbVar18 << uVar12) + uVar39;
            pbVar18 = pbVar41;
          } while (uVar15 < uVar38);
        }
        else {
          uVar23 = uVar34 & 0xffffffff;
          pbVar41 = __src;
          uVar15 = uVar13;
        }
        uVar14 = (ulong)(uVar15 - uVar38);
        uVar13 = (uint)uVar39;
        uVar39 = uVar39 >> ((ulong)uVar38 & 0x3f);
        iVar24 = *(int *)((long)puVar42 + 0x5c) +
                 (uVar13 & (-1 << (ulong)(uVar38 & 0x1f) ^ 0xffffffffU));
        *(int *)((long)puVar42 + 0x5c) = iVar24;
        *(uint *)((long)puVar42 + 0x1bec) = *(int *)((long)puVar42 + 0x1bec) + uVar38;
        uVar34 = uVar23;
        __src = pbVar41;
      }
      *(int *)(puVar42 + 0x37e) = iVar24;
      *(undefined4 *)(puVar42 + 1) = 0x3f4a;
      uVar12 = uVar34;
      pbVar41 = __src;
switchD_0017cc80_caseD_3f4a:
      uVar38 = -1 << (ulong)(*(uint *)((long)puVar42 + 0x7c) & 0x1f);
      lVar35 = puVar42[0xe];
      pbVar18 = (byte *)(lVar35 + (ulong)((uint)uVar39 & (uVar38 ^ 0xffffffff)) * 4);
      uVar23 = (ulong)pbVar18[1];
      uVar13 = (uint)uVar14;
      uVar34 = uVar12;
      __src = pbVar41;
      if (uVar13 < pbVar18[1]) {
        lVar40 = 0;
        uVar34 = uVar12 & 0xffffffff;
        pbVar11 = pbVar41;
        do {
          if ((int)uVar34 == 0) goto LAB_0017e6a8;
          __src = pbVar11 + 1;
          uVar23 = uVar14 + lVar40;
          lVar40 = lVar40 + 8;
          uVar34 = (ulong)((int)uVar34 - 1);
          uVar39 = ((ulong)*pbVar11 << (uVar23 & 0x3f)) + uVar39;
          pbVar18 = (byte *)(lVar35 + (ulong)(~uVar38 & (uint)uVar39) * 4);
          uVar23 = (ulong)pbVar18[1];
          pbVar11 = __src;
        } while (uVar14 + lVar40 < uVar23);
        uVar14 = (ulong)(uVar13 + (int)lVar40);
      }
      uVar13 = (uint)uVar14;
      uVar8 = *(ushort *)(pbVar18 + 2);
      bVar6 = *pbVar18;
      if (bVar6 < 0x10) {
        uVar15 = (uint)uVar23;
        uVar38 = -1 << (ulong)(uVar15 + bVar6 & 0x1f);
        pbVar41 = (byte *)(lVar35 + (ulong)((((uint)uVar39 & (uVar38 ^ 0xffffffff)) >>
                                            (ulong)(uVar15 & 0x1f)) + (uint)uVar8) * 4);
        bVar7 = pbVar41[1];
        uVar31 = uVar34;
        pbVar18 = __src;
        if (uVar13 < uVar15 + bVar7) {
          lVar40 = 0;
          uVar31 = uVar34 & 0xffffffff;
          pbVar11 = __src;
          do {
            uVar12 = uVar34;
            pbVar41 = __src;
            if ((int)uVar31 == 0) goto LAB_0017e6a8;
            pbVar18 = pbVar11 + 1;
            uVar12 = uVar14 + lVar40;
            lVar40 = lVar40 + 8;
            uVar31 = (ulong)((int)uVar31 - 1);
            uVar39 = ((ulong)*pbVar11 << (uVar12 & 0x3f)) + uVar39;
            pbVar41 = (byte *)(lVar35 + (ulong)((((uint)uVar39 & ~uVar38) >> (ulong)(uVar15 & 0x1f))
                                               + (uint)uVar8) * 4);
            bVar7 = pbVar41[1];
            pbVar11 = pbVar18;
          } while (uVar14 + lVar40 < (ulong)(uVar15 + bVar7));
          uVar13 = uVar13 + (int)lVar40;
        }
        uVar39 = uVar39 >> (uVar23 & 0x3f);
        uVar13 = uVar13 - uVar15;
        uVar8 = *(ushort *)(pbVar41 + 2);
        iVar24 = *(int *)((long)puVar42 + 0x1bec) + uVar15;
        bVar6 = *pbVar41;
        uVar23 = (ulong)bVar7;
        uVar34 = uVar31;
        __src = pbVar18;
      }
      else {
        iVar24 = *(int *)((long)puVar42 + 0x1bec);
      }
      uVar39 = uVar39 >> (uVar23 & 0x3f);
      uVar14 = (ulong)(uVar13 - (int)uVar23);
      *(int *)((long)puVar42 + 0x1bec) = iVar24 + (int)uVar23;
      if ((bVar6 >> 6 & 1) != 0) {
        pcVar20 = "invalid distance code";
        goto LAB_0017e598;
      }
      uVar38 = bVar6 & 0xf;
      *(uint *)(puVar42 + 0xc) = (uint)uVar8;
      *(uint *)((long)puVar42 + 100) = uVar38;
      *(undefined4 *)(puVar42 + 1) = 0x3f4b;
LAB_0017e398:
      uVar13 = (uint)uVar14;
      uVar23 = uVar34;
      pbVar41 = __src;
      if (uVar38 != 0) {
        if (uVar13 < uVar38) {
          uVar23 = uVar34 & 0xffffffff;
          pbVar18 = __src;
          do {
            uVar12 = uVar34;
            pbVar41 = __src;
            if ((int)uVar23 == 0) goto LAB_0017e6a8;
            pbVar41 = pbVar18 + 1;
            uVar23 = (ulong)((int)uVar23 - 1);
            uVar12 = uVar14 & 0x3f;
            uVar15 = (int)uVar14 + 8;
            uVar14 = (ulong)uVar15;
            uVar39 = ((ulong)*pbVar18 << uVar12) + uVar39;
            pbVar18 = pbVar41;
          } while (uVar15 < uVar38);
        }
        else {
          uVar23 = uVar34 & 0xffffffff;
          uVar15 = uVar13;
        }
        uVar14 = (ulong)(uVar15 - uVar38);
        uVar13 = (uint)uVar39;
        uVar39 = uVar39 >> ((ulong)uVar38 & 0x3f);
        *(uint *)(puVar42 + 0xc) =
             *(int *)(puVar42 + 0xc) + (uVar13 & (-1 << (ulong)(uVar38 & 0x1f) ^ 0xffffffffU));
        *(uint *)((long)puVar42 + 0x1bec) = *(int *)((long)puVar42 + 0x1bec) + uVar38;
      }
      *(undefined4 *)(puVar42 + 1) = 0x3f4c;
      uVar34 = uVar23;
      __src = pbVar41;
switchD_0017cc80_caseD_3f4c:
      uVar13 = (uint)uVar14;
      pbVar41 = __src;
      if (local_68 == 0) {
LAB_0017e8e8:
        local_68 = 0;
        iVar26 = local_70;
        goto switchD_0017cc80_caseD_3f50;
      }
      uVar13 = *(uint *)(puVar42 + 0xc);
      if (local_6c - local_68 < uVar13) {
        uVar13 = uVar13 - (local_6c - local_68);
        if ((*(uint *)(puVar42 + 8) < uVar13) && (*(int *)(puVar42 + 0x37d) != 0)) {
          pcVar20 = "invalid distance too far back";
          goto LAB_0017e598;
        }
        uVar38 = *(uint *)((long)puVar42 + 0x44);
        uVar15 = uVar13 - uVar38;
        if (uVar13 < uVar38 || uVar15 == 0) {
          uVar38 = uVar38 - uVar13;
        }
        else {
          uVar38 = *(int *)((long)puVar42 + 0x3c) - uVar15;
          uVar13 = uVar15;
        }
        puVar21 = (undefined1 *)(puVar42[9] + (ulong)uVar38);
        uVar38 = *(uint *)((long)puVar42 + 0x5c);
        if (uVar38 <= uVar13) {
          uVar13 = uVar38;
        }
      }
      else {
        uVar38 = *(uint *)((long)puVar42 + 0x5c);
        puVar21 = __dest_00 + -(ulong)uVar13;
        uVar13 = uVar38;
      }
      if (local_68 <= uVar13) {
        uVar13 = local_68;
      }
      uVar15 = uVar13 & 7;
      *(uint *)((long)puVar42 + 0x5c) = uVar38 - uVar13;
      if (uVar15 == 0) {
        uVar38 = uVar13;
      }
      else {
        uVar38 = uVar13 & 0xfffffff8;
        puVar22 = puVar21;
        puVar36 = __dest_00;
        do {
          puVar21 = puVar22 + 1;
          uVar15 = uVar15 - 1;
          __dest_00 = puVar36 + 1;
          *puVar36 = *puVar22;
          puVar22 = puVar21;
          puVar36 = __dest_00;
        } while (uVar15 != 0);
      }
      puVar22 = __dest_00;
      if (6 < uVar13 - 1) {
        do {
          uVar38 = uVar38 - 8;
          *puVar22 = *puVar21;
          puVar22[1] = puVar21[1];
          puVar22[2] = puVar21[2];
          puVar22[3] = puVar21[3];
          puVar22[4] = puVar21[4];
          puVar22[5] = puVar21[5];
          puVar22[6] = puVar21[6];
          __dest_00 = puVar22 + 8;
          puVar36 = puVar21 + 7;
          puVar21 = puVar21 + 8;
          puVar22[7] = *puVar36;
          puVar22 = __dest_00;
        } while (uVar38 != 0);
      }
      local_68 = local_68 - uVar13;
      if (*(int *)((long)puVar42 + 0x5c) == 0) {
        *(undefined4 *)(puVar42 + 1) = 0x3f48;
        iVar24 = 0x3f48;
      }
      else {
        iVar24 = *(int *)(puVar42 + 1);
      }
      goto LAB_0017cc60;
    }
    pcVar20 = "invalid literal/length code";
    goto LAB_0017e598;
  case 0x3f46:
    uVar38 = *(uint *)((long)puVar42 + 0x8c);
    goto LAB_0017d608;
  case 0x3f47:
    goto switchD_0017cc80_caseD_3f47;
  case 0x3f48:
    goto switchD_0017cc80_caseD_3f48;
  case 0x3f49:
    uVar38 = *(uint *)((long)puVar42 + 100);
    if (uVar38 == 0) goto LAB_0017e230;
    goto LAB_0017d014;
  case 0x3f4a:
    goto switchD_0017cc80_caseD_3f4a;
  case 0x3f4b:
    uVar38 = *(uint *)((long)puVar42 + 100);
    goto LAB_0017e398;
  case 0x3f4c:
    goto switchD_0017cc80_caseD_3f4c;
  case 0x3f4d:
    if (local_68 != 0) {
      *__dest_00 = (char)*(undefined4 *)((long)puVar42 + 0x5c);
      local_68 = local_68 - 1;
      uVar16 = 0x3f48;
      __dest_00 = __dest_00 + 1;
      goto LAB_0017e5a0;
    }
    goto LAB_0017e8e8;
  case 0x3f4e:
    uVar38 = 0;
    if (*(int *)(puVar42 + 2) == 0) {
LAB_0017d98c:
      *(undefined4 *)(puVar42 + 1) = 0x3f4f;
      goto LAB_0017d994;
    }
    if (uVar13 < 0x20) {
      if (iVar32 != 0) {
        uVar38 = iVar32 - 1;
        pbVar18 = pbVar41 + 1;
        uVar39 = ((ulong)*pbVar41 << (uVar14 & 0x3f)) + uVar39;
        uVar12 = uVar14 + 8;
        if (uVar13 < 0x18) {
          uVar15 = (uint)uVar12;
          if (uVar38 == 0) goto LAB_0017ea14;
          uVar38 = iVar32 - 2;
          pbVar18 = pbVar41 + 2;
          uVar39 = ((ulong)pbVar41[1] << (uVar12 & 0x3f)) + uVar39;
          uVar12 = uVar14 + 0x10;
          if (uVar13 < 0x10) {
            uVar15 = (uint)uVar12;
            if (uVar38 == 0) goto LAB_0017ea14;
            uVar38 = iVar32 - 3;
            pbVar18 = pbVar41 + 3;
            uVar39 = ((ulong)pbVar41[2] << (uVar12 & 0x3f)) + uVar39;
            uVar12 = uVar14 + 0x18;
            if (uVar13 < 8) {
              uVar15 = (uint)uVar12;
              if (uVar38 == 0) goto LAB_0017ea14;
              uVar38 = iVar32 - 4;
              pbVar18 = pbVar41 + 4;
              uVar39 = ((ulong)pbVar41[3] << (uVar12 & 0x3f)) + uVar39;
              uVar12 = uVar14 + 0x20;
            }
          }
        }
        uVar34 = (ulong)uVar38;
        uVar14 = uVar12 & 0xffffffff;
        goto LAB_0017d120;
      }
      uVar15 = uVar13;
LAB_0017ea14:
      uVar13 = uVar15;
      pbVar41 = pbVar18;
      goto LAB_0017ea1c;
    }
LAB_0017d120:
    uVar12 = (ulong)(local_6c - local_68);
    param_1[5] = param_1[5] + uVar12;
    puVar42[5] = puVar42[5] + uVar12;
    uVar38 = *(uint *)(puVar42 + 2);
    uVar13 = uVar38 & 4;
    if (((uVar38 >> 2 & 1) != 0) && (local_6c != local_68)) {
      if (*(int *)(puVar42 + 3) == 0) {
        lVar35 = FUN_0017f300(puVar42[4],(long)__dest_00 - uVar12);
      }
      else {
        lVar35 = FUN_0017ef30();
      }
      puVar42[4] = lVar35;
      param_1[0xc] = lVar35;
      uVar38 = *(uint *)(puVar42 + 2);
      uVar13 = uVar38 & 4;
    }
    if (uVar13 == 0) {
LAB_0017d97c:
      uVar39 = 0;
      uVar14 = 0;
      local_6c = local_68;
      goto LAB_0017d98c;
    }
    uVar13 = ((uint)uVar39 & 0xff00ff00) >> 8 | ((uint)uVar39 & 0xff00ff) << 8;
    uVar12 = (ulong)(uVar13 >> 0x10 | uVar13 << 0x10);
    if (*(int *)(puVar42 + 3) != 0) {
      uVar12 = uVar39;
    }
    if (uVar12 == puVar42[4]) goto LAB_0017d97c;
    param_1[6] = (long)"incorrect data check";
    *(undefined4 *)(puVar42 + 1) = 0x3f51;
    local_6c = local_68;
    iVar24 = *(int *)(puVar42 + 1);
    pbVar41 = pbVar18;
    goto LAB_0017cc60;
  case 0x3f4f:
    uVar38 = *(uint *)(puVar42 + 2);
LAB_0017d994:
    uVar13 = (uint)uVar14;
    pbVar41 = pbVar18;
    if ((uVar38 != 0) && (*(int *)(puVar42 + 3) != 0)) {
      __src = pbVar18;
      if (uVar13 < 0x20) {
        iVar24 = (int)uVar34;
        if (iVar24 == 0) {
          uVar15 = uVar13;
LAB_0017e98c:
          uVar13 = uVar15;
          uVar34 = 0;
          iVar26 = local_70;
          goto switchD_0017cc80_caseD_3f50;
        }
        uVar37 = iVar24 - 1;
        __src = pbVar18 + 1;
        uVar39 = ((ulong)*pbVar18 << (uVar14 & 0x3f)) + uVar39;
        uVar12 = uVar14 + 8;
        if (uVar13 < 0x18) {
          pbVar41 = __src;
          uVar15 = (uint)uVar12;
          if (uVar37 == 0) goto LAB_0017e98c;
          uVar37 = iVar24 - 2;
          __src = pbVar18 + 2;
          uVar39 = ((ulong)pbVar18[1] << (uVar12 & 0x3f)) + uVar39;
          uVar12 = uVar14 + 0x10;
          if (uVar13 < 0x10) {
            pbVar41 = __src;
            uVar15 = (uint)uVar12;
            if (uVar37 == 0) goto LAB_0017e98c;
            uVar37 = iVar24 - 3;
            __src = pbVar18 + 3;
            uVar39 = ((ulong)pbVar18[2] << (uVar12 & 0x3f)) + uVar39;
            uVar12 = uVar14 + 0x18;
            if (uVar13 < 8) {
              pbVar41 = __src;
              uVar15 = (uint)uVar12;
              if (uVar37 == 0) goto LAB_0017e98c;
              uVar37 = iVar24 - 4;
              __src = pbVar18 + 4;
              uVar39 = ((ulong)pbVar18[3] << (uVar12 & 0x3f)) + uVar39;
              uVar12 = uVar14 + 0x20;
            }
          }
        }
        uVar34 = (ulong)uVar37;
        uVar14 = uVar12 & 0xffffffff;
      }
      if (((uVar38 >> 2 & 1) != 0) && (uVar39 != *(uint *)(puVar42 + 5))) {
        pcVar20 = "incorrect length check";
        goto LAB_0017e598;
      }
      uVar39 = 0;
      uVar13 = 0;
      pbVar41 = __src;
    }
    *(undefined4 *)(puVar42 + 1) = 0x3f50;
    iVar26 = 1;
    goto switchD_0017cc80_caseD_3f50;
  case 0x3f50:
    goto switchD_0017cc80_caseD_3f50;
  case 0x3f51:
    goto switchD_0017cc80_caseD_3f51;
  case 0x3f52:
    return -4;
  default:
    goto LAB_0017e688;
  }
  if (puVar42[6] != 0) {
    *(uint *)(puVar42[6] + 0x10) = (uint)uVar39 & 0xff;
    *(int *)(puVar42[6] + 0x14) = (int)(uVar39 >> 8);
  }
  if (((*(byte *)((long)puVar42 + 0x19) >> 1 & 1) != 0) && ((*(byte *)(puVar42 + 2) >> 2 & 1) != 0))
  {
    local_64 = CONCAT22(local_64._2_2_,(short)uVar39);
    uVar10 = FUN_0017ef30(puVar42[4],&local_64,2);
    puVar42[4] = uVar10;
  }
  uVar39 = 0;
  *(undefined4 *)(puVar42 + 1) = 0x3f38;
  uVar38 = *(uint *)(puVar42 + 3);
  uVar14 = 0;
  uVar12 = 0;
  pbVar18 = pbVar41;
  if ((uVar38 >> 10 & 1) != 0) {
LAB_0017dc58:
    uVar13 = (uint)uVar12;
    iVar24 = (int)uVar34;
    pbVar41 = pbVar18;
    if (iVar24 != 0) {
      pbVar41 = pbVar18 + 1;
      uVar39 = ((ulong)*pbVar18 << (uVar12 & 0x3f)) + uVar39;
      if (uVar13 < 8) {
        uVar13 = (uint)(uVar12 + 8);
        if (iVar24 - 1U == 0) goto LAB_0017ea1c;
        uVar34 = (ulong)(iVar24 - 2);
        pbVar41 = pbVar18 + 2;
        uVar39 = ((ulong)pbVar18[1] << (uVar12 + 8 & 0x3f)) + uVar39;
      }
      else {
        uVar34 = (ulong)(iVar24 - 1U);
      }
LAB_0017dca4:
      *(int *)((long)puVar42 + 0x5c) = (int)uVar39;
      if (puVar42[6] != 0) {
        *(int *)(puVar42[6] + 0x20) = (int)uVar39;
        uVar38 = *(uint *)(puVar42 + 3);
      }
      if (((uVar38 >> 9 & 1) == 0) || ((*(byte *)(puVar42 + 2) >> 2 & 1) == 0)) {
        uVar39 = 0;
        uVar14 = 0;
      }
      else {
        local_64 = CONCAT22(local_64._2_2_,(short)uVar39);
        uVar10 = FUN_0017ef30(puVar42[4],&local_64,2);
        uVar39 = 0;
        uVar14 = 0;
        puVar42[4] = uVar10;
      }
      goto LAB_0017dcf0;
    }
LAB_0017ea1c:
    uVar34 = 0;
    iVar26 = local_70;
    goto switchD_0017cc80_caseD_3f50;
  }
LAB_0017dc48:
  if (puVar42[6] != 0) {
    *(undefined8 *)(puVar42[6] + 0x18) = 0;
  }
LAB_0017dcf0:
  *(undefined4 *)(puVar42 + 1) = 0x3f39;
switchD_0017cc80_caseD_3f39:
  uVar13 = (uint)uVar14;
  uVar38 = *(uint *)(puVar42 + 3);
  if ((uVar38 >> 10 & 1) != 0) {
    uVar37 = *(uint *)((long)puVar42 + 0x5c);
    uVar33 = (uint)uVar34;
    uVar15 = uVar37;
    if (uVar33 <= uVar37) {
      uVar15 = uVar33;
    }
    if (uVar15 != 0) {
      lVar35 = puVar42[6];
      if ((lVar35 != 0) && (*(long *)(lVar35 + 0x18) != 0)) {
        uVar27 = *(uint *)(lVar35 + 0x24);
        uVar37 = *(int *)(lVar35 + 0x20) - uVar37;
        if (uVar37 <= uVar27 && uVar27 - uVar37 != 0) {
          uVar38 = uVar27 - uVar37;
          if (uVar37 + uVar15 <= uVar27) {
            uVar38 = uVar15;
          }
          memcpy((void *)(*(long *)(lVar35 + 0x18) + (ulong)uVar37),pbVar41,(ulong)uVar38);
          uVar38 = *(uint *)(puVar42 + 3);
        }
      }
      if (((uVar38 >> 9 & 1) != 0) && ((*(byte *)(puVar42 + 2) >> 2 & 1) != 0)) {
        uVar10 = FUN_0017ef30(puVar42[4],pbVar41,uVar15);
        puVar42[4] = uVar10;
      }
      pbVar41 = pbVar41 + uVar15;
      uVar34 = (ulong)(uVar33 - uVar15);
      uVar37 = *(int *)((long)puVar42 + 0x5c) - uVar15;
      *(uint *)((long)puVar42 + 0x5c) = uVar37;
    }
    if (uVar37 == 0) goto LAB_0017ddc8;
LAB_0017e8c4:
    iVar26 = local_70;
    goto switchD_0017cc80_caseD_3f50;
  }
LAB_0017ddc8:
  *(undefined4 *)((long)puVar42 + 0x5c) = 0;
  *(undefined4 *)(puVar42 + 1) = 0x3f3a;
switchD_0017cc80_caseD_3f3a:
  uVar13 = (uint)uVar14;
  if ((*(byte *)((long)puVar42 + 0x19) >> 3 & 1) == 0) {
    if (puVar42[6] != 0) {
      *(undefined8 *)(puVar42[6] + 0x28) = 0;
    }
  }
  else {
    if ((int)uVar34 == 0) goto LAB_0017e8c4;
    uVar12 = 0;
    do {
      bVar6 = pbVar41[uVar12];
      lVar35 = puVar42[6];
      if ((lVar35 != 0) && (lVar40 = *(long *)(lVar35 + 0x28), lVar40 != 0)) {
        uVar38 = *(uint *)((long)puVar42 + 0x5c);
        if (uVar38 < *(uint *)(lVar35 + 0x30)) {
          *(uint *)((long)puVar42 + 0x5c) = uVar38 + 1;
          *(byte *)(lVar40 + (ulong)uVar38) = bVar6;
        }
      }
      uVar12 = uVar12 + 1;
    } while ((bVar6 != 0) && (uVar12 < uVar34));
    if (((*(byte *)((long)puVar42 + 0x19) >> 1 & 1) != 0) &&
       ((*(byte *)(puVar42 + 2) >> 2 & 1) != 0)) {
      uVar10 = FUN_0017ef30(puVar42[4],pbVar41,uVar12 & 0xffffffff);
      puVar42[4] = uVar10;
    }
    pbVar41 = pbVar41 + uVar12;
    if (bVar6 != 0) {
      uVar34 = (ulong)(uint)((int)uVar34 - (int)uVar12);
      iVar26 = local_70;
      goto switchD_0017cc80_caseD_3f50;
    }
    uVar34 = uVar34 - uVar12;
  }
  *(undefined4 *)((long)puVar42 + 0x5c) = 0;
  *(undefined4 *)(puVar42 + 1) = 0x3f3b;
switchD_0017cc80_caseD_3f3b:
  uVar13 = (uint)uVar14;
  if ((*(byte *)((long)puVar42 + 0x19) >> 4 & 1) == 0) {
    if (puVar42[6] != 0) {
      *(undefined8 *)(puVar42[6] + 0x38) = 0;
    }
  }
  else {
    if ((int)uVar34 == 0) goto LAB_0017e8c4;
    uVar12 = 0;
    do {
      bVar6 = pbVar41[uVar12];
      lVar35 = puVar42[6];
      if ((lVar35 != 0) && (lVar40 = *(long *)(lVar35 + 0x38), lVar40 != 0)) {
        uVar38 = *(uint *)((long)puVar42 + 0x5c);
        if (uVar38 < *(uint *)(lVar35 + 0x40)) {
          *(uint *)((long)puVar42 + 0x5c) = uVar38 + 1;
          *(byte *)(lVar40 + (ulong)uVar38) = bVar6;
        }
      }
      uVar12 = uVar12 + 1;
    } while ((bVar6 != 0) && (uVar12 < (uVar34 & 0xffffffff)));
    if (((*(byte *)((long)puVar42 + 0x19) >> 1 & 1) != 0) &&
       ((*(byte *)(puVar42 + 2) >> 2 & 1) != 0)) {
      uVar10 = FUN_0017ef30(puVar42[4],pbVar41,uVar12 & 0xffffffff);
      puVar42[4] = uVar10;
    }
    pbVar41 = pbVar41 + uVar12;
    if (bVar6 != 0) {
      uVar34 = (ulong)(uint)((int)uVar34 - (int)uVar12);
      iVar26 = local_70;
      goto switchD_0017cc80_caseD_3f50;
    }
    uVar34 = (uVar34 & 0xffffffff) - uVar12 & 0xffffffff;
  }
  *(undefined4 *)(puVar42 + 1) = 0x3f3c;
switchD_0017cc80_caseD_3f3c:
  uVar13 = (uint)uVar14;
  if ((*(uint *)(puVar42 + 3) >> 9 & 1) != 0) {
    __src = pbVar41;
    if (uVar13 < 0x10) {
      iVar24 = (int)uVar34;
      if (iVar24 == 0) {
LAB_0017e91c:
LAB_0017e924:
        pbVar41 = __src;
        goto LAB_0017ea1c;
      }
      uVar38 = iVar24 - 1;
      __src = pbVar41 + 1;
      uVar39 = ((ulong)*pbVar41 << (uVar14 & 0x3f)) + uVar39;
      uVar12 = uVar14 + 8;
      if (uVar13 < 8) {
        uVar13 = (uint)uVar12;
        if (uVar38 == 0) goto LAB_0017e924;
        uVar38 = iVar24 - 2;
        __src = pbVar41 + 2;
        uVar39 = ((ulong)pbVar41[1] << (uVar12 & 0x3f)) + uVar39;
        uVar12 = uVar14 + 0x10;
      }
      uVar34 = (ulong)uVar38;
      uVar14 = uVar12 & 0xffffffff;
    }
    if (((*(byte *)(puVar42 + 2) >> 2 & 1) != 0) && (uVar39 != *(ushort *)(puVar42 + 4))) {
      pcVar20 = "header crc mismatch";
LAB_0017e598:
      param_1[6] = (long)pcVar20;
      uVar16 = 0x3f51;
      pbVar41 = __src;
LAB_0017e5a0:
      *(undefined4 *)(puVar42 + 1) = uVar16;
LAB_0017e5a4:
      iVar24 = *(int *)(puVar42 + 1);
      goto LAB_0017cc60;
    }
    uVar39 = 0;
    uVar14 = 0;
    pbVar41 = __src;
  }
  if (puVar42[6] != 0) {
    *(uint *)(puVar42[6] + 0x44) = *(uint *)(puVar42 + 3) >> 9 & 1;
    *(undefined4 *)(puVar42[6] + 0x48) = 1;
  }
  lVar35 = FUN_0017ef30(0,0,0);
  puVar42[4] = lVar35;
  param_1[0xc] = lVar35;
  *(undefined4 *)(puVar42 + 1) = 0x3f3f;
  iVar24 = 0x3f3f;
  goto LAB_0017cc60;
LAB_0017e8dc:
  uVar13 = uVar13 + (int)lVar40;
  iVar26 = local_70;
  goto switchD_0017cc80_caseD_3f50;
LAB_0017e6a8:
  uVar13 = uVar13 + (int)uVar12 * 8;
  pbVar41 = pbVar41 + (uVar12 & 0xffffffff);
  uVar34 = 0;
  iVar26 = local_70;
switchD_0017cc80_caseD_3f50:
  param_1[3] = (long)__dest_00;
  *param_1 = (long)pbVar41;
  *(int *)(param_1 + 1) = (int)uVar34;
  *(uint *)(param_1 + 4) = local_68;
  puVar42[10] = uVar39;
  *(uint *)(puVar42 + 0xb) = uVar13;
  uVar13 = *(uint *)(param_1 + 4);
  if ((*(int *)((long)puVar42 + 0x3c) != 0) ||
     (((local_6c != uVar13 && (*(uint *)(puVar42 + 1) < 0x3f51)) &&
      ((param_2 != 4 || (*(uint *)(puVar42 + 1) < 0x3f4e)))))) {
    lVar35 = param_1[7];
    lVar40 = param_1[3];
    __dest = *(void **)(lVar35 + 0x48);
    if (__dest == (void *)0x0) {
      __dest = (void *)(*(code *)param_1[8])
                                 (param_1[10],1 << (ulong)(*(uint *)(lVar35 + 0x38) & 0x1f),1);
      *(void **)(lVar35 + 0x48) = __dest;
      if (__dest == (void *)0x0) {
        *(undefined4 *)(puVar42 + 1) = 0x3f52;
        return -4;
      }
    }
    uVar38 = *(uint *)(lVar35 + 0x3c);
    uVar13 = local_6c - uVar13;
    if (uVar38 == 0) {
      *(undefined8 *)(lVar35 + 0x40) = 0;
      uVar38 = 1 << (ulong)(*(uint *)(lVar35 + 0x38) & 0x1f);
      *(uint *)(lVar35 + 0x3c) = uVar38;
    }
    if (uVar13 < uVar38) {
      uVar38 = uVar38 - *(uint *)(lVar35 + 0x44);
      uVar15 = uVar38;
      if (uVar13 <= uVar38) {
        uVar15 = uVar13;
      }
      memcpy((void *)((long)__dest + (ulong)*(uint *)(lVar35 + 0x44)),
             (void *)(lVar40 - (ulong)uVar13),(ulong)uVar15);
      if (uVar38 < uVar13) {
        uVar13 = uVar13 - uVar15;
        memcpy(*(void **)(lVar35 + 0x48),(void *)(lVar40 - (ulong)uVar13),(ulong)uVar13);
        iVar24 = *(int *)(lVar35 + 0x3c);
        *(uint *)(lVar35 + 0x44) = uVar13;
      }
      else {
        uVar13 = *(int *)(lVar35 + 0x44) + uVar15;
        uVar38 = 0;
        if (uVar13 != *(uint *)(lVar35 + 0x3c)) {
          uVar38 = uVar13;
        }
        *(uint *)(lVar35 + 0x44) = uVar38;
        if (*(uint *)(lVar35 + 0x3c) <= *(uint *)(lVar35 + 0x40)) goto LAB_0017e7cc;
        iVar24 = *(uint *)(lVar35 + 0x40) + uVar15;
      }
    }
    else {
      memcpy(__dest,(void *)(lVar40 - (ulong)uVar38),(ulong)uVar38);
      iVar24 = *(int *)(lVar35 + 0x3c);
      *(undefined4 *)(lVar35 + 0x44) = 0;
    }
    *(int *)(lVar35 + 0x40) = iVar24;
  }
LAB_0017e7cc:
  uVar13 = *(uint *)(param_1 + 1);
  uVar38 = *(uint *)(param_1 + 4);
  uVar39 = (ulong)(local_6c - uVar38);
  param_1[2] = param_1[2] + (ulong)(uVar5 - uVar13);
  param_1[5] = param_1[5] + uVar39;
  puVar42[5] = puVar42[5] + uVar39;
  if (((*(byte *)(puVar42 + 2) >> 2 & 1) != 0) && (local_6c != uVar38)) {
    if (*(int *)(puVar42 + 3) == 0) {
      lVar35 = FUN_0017f300(puVar42[4],param_1[3] - uVar39);
    }
    else {
      lVar35 = FUN_0017ef30();
    }
    puVar42[4] = lVar35;
    param_1[0xc] = lVar35;
  }
  iVar17 = *(int *)(puVar42 + 1);
  iVar24 = 0x100;
  if (iVar17 != 0x3f42 && iVar17 != 0x3f47) {
    iVar24 = 0;
  }
  *(uint *)(param_1 + 0xb) =
       *(int *)(puVar42 + 0xb) + (uint)(*(int *)((long)puVar42 + 0xc) != 0) * 0x40 +
       (uint)(iVar17 == 0x3f3f) * 0x80 + iVar24;
  iVar24 = -5;
  if ((local_6c != uVar38 || uVar5 != uVar13) && param_2 != 4 || iVar26 != 0) {
    iVar24 = iVar26;
  }
  return iVar24;
}

