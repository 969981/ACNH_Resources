
void FUN_005dc4a0(undefined8 param_1,uint param_2,ulong param_3,long param_4,ulong param_5,
                 ulong param_6,int param_7)

{
  short *psVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  ulong uVar32;
  ulong uVar33;
  uint uVar34;
  bool bVar35;
  bool bVar36;
  bool bVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  ushort *puVar41;
  long lVar42;
  long lVar43;
  ulong uVar44;
  ushort *puVar45;
  byte *pbVar46;
  long lVar47;
  byte bVar48;
  byte bVar49;
  ushort uVar50;
  uint uVar51;
  long lVar52;
  long lVar53;
  long lVar54;
  float *pfVar55;
  long lVar56;
  char *pcVar57;
  long lVar58;
  uint *puVar59;
  long lVar60;
  ulong uVar61;
  byte bVar62;
  ulong uVar63;
  byte *pbVar64;
  long lVar65;
  uint uVar66;
  uint uVar67;
  uint uVar68;
  float fVar69;
  undefined8 uVar70;
  undefined8 uVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar79;
  float fVar80;
  float fVar81;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined8 uVar88;
  undefined8 uVar89;
  undefined1 auVar90 [16];
  float fVar91;
  float fVar92;
  undefined8 uVar93;
  float fVar102;
  undefined1 auVar94 [16];
  float fVar99;
  float fVar100;
  float fVar103;
  undefined1 auVar95 [16];
  float fVar101;
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  float fVar104;
  float fVar105;
  undefined8 uVar106;
  float fVar111;
  float fVar112;
  undefined1 auVar107 [12];
  undefined1 auVar108 [12];
  undefined1 auVar109 [12];
  undefined1 auVar110 [12];
  byte bVar113;
  byte bVar114;
  byte bVar115;
  byte bVar116;
  byte bVar117;
  byte bVar118;
  undefined1 uVar119;
  byte bVar120;
  undefined1 uVar121;
  byte bVar122;
  undefined1 uVar123;
  float fVar124;
  int iVar125;
  int iVar126;
  undefined1 uVar127;
  float fVar128;
  float fVar129;
  long local_310;
  ulong uStack_308;
  long local_300;
  undefined8 local_2f8;
  ushort local_2f0;
  long local_2e0;
  undefined8 uStack_2d8;
  long local_2d0;
  uint local_2c8;
  long local_2c0;
  undefined8 local_2b8;
  long local_2b0;
  uint local_2a8;
  long local_2a0;
  undefined8 local_298;
  long local_290;
  uint local_288;
  float local_280;
  float fStack_27c;
  float fStack_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float fStack_268;
  float fStack_264;
  float local_250;
  float local_24c;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  
  lVar60 = *(long *)(param_4 + 0x18);
  uVar2 = *(uint *)(lVar60 + 0x48);
  lVar52 = *(long *)(param_4 + 400);
  if ((param_3 & 1) == 0) {
    uVar51 = param_2;
    if (0x1d < (int)param_2) {
      uVar51 = 0x1e;
    }
    uVar51 = 1 << (ulong)(uVar51 & 0x1f);
  }
  else {
    uVar51 = 0;
  }
  local_2c0 = 0;
  local_2b8 = 0x8000000000000000;
  local_2a8 = uVar2;
  if (uVar2 == 0) {
    lVar38 = 0;
  }
  else {
    lVar38 = FUN_0043c4e0(DAT_04c6f050);
    lVar53 = DAT_04c6f058;
    if (lVar38 != 0) {
      lVar53 = lVar38;
    }
    uVar44 = (ulong)(int)(uVar2 * 2 + 0x7f & 0xffffff80);
    if (*(ulong *)(lVar53 + 0x10) < uVar44) {
LAB_005dc578:
      lVar38 = FUN_00439510();
    }
    else {
      lVar38 = *(long *)(lVar53 + 0x18);
      uVar44 = lVar38 + uVar44;
      if (*(ulong *)(lVar53 + 0x20) < uVar44) goto LAB_005dc578;
      *(ulong *)(lVar53 + 0x18) = uVar44;
    }
  }
  lVar53 = lVar52 + (long)(int)param_2 * 0xa0;
  local_2b8._4_4_ = uVar2 | 0x80000000;
  if (uVar2 != 0) {
    local_2b8._0_4_ = uVar2;
  }
  lVar54 = (long)(int)param_2;
  local_2c0 = lVar38;
  local_2b0 = lVar38;
  if (((param_5 & 1) == 0) || ((param_6 & 1) == 0)) {
    if ((param_3 & 1) == 0) {
      if ((int)uVar2 < 1) goto LAB_005dc6e4;
      puVar59 = *(uint **)(lVar60 + 0xe8);
      uVar50 = 0;
      uVar68 = 0;
      do {
        if ((*puVar59 & uVar51) != 0) {
          *(ushort *)(lVar38 + (long)(int)uVar68 * 2) = uVar50;
          uVar68 = uVar68 + 1;
        }
        uVar50 = uVar50 + 1;
        puVar59 = puVar59 + 1;
      } while ((int)(uint)uVar50 < (int)uVar2);
LAB_005dc6b8:
      bVar35 = SBORROW4(uVar2,uVar68);
      bVar36 = (int)(uVar2 - uVar68) < 0;
      bVar37 = uVar2 == uVar68;
      if ((int)uVar2 < (int)uVar68) goto LAB_005dc6f0;
LAB_005dc6c0:
      if (!bVar37 && bVar36 == bVar35) goto LAB_005dc6f0;
    }
    else {
      if (0 < (int)uVar2) {
        uVar50 = 0;
        uVar68 = 0;
        pfVar55 = (float *)(*(long *)(lVar60 + 0x40) + 4);
        do {
          if (*pfVar55 != 0.0) {
            *(ushort *)(lVar38 + (long)(int)uVar68 * 2) = uVar50;
            uVar68 = uVar68 + 1;
          }
          uVar50 = uVar50 + 1;
          pfVar55 = pfVar55 + 4;
        } while ((int)(uint)uVar50 < (int)uVar2);
        goto LAB_005dc6b8;
      }
LAB_005dc6e4:
      uVar68 = 0;
      bVar35 = false;
      bVar37 = uVar2 == 0;
      bVar36 = false;
      if (-1 < (int)uVar2) goto LAB_005dc6c0;
LAB_005dc6f0:
      uVar2 = uVar68;
      local_2b8._0_4_ = uVar68;
    }
  }
  else {
    local_2e0 = 0;
    uStack_2d8 = 0x8000000000000000;
    local_2c8 = uVar2;
    if (uVar2 == 0) {
      uStack_2d8._0_4_ = 0;
      local_2d0 = 0;
    }
    else {
      lVar39 = FUN_0043c4e0(DAT_04c6f050);
      lVar40 = DAT_04c6f058;
      if (lVar39 != 0) {
        lVar40 = lVar39;
      }
      uVar44 = (ulong)(int)(uVar2 * 2 + 0x7f & 0xffffff80);
      if (*(ulong *)(lVar40 + 0x10) < uVar44) {
LAB_005dc634:
        local_2d0 = FUN_00439510();
      }
      else {
        local_2d0 = *(long *)(lVar40 + 0x18);
        uVar44 = local_2d0 + uVar44;
        if (*(ulong *)(lVar40 + 0x20) < uVar44) goto LAB_005dc634;
        *(ulong *)(lVar40 + 0x18) = uVar44;
      }
      if (uVar2 != 0) {
        uStack_2d8._0_4_ = uVar2;
      }
    }
    lVar40 = local_2d0;
    uStack_2d8._4_4_ = uVar2 | 0x80000000;
    if ((param_3 & 1) == 0) {
      if ((int)uVar2 < 1) goto LAB_005dd228;
      pcVar57 = *(char **)(lVar60 + 0x188);
      puVar59 = *(uint **)(lVar60 + 0xe8);
      uVar50 = 0;
      uVar68 = 0;
      uVar67 = 0;
      do {
        uVar66 = uVar67;
        if ((*puVar59 & uVar51) != 0) {
          if (*pcVar57 == '\0') {
            uVar34 = uVar68 + 1;
            lVar39 = lVar38;
            uVar67 = uVar68;
          }
          else {
            uVar66 = uVar67 + 1;
            uVar34 = uVar68;
            lVar39 = local_2d0;
          }
          uVar68 = uVar34;
          *(ushort *)(lVar39 + (long)(int)uVar67 * 2) = uVar50;
        }
        uVar50 = uVar50 + 1;
        puVar59 = puVar59 + 1;
        pcVar57 = pcVar57 + 1;
        uVar67 = uVar66;
      } while ((int)(uint)uVar50 < (int)uVar2);
LAB_005dd20c:
      uVar51 = uVar66;
      uVar67 = uVar66;
      if (uVar2 == uVar66) {
LAB_005dd218:
        uVar51 = uVar2;
        uVar67 = (uint)uStack_2d8;
      }
    }
    else {
      if (0 < (int)uVar2) {
        pcVar57 = *(char **)(lVar60 + 0x188);
        uVar50 = 0;
        uVar66 = 0;
        uVar68 = 0;
        pfVar55 = (float *)(*(long *)(lVar60 + 0x40) + 4);
        do {
          if (*pfVar55 != 0.0) {
            if (*pcVar57 == '\0') {
              uVar51 = uVar66;
              uVar67 = uVar68 + 1;
              lVar39 = lVar38;
              uVar66 = uVar68;
            }
            else {
              uVar51 = uVar66 + 1;
              uVar67 = uVar68;
              lVar39 = local_2d0;
            }
            uVar68 = uVar67;
            *(ushort *)(lVar39 + (long)(int)uVar66 * 2) = uVar50;
            uVar66 = uVar51;
          }
          uVar50 = uVar50 + 1;
          pcVar57 = pcVar57 + 1;
          pfVar55 = pfVar55 + 4;
        } while ((int)(uint)uVar50 < (int)uVar2);
        goto LAB_005dd20c;
      }
LAB_005dd228:
      uVar68 = 0;
      uVar66 = 0;
      uVar51 = uVar66;
      uVar67 = uVar66;
      if (uVar2 == 0) goto LAB_005dd218;
    }
    uStack_2d8._0_4_ = uVar67;
    uVar67 = uVar68;
    uVar34 = uVar68;
    if (uVar2 == uVar68) {
      uVar67 = uVar2;
      uVar34 = (uint)local_2b8;
    }
    local_2b8._0_4_ = uVar34;
    local_2e0 = local_2d0;
    if (uVar66 != 0) {
      local_310 = *(long *)(param_4 + 0x220);
      local_2f0 = *(ushort *)(lVar60 + 0x1a8);
      uStack_308 = *(ulong *)(param_4 + 0x228);
      local_300 = *(long *)(param_4 + 0x230);
      local_2f8 = *(undefined8 *)(param_4 + 0x210);
      if (param_7 == 0) {
        local_2a0 = 0;
        local_298 = 0x8000000000000000;
        local_288 = uVar66;
        lVar43 = FUN_0043c4e0(DAT_04c6f050);
        lVar39 = DAT_04c6f058;
        if (lVar43 != 0) {
          lVar39 = lVar43;
        }
        uVar44 = (ulong)(int)(uVar66 * 4 + 0x7f & 0xffffff80);
        if (*(ulong *)(lVar39 + 0x10) < uVar44) {
LAB_005dd34c:
          lVar43 = FUN_00439510(lVar39,uVar44);
        }
        else {
          lVar43 = *(long *)(lVar39 + 0x18);
          if (*(ulong *)(lVar39 + 0x20) < lVar43 + uVar44) goto LAB_005dd34c;
          *(ulong *)(lVar39 + 0x18) = lVar43 + uVar44;
        }
        local_298 = CONCAT44(uVar66,(undefined4)local_298) | 0x8000000000000000;
        local_2a0 = lVar43;
        local_290 = lVar43;
        lVar56 = FUN_0043c4e0(DAT_04c6f050);
        lVar39 = DAT_04c6f058;
        if (lVar56 != 0) {
          lVar39 = lVar56;
        }
        if (*(ulong *)(lVar39 + 0x10) < uVar44) {
LAB_005de018:
          lVar56 = FUN_00439510(lVar39,uVar44);
        }
        else {
          lVar56 = *(long *)(lVar39 + 0x18);
          if (*(ulong *)(lVar39 + 0x20) < lVar56 + uVar44) goto LAB_005de018;
          *(ulong *)(lVar39 + 0x18) = lVar56 + uVar44;
        }
        local_298 = CONCAT44(local_298._4_4_,uVar66);
        if (0 < (int)uVar66) {
          uVar61 = 0;
          do {
            uVar63 = uVar61 & 0xffff;
            uVar2 = (int)uVar61 + 1;
            uVar61 = (ulong)uVar2;
            lVar58 = uVar63 * 4;
            lVar39 = *(long *)(lVar60 + 0x40) + (ulong)*(ushort *)(lVar40 + uVar63 * 2) * 0x10;
            *(undefined4 *)(lVar43 + lVar58) = *(undefined4 *)(lVar39 + 8);
            *(undefined4 *)(lVar56 + lVar58) = *(undefined4 *)(lVar39 + 0xc);
          } while ((int)(uVar2 & 0xffff) < (int)uVar66);
        }
        FUN_005ea9b0(param_1,lVar53,&local_2e0,&local_2a0,param_4,&local_310);
        lVar58 = FUN_0043c4e0(DAT_04c6f050);
        lVar39 = DAT_04c6f058;
        if (lVar58 != 0) {
          lVar39 = lVar58;
        }
        if (((*(ulong *)(lVar39 + 0x10) < uVar44) || (*(long *)(lVar39 + 0x18) != lVar56 + uVar44))
           || (*(long *)(lVar39 + 0x28) == lVar56)) {
          FUN_00439980(lVar39,lVar56,uVar44);
        }
        else {
          *(long *)(lVar39 + 0x18) = lVar56;
        }
        uVar2 = local_288;
        local_298 = local_298 & 0xffffffff00000000;
        lVar56 = FUN_0043c4e0(*(undefined2 *)PTR_DAT_04bd4d10);
        lVar39 = DAT_04c6f058;
        if (lVar56 != 0) {
          lVar39 = lVar56;
        }
        uVar44 = (ulong)(int)(uVar2 * 4 + 0x7f & 0xffffff80);
        if (((*(ulong *)(lVar39 + 0x10) < uVar44) || (*(long *)(lVar39 + 0x18) != lVar43 + uVar44))
           || (*(long *)(lVar39 + 0x28) == lVar43)) {
          FUN_00439980(lVar39,lVar43);
        }
        else {
          *(long *)(lVar39 + 0x18) = lVar43;
        }
      }
      else {
        lVar43 = FUN_0043c4e0(DAT_04c6f050);
        lVar39 = DAT_04c6f058;
        if (lVar43 != 0) {
          lVar39 = lVar43;
        }
        uVar44 = (ulong)(int)(uVar66 * 4 + 0x7f & 0xffffff80);
        if (*(ulong *)(lVar39 + 0x10) < uVar44) {
LAB_005dd2e0:
          lVar43 = FUN_00439510();
        }
        else {
          lVar43 = *(long *)(lVar39 + 0x18);
          if (*(ulong *)(lVar39 + 0x20) < lVar43 + uVar44) goto LAB_005dd2e0;
          *(ulong *)(lVar39 + 0x18) = lVar43 + uVar44;
        }
        lVar56 = FUN_0043c4e0(DAT_04c6f050);
        lVar39 = DAT_04c6f058;
        if (lVar56 != 0) {
          lVar39 = lVar56;
        }
        if (*(ulong *)(lVar39 + 0x10) < uVar44) {
LAB_005dd540:
          lVar56 = FUN_00439510();
        }
        else {
          lVar56 = *(long *)(lVar39 + 0x18);
          if (*(ulong *)(lVar39 + 0x20) < lVar56 + uVar44) goto LAB_005dd540;
          *(ulong *)(lVar39 + 0x18) = lVar56 + uVar44;
        }
        if (0 < (int)uVar66) {
          uVar61 = 0;
          do {
            uVar63 = uVar61 & 0xffff;
            uVar2 = (int)uVar61 + 1;
            uVar61 = (ulong)uVar2;
            lVar58 = uVar63 * 4;
            lVar39 = *(long *)(lVar60 + 0x40) + (ulong)*(ushort *)(lVar40 + uVar63 * 2) * 0x10;
            *(undefined4 *)(lVar43 + lVar58) = *(undefined4 *)(lVar39 + 8);
            *(undefined4 *)(lVar56 + lVar58) = *(undefined4 *)(lVar39 + 0xc);
          } while ((int)(uVar2 & 0xffff) < (int)uVar66);
        }
        lVar58 = lVar52 + lVar54 * 0xa0;
        lVar39 = *(long *)(lVar53 + 0x88);
        fVar81 = (float)((ulong)*(undefined8 *)(lVar39 + 0x20) >> 0x20);
        fVar74 = (float)*(undefined8 *)(lVar58 + 0x30);
        fVar75 = (float)((ulong)*(undefined8 *)(lVar58 + 0x30) >> 0x20);
        fVar76 = (float)*(undefined8 *)(lVar58 + 0x38);
        fVar77 = (float)((ulong)*(undefined8 *)(lVar58 + 0x38) >> 0x20);
        fVar79 = (float)*(undefined8 *)(lVar39 + 0x20);
        fVar69 = (float)*(undefined8 *)(lVar58 + 0x20);
        fVar78 = (float)((ulong)*(undefined8 *)(lVar58 + 0x20) >> 0x20);
        fVar80 = (float)*(undefined8 *)(lVar58 + 0x28);
        fVar73 = (float)((ulong)*(undefined8 *)(lVar58 + 0x28) >> 0x20);
        fVar101 = (float)*(undefined8 *)(lVar58 + 0x48);
        fVar72 = (float)((ulong)*(undefined8 *)(lVar58 + 0x48) >> 0x20);
        fVar124 = (float)*(undefined8 *)(lVar58 + 0x40);
        fVar104 = (float)((ulong)*(undefined8 *)(lVar58 + 0x40) >> 0x20);
        fVar102 = (float)*(undefined8 *)(lVar58 + 0x58);
        fVar103 = (float)((ulong)*(undefined8 *)(lVar58 + 0x58) >> 0x20);
        fVar91 = (float)*(undefined8 *)(lVar58 + 0x50);
        fVar99 = (float)((ulong)*(undefined8 *)(lVar58 + 0x50) >> 0x20);
        fVar92 = (float)*(undefined8 *)(lVar39 + 0x28);
        local_90 = CONCAT44(fVar99 + fVar104 * fVar92 + fVar78 * fVar79 + fVar75 * fVar81,
                            fVar91 + fVar124 * fVar92 + fVar69 * fVar79 + fVar74 * fVar81);
        uStack_88 = CONCAT44(fVar103 + fVar72 * fVar92 + fVar73 * fVar79 + fVar77 * fVar81,
                             fVar102 + fVar101 * fVar92 + fVar80 * fVar79 + fVar76 * fVar81);
        fVar79 = (float)*(undefined8 *)(lVar39 + 0x30);
        fVar81 = (float)((ulong)*(undefined8 *)(lVar39 + 0x30) >> 0x20);
        fVar92 = (float)*(undefined8 *)(lVar39 + 0x38);
        local_a0 = CONCAT44(fVar99 + fVar104 * fVar92 + fVar78 * fVar79 + fVar75 * fVar81,
                            fVar91 + fVar124 * fVar92 + fVar69 * fVar79 + fVar74 * fVar81);
        uStack_98 = CONCAT44(fVar103 + fVar72 * fVar92 + fVar73 * fVar79 + fVar77 * fVar81,
                             fVar102 + fVar101 * fVar92 + fVar80 * fVar79 + fVar76 * fVar81);
        FUN_0053dad0(*(undefined4 *)(lVar39 + 0x50),&local_2a0,&local_90,&local_a0);
        lVar39 = *(long *)(param_4 + 0x18);
        if (param_7 == 2) {
          if (0 < (int)uVar51) {
            lVar58 = 0;
            pcVar57 = (char *)(lVar52 + lVar54 * 0xa0 + 0x9c);
            do {
              uVar61 = (ulong)*(ushort *)(lVar40 + lVar58 * 2);
              if (((*(char *)(local_300 + (uVar61 - local_2f0)) <= *pcVar57) &&
                  (*(char *)(uStack_308 + (uVar61 - local_2f0)) == '\0')) &&
                 (uVar63 = (ulong)*(ushort *)(*(long *)(lVar39 + 0x2d0) + uVar61 * 2),
                 uVar63 != 0xffff)) {
                fVar69 = *(float *)(*(long *)(lVar39 + 0x40) + uVar61 * 0x10 + 8);
                lVar47 = *(long *)(lVar39 + 0x290) + uVar63 * 8;
                pbVar64 = (byte *)(lVar47 + 6);
                bVar48 = *pbVar64;
                if (bVar48 != 0) {
                  lVar65 = *(long *)(param_4 + 0x20);
                  puVar3 = (undefined8 *)(lVar65 + uVar61 * 0x10);
                  uVar71 = puVar3[1];
                  uVar70 = *puVar3;
                  bVar62 = 0;
                  lVar42 = lVar65;
                  while( true ) {
                    puVar45 = (ushort *)
                              (*(long *)(lVar39 + 0x280) +
                              ((ulong)((uint)*(ushort *)(lVar47 + 2) + (uint)bVar62) & 0xffff) * 6);
                    puVar3 = (undefined8 *)(lVar42 + (ulong)*puVar45 * 0x10);
                    uVar89 = puVar3[1];
                    uVar88 = *puVar3;
                    puVar3 = (undefined8 *)(lVar42 + (ulong)puVar45[1] * 0x10);
                    uVar93 = puVar3[1];
                    uVar106 = *puVar3;
                    psVar1 = (short *)(*(long *)(lVar39 + 0x210) + (ulong)puVar45[2] * 4);
                    pbVar46 = (byte *)(psVar1 + 1);
                    bVar49 = *pbVar46;
                    if (bVar49 != 0) {
                      fVar73 = (float)uVar88 - (float)uVar70;
                      fVar78 = (float)((ulong)uVar70 >> 0x20);
                      fVar74 = (float)((ulong)uVar88 >> 0x20) - fVar78;
                      fVar75 = (float)uVar89 - (float)uVar71;
                      fVar80 = (float)((ulong)uVar71 >> 0x20);
                      fVar76 = (float)((ulong)uVar89 >> 0x20) - fVar80;
                      auVar8._4_4_ = fVar74;
                      auVar8._0_4_ = fVar73;
                      auVar8._8_4_ = fVar75;
                      auVar8._12_4_ = fVar76;
                      auVar9._4_4_ = fVar74;
                      auVar9._0_4_ = fVar73;
                      auVar9._8_4_ = fVar75;
                      auVar9._12_4_ = fVar76;
                      auVar82 = NEON_ext(auVar8,auVar9,4,1);
                      fVar77 = (float)uVar106 - (float)uVar70;
                      fVar78 = (float)((ulong)uVar106 >> 0x20) - fVar78;
                      fVar79 = (float)uVar93 - (float)uVar71;
                      fVar80 = (float)((ulong)uVar93 >> 0x20) - fVar80;
                      auVar14._4_4_ = fVar78;
                      auVar14._0_4_ = fVar77;
                      auVar14._8_4_ = fVar79;
                      auVar14._12_4_ = fVar80;
                      auVar15._4_4_ = fVar78;
                      auVar15._0_4_ = fVar77;
                      auVar15._8_4_ = fVar79;
                      auVar15._12_4_ = fVar80;
                      auVar83 = NEON_ext(auVar14,auVar15,4,1);
                      auVar90 = NEON_ext(auVar82,auVar82,8,1);
                      auVar94 = NEON_ext(auVar83,auVar83,8,1);
                      uVar88 = NEON_rev64(auVar90._0_8_,4);
                      uVar89 = NEON_rev64(auVar94._0_8_,4);
                      bVar48 = 0;
                      auVar86._0_4_ = fVar73 * auVar83._0_4_ - fVar77 * auVar82._0_4_;
                      auVar86._4_4_ = fVar74 * auVar83._4_4_ - fVar78 * auVar82._4_4_;
                      auVar86._8_4_ = fVar75 * (float)uVar89 - fVar79 * (float)uVar88;
                      auVar86._12_4_ =
                           fVar76 * (float)((ulong)uVar89 >> 0x20) -
                           fVar80 * (float)((ulong)uVar88 >> 0x20);
                      auVar82 = NEON_ext(auVar86,auVar86,4,1);
                      fVar81 = auVar82._0_4_;
                      fVar92 = auVar82._4_4_;
                      do {
                        pfVar55 = (float *)(*(long *)(lVar39 + 0x200) +
                                           (ulong)(ushort)(*psVar1 + (ushort)bVar48) * 8);
                        fVar124 = *pfVar55;
                        fVar104 = pfVar55[1];
                        fVar101 = (float)((ulong)uVar70 >> 0x20);
                        fVar72 = (float)((ulong)uVar71 >> 0x20);
                        fVar91 = (float)uVar70 + fVar73 * fVar124 + fVar77 * fVar104;
                        fVar99 = fVar101 + fVar74 * fVar124 + fVar78 * fVar104;
                        fVar102 = (float)uVar71 + fVar75 * fVar124 + fVar79 * fVar104;
                        fVar103 = fVar72 + fVar76 * fVar124 + fVar80 * fVar104;
                        fVar124 = (fStack_270 - local_280) * (fVar91 - local_280);
                        fVar104 = (fStack_26c - fStack_27c) * (fVar99 - fStack_27c);
                        uVar119 = (undefined1)((uint)fVar104 >> 8);
                        uVar121 = (undefined1)((uint)fVar104 >> 0x10);
                        uVar123 = (undefined1)((uint)fVar104 >> 0x18);
                        fVar128 = (fStack_268 - fStack_278) * (fVar102 - fStack_278);
                        fVar129 = (fStack_264 - fStack_274) * (fVar103 - fStack_274);
                        auVar28[4] = SUB41(fVar104,0);
                        auVar28._0_4_ = fVar124;
                        auVar28[5] = uVar119;
                        auVar28[6] = uVar121;
                        auVar28[7] = uVar123;
                        auVar28._8_4_ = fVar128;
                        auVar28._12_4_ = fVar129;
                        auVar29[4] = SUB41(fVar104,0);
                        auVar29._0_4_ = fVar124;
                        auVar29[5] = uVar119;
                        auVar29[6] = uVar121;
                        auVar29[7] = uVar123;
                        auVar29._8_4_ = fVar128;
                        auVar29._12_4_ = fVar129;
                        auVar82 = NEON_ext(auVar28,auVar29,8,1);
                        fVar124 = local_24c * (fVar124 + fVar104 + auVar82._0_4_);
                        fVar104 = fVar124;
                        if (1.0 < fVar124) {
                          fVar104 = 1.0;
                        }
                        uVar119 = 0;
                        uVar121 = 0;
                        uVar123 = 0;
                        uVar127 = 0;
                        if (0.0 <= fVar124) {
                          uVar119 = SUB41(fVar104,0);
                          uVar121 = (undefined1)((uint)fVar104 >> 8);
                          uVar123 = (undefined1)((uint)fVar104 >> 0x10);
                          uVar127 = (undefined1)((uint)fVar104 >> 0x18);
                        }
                        fVar124 = (float)CONCAT13(uVar127,CONCAT12(uVar123,CONCAT11(uVar121,uVar119)
                                                                  ));
                        fVar91 = fVar91 - (local_280 + (fStack_270 - local_280) * fVar124);
                        fVar99 = fVar99 - (fStack_27c + (fStack_26c - fStack_27c) * fVar124);
                        fVar102 = fVar102 - (fStack_278 + (fStack_268 - fStack_278) * fVar124);
                        fVar129 = fVar91 * fVar91 + fVar99 * fVar99 + fVar102 * fVar102;
                        fVar100 = fVar91 * fVar91 + fVar99 * fVar99 + fVar102 * fVar102;
                        uVar89 = CONCAT44(fVar100,fVar129);
                        uVar88 = NEON_frsqrte(uVar89,4);
                        fVar104 = (float)uVar88;
                        fVar128 = (float)((ulong)uVar88 >> 0x20);
                        uVar88 = NEON_frsqrts(uVar89,CONCAT44(fVar128 * fVar128,fVar104 * fVar104),4
                                             );
                        fVar104 = fVar104 * (float)uVar88;
                        fVar128 = fVar128 * (float)((ulong)uVar88 >> 0x20);
                        uVar88 = NEON_frsqrts(uVar89,CONCAT44(fVar128 * fVar128,fVar104 * fVar104),4
                                             );
                        iVar125 = -(uint)(fVar129 <= 0.0);
                        iVar126 = -(uint)(fVar100 <= 0.0);
                        fVar104 = (float)uVar88 * fVar104;
                        fVar128 = (float)((ulong)uVar88 >> 0x20) * fVar128;
                        bVar113 = SUB41(fVar104,0) & ~(byte)iVar125;
                        bVar114 = (byte)((uint)fVar104 >> 8) & ~(byte)((uint)iVar125 >> 8);
                        bVar115 = (byte)((uint)fVar104 >> 0x10) & ~(byte)((uint)iVar125 >> 0x10);
                        bVar116 = (byte)((uint)fVar104 >> 0x18) & ~(byte)((uint)iVar125 >> 0x18);
                        bVar117 = SUB41(fVar128,0) & ~(byte)iVar126;
                        bVar118 = (byte)((uint)fVar128 >> 8) & ~(byte)((uint)iVar126 >> 8);
                        bVar120 = (byte)((uint)fVar128 >> 0x10) & ~(byte)((uint)iVar126 >> 0x10);
                        bVar122 = (byte)((uint)fVar128 >> 0x18) & ~(byte)((uint)iVar126 >> 0x18);
                        fVar104 = (fVar129 * (float)CONCAT13(bVar116,CONCAT12(bVar115,CONCAT11(
                                                  bVar114,bVar113))) - local_250) - fVar69;
                        fVar128 = (fVar100 * (float)CONCAT13(bVar122,CONCAT12(bVar120,CONCAT11(
                                                  bVar118,bVar117))) - local_250) - fVar69;
                        if (fVar104 < 0.0) {
                          fVar129 = (float)CONCAT13(bVar116,CONCAT12(bVar115,CONCAT11(bVar114,
                                                  bVar113)));
                          fVar105 = auVar86._0_4_ * auVar86._0_4_ +
                                    fVar81 * fVar81 + fVar92 * fVar92;
                          fVar111 = auVar86._0_4_ * auVar86._0_4_ +
                                    fVar81 * fVar81 + fVar92 * fVar92;
                          uVar89 = CONCAT44(fVar111,fVar105);
                          uVar88 = NEON_frsqrte(uVar89,4);
                          fVar100 = (float)uVar88;
                          fVar112 = (float)((ulong)uVar88 >> 0x20);
                          uVar88 = NEON_frsqrts(uVar89,CONCAT44(fVar112 * fVar112,fVar100 * fVar100)
                                                ,4);
                          fVar100 = fVar100 * (float)uVar88;
                          fVar112 = fVar112 * (float)((ulong)uVar88 >> 0x20);
                          iVar125 = -(uint)(fVar105 <= 0.0);
                          iVar126 = -(uint)(fVar111 <= 0.0);
                          uVar88 = NEON_frsqrts(uVar89,CONCAT44(fVar112 * fVar112,fVar100 * fVar100)
                                                ,4);
                          fVar100 = (float)uVar88 * fVar100;
                          fVar112 = (float)((ulong)uVar88 >> 0x20) * fVar112;
                          fVar100 = (float)CONCAT13((byte)((uint)fVar100 >> 0x18) &
                                                    ~(byte)((uint)iVar125 >> 0x18),
                                                    CONCAT12((byte)((uint)fVar100 >> 0x10) &
                                                             ~(byte)((uint)iVar125 >> 0x10),
                                                             CONCAT11((byte)((uint)fVar100 >> 8) &
                                                                      ~(byte)((uint)iVar125 >> 8),
                                                                      SUB41(fVar100,0) &
                                                                      ~(byte)iVar125)));
                          auVar109._0_4_ = fVar81 * fVar100;
                          fVar112 = (float)(CONCAT17((byte)((uint)fVar112 >> 0x18) &
                                                     ~(byte)((uint)iVar126 >> 0x18),
                                                     CONCAT16((byte)((uint)fVar112 >> 0x10) &
                                                              ~(byte)((uint)iVar126 >> 0x10),
                                                              CONCAT15((byte)((uint)fVar112 >> 8) &
                                                                       ~(byte)((uint)iVar126 >> 8),
                                                                       CONCAT14(SUB41(fVar112,0) &
                                                                                ~(byte)iVar126,
                                                                                fVar100)))) >> 0x20)
                          ;
                          auVar109._4_4_ = fVar92 * fVar112;
                          auVar109._8_4_ = auVar86._0_4_ * fVar100;
                          fVar112 = auVar86._4_4_ * fVar112;
                          fVar91 = fVar91 * (float)CONCAT13(bVar116,CONCAT12(bVar115,CONCAT11(
                                                  bVar114,bVar113))) * auVar109._0_4_;
                          fVar99 = fVar99 * (float)CONCAT13(bVar122,CONCAT12(bVar120,CONCAT11(
                                                  bVar118,bVar117))) * auVar109._4_4_;
                          uVar119 = (undefined1)((uint)fVar99 >> 8);
                          uVar121 = (undefined1)((uint)fVar99 >> 0x10);
                          uVar123 = (undefined1)((uint)fVar99 >> 0x18);
                          fVar102 = fVar102 * fVar129 * auVar109._8_4_;
                          fVar124 = (fVar103 - (fStack_274 + (fStack_264 - fStack_274) * fVar124)) *
                                    (float)(CONCAT17(bVar122,CONCAT16(bVar120,CONCAT15(bVar118,
                                                  CONCAT14(bVar117,fVar129)))) >> 0x20) * fVar112;
                          auVar20[4] = SUB41(fVar99,0);
                          auVar20._0_4_ = fVar91;
                          auVar20[5] = uVar119;
                          auVar20[6] = uVar121;
                          auVar20[7] = uVar123;
                          auVar20._8_4_ = fVar102;
                          auVar20._12_4_ = fVar124;
                          auVar21[4] = SUB41(fVar99,0);
                          auVar21._0_4_ = fVar91;
                          auVar21[5] = uVar119;
                          auVar21[6] = uVar121;
                          auVar21[7] = uVar123;
                          auVar21._8_4_ = fVar102;
                          auVar21._12_4_ = fVar124;
                          auVar82 = NEON_ext(auVar20,auVar21,8,1);
                          if (fVar91 + fVar99 + auVar82._0_4_ < 0.0) {
                            auVar109._0_4_ = -auVar109._0_4_;
                            auVar109._4_4_ = -auVar109._4_4_;
                            auVar109._8_4_ = -auVar109._8_4_;
                          }
                          uVar70 = CONCAT44(fVar101 - fVar128 * auVar109._4_4_,
                                            (float)uVar70 - fVar104 * auVar109._0_4_);
                          uVar71 = CONCAT44(fVar72 - fVar128 * fVar112,
                                            (float)uVar71 - fVar104 * auVar109._8_4_);
                          puVar3 = (undefined8 *)(lVar65 + uVar61 * 0x10);
                          puVar3[1] = uVar71;
                          *puVar3 = uVar70;
                          bVar49 = *pbVar46;
                        }
                        bVar48 = bVar48 + 1;
                      } while (bVar48 < bVar49);
                      bVar48 = *pbVar64;
                    }
                    bVar62 = bVar62 + 1;
                    if (bVar48 <= bVar62) break;
                    lVar42 = *(long *)(param_4 + 0x20);
                  }
                }
              }
              lVar58 = lVar58 + 1;
            } while (lVar58 != (int)uVar51);
            if (*(int *)(lVar39 + 0x278) != 0) {
              lVar58 = 0;
              do {
                uVar61 = (ulong)*(ushort *)(lVar40 + lVar58 * 2);
                if (((*(char *)(local_300 + (uVar61 - local_2f0)) <= *pcVar57) &&
                    (*(char *)(uStack_308 + (uVar61 - local_2f0)) == '\0')) &&
                   (uVar63 = (ulong)*(ushort *)(*(long *)(lVar39 + 0x2c0) + uVar61 * 2),
                   uVar63 != 0xffff)) {
                  fVar69 = *(float *)(*(long *)(lVar39 + 0x40) + uVar61 * 0x10 + 8);
                  lVar47 = *(long *)(lVar39 + 0x270) + uVar63 * 8;
                  pbVar64 = (byte *)(lVar47 + 6);
                  bVar48 = *pbVar64;
                  if (bVar48 != 0) {
                    lVar65 = *(long *)(param_4 + 0x20);
                    puVar3 = (undefined8 *)(lVar65 + uVar61 * 0x10);
                    uVar71 = puVar3[1];
                    uVar70 = *puVar3;
                    bVar62 = 0;
                    lVar42 = lVar65;
                    while( true ) {
                      puVar45 = (ushort *)
                                (*(long *)(lVar39 + 0x260) +
                                (ulong)(ushort)(*(short *)(lVar47 + 2) + (ushort)bVar62) * 4);
                      puVar3 = (undefined8 *)(lVar42 + (ulong)*puVar45 * 0x10);
                      uVar89 = puVar3[1];
                      uVar88 = *puVar3;
                      puVar45 = (ushort *)(*(long *)(lVar39 + 0x1f0) + (ulong)puVar45[1] * 4);
                      puVar41 = puVar45 + 1;
                      bVar49 = (byte)*puVar41;
                      if (bVar49 != 0) {
                        fVar78 = (float)uVar70;
                        uVar63 = (ulong)uVar70 >> 0x20;
                        fVar80 = (float)uVar71;
                        uVar32 = (ulong)uVar71 >> 0x20;
                        bVar48 = 0;
                        do {
                          fVar73 = *(float *)(*(long *)(lVar39 + 0x1e0) +
                                             ((ulong)((uint)*puVar45 + (uint)bVar48) & 0xffff) * 4);
                          fVar76 = (float)uVar70 + ((float)uVar88 - fVar78) * fVar73;
                          fVar74 = (float)((ulong)uVar70 >> 0x20);
                          fVar77 = fVar74 + ((float)((ulong)uVar88 >> 0x20) - (float)uVar63) *
                                            fVar73;
                          fVar79 = (float)uVar71 + ((float)uVar89 - fVar80) * fVar73;
                          fVar75 = (float)((ulong)uVar71 >> 0x20);
                          fVar81 = fVar75 + ((float)((ulong)uVar89 >> 0x20) - (float)uVar32) *
                                            fVar73;
                          auVar97._0_4_ = (fStack_270 - local_280) * (fVar76 - local_280);
                          auVar97._4_4_ = (fStack_26c - fStack_27c) * (fVar77 - fStack_27c);
                          auVar97._8_4_ = (fStack_268 - fStack_278) * (fVar79 - fStack_278);
                          auVar97._12_4_ = (fStack_264 - fStack_274) * (fVar81 - fStack_274);
                          auVar82 = NEON_ext(auVar97,auVar97,8,1);
                          fVar92 = local_24c * (auVar97._0_4_ + auVar97._4_4_ + auVar82._0_4_);
                          fVar73 = fVar92;
                          if (1.0 < fVar92) {
                            fVar73 = 1.0;
                          }
                          fVar124 = 0.0;
                          if (0.0 <= fVar92) {
                            fVar124 = fVar73;
                          }
                          fVar76 = fVar76 - (local_280 + (fStack_270 - local_280) * fVar124);
                          fVar77 = fVar77 - (fStack_27c + (fStack_26c - fStack_27c) * fVar124);
                          fVar79 = fVar79 - (fStack_278 + (fStack_268 - fStack_278) * fVar124);
                          fVar73 = fVar76 * fVar76 + fVar77 * fVar77 + fVar79 * fVar79;
                          fVar92 = fVar76 * fVar76 + fVar77 * fVar77 + fVar79 * fVar79;
                          uVar106 = CONCAT44(fVar92,fVar73);
                          uVar93 = NEON_frsqrte(uVar106,4);
                          fVar104 = (float)uVar93;
                          fVar101 = (float)((ulong)uVar93 >> 0x20);
                          uVar93 = NEON_frsqrts(uVar106,CONCAT44(fVar101 * fVar101,fVar104 * fVar104
                                                                ),4);
                          fVar104 = fVar104 * (float)uVar93;
                          fVar101 = fVar101 * (float)((ulong)uVar93 >> 0x20);
                          uVar106 = NEON_frsqrts(uVar106,CONCAT44(fVar101 * fVar101,
                                                                  fVar104 * fVar104),4);
                          iVar125 = -(uint)(fVar73 <= 0.0);
                          iVar126 = -(uint)(fVar92 <= 0.0);
                          fVar104 = (float)uVar106 * fVar104;
                          fVar101 = (float)((ulong)uVar106 >> 0x20) * fVar101;
                          fVar104 = (float)CONCAT13((byte)((uint)fVar104 >> 0x18) &
                                                    ~(byte)((uint)iVar125 >> 0x18),
                                                    CONCAT12((byte)((uint)fVar104 >> 0x10) &
                                                             ~(byte)((uint)iVar125 >> 0x10),
                                                             CONCAT11((byte)((uint)fVar104 >> 8) &
                                                                      ~(byte)((uint)iVar125 >> 8),
                                                                      SUB41(fVar104,0) &
                                                                      ~(byte)iVar125)));
                          fVar101 = (float)(CONCAT17((byte)((uint)fVar101 >> 0x18) &
                                                     ~(byte)((uint)iVar126 >> 0x18),
                                                     CONCAT16((byte)((uint)fVar101 >> 0x10) &
                                                              ~(byte)((uint)iVar126 >> 0x10),
                                                              CONCAT15((byte)((uint)fVar101 >> 8) &
                                                                       ~(byte)((uint)iVar126 >> 8),
                                                                       CONCAT14(SUB41(fVar101,0) &
                                                                                ~(byte)iVar126,
                                                                                fVar104)))) >> 0x20)
                          ;
                          fVar73 = (fVar73 * fVar104 - local_250) - fVar69;
                          fVar92 = (fVar92 * fVar101 - local_250) - fVar69;
                          if (fVar73 < 0.0) {
                            uVar70 = CONCAT44(fVar74 - fVar77 * fVar101 * fVar92,
                                              (float)uVar70 - fVar76 * fVar104 * fVar73);
                            uVar71 = CONCAT44(fVar75 - (fVar81 - (fStack_274 +
                                                                 (fStack_264 - fStack_274) * fVar124
                                                                 )) * fVar101 * fVar92,
                                              (float)uVar71 - fVar79 * fVar104 * fVar73);
                            puVar3 = (undefined8 *)(lVar65 + uVar61 * 0x10);
                            puVar3[1] = uVar71;
                            *puVar3 = uVar70;
                            bVar49 = (byte)*puVar41;
                          }
                          bVar48 = bVar48 + 1;
                        } while (bVar48 < bVar49);
                        bVar48 = *pbVar64;
                      }
                      bVar62 = bVar62 + 1;
                      if (bVar48 <= bVar62) break;
                      lVar42 = *(long *)(param_4 + 0x20);
                    }
                  }
                }
                lVar58 = lVar58 + 1;
              } while (lVar58 != (int)uVar51);
            }
          }
        }
        else if (0 < (int)uVar51) {
          lVar58 = 0;
          pcVar57 = (char *)(lVar52 + lVar54 * 0xa0 + 0x9c);
          do {
            uVar61 = (ulong)*(ushort *)(lVar40 + lVar58 * 2);
            if (((*(char *)(local_300 + (uVar61 - local_2f0)) <= *pcVar57) &&
                (*(char *)(uStack_308 + (uVar61 - local_2f0)) == '\0')) &&
               (uVar63 = (ulong)*(ushort *)(*(long *)(lVar39 + 0x2b0) + uVar61 * 2),
               uVar63 != 0xffff)) {
              lVar47 = *(long *)(lVar39 + 0x250);
              fVar69 = *(float *)(*(long *)(lVar39 + 0x40) + uVar61 * 0x10 + 8);
              pbVar64 = (byte *)(lVar47 + uVar63 * 6 + 4);
              bVar48 = *pbVar64;
              if (bVar48 != 0) {
                lVar65 = *(long *)(param_4 + 0x20);
                bVar62 = 0;
                puVar3 = (undefined8 *)(lVar65 + uVar61 * 0x10);
                uVar71 = puVar3[1];
                uVar70 = *puVar3;
                lVar42 = lVar65;
                while( true ) {
                  puVar45 = (ushort *)
                            (*(long *)(lVar39 + 0x240) +
                            ((ulong)((uint)*(ushort *)(lVar47 + uVar63 * 6 + 2) + (uint)bVar62) &
                            0xffff) * 6);
                  puVar3 = (undefined8 *)(lVar42 + (ulong)*puVar45 * 0x10);
                  uVar89 = puVar3[1];
                  uVar88 = *puVar3;
                  puVar3 = (undefined8 *)(lVar42 + (ulong)puVar45[1] * 0x10);
                  uVar93 = puVar3[1];
                  uVar106 = *puVar3;
                  psVar1 = (short *)(*(long *)(lVar39 + 0x210) + (ulong)puVar45[2] * 4);
                  pbVar46 = (byte *)(psVar1 + 1);
                  bVar49 = *pbVar46;
                  if (bVar49 != 0) {
                    fVar73 = (float)uVar88 - (float)uVar70;
                    fVar78 = (float)((ulong)uVar70 >> 0x20);
                    fVar74 = (float)((ulong)uVar88 >> 0x20) - fVar78;
                    fVar75 = (float)uVar89 - (float)uVar71;
                    fVar80 = (float)((ulong)uVar71 >> 0x20);
                    fVar76 = (float)((ulong)uVar89 >> 0x20) - fVar80;
                    auVar82._4_4_ = fVar74;
                    auVar82._0_4_ = fVar73;
                    auVar82._8_4_ = fVar75;
                    auVar82._12_4_ = fVar76;
                    auVar83._4_4_ = fVar74;
                    auVar83._0_4_ = fVar73;
                    auVar83._8_4_ = fVar75;
                    auVar83._12_4_ = fVar76;
                    auVar82 = NEON_ext(auVar82,auVar83,4,1);
                    fVar77 = (float)uVar106 - (float)uVar70;
                    fVar78 = (float)((ulong)uVar106 >> 0x20) - fVar78;
                    fVar79 = (float)uVar93 - (float)uVar71;
                    fVar80 = (float)((ulong)uVar93 >> 0x20) - fVar80;
                    auVar90._4_4_ = fVar78;
                    auVar90._0_4_ = fVar77;
                    auVar90._8_4_ = fVar79;
                    auVar90._12_4_ = fVar80;
                    auVar94._4_4_ = fVar78;
                    auVar94._0_4_ = fVar77;
                    auVar94._8_4_ = fVar79;
                    auVar94._12_4_ = fVar80;
                    auVar83 = NEON_ext(auVar90,auVar94,4,1);
                    auVar90 = NEON_ext(auVar82,auVar82,8,1);
                    auVar94 = NEON_ext(auVar83,auVar83,8,1);
                    uVar88 = NEON_rev64(auVar90._0_8_,4);
                    uVar89 = NEON_rev64(auVar94._0_8_,4);
                    bVar48 = 0;
                    auVar87._0_4_ = fVar73 * auVar83._0_4_ - fVar77 * auVar82._0_4_;
                    auVar87._4_4_ = fVar74 * auVar83._4_4_ - fVar78 * auVar82._4_4_;
                    auVar87._8_4_ = fVar75 * (float)uVar89 - fVar79 * (float)uVar88;
                    auVar87._12_4_ =
                         fVar76 * (float)((ulong)uVar89 >> 0x20) -
                         fVar80 * (float)((ulong)uVar88 >> 0x20);
                    auVar82 = NEON_ext(auVar87,auVar87,4,1);
                    fVar81 = auVar82._0_4_;
                    fVar92 = auVar82._4_4_;
                    do {
                      pfVar55 = (float *)(*(long *)(lVar39 + 0x200) +
                                         (ulong)(ushort)(*psVar1 + (ushort)bVar48) * 8);
                      fVar124 = *pfVar55;
                      fVar104 = pfVar55[1];
                      fVar101 = (float)((ulong)uVar70 >> 0x20);
                      fVar72 = (float)((ulong)uVar71 >> 0x20);
                      fVar91 = (float)uVar70 + fVar73 * fVar124 + fVar77 * fVar104;
                      fVar99 = fVar101 + fVar74 * fVar124 + fVar78 * fVar104;
                      fVar102 = (float)uVar71 + fVar75 * fVar124 + fVar79 * fVar104;
                      fVar103 = fVar72 + fVar76 * fVar124 + fVar80 * fVar104;
                      fVar124 = (fStack_270 - local_280) * (fVar91 - local_280);
                      fVar104 = (fStack_26c - fStack_27c) * (fVar99 - fStack_27c);
                      uVar119 = (undefined1)((uint)fVar104 >> 8);
                      uVar121 = (undefined1)((uint)fVar104 >> 0x10);
                      uVar123 = (undefined1)((uint)fVar104 >> 0x18);
                      fVar128 = (fStack_268 - fStack_278) * (fVar102 - fStack_278);
                      fVar129 = (fStack_264 - fStack_274) * (fVar103 - fStack_274);
                      auVar30[4] = SUB41(fVar104,0);
                      auVar30._0_4_ = fVar124;
                      auVar30[5] = uVar119;
                      auVar30[6] = uVar121;
                      auVar30[7] = uVar123;
                      auVar30._8_4_ = fVar128;
                      auVar30._12_4_ = fVar129;
                      auVar31[4] = SUB41(fVar104,0);
                      auVar31._0_4_ = fVar124;
                      auVar31[5] = uVar119;
                      auVar31[6] = uVar121;
                      auVar31[7] = uVar123;
                      auVar31._8_4_ = fVar128;
                      auVar31._12_4_ = fVar129;
                      auVar82 = NEON_ext(auVar30,auVar31,8,1);
                      fVar124 = local_24c * (fVar124 + fVar104 + auVar82._0_4_);
                      fVar104 = fVar124;
                      if (1.0 < fVar124) {
                        fVar104 = 1.0;
                      }
                      uVar119 = 0;
                      uVar121 = 0;
                      uVar123 = 0;
                      uVar127 = 0;
                      if (0.0 <= fVar124) {
                        uVar119 = SUB41(fVar104,0);
                        uVar121 = (undefined1)((uint)fVar104 >> 8);
                        uVar123 = (undefined1)((uint)fVar104 >> 0x10);
                        uVar127 = (undefined1)((uint)fVar104 >> 0x18);
                      }
                      fVar124 = (float)CONCAT13(uVar127,CONCAT12(uVar123,CONCAT11(uVar121,uVar119)))
                      ;
                      fVar91 = fVar91 - (local_280 + (fStack_270 - local_280) * fVar124);
                      fVar99 = fVar99 - (fStack_27c + (fStack_26c - fStack_27c) * fVar124);
                      fVar102 = fVar102 - (fStack_278 + (fStack_268 - fStack_278) * fVar124);
                      fVar129 = fVar91 * fVar91 + fVar99 * fVar99 + fVar102 * fVar102;
                      fVar100 = fVar91 * fVar91 + fVar99 * fVar99 + fVar102 * fVar102;
                      uVar89 = CONCAT44(fVar100,fVar129);
                      uVar88 = NEON_frsqrte(uVar89,4);
                      fVar104 = (float)uVar88;
                      fVar128 = (float)((ulong)uVar88 >> 0x20);
                      uVar88 = NEON_frsqrts(uVar89,CONCAT44(fVar128 * fVar128,fVar104 * fVar104),4);
                      fVar104 = fVar104 * (float)uVar88;
                      fVar128 = fVar128 * (float)((ulong)uVar88 >> 0x20);
                      uVar88 = NEON_frsqrts(uVar89,CONCAT44(fVar128 * fVar128,fVar104 * fVar104),4);
                      iVar125 = -(uint)(fVar129 <= 0.0);
                      iVar126 = -(uint)(fVar100 <= 0.0);
                      fVar104 = (float)uVar88 * fVar104;
                      fVar128 = (float)((ulong)uVar88 >> 0x20) * fVar128;
                      bVar113 = SUB41(fVar104,0) & ~(byte)iVar125;
                      bVar114 = (byte)((uint)fVar104 >> 8) & ~(byte)((uint)iVar125 >> 8);
                      bVar115 = (byte)((uint)fVar104 >> 0x10) & ~(byte)((uint)iVar125 >> 0x10);
                      bVar116 = (byte)((uint)fVar104 >> 0x18) & ~(byte)((uint)iVar125 >> 0x18);
                      bVar117 = SUB41(fVar128,0) & ~(byte)iVar126;
                      bVar118 = (byte)((uint)fVar128 >> 8) & ~(byte)((uint)iVar126 >> 8);
                      bVar120 = (byte)((uint)fVar128 >> 0x10) & ~(byte)((uint)iVar126 >> 0x10);
                      bVar122 = (byte)((uint)fVar128 >> 0x18) & ~(byte)((uint)iVar126 >> 0x18);
                      fVar104 = (fVar129 * (float)CONCAT13(bVar116,CONCAT12(bVar115,CONCAT11(bVar114
                                                  ,bVar113))) - local_250) - fVar69;
                      fVar128 = (fVar100 * (float)CONCAT13(bVar122,CONCAT12(bVar120,CONCAT11(bVar118
                                                  ,bVar117))) - local_250) - fVar69;
                      if (fVar104 < 0.0) {
                        fVar129 = (float)CONCAT13(bVar116,CONCAT12(bVar115,CONCAT11(bVar114,bVar113)
                                                                  ));
                        fVar105 = auVar87._0_4_ * auVar87._0_4_ + fVar81 * fVar81 + fVar92 * fVar92;
                        fVar111 = auVar87._0_4_ * auVar87._0_4_ + fVar81 * fVar81 + fVar92 * fVar92;
                        uVar89 = CONCAT44(fVar111,fVar105);
                        uVar88 = NEON_frsqrte(uVar89,4);
                        fVar100 = (float)uVar88;
                        fVar112 = (float)((ulong)uVar88 >> 0x20);
                        uVar88 = NEON_frsqrts(uVar89,CONCAT44(fVar112 * fVar112,fVar100 * fVar100),4
                                             );
                        fVar100 = fVar100 * (float)uVar88;
                        fVar112 = fVar112 * (float)((ulong)uVar88 >> 0x20);
                        iVar125 = -(uint)(fVar105 <= 0.0);
                        iVar126 = -(uint)(fVar111 <= 0.0);
                        uVar88 = NEON_frsqrts(uVar89,CONCAT44(fVar112 * fVar112,fVar100 * fVar100),4
                                             );
                        fVar100 = (float)uVar88 * fVar100;
                        fVar112 = (float)((ulong)uVar88 >> 0x20) * fVar112;
                        fVar100 = (float)CONCAT13((byte)((uint)fVar100 >> 0x18) &
                                                  ~(byte)((uint)iVar125 >> 0x18),
                                                  CONCAT12((byte)((uint)fVar100 >> 0x10) &
                                                           ~(byte)((uint)iVar125 >> 0x10),
                                                           CONCAT11((byte)((uint)fVar100 >> 8) &
                                                                    ~(byte)((uint)iVar125 >> 8),
                                                                    SUB41(fVar100,0) &
                                                                    ~(byte)iVar125)));
                        auVar110._0_4_ = fVar81 * fVar100;
                        fVar112 = (float)(CONCAT17((byte)((uint)fVar112 >> 0x18) &
                                                   ~(byte)((uint)iVar126 >> 0x18),
                                                   CONCAT16((byte)((uint)fVar112 >> 0x10) &
                                                            ~(byte)((uint)iVar126 >> 0x10),
                                                            CONCAT15((byte)((uint)fVar112 >> 8) &
                                                                     ~(byte)((uint)iVar126 >> 8),
                                                                     CONCAT14(SUB41(fVar112,0) &
                                                                              ~(byte)iVar126,fVar100
                                                                             )))) >> 0x20);
                        auVar110._4_4_ = fVar92 * fVar112;
                        auVar110._8_4_ = auVar87._0_4_ * fVar100;
                        fVar112 = auVar87._4_4_ * fVar112;
                        fVar91 = fVar91 * (float)CONCAT13(bVar116,CONCAT12(bVar115,CONCAT11(bVar114,
                                                  bVar113))) * auVar110._0_4_;
                        fVar99 = fVar99 * (float)CONCAT13(bVar122,CONCAT12(bVar120,CONCAT11(bVar118,
                                                  bVar117))) * auVar110._4_4_;
                        uVar119 = (undefined1)((uint)fVar99 >> 8);
                        uVar121 = (undefined1)((uint)fVar99 >> 0x10);
                        uVar123 = (undefined1)((uint)fVar99 >> 0x18);
                        fVar102 = fVar102 * fVar129 * auVar110._8_4_;
                        fVar124 = (fVar103 - (fStack_274 + (fStack_264 - fStack_274) * fVar124)) *
                                  (float)(CONCAT17(bVar122,CONCAT16(bVar120,CONCAT15(bVar118,
                                                  CONCAT14(bVar117,fVar129)))) >> 0x20) * fVar112;
                        auVar22[4] = SUB41(fVar99,0);
                        auVar22._0_4_ = fVar91;
                        auVar22[5] = uVar119;
                        auVar22[6] = uVar121;
                        auVar22[7] = uVar123;
                        auVar22._8_4_ = fVar102;
                        auVar22._12_4_ = fVar124;
                        auVar23[4] = SUB41(fVar99,0);
                        auVar23._0_4_ = fVar91;
                        auVar23[5] = uVar119;
                        auVar23[6] = uVar121;
                        auVar23[7] = uVar123;
                        auVar23._8_4_ = fVar102;
                        auVar23._12_4_ = fVar124;
                        auVar82 = NEON_ext(auVar22,auVar23,8,1);
                        if (fVar91 + fVar99 + auVar82._0_4_ < 0.0) {
                          auVar110._0_4_ = -auVar110._0_4_;
                          auVar110._4_4_ = -auVar110._4_4_;
                          auVar110._8_4_ = -auVar110._8_4_;
                        }
                        uVar70 = CONCAT44(fVar101 - fVar128 * auVar110._4_4_,
                                          (float)uVar70 - fVar104 * auVar110._0_4_);
                        uVar71 = CONCAT44(fVar72 - fVar128 * fVar112,
                                          (float)uVar71 - fVar104 * auVar110._8_4_);
                        puVar3 = (undefined8 *)(lVar65 + uVar61 * 0x10);
                        puVar3[1] = uVar71;
                        *puVar3 = uVar70;
                        bVar49 = *pbVar46;
                      }
                      bVar48 = bVar48 + 1;
                    } while (bVar48 < bVar49);
                    bVar48 = *pbVar64;
                  }
                  bVar62 = bVar62 + 1;
                  if (bVar48 <= bVar62) break;
                  lVar42 = *(long *)(param_4 + 0x20);
                }
              }
            }
            lVar58 = lVar58 + 1;
          } while (lVar58 != (int)uVar51);
          if (*(int *)(lVar39 + 0x238) != 0) {
            lVar58 = 0;
            do {
              uVar61 = (ulong)*(ushort *)(lVar40 + lVar58 * 2);
              if (((*(char *)(local_300 + (uVar61 - local_2f0)) <= *pcVar57) &&
                  (*(char *)(uStack_308 + (uVar61 - local_2f0)) == '\0')) &&
                 (uVar63 = (ulong)*(ushort *)(*(long *)(lVar39 + 0x2a0) + uVar61 * 2),
                 uVar63 != 0xffff)) {
                lVar47 = *(long *)(lVar39 + 0x230);
                fVar69 = *(float *)(*(long *)(lVar39 + 0x40) + uVar61 * 0x10 + 8);
                pbVar64 = (byte *)(lVar47 + uVar63 * 6 + 4);
                bVar48 = *pbVar64;
                if (bVar48 != 0) {
                  lVar65 = *(long *)(param_4 + 0x20);
                  bVar62 = 0;
                  puVar3 = (undefined8 *)(lVar65 + uVar61 * 0x10);
                  uVar71 = puVar3[1];
                  uVar70 = *puVar3;
                  lVar42 = lVar65;
                  while( true ) {
                    puVar45 = (ushort *)
                              (*(long *)(lVar39 + 0x220) +
                              (ulong)(ushort)(*(short *)(lVar47 + uVar63 * 6 + 2) + (ushort)bVar62)
                              * 4);
                    puVar3 = (undefined8 *)(lVar42 + (ulong)*puVar45 * 0x10);
                    uVar89 = puVar3[1];
                    uVar88 = *puVar3;
                    puVar45 = (ushort *)(*(long *)(lVar39 + 0x1f0) + (ulong)puVar45[1] * 4);
                    puVar41 = puVar45 + 1;
                    bVar49 = (byte)*puVar41;
                    if (bVar49 != 0) {
                      fVar78 = (float)uVar70;
                      uVar32 = (ulong)uVar70 >> 0x20;
                      fVar80 = (float)uVar71;
                      uVar33 = (ulong)uVar71 >> 0x20;
                      bVar48 = 0;
                      do {
                        fVar73 = *(float *)(*(long *)(lVar39 + 0x1e0) +
                                           ((ulong)((uint)*puVar45 + (uint)bVar48) & 0xffff) * 4);
                        fVar76 = (float)uVar70 + ((float)uVar88 - fVar78) * fVar73;
                        fVar74 = (float)((ulong)uVar70 >> 0x20);
                        fVar77 = fVar74 + ((float)((ulong)uVar88 >> 0x20) - (float)uVar32) * fVar73;
                        fVar79 = (float)uVar71 + ((float)uVar89 - fVar80) * fVar73;
                        fVar75 = (float)((ulong)uVar71 >> 0x20);
                        fVar81 = fVar75 + ((float)((ulong)uVar89 >> 0x20) - (float)uVar33) * fVar73;
                        auVar98._0_4_ = (fStack_270 - local_280) * (fVar76 - local_280);
                        auVar98._4_4_ = (fStack_26c - fStack_27c) * (fVar77 - fStack_27c);
                        auVar98._8_4_ = (fStack_268 - fStack_278) * (fVar79 - fStack_278);
                        auVar98._12_4_ = (fStack_264 - fStack_274) * (fVar81 - fStack_274);
                        auVar82 = NEON_ext(auVar98,auVar98,8,1);
                        fVar92 = local_24c * (auVar98._0_4_ + auVar98._4_4_ + auVar82._0_4_);
                        fVar73 = fVar92;
                        if (1.0 < fVar92) {
                          fVar73 = 1.0;
                        }
                        fVar124 = 0.0;
                        if (0.0 <= fVar92) {
                          fVar124 = fVar73;
                        }
                        fVar76 = fVar76 - (local_280 + (fStack_270 - local_280) * fVar124);
                        fVar77 = fVar77 - (fStack_27c + (fStack_26c - fStack_27c) * fVar124);
                        fVar79 = fVar79 - (fStack_278 + (fStack_268 - fStack_278) * fVar124);
                        fVar73 = fVar76 * fVar76 + fVar77 * fVar77 + fVar79 * fVar79;
                        fVar92 = fVar76 * fVar76 + fVar77 * fVar77 + fVar79 * fVar79;
                        uVar106 = CONCAT44(fVar92,fVar73);
                        uVar93 = NEON_frsqrte(uVar106,4);
                        fVar104 = (float)uVar93;
                        fVar101 = (float)((ulong)uVar93 >> 0x20);
                        uVar93 = NEON_frsqrts(uVar106,CONCAT44(fVar101 * fVar101,fVar104 * fVar104),
                                              4);
                        fVar104 = fVar104 * (float)uVar93;
                        fVar101 = fVar101 * (float)((ulong)uVar93 >> 0x20);
                        uVar106 = NEON_frsqrts(uVar106,CONCAT44(fVar101 * fVar101,fVar104 * fVar104)
                                               ,4);
                        iVar125 = -(uint)(fVar73 <= 0.0);
                        iVar126 = -(uint)(fVar92 <= 0.0);
                        fVar104 = (float)uVar106 * fVar104;
                        fVar101 = (float)((ulong)uVar106 >> 0x20) * fVar101;
                        fVar104 = (float)CONCAT13((byte)((uint)fVar104 >> 0x18) &
                                                  ~(byte)((uint)iVar125 >> 0x18),
                                                  CONCAT12((byte)((uint)fVar104 >> 0x10) &
                                                           ~(byte)((uint)iVar125 >> 0x10),
                                                           CONCAT11((byte)((uint)fVar104 >> 8) &
                                                                    ~(byte)((uint)iVar125 >> 8),
                                                                    SUB41(fVar104,0) &
                                                                    ~(byte)iVar125)));
                        fVar101 = (float)(CONCAT17((byte)((uint)fVar101 >> 0x18) &
                                                   ~(byte)((uint)iVar126 >> 0x18),
                                                   CONCAT16((byte)((uint)fVar101 >> 0x10) &
                                                            ~(byte)((uint)iVar126 >> 0x10),
                                                            CONCAT15((byte)((uint)fVar101 >> 8) &
                                                                     ~(byte)((uint)iVar126 >> 8),
                                                                     CONCAT14(SUB41(fVar101,0) &
                                                                              ~(byte)iVar126,fVar104
                                                                             )))) >> 0x20);
                        fVar73 = (fVar73 * fVar104 - local_250) - fVar69;
                        fVar92 = (fVar92 * fVar101 - local_250) - fVar69;
                        if (fVar73 < 0.0) {
                          uVar70 = CONCAT44(fVar74 - fVar77 * fVar101 * fVar92,
                                            (float)uVar70 - fVar76 * fVar104 * fVar73);
                          uVar71 = CONCAT44(fVar75 - (fVar81 - (fStack_274 +
                                                               (fStack_264 - fStack_274) * fVar124))
                                                     * fVar101 * fVar92,
                                            (float)uVar71 - fVar79 * fVar104 * fVar73);
                          puVar3 = (undefined8 *)(lVar65 + uVar61 * 0x10);
                          puVar3[1] = uVar71;
                          *puVar3 = uVar70;
                          bVar49 = (byte)*puVar41;
                        }
                        bVar48 = bVar48 + 1;
                      } while (bVar48 < bVar49);
                      bVar48 = *pbVar64;
                    }
                    bVar62 = bVar62 + 1;
                    if (bVar48 <= bVar62) break;
                    lVar42 = *(long *)(param_4 + 0x20);
                  }
                }
              }
              lVar58 = lVar58 + 1;
            } while (lVar58 != (int)uVar51);
          }
        }
        lVar58 = FUN_0043c4e0(DAT_04c6f050);
        lVar39 = DAT_04c6f058;
        if (lVar58 != 0) {
          lVar39 = lVar58;
        }
        if (((*(ulong *)(lVar39 + 0x10) < uVar44) || (*(long *)(lVar39 + 0x18) != lVar56 + uVar44))
           || (*(long *)(lVar39 + 0x28) == lVar56)) {
          FUN_00439980(lVar39,lVar56,uVar44);
        }
        else {
          *(long *)(lVar39 + 0x18) = lVar56;
        }
        lVar56 = FUN_0043c4e0(DAT_04c6f050);
        lVar39 = DAT_04c6f058;
        if (lVar56 != 0) {
          lVar39 = lVar56;
        }
        if (((*(ulong *)(lVar39 + 0x10) < uVar44) || (*(long *)(lVar39 + 0x18) != lVar43 + uVar44))
           || (*(long *)(lVar39 + 0x28) == lVar43)) {
          FUN_00439980(lVar39,lVar43,uVar44);
        }
        else {
          *(long *)(lVar39 + 0x18) = lVar43;
        }
      }
    }
    uVar2 = local_2c8;
    uStack_2d8 = (ulong)uStack_2d8._4_4_ << 0x20;
    lVar43 = FUN_0043c4e0(*(undefined2 *)PTR_DAT_04bd4d10);
    lVar39 = DAT_04c6f058;
    if (lVar43 != 0) {
      lVar39 = lVar43;
    }
    uVar44 = (ulong)(int)(uVar2 * 2 + 0x7f & 0xffffff80);
    uVar2 = uVar67;
    if (((*(ulong *)(lVar39 + 0x10) < uVar44) || (*(long *)(lVar39 + 0x18) != uVar44 + lVar40)) ||
       (*(long *)(lVar39 + 0x28) == lVar40)) {
      FUN_00439980(lVar39,lVar40);
    }
    else {
      *(long *)(lVar39 + 0x18) = lVar40;
    }
  }
  if (uVar68 == 0) goto LAB_005de1a8;
  if (param_7 == 0) {
    local_2a0 = 0;
    local_298 = 0x8000000000000000;
    local_288 = uVar68;
    lVar54 = FUN_0043c4e0(DAT_04c6f050);
    lVar52 = DAT_04c6f058;
    if (lVar54 != 0) {
      lVar52 = lVar54;
    }
    uVar44 = (ulong)(int)(uVar68 * 4 + 0x7f & 0xffffff80);
    if (*(ulong *)(lVar52 + 0x10) < uVar44) {
LAB_005dc7c0:
      lVar40 = FUN_00439510(lVar52,uVar44);
    }
    else {
      lVar40 = *(long *)(lVar52 + 0x18);
      if (*(ulong *)(lVar52 + 0x20) < lVar40 + uVar44) goto LAB_005dc7c0;
      *(ulong *)(lVar52 + 0x18) = lVar40 + uVar44;
    }
    local_298 = CONCAT44(uVar68,(undefined4)local_298) | 0x8000000000000000;
    local_310 = 0;
    uStack_308 = 0x8000000000000000;
    local_2f8 = CONCAT44(local_2f8._4_4_,uVar68);
    local_2a0 = lVar40;
    local_290 = lVar40;
    lVar54 = FUN_0043c4e0(DAT_04c6f050);
    lVar52 = DAT_04c6f058;
    if (lVar54 != 0) {
      lVar52 = lVar54;
    }
    if (*(ulong *)(lVar52 + 0x10) < uVar44) {
LAB_005dd3d4:
      lVar54 = FUN_00439510(lVar52,uVar44);
    }
    else {
      lVar54 = *(long *)(lVar52 + 0x18);
      if (*(ulong *)(lVar52 + 0x20) < lVar54 + uVar44) goto LAB_005dd3d4;
      *(ulong *)(lVar52 + 0x18) = lVar54 + uVar44;
    }
    local_298 = CONCAT44(local_298._4_4_,uVar68);
    uStack_308 = CONCAT44(uVar68,uVar68) | 0x8000000000000000;
    if (0 < (int)uVar68) {
      uVar44 = 0;
      do {
        uVar61 = uVar44 & 0xffff;
        uVar2 = (int)uVar44 + 1;
        uVar44 = (ulong)uVar2;
        lVar39 = uVar61 * 4;
        lVar52 = *(long *)(lVar60 + 0x40) + (ulong)*(ushort *)(lVar38 + uVar61 * 2) * 0x10;
        *(undefined4 *)(lVar40 + lVar39) = *(undefined4 *)(lVar52 + 8);
        *(undefined4 *)(lVar54 + lVar39) = *(undefined4 *)(lVar52 + 0xc);
      } while ((int)(uVar2 & 0xffff) < (int)uVar68);
    }
    local_310 = lVar54;
    local_300 = lVar54;
    FUN_005efee0(param_1,lVar53,&local_2c0,&local_2a0,&local_310,param_4);
    iVar125 = (int)local_2f8;
    uStack_308 = uStack_308 & 0xffffffff00000000;
    lVar60 = FUN_0043c4e0(DAT_04c6f050);
    lVar52 = DAT_04c6f058;
    if (lVar60 != 0) {
      lVar52 = lVar60;
    }
    uVar44 = (ulong)(int)(iVar125 * 4 + 0x7fU & 0xffffff80);
    if (((*(ulong *)(lVar52 + 0x10) < uVar44) || (*(long *)(lVar52 + 0x18) != lVar54 + uVar44)) ||
       (*(long *)(lVar52 + 0x28) == lVar54)) {
      FUN_00439980(lVar52,lVar54);
    }
    else {
      *(long *)(lVar52 + 0x18) = lVar54;
    }
    uVar2 = local_288;
    local_298 = local_298 & 0xffffffff00000000;
    lVar60 = FUN_0043c4e0(DAT_04c6f050);
    lVar52 = DAT_04c6f058;
    if (lVar60 != 0) {
      lVar52 = lVar60;
    }
    uVar44 = (ulong)(int)(uVar2 * 4 + 0x7f & 0xffffff80);
    if (((uVar44 <= *(ulong *)(lVar52 + 0x10)) && (*(long *)(lVar52 + 0x18) == lVar40 + uVar44)) &&
       (*(long *)(lVar52 + 0x28) != lVar40)) {
      *(long *)(lVar52 + 0x18) = lVar40;
      goto LAB_005de1a8;
    }
  }
  else {
    lVar40 = FUN_0043c4e0(DAT_04c6f050);
    lVar39 = DAT_04c6f058;
    if (lVar40 != 0) {
      lVar39 = lVar40;
    }
    uVar44 = (ulong)(int)(uVar68 * 4 + 0x7f & 0xffffff80);
    if (*(ulong *)(lVar39 + 0x10) < uVar44) {
LAB_005dc754:
      lVar40 = FUN_00439510(lVar39,uVar44);
    }
    else {
      lVar40 = *(long *)(lVar39 + 0x18);
      if (*(ulong *)(lVar39 + 0x20) < lVar40 + uVar44) goto LAB_005dc754;
      *(ulong *)(lVar39 + 0x18) = lVar40 + uVar44;
    }
    lVar43 = FUN_0043c4e0(DAT_04c6f050);
    lVar39 = DAT_04c6f058;
    if (lVar43 != 0) {
      lVar39 = lVar43;
    }
    if (*(ulong *)(lVar39 + 0x10) < uVar44) {
LAB_005dc804:
      lVar43 = FUN_00439510(lVar39,uVar44);
    }
    else {
      lVar43 = *(long *)(lVar39 + 0x18);
      if (*(ulong *)(lVar39 + 0x20) < lVar43 + uVar44) goto LAB_005dc804;
      *(ulong *)(lVar39 + 0x18) = lVar43 + uVar44;
    }
    if (0 < (int)uVar68) {
      uVar61 = 0;
      do {
        uVar63 = uVar61 & 0xffff;
        uVar51 = (int)uVar61 + 1;
        uVar61 = (ulong)uVar51;
        lVar56 = uVar63 * 4;
        lVar39 = *(long *)(lVar60 + 0x40) + (ulong)*(ushort *)(lVar38 + uVar63 * 2) * 0x10;
        *(undefined4 *)(lVar40 + lVar56) = *(undefined4 *)(lVar39 + 8);
        *(undefined4 *)(lVar43 + lVar56) = *(undefined4 *)(lVar39 + 0xc);
      } while ((int)(uVar51 & 0xffff) < (int)uVar68);
    }
    lVar52 = lVar52 + lVar54 * 0xa0;
    lVar60 = *(long *)(lVar53 + 0x88);
    fVar81 = (float)((ulong)*(undefined8 *)(lVar60 + 0x20) >> 0x20);
    fVar74 = (float)*(undefined8 *)(lVar52 + 0x30);
    fVar75 = (float)((ulong)*(undefined8 *)(lVar52 + 0x30) >> 0x20);
    fVar76 = (float)*(undefined8 *)(lVar52 + 0x38);
    fVar77 = (float)((ulong)*(undefined8 *)(lVar52 + 0x38) >> 0x20);
    fVar79 = (float)*(undefined8 *)(lVar60 + 0x20);
    fVar69 = (float)*(undefined8 *)(lVar52 + 0x20);
    fVar78 = (float)((ulong)*(undefined8 *)(lVar52 + 0x20) >> 0x20);
    fVar80 = (float)*(undefined8 *)(lVar52 + 0x28);
    fVar73 = (float)((ulong)*(undefined8 *)(lVar52 + 0x28) >> 0x20);
    fVar101 = (float)*(undefined8 *)(lVar52 + 0x48);
    fVar72 = (float)((ulong)*(undefined8 *)(lVar52 + 0x48) >> 0x20);
    fVar124 = (float)*(undefined8 *)(lVar52 + 0x40);
    fVar104 = (float)((ulong)*(undefined8 *)(lVar52 + 0x40) >> 0x20);
    fVar102 = (float)*(undefined8 *)(lVar52 + 0x58);
    fVar103 = (float)((ulong)*(undefined8 *)(lVar52 + 0x58) >> 0x20);
    fVar91 = (float)*(undefined8 *)(lVar52 + 0x50);
    fVar99 = (float)((ulong)*(undefined8 *)(lVar52 + 0x50) >> 0x20);
    fVar92 = (float)*(undefined8 *)(lVar60 + 0x28);
    local_310 = CONCAT44(fVar99 + fVar104 * fVar92 + fVar78 * fVar79 + fVar75 * fVar81,
                         fVar91 + fVar124 * fVar92 + fVar69 * fVar79 + fVar74 * fVar81);
    uStack_308 = CONCAT44(fVar103 + fVar72 * fVar92 + fVar73 * fVar79 + fVar77 * fVar81,
                          fVar102 + fVar101 * fVar92 + fVar80 * fVar79 + fVar76 * fVar81);
    fVar79 = (float)*(undefined8 *)(lVar60 + 0x30);
    fVar81 = (float)((ulong)*(undefined8 *)(lVar60 + 0x30) >> 0x20);
    fVar92 = (float)*(undefined8 *)(lVar60 + 0x38);
    local_2e0 = CONCAT44(fVar99 + fVar104 * fVar92 + fVar78 * fVar79 + fVar75 * fVar81,
                         fVar91 + fVar124 * fVar92 + fVar69 * fVar79 + fVar74 * fVar81);
    uStack_2d8 = CONCAT44(fVar103 + fVar72 * fVar92 + fVar73 * fVar79 + fVar77 * fVar81,
                          fVar102 + fVar101 * fVar92 + fVar80 * fVar79 + fVar76 * fVar81);
    FUN_0053dad0(*(undefined4 *)(lVar60 + 0x50),&local_2a0,&local_310,&local_2e0);
    lVar52 = *(long *)(param_4 + 0x18);
    if (param_7 == 2) {
      if (0 < (int)uVar2) {
        lVar60 = 0;
        do {
          uVar61 = (ulong)*(ushort *)(lVar38 + lVar60 * 2);
          uVar63 = (ulong)*(ushort *)(*(long *)(lVar52 + 0x2d0) + uVar61 * 2);
          if (uVar63 != 0xffff) {
            fVar69 = *(float *)(*(long *)(lVar52 + 0x40) + uVar61 * 0x10 + 8);
            lVar53 = *(long *)(lVar52 + 0x290) + uVar63 * 8;
            pbVar64 = (byte *)(lVar53 + 6);
            bVar48 = *pbVar64;
            if (bVar48 != 0) {
              lVar39 = *(long *)(param_4 + 0x20);
              puVar3 = (undefined8 *)(lVar39 + uVar61 * 0x10);
              uVar71 = puVar3[1];
              uVar70 = *puVar3;
              bVar62 = 0;
              lVar54 = lVar39;
              while( true ) {
                puVar45 = (ushort *)
                          (*(long *)(lVar52 + 0x280) +
                          ((ulong)((uint)*(ushort *)(lVar53 + 2) + (uint)bVar62) & 0xffff) * 6);
                puVar3 = (undefined8 *)(lVar54 + (ulong)*puVar45 * 0x10);
                uVar89 = puVar3[1];
                uVar88 = *puVar3;
                puVar3 = (undefined8 *)(lVar54 + (ulong)puVar45[1] * 0x10);
                uVar93 = puVar3[1];
                uVar106 = *puVar3;
                psVar1 = (short *)(*(long *)(lVar52 + 0x210) + (ulong)puVar45[2] * 4);
                pbVar46 = (byte *)(psVar1 + 1);
                bVar49 = *pbVar46;
                if (bVar49 != 0) {
                  fVar73 = (float)uVar88 - (float)uVar70;
                  fVar78 = (float)((ulong)uVar70 >> 0x20);
                  fVar74 = (float)((ulong)uVar88 >> 0x20) - fVar78;
                  fVar75 = (float)uVar89 - (float)uVar71;
                  fVar80 = (float)((ulong)uVar71 >> 0x20);
                  fVar76 = (float)((ulong)uVar89 >> 0x20) - fVar80;
                  auVar4._4_4_ = fVar74;
                  auVar4._0_4_ = fVar73;
                  auVar4._8_4_ = fVar75;
                  auVar4._12_4_ = fVar76;
                  auVar5._4_4_ = fVar74;
                  auVar5._0_4_ = fVar73;
                  auVar5._8_4_ = fVar75;
                  auVar5._12_4_ = fVar76;
                  auVar82 = NEON_ext(auVar4,auVar5,4,1);
                  fVar77 = (float)uVar106 - (float)uVar70;
                  fVar78 = (float)((ulong)uVar106 >> 0x20) - fVar78;
                  fVar79 = (float)uVar93 - (float)uVar71;
                  fVar80 = (float)((ulong)uVar93 >> 0x20) - fVar80;
                  auVar10._4_4_ = fVar78;
                  auVar10._0_4_ = fVar77;
                  auVar10._8_4_ = fVar79;
                  auVar10._12_4_ = fVar80;
                  auVar11._4_4_ = fVar78;
                  auVar11._0_4_ = fVar77;
                  auVar11._8_4_ = fVar79;
                  auVar11._12_4_ = fVar80;
                  auVar83 = NEON_ext(auVar10,auVar11,4,1);
                  auVar90 = NEON_ext(auVar82,auVar82,8,1);
                  auVar94 = NEON_ext(auVar83,auVar83,8,1);
                  uVar88 = NEON_rev64(auVar90._0_8_,4);
                  uVar89 = NEON_rev64(auVar94._0_8_,4);
                  bVar48 = 0;
                  auVar84._0_4_ = fVar73 * auVar83._0_4_ - fVar77 * auVar82._0_4_;
                  auVar84._4_4_ = fVar74 * auVar83._4_4_ - fVar78 * auVar82._4_4_;
                  auVar84._8_4_ = fVar75 * (float)uVar89 - fVar79 * (float)uVar88;
                  auVar84._12_4_ =
                       fVar76 * (float)((ulong)uVar89 >> 0x20) -
                       fVar80 * (float)((ulong)uVar88 >> 0x20);
                  auVar82 = NEON_ext(auVar84,auVar84,4,1);
                  fVar81 = auVar82._0_4_;
                  fVar92 = auVar82._4_4_;
                  do {
                    pfVar55 = (float *)(*(long *)(lVar52 + 0x200) +
                                       (ulong)(ushort)(*psVar1 + (ushort)bVar48) * 8);
                    fVar124 = *pfVar55;
                    fVar104 = pfVar55[1];
                    fVar101 = (float)((ulong)uVar70 >> 0x20);
                    fVar72 = (float)((ulong)uVar71 >> 0x20);
                    fVar91 = (float)uVar70 + fVar73 * fVar124 + fVar77 * fVar104;
                    fVar99 = fVar101 + fVar74 * fVar124 + fVar78 * fVar104;
                    fVar102 = (float)uVar71 + fVar75 * fVar124 + fVar79 * fVar104;
                    fVar103 = fVar72 + fVar76 * fVar124 + fVar80 * fVar104;
                    fVar124 = (fStack_270 - local_280) * (fVar91 - local_280);
                    fVar104 = (fStack_26c - fStack_27c) * (fVar99 - fStack_27c);
                    uVar119 = (undefined1)((uint)fVar104 >> 8);
                    uVar121 = (undefined1)((uint)fVar104 >> 0x10);
                    uVar123 = (undefined1)((uint)fVar104 >> 0x18);
                    fVar128 = (fStack_268 - fStack_278) * (fVar102 - fStack_278);
                    fVar129 = (fStack_264 - fStack_274) * (fVar103 - fStack_274);
                    auVar24[4] = SUB41(fVar104,0);
                    auVar24._0_4_ = fVar124;
                    auVar24[5] = uVar119;
                    auVar24[6] = uVar121;
                    auVar24[7] = uVar123;
                    auVar24._8_4_ = fVar128;
                    auVar24._12_4_ = fVar129;
                    auVar25[4] = SUB41(fVar104,0);
                    auVar25._0_4_ = fVar124;
                    auVar25[5] = uVar119;
                    auVar25[6] = uVar121;
                    auVar25[7] = uVar123;
                    auVar25._8_4_ = fVar128;
                    auVar25._12_4_ = fVar129;
                    auVar82 = NEON_ext(auVar24,auVar25,8,1);
                    fVar124 = local_24c * (fVar124 + fVar104 + auVar82._0_4_);
                    fVar104 = fVar124;
                    if (1.0 < fVar124) {
                      fVar104 = 1.0;
                    }
                    uVar119 = 0;
                    uVar121 = 0;
                    uVar123 = 0;
                    uVar127 = 0;
                    if (0.0 <= fVar124) {
                      uVar119 = SUB41(fVar104,0);
                      uVar121 = (undefined1)((uint)fVar104 >> 8);
                      uVar123 = (undefined1)((uint)fVar104 >> 0x10);
                      uVar127 = (undefined1)((uint)fVar104 >> 0x18);
                    }
                    fVar124 = (float)CONCAT13(uVar127,CONCAT12(uVar123,CONCAT11(uVar121,uVar119)));
                    fVar91 = fVar91 - (local_280 + (fStack_270 - local_280) * fVar124);
                    fVar99 = fVar99 - (fStack_27c + (fStack_26c - fStack_27c) * fVar124);
                    fVar102 = fVar102 - (fStack_278 + (fStack_268 - fStack_278) * fVar124);
                    fVar129 = fVar91 * fVar91 + fVar99 * fVar99 + fVar102 * fVar102;
                    fVar100 = fVar91 * fVar91 + fVar99 * fVar99 + fVar102 * fVar102;
                    uVar89 = CONCAT44(fVar100,fVar129);
                    uVar88 = NEON_frsqrte(uVar89,4);
                    fVar104 = (float)uVar88;
                    fVar128 = (float)((ulong)uVar88 >> 0x20);
                    uVar88 = NEON_frsqrts(uVar89,CONCAT44(fVar128 * fVar128,fVar104 * fVar104),4);
                    fVar104 = fVar104 * (float)uVar88;
                    fVar128 = fVar128 * (float)((ulong)uVar88 >> 0x20);
                    uVar88 = NEON_frsqrts(uVar89,CONCAT44(fVar128 * fVar128,fVar104 * fVar104),4);
                    iVar125 = -(uint)(fVar129 <= 0.0);
                    iVar126 = -(uint)(fVar100 <= 0.0);
                    fVar104 = (float)uVar88 * fVar104;
                    fVar128 = (float)((ulong)uVar88 >> 0x20) * fVar128;
                    bVar113 = SUB41(fVar104,0) & ~(byte)iVar125;
                    bVar114 = (byte)((uint)fVar104 >> 8) & ~(byte)((uint)iVar125 >> 8);
                    bVar115 = (byte)((uint)fVar104 >> 0x10) & ~(byte)((uint)iVar125 >> 0x10);
                    bVar116 = (byte)((uint)fVar104 >> 0x18) & ~(byte)((uint)iVar125 >> 0x18);
                    bVar117 = SUB41(fVar128,0) & ~(byte)iVar126;
                    bVar118 = (byte)((uint)fVar128 >> 8) & ~(byte)((uint)iVar126 >> 8);
                    bVar120 = (byte)((uint)fVar128 >> 0x10) & ~(byte)((uint)iVar126 >> 0x10);
                    bVar122 = (byte)((uint)fVar128 >> 0x18) & ~(byte)((uint)iVar126 >> 0x18);
                    fVar104 = (fVar129 * (float)CONCAT13(bVar116,CONCAT12(bVar115,CONCAT11(bVar114,
                                                  bVar113))) - local_250) - fVar69;
                    fVar128 = (fVar100 * (float)CONCAT13(bVar122,CONCAT12(bVar120,CONCAT11(bVar118,
                                                  bVar117))) - local_250) - fVar69;
                    if (fVar104 < 0.0) {
                      fVar129 = (float)CONCAT13(bVar116,CONCAT12(bVar115,CONCAT11(bVar114,bVar113)))
                      ;
                      fVar105 = auVar84._0_4_ * auVar84._0_4_ + fVar81 * fVar81 + fVar92 * fVar92;
                      fVar111 = auVar84._0_4_ * auVar84._0_4_ + fVar81 * fVar81 + fVar92 * fVar92;
                      uVar89 = CONCAT44(fVar111,fVar105);
                      uVar88 = NEON_frsqrte(uVar89,4);
                      fVar100 = (float)uVar88;
                      fVar112 = (float)((ulong)uVar88 >> 0x20);
                      uVar88 = NEON_frsqrts(uVar89,CONCAT44(fVar112 * fVar112,fVar100 * fVar100),4);
                      fVar100 = fVar100 * (float)uVar88;
                      fVar112 = fVar112 * (float)((ulong)uVar88 >> 0x20);
                      iVar125 = -(uint)(fVar105 <= 0.0);
                      iVar126 = -(uint)(fVar111 <= 0.0);
                      uVar88 = NEON_frsqrts(uVar89,CONCAT44(fVar112 * fVar112,fVar100 * fVar100),4);
                      fVar100 = (float)uVar88 * fVar100;
                      fVar112 = (float)((ulong)uVar88 >> 0x20) * fVar112;
                      fVar100 = (float)CONCAT13((byte)((uint)fVar100 >> 0x18) &
                                                ~(byte)((uint)iVar125 >> 0x18),
                                                CONCAT12((byte)((uint)fVar100 >> 0x10) &
                                                         ~(byte)((uint)iVar125 >> 0x10),
                                                         CONCAT11((byte)((uint)fVar100 >> 8) &
                                                                  ~(byte)((uint)iVar125 >> 8),
                                                                  SUB41(fVar100,0) & ~(byte)iVar125)
                                                        ));
                      auVar107._0_4_ = fVar81 * fVar100;
                      fVar112 = (float)(CONCAT17((byte)((uint)fVar112 >> 0x18) &
                                                 ~(byte)((uint)iVar126 >> 0x18),
                                                 CONCAT16((byte)((uint)fVar112 >> 0x10) &
                                                          ~(byte)((uint)iVar126 >> 0x10),
                                                          CONCAT15((byte)((uint)fVar112 >> 8) &
                                                                   ~(byte)((uint)iVar126 >> 8),
                                                                   CONCAT14(SUB41(fVar112,0) &
                                                                            ~(byte)iVar126,fVar100))
                                                         )) >> 0x20);
                      auVar107._4_4_ = fVar92 * fVar112;
                      auVar107._8_4_ = auVar84._0_4_ * fVar100;
                      fVar112 = auVar84._4_4_ * fVar112;
                      fVar91 = fVar91 * (float)CONCAT13(bVar116,CONCAT12(bVar115,CONCAT11(bVar114,
                                                  bVar113))) * auVar107._0_4_;
                      fVar99 = fVar99 * (float)CONCAT13(bVar122,CONCAT12(bVar120,CONCAT11(bVar118,
                                                  bVar117))) * auVar107._4_4_;
                      uVar119 = (undefined1)((uint)fVar99 >> 8);
                      uVar121 = (undefined1)((uint)fVar99 >> 0x10);
                      uVar123 = (undefined1)((uint)fVar99 >> 0x18);
                      fVar102 = fVar102 * fVar129 * auVar107._8_4_;
                      fVar124 = (fVar103 - (fStack_274 + (fStack_264 - fStack_274) * fVar124)) *
                                (float)(CONCAT17(bVar122,CONCAT16(bVar120,CONCAT15(bVar118,CONCAT14(
                                                  bVar117,fVar129)))) >> 0x20) * fVar112;
                      auVar16[4] = SUB41(fVar99,0);
                      auVar16._0_4_ = fVar91;
                      auVar16[5] = uVar119;
                      auVar16[6] = uVar121;
                      auVar16[7] = uVar123;
                      auVar16._8_4_ = fVar102;
                      auVar16._12_4_ = fVar124;
                      auVar17[4] = SUB41(fVar99,0);
                      auVar17._0_4_ = fVar91;
                      auVar17[5] = uVar119;
                      auVar17[6] = uVar121;
                      auVar17[7] = uVar123;
                      auVar17._8_4_ = fVar102;
                      auVar17._12_4_ = fVar124;
                      auVar82 = NEON_ext(auVar16,auVar17,8,1);
                      if (fVar91 + fVar99 + auVar82._0_4_ < 0.0) {
                        auVar107._0_4_ = -auVar107._0_4_;
                        auVar107._4_4_ = -auVar107._4_4_;
                        auVar107._8_4_ = -auVar107._8_4_;
                      }
                      uVar70 = CONCAT44(fVar101 - fVar128 * auVar107._4_4_,
                                        (float)uVar70 - fVar104 * auVar107._0_4_);
                      uVar71 = CONCAT44(fVar72 - fVar128 * fVar112,
                                        (float)uVar71 - fVar104 * auVar107._8_4_);
                      puVar3 = (undefined8 *)(lVar39 + uVar61 * 0x10);
                      puVar3[1] = uVar71;
                      *puVar3 = uVar70;
                      bVar49 = *pbVar46;
                    }
                    bVar48 = bVar48 + 1;
                  } while (bVar48 < bVar49);
                  bVar48 = *pbVar64;
                }
                bVar62 = bVar62 + 1;
                if (bVar48 <= bVar62) break;
                lVar54 = *(long *)(param_4 + 0x20);
              }
            }
          }
          lVar60 = lVar60 + 1;
        } while (lVar60 != (int)uVar2);
        if (*(int *)(lVar52 + 0x278) != 0) {
          lVar60 = 0;
          do {
            uVar61 = (ulong)*(ushort *)(lVar38 + lVar60 * 2);
            uVar63 = (ulong)*(ushort *)(*(long *)(lVar52 + 0x2c0) + uVar61 * 2);
            if (uVar63 != 0xffff) {
              fVar69 = *(float *)(*(long *)(lVar52 + 0x40) + uVar61 * 0x10 + 8);
              lVar53 = *(long *)(lVar52 + 0x270) + uVar63 * 8;
              pbVar64 = (byte *)(lVar53 + 6);
              bVar48 = *pbVar64;
              if (bVar48 != 0) {
                lVar39 = *(long *)(param_4 + 0x20);
                puVar3 = (undefined8 *)(lVar39 + uVar61 * 0x10);
                uVar71 = puVar3[1];
                uVar70 = *puVar3;
                bVar62 = 0;
                lVar54 = lVar39;
                while( true ) {
                  puVar45 = (ushort *)
                            (*(long *)(lVar52 + 0x260) +
                            (ulong)(ushort)(*(short *)(lVar53 + 2) + (ushort)bVar62) * 4);
                  puVar3 = (undefined8 *)(lVar54 + (ulong)*puVar45 * 0x10);
                  uVar89 = puVar3[1];
                  uVar88 = *puVar3;
                  puVar45 = (ushort *)(*(long *)(lVar52 + 0x1f0) + (ulong)puVar45[1] * 4);
                  puVar41 = puVar45 + 1;
                  bVar49 = (byte)*puVar41;
                  if (bVar49 != 0) {
                    fVar78 = (float)uVar70;
                    uVar63 = (ulong)uVar70 >> 0x20;
                    fVar80 = (float)uVar71;
                    uVar32 = (ulong)uVar71 >> 0x20;
                    bVar48 = 0;
                    do {
                      fVar73 = *(float *)(*(long *)(lVar52 + 0x1e0) +
                                         ((ulong)((uint)*puVar45 + (uint)bVar48) & 0xffff) * 4);
                      fVar76 = (float)uVar70 + ((float)uVar88 - fVar78) * fVar73;
                      fVar74 = (float)((ulong)uVar70 >> 0x20);
                      fVar77 = fVar74 + ((float)((ulong)uVar88 >> 0x20) - (float)uVar63) * fVar73;
                      fVar79 = (float)uVar71 + ((float)uVar89 - fVar80) * fVar73;
                      fVar75 = (float)((ulong)uVar71 >> 0x20);
                      fVar81 = fVar75 + ((float)((ulong)uVar89 >> 0x20) - (float)uVar32) * fVar73;
                      auVar95._0_4_ = (fStack_270 - local_280) * (fVar76 - local_280);
                      auVar95._4_4_ = (fStack_26c - fStack_27c) * (fVar77 - fStack_27c);
                      auVar95._8_4_ = (fStack_268 - fStack_278) * (fVar79 - fStack_278);
                      auVar95._12_4_ = (fStack_264 - fStack_274) * (fVar81 - fStack_274);
                      auVar82 = NEON_ext(auVar95,auVar95,8,1);
                      fVar92 = local_24c * (auVar95._0_4_ + auVar95._4_4_ + auVar82._0_4_);
                      fVar73 = fVar92;
                      if (1.0 < fVar92) {
                        fVar73 = 1.0;
                      }
                      fVar124 = 0.0;
                      if (0.0 <= fVar92) {
                        fVar124 = fVar73;
                      }
                      fVar76 = fVar76 - (local_280 + (fStack_270 - local_280) * fVar124);
                      fVar77 = fVar77 - (fStack_27c + (fStack_26c - fStack_27c) * fVar124);
                      fVar79 = fVar79 - (fStack_278 + (fStack_268 - fStack_278) * fVar124);
                      fVar73 = fVar76 * fVar76 + fVar77 * fVar77 + fVar79 * fVar79;
                      fVar92 = fVar76 * fVar76 + fVar77 * fVar77 + fVar79 * fVar79;
                      uVar106 = CONCAT44(fVar92,fVar73);
                      uVar93 = NEON_frsqrte(uVar106,4);
                      fVar104 = (float)uVar93;
                      fVar101 = (float)((ulong)uVar93 >> 0x20);
                      uVar93 = NEON_frsqrts(uVar106,CONCAT44(fVar101 * fVar101,fVar104 * fVar104),4)
                      ;
                      fVar104 = fVar104 * (float)uVar93;
                      fVar101 = fVar101 * (float)((ulong)uVar93 >> 0x20);
                      uVar106 = NEON_frsqrts(uVar106,CONCAT44(fVar101 * fVar101,fVar104 * fVar104),4
                                            );
                      iVar125 = -(uint)(fVar73 <= 0.0);
                      iVar126 = -(uint)(fVar92 <= 0.0);
                      fVar104 = (float)uVar106 * fVar104;
                      fVar101 = (float)((ulong)uVar106 >> 0x20) * fVar101;
                      fVar104 = (float)CONCAT13((byte)((uint)fVar104 >> 0x18) &
                                                ~(byte)((uint)iVar125 >> 0x18),
                                                CONCAT12((byte)((uint)fVar104 >> 0x10) &
                                                         ~(byte)((uint)iVar125 >> 0x10),
                                                         CONCAT11((byte)((uint)fVar104 >> 8) &
                                                                  ~(byte)((uint)iVar125 >> 8),
                                                                  SUB41(fVar104,0) & ~(byte)iVar125)
                                                        ));
                      fVar101 = (float)(CONCAT17((byte)((uint)fVar101 >> 0x18) &
                                                 ~(byte)((uint)iVar126 >> 0x18),
                                                 CONCAT16((byte)((uint)fVar101 >> 0x10) &
                                                          ~(byte)((uint)iVar126 >> 0x10),
                                                          CONCAT15((byte)((uint)fVar101 >> 8) &
                                                                   ~(byte)((uint)iVar126 >> 8),
                                                                   CONCAT14(SUB41(fVar101,0) &
                                                                            ~(byte)iVar126,fVar104))
                                                         )) >> 0x20);
                      fVar73 = (fVar73 * fVar104 - local_250) - fVar69;
                      fVar92 = (fVar92 * fVar101 - local_250) - fVar69;
                      if (fVar73 < 0.0) {
                        uVar70 = CONCAT44(fVar74 - fVar77 * fVar101 * fVar92,
                                          (float)uVar70 - fVar76 * fVar104 * fVar73);
                        uVar71 = CONCAT44(fVar75 - (fVar81 - (fStack_274 +
                                                             (fStack_264 - fStack_274) * fVar124)) *
                                                   fVar101 * fVar92,
                                          (float)uVar71 - fVar79 * fVar104 * fVar73);
                        puVar3 = (undefined8 *)(lVar39 + uVar61 * 0x10);
                        puVar3[1] = uVar71;
                        *puVar3 = uVar70;
                        bVar49 = (byte)*puVar41;
                      }
                      bVar48 = bVar48 + 1;
                    } while (bVar48 < bVar49);
                    bVar48 = *pbVar64;
                  }
                  bVar62 = bVar62 + 1;
                  if (bVar48 <= bVar62) break;
                  lVar54 = *(long *)(param_4 + 0x20);
                }
              }
            }
            lVar60 = lVar60 + 1;
          } while (lVar60 != (int)uVar2);
        }
      }
    }
    else if (0 < (int)uVar2) {
      lVar60 = 0;
      do {
        uVar61 = (ulong)*(ushort *)(lVar38 + lVar60 * 2);
        uVar63 = (ulong)*(ushort *)(*(long *)(lVar52 + 0x2b0) + uVar61 * 2);
        if (uVar63 != 0xffff) {
          lVar53 = *(long *)(lVar52 + 0x250);
          fVar69 = *(float *)(*(long *)(lVar52 + 0x40) + uVar61 * 0x10 + 8);
          pbVar64 = (byte *)(lVar53 + uVar63 * 6 + 4);
          bVar48 = *pbVar64;
          if (bVar48 != 0) {
            lVar39 = *(long *)(param_4 + 0x20);
            bVar62 = 0;
            puVar3 = (undefined8 *)(lVar39 + uVar61 * 0x10);
            uVar71 = puVar3[1];
            uVar70 = *puVar3;
            lVar54 = lVar39;
            while( true ) {
              puVar45 = (ushort *)
                        (*(long *)(lVar52 + 0x240) +
                        ((ulong)((uint)*(ushort *)(lVar53 + uVar63 * 6 + 2) + (uint)bVar62) & 0xffff
                        ) * 6);
              puVar3 = (undefined8 *)(lVar54 + (ulong)*puVar45 * 0x10);
              uVar89 = puVar3[1];
              uVar88 = *puVar3;
              puVar3 = (undefined8 *)(lVar54 + (ulong)puVar45[1] * 0x10);
              uVar93 = puVar3[1];
              uVar106 = *puVar3;
              psVar1 = (short *)(*(long *)(lVar52 + 0x210) + (ulong)puVar45[2] * 4);
              pbVar46 = (byte *)(psVar1 + 1);
              bVar49 = *pbVar46;
              if (bVar49 != 0) {
                fVar73 = (float)uVar88 - (float)uVar70;
                fVar78 = (float)((ulong)uVar70 >> 0x20);
                fVar74 = (float)((ulong)uVar88 >> 0x20) - fVar78;
                fVar75 = (float)uVar89 - (float)uVar71;
                fVar80 = (float)((ulong)uVar71 >> 0x20);
                fVar76 = (float)((ulong)uVar89 >> 0x20) - fVar80;
                auVar6._4_4_ = fVar74;
                auVar6._0_4_ = fVar73;
                auVar6._8_4_ = fVar75;
                auVar6._12_4_ = fVar76;
                auVar7._4_4_ = fVar74;
                auVar7._0_4_ = fVar73;
                auVar7._8_4_ = fVar75;
                auVar7._12_4_ = fVar76;
                auVar82 = NEON_ext(auVar6,auVar7,4,1);
                fVar77 = (float)uVar106 - (float)uVar70;
                fVar78 = (float)((ulong)uVar106 >> 0x20) - fVar78;
                fVar79 = (float)uVar93 - (float)uVar71;
                fVar80 = (float)((ulong)uVar93 >> 0x20) - fVar80;
                auVar12._4_4_ = fVar78;
                auVar12._0_4_ = fVar77;
                auVar12._8_4_ = fVar79;
                auVar12._12_4_ = fVar80;
                auVar13._4_4_ = fVar78;
                auVar13._0_4_ = fVar77;
                auVar13._8_4_ = fVar79;
                auVar13._12_4_ = fVar80;
                auVar83 = NEON_ext(auVar12,auVar13,4,1);
                auVar90 = NEON_ext(auVar82,auVar82,8,1);
                auVar94 = NEON_ext(auVar83,auVar83,8,1);
                uVar88 = NEON_rev64(auVar90._0_8_,4);
                uVar89 = NEON_rev64(auVar94._0_8_,4);
                bVar48 = 0;
                auVar85._0_4_ = fVar73 * auVar83._0_4_ - fVar77 * auVar82._0_4_;
                auVar85._4_4_ = fVar74 * auVar83._4_4_ - fVar78 * auVar82._4_4_;
                auVar85._8_4_ = fVar75 * (float)uVar89 - fVar79 * (float)uVar88;
                auVar85._12_4_ =
                     fVar76 * (float)((ulong)uVar89 >> 0x20) -
                     fVar80 * (float)((ulong)uVar88 >> 0x20);
                auVar82 = NEON_ext(auVar85,auVar85,4,1);
                fVar81 = auVar82._0_4_;
                fVar92 = auVar82._4_4_;
                do {
                  pfVar55 = (float *)(*(long *)(lVar52 + 0x200) +
                                     (ulong)(ushort)(*psVar1 + (ushort)bVar48) * 8);
                  fVar124 = *pfVar55;
                  fVar104 = pfVar55[1];
                  fVar101 = (float)((ulong)uVar70 >> 0x20);
                  fVar72 = (float)((ulong)uVar71 >> 0x20);
                  fVar91 = (float)uVar70 + fVar73 * fVar124 + fVar77 * fVar104;
                  fVar99 = fVar101 + fVar74 * fVar124 + fVar78 * fVar104;
                  fVar102 = (float)uVar71 + fVar75 * fVar124 + fVar79 * fVar104;
                  fVar103 = fVar72 + fVar76 * fVar124 + fVar80 * fVar104;
                  fVar124 = (fStack_270 - local_280) * (fVar91 - local_280);
                  fVar104 = (fStack_26c - fStack_27c) * (fVar99 - fStack_27c);
                  uVar119 = (undefined1)((uint)fVar104 >> 8);
                  uVar121 = (undefined1)((uint)fVar104 >> 0x10);
                  uVar123 = (undefined1)((uint)fVar104 >> 0x18);
                  fVar128 = (fStack_268 - fStack_278) * (fVar102 - fStack_278);
                  fVar129 = (fStack_264 - fStack_274) * (fVar103 - fStack_274);
                  auVar26[4] = SUB41(fVar104,0);
                  auVar26._0_4_ = fVar124;
                  auVar26[5] = uVar119;
                  auVar26[6] = uVar121;
                  auVar26[7] = uVar123;
                  auVar26._8_4_ = fVar128;
                  auVar26._12_4_ = fVar129;
                  auVar27[4] = SUB41(fVar104,0);
                  auVar27._0_4_ = fVar124;
                  auVar27[5] = uVar119;
                  auVar27[6] = uVar121;
                  auVar27[7] = uVar123;
                  auVar27._8_4_ = fVar128;
                  auVar27._12_4_ = fVar129;
                  auVar82 = NEON_ext(auVar26,auVar27,8,1);
                  fVar124 = local_24c * (fVar124 + fVar104 + auVar82._0_4_);
                  fVar104 = fVar124;
                  if (1.0 < fVar124) {
                    fVar104 = 1.0;
                  }
                  uVar119 = 0;
                  uVar121 = 0;
                  uVar123 = 0;
                  uVar127 = 0;
                  if (0.0 <= fVar124) {
                    uVar119 = SUB41(fVar104,0);
                    uVar121 = (undefined1)((uint)fVar104 >> 8);
                    uVar123 = (undefined1)((uint)fVar104 >> 0x10);
                    uVar127 = (undefined1)((uint)fVar104 >> 0x18);
                  }
                  fVar124 = (float)CONCAT13(uVar127,CONCAT12(uVar123,CONCAT11(uVar121,uVar119)));
                  fVar91 = fVar91 - (local_280 + (fStack_270 - local_280) * fVar124);
                  fVar99 = fVar99 - (fStack_27c + (fStack_26c - fStack_27c) * fVar124);
                  fVar102 = fVar102 - (fStack_278 + (fStack_268 - fStack_278) * fVar124);
                  fVar129 = fVar91 * fVar91 + fVar99 * fVar99 + fVar102 * fVar102;
                  fVar100 = fVar91 * fVar91 + fVar99 * fVar99 + fVar102 * fVar102;
                  uVar89 = CONCAT44(fVar100,fVar129);
                  uVar88 = NEON_frsqrte(uVar89,4);
                  fVar104 = (float)uVar88;
                  fVar128 = (float)((ulong)uVar88 >> 0x20);
                  uVar88 = NEON_frsqrts(uVar89,CONCAT44(fVar128 * fVar128,fVar104 * fVar104),4);
                  fVar104 = fVar104 * (float)uVar88;
                  fVar128 = fVar128 * (float)((ulong)uVar88 >> 0x20);
                  uVar88 = NEON_frsqrts(uVar89,CONCAT44(fVar128 * fVar128,fVar104 * fVar104),4);
                  iVar125 = -(uint)(fVar129 <= 0.0);
                  iVar126 = -(uint)(fVar100 <= 0.0);
                  fVar104 = (float)uVar88 * fVar104;
                  fVar128 = (float)((ulong)uVar88 >> 0x20) * fVar128;
                  bVar113 = SUB41(fVar104,0) & ~(byte)iVar125;
                  bVar114 = (byte)((uint)fVar104 >> 8) & ~(byte)((uint)iVar125 >> 8);
                  bVar115 = (byte)((uint)fVar104 >> 0x10) & ~(byte)((uint)iVar125 >> 0x10);
                  bVar116 = (byte)((uint)fVar104 >> 0x18) & ~(byte)((uint)iVar125 >> 0x18);
                  bVar117 = SUB41(fVar128,0) & ~(byte)iVar126;
                  bVar118 = (byte)((uint)fVar128 >> 8) & ~(byte)((uint)iVar126 >> 8);
                  bVar120 = (byte)((uint)fVar128 >> 0x10) & ~(byte)((uint)iVar126 >> 0x10);
                  bVar122 = (byte)((uint)fVar128 >> 0x18) & ~(byte)((uint)iVar126 >> 0x18);
                  fVar104 = (fVar129 * (float)CONCAT13(bVar116,CONCAT12(bVar115,CONCAT11(bVar114,
                                                  bVar113))) - local_250) - fVar69;
                  fVar128 = (fVar100 * (float)CONCAT13(bVar122,CONCAT12(bVar120,CONCAT11(bVar118,
                                                  bVar117))) - local_250) - fVar69;
                  if (fVar104 < 0.0) {
                    fVar129 = (float)CONCAT13(bVar116,CONCAT12(bVar115,CONCAT11(bVar114,bVar113)));
                    fVar105 = auVar85._0_4_ * auVar85._0_4_ + fVar81 * fVar81 + fVar92 * fVar92;
                    fVar111 = auVar85._0_4_ * auVar85._0_4_ + fVar81 * fVar81 + fVar92 * fVar92;
                    uVar89 = CONCAT44(fVar111,fVar105);
                    uVar88 = NEON_frsqrte(uVar89,4);
                    fVar100 = (float)uVar88;
                    fVar112 = (float)((ulong)uVar88 >> 0x20);
                    uVar88 = NEON_frsqrts(uVar89,CONCAT44(fVar112 * fVar112,fVar100 * fVar100),4);
                    fVar100 = fVar100 * (float)uVar88;
                    fVar112 = fVar112 * (float)((ulong)uVar88 >> 0x20);
                    iVar125 = -(uint)(fVar105 <= 0.0);
                    iVar126 = -(uint)(fVar111 <= 0.0);
                    uVar88 = NEON_frsqrts(uVar89,CONCAT44(fVar112 * fVar112,fVar100 * fVar100),4);
                    fVar100 = (float)uVar88 * fVar100;
                    fVar112 = (float)((ulong)uVar88 >> 0x20) * fVar112;
                    fVar100 = (float)CONCAT13((byte)((uint)fVar100 >> 0x18) &
                                              ~(byte)((uint)iVar125 >> 0x18),
                                              CONCAT12((byte)((uint)fVar100 >> 0x10) &
                                                       ~(byte)((uint)iVar125 >> 0x10),
                                                       CONCAT11((byte)((uint)fVar100 >> 8) &
                                                                ~(byte)((uint)iVar125 >> 8),
                                                                SUB41(fVar100,0) & ~(byte)iVar125)))
                    ;
                    auVar108._0_4_ = fVar81 * fVar100;
                    fVar112 = (float)(CONCAT17((byte)((uint)fVar112 >> 0x18) &
                                               ~(byte)((uint)iVar126 >> 0x18),
                                               CONCAT16((byte)((uint)fVar112 >> 0x10) &
                                                        ~(byte)((uint)iVar126 >> 0x10),
                                                        CONCAT15((byte)((uint)fVar112 >> 8) &
                                                                 ~(byte)((uint)iVar126 >> 8),
                                                                 CONCAT14(SUB41(fVar112,0) &
                                                                          ~(byte)iVar126,fVar100))))
                                     >> 0x20);
                    auVar108._4_4_ = fVar92 * fVar112;
                    auVar108._8_4_ = auVar85._0_4_ * fVar100;
                    fVar112 = auVar85._4_4_ * fVar112;
                    fVar91 = fVar91 * (float)CONCAT13(bVar116,CONCAT12(bVar115,CONCAT11(bVar114,
                                                  bVar113))) * auVar108._0_4_;
                    fVar99 = fVar99 * (float)CONCAT13(bVar122,CONCAT12(bVar120,CONCAT11(bVar118,
                                                  bVar117))) * auVar108._4_4_;
                    uVar119 = (undefined1)((uint)fVar99 >> 8);
                    uVar121 = (undefined1)((uint)fVar99 >> 0x10);
                    uVar123 = (undefined1)((uint)fVar99 >> 0x18);
                    fVar102 = fVar102 * fVar129 * auVar108._8_4_;
                    fVar124 = (fVar103 - (fStack_274 + (fStack_264 - fStack_274) * fVar124)) *
                              (float)(CONCAT17(bVar122,CONCAT16(bVar120,CONCAT15(bVar118,CONCAT14(
                                                  bVar117,fVar129)))) >> 0x20) * fVar112;
                    auVar18[4] = SUB41(fVar99,0);
                    auVar18._0_4_ = fVar91;
                    auVar18[5] = uVar119;
                    auVar18[6] = uVar121;
                    auVar18[7] = uVar123;
                    auVar18._8_4_ = fVar102;
                    auVar18._12_4_ = fVar124;
                    auVar19[4] = SUB41(fVar99,0);
                    auVar19._0_4_ = fVar91;
                    auVar19[5] = uVar119;
                    auVar19[6] = uVar121;
                    auVar19[7] = uVar123;
                    auVar19._8_4_ = fVar102;
                    auVar19._12_4_ = fVar124;
                    auVar82 = NEON_ext(auVar18,auVar19,8,1);
                    if (fVar91 + fVar99 + auVar82._0_4_ < 0.0) {
                      auVar108._0_4_ = -auVar108._0_4_;
                      auVar108._4_4_ = -auVar108._4_4_;
                      auVar108._8_4_ = -auVar108._8_4_;
                    }
                    uVar70 = CONCAT44(fVar101 - fVar128 * auVar108._4_4_,
                                      (float)uVar70 - fVar104 * auVar108._0_4_);
                    uVar71 = CONCAT44(fVar72 - fVar128 * fVar112,
                                      (float)uVar71 - fVar104 * auVar108._8_4_);
                    puVar3 = (undefined8 *)(lVar39 + uVar61 * 0x10);
                    puVar3[1] = uVar71;
                    *puVar3 = uVar70;
                    bVar49 = *pbVar46;
                  }
                  bVar48 = bVar48 + 1;
                } while (bVar48 < bVar49);
                bVar48 = *pbVar64;
              }
              bVar62 = bVar62 + 1;
              if (bVar48 <= bVar62) break;
              lVar54 = *(long *)(param_4 + 0x20);
            }
          }
        }
        lVar60 = lVar60 + 1;
      } while (lVar60 != (int)uVar2);
      if (*(int *)(lVar52 + 0x238) != 0) {
        lVar60 = 0;
        do {
          uVar61 = (ulong)*(ushort *)(lVar38 + lVar60 * 2);
          uVar63 = (ulong)*(ushort *)(*(long *)(lVar52 + 0x2a0) + uVar61 * 2);
          if (uVar63 != 0xffff) {
            lVar53 = *(long *)(lVar52 + 0x230);
            fVar69 = *(float *)(*(long *)(lVar52 + 0x40) + uVar61 * 0x10 + 8);
            pbVar64 = (byte *)(lVar53 + uVar63 * 6 + 4);
            bVar48 = *pbVar64;
            if (bVar48 != 0) {
              lVar39 = *(long *)(param_4 + 0x20);
              bVar62 = 0;
              puVar3 = (undefined8 *)(lVar39 + uVar61 * 0x10);
              uVar71 = puVar3[1];
              uVar70 = *puVar3;
              lVar54 = lVar39;
              while( true ) {
                puVar45 = (ushort *)
                          (*(long *)(lVar52 + 0x220) +
                          (ulong)(ushort)(*(short *)(lVar53 + uVar63 * 6 + 2) + (ushort)bVar62) * 4)
                ;
                puVar3 = (undefined8 *)(lVar54 + (ulong)*puVar45 * 0x10);
                uVar89 = puVar3[1];
                uVar88 = *puVar3;
                puVar45 = (ushort *)(*(long *)(lVar52 + 0x1f0) + (ulong)puVar45[1] * 4);
                puVar41 = puVar45 + 1;
                bVar49 = (byte)*puVar41;
                if (bVar49 != 0) {
                  fVar78 = (float)uVar70;
                  uVar32 = (ulong)uVar70 >> 0x20;
                  fVar80 = (float)uVar71;
                  uVar33 = (ulong)uVar71 >> 0x20;
                  bVar48 = 0;
                  do {
                    fVar73 = *(float *)(*(long *)(lVar52 + 0x1e0) +
                                       ((ulong)((uint)*puVar45 + (uint)bVar48) & 0xffff) * 4);
                    fVar76 = (float)uVar70 + ((float)uVar88 - fVar78) * fVar73;
                    fVar74 = (float)((ulong)uVar70 >> 0x20);
                    fVar77 = fVar74 + ((float)((ulong)uVar88 >> 0x20) - (float)uVar32) * fVar73;
                    fVar79 = (float)uVar71 + ((float)uVar89 - fVar80) * fVar73;
                    fVar75 = (float)((ulong)uVar71 >> 0x20);
                    fVar81 = fVar75 + ((float)((ulong)uVar89 >> 0x20) - (float)uVar33) * fVar73;
                    auVar96._0_4_ = (fStack_270 - local_280) * (fVar76 - local_280);
                    auVar96._4_4_ = (fStack_26c - fStack_27c) * (fVar77 - fStack_27c);
                    auVar96._8_4_ = (fStack_268 - fStack_278) * (fVar79 - fStack_278);
                    auVar96._12_4_ = (fStack_264 - fStack_274) * (fVar81 - fStack_274);
                    auVar82 = NEON_ext(auVar96,auVar96,8,1);
                    fVar92 = local_24c * (auVar96._0_4_ + auVar96._4_4_ + auVar82._0_4_);
                    fVar73 = fVar92;
                    if (1.0 < fVar92) {
                      fVar73 = 1.0;
                    }
                    fVar124 = 0.0;
                    if (0.0 <= fVar92) {
                      fVar124 = fVar73;
                    }
                    fVar76 = fVar76 - (local_280 + (fStack_270 - local_280) * fVar124);
                    fVar77 = fVar77 - (fStack_27c + (fStack_26c - fStack_27c) * fVar124);
                    fVar79 = fVar79 - (fStack_278 + (fStack_268 - fStack_278) * fVar124);
                    fVar73 = fVar76 * fVar76 + fVar77 * fVar77 + fVar79 * fVar79;
                    fVar92 = fVar76 * fVar76 + fVar77 * fVar77 + fVar79 * fVar79;
                    uVar106 = CONCAT44(fVar92,fVar73);
                    uVar93 = NEON_frsqrte(uVar106,4);
                    fVar104 = (float)uVar93;
                    fVar101 = (float)((ulong)uVar93 >> 0x20);
                    uVar93 = NEON_frsqrts(uVar106,CONCAT44(fVar101 * fVar101,fVar104 * fVar104),4);
                    fVar104 = fVar104 * (float)uVar93;
                    fVar101 = fVar101 * (float)((ulong)uVar93 >> 0x20);
                    uVar106 = NEON_frsqrts(uVar106,CONCAT44(fVar101 * fVar101,fVar104 * fVar104),4);
                    iVar125 = -(uint)(fVar73 <= 0.0);
                    iVar126 = -(uint)(fVar92 <= 0.0);
                    fVar104 = (float)uVar106 * fVar104;
                    fVar101 = (float)((ulong)uVar106 >> 0x20) * fVar101;
                    fVar104 = (float)CONCAT13((byte)((uint)fVar104 >> 0x18) &
                                              ~(byte)((uint)iVar125 >> 0x18),
                                              CONCAT12((byte)((uint)fVar104 >> 0x10) &
                                                       ~(byte)((uint)iVar125 >> 0x10),
                                                       CONCAT11((byte)((uint)fVar104 >> 8) &
                                                                ~(byte)((uint)iVar125 >> 8),
                                                                SUB41(fVar104,0) & ~(byte)iVar125)))
                    ;
                    fVar101 = (float)(CONCAT17((byte)((uint)fVar101 >> 0x18) &
                                               ~(byte)((uint)iVar126 >> 0x18),
                                               CONCAT16((byte)((uint)fVar101 >> 0x10) &
                                                        ~(byte)((uint)iVar126 >> 0x10),
                                                        CONCAT15((byte)((uint)fVar101 >> 8) &
                                                                 ~(byte)((uint)iVar126 >> 8),
                                                                 CONCAT14(SUB41(fVar101,0) &
                                                                          ~(byte)iVar126,fVar104))))
                                     >> 0x20);
                    fVar73 = (fVar73 * fVar104 - local_250) - fVar69;
                    fVar92 = (fVar92 * fVar101 - local_250) - fVar69;
                    if (fVar73 < 0.0) {
                      uVar70 = CONCAT44(fVar74 - fVar77 * fVar101 * fVar92,
                                        (float)uVar70 - fVar76 * fVar104 * fVar73);
                      uVar71 = CONCAT44(fVar75 - (fVar81 - (fStack_274 +
                                                           (fStack_264 - fStack_274) * fVar124)) *
                                                 fVar101 * fVar92,
                                        (float)uVar71 - fVar79 * fVar104 * fVar73);
                      puVar3 = (undefined8 *)(lVar39 + uVar61 * 0x10);
                      puVar3[1] = uVar71;
                      *puVar3 = uVar70;
                      bVar49 = (byte)*puVar41;
                    }
                    bVar48 = bVar48 + 1;
                  } while (bVar48 < bVar49);
                  bVar48 = *pbVar64;
                }
                bVar62 = bVar62 + 1;
                if (bVar48 <= bVar62) break;
                lVar54 = *(long *)(param_4 + 0x20);
              }
            }
          }
          lVar60 = lVar60 + 1;
        } while (lVar60 != (int)uVar2);
      }
    }
    lVar60 = FUN_0043c4e0(DAT_04c6f050);
    lVar52 = DAT_04c6f058;
    if (lVar60 != 0) {
      lVar52 = lVar60;
    }
    if (((*(ulong *)(lVar52 + 0x10) < uVar44) || (*(long *)(lVar52 + 0x18) != lVar43 + uVar44)) ||
       (*(long *)(lVar52 + 0x28) == lVar43)) {
      FUN_00439980(lVar52,lVar43,uVar44);
    }
    else {
      *(long *)(lVar52 + 0x18) = lVar43;
    }
    lVar60 = FUN_0043c4e0(DAT_04c6f050);
    lVar52 = DAT_04c6f058;
    if (lVar60 != 0) {
      lVar52 = lVar60;
    }
    if (((uVar44 <= *(ulong *)(lVar52 + 0x10)) && (*(long *)(lVar52 + 0x18) == lVar40 + uVar44)) &&
       (*(long *)(lVar52 + 0x28) != lVar40)) {
      *(long *)(lVar52 + 0x18) = lVar40;
      goto LAB_005de1a8;
    }
  }
  FUN_00439980(lVar52,lVar40,uVar44);
LAB_005de1a8:
  uVar2 = local_2a8;
  local_2b8 = (ulong)local_2b8._4_4_ << 0x20;
  lVar60 = FUN_0043c4e0(*(undefined2 *)PTR_DAT_04bd4d10);
  lVar52 = DAT_04c6f058;
  if (lVar60 != 0) {
    lVar52 = lVar60;
  }
  uVar44 = (ulong)(int)(uVar2 * 2 + 0x7f & 0xffffff80);
  if (((*(ulong *)(lVar52 + 0x10) < uVar44) || (*(long *)(lVar52 + 0x18) != uVar44 + lVar38)) ||
     (*(long *)(lVar52 + 0x28) == lVar38)) {
    FUN_00439980();
  }
  else {
    *(long *)(lVar52 + 0x18) = lVar38;
  }
  return;
}

