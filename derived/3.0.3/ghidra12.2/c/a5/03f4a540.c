
/* WARNING: Type propagation algorithm not settling */

void FUN_03f4a540(uint *param_1,long param_2)

{
  void *__src;
  int *piVar1;
  long lVar2;
  undefined4 *puVar3;
  float *pfVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined4 uVar20;
  uint uVar21;
  undefined1 auVar22 [16];
  bool bVar23;
  uint3 uVar24;
  uint3 uVar25;
  bool bVar26;
  bool bVar27;
  long lVar28;
  long lVar29;
  ulong uVar30;
  long lVar31;
  long lVar32;
  uint uVar33;
  long lVar34;
  ulong uVar35;
  ulong uVar36;
  long lVar37;
  int iVar38;
  int iVar39;
  long lVar40;
  long lVar41;
  uint *puVar42;
  float *pfVar43;
  undefined1 uVar44;
  short sVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined4 uVar49;
  short sVar50;
  short sVar51;
  short sVar52;
  short sVar53;
  short sVar54;
  short sVar55;
  short sVar56;
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  undefined1 uVar62;
  undefined1 uVar63;
  undefined1 uVar64;
  undefined1 uVar65;
  uint uVar66;
  uint uVar67;
  uint uVar68;
  uint uVar69;
  uint uVar70;
  float fVar71;
  char cVar73;
  char cVar74;
  float fVar72;
  char cVar75;
  char cVar76;
  char cVar77;
  char cVar78;
  char cVar79;
  float fVar80;
  undefined8 uVar81;
  float fVar82;
  byte bVar83;
  byte bVar84;
  byte bVar85;
  byte bVar86;
  byte bVar87;
  byte bVar88;
  byte bVar89;
  byte bVar90;
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  float fVar93;
  float fVar94;
  float fVar95;
  float fVar96;
  float fVar97;
  uint uVar98;
  float fVar99;
  float fVar100;
  float fVar101;
  undefined8 uVar102;
  byte bVar106;
  byte bVar107;
  byte bVar108;
  byte bVar109;
  byte bVar110;
  byte bVar111;
  byte bVar112;
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  float local_111c [65];
  undefined8 uStack_1018;
  undefined4 auStack_1010 [14];
  float local_fd8 [648];
  undefined1 local_5b8 [8];
  float afStack_5b0 [2];
  undefined8 auStack_5a8 [2];
  undefined4 uStack_598;
  undefined1 local_594 [36];
  undefined1 auStack_570 [36];
  undefined1 auStack_54c [36];
  undefined1 auStack_528 [36];
  undefined1 auStack_504 [36];
  undefined1 auStack_4e0 [36];
  undefined1 auStack_4bc [36];
  undefined1 auStack_498 [1024];
  
  puVar42 = param_1 + 0x11;
  memset(puVar42,0,0xa20);
  __src = (void *)(param_2 + (long)(int)(param_1[0xe] * param_1[0xc]) * 4);
  if (0 < (int)param_1[0xd]) {
    iVar39 = 0;
    do {
      FUN_03f4b820(param_1,__src,iVar39);
      iVar39 = iVar39 + 1;
    } while (iVar39 < (int)param_1[0xd]);
  }
  lVar32 = 0;
  lVar34 = 0;
  do {
    lVar37 = 9;
    lVar40 = lVar32;
    do {
      lVar37 = lVar37 + -1;
      fVar46 = *(float *)((long)param_1 + lVar40 + 0x50);
      *(float *)((long)param_1 + lVar40 + 0x44) = *(float *)((long)param_1 + lVar40 + 0x44) / fVar46
      ;
      *(float *)((long)param_1 + lVar40 + 0x48) = *(float *)((long)param_1 + lVar40 + 0x48) / fVar46
      ;
      *(float *)((long)param_1 + lVar40 + 0x4c) = *(float *)((long)param_1 + lVar40 + 0x4c) / fVar46
      ;
      *(float *)((long)param_1 + lVar40 + 0x50) = fVar46 / fVar46;
      fVar46 = *(float *)((long)param_1 + lVar40 + 0x560);
      *(float *)((long)param_1 + lVar40 + 0x554) =
           *(float *)((long)param_1 + lVar40 + 0x554) / fVar46;
      *(float *)((long)param_1 + lVar40 + 0x558) =
           *(float *)((long)param_1 + lVar40 + 0x558) / fVar46;
      *(float *)((long)param_1 + lVar40 + 0x55c) =
           *(float *)((long)param_1 + lVar40 + 0x55c) / fVar46;
      *(float *)((long)param_1 + lVar40 + 0x560) = fVar46 / fVar46;
      lVar40 = lVar40 + 0x10;
    } while (lVar37 != 0);
    lVar34 = lVar34 + 1;
    lVar32 = lVar32 + 0x90;
  } while (lVar34 != 9);
  fVar46 = (float)param_1[1];
  fVar48 = (float)param_1[2];
  fVar47 = (float)param_1[0x524];
  uVar33 = *param_1;
  iVar39 = 0;
  lVar32 = -0x798;
  lVar34 = 0xf80;
  param_1[0xccc] = 0;
  param_1[0xccd] = 0;
  param_1[0xcce] = 0;
  param_1[0xccf] = 0;
  param_1[0xcd0] = 0;
  param_1[0xcd1] = 0;
  param_1[0xcd2] = 0;
  param_1[0xcd3] = 0;
  param_1[0xcd4] = 0;
  param_1[0xcd5] = 0;
  param_1[0xcd6] = 0;
  param_1[0xcd7] = 0;
  lVar37 = 0;
  lVar40 = 0;
  do {
    pfVar43 = (float *)((long)param_1 + lVar34);
    fVar97 = pfVar43[0x147];
    fVar99 = pfVar43[0x148];
    fVar94 = (float)param_1[lVar40 + 0x155];
    fVar95 = (float)param_1[lVar40 + 0x156];
    fVar71 = (float)param_1[lVar40 + 0x157];
    fVar96 = (float)param_1[lVar40 + 0x158];
    fVar100 = pfVar43[0x149];
    fVar101 = pfVar43[0x14a];
    fVar72 = (float)param_1[lVar40 + 0x299];
    fVar80 = (float)param_1[lVar40 + 0x29a];
    fVar82 = (float)param_1[lVar40 + 0x29b];
    fVar93 = (float)param_1[lVar40 + 0x29c];
    uVar98 = *(uint *)((long)param_1 + lVar37 + 0x23e4);
    if (uVar98 == 0) {
      *(undefined4 *)((long)param_1 + lVar40 + 0x19ac) = 0xbf800000;
      *(uint *)((long)param_1 + lVar37 + 0x23e4) = uVar33;
      uVar98 = uVar33;
    }
    piVar1 = (int *)((long)param_1 + lVar32 + 0x2b68);
    fVar71 = fVar94 * 0.21258622 + fVar95 * 0.7151703 + fVar71 * 0.0722005 + fVar96 * 0.0;
    fVar94 = (fVar71 - (fVar97 * 0.21258622 + fVar99 * 0.7151703 + fVar100 * 0.0722005 +
                       fVar101 * 0.0)) * *(float *)((long)param_1 + lVar40 + 0x19ac);
    if (fVar94 <= 0.0) {
      if (fVar94 < fVar46 * -255.0) {
        *(undefined4 *)((long)param_1 + lVar32 + 0x2b78) =
             *(undefined4 *)((long)param_1 + lVar32 + 0x2b7c);
        *(undefined8 *)piVar1 = *(undefined8 *)((long)param_1 + lVar32 + 0x2b6c);
        *(undefined8 *)((long)param_1 + lVar32 + 0x2b70) =
             *(undefined8 *)((long)param_1 + lVar32 + 0x2b74);
        *(uint *)((long)param_1 + lVar37 + 0x23e4) = uVar33;
        pfVar43[0x147] = (float)param_1[lVar40 + 0x155];
        pfVar43[0x148] = (float)param_1[lVar40 + 0x156];
        pfVar43[0x149] = (float)param_1[lVar40 + 0x157];
        pfVar43[0x14a] = (float)param_1[lVar40 + 0x158];
        *(float *)((long)param_1 + lVar40 + 0x19ac) = -*(float *)((long)param_1 + lVar40 + 0x19ac);
        uVar98 = *(uint *)((long)param_1 + lVar37 + 0x23e4);
      }
    }
    else {
      pfVar43[0x147] = (float)param_1[lVar40 + 0x155];
      pfVar43[0x148] = (float)param_1[lVar40 + 0x156];
      pfVar43[0x149] = (float)param_1[lVar40 + 0x157];
      pfVar43[0x14a] = (float)param_1[lVar40 + 0x158];
      *(uint *)((long)param_1 + lVar37 + 0x23e4) = uVar33;
      uVar98 = uVar33;
    }
    iVar38 = *piVar1;
    iVar17 = *(int *)((long)param_1 + lVar32 + 0x2b6c);
    fVar94 = *pfVar43;
    fVar95 = pfVar43[1];
    uVar66 = *(uint *)((long)param_1 + lVar37 + 0x23d8);
    if (iVar38 < 2) {
      iVar38 = 1;
    }
    uVar67 = *(uint *)((long)param_1 + lVar32 + 0x2b74);
    if (iVar17 < 2) {
      iVar17 = 1;
    }
    uVar68 = *(uint *)((long)param_1 + lVar32 + 0x2b78);
    iVar38 = iVar38 + -1;
    if ((int)uVar66 < 2) {
      uVar66 = 1;
    }
    iVar18 = *(int *)((long)param_1 + lVar40 + 0x2288);
    fVar72 = fVar72 * 0.21258622 + fVar80 * 0.7151703 + fVar82 * 0.0722005 + fVar93 * 0.0;
    if ((int)uVar67 < 2) {
      uVar67 = 1;
    }
    fVar80 = pfVar43[2];
    fVar82 = pfVar43[3];
    *piVar1 = iVar38;
    if ((int)uVar68 < 2) {
      uVar68 = 1;
    }
    if ((int)uVar98 < 2) {
      uVar98 = 1;
    }
    *(int *)((long)param_1 + lVar32 + 0x2b6c) = iVar17 + -1;
    *(uint *)((long)param_1 + lVar37 + 0x23d8) = uVar66 - 1;
    *(uint *)((long)param_1 + lVar32 + 0x2b74) = uVar67 - 1;
    *(uint *)((long)param_1 + lVar32 + 0x2b78) = uVar68 - 1;
    *(uint *)((long)param_1 + lVar37 + 0x23e4) = uVar98 - 1;
    iVar19 = *(int *)((long)param_1 + lVar40 + 0x2288);
    iVar8 = iVar19;
    if (iVar17 == 0 || iVar17 + -1 == 0) {
      iVar8 = 0;
    }
    iVar17 = iVar19;
    if (uVar66 < 2) {
      iVar17 = 0;
    }
    iVar9 = iVar19;
    if (uVar67 < 2) {
      iVar9 = 0;
    }
    iVar10 = iVar19;
    if (uVar68 < 2) {
      iVar10 = 0;
    }
    iVar11 = iVar19;
    if (uVar98 < 2) {
      iVar11 = 0;
    }
    fVar93 = fVar47;
    if (fVar72 <= fVar47) {
      fVar93 = fVar72;
    }
    iVar7 = -iVar18;
    if (ABS(fVar71 - fVar93) <
        ABS((fVar94 * 0.21258622 + fVar95 * 0.7151703 + fVar80 * 0.0722005 + fVar82 * 0.0) - fVar93)
       ) {
      iVar7 = iVar18;
    }
    if (0 < iVar38) {
      iVar38 = 1;
    }
    param_1[0xccc] = param_1[0xccc] + iVar19 * iVar38;
    param_1[0xccd] = param_1[0xccd] + iVar8;
    param_1[0xcce] = param_1[0xcce] + iVar17;
    param_1[0xccf] = param_1[0xccf] + iVar9;
    param_1[0xcd0] = param_1[0xcd0] + iVar10;
    param_1[0xcd1] = param_1[0xcd1] + iVar11;
    fVar72 = (float)param_1[lVar40 + 0x156];
    fVar80 = (float)param_1[lVar40 + 0x157];
    fVar82 = (float)param_1[lVar40 + 0x158];
    fVar93 = (float)param_1[lVar40 + 0x155] * 1.6 + fVar72 * -1.6 + fVar80 * -1.6 + fVar82 * 0.0;
    fVar71 = pfVar43[0x2dc] * 1.6 + pfVar43[0x2dd] * -1.6 + pfVar43[0x2de] * -1.6 +
             pfVar43[0x2df] * 0.0;
    if (fVar93 <= 0.0) {
      fVar93 = 0.0;
    }
    if (fVar71 <= 0.0) {
      fVar71 = 0.0;
    }
    fVar71 = *(float *)((long)param_1 + lVar40 + 0x2000) * (fVar93 - fVar71);
    if (0.0 < fVar71) {
      pfVar43[0x2dc] = (float)param_1[lVar40 + 0x155];
      pfVar43[0x2dd] = fVar72;
      pfVar43[0x2de] = fVar80;
      pfVar43[0x2df] = fVar82;
    }
    else if (fVar71 < fVar48 * -255.0) {
      *(undefined8 *)((long)param_1 + lVar37 + 0x2b68) =
           *(undefined8 *)((long)param_1 + lVar37 + 0x2b6c);
      *(undefined8 *)((long)param_1 + lVar37 + 0x2b70) =
           *(undefined8 *)((long)param_1 + lVar37 + 0x2b74);
      uVar20 = *(undefined4 *)((long)param_1 + lVar37 + 0x2b7c);
      *(uint *)((long)param_1 + lVar37 + 0x2b7c) = uVar33;
      *(undefined4 *)((long)param_1 + lVar37 + 0x2b78) = uVar20;
      pfVar43[0x2dc] = (float)param_1[lVar40 + 0x155];
      pfVar43[0x2dd] = (float)param_1[lVar40 + 0x156];
      pfVar43[0x2de] = (float)param_1[lVar40 + 0x157];
      pfVar43[0x2df] = (float)param_1[lVar40 + 0x158];
      *(float *)((long)param_1 + lVar40 + 0x2000) = -*(float *)((long)param_1 + lVar40 + 0x2000);
    }
    iVar38 = *(int *)((long)param_1 + lVar37 + 0x2b68);
    iVar39 = iVar7 + iVar39;
    lVar41 = lVar40 + 4;
    iVar17 = *(int *)((long)param_1 + lVar37 + 0x2b6c);
    lVar34 = lVar34 + 0x10;
    uVar98 = *(uint *)((long)param_1 + lVar37 + 0x2b70);
    lVar32 = lVar32 + 0x18;
    uVar66 = *(uint *)((long)param_1 + lVar37 + 0x2b74);
    uVar67 = *(uint *)((long)param_1 + lVar37 + 0x2b78);
    if (iVar38 < 2) {
      iVar38 = 1;
    }
    uVar68 = *(uint *)((long)param_1 + lVar37 + 0x2b7c);
    if (iVar17 < 2) {
      iVar17 = 1;
    }
    iVar38 = iVar38 + -1;
    if ((int)uVar98 < 2) {
      uVar98 = 1;
    }
    *(int *)((long)param_1 + lVar37 + 0x2b68) = iVar38;
    if ((int)uVar66 < 2) {
      uVar66 = 1;
    }
    *(uint *)((long)param_1 + lVar37 + 0x2b70) = uVar98 - 1;
    if ((int)uVar67 < 2) {
      uVar67 = 1;
    }
    *(uint *)((long)param_1 + lVar37 + 0x2b74) = uVar66 - 1;
    if ((int)uVar68 < 2) {
      uVar68 = 1;
    }
    *(uint *)((long)param_1 + lVar37 + 0x2b78) = uVar67 - 1;
    *(int *)((long)param_1 + lVar37 + 0x2b6c) = iVar17 + -1;
    *(uint *)((long)param_1 + lVar37 + 0x2b7c) = uVar68 - 1;
    iVar8 = *(int *)((long)param_1 + lVar40 + 0x2288);
    uVar12 = param_1[0xcd3];
    uVar13 = param_1[0xcd4];
    uVar14 = param_1[0xcd5];
    uVar15 = param_1[0xcd7];
    iVar18 = iVar8;
    if (iVar17 == 0 || iVar17 + -1 == 0) {
      iVar18 = 0;
    }
    uVar16 = param_1[0xcd6];
    iVar17 = iVar8;
    if (uVar98 < 2) {
      iVar17 = 0;
    }
    iVar19 = iVar8;
    if (uVar66 < 2) {
      iVar19 = 0;
    }
    param_1[0xcd3] = uVar12 + iVar18;
    iVar9 = iVar8;
    if (uVar67 < 2) {
      iVar9 = 0;
    }
    param_1[0xcd4] = uVar13 + iVar17;
    iVar10 = iVar8;
    if (uVar68 < 2) {
      iVar10 = 0;
    }
    param_1[0xcd5] = uVar14 + iVar19;
    if (0 < iVar38) {
      iVar38 = 1;
    }
    param_1[0xcd6] = uVar16 + iVar9;
    uVar98 = param_1[0xcd2] + iVar8 * iVar38;
    param_1[0xcd7] = uVar15 + iVar10;
    param_1[0xcd2] = uVar98;
    lVar37 = lVar37 + 0x18;
    lVar40 = lVar41;
  } while (lVar41 != 0x144);
  uVar66 = param_1[0xccd];
  fVar46 = (float)(int)uVar98;
  fVar48 = (float)param_1[3] * (float)(int)param_1[0x8f3];
  uVar98 = param_1[0xccc];
  uVar67 = param_1[0xcce];
  uVar68 = param_1[0xccf];
  uVar69 = param_1[0xcd0];
  uVar70 = param_1[0xcd1];
  if (((char)param_1[0xcd8] == '\0') &&
     ((0 < iVar39 || (uVar21 = param_1[0x525], param_1[0x525] = uVar21 - 1, (int)uVar21 < 0)))) {
    lVar34 = 0;
    do {
      lVar32 = lVar34 + 0x10;
      *(undefined8 *)((long)param_1 + lVar34 + 0xf84) =
           *(undefined8 *)((long)param_1 + lVar34 + 0x558);
      *(undefined4 *)((long)param_1 + lVar34 + 0xf80) =
           *(undefined4 *)((long)param_1 + lVar34 + 0x554);
      *(undefined4 *)((long)param_1 + lVar34 + 0xf8c) =
           *(undefined4 *)((long)param_1 + lVar34 + 0x560);
      lVar34 = lVar32;
    } while (lVar32 != 0x510);
    param_1[0x525] = (int)((float)(int)uVar33 + (float)(int)uVar33);
  }
  param_1[0xcc0] = (uint)(fVar48 < (float)(int)uVar98);
  param_1[0xcc1] = (uint)(fVar48 < (float)(int)uVar66);
  param_1[0xcc2] = (uint)(fVar48 < (float)(int)uVar67);
  param_1[0xcc3] = (uint)(fVar48 < (float)(int)uVar68);
  param_1[0xcc4] = (uint)(fVar48 < (float)(int)uVar69);
  param_1[0xcc5] = (uint)(fVar48 < (float)(int)uVar70);
  param_1[0xcc6] = (uint)(fVar48 < fVar46);
  param_1[0xcc7] = (uint)(fVar48 < (float)(int)(uVar12 + iVar18));
  param_1[0xcc8] = (uint)(fVar48 < (float)(int)(uVar13 + iVar17));
  param_1[0xcc9] = (uint)(fVar48 < (float)(int)(uVar14 + iVar19));
  param_1[0xcca] = (uint)(fVar48 < (float)(int)(uVar16 + iVar9));
  param_1[0xccb] = (uint)(fVar48 < (float)(int)(uVar15 + iVar10));
  if (fVar46 <= fVar48) {
    bVar26 = *(char *)((long)param_1 + 0x3362) != '\0';
    uVar66 = param_1[0xcd9];
    bVar23 = bVar26 && (int)uVar66 < (int)param_1[0x526];
    uVar33 = 0;
    if (bVar26 && (int)uVar66 < (int)param_1[0x526]) {
      uVar33 = uVar66 + 1;
    }
  }
  else {
    uVar33 = param_1[0xcd9] + 1;
    bVar23 = true;
  }
  *(bool *)((long)param_1 + 0x3362) = bVar23;
  param_1[0xcd9] = uVar33;
  if ((float)(int)uVar98 <= fVar48) {
    bVar27 = *(char *)((long)param_1 + 0x3361) != '\0';
    uVar98 = param_1[0xcda];
    bVar26 = bVar27 && (int)uVar98 < (int)param_1[0x526];
    uVar33 = 0;
    if (bVar27 && (int)uVar98 < (int)param_1[0x526]) {
      uVar33 = uVar98 + 1;
    }
  }
  else {
    uVar33 = param_1[0xcda] + 1;
    bVar26 = true;
  }
  fVar46 = 0.0;
  *(bool *)((long)param_1 + 0x3361) = bVar26;
  param_1[0xcda] = uVar33;
  *(char *)(param_1 + 0xcd8) = bVar26 | bVar23;
  if (!(bool)(bVar26 | bVar23)) {
    fVar46 = 1.0 / (float)(int)*param_1;
  }
  fVar48 = 1.0 - fVar46;
  memset(local_fd8 + 0x144,0,0x510);
  lVar34 = 0;
  do {
    fVar47 = *(float *)((long)param_1 + lVar34 + 0xa68);
    fVar71 = *(float *)((long)param_1 + lVar34 + 0xa6c);
    fVar72 = *(float *)((long)param_1 + lVar34 + 0xa70);
    lVar32 = lVar34 + 0x10;
    *(float *)((long)local_fd8 + lVar34 + 0x510) =
         fVar48 * *(float *)((long)param_1 + lVar34 + 0xa64);
    *(float *)((long)local_fd8 + lVar34 + 0x514) = fVar48 * fVar47;
    *(float *)((long)local_fd8 + lVar34 + 0x518) = fVar48 * fVar71;
    *(float *)((long)local_fd8 + lVar34 + 0x51c) = fVar48 * fVar72;
    lVar34 = lVar32;
  } while (lVar32 != 0x510);
  memset(local_fd8,0,0x510);
  lVar34 = 0;
  do {
    fVar48 = *(float *)((long)param_1 + lVar34 + 0x558);
    fVar47 = *(float *)((long)param_1 + lVar34 + 0x55c);
    fVar71 = *(float *)((long)param_1 + lVar34 + 0x560);
    lVar32 = lVar34 + 0x10;
    *(float *)((long)local_fd8 + lVar34) = fVar46 * *(float *)((long)param_1 + lVar34 + 0x554);
    *(float *)((long)local_fd8 + lVar34 + 4) = fVar46 * fVar48;
    *(float *)((long)local_fd8 + lVar34 + 8) = fVar46 * fVar47;
    *(float *)((long)local_fd8 + lVar34 + 0xc) = fVar46 * fVar71;
    lVar34 = lVar32;
  } while (lVar32 != 0x510);
  memset(local_5b8,0,0x510);
  lVar34 = 0;
  do {
    fVar46 = *(float *)((long)local_fd8 + lVar34 + 0x514);
    fVar47 = *(float *)((long)local_fd8 + lVar34 + 4);
    fVar72 = *(float *)((long)local_fd8 + lVar34 + 0x518);
    fVar80 = *(float *)((long)local_fd8 + lVar34 + 0x51c);
    lVar32 = lVar34 + 0x10;
    fVar48 = *(float *)((long)local_fd8 + lVar34 + 8);
    fVar71 = *(float *)((long)local_fd8 + lVar34 + 0xc);
    *(float *)((long)local_5b8 + lVar34) =
         *(float *)((long)local_fd8 + lVar34 + 0x510) + *(float *)((long)local_fd8 + lVar34);
    *(float *)((long)local_5b8 + lVar34 + 4U) = fVar46 + fVar47;
    *(float *)((long)afStack_5b0 + lVar34) = fVar72 + fVar48;
    *(float *)((long)afStack_5b0 + lVar34 + 4U) = fVar80 + fVar71;
    lVar34 = lVar32;
  } while (lVar32 != 0x510);
  lVar34 = 0xa64;
  do {
    lVar32 = lVar34 + 0x104;
    uVar49 = *(undefined4 *)((long)local_111c + lVar34 + 0x100);
    uVar20 = *(undefined4 *)((long)auStack_1010 + lVar34);
    puVar3 = (undefined4 *)((long)param_1 + lVar34);
    lVar34 = lVar34 + 0x10;
    *(undefined8 *)(puVar3 + 1) = *(undefined8 *)((long)local_111c + lVar32);
    *puVar3 = uVar49;
    puVar3[3] = uVar20;
  } while (lVar34 != 0xf74);
  uVar33 = param_1[10];
  if (uVar33 == 3) {
    uVar44 = 0x80;
    uVar59 = 0x3f;
    if (*(char *)((long)param_1 + 0x3362) == '\0') {
      uVar44 = 0;
      uVar59 = 0;
    }
    iVar39 = 0;
    if ((char)param_1[4] != '\0') {
      iVar39 = (uint)CONCAT11(uVar59,uVar44) << 0x10;
    }
    FUN_03f470e0(iVar39,0,__src,param_1[0xf] * param_1[0xc]);
  }
  else if (uVar33 == 2) {
    uVar44 = 0x80;
    uVar59 = 0x3f;
    if (*(char *)((long)param_1 + 0x3362) == '\0') {
      uVar44 = 0;
      uVar59 = 0;
    }
    fVar46 = 0.0;
    if ((char)param_1[4] != '\0') {
      fVar46 = (float)((uint)CONCAT11(uVar59,uVar44) << 0x10) * 0.53252053 * 256.0;
    }
    if (7 < (int)(param_1[0xf] * param_1[0xc])) {
      uVar30 = 0;
      uVar35 = (ulong)(param_1[0xf] * param_1[0xc] >> 3);
      uVar44 = (undefined1)(int)fVar46;
      do {
        uVar36 = uVar30 & 0xffffffe0;
        uVar35 = uVar35 - 1;
        uVar30 = uVar30 + 0x20;
        puVar5 = (undefined1 *)((long)__src + uVar36);
        auVar105 = NEON_umull(CONCAT17(puVar5[0x1c],
                                       CONCAT16(puVar5[0x18],
                                                CONCAT15(puVar5[0x14],
                                                         CONCAT14(puVar5[0x10],
                                                                  CONCAT13(puVar5[0xc],
                                                                           CONCAT12(puVar5[8],
                                                                                    CONCAT11(puVar5[
                                                  4],*puVar5))))))),
                              CONCAT17(uVar44,CONCAT16(uVar44,CONCAT15(uVar44,CONCAT14(uVar44,
                                                  CONCAT13(uVar44,CONCAT12(uVar44,CONCAT11(uVar44,
                                                  uVar44))))))),1);
        uVar81 = NEON_umax(CONCAT17(puVar5[0x1d],
                                    CONCAT16(puVar5[0x19],
                                             CONCAT15(puVar5[0x15],
                                                      CONCAT14(puVar5[0x11],
                                                               CONCAT13(puVar5[0xd],
                                                                        CONCAT12(puVar5[9],
                                                                                 CONCAT11(puVar5[5],
                                                                                          puVar5[1])
                                                                                )))))),
                           CONCAT17(puVar5[0x1e],
                                    CONCAT16(puVar5[0x1a],
                                             CONCAT15(puVar5[0x16],
                                                      CONCAT14(puVar5[0x12],
                                                               CONCAT13(puVar5[0xe],
                                                                        CONCAT12(puVar5[10],
                                                                                 CONCAT11(puVar5[6],
                                                                                          puVar5[2])
                                                                                )))))),1);
        uVar81 = NEON_uqsub(CONCAT17(auVar105[0xf],
                                     CONCAT16(auVar105[0xd],
                                              CONCAT15(auVar105[0xb],
                                                       CONCAT14(auVar105[9],
                                                                CONCAT13(auVar105[7],
                                                                         CONCAT12(auVar105[5],
                                                                                  CONCAT11(auVar105[
                                                  3],auVar105[1]))))))),uVar81,1);
        cVar73 = (char)((ulong)uVar81 >> 8);
        cVar74 = (char)((ulong)uVar81 >> 0x10);
        cVar75 = (char)((ulong)uVar81 >> 0x18);
        cVar76 = (char)((ulong)uVar81 >> 0x20);
        cVar77 = (char)((ulong)uVar81 >> 0x28);
        cVar78 = (char)((ulong)uVar81 >> 0x30);
        cVar79 = (char)((ulong)uVar81 >> 0x38);
        *puVar5 = *puVar5;
        puVar5[1] = (char)uVar81 + puVar5[1];
        puVar5[2] = (char)uVar81 + puVar5[2];
        puVar5[3] = puVar5[3];
        puVar5[4] = puVar5[4];
        puVar5[5] = cVar73 + puVar5[5];
        puVar5[6] = cVar73 + puVar5[6];
        puVar5[7] = puVar5[7];
        puVar5[8] = puVar5[8];
        puVar5[9] = cVar74 + puVar5[9];
        puVar5[10] = cVar74 + puVar5[10];
        puVar5[0xb] = puVar5[0xb];
        puVar5[0xc] = puVar5[0xc];
        puVar5[0xd] = cVar75 + puVar5[0xd];
        puVar5[0xe] = cVar75 + puVar5[0xe];
        puVar5[0xf] = puVar5[0xf];
        puVar5[0x10] = puVar5[0x10];
        puVar5[0x11] = cVar76 + puVar5[0x11];
        puVar5[0x12] = cVar76 + puVar5[0x12];
        puVar5[0x13] = puVar5[0x13];
        puVar5[0x14] = puVar5[0x14];
        puVar5[0x15] = cVar77 + puVar5[0x15];
        puVar5[0x16] = cVar77 + puVar5[0x16];
        puVar5[0x17] = puVar5[0x17];
        puVar5[0x18] = puVar5[0x18];
        puVar5[0x19] = cVar78 + puVar5[0x19];
        puVar5[0x1a] = cVar78 + puVar5[0x1a];
        puVar5[0x1b] = puVar5[0x1b];
        puVar5[0x1c] = puVar5[0x1c];
        puVar5[0x1d] = cVar79 + puVar5[0x1d];
        puVar5[0x1e] = cVar79 + puVar5[0x1e];
        puVar5[0x1f] = puVar5[0x1f];
      } while (uVar35 != 0);
    }
  }
  else if (uVar33 == 1) {
    FUN_03f471d0(__src,param_1[0xf] * param_1[0xc]);
  }
  memset(puVar42,0,0xa20);
  if (0 < (int)param_1[0xd]) {
    iVar39 = 0;
    do {
      FUN_03f4b820(param_1,__src,iVar39);
      iVar39 = iVar39 + 1;
    } while (iVar39 < (int)param_1[0xd]);
  }
  memset(local_5b8,0,0x144);
  if (param_1[6] == 2) {
    FUN_03f4bad0(param_1,puVar42,local_5b8,param_1 + 0x3e0);
    FUN_03f4bad0(param_1,param_1 + 0x35,local_594,param_1 + 0x404);
    FUN_03f4bad0(param_1,param_1 + 0x59,auStack_570,param_1 + 0x428);
    FUN_03f4bad0(param_1,param_1 + 0x7d,auStack_54c,param_1 + 0x44c);
    FUN_03f4bad0(param_1,param_1 + 0xa1,auStack_528,param_1 + 0x470);
    FUN_03f4bad0(param_1,param_1 + 0xc5,auStack_504,param_1 + 0x494);
    FUN_03f4bad0(param_1,param_1 + 0xe9,auStack_4e0,param_1 + 0x4b8);
    FUN_03f4bad0(param_1,param_1 + 0x10d,auStack_4bc,param_1 + 0x4dc);
    FUN_03f4bad0(param_1,param_1 + 0x131,auStack_498,param_1 + 0x500);
  }
  else if (param_1[6] == 1) {
    lVar34 = 0;
    pfVar43 = (float *)local_5b8;
    puVar42 = param_1;
    do {
      if (*(char *)((long)param_1 + 0x3361) == '\0') {
        lVar32 = lVar34 * 0x24;
        *(undefined1 **)((long)local_5b8 + lVar34 * 9 * 4) = &DAT_3f8000003f800000;
        *(undefined1 **)((long)afStack_5b0 + lVar32) = &DAT_3f8000003f800000;
        *(undefined1 **)((long)auStack_5a8 + lVar32) = &DAT_3f8000003f800000;
        *(undefined1 **)((long)auStack_5a8 + lVar32 + 8) = &DAT_3f8000003f800000;
        *(undefined4 *)((long)auStack_5a8 + lVar32 + 0x10) = 0x3f800000;
      }
      else {
        lVar32 = 0;
        lVar37 = 0xf80;
        do {
          fVar46 = (float)puVar42[lVar32 + 0x14];
          puVar42[lVar32 + 0x11] = (uint)((float)puVar42[lVar32 + 0x11] / fVar46);
          puVar42[lVar32 + 0x12] = (uint)((float)puVar42[lVar32 + 0x12] / fVar46);
          fVar71 = (float)puVar42[lVar32 + 0x157];
          fVar48 = (float)puVar42[lVar32 + 0x156];
          puVar42[lVar32 + 0x13] = (uint)((float)puVar42[lVar32 + 0x13] / fVar46);
          puVar42[lVar32 + 0x14] = (uint)(fVar46 / fVar46);
          fVar47 = (float)puVar42[lVar32 + 0x158];
          fVar46 = (float)puVar42[lVar32 + 0x155];
          puVar42[lVar32 + 0x155] = (uint)(fVar46 / fVar47);
          puVar42[lVar32 + 0x156] = (uint)(fVar48 / fVar47);
          puVar42[lVar32 + 0x157] = (uint)(fVar71 / fVar47);
          puVar42[lVar32 + 0x158] = (uint)(fVar47 / fVar47);
          pfVar4 = (float *)((long)puVar42 + lVar37);
          fVar46 = (fVar46 / fVar47) * 0.21258622 + (fVar48 / fVar47) * 0.7151703 +
                   (fVar71 / fVar47) * 0.0722005 + (fVar47 / fVar47) * 0.0;
          if (fVar46 <= 1.0) {
            fVar46 = 1.0;
          }
          fVar46 = (*pfVar4 * 0.21258622 + pfVar4[1] * 0.7151703 + pfVar4[2] * 0.0722005 +
                   pfVar4[3] * 0.0) / fVar46;
          fVar48 = SQRT(fVar46);
          if (NAN(fVar48)) {
            fVar48 = sqrtf(fVar46);
          }
          *(float *)((long)pfVar43 + lVar32) = fVar48;
          lVar32 = lVar32 + 4;
          lVar37 = lVar37 + 0x10;
        } while (lVar32 != 0x24);
      }
      lVar34 = lVar34 + 1;
      pfVar43 = pfVar43 + 9;
      puVar42 = puVar42 + 0x24;
    } while (lVar34 != 9);
  }
  memcpy(local_111c,local_5b8,0x144);
  fVar46 = (float)param_1[9];
  uVar33 = param_1[4];
  cVar73 = *(char *)((long)param_1 + 0x3361);
  lVar34 = -0x140;
  while( true ) {
    fVar48 = fVar46 + *(float *)((long)param_1 + lVar34 + 0x2284);
    uVar44 = 0;
    uVar59 = 0;
    uVar62 = 0x80;
    uVar57 = 0x3f;
    if (fVar48 <= 1.0) {
      uVar44 = SUB41(fVar48,0);
      uVar59 = (char)((uint)fVar48 >> 8);
      uVar62 = (char)((uint)fVar48 >> 0x10);
      uVar57 = (char)((uint)fVar48 >> 0x18);
    }
    *(uint *)((long)param_1 + lVar34 + 0x2284) =
         CONCAT13(uVar57,CONCAT12(uVar62,CONCAT11(uVar59,uVar44)));
    if (lVar34 == 0) break;
    fVar48 = fVar46 + *(float *)((long)param_1 + lVar34 + 0x2288);
    uVar44 = 0;
    uVar59 = 0;
    uVar62 = 0x80;
    uVar57 = 0x3f;
    if (fVar48 <= 1.0) {
      uVar44 = SUB41(fVar48,0);
      uVar59 = (char)((uint)fVar48 >> 8);
      uVar62 = (char)((uint)fVar48 >> 0x10);
      uVar57 = (char)((uint)fVar48 >> 0x18);
    }
    *(uint *)((long)param_1 + lVar34 + 0x2288) =
         CONCAT13(uVar57,CONCAT12(uVar62,CONCAT11(uVar59,uVar44)));
    lVar34 = lVar34 + 8;
  }
  if (((char)uVar33 != '\0') && (cVar73 != '\0')) {
    if (param_1[5] == 1) {
      fVar46 = (float)param_1[7];
      lVar34 = 0;
      do {
        lVar32 = lVar34 + 0xc;
        fVar48 = *(float *)((long)local_111c + lVar34 + 4);
        fVar47 = *(float *)((long)local_111c + lVar34);
        if (fVar46 <= *(float *)((long)local_111c + lVar34)) {
          fVar47 = fVar46;
        }
        fVar46 = *(float *)((long)local_111c + lVar34 + 8);
        if (fVar47 <= fVar48) {
          fVar48 = fVar47;
        }
        if (fVar48 <= fVar46) {
          fVar46 = fVar48;
        }
        lVar34 = lVar32;
      } while (lVar32 != 0x144);
      lVar34 = -0x140;
      while( true ) {
        fVar48 = *(float *)((long)param_1 + lVar34 + 0x2284);
        uVar59 = (undefined1)((uint)fVar46 >> 8);
        uVar57 = (undefined1)((uint)fVar46 >> 0x10);
        uVar60 = (undefined1)((uint)fVar46 >> 0x18);
        uVar44 = SUB41(fVar46,0);
        uVar62 = uVar59;
        uVar58 = uVar57;
        uVar61 = uVar60;
        if (fVar48 <= fVar46) {
          uVar44 = SUB41(fVar48,0);
          uVar62 = (char)((uint)fVar48 >> 8);
          uVar58 = (char)((uint)fVar48 >> 0x10);
          uVar61 = (char)((uint)fVar48 >> 0x18);
        }
        *(uint *)((long)param_1 + lVar34 + 0x2284) =
             CONCAT13(uVar61,CONCAT12(uVar58,CONCAT11(uVar62,uVar44)));
        if (lVar34 == 0) break;
        fVar48 = *(float *)((long)param_1 + lVar34 + 0x2288);
        uVar44 = SUB41(fVar46,0);
        if (fVar48 <= fVar46) {
          uVar44 = SUB41(fVar48,0);
          uVar59 = (char)((uint)fVar48 >> 8);
          uVar57 = (char)((uint)fVar48 >> 0x10);
          uVar60 = (char)((uint)fVar48 >> 0x18);
        }
        *(uint *)((long)param_1 + lVar34 + 0x2288) =
             CONCAT13(uVar60,CONCAT12(uVar57,CONCAT11(uVar59,uVar44)));
        lVar34 = lVar34 + 8;
      }
    }
    else if (param_1[5] == 0) {
      lVar34 = 0;
      while( true ) {
        fVar46 = *(float *)((long)param_1 + lVar34 + 0x2144);
        fVar48 = *(float *)((long)local_111c + lVar34);
        if (fVar46 <= *(float *)((long)local_111c + lVar34)) {
          fVar48 = fVar46;
        }
        *(float *)((long)param_1 + lVar34 + 0x2144) = fVar48;
        if (lVar34 == 0x140) break;
        fVar46 = *(float *)((long)param_1 + lVar34 + 0x2148);
        fVar48 = *(float *)((long)local_111c + lVar34 + 4);
        if (fVar46 <= fVar48) {
          fVar48 = fVar46;
        }
        *(float *)((long)param_1 + lVar34 + 0x2148) = fVar48;
        lVar34 = lVar34 + 8;
      }
    }
  }
  fVar46 = (float)param_1[7];
  uVar44 = (undefined1)((uint)fVar46 >> 8);
  uVar59 = (undefined1)((uint)fVar46 >> 0x10);
  uVar62 = (undefined1)((uint)fVar46 >> 0x18);
  fVar48 = (float)param_1[8];
  lVar34 = -0x140;
  while( true ) {
    fVar47 = *(float *)((long)param_1 + lVar34 + 0x2284);
    uVar63 = (undefined1)((uint)fVar48 >> 8);
    uVar64 = (undefined1)((uint)fVar48 >> 0x10);
    uVar65 = (undefined1)((uint)fVar48 >> 0x18);
    uVar57 = SUB41(fVar47,0);
    uVar58 = (char)((uint)fVar47 >> 8);
    uVar60 = (char)((uint)fVar47 >> 0x10);
    uVar61 = (char)((uint)fVar47 >> 0x18);
    if (fVar47 <= fVar48) {
      uVar57 = SUB41(fVar48,0);
      uVar58 = uVar63;
      uVar60 = uVar64;
      uVar61 = uVar65;
    }
    if (fVar46 <= (float)CONCAT13(uVar61,CONCAT12(uVar60,CONCAT11(uVar58,uVar57)))) {
      uVar57 = SUB41(fVar46,0);
      uVar58 = uVar44;
      uVar60 = uVar59;
      uVar61 = uVar62;
    }
    *(uint *)((long)param_1 + lVar34 + 0x2284) =
         CONCAT13(uVar61,CONCAT12(uVar60,CONCAT11(uVar58,uVar57)));
    if (lVar34 == 0) break;
    fVar47 = *(float *)((long)param_1 + lVar34 + 0x2288);
    uVar57 = SUB41(fVar47,0);
    uVar58 = (char)((uint)fVar47 >> 8);
    uVar60 = (char)((uint)fVar47 >> 0x10);
    uVar61 = (char)((uint)fVar47 >> 0x18);
    if (fVar47 <= fVar48) {
      uVar57 = SUB41(fVar48,0);
      uVar58 = uVar63;
      uVar60 = uVar64;
      uVar61 = uVar65;
    }
    if (fVar46 <= (float)CONCAT13(uVar61,CONCAT12(uVar60,CONCAT11(uVar58,uVar57)))) {
      uVar57 = SUB41(fVar46,0);
      uVar58 = uVar44;
      uVar60 = uVar59;
      uVar61 = uVar62;
    }
    *(uint *)((long)param_1 + lVar34 + 0x2288) =
         CONCAT13(uVar61,CONCAT12(uVar60,CONCAT11(uVar58,uVar57)));
    lVar34 = lVar34 + 8;
  }
  uVar33 = param_1[0xd];
  if (0 < (int)uVar33) {
    iVar39 = 0;
    do {
      iVar17 = iVar39 + 1;
      iVar38 = (int)((float)param_1[0x10] * (float)iVar39 + 0.5);
      if (iVar38 == (int)((float)param_1[0x10] * (float)iVar17 + 0.5)) {
        if (0 < iVar38 && (int)(uVar33 - 1) <= iVar39) goto LAB_03f4b478;
      }
      else if (0 < iVar38) {
LAB_03f4b478:
        if (param_1[6] == 1) {
          iVar39 = (int)((float)(int)uVar33 * 0.125);
          if (iVar39 != 0) {
            uVar98 = param_1[0xc];
            iVar18 = (iVar38 + -1) * 9;
            lVar32 = (long)(int)((float)(int)uVar98 * 0.125);
            fVar46 = 1.0 / (float)(int)(float)(int)((float)(int)uVar33 * 0.125);
            lVar34 = 0;
            do {
              lVar37 = lVar34 + 1;
              fVar71 = (float)param_1[(long)iVar18 + lVar34 + 0x851];
              fVar72 = (float)param_1[(long)iVar18 + lVar34 + 0x852];
              lVar40 = 0;
              fVar48 = (float)param_1[(long)(iVar18 + 9) + lVar34 + 0x851] - fVar71;
              fVar47 = (float)param_1[(long)(iVar18 + 9) + lVar34 + 0x852] - fVar72;
              do {
                uVar33 = param_1[0xc];
                uVar30 = 0;
                lVar41 = 0;
                fVar97 = fVar71 * 256.0;
                fVar96 = (1.0 / (float)(int)(float)(int)((float)(int)uVar98 * 0.125)) *
                         (fVar72 - fVar71) * 256.0;
                fVar80 = fVar96 * 8.0;
                fVar99 = fVar97 + fVar96 * 0.0;
                fVar100 = fVar97 + fVar96 * 2.0;
                fVar82 = fVar97 + fVar96;
                fVar93 = fVar97 + fVar96 * 3.0;
                fVar101 = fVar97 + fVar96 * 4.0;
                fVar94 = fVar97 + fVar96 * 5.0;
                fVar95 = fVar97 + fVar96 * 6.0;
                fVar97 = fVar97 + fVar96 * 7.0;
                do {
                  auVar91._0_8_ = CONCAT44((int)fVar82,(int)fVar99);
                  auVar91._8_4_ = (int)fVar100;
                  auVar91._12_4_ = (int)fVar93;
                  pbVar6 = (byte *)((long)__src +
                                   (uVar30 & 0xffffffe0) +
                                   (lVar34 * lVar32 +
                                   (lVar40 + (iVar38 + -1) * iVar39) * (long)(int)uVar33) * 4);
                  iVar8 = (int)fVar101;
                  iVar19 = (int)fVar94;
                  iVar9 = (int)fVar95;
                  iVar10 = (int)fVar97;
                  fVar99 = fVar80 + fVar99;
                  fVar82 = fVar80 + fVar82;
                  fVar100 = fVar80 + fVar100;
                  fVar93 = fVar80 + fVar93;
                  fVar101 = fVar80 + fVar101;
                  fVar94 = fVar80 + fVar94;
                  fVar95 = fVar80 + fVar95;
                  fVar97 = fVar80 + fVar97;
                  lVar41 = lVar41 + 8;
                  auVar92._8_8_ = auVar91._8_8_;
                  auVar92._0_8_ = NEON_uqxtn(auVar91._0_8_,auVar91,4);
                  uVar30 = uVar30 + 0x20;
                  auVar105[4] = (char)iVar19;
                  auVar105._0_4_ = iVar8;
                  auVar105[5] = (char)((uint)iVar19 >> 8);
                  auVar105[6] = (char)((uint)iVar19 >> 0x10);
                  auVar105[7] = (char)((uint)iVar19 >> 0x18);
                  auVar105._8_2_ = (short)iVar9;
                  auVar105._10_2_ = (short)((uint)iVar9 >> 0x10);
                  auVar105._12_2_ = (short)iVar10;
                  auVar105._14_2_ = (short)((uint)iVar10 >> 0x10);
                  auVar105 = NEON_uqxtn2(auVar92,auVar105,4);
                  sVar45 = auVar105._0_2_;
                  sVar50 = auVar105._2_2_;
                  sVar51 = auVar105._4_2_;
                  sVar52 = auVar105._6_2_;
                  sVar53 = auVar105._8_2_;
                  sVar54 = auVar105._10_2_;
                  sVar55 = auVar105._12_2_;
                  sVar56 = auVar105._14_2_;
                  *pbVar6 = (byte)((ushort)(sVar45 * (ushort)*pbVar6) >> 8);
                  pbVar6[1] = (byte)((ushort)(sVar45 * (ushort)pbVar6[1]) >> 8);
                  pbVar6[2] = (byte)((ushort)(sVar45 * (ushort)pbVar6[2]) >> 8);
                  pbVar6[3] = pbVar6[3];
                  pbVar6[4] = (byte)((ushort)(sVar50 * (ushort)pbVar6[4]) >> 8);
                  pbVar6[5] = (byte)((ushort)(sVar50 * (ushort)pbVar6[5]) >> 8);
                  pbVar6[6] = (byte)((ushort)(sVar50 * (ushort)pbVar6[6]) >> 8);
                  pbVar6[7] = pbVar6[7];
                  pbVar6[8] = (byte)((ushort)(sVar51 * (ushort)pbVar6[8]) >> 8);
                  pbVar6[9] = (byte)((ushort)(sVar51 * (ushort)pbVar6[9]) >> 8);
                  pbVar6[10] = (byte)((ushort)(sVar51 * (ushort)pbVar6[10]) >> 8);
                  pbVar6[0xb] = pbVar6[0xb];
                  pbVar6[0xc] = (byte)((ushort)(sVar52 * (ushort)pbVar6[0xc]) >> 8);
                  pbVar6[0xd] = (byte)((ushort)(sVar52 * (ushort)pbVar6[0xd]) >> 8);
                  pbVar6[0xe] = (byte)((ushort)(sVar52 * (ushort)pbVar6[0xe]) >> 8);
                  pbVar6[0xf] = pbVar6[0xf];
                  pbVar6[0x10] = (byte)((ushort)(sVar53 * (ushort)pbVar6[0x10]) >> 8);
                  pbVar6[0x11] = (byte)((ushort)(sVar53 * (ushort)pbVar6[0x11]) >> 8);
                  pbVar6[0x12] = (byte)((ushort)(sVar53 * (ushort)pbVar6[0x12]) >> 8);
                  pbVar6[0x13] = pbVar6[0x13];
                  pbVar6[0x14] = (byte)((ushort)(sVar54 * (ushort)pbVar6[0x14]) >> 8);
                  pbVar6[0x15] = (byte)((ushort)(sVar54 * (ushort)pbVar6[0x15]) >> 8);
                  pbVar6[0x16] = (byte)((ushort)(sVar54 * (ushort)pbVar6[0x16]) >> 8);
                  pbVar6[0x17] = pbVar6[0x17];
                  pbVar6[0x18] = (byte)((ushort)(sVar55 * (ushort)pbVar6[0x18]) >> 8);
                  pbVar6[0x19] = (byte)((ushort)(sVar55 * (ushort)pbVar6[0x19]) >> 8);
                  pbVar6[0x1a] = (byte)((ushort)(sVar55 * (ushort)pbVar6[0x1a]) >> 8);
                  pbVar6[0x1b] = pbVar6[0x1b];
                  pbVar6[0x1c] = (byte)((ushort)(sVar56 * (ushort)pbVar6[0x1c]) >> 8);
                  pbVar6[0x1d] = (byte)((ushort)(sVar56 * (ushort)pbVar6[0x1d]) >> 8);
                  pbVar6[0x1e] = (byte)((ushort)(sVar56 * (ushort)pbVar6[0x1e]) >> 8);
                  pbVar6[0x1f] = pbVar6[0x1f];
                } while (lVar41 < lVar32);
                fVar71 = fVar46 * fVar48 + fVar71;
                fVar72 = fVar46 * fVar47 + fVar72;
                lVar40 = lVar40 + 1;
              } while (lVar40 != iVar39);
              lVar34 = lVar37;
            } while (lVar37 != 8);
          }
        }
        else if (param_1[6] == 2) {
          iVar39 = (int)((float)(int)uVar33 * 0.125);
          if (iVar39 != 0) {
            uVar98 = param_1[0xc];
            iVar18 = (iVar38 + -1) * 9;
            lVar37 = *(long *)(param_1 + 0x3de);
            lVar34 = 0;
            lVar40 = (long)((iVar38 + -1) * iVar39);
            lVar41 = (long)(int)((float)(int)uVar98 * 0.125);
            fVar46 = 1.0 / (float)(int)(float)(int)((float)(int)uVar33 * 0.125);
            lVar32 = 0;
            do {
              lVar2 = lVar32 + 1;
              fVar48 = (float)param_1[(long)iVar18 + lVar32 + 0x851];
              fVar47 = (float)param_1[(long)iVar18 + lVar32 + 0x852];
              lVar28 = 0;
              fVar71 = (float)param_1[(long)(iVar18 + 9) + lVar32 + 0x851] - fVar48;
              fVar72 = (float)param_1[(long)(iVar18 + 9) + lVar32 + 0x852] - fVar47;
              lVar29 = lVar40;
              do {
                fVar99 = fVar48 * 128.0;
                uVar33 = param_1[0xc];
                uVar30 = 0;
                lVar31 = 0;
                fVar100 = (1.0 / (float)(int)(float)(int)((float)(int)uVar98 * 0.125)) *
                          (fVar47 - fVar48) * 128.0;
                fVar82 = fVar99 + fVar100 * 0.0;
                fVar93 = fVar99 + fVar100;
                fVar80 = fVar99 + fVar100 * 5.0;
                fVar97 = fVar99 + fVar100 * 6.0;
                fVar94 = fVar99 + fVar100 * 2.0;
                fVar95 = fVar99 + fVar100 * 3.0;
                fVar96 = fVar99 + fVar100 * 4.0;
                fVar99 = fVar99 + fVar100 * 7.0;
                fVar100 = fVar100 * 8.0;
                do {
                  auVar103._0_8_ = CONCAT44((int)fVar93,(int)fVar82);
                  auVar103._8_4_ = (int)fVar94;
                  auVar103._12_4_ = (int)fVar95;
                  puVar5 = (undefined1 *)(lVar37 + (lVar34 + lVar29 * (int)uVar33) * 4 + uVar30);
                  iVar38 = (int)fVar96;
                  iVar8 = (int)fVar80;
                  iVar19 = (int)fVar97;
                  iVar9 = (int)fVar99;
                  lVar31 = lVar31 + 8;
                  bVar83 = puVar5[3];
                  bVar84 = puVar5[7];
                  bVar85 = puVar5[0xb];
                  bVar86 = puVar5[0xf];
                  bVar87 = puVar5[0x13];
                  bVar88 = puVar5[0x17];
                  bVar89 = puVar5[0x1b];
                  bVar90 = puVar5[0x1f];
                  pbVar6 = (byte *)((long)__src +
                                   (uVar30 & 0xffffffe0) +
                                   (lVar32 * lVar41 + (lVar28 + lVar40) * (long)(int)uVar33) * 4);
                  fVar82 = fVar100 + fVar82;
                  fVar93 = fVar100 + fVar93;
                  fVar94 = fVar100 + fVar94;
                  fVar95 = fVar100 + fVar95;
                  uVar30 = uVar30 + 0x20;
                  auVar104._8_8_ = auVar103._8_8_;
                  auVar104._0_8_ = NEON_uqxtn(auVar103._0_8_,auVar103,4);
                  fVar96 = fVar100 + fVar96;
                  fVar80 = fVar100 + fVar80;
                  fVar97 = fVar100 + fVar97;
                  fVar99 = fVar100 + fVar99;
                  auVar22[4] = (char)iVar8;
                  auVar22._0_4_ = iVar38;
                  auVar22[5] = (char)((uint)iVar8 >> 8);
                  auVar22[6] = (char)((uint)iVar8 >> 0x10);
                  auVar22[7] = (char)((uint)iVar8 >> 0x18);
                  auVar22._8_2_ = (short)iVar19;
                  auVar22._10_2_ = (short)((uint)iVar19 >> 0x10);
                  auVar22._12_2_ = (short)iVar9;
                  auVar22._14_2_ = (short)((uint)iVar9 >> 0x10);
                  auVar105 = NEON_uqxtn2(auVar104,auVar22,4);
                  uVar102 = NEON_uqxtn(auVar105._0_8_,auVar105,2);
                  bVar106 = (byte)((ulong)uVar102 >> 8);
                  bVar107 = (byte)((ulong)uVar102 >> 0x10);
                  bVar108 = (byte)((ulong)uVar102 >> 0x18);
                  bVar109 = (byte)((ulong)uVar102 >> 0x20);
                  bVar110 = (byte)((ulong)uVar102 >> 0x28);
                  bVar111 = (byte)((ulong)uVar102 >> 0x30);
                  bVar112 = (byte)((ulong)uVar102 >> 0x38);
                  uVar81 = CONCAT17(-0x80 - bVar112,
                                    CONCAT16(-0x80 - bVar111,
                                             CONCAT15(-0x80 - bVar110,
                                                      CONCAT14(-0x80 - bVar109,
                                                               CONCAT13(-0x80 - bVar108,
                                                                        CONCAT12(-0x80 - bVar107,
                                                                                 CONCAT11(-0x80 - 
                                                  bVar106,-0x80 - (byte)uVar102)))))));
                  auVar91 = NEON_umull(uVar81,CONCAT17(puVar5[0x1c],
                                                       CONCAT16(puVar5[0x18],
                                                                CONCAT15(puVar5[0x14],
                                                                         CONCAT14(puVar5[0x10],
                                                                                  CONCAT13(puVar5[
                                                  0xc],CONCAT12(puVar5[8],
                                                                CONCAT11(puVar5[4],*puVar5))))))),1)
                  ;
                  auVar105 = NEON_umull(uVar81,CONCAT17(puVar5[0x1d],
                                                        CONCAT16(puVar5[0x19],
                                                                 CONCAT15(puVar5[0x15],
                                                                          CONCAT14(puVar5[0x11],
                                                                                   CONCAT13(puVar5[
                                                  0xd],CONCAT12(puVar5[9],
                                                                CONCAT11(puVar5[5],puVar5[1]))))))),
                                        1);
                  auVar92 = NEON_umull(uVar81,CONCAT17(puVar5[0x1e],
                                                       CONCAT16(puVar5[0x1a],
                                                                CONCAT15(puVar5[0x16],
                                                                         CONCAT14(puVar5[0x12],
                                                                                  CONCAT13(puVar5[
                                                  0xe],CONCAT12(puVar5[10],
                                                                CONCAT11(puVar5[6],puVar5[2]))))))),
                                       1);
                  uVar24 = CONCAT12(bVar106,(short)uVar102) & 0xff00ff;
                  uVar25 = CONCAT12(bVar106,(short)uVar102) & 0xff00ff;
                  *pbVar6 = (byte)((ushort)(auVar91._0_2_ + (short)uVar24 * (ushort)*pbVar6) >> 7);
                  pbVar6[1] = (byte)((ushort)(auVar105._0_2_ +
                                             (ushort)(byte)uVar102 * (ushort)pbVar6[1]) >> 7);
                  pbVar6[2] = (byte)((ushort)(auVar92._0_2_ + (short)uVar25 * (ushort)pbVar6[2]) >>
                                    7);
                  pbVar6[3] = bVar83;
                  pbVar6[4] = (byte)((ushort)(auVar91._2_2_ +
                                             (ushort)(byte)(uVar24 >> 0x10) * (ushort)pbVar6[4]) >>
                                    7);
                  pbVar6[5] = (byte)((ushort)(auVar105._2_2_ + (ushort)bVar106 * (ushort)pbVar6[5])
                                    >> 7);
                  pbVar6[6] = (byte)((ushort)(auVar92._2_2_ +
                                             (ushort)(byte)(uVar25 >> 0x10) * (ushort)pbVar6[6]) >>
                                    7);
                  pbVar6[7] = bVar84;
                  pbVar6[8] = (byte)((ushort)(auVar91._4_2_ + (ushort)bVar107 * (ushort)pbVar6[8])
                                    >> 7);
                  pbVar6[9] = (byte)((ushort)(auVar105._4_2_ + (ushort)bVar107 * (ushort)pbVar6[9])
                                    >> 7);
                  pbVar6[10] = (byte)((ushort)(auVar92._4_2_ + (ushort)bVar107 * (ushort)pbVar6[10])
                                     >> 7);
                  pbVar6[0xb] = bVar85;
                  pbVar6[0xc] = (byte)((ushort)(auVar91._6_2_ +
                                               (ushort)bVar108 * (ushort)pbVar6[0xc]) >> 7);
                  pbVar6[0xd] = (byte)((ushort)(auVar105._6_2_ +
                                               (ushort)bVar108 * (ushort)pbVar6[0xd]) >> 7);
                  pbVar6[0xe] = (byte)((ushort)(auVar92._6_2_ +
                                               (ushort)bVar108 * (ushort)pbVar6[0xe]) >> 7);
                  pbVar6[0xf] = bVar86;
                  pbVar6[0x10] = (byte)((ushort)(auVar91._8_2_ +
                                                (ushort)bVar109 * (ushort)pbVar6[0x10]) >> 7);
                  pbVar6[0x11] = (byte)((ushort)(auVar105._8_2_ +
                                                (ushort)bVar109 * (ushort)pbVar6[0x11]) >> 7);
                  pbVar6[0x12] = (byte)((ushort)(auVar92._8_2_ +
                                                (ushort)bVar109 * (ushort)pbVar6[0x12]) >> 7);
                  pbVar6[0x13] = bVar87;
                  pbVar6[0x14] = (byte)((ushort)(auVar91._10_2_ +
                                                (ushort)bVar110 * (ushort)pbVar6[0x14]) >> 7);
                  pbVar6[0x15] = (byte)((ushort)(auVar105._10_2_ +
                                                (ushort)bVar110 * (ushort)pbVar6[0x15]) >> 7);
                  pbVar6[0x16] = (byte)((ushort)(auVar92._10_2_ +
                                                (ushort)bVar110 * (ushort)pbVar6[0x16]) >> 7);
                  pbVar6[0x17] = bVar88;
                  pbVar6[0x18] = (byte)((ushort)(auVar91._12_2_ +
                                                (ushort)bVar111 * (ushort)pbVar6[0x18]) >> 7);
                  pbVar6[0x19] = (byte)((ushort)(auVar105._12_2_ +
                                                (ushort)bVar111 * (ushort)pbVar6[0x19]) >> 7);
                  pbVar6[0x1a] = (byte)((ushort)(auVar92._12_2_ +
                                                (ushort)bVar111 * (ushort)pbVar6[0x1a]) >> 7);
                  pbVar6[0x1b] = bVar89;
                  pbVar6[0x1c] = (byte)((ushort)(auVar91._14_2_ +
                                                (ushort)bVar112 * (ushort)pbVar6[0x1c]) >> 7);
                  pbVar6[0x1d] = (byte)((ushort)(auVar105._14_2_ +
                                                (ushort)bVar112 * (ushort)pbVar6[0x1d]) >> 7);
                  pbVar6[0x1e] = (byte)((ushort)(auVar92._14_2_ +
                                                (ushort)bVar112 * (ushort)pbVar6[0x1e]) >> 7);
                  pbVar6[0x1f] = bVar90;
                } while (lVar31 < lVar41);
                fVar48 = fVar46 * fVar71 + fVar48;
                fVar47 = fVar46 * fVar72 + fVar47;
                lVar28 = lVar28 + 1;
                lVar29 = lVar29 + 1;
              } while (lVar28 != iVar39);
              lVar34 = lVar34 + lVar41;
              lVar32 = lVar2;
            } while (lVar2 != 8);
          }
        }
      }
      uVar33 = param_1[0xd];
      iVar39 = iVar17;
    } while (iVar17 < (int)uVar33);
  }
  memcpy(*(void **)(param_1 + 0x3de),__src,(long)(int)param_1[0xb] * (long)(int)uVar33);
  return;
}

