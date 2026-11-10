
/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_0017a0b0(long *param_1,long *param_2)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined2 uVar4;
  uint uVar5;
  uint uVar6;
  size_t sVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  char *pcVar12;
  undefined4 uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined4 *puVar16;
  ulong uVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined8 uVar20;
  long lVar21;
  undefined4 local_338;
  uint local_334;
  int local_330;
  undefined4 local_32c;
  uint local_150;
  undefined8 auStack_140 [11];
  undefined1 auStack_e8 [10];
  char acStack_de [126];
  
  lVar19 = *param_1;
  *param_2 = 0;
  if ((*(long *)(lVar19 + 0x1f8) == 0) && (*(long *)(lVar19 + 0x420) == 0)) {
    FUN_0014d5f8(lVar19,"Could not DOH-resolve: %s",param_1[0xa6]);
    uVar13 = 5;
    if ((*(byte *)((long)param_1 + 0x41c) & 0x10) == 0) {
      uVar13 = 6;
    }
    return uVar13;
  }
  if (*(int *)(lVar19 + 0x648) != 0) {
    return 0;
  }
  FUN_001477d8(*(undefined8 *)(lVar19 + 0xd8));
  FUN_0014f260(*(undefined8 *)(lVar19 + 0x1f8));
  FUN_001477d8(*(undefined8 *)(lVar19 + 0xd8),*(undefined8 *)(lVar19 + 0x420));
  FUN_0014f260(*(undefined8 *)(lVar19 + 0x420));
  memset(&local_338,0,0x250);
  local_338 = 0x7fffffff;
  uVar5 = FUN_0017a5ac(*(undefined8 *)(lVar19 + 0x410),*(undefined8 *)(lVar19 + 0x418),
                       *(undefined4 *)(lVar19 + 0x200),&local_338);
  FUN_00143300(*(undefined8 *)(lVar19 + 0x410));
  if (uVar5 != 0) {
    if (uVar5 < 0xd) {
      pcVar12 = (&PTR_DAT_04838730)[uVar5];
    }
    else {
      pcVar12 = "bad error code";
    }
    puVar1 = &DAT_040947d9;
    if (*(int *)(lVar19 + 0x200) != 1) {
      puVar1 = &DAT_04074aae;
    }
    FUN_0014d430(lVar19,"DOH: %s type %s for %s\n",pcVar12,puVar1,*(undefined8 *)(lVar19 + 0x650));
  }
  uVar6 = FUN_0017a5ac(*(undefined8 *)(lVar19 + 0x638),*(undefined8 *)(lVar19 + 0x640),
                       *(undefined4 *)(lVar19 + 0x428),&local_338);
  FUN_00143300(*(undefined8 *)(lVar19 + 0x638));
  if (uVar6 == 0) {
LAB_0017a270:
    FUN_0014d430(lVar19,"DOH Host name: %s\n",*(undefined8 *)(lVar19 + 0x650));
    FUN_0014d430(lVar19,"TTL: %u seconds\n",local_338);
    uVar14 = (ulong)local_334;
    if (0 < (int)local_334) {
      uVar17 = 0;
      puVar16 = &local_338;
      do {
        if ((&local_330)[uVar17 * 5] == 0x1c) {
          memset(auStack_e8,0,0x80);
          FUN_001460b8(auStack_e8,0x80,"DOH AAAA: ");
          uVar15 = 0;
          lVar11 = 0x76;
          pcVar12 = acStack_de;
          do {
            puVar18 = &DAT_0407ebb1;
            if (uVar15 != 0) {
              puVar18 = (undefined8 *)&DAT_040addd9;
            }
            FUN_001460b8(pcVar12,lVar11,"%s%02x%02x",puVar18,
                         *(undefined1 *)((long)puVar16 + uVar15 + 0xc),
                         *(undefined1 *)((long)puVar16 + uVar15 + 0xd));
            sVar7 = strlen(pcVar12);
            lVar11 = lVar11 - sVar7;
            pcVar12 = pcVar12 + sVar7;
            bVar3 = uVar15 < 0xe;
            uVar15 = uVar15 + 2;
          } while (bVar3);
          FUN_0014d430(lVar19,&DAT_0407486c,auStack_e8);
        }
        else if ((&local_330)[uVar17 * 5] == 1) {
          lVar11 = uVar17 * 0x14;
          FUN_0014d430(lVar19,"DOH A: %u.%u.%u.%u\n",
                       *(undefined1 *)((long)&local_32c + uVar17 * 0x14),
                       *(undefined1 *)((long)&local_32c + lVar11 + 1U),
                       *(undefined1 *)((long)&local_32c + lVar11 + 2U),
                       *(undefined1 *)((long)&local_32c + lVar11 + 3U));
        }
        uVar17 = uVar17 + 1;
        puVar16 = puVar16 + 5;
      } while (uVar17 != uVar14);
    }
    uVar17 = (ulong)local_150;
    if (0 < (int)local_150) {
      puVar18 = auStack_140;
      do {
        FUN_0014d430(lVar19,"CNAME: %s\n",*puVar18);
        uVar17 = uVar17 - 1;
        puVar18 = puVar18 + 3;
      } while (uVar17 != 0);
    }
    if (0 < (int)local_334) {
      uVar20 = *(undefined8 *)(lVar19 + 0x650);
      uVar13 = *(undefined4 *)(lVar19 + 0x658);
      puVar16 = &local_32c;
      lVar11 = 0;
      lVar21 = 0;
      do {
        lVar9 = lVar11;
        lVar8 = lVar21;
        if (puVar16[-1] != 0x1c) {
          lVar8 = FUN_00143330(1,0x30);
          if (lVar8 != 0) {
            lVar9 = FUN_00143320(uVar20);
            *(long *)(lVar8 + 0x18) = lVar9;
            if (lVar9 != 0) {
              lVar10 = FUN_00143330(1,0x10);
              *(long *)(lVar8 + 0x20) = lVar10;
              if (lVar10 != 0) {
                lVar9 = lVar8;
                if (lVar11 != 0) {
                  lVar9 = lVar11;
                }
                if (lVar21 != 0) {
                  *(long *)(lVar21 + 0x28) = lVar8;
                  lVar10 = *(long *)(lVar8 + 0x20);
                }
                *(undefined8 *)(lVar8 + 4) = 0x100000002;
                *(undefined4 *)(lVar8 + 0x10) = 0x10;
                uVar2 = *puVar16;
                *(undefined1 *)(lVar10 + 1) = 2;
                *(undefined4 *)(lVar10 + 4) = uVar2;
                uVar4 = nnsocketInetHtons(uVar13);
                *(undefined2 *)(lVar10 + 2) = uVar4;
                goto LAB_0017a4a0;
              }
              FUN_00143300(*(undefined8 *)(lVar8 + 0x18));
            }
            FUN_00143300(lVar8);
          }
          FUN_0014b378(lVar11);
          goto LAB_0017a54c;
        }
LAB_0017a4a0:
        uVar14 = uVar14 - 1;
        puVar16 = puVar16 + 5;
        lVar11 = lVar9;
        lVar21 = lVar8;
      } while (uVar14 != 0);
      if (lVar9 != 0) {
        if (*(long *)(lVar19 + 0xe8) != 0) {
          FUN_0014b7c4(lVar19,3,2);
        }
        lVar11 = FUN_0014a41c(lVar19,lVar9,*(undefined8 *)(lVar19 + 0x650),
                              *(undefined4 *)(lVar19 + 0x658));
        if (*(long *)(lVar19 + 0xe8) != 0) {
          FUN_0014b80c(lVar19,3);
        }
        uVar14 = (ulong)local_150;
        if (0 < (int)local_150) {
          puVar18 = auStack_140;
          do {
            FUN_00143300(*puVar18);
            uVar14 = uVar14 - 1;
            puVar18 = puVar18 + 3;
          } while (uVar14 != 0);
        }
        if (lVar11 != 0) {
          param_1[0xa8] = lVar11;
          *param_2 = lVar11;
          return 0;
        }
        FUN_0014b378(lVar9);
        goto LAB_0017a244;
      }
    }
LAB_0017a54c:
    uVar14 = (ulong)local_150;
    if ((int)local_150 < 1) {
      uVar13 = 0x1b;
    }
    else {
      uVar13 = 0x1b;
      puVar18 = auStack_140;
      do {
        FUN_00143300(*puVar18);
        uVar14 = uVar14 - 1;
        puVar18 = puVar18 + 3;
      } while (uVar14 != 0);
    }
  }
  else {
    if (uVar6 < 0xd) {
      pcVar12 = (&PTR_DAT_04838730)[uVar6];
    }
    else {
      pcVar12 = "bad error code";
    }
    puVar1 = &DAT_040947d9;
    if (*(int *)(lVar19 + 0x428) != 1) {
      puVar1 = &DAT_04074aae;
    }
    FUN_0014d430(lVar19,"DOH: %s type %s for %s\n",pcVar12,puVar1,*(undefined8 *)(lVar19 + 0x650));
    if (uVar5 == 0) goto LAB_0017a270;
LAB_0017a244:
    if (0 < (int)local_150) {
      uVar14 = (ulong)local_150;
      puVar18 = auStack_140;
      do {
        FUN_00143300(*puVar18);
        uVar14 = uVar14 - 1;
        puVar18 = puVar18 + 3;
      } while (uVar14 != 0);
    }
    uVar13 = 6;
  }
  return uVar13;
}

