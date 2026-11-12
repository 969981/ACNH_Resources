
/* WARNING: Removing unreachable block (ram,0x008d9f68) */

undefined8
FUN_008d9d70(long param_1,long *param_2,long *param_3,undefined4 param_4,undefined8 *param_5,
            byte param_6)

{
  long *plVar1;
  uint *puVar2;
  uint *puVar3;
  char cVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  byte bVar9;
  byte *pbVar10;
  long lVar11;
  char *pcVar12;
  long lVar13;
  long *plVar14;
  uint uVar15;
  uint uVar16;
  char *pcVar17;
  
  puVar5 = PTR_DAT_04bb39b0;
  if (*(int *)(*(long *)PTR_DAT_04bb39b0 + 0x15c) == 0) {
    if (DAT_04c487d4 == -1) {
      return 0;
    }
    puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar3 = (uint *)PTR_DAT_04bc39f8;
    }
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar3 & 1 | *puVar2 >> 1 & 1) != 1) {
      return 0;
    }
    uVar16 = *(int *)(param_1 + 0x410) - 1;
    if ((uVar16 < 0x12) && ((0x3c001U >> (ulong)(uVar16 & 0x1f) & 1) != 0)) {
      return 1;
    }
    FUN_008c3440(param_1);
    *(undefined4 *)(param_1 + 0x309bc) = param_4;
    lVar13 = DAT_05ae7600;
    if (DAT_05ae7600 == 0) {
      plVar6 = malloc(0x40);
    }
    else {
      plVar6 = *(long **)(param_1 + 0x38020);
      if (plVar6 == (long *)0x0) {
        lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar6 = (long *)(lVar13 + 8);
        if (lVar7 != 0) {
          plVar6 = (long *)(lVar7 + 0xa8);
        }
        plVar6 = (long *)*plVar6;
        if (plVar6 == (long *)0x0) {
          plVar6 = (long *)0x0;
          goto LAB_008da03c;
        }
      }
      plVar6 = (long *)(**(code **)(*plVar6 + 0x30))(plVar6,0x40,8);
    }
LAB_008da03c:
    puVar5 = PTR_DAT_04bd0d40;
    plVar6[2] = 0;
    plVar6[3] = 0;
    *plVar6 = (long)(puVar5 + 0x10);
    plVar6[1] = 0;
    if (DAT_05ae7600 != 0) {
      lVar13 = FUN_038cb610(DAT_05ae7600,plVar6);
      plVar6[1] = lVar13;
      if (lVar13 != 0) {
        if ((*(uint *)(lVar13 + 0xd0) & 1) == 0) {
          lVar7 = 0;
        }
        else {
          lVar7 = lVar13 + 0x90;
          nn::os::LockMutex((MutexType *)(lVar13 + 0xb0));
        }
        plVar14 = (long *)(lVar13 + 0x70);
        lVar11 = *plVar14;
        plVar1 = (long *)((long)*(int *)(lVar13 + 0x84) + (long)plVar6);
        *plVar14 = (long)plVar1;
        *plVar1 = lVar11;
        plVar1[1] = (long)plVar14;
        if (lVar11 != 0) {
          *(long **)(lVar11 + 8) = plVar1;
        }
        *(int *)(lVar13 + 0x80) = *(int *)(lVar13 + 0x80) + 1;
        if (lVar7 != 0) {
          nn::os::UnlockMutex((MutexType *)(lVar7 + 0x20));
        }
      }
    }
    plVar6[4] = 0;
    *(undefined2 *)(plVar6 + 5) = 1;
    *(undefined8 *)((long)plVar6 + 0x2c) = 0x100000002;
    *plVar6 = (long)&PTR_FUN_04926120;
    uVar8 = *param_5;
    *(undefined4 *)((long)plVar6 + 0x3c) = *(undefined4 *)(param_5 + 1);
    *(undefined8 *)((long)plVar6 + 0x34) = uVar8;
    *(long **)(param_1 + 0x38030) = plVar6;
    *(byte *)(param_1 + 0x37fbb) = param_6 & 1;
    uVar16 = 0;
    do {
      pcVar17 = "";
      if (uVar16 < 99) {
        pcVar17 = (&PTR_s_cNormal_04922de8)[uVar16];
      }
      (**(code **)(*param_2 + 0x18))(param_2);
      pcVar12 = (char *)param_2[1];
      if (pcVar17 == pcVar12) goto LAB_008da1dc;
      if (*pcVar17 == *pcVar12) {
        if (*pcVar17 == '\0') goto LAB_008da1dc;
        lVar13 = 0x7fffe;
        while( true ) {
          if (pcVar17[1] != pcVar12[1]) break;
          if (pcVar17[1] == '\0') goto LAB_008da1dc;
          if (pcVar17[2] != pcVar12[2]) break;
          if (pcVar17[2] == '\0') goto LAB_008da1dc;
          if ((lVar13 == 0) || (cVar4 = pcVar17[3], cVar4 != pcVar12[3])) break;
          lVar13 = lVar13 + -3;
          pcVar12 = pcVar12 + 3;
          pcVar17 = pcVar17 + 3;
          if (cVar4 == '\0') goto LAB_008da1dc;
        }
      }
      uVar15 = 99;
      if ((int)uVar16 < 99) {
        uVar15 = uVar16 + 1;
      }
      uVar16 = uVar15;
    } while (uVar15 != 99);
    uVar16 = 0x62;
