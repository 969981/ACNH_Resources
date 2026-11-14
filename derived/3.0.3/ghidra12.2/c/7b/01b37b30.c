
void FUN_01b37b30(long param_1)

{
  uint *puVar1;
  int iVar2;
  long *plVar3;
  char *__s;
  char *__s_00;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  char cVar12;
  int iVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  char *pcVar17;
  byte bVar18;
  char *pcVar19;
  char *pcVar20;
  char *pcVar21;
  uint local_9c;
  long local_78;
  long local_70;
  undefined8 local_68;
  
  uVar5 = DAT_0532d278;
  if (*(char *)(param_1 + 0x2a) == '\0' && *(char *)(param_1 + 0x2b) == '\0') goto LAB_01b37b6c;
  if (DAT_05574040 == 0) {
    return;
  }
  lVar9 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x30))();
  if (lVar9 == 0) {
    return;
  }
  plVar3 = (long *)(lVar9 + 0x276d60);
  lVar14 = *(long *)(lVar9 + 0x276d80);
  if (lVar14 == 0) {
    local_9c = 0;
LAB_01b37c48:
    pcVar17 = (char *)(*(long *)(lVar9 + 0x276d68) + *plVar3);
    lVar14 = local_78;
    lVar6 = local_70;
LAB_01b37c50:
    local_70 = lVar6;
    local_78 = lVar14;
    pcVar19 = pcVar17;
  }
  else {
    if (*(undefined8 **)(lVar14 + 0x10) == (undefined8 *)0x0) {
      local_9c = 0;
      plVar10 = *(long **)(lVar14 + 0x20);
      if (plVar10 == (long *)0x0) goto LAB_01b37c64;
LAB_01b37be8:
      local_78 = *plVar3;
      local_70 = *(long *)(lVar9 + 0x276d68);
      local_68 = 0x1f2e0;
      (**(code **)(*plVar10 + 0x20))(plVar10,&local_78);
      pcVar19 = (char *)(*(long *)(lVar9 + 0x276d68) + *plVar3);
      pcVar17 = pcVar19;
      lVar14 = local_78;
      lVar6 = local_70;
      if (*(long *)(lVar9 + 0x276d80) == 0) goto LAB_01b37c50;
      plVar10 = *(long **)(*(long *)(lVar9 + 0x276d80) + 0x20);
      lVar7 = *plVar3;
      lVar8 = *(long *)(lVar9 + 0x276d68);
    }
    else {
      local_9c = (**(code **)**(undefined8 **)(lVar14 + 0x10))();
      lVar14 = *(long *)(lVar9 + 0x276d80);
      if (lVar14 == 0) goto LAB_01b37c48;
      plVar10 = *(long **)(lVar14 + 0x20);
      if (plVar10 != (long *)0x0) goto LAB_01b37be8;
LAB_01b37c64:
      pcVar19 = (char *)(*(long *)(lVar9 + 0x276d68) + *plVar3);
      plVar10 = *(long **)(lVar14 + 0x20);
      lVar7 = *plVar3;
      lVar8 = *(long *)(lVar9 + 0x276d68);
      lVar14 = local_78;
      lVar6 = local_70;
    }
    local_70 = lVar8;
    local_78 = lVar7;
    pcVar17 = pcVar19;
    if (plVar10 == (long *)0x0) goto LAB_01b37c50;
    local_68 = 0x1f2e0;
    (**(code **)(*plVar10 + 0x20))(plVar10,&local_78);
    pcVar17 = (char *)(*(long *)(lVar9 + 0x276d68) + *plVar3);
  }
  lVar14 = 0;
  pcVar20 = pcVar17 + 0x1f220;
  cVar12 = '\0';
  __s = pcVar17 + 0x15ae0;
  __s_00 = pcVar19 + 0x15950;
  do {
    puVar1 = (uint *)(__s_00 + lVar14);
    lVar14 = lVar14 + 4;
    pcVar21 = pcVar19 + (ulong)*puVar1 * 0x374;
    if (99 < *puVar1) {
      pcVar21 = pcVar19;
    }
    if (*pcVar21 != '\0') {
      cVar12 = cVar12 + '\x01';
    }
  } while (lVar14 != 400);
  if (cVar12 != '\0') {
    memset(pcVar19,0,0x15ae0);
    lVar14 = 100;
    pcVar21 = pcVar19;
    do {
      pcVar21[0] = '\0';
      pcVar21[1] = '\0';
      pcVar21[0x5c] = '\0';
      pcVar21[0xb8] = '\0';
      pcVar21[0xbc] = '\0';
      pcVar21[0xbd] = '\0';
      pcVar21[0xbe] = '\0';
      pcVar21[0xbf] = '\0';
      pcVar21[0xc0] = -2;
      pcVar21[0xc1] = -1;
      pcVar21[0xc2] = '\0';
      pcVar21[0xc3] = '\0';
      pcVar21[0xc4] = '\0';
      pcVar21[0xc5] = '\0';
      pcVar21[0xc6] = '\0';
      pcVar21[199] = '\0';
      FUN_0277d4ac(pcVar21 + 0xc0);
      pcVar21[200] = '\0';
      pcVar21[0xcc] = '\0';
      memset(pcVar21 + 0xce,0,0x2a2);
      pcVar21[0x370] = -2;
      pcVar21[0x371] = -1;
      lVar14 = lVar14 + -1;
      pcVar21 = pcVar21 + 0x374;
    } while (lVar14 != 0);
    memset(__s_00,0,400);
    iVar13 = 0;
    uVar16 = 0;
    do {
      lVar14 = uVar16 << 0x20;
      iVar2 = iVar13 + 1;
      *(int *)(__s_00 + (-(uVar16 >> 0x1f) & 0xfffffffc00000000 | uVar16 << 2)) = iVar13;
      iVar13 = iVar13 + 2;
      uVar16 = (ulong)((int)uVar16 + 2);
      *(int *)(__s_00 + (lVar14 + 0x100000000 >> 0x1e)) = iVar2;
    } while (iVar13 != 100);
  }
  if (*(char *)(param_1 + 0x2a) != '\0') {
    lVar14 = 0;
    cVar12 = '\0';
    do {
      puVar1 = (uint *)(pcVar20 + lVar14);
      lVar14 = lVar14 + 4;
      pcVar21 = __s + (ulong)*puVar1 * 0x3c8;
      if (0x27 < *puVar1) {
        pcVar21 = __s;
      }
      if (*pcVar21 != '\0') {
        cVar12 = cVar12 + '\x01';
      }
    } while (lVar14 != 0xa0);
    if (cVar12 != '\0') {
      memset(__s,0,0x97e0);
      FUN_028321f0(__s);
      pcVar20[0] = '\0';
      pcVar20[1] = '\0';
      pcVar20[2] = '\0';
      pcVar20[3] = '\0';
      pcVar20[4] = '\x01';
      pcVar20[5] = '\0';
      pcVar20[6] = '\0';
      pcVar20[7] = '\0';
      pcVar17[0x1f228] = '\x02';
      pcVar17[0x1f229] = '\0';
      pcVar17[0x1f22a] = '\0';
      pcVar17[0x1f22b] = '\0';
      pcVar17[0x1f22c] = '\x03';
      pcVar17[0x1f22d] = '\0';
      pcVar17[0x1f22e] = '\0';
      pcVar17[0x1f22f] = '\0';
      pcVar17[0x1f230] = '\x04';
      pcVar17[0x1f231] = '\0';
      pcVar17[0x1f232] = '\0';
      pcVar17[0x1f233] = '\0';
      pcVar17[0x1f234] = '\x05';
      pcVar17[0x1f235] = '\0';
      pcVar17[0x1f236] = '\0';
      pcVar17[0x1f237] = '\0';
      pcVar17[0x1f238] = '\x06';
      pcVar17[0x1f239] = '\0';
      pcVar17[0x1f23a] = '\0';
      pcVar17[0x1f23b] = '\0';
      pcVar17[0x1f23c] = '\a';
      pcVar17[0x1f23d] = '\0';
      pcVar17[0x1f23e] = '\0';
      pcVar17[0x1f23f] = '\0';
      pcVar17[0x1f240] = '\b';
      pcVar17[0x1f241] = '\0';
      pcVar17[0x1f242] = '\0';
      pcVar17[0x1f243] = '\0';
      pcVar17[0x1f244] = '\t';
      pcVar17[0x1f245] = '\0';
      pcVar17[0x1f246] = '\0';
      pcVar17[0x1f247] = '\0';
      pcVar17[0x1f248] = '\n';
      pcVar17[0x1f249] = '\0';
      pcVar17[0x1f24a] = '\0';
      pcVar17[0x1f24b] = '\0';
      pcVar17[0x1f24c] = '\v';
      pcVar17[0x1f24d] = '\0';
      pcVar17[0x1f24e] = '\0';
      pcVar17[0x1f24f] = '\0';
      pcVar17[0x1f250] = '\f';
      pcVar17[0x1f251] = '\0';
      pcVar17[0x1f252] = '\0';
      pcVar17[0x1f253] = '\0';
      pcVar17[0x1f254] = '\r';
      pcVar17[0x1f255] = '\0';
      pcVar17[0x1f256] = '\0';
      pcVar17[0x1f257] = '\0';
      pcVar17[0x1f258] = '\x0e';
      pcVar17[0x1f259] = '\0';
      pcVar17[0x1f25a] = '\0';
      pcVar17[0x1f25b] = '\0';
      pcVar17[0x1f25c] = '\x0f';
      pcVar17[0x1f25d] = '\0';
      pcVar17[0x1f25e] = '\0';
      pcVar17[0x1f25f] = '\0';
      pcVar17[0x1f260] = '\x10';
      pcVar17[0x1f261] = '\0';
      pcVar17[0x1f262] = '\0';
      pcVar17[0x1f263] = '\0';
      pcVar17[0x1f264] = '\x11';
      pcVar17[0x1f265] = '\0';
      pcVar17[0x1f266] = '\0';
      pcVar17[0x1f267] = '\0';
      pcVar17[0x1f268] = '\x12';
      pcVar17[0x1f269] = '\0';
      pcVar17[0x1f26a] = '\0';
      pcVar17[0x1f26b] = '\0';
      pcVar17[0x1f26c] = '\x13';
      pcVar17[0x1f26d] = '\0';
      pcVar17[0x1f26e] = '\0';
      pcVar17[0x1f26f] = '\0';
      pcVar17[0x1f270] = '\x14';
      pcVar17[0x1f271] = '\0';
      pcVar17[0x1f272] = '\0';
      pcVar17[0x1f273] = '\0';
      pcVar17[0x1f274] = '\x15';
      pcVar17[0x1f275] = '\0';
      pcVar17[0x1f276] = '\0';
      pcVar17[0x1f277] = '\0';
      pcVar17[0x1f278] = '\x16';
      pcVar17[0x1f279] = '\0';
      pcVar17[0x1f27a] = '\0';
      pcVar17[0x1f27b] = '\0';
      pcVar17[0x1f27c] = '\x17';
      pcVar17[0x1f27d] = '\0';
      pcVar17[0x1f27e] = '\0';
      pcVar17[0x1f27f] = '\0';
      pcVar17[0x1f280] = '\x18';
      pcVar17[0x1f281] = '\0';
      pcVar17[0x1f282] = '\0';
      pcVar17[0x1f283] = '\0';
      pcVar17[0x1f284] = '\x19';
      pcVar17[0x1f285] = '\0';
      pcVar17[0x1f286] = '\0';
      pcVar17[0x1f287] = '\0';
      pcVar17[0x1f288] = '\x1a';
      pcVar17[0x1f289] = '\0';
      pcVar17[0x1f28a] = '\0';
      pcVar17[0x1f28b] = '\0';
      pcVar17[0x1f28c] = '\x1b';
      pcVar17[0x1f28d] = '\0';
      pcVar17[0x1f28e] = '\0';
      pcVar17[0x1f28f] = '\0';
      pcVar17[0x1f290] = '\x1c';
      pcVar17[0x1f291] = '\0';
      pcVar17[0x1f292] = '\0';
      pcVar17[0x1f293] = '\0';
      pcVar17[0x1f294] = '\x1d';
      pcVar17[0x1f295] = '\0';
      pcVar17[0x1f296] = '\0';
      pcVar17[0x1f297] = '\0';
      pcVar17[0x1f298] = '\x1e';
      pcVar17[0x1f299] = '\0';
      pcVar17[0x1f29a] = '\0';
      pcVar17[0x1f29b] = '\0';
      pcVar17[0x1f29c] = '\x1f';
      pcVar17[0x1f29d] = '\0';
      pcVar17[0x1f29e] = '\0';
      pcVar17[0x1f29f] = '\0';
      pcVar17[0x1f2a0] = ' ';
      pcVar17[0x1f2a1] = '\0';
      pcVar17[0x1f2a2] = '\0';
      pcVar17[0x1f2a3] = '\0';
      pcVar17[0x1f2a4] = '!';
      pcVar17[0x1f2a5] = '\0';
      pcVar17[0x1f2a6] = '\0';
      pcVar17[0x1f2a7] = '\0';
      pcVar17[0x1f2a8] = '\"';
      pcVar17[0x1f2a9] = '\0';
      pcVar17[0x1f2aa] = '\0';
      pcVar17[0x1f2ab] = '\0';
      pcVar17[0x1f2ac] = '#';
      pcVar17[0x1f2ad] = '\0';
      pcVar17[0x1f2ae] = '\0';
      pcVar17[0x1f2af] = '\0';
      pcVar17[0x1f2b0] = '$';
      pcVar17[0x1f2b1] = '\0';
      pcVar17[0x1f2b2] = '\0';
      pcVar17[0x1f2b3] = '\0';
      pcVar17[0x1f2b4] = '%';
      pcVar17[0x1f2b5] = '\0';
      pcVar17[0x1f2b6] = '\0';
      pcVar17[0x1f2b7] = '\0';
      pcVar17[0x1f2b8] = '&';
      pcVar17[0x1f2b9] = '\0';
      pcVar17[0x1f2ba] = '\0';
      pcVar17[0x1f2bb] = '\0';
      pcVar17[0x1f2bc] = '\'';
      pcVar17[0x1f2bd] = '\0';
      pcVar17[0x1f2be] = '\0';
      pcVar17[0x1f2bf] = '\0';
    }
  }
  uVar16 = 0;
  bVar18 = 0;
  do {
    uVar4 = *(uint *)(__s_00 + uVar16 * 4);
    pcVar20 = pcVar19 + (ulong)uVar4 * 0x374;
    if (99 < uVar4) {
      pcVar20 = pcVar19;
    }
    if (*pcVar20 != '\0') {
      if (uVar16 != bVar18) {
        if (bVar18 < 100) {
          lVar14 = (ulong)bVar18 * 4;
          uVar15 = *(uint *)(__s_00 + lVar14);
          *(uint *)(__s_00 + lVar14) = uVar4;
          *(uint *)(__s_00 + uVar16 * 4) = uVar15;
        }
        else {
          uVar15 = uVar4;
        }
        pcVar20 = pcVar19 + (ulong)uVar15 * 0x374;
        if (99 < uVar15) {
          pcVar20 = pcVar19;
        }
        memset(pcVar20,0,0x374);
        pcVar21 = pcVar20 + 0xc0;
        pcVar21[0] = -2;
        pcVar21[1] = -1;
        FUN_0277d4ac(pcVar21);
        pcVar20[200] = '\0';
        pcVar20[0xcc] = '\0';
        memset(pcVar20 + 0xce,0,0x2a2);
        pcVar20[0x370] = -2;
        pcVar20[0x371] = -1;
      }
      bVar18 = bVar18 + 1;
    }
    uVar16 = uVar16 + 1;
  } while (uVar16 != 100);
  uVar16 = 0;
  bVar18 = 0;
  do {
    uVar4 = *(uint *)(pcVar17 + uVar16 * 4 + 0x1f220);
    pcVar19 = __s + (ulong)uVar4 * 0x3c8;
    if (0x27 < uVar4) {
      pcVar19 = __s;
    }
    if (*pcVar19 != '\0') {
      if (uVar16 != bVar18) {
        if (bVar18 < 0x28) {
          lVar14 = (ulong)bVar18 * 4;
          uVar15 = *(uint *)(pcVar17 + lVar14 + 0x1f220);
          *(uint *)(pcVar17 + lVar14 + 0x1f220) = uVar4;
          *(uint *)(pcVar17 + uVar16 * 4 + 0x1f220) = uVar15;
        }
        else {
          uVar15 = uVar4;
        }
        pcVar19 = __s + (ulong)uVar15 * 0x3c8;
        if (0x27 < uVar15) {
          pcVar19 = __s;
        }
        memset(pcVar19,0,0x3c8);
        pcVar20 = pcVar19 + 0xc0;
        pcVar20[0] = -2;
        pcVar20[1] = -1;
        FUN_0277d4ac(pcVar20);
        pcVar19[200] = '\0';
        pcVar19[0xcc] = '\0';
        memset(pcVar19 + 0xce,0,0x2a2);
        pcVar19[0x370] = -2;
        pcVar19[0x371] = -1;
        pcVar19[0x374] = '\0';
        pcVar19[0x375] = '\0';
        pcVar19[0x376] = '\0';
        pcVar19[0x377] = '\0';
        pcVar19[0x378] = '\0';
        pcVar19[0x379] = '\0';
        pcVar19[0x37a] = '\0';
        pcVar19[0x37b] = '\0';
        pcVar19[0x37c] = '\0';
        pcVar19[0x37d] = '\0';
        pcVar19[0x37e] = '\0';
        pcVar19[0x37f] = '\0';
        pcVar19[0x380] = '\0';
        pcVar19[0x381] = '\0';
        pcVar19[0x382] = '\0';
        pcVar19[899] = '\0';
        pcVar19[900] = '\0';
        pcVar19[0x385] = '\0';
        pcVar19[0x386] = '\0';
        pcVar19[0x387] = '\0';
        pcVar19[0x388] = '\0';
        pcVar19[0x389] = '\0';
        pcVar19[0x38a] = '\0';
        pcVar19[0x38b] = '\0';
        pcVar19[0x38c] = '\0';
        pcVar19[0x38d] = '\0';
        pcVar19[0x38e] = '\0';
        pcVar19[0x38f] = '\0';
        pcVar19[0x390] = '\0';
        pcVar19[0x391] = '\0';
        pcVar19[0x392] = '\0';
        pcVar19[0x393] = '\0';
        pcVar19[0x394] = '\0';
        pcVar19[0x395] = '\0';
        pcVar19[0x396] = '\0';
        pcVar19[0x397] = '\0';
        pcVar19[0x398] = '\0';
        pcVar19[0x399] = '\0';
        pcVar19[0x39a] = '\0';
        pcVar19[0x39b] = '\0';
        pcVar19[0x39c] = '\0';
        pcVar19[0x39d] = '\0';
        pcVar19[0x39e] = '\0';
        pcVar19[0x39f] = '\0';
        pcVar19[0x3a0] = '\0';
        pcVar19[0x3a1] = '\0';
        pcVar19[0x3a2] = '\0';
        pcVar19[0x3a3] = '\0';
        pcVar19[0x3a4] = '\0';
        pcVar19[0x3a5] = '\0';
        pcVar19[0x3a6] = '\0';
        pcVar19[0x3a7] = '\0';
        pcVar19[0x3a8] = '\0';
        pcVar19[0x3a9] = '\0';
        pcVar19[0x3aa] = '\0';
        pcVar19[0x3ab] = '\0';
        pcVar19[0x3ac] = '\0';
        pcVar19[0x3ad] = '\0';
        pcVar19[0x3ae] = '\0';
        pcVar19[0x3af] = '\0';
        pcVar19[0x3b0] = '\0';
        pcVar19[0x3b1] = '\0';
        pcVar19[0x3b2] = '\0';
        pcVar19[0x3b3] = '\0';
      }
      bVar18 = bVar18 + 1;
    }
    uVar16 = uVar16 + 1;
  } while (uVar16 != 0x28);
  if ((*(long *)(lVar9 + 0x276d80) != 0) &&
     (plVar10 = *(long **)(*(long *)(lVar9 + 0x276d80) + 0x20), plVar10 != (long *)0x0)) {
    local_78 = *plVar3;
    local_70 = *(long *)(lVar9 + 0x276d68);
    local_68 = 0x1f2e0;
    (**(code **)(*plVar10 + 0x20))(plVar10,&local_78);
  }
  *(undefined1 *)(*(long *)(lVar9 + 0x276d68) + *plVar3 + 0x1f2d0) = 0;
  FUN_01b35fa0(uVar5);
  if ((*(long *)(lVar9 + 0x276d80) != 0) &&
     (plVar10 = *(long **)(*(long *)(lVar9 + 0x276d80) + 0x20), plVar10 != (long *)0x0)) {
    local_78 = *plVar3;
    local_70 = *(long *)(lVar9 + 0x276d68);
    local_68 = 0x1f2e0;
    (**(code **)(*plVar10 + 0x20))(plVar10,&local_78);
  }
  uVar4 = DAT_0532dde8;
  DAT_0532dde8 = DAT_0532ddec;
  uVar4 = uVar4 ^ uVar4 << 0xb;
  DAT_0532ddec = DAT_0532ddf0;
  DAT_0532ddf0 = DAT_0532ddf4;
  DAT_0532ddf4 = uVar4 >> 8 ^ DAT_0532ddf4 >> 0x13 ^ uVar4 ^ DAT_0532ddf4;
  FUN_01b36330(uVar5,*(long *)(lVar9 + 0x276d68) + *plVar3,param_1);
  if ((((local_9c & 1) != 0) && (*(long *)(lVar9 + 0x276d80) != 0)) &&
     (puVar11 = *(undefined8 **)(*(long *)(lVar9 + 0x276d80) + 0x18), puVar11 != (undefined8 *)0x0))
  {
    (**(code **)*puVar11)();
  }
LAB_01b37b6c:
  FUN_01b358f0(uVar5);
  return;
}

