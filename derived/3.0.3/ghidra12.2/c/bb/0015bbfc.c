
int FUN_0015bbfc(long *param_1,undefined1 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  char *pcVar11;
  ulong uVar12;
  char *pcVar13;
  char *__s;
  char *pcVar14;
  size_t sVar15;
  long *plVar16;
  ulong uVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  byte bVar21;
  ushort uVar22;
  undefined4 uVar23;
  long lVar24;
  undefined8 *puVar25;
  long lVar26;
  long lVar27;
  long *plVar28;
  long *plVar29;
  undefined *puVar30;
  char *pcVar31;
  char *pcVar32;
  undefined8 *puVar33;
  undefined *puVar34;
  undefined8 *puVar35;
  long local_90;
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  undefined1 local_68;
  
  lVar26 = *param_1;
  lVar27 = param_1[0x1a];
  local_68 = 0;
  pcVar32 = *(char **)(lVar26 + 0x15a0);
  pcVar31 = *(char **)(lVar26 + 0x15a8);
  iVar9 = *(int *)(lVar26 + 0xa38);
  *param_2 = 1;
  local_78 = 0;
  local_70 = 0;
  if ((int)param_1[0x46] < 0x14) {
    if (((int)param_1[0xd1] != 2) &&
       (((int)param_1[0xd1] == 3 || (*(long *)(*param_1 + 0xa40) == 5)))) {
      *(undefined4 *)(param_1 + 0x46) = 0x14;
      iVar6 = FUN_00159c00(param_1,0,0);
      goto LAB_0015bc98;
    }
  }
  else {
    iVar6 = FUN_00159a1c(param_1);
LAB_0015bc98:
    if (iVar6 != 0) {
      return iVar6;
    }
  }
  plVar29 = *(long **)(lVar26 + 0x1e8);
  if ((*(ushort *)(lVar26 + 0x15c4) >> 1 & 1) == 0) {
    FUN_00143300(*(undefined8 *)(lVar26 + 0x1168));
    lVar10 = FUN_00143320(param_1[0x1a]);
    *(long *)(lVar26 + 0x1168) = lVar10;
    if (lVar10 == 0) {
      return 0x1b;
    }
    *(int *)(lVar26 + 0x1170) = (int)param_1[0x33];
  }
  if (((*(byte *)(param_1[0x88] + 0x80) & 7) != 0) && ((*(byte *)(lVar26 + 0xf63) & 2) != 0)) {
    iVar9 = 5;
  }
  puVar34 = *(undefined **)(lVar26 + 0xcd0);
  if (puVar34 == (undefined *)0x0) {
    if ((*(byte *)(lVar26 + 0xf63) & 1) == 0) {
      if (iVar9 - 2U < 6) {
        puVar34 = &DAT_04102f50 + *(int *)(&DAT_04102f50 + (long)(int)(iVar9 - 2U) * 4);
      }
      else {
        puVar34 = &DAT_040f20e7;
      }
    }
    else {
      puVar34 = &DAT_040adf5a;
    }
  }
  lVar10 = FUN_0015fd30(param_1,"User-Agent");
  if (lVar10 != 0) {
    FUN_00143300(param_1[0x90]);
    param_1[0x90] = 0;
  }
  if ((pcVar31 == (char *)0x0) || (*pcVar31 == '\0')) {
    pcVar11 = (char *)0x0;
  }
  else {
    pcVar11 = (char *)FUN_00146120("%s?%s",pcVar32,pcVar31);
    if (pcVar11 == (char *)0x0) {
      return 0x1b;
    }
  }
  pcVar13 = pcVar32;
  if (pcVar11 != (char *)0x0) {
    pcVar13 = pcVar11;
  }
  iVar6 = FUN_0015dae4(param_1,puVar34,pcVar13,0);
  FUN_00143300(pcVar11);
  if (iVar6 != 0) {
    return iVar6;
  }
  if (((((*(byte *)(lVar26 + 0x1280) & 3) == 2) || ((*(byte *)(lVar26 + 0x12a0) & 3) == 2)) &&
      (iVar9 != 1)) && (iVar9 != 6)) {
    uVar7 = *(uint *)((long)param_1 + 0x41c) | 0x8000;
  }
  else {
    uVar7 = *(uint *)((long)param_1 + 0x41c) & 0xffff7fff;
  }
  *(uint *)((long)param_1 + 0x41c) = uVar7;
  FUN_00143300(param_1[0x94]);
  param_1[0x94] = 0;
  if ((*(long *)(lVar26 + 0xf70) == 0) || (lVar10 = FUN_0015fd30(param_1,"Referer"), lVar10 != 0)) {
    param_1[0x94] = 0;
  }
  else {
    lVar10 = FUN_00146120("Referer: %s\r\n",*(undefined8 *)(lVar26 + 0xf70));
    param_1[0x94] = lVar10;
    if (lVar10 == 0) {
      return 0x1b;
    }
  }
  if ((*(long *)(lVar26 + 0xcc0) == 0) || (lVar10 = FUN_0015fd30(param_1,"Cookie"), lVar10 != 0)) {
    local_90 = 0;
  }
  else {
    local_90 = *(long *)(lVar26 + 0xcc0);
  }
  lVar10 = FUN_0015fd30(param_1,"Accept-Encoding");
  if ((lVar10 == 0) && (*(long *)(lVar26 + 0xce8) != 0)) {
    FUN_00143300(param_1[0x91]);
    param_1[0x91] = 0;
    lVar10 = FUN_00146120("Accept-Encoding: %s\r\n",*(undefined8 *)(lVar26 + 0xce8));
    param_1[0x91] = lVar10;
    if (lVar10 == 0) {
      return 0x1b;
    }
  }
  else {
    FUN_00143300(param_1[0x91]);
    param_1[0x91] = 0;
  }
  lVar10 = FUN_0015fd30(param_1,&DAT_040e7153);
  if ((lVar10 == 0) && ((*(byte *)(lVar26 + 0xf62) >> 3 & 1) != 0)) {
    lVar10 = FUN_0015fd30(param_1,"Connection");
    FUN_00143300(param_1[0x98]);
    pcVar11 = "";
    param_1[0x98] = 0;
    if (lVar10 == 0) {
      puVar18 = &DAT_0407ebb1;
      pcVar13 = (char *)0x0;
    }
    else {
      pcVar11 = (char *)FUN_0015d644(lVar10);
      if (pcVar11 == (char *)0x0) {
        return 0x1b;
      }
      puVar18 = &DAT_0407ebb1;
      if (*pcVar11 != '\0') {
        puVar18 = (undefined8 *)&DAT_0407494a;
      }
      pcVar13 = pcVar11;
    }
    lVar10 = FUN_00146120("Connection: %s%sTE\r\nTE: gzip\r\n",pcVar11,puVar18);
    param_1[0x98] = lVar10;
    FUN_00143300(pcVar13);
    if (param_1[0x98] == 0) {
      return 0x1b;
    }
  }
  if (iVar9 == 3) {
    plVar16 = plVar29 + 5;
    FUN_001532b0(plVar16);
    iVar6 = FUN_00165794(lVar26,plVar16,*(undefined8 *)(lVar26 + 0x818),
                         *(undefined8 *)(lVar26 + 0x1548));
    if (iVar6 != 0) {
      return iVar6;
    }
LAB_0015bfd8:
    *plVar29 = (long)plVar16;
    lVar10 = FUN_0015fd30(param_1,"Content-Type");
    *(uint *)(*plVar29 + 0x80) = *(uint *)(*plVar29 + 0x80) | 2;
    if (lVar10 == 0) {
      lVar10 = *plVar29;
      pcVar11 = "multipart/form-data";
      if (*(int *)(lVar10 + 0x18) != 4) {
        pcVar11 = (char *)0x0;
      }
    }
    else {
      pcVar11 = (char *)(lVar10 + 0xc);
      do {
        pcVar11 = pcVar11 + 1;
      } while (*pcVar11 == ' ');
      lVar10 = *plVar29;
    }
    FUN_00153a08(lVar10,*(undefined8 *)(lVar26 + 0x808),0);
    iVar6 = FUN_00154858(*plVar29,pcVar11,0,1);
    FUN_00153a08(*plVar29,0,0);
    if (iVar6 != 0) {
      return iVar6;
    }
    iVar6 = FUN_00154534(*plVar29);
    if (iVar6 != 0) {
      return iVar6;
    }
    lVar10 = FUN_001545dc(*plVar29);
    plVar29[1] = lVar10;
  }
  else {
    if (iVar9 == 4) {
      plVar16 = (long *)(lVar26 + 0x820);
      goto LAB_0015bfd8;
    }
    *plVar29 = 0;
  }
  lVar10 = FUN_0015fd30(param_1,"Transfer-Encoding");
  if (lVar10 == 0) {
    if (((*(byte *)(param_1[0x88] + 0x80) & 3) == 0) ||
       (((1 < iVar9 - 3U || (-1 < plVar29[1])) &&
        (((*(byte *)(lVar26 + 0xf63) >> 1 & 1) == 0 || (*(long *)(lVar26 + 0x1538) != -1)))))) {
      uVar22 = *(ushort *)(lVar26 + 0x660) & 0xffbf;
LAB_0015c124:
      *(ushort *)(lVar26 + 0x660) = uVar22;
    }
    else {
      if (-1 < *(char *)((long)param_1 + 0x41d)) {
        if (((*(int *)(lVar26 + 0x1500) == 10) || ((int)param_1[0x46] == 10)) ||
           (((lVar10 = *(long *)(lVar26 + 0xa40), (int)param_1[0x46] < 0xb && (lVar10 == 1)) ||
            ((lVar10 != 0 && (lVar10 < 2)))))) {
          FUN_0014d5f8(lVar26,"Chunky upload is not supported by HTTP 1.0");
          return 0x19;
        }
        uVar22 = *(ushort *)(lVar26 + 0x660) | 0x40;
        goto LAB_0015c124;
      }
      uVar22 = *(ushort *)(lVar26 + 0x660);
    }
    pcVar11 = "";
    if ((uVar22 & 0x40) != 0) {
      pcVar11 = "Transfer-Encoding: chunked\r\n";
    }
  }
  else {
    uVar12 = FUN_0015e58c(lVar10,"Transfer-Encoding:","chunked");
    uVar22 = 0x40;
    if ((uVar12 & 1) == 0) {
      uVar22 = 0;
    }
    pcVar11 = "";
    *(ushort *)(lVar26 + 0x660) = *(ushort *)(lVar26 + 0x660) & 0xffbf | uVar22;
  }
  FUN_00143300(param_1[0x95]);
  param_1[0x95] = 0;
  pcVar13 = (char *)FUN_0015fd30(param_1,&DAT_040844e2);
  if ((pcVar13 == (char *)0x0) ||
     (((*(ushort *)(lVar26 + 0x15c4) >> 1 & 1) != 0 &&
      (iVar6 = FUN_00144a90(*(undefined8 *)(lVar26 + 0x1168),param_1[0x1a]), iVar6 == 0)))) {
    if ((((*(uint *)(param_1[0x89] + 0x80) >> 1 & 1) == 0) || ((int)param_1[0x33] != 0x1bb)) &&
       (((*(uint *)(param_1[0x89] + 0x80) & 1) == 0 || ((int)param_1[0x33] != 0x50)))) {
      bVar5 = (*(uint *)((long)param_1 + 0x41c) & 0x200) != 0;
      puVar18 = &DAT_0407ebb1;
      if (bVar5) {
        puVar18 = (undefined8 *)&DAT_0408f254;
      }
      puVar20 = &DAT_0407ebb1;
      if (bVar5) {
        puVar20 = (undefined8 *)&DAT_040bd946;
      }
      lVar10 = FUN_00146120("Host: %s%s%s:%d\r\n",puVar18,lVar27,puVar20);
    }
    else {
      bVar5 = (*(uint *)((long)param_1 + 0x41c) & 0x200) != 0;
      puVar18 = &DAT_0407ebb1;
      if (bVar5) {
        puVar18 = (undefined8 *)&DAT_0408f254;
      }
      puVar20 = &DAT_0407ebb1;
      if (bVar5) {
        puVar20 = (undefined8 *)&DAT_040bd946;
      }
      lVar10 = FUN_00146120("Host: %s%s%s\r\n",puVar18,lVar27,puVar20);
    }
LAB_0015c2a8:
    param_1[0x95] = lVar10;
    if (lVar10 == 0) {
      return 0x1b;
    }
  }
  else {
    __s = (char *)FUN_0015d644(pcVar13);
    if (__s == (char *)0x0) {
      return 0x1b;
    }
    if (*__s == '[') {
      sVar15 = strlen(__s);
      memmove(__s,__s + 1,sVar15 - 1);
      iVar6 = 0x5d;
LAB_0015c268:
      pcVar14 = strchr(__s,iVar6);
      if (pcVar14 != (char *)0x0) {
        *pcVar14 = '\0';
      }
      FUN_00143300(param_1[0x96]);
      param_1[0x96] = (long)__s;
    }
    else {
      if (*__s != '\0') {
        iVar6 = 0x3a;
        goto LAB_0015c268;
      }
      FUN_00143300(__s);
    }
    iVar6 = strcmp("Host:",pcVar13);
    if (iVar6 != 0) {
      lVar10 = FUN_00146120("Host:%s\r\n",pcVar13 + 5);
      goto LAB_0015c2a8;
    }
    param_1[0x95] = 0;
  }
  if ((*(uint *)((long)param_1 + 0x41c) & 0x4020) == 0x20) {
    local_80 = 0;
    lVar10 = FUN_00162ae4(*(undefined8 *)(lVar26 + 0x1568));
    if (lVar10 == 0) {
      return 0x1b;
    }
    if (((((param_1[0x1b] != param_1[0x1a]) &&
          (iVar6 = FUN_00163050(lVar10,5,param_1[0x1a],0), iVar6 != 0)) ||
         (iVar6 = FUN_00163050(lVar10,9,0,0), iVar6 != 0)) ||
        ((iVar6 = FUN_00144a90(&DAT_04094693,*(undefined8 *)(lVar26 + 0x1570)), iVar6 != 0 &&
         ((iVar6 = FUN_00163050(lVar10,2,0,0), iVar6 != 0 ||
          (iVar6 = FUN_00163050(lVar10,3,0,0), iVar6 != 0)))))) ||
       (iVar6 = FUN_00162bec(lVar10,0,&local_80,0), iVar6 != 0)) {
      FUN_00162a50(lVar10);
      return 0x1b;
    }
    bVar21 = *(byte *)(lVar26 + 0xf88);
    if ((bVar21 & 1) != 0) {
      FUN_00143300(*(undefined8 *)(lVar26 + 0xf68));
      bVar21 = *(byte *)(lVar26 + 0xf88);
    }
    *(byte *)(lVar26 + 0xf88) = bVar21 | 1;
    *(undefined8 *)(lVar26 + 0xf68) = local_80;
    FUN_00162a50(lVar10);
    iVar6 = FUN_00144a90(&DAT_0406f824,*(undefined8 *)(lVar26 + 0x1570));
    if (iVar6 == 0) goto LAB_0015c328;
    if ((*(byte *)(lVar26 + 0xf65) >> 1 & 1) != 0) {
      pcVar13 = strstr(pcVar32,";type=");
      if (pcVar13 == (char *)0x0) {
LAB_0015c648:
        if (**(char **)(lVar26 + 0x15a0) == '\0') {
          sVar15 = strlen(pcVar32);
          puVar18 = &local_70;
          if (pcVar32[sVar15 - 1] != '/') {
            puVar18 = (undefined8 *)((ulong)puVar18 | 1);
            local_70 = CONCAT71(local_70._1_7_,0x2f);
          }
        }
        else {
          puVar18 = &local_70;
        }
        uVar23 = 0x69;
        if ((*(ulong *)(lVar26 + 0xf60) & 0x800) != 0) {
          uVar23 = 0x61;
        }
        FUN_001460b8(puVar18,8,";type=%c",uVar23);
      }
      else if ((pcVar13[6] != '\0') && (pcVar13[7] == '\0')) {
        uVar7 = FUN_00144a78();
        uVar7 = (uVar7 & 0xff) - 0x41;
        if ((8 < uVar7) || ((1 << (ulong)(uVar7 & 0x1f) & 0x109U) == 0)) goto LAB_0015c648;
      }
    }
    bVar5 = (*(uint *)((long)param_1 + 0x41c) & 0x200080) == 0x80;
  }
  else {
LAB_0015c328:
    bVar5 = false;
  }
  lVar10 = FUN_0015fd30(param_1,"Accept");
  pcVar13 = "Accept: */*\r\n";
  if (lVar10 != 0) {
    pcVar13 = (char *)0x0;
  }
  plVar29[4] = (long)pcVar13;
  if (((iVar9 == 5) || (iVar9 == 2)) && (*(long *)(lVar26 + 0x1518) != 0)) {
    if (*(long *)(lVar26 + 0x1518) < 0) {
      *(undefined8 *)(lVar26 + 0x1518) = 0;
    }
    else if ((*(ushort *)(lVar26 + 0x15c4) >> 1 & 1) == 0) {
      if (param_1[0xa4] == 0) {
LAB_0015c3c4:
        lVar24 = *(long *)(lVar26 + 0x1518);
        lVar10 = 0;
        do {
          uVar12 = *(ulong *)(lVar26 + 0xc30);
          if (lVar24 - lVar10 <= (long)uVar12) {
            uVar12 = FUN_00146674();
          }
          lVar24 = (**(code **)(lVar26 + 0x1548))
                             (*(undefined8 *)(lVar26 + 0x1150),1,uVar12,
                              *(undefined8 *)(lVar26 + 0x1550));
          lVar10 = lVar24 + lVar10;
          if (uVar12 <= lVar24 - 1U) {
            FUN_0014d5f8(lVar26,"Could only read %ld bytes from the input",lVar10);
            return 0x1a;
          }
          lVar24 = *(long *)(lVar26 + 0x1518);
        } while (lVar10 < lVar24);
      }
      else {
        FUN_00149fe4(lVar26,1);
        iVar6 = (*(code *)param_1[0xa4])(param_1[0xa5],*(undefined8 *)(lVar26 + 0x1518),0);
        FUN_00149fe4(lVar26,0);
        if (iVar6 != 0) {
          if (iVar6 != 2) {
            FUN_0014d5f8(lVar26,"Could not seek stream");
            return 0x1a;
          }
          goto LAB_0015c3c4;
        }
      }
      lVar10 = *(long *)(lVar26 + 0x1538);
      if ((0 < lVar10) &&
         (lVar24 = lVar10 - *(long *)(lVar26 + 0x1518), *(long *)(lVar26 + 0x1538) = lVar24,
         lVar24 == 0 || lVar10 < *(long *)(lVar26 + 0x1518))) {
        FUN_0014d5f8(lVar26,"File already completely uploaded");
        return 0x12;
      }
    }
  }
  if ((*(ushort *)(lVar26 + 0x15c4) >> 9 & 1) != 0) {
    switch(iVar9) {
    case 1:
    case 6:
      lVar10 = FUN_0015fd30(param_1,"Range");
      if (lVar10 == 0) {
        FUN_00143300(param_1[0x93]);
        lVar10 = FUN_00146120("Range: bytes=%s\r\n",*(undefined8 *)(lVar26 + 0x1510));
        param_1[0x93] = lVar10;
      }
      else if ((iVar9 == 5) || (iVar9 == 2)) goto switchD_0015c4d4_caseD_2;
      break;
    case 2:
    case 5:
switchD_0015c4d4_caseD_2:
      lVar10 = FUN_0015fd30(param_1,"Content-Range");
      if (lVar10 == 0) {
        FUN_00143300(param_1[0x93]);
        if (*(long *)(lVar26 + 0x800) < 0) {
          lVar24 = *(long *)(lVar26 + 0x1538);
          pcVar13 = "Content-Range: bytes 0-%ld/%ld\r\n";
          lVar10 = lVar24 + -1;
LAB_0015c6d0:
          lVar10 = FUN_00146120(pcVar13,lVar10,lVar24);
        }
        else {
          if (*(long *)(lVar26 + 0x1518) == 0) {
            lVar10 = *(long *)(lVar26 + 0x1510);
            pcVar13 = "Content-Range: bytes %s/%ld\r\n";
            lVar24 = *(long *)(lVar26 + 0x1538);
            goto LAB_0015c6d0;
          }
          lVar10 = FUN_00146120("Content-Range: bytes %s%ld/%ld\r\n",
                                *(undefined8 *)(lVar26 + 0x1510),
                                *(long *)(lVar26 + 0x1538) + *(long *)(lVar26 + 0x1518) + -1);
        }
        param_1[0x93] = lVar10;
        if (lVar10 == 0) {
          return 0x1b;
        }
      }
    }
  }
  if (param_1[0xae] == 0) {
    if ((*(int *)(lVar26 + 0x1500) == 10) || ((int)param_1[0x46] == 10)) {
      puVar30 = &UNK_0406a404;
    }
    else {
      lVar10 = *(long *)(lVar26 + 0xa40);
      puVar30 = &UNK_0406a404;
      if (((10 < (int)param_1[0x46]) || (lVar10 != 1)) &&
         (puVar30 = &DAT_04089f5e, lVar10 != 0 && lVar10 < 2)) {
        puVar30 = &UNK_0406a404;
      }
    }
  }
  else {
    puVar30 = &DAT_04074a4d;
  }
  local_78 = FUN_00143330(1,0x18);
  if (local_78 == 0) {
    return 0x1b;
  }
  iVar6 = FUN_0015e3d4(&local_78,&DAT_0407ed13,puVar34);
  if (iVar6 != 0) {
    return iVar6;
  }
  pcVar13 = *(char **)(lVar26 + 0xe70);
  if (pcVar13 != (char *)0x0) {
    pcVar32 = pcVar13;
  }
  if (pcVar13 != (char *)0x0) {
    pcVar31 = (char *)0x0;
  }
  if ((*(uint *)((long)param_1 + 0x41c) & 0x4020) == 0x20) {
    pcVar32 = *(char **)(lVar26 + 0xf68);
    sVar15 = strlen(pcVar32);
    iVar6 = FUN_0015e4a4(&local_78,pcVar32,sVar15);
LAB_0015c7a8:
    if (iVar6 != 0) {
      return iVar6;
    }
  }
  else {
    if (bVar5) {
      iVar6 = FUN_0015e3d4(&local_78,"ftp://%s:%s@%s",param_1[0x42],param_1[0x43],pcVar32 + 6);
      goto LAB_0015c7a8;
    }
    sVar15 = strlen(pcVar32);
    iVar6 = FUN_0015e4a4(&local_78,pcVar32,sVar15);
    if (iVar6 != 0) {
      return iVar6;
    }
    if (pcVar31 != (char *)0x0) {
      iVar6 = FUN_0015e3d4(&local_78,&DAT_040adf79,pcVar31);
      goto LAB_0015c7a8;
    }
  }
  puVar20 = &DAT_0407ebb1;
  puVar18 = &DAT_0407ebb1;
  if ((undefined8 *)param_1[0x95] != (undefined8 *)0x0) {
    puVar18 = (undefined8 *)param_1[0x95];
  }
  puVar1 = &DAT_0407ebb1;
  if ((undefined8 *)param_1[0x8f] != (undefined8 *)0x0) {
    puVar1 = (undefined8 *)param_1[0x8f];
  }
  puVar2 = &DAT_0407ebb1;
  if ((undefined8 *)param_1[0x92] != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)param_1[0x92];
  }
  if ((*(ushort *)(lVar26 + 0x15c4) >> 9 & 1) != 0) {
    puVar20 = &DAT_0407ebb1;
    if ((undefined8 *)param_1[0x93] != (undefined8 *)0x0) {
      puVar20 = (undefined8 *)param_1[0x93];
    }
  }
  puVar33 = &DAT_0407ebb1;
  if (*(char **)(lVar26 + 0xdd0) == (char *)0x0) {
    puVar25 = &DAT_0407ebb1;
  }
  else {
    puVar25 = &DAT_0407ebb1;
    if (**(char **)(lVar26 + 0xdd0) != '\0') {
      puVar25 = &DAT_0407ebb1;
      if ((undefined8 *)param_1[0x90] != (undefined8 *)0x0) {
        puVar25 = (undefined8 *)param_1[0x90];
      }
    }
  }
  puVar3 = &DAT_0407ebb1;
  if ((undefined8 *)plVar29[4] != (undefined8 *)0x0) {
    puVar3 = (undefined8 *)plVar29[4];
  }
  puVar4 = &DAT_0407ebb1;
  if ((undefined8 *)param_1[0x98] != (undefined8 *)0x0) {
    puVar4 = (undefined8 *)param_1[0x98];
  }
  if ((*(char **)(lVar26 + 0xce8) != (char *)0x0) && (**(char **)(lVar26 + 0xce8) != '\0')) {
    puVar33 = &DAT_0407ebb1;
    if ((undefined8 *)param_1[0x91] != (undefined8 *)0x0) {
      puVar33 = (undefined8 *)param_1[0x91];
    }
  }
  puVar35 = &DAT_0407ebb1;
  if (*(long *)(lVar26 + 0xf70) != 0) {
    puVar35 = &DAT_0407ebb1;
    if ((undefined8 *)param_1[0x94] != (undefined8 *)0x0) {
      puVar35 = (undefined8 *)param_1[0x94];
    }
  }
  pcVar32 = "";
  if ((*(uint *)((long)param_1 + 0x41c) & 0x4020) == 0x20) {
    lVar10 = FUN_0015d5b4(param_1,"Proxy-Connection");
    pcVar32 = "Proxy-Connection: Keep-Alive\r\n";
    if (lVar10 != 0) {
      pcVar32 = "";
    }
  }
  iVar6 = FUN_0015e3d4(&local_78,"%s HTTP/%s\r\n%s%s%s%s%s%s%s%s%s%s%s",&local_70,puVar30,puVar18,
                       puVar1,puVar2,puVar20,puVar25,puVar3,puVar4,puVar33,puVar35,pcVar32,pcVar11);
  FUN_00143300(param_1[0x92]);
  param_1[0x92] = 0;
  FUN_00143300(param_1[0x8f]);
  param_1[0x8f] = 0;
  if (iVar6 != 0) {
    return iVar6;
  }
  if ((((*(byte *)(param_1[0x88] + 0x84) & 1) == 0) && ((int)param_1[0x46] != 0x14)) &&
     ((*(long *)(lVar26 + 0xa40) == 3 && (iVar6 = FUN_0015978c(local_78,param_1), iVar6 != 0)))) {
    return iVar6;
  }
  if (*(long *)(lVar26 + 0xf90) != 0 || local_90 != 0) {
    if (*(long *)(lVar26 + 0xf90) == 0) {
LAB_0015cab8:
      iVar8 = 0;
      iVar6 = 0;
    }
    else {
      FUN_0014b7c4(lVar26,2,2);
      if (param_1[0x96] != 0) {
        lVar27 = param_1[0x96];
      }
      plVar16 = (long *)FUN_0014cac0(*(undefined8 *)(lVar26 + 0xf90),lVar27,
                                     *(undefined8 *)(lVar26 + 0x15a0),
                                     *(uint *)(param_1[0x88] + 0x80) >> 1 & 1);
      FUN_0014b80c(lVar26,2);
      if (plVar16 == (long *)0x0) goto LAB_0015cab8;
      iVar6 = 0;
      plVar28 = plVar16;
      do {
        lVar27 = plVar28[2];
        if (lVar27 != 0) {
          if (iVar6 == 0) {
            iVar8 = FUN_0015e3d4(&local_78,"Cookie: ");
            if (iVar8 != 0) {
              iVar6 = 0;
              goto LAB_0015cb38;
            }
            lVar27 = plVar28[2];
            puVar18 = &DAT_0407ebb1;
          }
          else {
            puVar18 = (undefined8 *)&DAT_040a8e72;
          }
          iVar8 = FUN_0015e3d4(&local_78,"%s%s=%s",puVar18,plVar28[1],lVar27);
          if (iVar8 != 0) goto LAB_0015cb38;
          iVar6 = iVar6 + 1;
        }
        plVar28 = (long *)*plVar28;
      } while (plVar28 != (long *)0x0);
      iVar8 = 0;
LAB_0015cb38:
      FUN_0014cf1c(plVar16);
    }
    if ((local_90 != 0) && (iVar8 == 0)) {
      if (iVar6 == 0) {
        iVar8 = FUN_0015e3d4(&local_78,"Cookie: ");
        if (iVar8 != 0) {
          return iVar8;
        }
        puVar18 = &DAT_0407ebb1;
      }
      else {
        puVar18 = (undefined8 *)&DAT_040a8e72;
      }
      iVar8 = FUN_0015e3d4(&local_78,&DAT_0406a3d7,puVar18,local_90);
      iVar6 = iVar6 + 1;
    }
    if ((iVar6 != 0) && (iVar8 == 0)) {
      iVar8 = FUN_0015e4a4(&local_78,&DAT_040a395c,2);
    }
    if (iVar8 != 0) {
      return iVar8;
    }
  }
  lVar27 = local_78;
  iVar6 = FUN_0015ea88(lVar26,local_78);
  if (iVar6 != 0) {
    return iVar6;
  }
  iVar6 = FUN_0015e76c(param_1,0,lVar27);
  if (iVar6 != 0) {
    return iVar6;
  }
  plVar29[2] = 0;
  FUN_00146c74(lVar26,0xffffffffffffffff);
  if (iVar9 - 3U < 2) {
    if (*(char *)((long)param_1 + 0x41d) < '\0') {
      iVar9 = FUN_0015e3d4(&local_78,"Content-Length: 0\r\n\r\n");
      if (iVar9 != 0) {
        return iVar9;
      }
      iVar9 = FUN_0015e108(&local_78,param_1,lVar26 + 0x1638,0,0);
      if (iVar9 == 0) {
        iVar9 = -1;
        goto LAB_0015cf94;
      }
    }
    else {
      uVar12 = plVar29[1];
      *(ulong *)(lVar26 + 0x1538) = uVar12;
      if ((((uVar12 != 0xffffffffffffffff) && ((*(ushort *)(lVar26 + 0x660) >> 6 & 1) == 0)) &&
          ((*(char *)((long)param_1 + 0x41d) < '\0' ||
           (lVar27 = FUN_0015fd30(param_1,"Content-Length"), lVar27 == 0)))) &&
         (iVar9 = FUN_0015e3d4(&local_78,"Content-Length: %ld\r\n",uVar12), iVar9 != 0)) {
        return iVar9;
      }
      for (puVar18 = *(undefined8 **)(*plVar29 + 0x50); puVar18 != (undefined8 *)0x0;
          puVar18 = (undefined8 *)puVar18[1]) {
        iVar9 = FUN_0015e3d4(&local_78,&DAT_040e1e8e,*puVar18);
        if (iVar9 != 0) {
          return iVar9;
        }
      }
      lVar27 = FUN_0015fd30(param_1,"Expect");
      if (lVar27 == 0) {
        if (uVar12 < 0x401) {
          uVar22 = *(ushort *)(lVar26 + 0x15c4) & 0xfeff;
          goto LAB_0015d108;
        }
        iVar9 = FUN_0015ebb0(lVar26,param_1,local_78);
        if (iVar9 != 0) {
          return iVar9;
        }
      }
      else {
        uVar17 = FUN_0015e58c(lVar27,"Expect:","100-continue");
        uVar22 = 0x100;
        if ((uVar17 & 1) == 0) {
          uVar22 = 0;
        }
        uVar22 = *(ushort *)(lVar26 + 0x15c4) & 0xfeff | uVar22;
LAB_0015d108:
        *(ushort *)(lVar26 + 0x15c4) = uVar22;
      }
      iVar9 = FUN_0015e4a4(&local_78,&DAT_040a395c,2);
      if (iVar9 != 0) {
        return iVar9;
      }
      FUN_00146c74(lVar26,uVar12);
      *(undefined **)(lVar26 + 0x1548) = PTR_LAB_04bcb6d8;
      *(long *)(lVar26 + 0x1550) = *plVar29;
      *(undefined4 *)(plVar29 + 0x41) = 2;
      iVar9 = FUN_0015e108(&local_78,param_1,lVar26 + 0x1638,0,0);
      uVar17 = uVar12;
      if (iVar9 == 0) goto LAB_0015d1b8;
    }
    pcVar32 = "Failed sending POST request";
LAB_0015d180:
    FUN_0014d5f8(lVar26,pcVar32);
    return iVar9;
  }
  if (iVar9 == 2) {
    if (*(char *)((long)param_1 + 0x41d) < '\0') {
      uVar12 = 0;
      if ((*(ushort *)(lVar26 + 0x660) >> 6 & 1) == 0) goto LAB_0015ce44;
    }
    else {
      uVar12 = *(ulong *)(lVar26 + 0x1538);
      if (((uVar12 != 0xffffffffffffffff) && ((*(ushort *)(lVar26 + 0x660) >> 6 & 1) == 0)) &&
         (lVar27 = FUN_0015fd30(param_1,"Content-Length"), lVar27 == 0)) {
LAB_0015ce44:
        iVar9 = FUN_0015e3d4(&local_78,"Content-Length: %ld\r\n",uVar12);
        if (iVar9 != 0) {
          return iVar9;
        }
      }
    }
    lVar27 = FUN_0015fd30(param_1,"Content-Type");
    if ((lVar27 == 0) &&
       (iVar9 = FUN_0015e3d4(&local_78,"Content-Type: application/x-www-form-urlencoded\r\n"),
       iVar9 != 0)) {
      return iVar9;
    }
    lVar27 = FUN_0015fd30(param_1,"Expect");
    if (lVar27 == 0) {
      if (uVar12 < 0x401) {
        uVar22 = *(ushort *)(lVar26 + 0x15c4) & 0xfeff;
        goto LAB_0015cfb4;
      }
      iVar9 = FUN_0015ebb0(lVar26,param_1,local_78);
      if (iVar9 != 0) {
        return iVar9;
      }
    }
    else {
      uVar17 = FUN_0015e58c(lVar27,"Expect:","100-continue");
      uVar22 = 0x100;
      if ((uVar17 & 1) == 0) {
        uVar22 = 0;
      }
      uVar22 = *(ushort *)(lVar26 + 0x15c4) & 0xfeff | uVar22;
LAB_0015cfb4:
      *(ushort *)(lVar26 + 0x15c4) = uVar22;
    }
    if (*(long *)(lVar26 + 0x6e8) == 0) {
      iVar9 = FUN_0015e4a4(&local_78,&DAT_040a395c,2);
      if (iVar9 != 0) {
        return iVar9;
      }
      if (((*(ushort *)(lVar26 + 0x660) >> 6 & 1) != 0) && (*(char *)((long)param_1 + 0x41d) < '\0')
         ) {
        pcVar32 = "0\r\n\r\n";
        uVar19 = 5;
        goto LAB_0015d060;
      }
      if (*(long *)(lVar26 + 0x1538) != 0) {
        uVar17 = uVar12;
        if (uVar12 == 0) {
          uVar17 = 0xffffffffffffffff;
        }
        FUN_00146c74(lVar26,uVar17);
        if (-1 < *(char *)((long)param_1 + 0x41d)) {
          uVar17 = 0;
          plVar29[1] = uVar12;
          plVar29[2] = (long)(plVar29 + 2);
          goto LAB_0015d070;
        }
      }
LAB_0015d06c:
      uVar17 = 0;
    }
    else {
      if ((((int)param_1[0x46] == 0x14) || (0xffff < (long)uVar12)) ||
         ((*(ushort *)(lVar26 + 0x15c4) >> 8 & 1) != 0)) {
        plVar29[1] = uVar12;
        plVar29[2] = *(long *)(lVar26 + 0x6e8);
        *(undefined4 *)(plVar29 + 0x41) = 2;
        *(long **)(lVar26 + 0x1550) = param_1;
        *(code **)(lVar26 + 0x1548) = FUN_0015e304;
        FUN_00146c74(lVar26,plVar29[1]);
        pcVar32 = "\r\n";
        uVar19 = 2;
LAB_0015d060:
        iVar9 = FUN_0015e4a4(&local_78,pcVar32,uVar19);
        if (iVar9 != 0) {
          return iVar9;
        }
        goto LAB_0015d06c;
      }
      iVar9 = FUN_0015e4a4(&local_78,&DAT_040a395c,2);
      if (iVar9 != 0) {
        return iVar9;
      }
      if ((*(ushort *)(lVar26 + 0x660) >> 6 & 1) == 0) {
        iVar9 = FUN_0015e4a4(&local_78,*(undefined8 *)(lVar26 + 0x6e8),uVar12);
        uVar17 = uVar12;
      }
      else {
        if (uVar12 == 0) {
          uVar17 = 5;
        }
        else {
          iVar9 = FUN_0015e3d4(&local_78,&DAT_040dcc74,uVar12 & 0xffffffff);
          if (iVar9 != 0) {
            return iVar9;
          }
          iVar9 = FUN_0015e4a4(&local_78,*(undefined8 *)(lVar26 + 0x6e8),uVar12);
          if (iVar9 != 0) {
            return iVar9;
          }
          iVar9 = FUN_0015e4a4(&local_78,&DAT_040a395c,2);
          if (iVar9 != 0) {
            return iVar9;
          }
          uVar17 = uVar12 + 7;
        }
        iVar9 = FUN_0015e4a4(&local_78,"0\r\n\r\n",5);
      }
      if (iVar9 != 0) {
        return iVar9;
      }
      FUN_00146c74(lVar26,uVar12);
    }
LAB_0015d070:
    iVar9 = FUN_0015e108(&local_78,param_1,lVar26 + 0x1638,uVar17,0);
    if (iVar9 != 0) {
      pcVar32 = "Failed sending HTTP POST request";
      goto LAB_0015d180;
    }
    uVar17 = plVar29[2];
LAB_0015d1b8:
    iVar6 = -(uint)(uVar17 == 0);
  }
  else {
    if (iVar9 != 5) {
      iVar9 = FUN_0015e4a4(&local_78,&DAT_040a395c,2);
      if (iVar9 != 0) {
        return iVar9;
      }
      iVar9 = FUN_0015e108(&local_78,param_1,lVar26 + 0x1638,0,0);
      if (iVar9 != 0) {
        pcVar32 = "Failed sending HTTP request";
        goto LAB_0015d180;
      }
      iVar9 = -(uint)(plVar29[2] == 0);
LAB_0015cf94:
      FUN_00161720(lVar26,0,0xffffffffffffffff,1,iVar9);
      uVar12 = 0;
      goto LAB_0015d1d0;
    }
    if (*(char *)((long)param_1 + 0x41d) < '\0') {
      uVar12 = 0;
      if ((*(ushort *)(lVar26 + 0x660) >> 6 & 1) == 0) {
LAB_0015cdf4:
        iVar9 = FUN_0015e3d4(&local_78,"Content-Length: %ld\r\n",uVar12);
        if (iVar9 != 0) {
          return iVar9;
        }
        goto LAB_0015ce10;
      }
LAB_0015ceb8:
      iVar6 = -1;
    }
    else {
      uVar12 = *(ulong *)(lVar26 + 0x1538);
      if (uVar12 != 0xffffffffffffffff) {
        if (((*(ushort *)(lVar26 + 0x660) >> 6 & 1) == 0) &&
           (lVar27 = FUN_0015fd30(param_1,"Content-Length"), lVar27 == 0)) goto LAB_0015cdf4;
LAB_0015ce10:
        if (uVar12 == 0) goto LAB_0015ceb8;
        lVar27 = local_78;
      }
      iVar9 = FUN_0015ebb0(lVar26,param_1,lVar27);
      if (iVar9 != 0) {
        return iVar9;
      }
      iVar6 = 0;
    }
    iVar9 = FUN_0015e4a4(&local_78,&DAT_040a395c,2);
    if (iVar9 != 0) {
      return iVar9;
    }
    FUN_00146c74(lVar26,uVar12);
    iVar9 = FUN_0015e108(&local_78,param_1,lVar26 + 0x1638,0,0);
    if (iVar9 != 0) {
      pcVar32 = "Failed sending PUT request";
      goto LAB_0015d180;
    }
  }
  FUN_00161720(lVar26,0,0xffffffffffffffff,1,iVar6);
