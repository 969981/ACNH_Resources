
void FUN_0087e230(long param_1,long *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  uint uVar2;
  byte bVar3;
  short sVar4;
  uint *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined8 *puVar12;
  long lVar13;
  uint *puVar14;
  ulong uVar15;
  long *plVar16;
  long lVar17;
  ushort uVar18;
  int *piVar19;
  undefined1 *puVar20;
  uint uVar21;
  undefined8 uVar22;
  char *__src;
  undefined8 uVar23;
  char cVar24;
  undefined *local_7f78;
  undefined1 *local_7f70;
  undefined1 auStack_7d94 [30108];
  undefined8 local_7f8;
  undefined8 uStack_7f0;
  undefined4 local_7e8;
  undefined1 local_7e4;
  undefined8 local_7e0;
  undefined8 uStack_7d8;
  undefined8 local_7d0;
  undefined4 local_7c8;
  undefined2 local_7c4;
  ushort local_7c2;
  undefined8 local_7c0;
  undefined8 local_7b8;
  undefined4 local_7b0;
  undefined *local_7a8;
  undefined1 *local_7a0;
  int local_798;
  undefined1 local_794 [63];
  undefined1 local_755;
  undefined *local_750;
  undefined1 *local_748;
  undefined4 local_740;
  undefined1 local_73c [63];
  undefined1 local_6fd;
  undefined *local_6f8;
  undefined1 *local_6f0;
  int local_6e8;
  undefined1 local_6e4 [63];
  undefined1 local_6a5;
  undefined *local_6a0;
  char *local_698;
  int local_690;
  char local_68c [63];
  undefined1 local_64d;
  undefined *local_648;
  char *local_640;
  long local_638;
  undefined8 local_630;
  undefined8 local_628 [2];
  undefined8 local_618;
  undefined1 *local_610;
  undefined1 *local_608;
  undefined1 auStack_480 [704];
  undefined1 auStack_1c0 [320];
  undefined8 local_80;
  ulong local_78;
  undefined1 *local_70;
  
  puVar8 = PTR_DAT_04bb2f70;
  puVar6 = PTR_DAT_04bb2020;
  local_640 = "Bbs_EventNotice";
  local_690 = 0x40;
  local_648 = PTR_DAT_04bb2020 + 0x10;
  local_64d = 0;
  local_6a0 = PTR_DAT_04bb2f70 + 0x10;
  local_698 = local_68c;
  (**(code **)(*param_2 + 0x18))(param_2);
  __src = (char *)param_2[1];
  if (local_68c != __src) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar17 = 0;
    do {
      if (*(char *)(param_2[1] + lVar17) == '\0') goto LAB_0087e32c;
      lVar13 = param_2[1] + lVar17;
      if (*(char *)(lVar13 + 1) == '\0') {
        lVar17 = lVar17 + 1;
        goto LAB_0087e32c;
      }
      if (*(char *)(lVar13 + 2) == '\0') {
        lVar17 = lVar17 + 2;
        goto LAB_0087e32c;
      }
      lVar17 = lVar17 + 3;
    } while (lVar17 != 0x80001);
    lVar17 = 0;
LAB_0087e32c:
    iVar9 = (int)lVar17;
    if (local_690 <= (int)lVar17) {
      iVar9 = local_690 + -1;
    }
    memcpy(local_68c,__src,(long)iVar9);
    local_68c[iVar9] = '\0';
  }
  puVar7 = PTR_DAT_04bb2bc0;
  local_6a5 = 0;
  uVar22 = *param_3;
  local_6f0 = local_6e4;
  uVar23 = *param_4;
  local_6e8 = 0x40;
  local_6e4[0] = 0;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  local_6f8 = puVar1;
  local_6a0 = puVar1;
  (**(code **)(*param_2 + 0x18))(param_2);
  FUN_038d1270(&local_6f8,"%s_Msg",param_2[1]);
  local_6fd = 0;
  local_740 = 0x40;
  local_748 = local_73c;
  local_73c[0] = 0;
  local_750 = puVar1;
  (**(code **)(*param_2 + 0x18))(param_2);
  FUN_038d1270(&local_750,"%s_From",param_2[1]);
  puVar20 = local_6f0;
  if ((((((*local_698 == 'H') && (local_698[1] == 'a')) && (local_698[2] == 'r')) &&
       (((local_698[3] == 'v' && (local_698[4] == 'e')) &&
        ((local_698[5] == 's' && ((local_698[6] == 't' && (local_698[7] == 'F')))))))) &&
      (local_698[8] == 'e')) &&
     ((((local_698[9] == 's' && (local_698[10] == 't')) && (local_698[0xb] == 'i')) &&
      (((local_698[0xc] == 'v' && (local_698[0xd] == 'a')) && (local_698[0xe] == 'l')))))) {
    uVar11 = *(uint *)(*(long *)PTR_DAT_04bb30a0 + 0x65204);
    if (1 < uVar11) {
      uVar11 = 0;
    }
    local_638 = CONCAT44(local_638._4_4_,uVar11);
    sVar4 = *(short *)PTR_DAT_04bb6298;
    if (sVar4 != -1) {
      local_7f78 = (undefined *)CONCAT44(local_7f78._4_4_,0x19);
      puVar14 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
      if (0xff < (uint)(int)sVar4) {
        puVar14 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar14 >> 0x19 & 1) != 0) {
        uVar11 = *(uint *)(*(long *)PTR_DAT_04bb30a0 + 0x65700);
        if (1 < uVar11) {
          uVar11 = 0;
        }
        local_638 = CONCAT44(local_638._4_4_,uVar11);
      }
    }
    iVar9 = (int)(char)local_638;
    local_638 = CONCAT44(local_638._4_4_,iVar9);
    if (iVar9 == 1) {
      local_7f78 = puVar6 + 0x10;
      local_7f70 = &DAT_040a0541;
      (**(code **)(local_6f8 + 0x18))(&local_6f8);
      lVar17 = 0;
      do {
        if (local_6f0[lVar17] == '\0') goto LAB_0087e684;
        if (local_6f0[lVar17 + 1] == '\0') {
          lVar17 = lVar17 + 1;
          goto LAB_0087e684;
        }
        if (local_6f0[lVar17 + 2] == '\0') {
          lVar17 = lVar17 + 2;
          goto LAB_0087e684;
        }
        lVar17 = lVar17 + 3;
      } while (lVar17 != 0x80001);
      lVar17 = 0;
LAB_0087e684:
      uVar11 = (uint)lVar17 & ((int)(uint)lVar17 >> 0x1f ^ 0xffffffffU);
      (**(code **)(local_7f78 + 0x18))(&local_7f78);
      lVar17 = 0;
      do {
        if (local_7f70[lVar17] == '\0') goto LAB_0087e6dc;
        if (local_7f70[lVar17 + 1] == '\0') goto LAB_0087e6d0;
        if (local_7f70[lVar17 + 2] == '\0') goto LAB_0087e6d8;
        lVar17 = lVar17 + 3;
      } while (lVar17 != 0x80001);
    }
    else {
      if (iVar9 != 0) goto LAB_0087e72c;
      local_7f78 = puVar6 + 0x10;
      local_7f70 = &DAT_040a053d;
      (**(code **)(local_6f8 + 0x18))(&local_6f8);
      lVar17 = 0;
      do {
        if (local_6f0[lVar17] == '\0') goto LAB_0087e630;
        if (local_6f0[lVar17 + 1] == '\0') {
          lVar17 = lVar17 + 1;
          goto LAB_0087e630;
        }
        if (local_6f0[lVar17 + 2] == '\0') {
          lVar17 = lVar17 + 2;
          goto LAB_0087e630;
        }
        lVar17 = lVar17 + 3;
      } while (lVar17 != 0x80001);
      lVar17 = 0;
LAB_0087e630:
      uVar11 = (uint)lVar17 & ((int)(uint)lVar17 >> 0x1f ^ 0xffffffffU);
      (**(code **)(local_7f78 + 0x18))(&local_7f78);
      lVar17 = 0;
      do {
        if (local_7f70[lVar17] == '\0') goto LAB_0087e6dc;
        if (local_7f70[lVar17 + 1] == '\0') goto LAB_0087e6d0;
        if (local_7f70[lVar17 + 2] == '\0') goto LAB_0087e6d8;
        lVar17 = lVar17 + 3;
      } while (lVar17 != 0x80001);
    }
    lVar17 = 0;
    goto LAB_0087e6dc;
  }
  goto LAB_0087e72c;
