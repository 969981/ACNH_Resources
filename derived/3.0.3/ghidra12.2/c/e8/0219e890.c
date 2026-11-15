
bool FUN_0219e890(long param_1)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  byte *pbVar6;
  uint *puVar7;
  long lVar8;
  int iVar9;
  char cVar10;
  uint *puVar11;
  ulong uVar12;
  int *piVar13;
  byte local_4 [4];
  
  lVar8 = *(long *)PTR_DAT_04bb39b0;
  pbVar6 = PTR_DAT_04bb32e0;
  if (lVar8 == 0) {
LAB_0219e900:
    if (7 < *pbVar6) {
LAB_0219e90c:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar8 = **(long **)PTR_DAT_04bb27d0;
        bVar5 = *(byte *)(lVar8 + 0x473);
        pbVar6 = PTR_DAT_04bb5038;
        if ((long)(char)bVar5 != 0xffffffffffffffff) {
          puVar7 = (uint *)(lVar8 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
          if (7 < bVar5) {
            puVar7 = (uint *)(lVar8 + 0x48);
          }
          if ((*puVar7 & 8) != 0) {
            pbVar6 = (byte *)(lVar8 + 0x471);
          }
        }
        local_4[0] = *pbVar6;
        if (local_4[0] < 8) goto LAB_0219e98c;
      }
      pbVar6 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar8 + 0x15c) != 0) {
      pbVar6 = (byte *)(lVar8 + 0x158);
    }
    if (7 < *pbVar6) {
      if ((*(int *)(lVar8 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar6 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_0219e900;
      }
      goto LAB_0219e90c;
    }
  }
  local_4[0] = *pbVar6;
  if (7 < local_4[0]) {
    local_4[0] = 0xff;
  }
LAB_0219e98c:
  bVar5 = FUN_02915598(local_4);
  puVar4 = PTR_DAT_04bc2638;
  puVar3 = PTR_DAT_04bc2630;
  if (((bVar5 & 1) == 0) || (DAT_05405fcc != *(char *)(param_1 + 0xaf8))) {
    lVar8 = *(long *)PTR_DAT_04bb3968;
    if (lVar8 == 0) {
      return false;
    }
    if (*(long *)(param_1 + 0xaa0) == 0) {
      return false;
    }
    uVar1 = *(uint *)(*(long *)(param_1 + 0xaa0) + 4);
    if ((bVar5 & uVar1 == 0x16) == 0) {
      if ((int)*(uint *)(lVar8 + 0x16718) < 1) {
        if (*(long *)(lVar8 + 0x16608) == 0) {
          return false;
        }
        puVar7 = *(uint **)(*(long *)(lVar8 + 0x16608) + 8);
        if (puVar7 == (uint *)0x0) {
          return false;
        }
        if ((uVar1 < *(uint *)(lVar8 + 0x16620)) &&
           (*(char *)(*(long *)(lVar8 + 0x16628) + (long)(int)uVar1) == '\0')) {
          return false;
        }
        if (*puVar7 <= uVar1) {
          return false;
        }
        if (puVar7[1] == 0) {
          return false;
        }
        if ((ushort)puVar7[2] == 0) {
          return false;
        }
        iVar9 = 0xc;
        if (*(char *)((long)puVar7 + 10) != '\0') {
          iVar9 = 0x1c;
        }
        puVar7 = (uint *)((ulong)(puVar7[1] * uVar1 + (uint)(ushort)puVar7[2] * 8 + iVar9) +
                         (long)puVar7);
      }
      else {
        if (*(uint *)(lVar8 + 0x16718) <= uVar1) {
          return false;
        }
        if (*(uint *)(lVar8 + 0x16708) <= uVar1) {
          uVar1 = 0;
        }
        puVar7 = *(uint **)(*(long *)(lVar8 + 0x16710) + (ulong)uVar1 * 8);
      }
      if ((puVar7 != (uint *)0x0) && (uVar1 = *puVar7, uVar1 != 0)) {
        cVar10 = *PTR_DAT_04bc2630;
        while( true ) {
          if (cVar10 == '\0') {
            cVar10 = '\x01';
            *(undefined8 *)puVar4 = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
            *puVar3 = 1;
            *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
            *(undefined4 *)(puVar4 + 0x28) = 0xffffffff;
            *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
            uVar1 = *puVar7;
          }
          else {
            uVar2 = *(uint *)puVar4;
            if (-1 < (int)uVar2) {
              if ((char *)((ulong)uVar2 + (long)puVar7) == (char *)0x0) {
                return false;
              }
              return *(char *)((ulong)uVar2 + (long)puVar7) != '\0';
            }
            if (uVar2 != 0xffffffff) {
              return false;
            }
          }
          puVar11 = (uint *)(ulong)uVar1;
          if (puVar11 == (uint *)0x0) {
            return false;
          }
          if (puVar7 == puVar11) break;
          lVar8 = 0xc;
          if (*(char *)((long)puVar7 + (10 - (long)puVar11)) != '\0') {
            lVar8 = 0x1c;
          }
          lVar8 = (long)puVar7 + (lVar8 - (long)puVar11);
          if (lVar8 == 0) {
            return false;
          }
          uVar12 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar11));
          *(undefined4 *)puVar4 = 0xfffffffe;
          if (uVar12 == 0) {
            return false;
          }
          piVar13 = (int *)(lVar8 + 4);
          while (piVar13[-1] != -0x5551c5f1) {
            piVar13 = piVar13 + 2;
            uVar12 = uVar12 - 1;
            if (uVar12 == 0) {
              return false;
            }
          }
          iVar9 = 0;
          if (*piVar13 != -1) {
            iVar9 = *piVar13;
          }
          *(int *)puVar4 = iVar9;
          uVar1 = *puVar7;
          if (uVar1 == 0) {
            return false;
          }
        }
        return false;
      }
    }
  }
  return false;
}