LAB_0015d1d0:
  if (*(long *)(lVar26 + 0x108) == 0) {
    iVar9 = 0;
  }
  else {
    FUN_00146f3c(lVar26);
    iVar6 = FUN_001466d0(param_1);
    iVar9 = 0;
    if (iVar6 != 0) {
      iVar9 = 0x2a;
    }
    if ((long)uVar12 <= *(long *)(lVar26 + 0x108)) {
      FUN_0014d430(lVar26,"upload completely sent off: %ld out of %ld bytes\n",
                   *(long *)(lVar26 + 0x108),uVar12);
      *(undefined4 *)(lVar26 + 0x198) = 0;
      *(ushort *)(lVar26 + 0x660) = *(ushort *)(lVar26 + 0x660) | 4;
      *(uint *)(lVar26 + 0x1c0) = *(uint *)(lVar26 + 0x1c0) & 0xfffffffd;
      thunk_FUN_00149f68(lVar26,0);
    }
  }
  if ((int)param_1[0x46] != 0x14) {
    return iVar9;
  }
  if ((*(ushort *)(lVar26 + 0x660) >> 6 & 1) == 0) {
    return iVar9;
  }
  *(ushort *)(lVar26 + 0x660) = *(ushort *)(lVar26 + 0x660) & 0xffbf;
  return iVar9;
}