LAB_0087e6d0:
  lVar17 = lVar17 + 1;
  goto LAB_0087e6dc;
LAB_0087e6d8:
  lVar17 = lVar17 + 2;
LAB_0087e6dc:
  uVar21 = (uint)lVar17;
  if ((int)(local_6e8 - uVar11) <= (int)(uint)lVar17) {
    uVar21 = local_6e8 + ~uVar11;
  }
  if (0 < (int)uVar21) {
    (**(code **)(local_7f78 + 0x18))(&local_7f78);
    memcpy(puVar20 + uVar11,local_7f70,(ulong)uVar21);
    puVar20[(int)(uVar21 + uVar11)] = 0;
  }
LAB_0087e72c:
  puVar6 = PTR_DAT_04bb2718;
  FUN_03d53db0(*(undefined8 *)(*(long *)PTR_DAT_04bb2718 + 0x408),&local_648);
  puVar12 = (undefined8 *)FUN_03d53db0(*(undefined8 *)(*(long *)puVar6 + 0x408),&local_648);
  if (puVar12 == (undefined8 *)0x0) {
    return;
  }
  (**(code **)(local_6f8 + 0x18))(&local_6f8);
  iVar9 = FUN_038f40b0(*puVar12,local_6f0);
  if (iVar9 < 0) {
    return;
  }
  FUN_03d53db0(*(undefined8 *)(*(long *)puVar6 + 0x408),&local_648);
  puVar12 = (undefined8 *)FUN_03d53db0(*(undefined8 *)(*(long *)puVar6 + 0x408),&local_648);
  if (puVar12 == (undefined8 *)0x0) {
    return;
  }
  (**(code **)(local_750 + 0x18))(&local_750);
  iVar9 = FUN_038f40b0(*puVar12,local_748);
  if (iVar9 < 0) {
    return;
  }
  local_755 = 0;
  local_798 = 0x40;
  local_7a8 = puVar8 + 0x10;
  local_7a0 = local_794;
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar20 = (undefined1 *)param_2[1];
  if (local_794 != puVar20) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar17 = 0;
    do {
      if (*(char *)(param_2[1] + lVar17) == '\0') goto LAB_0087e89c;
      lVar13 = param_2[1] + lVar17;
      if (*(char *)(lVar13 + 1) == '\0') {
        lVar17 = lVar17 + 1;
        goto LAB_0087e89c;
      }
      if (*(char *)(lVar13 + 2) == '\0') {
        lVar17 = lVar17 + 2;
        goto LAB_0087e89c;
      }
      lVar17 = lVar17 + 3;
    } while (lVar17 != 0x80001);
    lVar17 = 0;
