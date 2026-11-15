
void FUN_01fd6d50(undefined1 *param_1,uint *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint *puVar3;
  char *pcVar4;
  int iVar5;
  long lVar6;
  char cVar7;
  ulong uVar8;
  char *pcVar9;
  uint *puVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  undefined *local_50;
  char *local_48;
  
  *(undefined4 *)(param_1 + 4) = 0;
  *param_1 = 0;
  puVar2 = PTR_DAT_04bc23c8;
  puVar1 = PTR_DAT_04bc23c0;
  lVar6 = *(long *)PTR_DAT_04bb4960;
  if (lVar6 != 0) {
    uVar12 = *param_2;
    if ((int)*(uint *)(lVar6 + 0x5c0) < 1) {
      if (*(long *)(lVar6 + 0x4b0) == 0) {
        return;
      }
      puVar3 = *(uint **)(*(long *)(lVar6 + 0x4b0) + 8);
      if (puVar3 == (uint *)0x0) {
        return;
      }
      if ((uVar12 < *(uint *)(lVar6 + 0x4c8)) &&
         (*(char *)(*(long *)(lVar6 + 0x4d0) + (long)(int)uVar12) == '\0')) {
        return;
      }
      if (*puVar3 <= uVar12) {
        return;
      }
      if (puVar3[1] == 0) {
        return;
      }
      if ((ushort)puVar3[2] == 0) {
        return;
      }
      iVar5 = 0xc;
      if (*(char *)((long)puVar3 + 10) != '\0') {
        iVar5 = 0x1c;
      }
      puVar3 = (uint *)((ulong)(puVar3[1] * uVar12 + (uint)(ushort)puVar3[2] * 8 + iVar5) +
                       (long)puVar3);
    }
    else {
      if (*(uint *)(lVar6 + 0x5c0) <= uVar12) {
        return;
      }
      if (*(uint *)(lVar6 + 0x5b0) <= uVar12) {
        uVar12 = 0;
      }
      puVar3 = *(uint **)(*(long *)(lVar6 + 0x5b8) + (ulong)uVar12 * 8);
    }
    if (puVar3 != (uint *)0x0) {
      if (*puVar3 != 0) {
        cVar7 = *PTR_DAT_04bc23c0;
        do {
          if (cVar7 == '\0') {
            cVar7 = '\x01';
            *(undefined8 *)puVar2 = 0xffffffffffffffff;
            *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
            *puVar1 = 1;
            *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar2 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar2 + 0x38) = 0xffffffffffffffff;
          }
          else {
            uVar12 = *(uint *)(puVar2 + 0x24);
            if (-1 < (int)uVar12) {
              pcVar9 = (char *)((ulong)uVar12 + (long)puVar3);
              goto LAB_01fd6e8c;
            }
            if (uVar12 != 0xffffffff) break;
          }
          puVar10 = (uint *)(ulong)*puVar3;
          pcVar9 = (char *)0x0;
          if ((*puVar3 == 0) || (puVar3 == puVar10)) goto LAB_01fd6e8c;
          lVar6 = 0xc;
          if (*(char *)((long)puVar3 + (10 - (long)puVar10)) != '\0') {
            lVar6 = 0x1c;
          }
          lVar6 = (long)puVar3 + (lVar6 - (long)puVar10);
          if (lVar6 == 0) break;
          uVar8 = (ulong)*(ushort *)((long)puVar3 + (8 - (long)puVar10));
          *(undefined4 *)(puVar2 + 0x24) = 0xfffffffe;
          pcVar9 = (char *)0x0;
          if (uVar8 == 0) goto LAB_01fd6e8c;
          piVar11 = (int *)(lVar6 + 4);
          while (piVar11[-1] != 0xac9e9a2) {
            piVar11 = piVar11 + 2;
            uVar8 = uVar8 - 1;
            if (uVar8 == 0) {
              pcVar9 = (char *)0x0;
              goto LAB_01fd6e8c;
            }
          }
          iVar5 = 0;
          if (*piVar11 != -1) {
            iVar5 = *piVar11;
          }
          *(int *)(puVar2 + 0x24) = iVar5;
        } while (*puVar3 != 0);
      }
      pcVar9 = (char *)0x0;
LAB_01fd6e8c:
      puVar1 = PTR_DAT_04bc23f0;
      local_48 = *(char **)PTR_PTR_04bc23e8;
      if (pcVar9 != (char *)0x0) {
        local_48 = pcVar9;
      }
      local_50 = PTR_DAT_04bb2020 + 0x10;
      if (*local_48 != '\0') {
        uVar12 = 0;
        do {
          pcVar9 = "";
          if (uVar12 < 0xd) {
            pcVar9 = *(char **)(puVar1 + (ulong)uVar12 * 8 + 0x90);
          }
          (**(code **)(local_50 + 0x18))(&local_50);
          if (pcVar9 == local_48) goto LAB_01fd6ff8;
          if (*pcVar9 == *local_48) {
            if (*pcVar9 == '\0') goto LAB_01fd6ff8;
            lVar6 = 0x7fffe;
            pcVar4 = local_48;
            while( true ) {
              if (pcVar9[1] != pcVar4[1]) break;
              if (pcVar9[1] == '\0') goto LAB_01fd6ff8;
              if (pcVar9[2] != pcVar4[2]) break;
              if (pcVar9[2] == '\0') goto LAB_01fd6ff8;
              if ((lVar6 == 0) || (cVar7 = pcVar9[3], cVar7 != pcVar4[3])) break;
              lVar6 = lVar6 + -3;
              pcVar4 = pcVar4 + 3;
              pcVar9 = pcVar9 + 3;
              if (cVar7 == '\0') goto LAB_01fd6ff8;
            }
          }
          uVar13 = 0xd;
          if ((int)uVar12 < 0xd) {
            uVar13 = uVar12 + 1;
          }
          uVar12 = uVar13;
        } while (uVar13 != 0xd);
        uVar12 = 0;
LAB_01fd6ff8:
        *(uint *)(param_1 + 4) = uVar12;
        *param_1 = 1;
      }
    }
  }
  return;
}

