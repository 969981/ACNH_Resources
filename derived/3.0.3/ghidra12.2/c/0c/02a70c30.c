
char * FUN_02a70c30(long param_1)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  ushort uVar4;
  ulong uVar5;
  char *pcVar6;
  uint *puVar7;
  bool bVar8;
  int iVar9;
  uint *puVar10;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  local_14 = *(uint *)(param_1 + 0x294);
  if (local_14 == 0) {
LAB_02a70d14:
    puVar7 = (uint *)0x0;
  }
  else {
    if (0 < (int)*(uint *)(DAT_05635578 + 0x1e0)) {
      if (*(uint *)(DAT_05635578 + 0x1e0) <= local_14) goto LAB_02a70d14;
      uVar1 = local_14;
      if (*(uint *)(DAT_05635578 + 0x1d0) <= local_14) {
        uVar1 = 0;
      }
      puVar7 = *(uint **)(*(long *)(DAT_05635578 + 0x1d8) + (ulong)uVar1 * 8);
      if (puVar7 == (uint *)0x0) goto LAB_02a70d18;
LAB_02a70c88:
      uVar1 = *puVar7;
      if (uVar1 == 0 || puVar7 == (uint *)(ulong)uVar1) {
LAB_02a70c98:
        local_18 = 0;
      }
      else {
        puVar10 = (uint *)((long)puVar7 - (long)(ulong)uVar1);
        local_18 = 0;
        if (*puVar10 != 0) {
          uVar1 = puVar10[1];
          if ((uVar1 != 0) && ((ulong)(ushort)puVar10[2] != 0)) {
            lVar2 = 0xc;
            if (*(char *)((long)puVar10 + 10) != '\0') {
              lVar2 = 0x1c;
            }
            lVar2 = (long)puVar10 + lVar2 + (ulong)(ushort)puVar10[2] * 8;
            if (lVar2 != 0) {
              uVar3 = 0;
              if ((ulong)uVar1 != 0) {
                uVar3 = (uint)((ulong)((long)puVar7 - lVar2) / (ulong)uVar1);
              }
              if (*puVar10 <= uVar3) {
                uVar3 = 0xffffffff;
              }
              if (uVar3 < DAT_0560bac8) {
                local_18 = (uint)*(ushort *)(DAT_0560bad0 + (long)(int)uVar3 * 2);
                if (3 < local_18) {
                  bVar8 = false;
                  local_18 = 0;
                  goto LAB_02a70d20;
                }
                goto LAB_02a70c9c;
              }
            }
          }
          goto LAB_02a70c98;
        }
      }
LAB_02a70c9c:
      bVar8 = false;
      goto LAB_02a70d20;
    }
    if ((((*(long *)(DAT_05635578 + 0xd0) == 0) ||
         (puVar7 = *(uint **)(*(long *)(DAT_05635578 + 0xd0) + 8), puVar7 == (uint *)0x0)) ||
        ((local_14 < *(uint *)(DAT_05635578 + 0xe8) &&
         (*(char *)(*(long *)(DAT_05635578 + 0xf0) + (long)(int)local_14) == '\0')))) ||
       (((*puVar7 <= local_14 || (puVar7[1] == 0)) || ((ushort)puVar7[2] == 0)))) goto LAB_02a70d14;
    iVar9 = 0xc;
    if (*(char *)((long)puVar7 + 10) != '\0') {
      iVar9 = 0x1c;
    }
    puVar7 = (uint *)((ulong)(puVar7[1] * local_14 + (uint)(ushort)puVar7[2] * 8 + iVar9) +
                     (long)puVar7);
    if (puVar7 != (uint *)0x0) goto LAB_02a70c88;
  }
LAB_02a70d18:
  local_18 = 0;
  bVar8 = true;
LAB_02a70d20:
  if (local_18 == 1) {
    local_1c = 0;
    uVar5 = FUN_02b677c0(&local_1c);
    if ((uVar5 & 1) != 0) {
      if (0xf < local_1c) {
        local_1c = 0;
      }
      return (&PTR_s_System_Door_Market_04a9bf70)[(int)local_1c];
    }
  }
  else if (local_18 == 0) {
    if (bVar8) {
      return "System_Door_PlayerHouse";
    }
    uVar1 = *puVar7;
    pcVar6 = "System_Door_PlayerHouse";
    if (uVar1 == 0) {
      return pcVar6;
    }
    if (puVar7 == (uint *)(ulong)uVar1) {
      return pcVar6;
    }
    puVar10 = (uint *)((long)puVar7 - (long)(ulong)uVar1);
    if (*puVar10 == 0) {
      return pcVar6;
    }
    uVar1 = puVar10[1];
    if (uVar1 == 0) {
      return pcVar6;
    }
    if ((ulong)(ushort)puVar10[2] == 0) {
      return pcVar6;
    }
    lVar2 = 0xc;
    if (*(char *)((long)puVar10 + 10) != '\0') {
      lVar2 = 0x1c;
    }
    lVar2 = (long)puVar10 + lVar2 + (ulong)(ushort)puVar10[2] * 8;
    if (lVar2 == 0) {
      return pcVar6;
    }
    uVar3 = 0;
    if ((ulong)uVar1 != 0) {
      uVar3 = (uint)((ulong)((long)puVar7 - lVar2) / (ulong)uVar1);
    }
    if (*puVar10 <= uVar3) {
      uVar3 = 0xffffffff;
    }
    if (DAT_0560bae8 <= uVar3) {
      return pcVar6;
    }
    uVar4 = *(ushort *)(DAT_0560baf0 + (long)(int)uVar3 * 2);
    if (4 < uVar4) {
      return pcVar6;
    }
    if (uVar4 != 4) {
      return (&PTR_s_System_Door_PlayerHouse_04a9c008)[(short)uVar4];
    }
  }
  return "";
}