LAB_0087e89c:
    iVar9 = (int)lVar17;
    if (local_798 <= (int)lVar17) {
      iVar9 = local_798 + -1;
    }
    memcpy(local_794,puVar20,(long)iVar9);
    local_794[iVar9] = 0;
  }
  puVar20 = local_7a0;
  local_7a8 = puVar7 + 0x10;
  lVar17 = 0;
  local_7a0[(long)local_798 + -1] = 0;
  do {
    if (local_7a0[lVar17] == '\0') goto LAB_0087e920;
    if (local_7a0[lVar17 + 1] == '\0') {
      lVar17 = lVar17 + 1;
      goto LAB_0087e920;
    }
    if (local_7a0[lVar17 + 2] == '\0') {
      lVar17 = lVar17 + 2;
      goto LAB_0087e920;
    }
    lVar17 = lVar17 + 3;
  } while (lVar17 != 0x80001);
  lVar17 = 0;
LAB_0087e920:
  uVar11 = (uint)lVar17 & ((int)(uint)lVar17 >> 0x1f ^ 0xffffffffU);
  uVar21 = 10;
  if ((int)(local_798 - uVar11) < 0xb) {
    uVar21 = local_798 + ~uVar11;
  }
  if (0 < (int)uVar21) {
    memcpy(local_7a0 + uVar11,"AddBbsYear",(ulong)uVar21);
    puVar20[(ulong)uVar21 + (ulong)uVar11] = 0;
  }
  lVar17 = *(long *)PTR_DAT_04bb2208;
  (**(code **)(local_7a8 + 0x18))(&local_7a8);
  uVar10 = FUN_006bd550(local_7a0,0);
  local_7f78 = (undefined *)CONCAT44(local_7f78._4_4_,uVar10);
  lVar17 = FUN_008a1920(lVar17 + 0x880,&local_7f78);
  if (lVar17 != 0) {
    FUN_0273f3c4(&local_7a8,(int)(short)uVar23);
  }
  lVar17 = *(long *)PTR_DAT_04bb46b0;
  if (lVar17 != 0) {
    puVar12 = *(undefined8 **)(lVar17 + 0x10);
    if ((*(byte *)(lVar17 + 0x453) & 1) == 0) {
      lVar13 = (**(code **)(*(long *)*puVar12 + 0x38))();
      lVar17 = 0;
      if (lVar13 != 0) {
        lVar17 = lVar13 + 0x70;
      }
      goto LAB_0087ea14;
    }
    if (puVar12 != (undefined8 *)0x0) {
      lVar17 = 0;
      if ((long *)puVar12[0x26] != (long *)0x0) {
        lVar17 = (**(code **)(*(long *)puVar12[0x26] + 0x38))();
      }
      goto LAB_0087ea14;
    }
  }
  lVar17 = 0;
