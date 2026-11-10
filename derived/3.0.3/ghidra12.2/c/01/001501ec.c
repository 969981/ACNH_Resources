
int FUN_001501ec(long param_1,char *param_2,undefined1 *param_3)

{
  long *plVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  char cVar8;
  uint uVar9;
  bool bVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  long *plVar19;
  long lVar20;
  ulong uVar21;
  char *pcVar22;
  size_t sVar23;
  char *pcVar24;
  void *pvVar25;
  ulong uVar26;
  byte *pbVar27;
  uint uVar28;
  undefined **ppuVar29;
  long lVar30;
  size_t sVar31;
  undefined8 *puVar32;
  char *pcVar33;
  undefined8 *puVar34;
  undefined8 uVar35;
  undefined1 auVar36 [16];
  ulong local_2b8;
  char *local_2b0;
  char *local_2a0;
  char *local_288;
  char local_278 [4];
  char local_274 [4];
  long *local_270;
  char acStack_268 [255];
  undefined1 local_169;
  undefined8 local_168;
  undefined8 auStack_160 [13];
  char local_f8;
  undefined1 auStack_f7 [32];
  undefined1 auStack_d7 [110];
  undefined1 local_69;
  
  *param_2 = '\0';
  FUN_00143300(*(undefined8 *)(param_1 + 0x1e8));
  *(undefined8 *)(param_1 + 0x1e8) = 0;
  FUN_00143300(*(undefined8 *)(param_1 + 0x1d0));
  memset((void *)(param_1 + 0xf0),0,0x578);
  local_270 = (long *)0x0;
  *(undefined8 *)(param_1 + 0xf8) = 0xffffffffffffffff;
  local_274[0] = '\0';
  local_278[0] = '\0';
  uVar17 = FUN_00149fa4(*(undefined8 *)(param_1 + 0xd8));
  uVar18 = FUN_00149fb0(*(undefined8 *)(param_1 + 0xd8));
  *param_2 = '\0';
  if (*(long *)(param_1 + 0xf68) != 0) {
    plVar19 = (long *)FUN_00143330(1,0x690);
    if (plVar19 != (long *)0x0) {
      lVar30 = *(long *)(*(long *)PTR_PTR_04bcb710 + 0x18);
      lVar20 = FUN_00143330(4,lVar30);
      if (lVar20 != 0) {
        plVar19[0x5e] = lVar20;
        plVar19[0x56] = lVar20 + lVar30;
        plVar19[0x53] = lVar20;
        plVar19[0xc] = -1;
        plVar19[0x32] = -1;
        plVar19[0x59] = lVar20 + lVar30 * 2;
        plVar19[0x5c] = lVar20 + lVar30 * 3;
        plVar19[0x88] = (long)&PTR_s_<no_protocol>_048363b0;
        plVar19[0x4b] = -1;
        *(undefined4 *)(plVar19 + 0x33) = 0xffffffff;
        plVar19[0x4c] = -1;
        FUN_00158f30(plVar19,1);
        auVar36 = FUN_00147178();
        *(undefined1 (*) [16])(plVar19 + 0x49) = auVar36;
        auVar36 = FUN_00147178();
        *(undefined1 (*) [16])(plVar19 + 0x8b) = auVar36;
        lVar20 = *(long *)(param_1 + 0xf30);
        *plVar19 = param_1;
        plVar19[0x8d] = lVar20;
        uVar16 = *(uint *)(param_1 + 0xc20);
        *(undefined4 *)(plVar19 + 0x27) = 4;
        *(uint *)(plVar19 + 0x2f) = uVar16;
        if ((*(char **)(param_1 + 0xd48) == (char *)0x0) || (**(char **)(param_1 + 0xd48) == '\0'))
        {
          uVar16 = 0;
          uVar28 = *(uint *)((long)plVar19 + 0x41c) & 0xffffffef;
        }
        else {
          uVar28 = *(uint *)((long)plVar19 + 0x41c) | 0x10;
          if (uVar16 < 2) {
            uVar16 = 0x20;
          }
          else {
            uVar16 = (uint)(uVar16 == 2) << 5;
          }
        }
        uVar16 = uVar28 & 0xffffff9f | uVar16 | (uVar16 << 1 ^ 0x40) & (int)(uVar28 << 0x1b) >> 0x1f
        ;
        *(uint *)((long)plVar19 + 0x41c) = uVar16;
        if ((*(char **)(param_1 + 0xd50) != (char *)0x0) && (**(char **)(param_1 + 0xd50) != '\0'))
        {
          uVar16 = uVar16 | 0x50;
          *(uint *)((long)plVar19 + 0x41c) = uVar16;
        }
        bVar7 = *(byte *)(plVar19 + 0x70);
        uVar28 = (uint)(*(long *)(param_1 + 0xe18) != 0) << 8;
        uVar4 = uVar16 & 0xff | uVar28;
        *(uint *)((long)plVar19 + 0x41c) = uVar16 & 0xfffffe00 | uVar4;
        uVar9 = (*(uint *)(param_1 + 0xf60) >> 10 & 1) << 0xe;
        uVar5 = uVar16 & 0xffff8000 | uVar16 & 0x3e00 | uVar4 | uVar9;
        *(uint *)((long)plVar19 + 0x41c) = uVar5;
        uVar4 = uVar16 & 0x7f | (uint)(*(long *)(param_1 + 0xe00) != 0) << 7;
        *(uint *)((long)plVar19 + 0x41c) =
             uVar16 & 0xffff8000 | uVar16 & 0x3e00 | uVar28 | uVar9 | uVar4;
        uVar28 = uVar5 & 0x1ff00 | uVar4 | (*(uint *)(param_1 + 0xf60) >> 0x1e & 1) << 0x11;
        *(uint *)((long)plVar19 + 0x41c) = uVar16 & 0xfffc0000 | uVar28;
        uVar28 = uVar28 | (*(uint *)(param_1 + 0xf60) >> 0x1f) << 0x12;
        *(uint *)((long)plVar19 + 0x41c) = uVar16 & 0xfff80000 | uVar28;
        bVar2 = (*(byte *)(param_1 + 0xad0) >> 2 & 1) << 2;
        bVar3 = bVar7 & 0xf8;
        *(byte *)(plVar19 + 0x70) = bVar3 | bVar7 & 3 | bVar2;
        bVar6 = *(byte *)(param_1 + 0xad0) & 1;
        *(byte *)(plVar19 + 0x70) = bVar3 | bVar7 & 2 | bVar2 | bVar6;
        bVar7 = *(byte *)(plVar19 + 0x82);
        *(byte *)(plVar19 + 0x70) = bVar3 | bVar2 | bVar6 | *(byte *)(param_1 + 0xad0) & 2;
        bVar2 = (*(byte *)(param_1 + 3000) >> 2 & 1) << 2;
        bVar3 = bVar7 & 0xf8;
        *(byte *)(plVar19 + 0x82) = bVar3 | bVar7 & 3 | bVar2;
        bVar6 = *(byte *)(param_1 + 3000) & 1;
        *(byte *)(plVar19 + 0x82) = bVar3 | bVar7 & 2 | bVar2 | bVar6;
        *(byte *)(plVar19 + 0x82) = bVar3 | bVar2 | bVar6 | *(byte *)(param_1 + 3000) & 2;
        plVar19[0x8a] = *(long *)(param_1 + 0xc50);
        *(uint *)((long)plVar19 + 0x41c) =
             (uint)(*(ulong *)(param_1 + 0xf60) >> 7) & 0x80000000 | uVar16 & 0x7ff80000 | uVar28;
        uVar21 = FUN_00148068(*(undefined8 *)(param_1 + 0xd8),1);
        if (((uVar21 & 1) == 0) || (plVar19[0xa1] != 0)) {
code_r0x001504d0:
          FUN_00143a84(plVar19 + 0x99,&DAT_00152af8);
          FUN_00143a84(plVar19 + 0x9d,&DAT_00152af8);
          if (*(long *)(param_1 + 0xce0) != 0) {
            lVar20 = FUN_00143320();
            plVar19[0xcd] = lVar20;
            if (lVar20 == 0) goto LAB_00150538;
          }
          *(undefined4 *)((long)plVar19 + 0x674) = *(undefined4 *)(param_1 + 0x704);
          *(undefined2 *)(plVar19 + 0xce) = *(undefined2 *)(param_1 + 0x700);
          plVar19[10] = *(long *)(param_1 + 0x768);
          plVar19[0xb] = *(long *)(param_1 + 0x770);
          FUN_0014f424(param_1);
          lVar20 = *(long *)(param_1 + 0xf48);
          if (lVar20 == 0) {
            lVar20 = FUN_00162a44();
            *(long *)(param_1 + 0x1568) = lVar20;
            if (lVar20 == 0) goto switchD_00150648_caseD_7;
          }
          else {
            *(long *)(param_1 + 0x1568) = lVar20;
          }
          if ((*(long *)(param_1 + 0xcd8) != 0) &&
             (uVar21 = FUN_0016297c(*(undefined8 *)(param_1 + 0xf68),0,8), (uVar21 & 1) == 0)) {
            if ((*(byte *)(param_1 + 0xf88) & 1) != 0) {
              FUN_00143300(*(undefined8 *)(param_1 + 0xf68));
            }
            lVar30 = FUN_00146120("%s://%s",*(undefined8 *)(param_1 + 0xcd8),
                                  *(undefined8 *)(param_1 + 0xf68));
            if (lVar30 == 0) goto switchD_00150648_caseD_7;
            *(long *)(param_1 + 0xf68) = lVar30;
            *(byte *)(param_1 + 0xf88) = *(byte *)(param_1 + 0xf88) | 1;
          }
          if (*(long *)(param_1 + 0xf48) == 0) {
            uVar16 = (uint)((ulong)*(undefined8 *)(param_1 + 0xf60) >> 0x20);
            uVar13 = FUN_00163050(lVar20,0,*(undefined8 *)(param_1 + 0xf68),
                                  uVar16 >> 0xc & 0x10 | uVar16 >> 0x12 & 0x20 | 0x208);
            iVar14 = 3;
            switch(uVar13) {
            case 0:
              break;
            default:
              goto switchD_00150648_caseD_1;
            case 5:
              goto switchD_00150648_caseD_5;
            case 7:
              goto switchD_00150648_caseD_7;
            case 8:
              goto switchD_00150648_caseD_8;
            }
          }
          puVar32 = (undefined8 *)(param_1 + 0x1570);
          uVar13 = FUN_00162bec(lVar20,1,puVar32,0);
          iVar14 = 3;
          switch(uVar13) {
          case 0:
            plVar1 = (long *)(param_1 + 0xd48);
            uVar35 = *puVar32;
            ppuVar29 = &PTR_PTR_04836398;
            puVar34 = (undefined8 *)PTR_PTR_04bcb6c0;
            do {
              iVar14 = FUN_00144a90(*puVar34,uVar35);
              if (iVar14 != 0) {
                if (((*(ulong *)(param_1 + 0xe98) & (ulong)*(uint *)(puVar34 + 0x10)) != 0) &&
                   (((*(ushort *)(param_1 + 0x15c4) >> 1 & 1) == 0 ||
                    ((*(ulong *)(param_1 + 0xea0) & (ulong)*(uint *)(puVar34 + 0x10)) != 0)))) {
                  plVar19[0x89] = (long)puVar34;
                  plVar19[0x88] = (long)puVar34;
                  uVar13 = FUN_00162bec(lVar20,2,(undefined8 *)(param_1 + 0x1588),0x40);
                  iVar14 = 3;
                  switch(uVar13) {
                  case 0:
                    lVar30 = FUN_00143320(*(undefined8 *)(param_1 + 0x1588));
                    plVar19[0x42] = lVar30;
                    if (lVar30 == 0) goto switchD_00150648_caseD_7;
                    *(uint *)((long)plVar19 + 0x41c) = *(uint *)((long)plVar19 + 0x41c) | 0x80;
                    break;
                  default:
                    goto switchD_00150648_caseD_1;
                  case 5:
                    goto switchD_00150648_caseD_5;
                  case 7:
                    goto switchD_00150648_caseD_7;
                  case 8:
                    goto switchD_00150648_caseD_8;
                  case 0xb:
                    break;
                  }
                  iVar15 = FUN_00162bec(lVar20,3,(undefined8 *)(param_1 + 0x1590),0x40);
                  switch(iVar15) {
                  case 5:
                    goto switchD_00150648_caseD_5;
                  case 6:
                  case 9:
                  case 10:
                  case 0xb:
                    goto switchD_00150648_caseD_1;
                  case 7:
                    goto switchD_00150648_caseD_7;
                  case 8:
                    goto switchD_00150648_caseD_8;
                  case 0xc:
                    break;
                  default:
                    if (iVar15 != 0) goto switchD_00150648_caseD_1;
                    lVar30 = FUN_00143320(*(undefined8 *)(param_1 + 0x1590));
                    plVar19[0x43] = lVar30;
                    if (lVar30 == 0) goto switchD_00150648_caseD_7;
                    *(uint *)((long)plVar19 + 0x41c) = *(uint *)((long)plVar19 + 0x41c) | 0x80;
                  }
                  iVar15 = FUN_00162bec(lVar20,4,(undefined8 *)(param_1 + 0x1598),0x40);
                  switch(iVar15) {
                  case 5:
                    goto switchD_00150648_caseD_5;
                  case 6:
                  case 9:
                  case 10:
                  case 0xb:
                  case 0xc:
                    goto switchD_00150648_caseD_1;
                  case 7:
                    goto switchD_00150648_caseD_7;
                  case 8:
                    goto switchD_00150648_caseD_8;
                  case 0xd:
                    break;
                  default:
                    if (iVar15 != 0) goto switchD_00150648_caseD_1;
                    lVar30 = FUN_00143320(*(undefined8 *)(param_1 + 0x1598));
                    plVar19[0x44] = lVar30;
                    if (lVar30 == 0) goto switchD_00150648_caseD_7;
                  }
                  iVar15 = FUN_00162bec(lVar20,5,param_1 + 0x1578,0);
                  if ((iVar15 != 0) && (iVar15 = FUN_00144a90(&DAT_040f2037,*puVar32), iVar15 == 0))
                  goto switchD_00150648_caseD_7;
                  uVar13 = FUN_00162bec(lVar20,7,param_1 + 0x15a0,0);
                  switch(uVar13) {
                  case 0:
                    goto switchD_001508b0_caseD_0;
                  default:
                    goto switchD_00150648_caseD_1;
                  case 5:
                    goto switchD_00150648_caseD_5;
                  case 7:
                    goto switchD_00150648_caseD_7;
                  case 8:
                    goto switchD_00150648_caseD_8;
                  }
                }
                break;
              }
              puVar34 = (undefined8 *)*ppuVar29;
              ppuVar29 = ppuVar29 + 1;
            } while (puVar34 != (undefined8 *)0x0);
            FUN_0014d5f8(param_1,"Protocol \"%s\" not supported or disabled in libcurl",uVar35);
          case 5:
switchD_00150648_caseD_5:
            iVar14 = 1;
            break;
          default:
            break;
          case 7:
            goto switchD_00150648_caseD_7;
          case 8:
switchD_00150648_caseD_8:
            iVar14 = 0x43;
          }
          goto switchD_00150648_caseD_1;
        }
        lVar20 = FUN_00143330(0x4000,1);
        plVar19[0xa1] = lVar20;
        if (lVar20 != 0) goto code_r0x001504d0;
LAB_00150538:
        FUN_00143b8c(plVar19 + 0x99,0);
        FUN_00143b8c(plVar19 + 0x9d,0);
        FUN_00143300(plVar19[0xa1]);
        FUN_00143300(plVar19[0xcd]);
        FUN_00143300(plVar19[0x5e]);
      }
      FUN_00143300(plVar19);
      plVar19 = (long *)0x0;
    }
    goto switchD_00150648_caseD_7;
  }
  plVar19 = (long *)0x0;
  iVar14 = 3;
  goto switchD_00150648_caseD_1;
switchD_001508b0_caseD_0:
  iVar14 = FUN_00162bec(lVar20,6,(undefined8 *)(param_1 + 0x1580),1);
  if (iVar14 == 0) {
    strtoul(*(char **)(param_1 + 0x1580),(char **)0x0,10);
    uVar16 = FUN_00146654();
    *(uint *)(plVar19 + 0x33) = uVar16 & 0xffff;
  }
  else {
    iVar14 = FUN_00144a90(&DAT_040f2037,*puVar32);
    if (iVar14 == 0) goto switchD_00150648_caseD_7;
  }
  FUN_00162bec(lVar20,8,param_1 + 0x15a8,0);
  pcVar33 = "";
  if (*(char **)(param_1 + 0x1578) != (char *)0x0) {
    pcVar33 = *(char **)(param_1 + 0x1578);
  }
  if (*pcVar33 == '[') {
    pcVar33 = pcVar33 + 1;
    pcVar22 = strchr(pcVar33,0x25);
    *(uint *)((long)plVar19 + 0x41c) = *(uint *)((long)plVar19 + 0x41c) | 0x200;
    if (pcVar22 != (char *)0x0) {
      local_168 = (char *)0x0;
      lVar20 = 3;
      iVar14 = strncmp("%25",pcVar22,3);
      if (iVar14 != 0) {
        FUN_0014d430(param_1,"Please URL encode %% as %%25, see RFC 6874.\n");
        lVar20 = 1;
      }
      uVar21 = strtoul(pcVar22 + lVar20,(char **)&local_168,10);
      pcVar24 = local_168;
      if (*local_168 == ']') {
        sVar23 = strlen(local_168);
        memmove(pcVar22,pcVar24,sVar23 + 1);
        *(int *)(plVar19 + 0x17) = (int)uVar21;
      }
      else {
        FUN_0014d430(param_1,"Invalid IPv6 address format\n");
      }
    }
    pcVar22 = strchr(pcVar33,0x5d);
    if (pcVar22 != (char *)0x0) {
      *pcVar22 = '\0';
    }
  }
  lVar20 = FUN_00143320(pcVar33);
  plVar19[0x18] = lVar20;
  if (lVar20 == 0) goto switchD_00150648_caseD_7;
  plVar19[0x1a] = lVar20;
  if (*(int *)(param_1 + 0xe90) != 0) {
    *(int *)(plVar19 + 0x17) = *(int *)(param_1 + 0xe90);
  }
  if (*(long *)(param_1 + 0xe68) != 0) {
    lVar20 = FUN_00143320();
    plVar19[0x45] = lVar20;
    if (lVar20 == 0) goto switchD_00150648_caseD_7;
  }
  cVar8 = *(char *)(param_1 + 0x6c0);
  if (cVar8 != '\0') {
    memset(&local_168,0,0xb4);
    iVar14 = FUN_00174ce0(&local_168);
    if (*plVar1 != 0) {
      FUN_00146338(*(undefined8 *)PTR_stderr_04bcb8f8,
                   "Warning: CURLOPT_PROXYAUTOCONFIG is 1 (default), so options set via CURLOPT_PROXY* are ignored.\n"
                  );
      FUN_00143300(*plVar1);
      *plVar1 = 0;
    }
    if ((iVar14 == 0) && (local_168._4_1_ != '\0')) {
      iVar14 = FUN_00174db4(plVar1,auStack_160);
      if (iVar14 != 0) goto switchD_00150648_caseD_1;
      *(ulong *)(param_1 + 0x680) = (ulong)local_168 >> 0x30;
      *(uint *)((long)plVar19 + 0x41c) = *(uint *)((long)plVar19 + 0x41c) | 0x10;
      if (local_f8 != '\0') {
        iVar14 = FUN_00174db4(param_1 + 0xe18,auStack_f7);
        if ((iVar14 != 0) || (iVar14 = FUN_00174db4(param_1 + 0xe20,auStack_d7), iVar14 != 0))
        goto switchD_00150648_caseD_1;
        *(uint *)((long)plVar19 + 0x41c) = *(uint *)((long)plVar19 + 0x41c) | 0x100;
      }
    }
  }
  lVar20 = *plVar19;
  if ((*(byte *)((long)plVar19 + 0x41d) & 1) != 0) {
    memset(&local_168,0,0x100);
    memset(acStack_268,0,0x100);
    if (*(char **)(lVar20 + 0xe18) != (char *)0x0) {
      strncpy((char *)&local_168,*(char **)(lVar20 + 0xe18),0x100);
      local_69 = 0;
    }
    if (*(char **)(lVar20 + 0xe20) != (char *)0x0) {
      strncpy(acStack_268,*(char **)(lVar20 + 0xe20),0x100);
      local_169 = 0;
    }
    iVar14 = FUN_00144cf8(lVar20,&local_168,0,plVar19 + 0x30,0,0);
    if ((iVar14 != 0) ||
       (iVar14 = FUN_00144cf8(lVar20,acStack_268,0,plVar19 + 0x31,0,0), iVar14 != 0))
    goto LAB_00151004;
  }
  if (*(long *)(lVar20 + 0xd48) != 0) {
    local_288 = (char *)FUN_00143320();
    if (local_288 != (char *)0x0) goto LAB_00150bf0;
    FUN_0014d5f8(lVar20,"memory shortage");
    local_288 = (char *)0x0;
LAB_00150c18:
    local_2a0 = (char *)0x0;
    iVar14 = 0x1b;
    goto LAB_00151008;
  }
  local_288 = (char *)0x0;
LAB_00150bf0:
  if (*(long *)(lVar20 + 0xd50) == 0) {
    local_2a0 = (char *)0x0;
  }
  else {
    local_2a0 = (char *)FUN_00143320();
    if (local_2a0 == (char *)0x0) {
      FUN_0014d5f8(lVar20,"memory shortage");
      goto LAB_00150c18;
    }
  }
  if ((cVar8 == '\0') && (*(long *)(lVar20 + 0xe28) == 0)) {
    pcVar33 = "no_proxy";
    local_2b0 = (char *)FUN_00144c18("no_proxy");
    if (local_2b0 == (char *)0x0) {
      pcVar33 = "NO_PROXY";
      local_2b0 = (char *)FUN_00144c18("NO_PROXY");
      if (local_2b0 == (char *)0x0) goto LAB_00150c3c;
    }
    FUN_0014d430(*plVar19,"Uses proxy env variable %s == \'%s\'\n",pcVar33,local_2b0);
  }
  else {
LAB_00150c3c:
    local_2b0 = (char *)0x0;
  }
  pcVar33 = local_2b0;
  if (*(char **)(lVar20 + 0xe28) != (char *)0x0) {
    pcVar33 = *(char **)(lVar20 + 0xe28);
  }
  if ((pcVar33 == (char *)0x0) || (*pcVar33 == '\0')) goto LAB_00150e18;
  pcVar22 = (char *)plVar19[0x1a];
  iVar14 = FUN_00144a90(&DAT_040cca3a,pcVar33);
  if (iVar14 != 0) goto LAB_00150c78;
  sVar23 = strlen(pcVar33);
  if (*pcVar22 == '[') {
    pcVar24 = strchr(pcVar22,0x5d);
    if (pcVar24 == (char *)0x0) goto LAB_00150e18;
    pcVar22 = pcVar22 + 1;
    local_2b8 = (long)pcVar24 - (long)pcVar22;
  }
  else {
    local_2b8 = strlen(pcVar22);
  }
  if (sVar23 == 0) goto LAB_00150e18;
  uVar21 = 0;
  goto LAB_00150d44;
LAB_00150c78:
  FUN_00143300(local_288);
  FUN_00143300(local_2a0);
  FUN_00143300(local_2b0);
LAB_00150fd0:
  uVar16 = *(uint *)((long)plVar19 + 0x41c) & 0xffffff9f;
LAB_00150fd8:
  uVar28 = uVar16 >> 2 & 0x10;
  if ((uVar16 & 0x20) != 0) {
    uVar28 = 0x10;
  }
  *(uint *)((long)plVar19 + 0x41c) = uVar28 | uVar16 & 0xffffffef;
  if (uVar28 == 0) {
    iVar14 = 0;
    local_288 = (char *)0x0;
    local_2a0 = (char *)0x0;
    *(uint *)((long)plVar19 + 0x41c) = uVar16 & 0xffffbe8f;
  }
  else {
    iVar14 = 0;
LAB_00151004:
    local_288 = (char *)0x0;
    local_2a0 = (char *)0x0;
  }
  goto LAB_00151008;
LAB_00150d44:
  do {
    uVar26 = sVar23;
    if (sVar23 <= uVar21 + 1) {
      uVar26 = uVar21 + 1;
    }
    do {
      pvVar25 = memchr(&DAT_0407494a,(uint)(byte)pcVar33[uVar21],3);
      if (pvVar25 == (void *)0x0) goto LAB_00150d78;
      uVar21 = uVar21 + 1;
    } while (uVar26 != uVar21);
    uVar21 = uVar26;
LAB_00150d78:
    if (uVar21 == sVar23) break;
    sVar31 = uVar21;
    if (uVar21 < sVar23) {
      do {
        pvVar25 = memchr(&DAT_0407494a,(uint)(byte)pcVar33[sVar31],3);
        if (pvVar25 != (void *)0x0) goto LAB_00150db8;
        sVar31 = sVar31 + 1;
      } while (sVar23 != sVar31);
      sVar31 = sVar23;
    }
LAB_00150db8:
    if (pcVar33[uVar21] == '.') {
      uVar21 = uVar21 + 1;
    }
    uVar26 = sVar31 - uVar21;
    if (uVar26 <= local_2b8) {
      iVar14 = FUN_00144b34(pcVar33 + uVar21,pcVar22 + (local_2b8 - uVar26),uVar26);
      if ((iVar14 != 0) && ((uVar26 == local_2b8 || ((pcVar22 + (local_2b8 - uVar26))[-1] == '.'))))
      goto LAB_00150c78;
    }
    uVar21 = sVar31 + 1;
  } while (uVar21 < sVar23);
LAB_00150e18:
  if (((cVar8 == '\0') && (local_288 == (char *)0x0)) && (local_2a0 == (char *)0x0)) {
    puVar32 = &local_168;
    memset(&local_168,0,0x80);
    pbVar27 = *(byte **)plVar19[0x88];
    uVar16 = (uint)*pbVar27;
    if (*pbVar27 != 0) {
      puVar34 = &local_168;
      do {
        pbVar27 = pbVar27 + 1;
        iVar14 = tolower(uVar16);
        puVar32 = (undefined8 *)((long)puVar34 + 1);
        *(char *)puVar34 = (char)iVar14;
        uVar16 = (uint)*pbVar27;
        puVar34 = puVar32;
      } while (uVar16 != 0);
    }
    *(undefined4 *)((long)puVar32 + 3) = 0x79786f;
    *(undefined4 *)puVar32 = 0x6f72705f;
    pcVar33 = (char *)&local_168;
    local_288 = (char *)FUN_00144c18(&local_168);
    if (local_288 == (char *)0x0) {
      iVar14 = FUN_00144a90("http_proxy",&local_168);
      if (iVar14 == 0) {
        pcVar33 = (char *)&local_168;
        FUN_00144bd8(&local_168,&local_168,0x80);
        local_288 = (char *)FUN_00144c18(&local_168);
        if (local_288 != (char *)0x0) goto LAB_00150f08;
      }
      pcVar33 = "all_proxy";
      local_288 = (char *)FUN_00144c18("all_proxy");
      if (local_288 != (char *)0x0) goto LAB_00150f08;
      pcVar33 = "ALL_PROXY";
      local_288 = (char *)FUN_00144c18("ALL_PROXY");
      if (local_288 != (char *)0x0) goto LAB_00150f08;
      local_288 = (char *)0x0;
    }
    else {
LAB_00150f08:
      FUN_0014d430(*plVar19,"Uses proxy env variable %s == \'%s\'\n",pcVar33,local_288);
    }
    local_2a0 = (char *)0x0;
  }
  FUN_00143300(local_2b0);
  if (local_288 == (char *)0x0) {
LAB_00150f54:
    local_288 = (char *)0x0;
  }
  else if ((*local_288 == '\0') || ((*(byte *)(plVar19[0x88] + 0x84) >> 4 & 1) != 0)) {
    FUN_00143300(local_288);
    goto LAB_00150f54;
  }
  if (local_2a0 != (char *)0x0) {
    if ((*local_2a0 == '\0') || ((*(byte *)(plVar19[0x88] + 0x84) >> 4 & 1) != 0)) {
      FUN_00143300(local_2a0);
      goto LAB_00150f90;
    }
    if (local_288 != (char *)0x0) {
      bVar10 = true;
      goto LAB_00150fa0;
    }
LAB_001510e4:
    iVar14 = FUN_00152afc(lVar20,plVar19,local_2a0,(int)plVar19[0x27]);
    FUN_00143300(local_2a0);
    if (iVar14 == 0) {
LAB_00151114:
      if (plVar19[0x2a] == 0) {
        uVar16 = *(uint *)((long)plVar19 + 0x41c) & 0xffffbfdf;
        *(uint *)((long)plVar19 + 0x41c) = uVar16;
        if (plVar19[0x22] == 0) goto LAB_00151434;
        if (plVar19[0x28] == 0) {
          lVar20 = plVar19[0x30];
          plVar19[0x30] = 0;
          plVar19[0x28] = lVar20;
          FUN_00143300(plVar19[0x29]);
          lVar20 = plVar19[0x31];
          plVar19[0x31] = 0;
          plVar19[0x29] = lVar20;
          uVar16 = *(uint *)((long)plVar19 + 0x41c);
        }
      }
      else {
        uVar16 = *(uint *)((long)plVar19 + 0x41c);
        if ((*(byte *)(plVar19[0x88] + 0x80) & 3) == 0) {
          if (((*(byte *)(plVar19[0x88] + 0x85) >> 3 & 1) == 0) || ((uVar16 >> 0xe & 1) != 0)) {
            uVar16 = uVar16 | 0x4000;
          }
          else {
            plVar19[0x88] = (long)PTR_PTR_04bcb6c0;
          }
        }
        uVar16 = uVar16 | 0x20;
        if (plVar19[0x22] == 0) {
LAB_00151434:
          uVar16 = uVar16 & 0xffffffbf;
          goto LAB_00150fd8;
        }
      }
      uVar16 = uVar16 | 0x40;
      goto LAB_00150fd8;
    }
    goto LAB_00151004;
  }
LAB_00150f90:
  if (local_288 == (char *)0x0) goto LAB_00150fd0;
  bVar10 = false;
  local_2a0 = (char *)0x0;
LAB_00150fa0:
  iVar14 = FUN_00152afc(lVar20,plVar19,local_288,(int)plVar19[0x2f]);
  FUN_00143300(local_288);
  if (iVar14 == 0) {
    if (bVar10) goto LAB_001510e4;
    goto LAB_00151114;
  }
  local_288 = (char *)0x0;
LAB_00151008:
  FUN_00143300(local_2a0);
  FUN_00143300(local_288);
  if (iVar14 == 0) {
    if (((*(byte *)(plVar19[0x89] + 0x84) & 1) != 0) &&
       ((*(uint *)((long)plVar19 + 0x41c) >> 5 & 1) != 0)) {
      *(uint *)((long)plVar19 + 0x41c) = *(uint *)((long)plVar19 + 0x41c) | 0x4000;
    }
    if ((*(long *)(param_1 + 0x6a8) == 0) || ((*(ushort *)(param_1 + 0x15c4) >> 4 & 1) == 0)) {
LAB_00151080:
      iVar14 = FUN_00151910(param_1,plVar19,plVar19 + 0x42,plVar19 + 0x43,plVar19 + 0x44);
      if (((iVar14 == 0) && (iVar14 = FUN_00151b78(plVar19), iVar14 == 0)) &&
         (iVar14 = FUN_00151c3c(param_1,plVar19,*(undefined8 *)(param_1 + 0xa20)), iVar14 == 0)) {
        plVar19[0x1b] = plVar19[0x1a];
        pcVar33 = (char *)plVar19[0x1a];
        do {
          cVar8 = *pcVar33;
          pcVar33 = pcVar33 + 1;
        } while ('\0' < cVar8);
        if (cVar8 != '\0') {
          FUN_0014d430(*plVar19,"IDN support not present, can\'t parse Unicode domains\n");
        }
        uVar16 = *(uint *)((long)plVar19 + 0x41c);
        if ((uVar16 >> 2 & 1) != 0) {
          plVar19[0x21] = plVar19[0x20];
          pcVar33 = (char *)plVar19[0x20];
          do {
            cVar8 = *pcVar33;
            pcVar33 = pcVar33 + 1;
          } while ('\0' < cVar8);
          if (cVar8 != '\0') {
            FUN_0014d430(*plVar19,"IDN support not present, can\'t parse Unicode domains\n");
            uVar16 = *(uint *)((long)plVar19 + 0x41c);
          }
        }
        if ((uVar16 >> 5 & 1) != 0) {
          plVar19[0x2d] = plVar19[0x2c];
          pcVar33 = (char *)plVar19[0x2c];
          do {
            cVar8 = *pcVar33;
            pcVar33 = pcVar33 + 1;
          } while ('\0' < cVar8);
          if (cVar8 != '\0') {
            FUN_0014d430(*plVar19,"IDN support not present, can\'t parse Unicode domains\n");
            uVar16 = *(uint *)((long)plVar19 + 0x41c);
          }
        }
        if ((uVar16 >> 6 & 1) != 0) {
          plVar19[0x25] = plVar19[0x24];
          pcVar33 = (char *)plVar19[0x24];
          do {
            cVar8 = *pcVar33;
            pcVar33 = pcVar33 + 1;
          } while ('\0' < cVar8);
          if (cVar8 != '\0') {
            FUN_0014d430(*plVar19,"IDN support not present, can\'t parse Unicode domains\n");
            uVar16 = *(uint *)((long)plVar19 + 0x41c);
          }
        }
        if ((uVar16 >> 2 & 1) != 0) {
          iVar14 = FUN_00144a90(plVar19[0x20],plVar19[0x1a]);
          uVar16 = *(uint *)((long)plVar19 + 0x41c);
          if (iVar14 != 0) {
            uVar16 = uVar16 & 0xfffffffb;
            *(uint *)((long)plVar19 + 0x41c) = uVar16;
          }
        }
        if (((uVar16 >> 3 & 1) != 0) && (*(int *)((long)plVar19 + 0x19c) == (int)plVar19[0x33])) {
          uVar16 = uVar16 & 0xfffffff7;
          *(uint *)((long)plVar19 + 0x41c) = uVar16;
        }
        if (((uVar16 & 0xc) != 0) && ((uVar16 >> 5 & 1) != 0)) {
          *(uint *)((long)plVar19 + 0x41c) = uVar16 | 0x4000;
        }
        *(undefined4 *)((long)plVar19 + 0xbc) = 1;
        lVar20 = plVar19[0x88];
        if (*(code **)(lVar20 + 8) != (code *)0x0) {
          iVar14 = (**(code **)(lVar20 + 8))(plVar19);
          if (iVar14 != 0) goto switchD_00150648_caseD_1;
          lVar20 = plVar19[0x88];
        }
        if (plVar19[0x32] < 0) {
          plVar19[0x32] = *(long *)(lVar20 + 0x78);
        }
        puVar12 = PTR_FUN_04bcb700;
        plVar19[0x4e] = (long)PTR_FUN_04bcb700;
        puVar11 = PTR_FUN_04bcb6f8;
        plVar19[0x4f] = (long)puVar12;
        plVar19[0x50] = (long)puVar11;
        plVar19[0x51] = (long)puVar11;
        *(uint *)((long)plVar19 + 0x41c) =
             *(uint *)((long)plVar19 + 0x41c) & 0xf0000000 |
             *(uint *)((long)plVar19 + 0x41c) & 0x7ffffff |
             ((uint)((ulong)*(undefined8 *)(param_1 + 0xf60) >> 0x2d) & 1) << 0x1b;
        if ((*(byte *)(lVar20 + 0x84) >> 4 & 1) == 0) {
          *(undefined8 *)(param_1 + 0xa58) = *(undefined8 *)(param_1 + 0xd70);
          *(undefined8 *)(param_1 + 0xb08) = *(undefined8 *)(param_1 + 0xcb0);
          *(undefined8 *)(param_1 + 0xbe8) = *(undefined8 *)(param_1 + 0xca8);
          *(undefined8 *)(param_1 + 0xb50) = *(undefined8 *)(param_1 + 0xca8);
          *(undefined8 *)(param_1 + 0xb40) = *(undefined8 *)(param_1 + 0xd78);
          *(undefined8 *)(param_1 + 0xbf0) = *(undefined8 *)(param_1 + 0xcb8);
          *(undefined8 *)(param_1 + 0xa60) = *(undefined8 *)(param_1 + 0xd80);
          *(undefined8 *)(param_1 + 0xb10) = *(undefined8 *)(param_1 + 0xd08);
          *(undefined8 *)(param_1 + 0xb48) = *(undefined8 *)(param_1 + 0xd88);
          *(undefined8 *)(param_1 + 0xbf8) = *(undefined8 *)(param_1 + 0xd10);
          *(undefined8 *)(param_1 + 0xa70) = *(undefined8 *)(param_1 + 0xdc8);
          *(undefined8 *)(param_1 + 0xb58) = *(undefined8 *)(param_1 + 0xdc8);
          *(undefined8 *)(param_1 + 0xb18) = *(undefined8 *)(param_1 + 0xd28);
          *(undefined8 *)(param_1 + 0xa78) = *(undefined8 *)(param_1 + 0xdc0);
          *(undefined8 *)(param_1 + 0xb60) = *(undefined8 *)(param_1 + 0xdc0);
          *(undefined8 *)(param_1 + 0xc00) = *(undefined8 *)(param_1 + 0xd30);
          *(undefined8 *)(param_1 + 0xa80) = *(undefined8 *)(param_1 + 0xda0);
          *(undefined8 *)(param_1 + 0xb20) = *(undefined8 *)(param_1 + 0xd18);
          *(undefined8 *)(param_1 + 0xb68) = *(undefined8 *)(param_1 + 0xda8);
          *(undefined8 *)(param_1 + 0xc08) = *(undefined8 *)(param_1 + 0xd20);
          *(undefined8 *)(param_1 + 0xa88) = *(undefined8 *)(param_1 + 0xdb0);
          *(undefined8 *)(param_1 + 0xb70) = *(undefined8 *)(param_1 + 0xdb8);
          *(undefined8 *)(param_1 + 0xae0) = *(undefined8 *)(param_1 + 0xdd8);
          *(undefined8 *)(param_1 + 0xbc8) = *(undefined8 *)(param_1 + 0xde0);
          *(undefined8 *)(param_1 + 0xae8) = *(undefined8 *)(param_1 + 0xde8);
          *(undefined8 *)(param_1 + 0xbd0) = *(undefined8 *)(param_1 + 0xdf0);
          *(undefined8 *)(param_1 + 0xb00) = *(undefined8 *)(param_1 + 0xca0);
          *(undefined8 *)(param_1 + 0xa68) = *(undefined8 *)(param_1 + 0xca0);
          uVar21 = FUN_00143d58(param_1 + 0xa48,plVar19 + 0x5f);
          if (((uVar21 & 1) == 0) ||
             (uVar21 = FUN_00143d58(param_1 + 0xb30,plVar19 + 0x71), (uVar21 & 1) == 0))
          goto switchD_00150648_caseD_7;
          FUN_00151fa4(param_1);
          uVar21 = *(ulong *)(param_1 + 0xf60);
          if (((uint)uVar21 >> 0x1d & 1) == 0) {
            if ((uVar21 >> 0x26 & 1) != 0) goto LAB_00151624;
LAB_00151534:
            uVar21 = FUN_00152048(param_1,plVar19,&local_270,local_274,local_278);
            plVar1 = local_270;
            if (((((uVar21 & 1) != 0) && (local_274[0] == '\0')) &&
                (iVar14 = FUN_001526a4(param_1,local_270), iVar14 != 0)) &&
               (plVar1[0xa0] + plVar1[0x9c] != 0)) {
              FUN_0014d430(param_1,"Found connection %ld, with requests in the pipe (%zu)\n",
                           plVar1[0xc],plVar1[0xa0] + plVar1[0x9c]);
              uVar26 = FUN_0014e9cc(plVar1);
              if ((uVar26 < uVar17) && (uVar26 = FUN_0014e96c(param_1), uVar26 < uVar18)) {
                FUN_0014d430(param_1,"We can reuse, but we want a new connection anyway\n");
                FUN_0014ee80(plVar1);
                goto LAB_00151624;
              }
            }
            plVar1 = local_270;
            if ((uVar21 & 1) == 0) goto LAB_00151624;
            FUN_00152740(plVar19,local_270);
            FUN_00143300(plVar19[0x5e]);
            FUN_00143300(plVar19);
            pcVar33 = "host";
            if ((*(byte *)((long)plVar1 + 0x41c) & 0x10) != 0) {
              pcVar33 = "proxy";
            }
            if (plVar1[0x24] == 0) {
              if (plVar1[0x2c] == 0) {
                plVar19 = plVar1 + 0x1b;
              }
              else {
                plVar19 = plVar1 + 0x2d;
              }
            }
            else {
              plVar19 = plVar1 + 0x25;
            }
            FUN_0014d430(param_1,"Re-using existing connection! (#%ld) with %s %s\n",plVar1[0xc],
                         pcVar33,*plVar19);
            plVar19 = plVar1;
LAB_0015178c:
            FUN_0015183c(param_1,plVar19);
            iVar14 = FUN_00151f04(param_1);
            if (iVar14 == 0) {
              plVar19[0xa4] = *(long *)(param_1 + 0x6f0);
              plVar19[0xa5] = *(long *)(param_1 + 0x778);
              iVar14 = FUN_00152938(param_1,plVar19,param_2);
              FUN_00152ab4(plVar19 + 0x18);
              uVar16 = *(uint *)((long)plVar19 + 0x41c);
              if ((uVar16 >> 5 & 1) != 0) {
                FUN_00152ab4(plVar19 + 0x2a);
                uVar16 = *(uint *)((long)plVar19 + 0x41c);
              }
              if ((uVar16 >> 6 & 1) != 0) {
                FUN_00152ab4(plVar19 + 0x22);
                uVar16 = *(uint *)((long)plVar19 + 0x41c);
              }
              if ((uVar16 >> 2 & 1) != 0) {
                FUN_00152ab4(plVar19 + 0x1e);
              }
              goto LAB_001514bc;
            }
          }
          else {
            if (((uVar21 >> 0x26 & 1) == 0) && ((*(ushort *)(param_1 + 0x15c4) >> 1 & 1) != 0))
            goto LAB_00151534;
LAB_00151624:
            if ((*(byte *)(plVar19[0x88] + 0x85) & 1) != 0) {
              uVar21 = *(ulong *)(param_1 + 0xf60);
              if ((uVar21 >> 0x2f & 1) != 0) {
                *(uint *)((long)plVar19 + 0x41c) = *(uint *)((long)plVar19 + 0x41c) | 0x20000000;
                uVar21 = *(ulong *)(param_1 + 0xf60);
              }
              if ((uVar21 >> 0x2e & 1) != 0) {
                *(uint *)((long)plVar19 + 0x41c) = *(uint *)((long)plVar19 + 0x41c) | 0x10000000;
              }
            }
            if (local_278[0] == '\0') {
              lVar20 = FUN_0014ea2c(plVar19,*(undefined8 *)(param_1 + 0x1120));
              if (((uVar17 == 0) || (lVar20 == 0)) || (*(ulong *)(lVar20 + 8) < uVar17)) {
                FUN_0014e958(param_1);
              }
              else {
                lVar20 = FUN_0014f04c(param_1);
                FUN_0014e958(param_1);
                if (lVar20 == 0) {
                  FUN_0014d430(param_1,"No more connections allowed to host: %zu\n",uVar17);
                  goto LAB_00151660;
                }
                FUN_0014f784(param_1,lVar20,0);
              }
              if ((uVar18 != 0) && (uVar17 = FUN_0014e96c(param_1), uVar18 <= uVar17)) {
                lVar20 = FUN_0014ef14(param_1);
                if (lVar20 == 0) {
                  FUN_0014d430(param_1,"No connections available in cache\n");
                  goto LAB_00151660;
                }
                FUN_0014f784(param_1,lVar20,0);
              }
              iVar14 = FUN_0014eaf4(*(undefined8 *)(param_1 + 0x1120),plVar19);
              if (iVar14 == 0) goto LAB_0015178c;
            }
            else {
LAB_00151660:
              FUN_0014d430(param_1,"No connections available.\n");
              FUN_0014f8a8(plVar19);
              plVar19 = (long *)0x0;
              iVar14 = 0x59;
            }
          }
        }
        else {
          local_168 = (char *)((ulong)local_168 & 0xffffffffffffff00);
          FUN_00157c08(plVar19);
          iVar15 = (**(code **)(plVar19[0x88] + 0x28))(plVar19,&local_168);
          if (iVar15 == 0) {
            *(undefined1 *)((long)plVar19 + 0x41a) = 1;
            iVar14 = FUN_0014eaf4(*(undefined8 *)(param_1 + 0x1120),plVar19);
            if (iVar14 == 0) {
              iVar14 = FUN_00151f04(param_1);
              if (iVar14 == 0) {
                FUN_00148080(param_1,plVar19);
                FUN_00161720(param_1,0xffffffff,0xffffffffffffffff,0,0xffffffff);
                goto LAB_00151464;
              }
              (**(code **)(plVar19[0x88] + 0x18))(plVar19,iVar14,0);
            }
          }
          else {
LAB_00151464:
            FUN_0015183c(param_1,plVar19);
            iVar14 = iVar15;
          }
LAB_001514bc:
          if (iVar14 == 0) {
            if (plVar19[0x9c] + plVar19[0xa0] != 0) {
              iVar14 = 0;
              *param_3 = 1;
              goto LAB_001514f0;
            }
            if (*param_2 != '\0') {
              iVar14 = 0;
              goto LAB_001514f0;
            }
            iVar14 = FUN_001500d0(plVar19,param_3);
          }
        }
      }
    }
    else {
      local_168 = (char *)0x0;
      auStack_160[0] = 0;
      *(uint *)(plVar19 + 0x33) = (uint)*(long *)(param_1 + 0x6a8) & 0xffff;
      FUN_001460b8(&local_168,0x10,&DAT_040c7be9);
      iVar14 = FUN_00163050(*(undefined8 *)(param_1 + 0x1568),6,&local_168,0);
      if (iVar14 == 0) goto LAB_00151080;
switchD_00150648_caseD_7:
      iVar14 = 0x1b;
    }
  }
switchD_00150648_caseD_1:
  if (iVar14 == 0x59) {
    return 0x59;
  }
  if ((plVar19 != (long *)0x0) && (iVar14 != 0)) {
    FUN_0014f784(param_1,plVar19,1);
    return iVar14;
  }
LAB_001514f0:
  if (*(long *)(param_1 + 0x10) == 0) {
    FUN_00148080(param_1,plVar19);
  }
  return iVar14;
}