LAB_008da1dc:
    *(uint *)(param_1 + 0x307e4) = uVar16;
    puVar5 = PTR_s_cDefault_04bb5888;
    uVar16 = 0;
    do {
      pcVar17 = "";
      if (uVar16 < 0x2b) {
        pcVar17 = *(char **)(puVar5 + (ulong)uVar16 * 8 + 0x278);
      }
      (**(code **)(*param_3 + 0x18))(param_3);
      pcVar12 = (char *)param_3[1];
      if (pcVar17 == pcVar12) goto LAB_008da2b4;
      if (*pcVar17 == *pcVar12) {
        if (*pcVar17 == '\0') goto LAB_008da2b4;
        lVar13 = 0x7fffe;
        while( true ) {
          if (pcVar17[1] != pcVar12[1]) break;
          if (pcVar17[1] == '\0') goto LAB_008da2b4;
          if (pcVar17[2] != pcVar12[2]) break;
          if (pcVar17[2] == '\0') goto LAB_008da2b4;
          if ((lVar13 == 0) || (cVar4 = pcVar17[3], cVar4 != pcVar12[3])) break;
          lVar13 = lVar13 + -3;
          pcVar17 = pcVar17 + 3;
          pcVar12 = pcVar12 + 3;
          if (cVar4 == '\0') goto LAB_008da2b4;
        }
      }
      uVar15 = 0x2b;
      if ((int)uVar16 < 0x2b) {
        uVar15 = uVar16 + 1;
      }
      uVar16 = uVar15;
    } while (uVar15 != 0x2b);
    uVar16 = 0x2a;
LAB_008da2b4:
    uVar8 = 0x12;
    *(uint *)(param_1 + 0x307ec) = uVar16;
    goto LAB_008d9f5c;
  }
  FUN_008c3440(param_1,*(undefined4 *)(param_1 + 0x410));
  lVar13 = *(long *)puVar5;
  if (lVar13 == 0) {
    pbVar10 = &DAT_0548e140;
LAB_008d9eb8:
    if (*pbVar10 < 8) goto LAB_008d9f24;
LAB_008d9ec4:
    if (DAT_0537d558 == (long *)0x0) {
LAB_008d9f1c:
      pbVar10 = &DAT_0548e168;
      goto LAB_008d9f24;
    }
    lVar13 = *DAT_0537d558;
    bVar9 = *(byte *)(lVar13 + 0x473);
    pbVar10 = PTR_DAT_04bb5038;
    if ((long)(char)bVar9 != 0xffffffffffffffff) {
      puVar3 = (uint *)(lVar13 + 0x48) + ((long)(char)bVar9 & 0xffffffffU) * 0x20;
      if (7 < bVar9) {
        puVar3 = (uint *)(lVar13 + 0x48);
      }
      if ((*puVar3 & 8) != 0) {
        pbVar10 = (byte *)(lVar13 + 0x471);
      }
    }
    bVar9 = *pbVar10;
    if (7 < bVar9) goto LAB_008d9f1c;
  }
  else {
    pbVar10 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar13 + 0x15c) != 0) {
      pbVar10 = (byte *)(lVar13 + 0x158);
    }
    if (7 < *pbVar10) {
      if ((*(int *)(lVar13 + 0x15c) != 0) && (DAT_054f5738 != 0)) {
        pbVar10 = (byte *)(DAT_054f5738 + 0x11a5);
        goto LAB_008d9eb8;
      }
      goto LAB_008d9ec4;
    }
LAB_008d9f24:
    bVar9 = *pbVar10;
    if (7 < bVar9) {
      bVar9 = 0xff;
    }
  }
  if (7 < bVar9) {
    bVar9 = 0xff;
  }
  *(byte *)(param_1 + 0x309b8) = bVar9;
  uVar8 = 8;
  *(uint *)(param_1 + 0x307e4) = *(uint *)(param_1 + 0x307e8);
  *(undefined4 *)(param_1 + 0x307ec) = 2;
LAB_008d9f5c:
  FUN_03ebb160(param_1 + 0x408,uVar8);
  return 1;
}