LAB_0087ea14:
  if ((*(long *)(lVar17 + 0x1c27c0) == 0) ||
     (puVar12 = *(undefined8 **)(*(long *)(lVar17 + 0x1c27c0) + 0x10), puVar12 == (undefined8 *)0x0)
     ) {
    uVar11 = 1;
  }
  else {
    uVar11 = (**(code **)*puVar12)();
    uVar11 = uVar11 ^ 1;
  }
  *(undefined8 *)(param_1 + 0x14e8) = uVar23;
  (**(code **)(local_6a0 + 0x18))(&local_6a0);
  uVar10 = FUN_006bd550(local_698,0);
  local_638 = CONCAT44(local_638._4_4_,uVar10);
  puVar14 = (uint *)FUN_0088c0d0(param_1 + 8,&local_638);
  puVar8 = PTR_DAT_04bb3250;
  puVar6 = PTR_DAT_04bb3248;
  if (puVar14 == (uint *)0x0) {
    uVar18 = 0;
  }
  else {
    uVar21 = *puVar14;
    if (uVar21 != 0) {
      cVar24 = *PTR_DAT_04bb3248;
      do {
        if (cVar24 == '\0') {
          cVar24 = '\x01';
          *puVar6 = 1;
          memset(puVar8,0xff,0x288);
          uVar21 = *puVar14;
        }
        else {
          uVar2 = *(uint *)(puVar8 + 0x3c);
          if (-1 < (int)uVar2) {
            if (((byte *)((ulong)uVar2 + (long)puVar14) != (byte *)0x0) &&
               (bVar3 = *(byte *)((ulong)uVar2 + (long)puVar14), uVar18 = (ushort)bVar3, bVar3 < 7))
            goto LAB_0087ebd0;
            break;
          }
          if (uVar2 != 0xffffffff) break;
        }
        puVar5 = (uint *)(ulong)uVar21;
        uVar18 = 0;
        if ((puVar5 == (uint *)0x0) || (uVar18 = 0, puVar14 == puVar5)) goto LAB_0087ebd0;
        lVar13 = 0xc;
        if (*(char *)((long)puVar14 + (10 - (long)puVar5)) != '\0') {
          lVar13 = 0x1c;
        }
        lVar13 = (long)puVar14 + (lVar13 - (long)puVar5);
        uVar18 = 0;
        if (lVar13 == 0) goto LAB_0087ebd0;
        uVar15 = (ulong)*(ushort *)((long)puVar14 + (8 - (long)puVar5));
        *(undefined4 *)(puVar8 + 0x3c) = 0xfffffffe;
        if (uVar15 == 0) break;
        piVar19 = (int *)(lVar13 + 4);
        while (piVar19[-1] != -0x3147e501) {
          piVar19 = piVar19 + 2;
          uVar15 = uVar15 - 1;
          if (uVar15 == 0) goto LAB_0087ebc8;
        }
        iVar9 = 0;
        if (*piVar19 != -1) {
          iVar9 = *piVar19;
        }
        *(int *)(puVar8 + 0x3c) = iVar9;
        uVar21 = *puVar14;
        if (uVar21 == 0) break;
      } while( true );
    }
LAB_0087ebc8:
    uVar18 = 0;
  }
