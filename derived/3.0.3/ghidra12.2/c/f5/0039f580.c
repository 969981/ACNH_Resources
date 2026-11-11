
long * FUN_0039f580(long *param_1)

{
  long lVar1;
  ushort uVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  ulong uVar9;
  long *plVar10;
  
  uVar2 = *(ushort *)((long)param_1 + 0x34);
  lVar5 = 4;
  if ((uVar2 & 8) != 0) {
    lVar5 = 2;
  }
  lVar1 = 1;
  if ((uVar2 & 0x10) == 0) {
    lVar1 = lVar5;
  }
  lVar5 = 0;
  if ((uVar2 & 4) == 0) {
    lVar5 = lVar1;
  }
  lVar1 = param_1[5];
  puVar7 = *(undefined8 **)(lVar1 + 0xa0);
  uVar9 = (ulong)*(byte *)(lVar1 + 0xed);
  uVar6 = *(undefined8 *)(*(long *)(param_1[4] + (&DAT_04beb438)[lVar5]) + 0x68);
  plVar4 = param_1;
  if (uVar9 != 0) {
    plVar10 = (long *)*puVar7;
    puVar8 = (undefined4 *)(*param_1 + 0xc);
    do {
      while (*plVar10 == 0) {
        puVar8[-3] = 0xffffffff;
        lVar5 = plVar10[1];
        if (lVar5 == 0) goto LAB_0039f6f0;
LAB_0039f654:
        uVar3 = FUN_0034e3c0(uVar6,3,2,lVar5 + 2);
        puVar8[-2] = uVar3;
        lVar5 = plVar10[2];
        if (lVar5 != 0) goto LAB_0039f674;
LAB_0039f700:
        puVar8[-1] = 0xffffffff;
        lVar5 = plVar10[3];
        if (lVar5 == 0) goto LAB_0039f710;
LAB_0039f694:
        uVar3 = FUN_0034e3c0(uVar6,5,2,lVar5 + 2);
        *puVar8 = uVar3;
        lVar5 = plVar10[4];
        if (lVar5 != 0) goto LAB_0039f6b4;
LAB_0039f720:
        puVar8[1] = 0xffffffff;
        lVar5 = plVar10[5];
        if (lVar5 != 0) goto LAB_0039f604;
LAB_0039f730:
        plVar4 = (long *)&DAT_ffffffff;
        uVar9 = uVar9 - 1;
        puVar8[2] = 0xffffffff;
        puVar8 = puVar8 + 6;
        plVar10 = plVar10 + 6;
        if (uVar9 == 0) goto LAB_0039f748;
      }
      uVar3 = FUN_0034e3c0(uVar6,0,2,*plVar10 + 2);
      puVar8[-3] = uVar3;
      lVar5 = plVar10[1];
      if (lVar5 != 0) goto LAB_0039f654;
LAB_0039f6f0:
      puVar8[-2] = 0xffffffff;
      lVar5 = plVar10[2];
      if (lVar5 == 0) goto LAB_0039f700;
LAB_0039f674:
      uVar3 = FUN_0034e3c0(uVar6,4,2,lVar5 + 2);
      puVar8[-1] = uVar3;
      lVar5 = plVar10[3];
      if (lVar5 != 0) goto LAB_0039f694;
LAB_0039f710:
      *puVar8 = 0xffffffff;
      lVar5 = plVar10[4];
      if (lVar5 == 0) goto LAB_0039f720;
LAB_0039f6b4:
      uVar3 = FUN_0034e3c0(uVar6,1,2,lVar5 + 2);
      puVar8[1] = uVar3;
      lVar5 = plVar10[5];
      if (lVar5 == 0) goto LAB_0039f730;
LAB_0039f604:
      plVar4 = (long *)FUN_0034e3c0(uVar6,2,2,lVar5 + 2);
      uVar9 = uVar9 - 1;
      puVar8[2] = (int)plVar4;
      puVar8 = puVar8 + 6;
      plVar10 = plVar10 + 6;
    } while (uVar9 != 0);
  }
LAB_0039f748:
  uVar9 = (ulong)*(byte *)(lVar1 + 0xee);
  if (uVar9 != 0) {
    plVar10 = (long *)puVar7[1];
    puVar8 = (undefined4 *)(param_1[1] + 0xc);
    do {
      while (*plVar10 == 0) {
        puVar8[-3] = 0xffffffff;
        lVar5 = plVar10[1];
        if (lVar5 == 0) goto LAB_0039f854;
LAB_0039f7c0:
        uVar3 = FUN_0034e3c0(uVar6,3,5,lVar5 + 2);
        puVar8[-2] = uVar3;
        lVar5 = plVar10[2];
        if (lVar5 != 0) goto LAB_0039f7e0;
LAB_0039f864:
        puVar8[-1] = 0xffffffff;
        lVar5 = plVar10[3];
        if (lVar5 == 0) goto LAB_0039f874;
LAB_0039f800:
        uVar3 = FUN_0034e3c0(uVar6,5,5,lVar5 + 2);
        *puVar8 = uVar3;
        lVar5 = plVar10[4];
        if (lVar5 != 0) goto LAB_0039f820;
LAB_0039f884:
        puVar8[1] = 0xffffffff;
        lVar5 = plVar10[5];
        if (lVar5 != 0) goto LAB_0039f770;
LAB_0039f894:
        plVar4 = (long *)&DAT_ffffffff;
        uVar9 = uVar9 - 1;
        puVar8[2] = 0xffffffff;
        puVar8 = puVar8 + 6;
        plVar10 = plVar10 + 6;
        if (uVar9 == 0) goto LAB_0039f8ac;
      }
      uVar3 = FUN_0034e3c0(uVar6,0,5,*plVar10 + 2);
      puVar8[-3] = uVar3;
      lVar5 = plVar10[1];
      if (lVar5 != 0) goto LAB_0039f7c0;
LAB_0039f854:
      puVar8[-2] = 0xffffffff;
      lVar5 = plVar10[2];
      if (lVar5 == 0) goto LAB_0039f864;
LAB_0039f7e0:
      uVar3 = FUN_0034e3c0(uVar6,4,5,lVar5 + 2);
      puVar8[-1] = uVar3;
      lVar5 = plVar10[3];
      if (lVar5 != 0) goto LAB_0039f800;
LAB_0039f874:
      *puVar8 = 0xffffffff;
      lVar5 = plVar10[4];
      if (lVar5 == 0) goto LAB_0039f884;
LAB_0039f820:
      uVar3 = FUN_0034e3c0(uVar6,1,5,lVar5 + 2);
      puVar8[1] = uVar3;
      lVar5 = plVar10[5];
      if (lVar5 == 0) goto LAB_0039f894;
LAB_0039f770:
      plVar4 = (long *)FUN_0034e3c0(uVar6,2,5,lVar5 + 2);
      uVar9 = uVar9 - 1;
      puVar8[2] = (int)plVar4;
      puVar8 = puVar8 + 6;
      plVar10 = plVar10 + 6;
    } while (uVar9 != 0);
  }
LAB_0039f8ac:
  uVar9 = (ulong)*(byte *)(lVar1 + 0xef);
  if (uVar9 != 0) {
    plVar10 = (long *)puVar7[2];
    puVar8 = (undefined4 *)(param_1[2] + 0xc);
    do {
      while (*plVar10 == 0) {
        puVar8[-3] = 0xffffffff;
        lVar5 = plVar10[1];
        if (lVar5 == 0) goto LAB_0039f9b4;
LAB_0039f920:
        uVar3 = FUN_0034e3c0(uVar6,3,3,lVar5 + 2);
        puVar8[-2] = uVar3;
        lVar5 = plVar10[2];
        if (lVar5 != 0) goto LAB_0039f940;
LAB_0039f9c4:
        puVar8[-1] = 0xffffffff;
        lVar5 = plVar10[3];
        if (lVar5 == 0) goto LAB_0039f9d4;
LAB_0039f960:
        uVar3 = FUN_0034e3c0(uVar6,5,3,lVar5 + 2);
        *puVar8 = uVar3;
        lVar5 = plVar10[4];
        if (lVar5 != 0) goto LAB_0039f980;
LAB_0039f9e4:
        puVar8[1] = 0xffffffff;
        lVar5 = plVar10[5];
        if (lVar5 != 0) goto LAB_0039f8d0;
LAB_0039f9f4:
        plVar4 = (long *)&DAT_ffffffff;
        uVar9 = uVar9 - 1;
        puVar8[2] = 0xffffffff;
        puVar8 = puVar8 + 6;
        plVar10 = plVar10 + 6;
        if (uVar9 == 0) goto LAB_0039fa0c;
      }
      uVar3 = FUN_0034e3c0(uVar6,0,3,*plVar10 + 2);
      puVar8[-3] = uVar3;
      lVar5 = plVar10[1];
      if (lVar5 != 0) goto LAB_0039f920;
LAB_0039f9b4:
      puVar8[-2] = 0xffffffff;
      lVar5 = plVar10[2];
      if (lVar5 == 0) goto LAB_0039f9c4;
LAB_0039f940:
      uVar3 = FUN_0034e3c0(uVar6,4,3,lVar5 + 2);
      puVar8[-1] = uVar3;
      lVar5 = plVar10[3];
      if (lVar5 != 0) goto LAB_0039f960;
LAB_0039f9d4:
      *puVar8 = 0xffffffff;
      lVar5 = plVar10[4];
      if (lVar5 == 0) goto LAB_0039f9e4;
LAB_0039f980:
      uVar3 = FUN_0034e3c0(uVar6,1,3,lVar5 + 2);
      puVar8[1] = uVar3;
      lVar5 = plVar10[5];
      if (lVar5 == 0) goto LAB_0039f9f4;
LAB_0039f8d0:
      plVar4 = (long *)FUN_0034e3c0(uVar6,2,3,lVar5 + 2);
      uVar9 = uVar9 - 1;
      puVar8[2] = (int)plVar4;
      puVar8 = puVar8 + 6;
      plVar10 = plVar10 + 6;
    } while (uVar9 != 0);
  }
LAB_0039fa0c:
  uVar9 = (ulong)*(byte *)(lVar1 + 0xf4);
  if (uVar9 != 0) {
    plVar10 = (long *)puVar7[3];
    puVar8 = (undefined4 *)(param_1[3] + 0xc);
    do {
      while (*plVar10 != 0) {
        uVar3 = FUN_0034e3c0(uVar6,0,4,*plVar10 + 2);
        puVar8[-3] = uVar3;
        lVar5 = plVar10[1];
        if (lVar5 != 0) goto LAB_0039fa80;
LAB_0039fb14:
        puVar8[-2] = 0xffffffff;
        lVar5 = plVar10[2];
        if (lVar5 == 0) goto LAB_0039fb24;
LAB_0039faa0:
        uVar3 = FUN_0034e3c0(uVar6,4,4,lVar5 + 2);
        puVar8[-1] = uVar3;
        lVar5 = plVar10[3];
        if (lVar5 != 0) goto LAB_0039fac0;
LAB_0039fb34:
        *puVar8 = 0xffffffff;
        lVar5 = plVar10[4];
        if (lVar5 == 0) goto LAB_0039fb44;
LAB_0039fae0:
        uVar3 = FUN_0034e3c0(uVar6,1,4,lVar5 + 2);
        puVar8[1] = uVar3;
        lVar5 = plVar10[5];
        if (lVar5 == 0) goto LAB_0039fb54;
LAB_0039fa30:
        plVar4 = (long *)FUN_0034e3c0(uVar6,2,4,lVar5 + 2);
        uVar9 = uVar9 - 1;
        puVar8[2] = (int)plVar4;
        puVar8 = puVar8 + 6;
        plVar10 = plVar10 + 6;
        if (uVar9 == 0) {
          return plVar4;
        }
      }
      puVar8[-3] = 0xffffffff;
      lVar5 = plVar10[1];
      if (lVar5 == 0) goto LAB_0039fb14;
LAB_0039fa80:
      uVar3 = FUN_0034e3c0(uVar6,3,4,lVar5 + 2);
      puVar8[-2] = uVar3;
      lVar5 = plVar10[2];
      if (lVar5 != 0) goto LAB_0039faa0;
LAB_0039fb24:
      puVar8[-1] = 0xffffffff;
      lVar5 = plVar10[3];
      if (lVar5 == 0) goto LAB_0039fb34;
LAB_0039fac0:
      uVar3 = FUN_0034e3c0(uVar6,5,4,lVar5 + 2);
      *puVar8 = uVar3;
      lVar5 = plVar10[4];
      if (lVar5 != 0) goto LAB_0039fae0;
LAB_0039fb44:
      puVar8[1] = 0xffffffff;
      lVar5 = plVar10[5];
      if (lVar5 != 0) goto LAB_0039fa30;
LAB_0039fb54:
      plVar4 = (long *)&DAT_ffffffff;
      uVar9 = uVar9 - 1;
      puVar8[2] = 0xffffffff;
      puVar8 = puVar8 + 6;
      plVar10 = plVar10 + 6;
    } while (uVar9 != 0);
  }
  return plVar4;
}

