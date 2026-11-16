
undefined8 FUN_027c5f10(void)

{
  undefined *puVar1;
  ushort uVar2;
  short sVar3;
  undefined *__s;
  bool bVar4;
  int iVar5;
  uint uVar6;
  char *__src;
  long lVar7;
  char *pcVar8;
  uint *puVar9;
  int *piVar10;
  ulong uVar11;
  uint *puVar12;
  char cVar13;
  undefined *local_b8;
  char *local_b0;
  int local_a8;
  char local_a4 [63];
  undefined1 local_65;
  
  lVar7 = *(long *)PTR_DAT_04bb27d0;
  if (((lVar7 == 0) || (*(long *)(lVar7 + 0x28) == 0)) || (*(int *)(lVar7 + 0x80) != 1)) {
    sVar3 = *(short *)PTR_DAT_04bb6298;
    if (sVar3 != -1) {
      puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8;
      if (0xff < (uint)(int)sVar3) {
        puVar1 = PTR_DAT_04bc39f8;
      }
      if ((*(uint *)(puVar1 + 4) & 1) != 0) {
        return 0;
      }
    }
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    local_b0 = "TodayGlobalEventId";
    local_b8 = puVar1;
    iVar5 = FUN_0273ea30(&local_b8);
    if (iVar5 != 0xffff) {
      local_b0 = "TodayGlobalEventId";
      lVar7 = *(long *)PTR_DAT_04bb32f0;
      local_b8 = puVar1;
      uVar6 = FUN_0273ea30(&local_b8);
      __s = PTR_DAT_04bb3250;
      puVar1 = PTR_DAT_04bb3248;
      uVar2 = *(ushort *)(lVar7 + 0x420);
      uVar6 = (uVar6 & 0xffff) - (uint)uVar2;
      if (((uVar6 < *(uint *)(lVar7 + 0x400)) &&
          (puVar12 = *(uint **)(*(long *)(lVar7 + 0x408) + (long)(int)uVar6 * 8),
          puVar12 != (uint *)0x0)) ||
         ((-(uint)uVar2 < *(uint *)(lVar7 + 0x400) &&
          (puVar12 = *(uint **)(*(long *)(lVar7 + 0x408) + (ulong)uVar2 * -8),
          puVar12 != (uint *)0x0)))) {
        if (*puVar12 != 0) {
          cVar13 = *PTR_DAT_04bb3248;
          do {
            if (cVar13 == '\0') {
              cVar13 = '\x01';
              *puVar1 = 1;
              memset(__s,0xff,0x288);
            }
            else {
              uVar6 = *(uint *)(__s + 0x148);
              if (-1 < (int)uVar6) {
                pcVar8 = (char *)((ulong)uVar6 + (long)puVar12);
                goto LAB_027c60fc;
              }
              if (uVar6 != 0xffffffff) break;
            }
            puVar9 = (uint *)(ulong)*puVar12;
            pcVar8 = (char *)0x0;
            if ((*puVar12 == 0) || (puVar12 == puVar9)) goto LAB_027c60fc;
            lVar7 = 0xc;
            if (*(char *)((long)puVar12 + (10 - (long)puVar9)) != '\0') {
              lVar7 = 0x1c;
            }
            lVar7 = (long)puVar12 + (lVar7 - (long)puVar9);
            if (lVar7 == 0) break;
            uVar11 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar9));
            *(undefined4 *)(__s + 0x148) = 0xfffffffe;
            pcVar8 = (char *)0x0;
            if (uVar11 == 0) goto LAB_027c60fc;
            piVar10 = (int *)(lVar7 + 4);
            while (piVar10[-1] != 0x443c0fb7) {
              piVar10 = piVar10 + 2;
              uVar11 = uVar11 - 1;
              if (uVar11 == 0) {
                pcVar8 = (char *)0x0;
                goto LAB_027c60fc;
              }
            }
            iVar5 = 0;
            if (*piVar10 != -1) {
              iVar5 = *piVar10;
            }
            *(int *)(__s + 0x148) = iVar5;
          } while (*puVar12 != 0);
        }
        pcVar8 = (char *)0x0;
LAB_027c60fc:
        local_65 = 0;
        __src = *(char **)PTR_PTR_04bb3260;
        if (pcVar8 != (char *)0x0) {
          __src = pcVar8;
        }
        local_a8 = 0x40;
        local_b0 = local_a4;
        if (local_a4 == __src) {
          lVar7 = 0x3f;
        }
        else {
          lVar7 = 0;
          do {
            if (__src[lVar7] == '\0') {
LAB_027c6184:
              iVar5 = (int)lVar7;
              if (0x3f < iVar5) {
                iVar5 = 0x3f;
              }
              goto LAB_027c6190;
            }
            if (__src[lVar7 + 1] == '\0') {
              lVar7 = lVar7 + 1;
              goto LAB_027c6184;
            }
            if (__src[lVar7 + 2] == '\0') {
              lVar7 = lVar7 + 2;
              goto LAB_027c6184;
            }
            lVar7 = lVar7 + 3;
          } while (lVar7 != 0x80001);
          iVar5 = 0;
LAB_027c6190:
          memcpy(local_a4,__src,(long)iVar5);
          local_a4[iVar5] = '\0';
          lVar7 = (long)local_a8 + -1;
          __src = local_b0;
        }
        puVar1 = PTR_DAT_04bb2bc0;
        local_b8 = PTR_DAT_04bb2bc0 + 0x10;
        __src[lVar7] = '\0';
        (**(code **)(puVar1 + 0x28))(&local_b8);
        if (local_b0 == "Countdown") {
          return 1;
        }
        uVar11 = 0;
        bVar4 = true;
        do {
          if (local_b0[uVar11] != "Countdown"[uVar11]) {
            return 0;
          }
          if (local_b0[uVar11] == '\0') {
            if (bVar4) {
              return 1;
            }
            return 0;
          }
          bVar4 = uVar11 < 0x80000;
          uVar11 = uVar11 + 1;
        } while (uVar11 != 0x80001);
      }
    }
  }
  return 0;
}

