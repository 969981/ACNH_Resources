
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_02919250(undefined4 *param_1)

{
  undefined8 *puVar1;
  uint *puVar2;
  byte bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  ulong uVar10;
  byte *pbVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined1 *__src;
  long *plVar15;
  undefined *local_a0;
  undefined1 *puStack_98;
  int local_90;
  undefined1 auStack_8c [31];
  undefined1 local_6d;
  byte local_64 [4];
  
  uVar8 = DAT_055c1158;
  uVar7 = DAT_055c1154;
  uVar6 = DAT_055c1150;
  uVar5 = DAT_055c114c;
  uVar4 = DAT_055c1148;
  lVar13 = *(long *)PTR_DAT_04bb39b0;
  pbVar11 = PTR_DAT_04bb32e0;
  if (lVar13 == 0) {
LAB_029192d8:
    if (7 < *pbVar11) {
LAB_029192e4:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar13 = **(long **)PTR_DAT_04bb27d0;
        bVar3 = *(byte *)(lVar13 + 0x473);
        pbVar11 = PTR_DAT_04bb5038;
        if ((long)(char)bVar3 != 0xffffffffffffffff) {
          puVar2 = (uint *)(lVar13 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
          if (7 < bVar3) {
            puVar2 = (uint *)(lVar13 + 0x48);
          }
          if ((*puVar2 & 8) != 0) {
            pbVar11 = (byte *)(lVar13 + 0x471);
          }
        }
        local_64[0] = *pbVar11;
        if (local_64[0] < 8) goto LAB_02919364;
      }
      pbVar11 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar13 + 0x15c) != 0) {
      pbVar11 = (byte *)(lVar13 + 0x158);
    }
    if (7 < *pbVar11) {
      if ((*(int *)(lVar13 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar11 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_029192d8;
      }
      goto LAB_029192e4;
    }
  }
  local_64[0] = *pbVar11;
  if (7 < local_64[0]) {
    local_64[0] = 0xff;
  }
LAB_02919364:
  if (DAT_055c1144 != 0) {
    puVar14 = DAT_055c1b60;
    if (DAT_055c1b60 == &DAT_055c1b58) {
      plVar15 = &DAT_055c1098;
    }
    else {
      do {
        plVar15 = puVar14 + -8;
        if (*(int *)(puVar14 + -1) == DAT_055c1144) goto LAB_029193c0;
        puVar1 = puVar14 + 1;
        puVar14 = (undefined8 *)*puVar1;
      } while ((undefined8 *)*puVar1 != &DAT_055c1b58);
      plVar15 = &DAT_055c1098;
    }
LAB_029193c0:
    local_90 = 0x20;
    local_6d = 0;
    local_a0 = PTR_DAT_04bb2a08 + 0x10;
    puStack_98 = auStack_8c;
    (**(code **)(*plVar15 + 0x18))(plVar15);
    __src = (undefined1 *)plVar15[1];
    if (auStack_8c != __src) {
      (**(code **)(*plVar15 + 0x18))(plVar15);
      lVar13 = 0;
      do {
        if (*(char *)(plVar15[1] + lVar13) == '\0') goto LAB_0291946c;
        lVar12 = plVar15[1] + lVar13;
        if (*(char *)(lVar12 + 1) == '\0') {
          lVar13 = lVar13 + 1;
          goto LAB_0291946c;
        }
        if (*(char *)(lVar12 + 2) == '\0') {
          lVar13 = lVar13 + 2;
          goto LAB_0291946c;
        }
        lVar13 = lVar13 + 3;
      } while (lVar13 != 0x80001);
      lVar13 = 0;
LAB_0291946c:
      iVar9 = (int)lVar13;
      if (local_90 <= (int)lVar13) {
        iVar9 = local_90 + -1;
      }
      memcpy(auStack_8c,__src,(long)iVar9);
      auStack_8c[iVar9] = 0;
    }
    local_a0 = PTR_DAT_04bb2028 + 0x10;
    if ((**(char **)(PTR_DAT_04bc3a88 + 8) == '\0') &&
       (uVar10 = FUN_02930ce0(&DAT_055c10d0,&local_a0,local_64), (uVar10 & 1) != 0)) {
      DAT_055c1174._0_4_ = uVar4;
      DAT_055c1174._4_4_ = uVar5;
      DAT_055c117c = uVar6;
      DAT_055c1180 = uVar7;
      DAT_055c1184 = uVar8;
      DAT_055c119a = 0;
      DAT_055c1188 = local_64[0];
      if (7 < local_64[0]) {
        DAT_055c1188 = 0xff;
      }
      _DAT_055c1198 = 0x101;
      DAT_055c116c = 0;
      DAT_055c1144 = 0;
      if (((*PTR_DAT_04bb3998 & 1) == 0) &&
         (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb3998), iVar9 != 0)) {
        FUN_00773950(PTR_DAT_04bb3990);
        __cxa_guard_release(PTR_DAT_04bb3998);
      }
      if (0 < (int)*(uint *)PTR_DAT_04bb3990) {
        uVar10 = 0;
        do {
          if (*(int *)(*(long *)(PTR_DAT_04bb3990 + 8) + uVar10 * 4) == 0) goto LAB_02919548;
          uVar10 = uVar10 + 1;
        } while (*(uint *)PTR_DAT_04bb3990 != uVar10);
      }
      uVar10 = 0;
LAB_02919548:
      DAT_055c1158 = (undefined4)uVar10;
      DAT_055c115c = 0;
      lVar13 = *(long *)PTR_DAT_04bb2808;
      if (((lVar13 != 0) && (lVar12 = *(long *)(lVar13 + 8), lVar12 != 0)) &&
         (*(int *)(lVar13 + 0x10) == 0)) {
        *(undefined4 *)(lVar12 + 0x338) = *param_1;
        *(undefined4 *)(lVar12 + 0x33c) = param_1[1];
        *(undefined4 *)(lVar12 + 0x340) = param_1[2];
        *(undefined4 *)(lVar12 + 0x344) = param_1[3];
        *(undefined4 *)(lVar12 + 0x348) = param_1[4];
        *(undefined1 *)(lVar12 + 0x34c) = *(undefined1 *)(param_1 + 5);
        *(undefined1 *)(lVar12 + 0x34d) = *(undefined1 *)((long)param_1 + 0x15);
      }
      return 1;
    }
  }
  return 0;
}