LAB_0087ebd0:
  memset(&local_7f78,0,0x77d0);
  uVar21 = (uint)uVar22;
  local_7f8 = 0;
  uStack_7f0 = 0;
  local_7e8 = 0;
  local_7d0 = 0;
  local_7c8 = 0;
  local_7c0 = 0;
  local_7b8 = 0;
  local_7e4 = 2;
  local_7c4 = 0xffff;
  local_7b0 = 0;
  local_7e0 = 0;
  uStack_7d8 = 0;
  uVar15 = nn::time::IsValidDate
                     (uVar21 & 0xffff,uVar21 >> 0x10 & 0xff,(uint)((ulong)uVar22 >> 0x18) & 0xff);
  if ((uVar15 & 1) != 0) {
    local_7f78 = (undefined *)CONCAT44(local_7f78._4_4_,uVar21);
  }
  local_7c2 = uVar18;
  FUN_01bdde78(&local_638);
  FUN_01bb00d0(local_628,(long)*(char *)(param_1 + 0x14ea),0);
  FUN_01bb0360(local_628,(long)*(char *)(param_1 + 0x14eb),0);
  local_618 = 0;
  local_78 = (ulong)&local_7f78 | 4;
  local_70 = auStack_7d94;
  local_80 = 0;
  local_610 = auStack_480;
  local_608 = auStack_1c0;
  FUN_01bdd994(&local_638,&local_648,&local_6f8,&local_750);
  if ((*(long *)(lVar17 + 0x1c27c0) != 0) &&
     (plVar16 = *(long **)(*(long *)(lVar17 + 0x1c27c0) + 0x20), plVar16 != (long *)0x0)) {
    local_638 = *(long *)(lVar17 + 0x1c27a0);
    local_630 = *(undefined8 *)(lVar17 + 0x1c27a8);
    local_628[0] = 0xe0ae8;
    (**(code **)(*plVar16 + 0x20))(plVar16,&local_638);
  }
  FUN_026d4f58(*(long *)(lVar17 + 0x1c27a8) + *(long *)(lVar17 + 0x1c27a0),&local_7f78);
  if ((((uVar11 & 1) == 0) && (*(long *)(lVar17 + 0x1c27c0) != 0)) &&
     (puVar12 = *(undefined8 **)(*(long *)(lVar17 + 0x1c27c0) + 0x18), puVar12 != (undefined8 *)0x0)
     ) {
    (**(code **)*puVar12)();
  }
  return;
}

