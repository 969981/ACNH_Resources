
void FUN_03ed2d40(long param_1,uint *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  int *piVar4;
  char *pcVar5;
  undefined *puVar6;
  char *pcVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  undefined *local_190;
  char *local_188;
  undefined4 local_180;
  undefined1 local_17c [255];
  undefined1 local_7d;
  undefined *local_78;
  char *local_70;
  
  puVar6 = PTR_DAT_04bb2020;
  lVar9 = *(long *)(param_1 + 0x10);
  iVar11 = *(int *)(*(long *)(lVar9 + 8) + 0x10);
  if ((*(int *)(lVar9 + 0x38) + -1 <= iVar11 || iVar11 + 1U != (uint)*(ushort *)(param_1 + 10)) &&
     (iVar11 = *(int *)(*(long *)(lVar9 + 0x18) + (ulong)(uint)*(ushort *)(param_1 + 10) * 0x24 + 4)
     , iVar11 != 0)) {
    lVar12 = 0;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    puVar2 = PTR_DAT_04bb21f8 + 0x10;
    do {
      if (*(int *)(*(long *)(lVar9 + 8) + (long)iVar11) <= lVar12) {
        return;
      }
      lVar9 = *(long *)(lVar9 + 8);
      piVar4 = (int *)(lVar9 + iVar11);
      if (*piVar4 <= lVar12) {
        return;
      }
      pcVar5 = (char *)(lVar9 + *(int *)(lVar9 + 0x24) + (long)piVar4[lVar12 + 1]);
      uVar8 = *param_2;
      uVar10 = (ulong)uVar8;
      local_78 = puVar1;
      local_70 = pcVar5;
      if ((int)uVar8 < 1) {
LAB_03ed2fe4:
        if ((int)uVar8 < (int)param_2[1]) {
          *(char **)(*(long *)(param_2 + 2) + (long)(int)uVar8 * 8) = pcVar5;
          *param_2 = *param_2 + 1;
        }
        else {
          local_7d = 0;
          local_180 = 0x100;
          local_17c[0] = 0;
          lVar9 = *(long *)(*(long *)(param_1 + 0x10) + 8);
          local_190 = puVar2;
          local_188 = local_17c;
          FUN_038d1270(&local_190,"%s.as",lVar9 + *(int *)(lVar9 + 0x24) + (long)*(int *)(lVar9 + 8)
                      );
        }
      }
      else {
        uVar13 = 0;
        uVar14 = 0;
        do {
          if (uVar13 < (uVar10 & 0xffffffff)) {
            local_188 = *(char **)(*(long *)(param_2 + 2) + uVar13 * 8);
          }
          else {
            local_188 = (char *)0x0;
          }
          local_190 = puVar6 + 0x10;
          (**(code **)(local_78 + 0x18))(&local_78);
          (**(code **)(local_78 + 0x18))(&local_78);
          pcVar7 = local_70;
          (**(code **)(local_190 + 0x18))(&local_190);
          if (pcVar7 == local_188) {
LAB_03ed2e90:
            uVar8 = 1;
          }
          else if (*local_70 == *local_188) {
            if (*local_70 == '\0') goto LAB_03ed2e90;
            uVar10 = 0;
            local_188 = local_188 + 1;
            do {
              if (local_70[uVar10 + 1] != local_188[uVar10]) {
                local_188 = (char *)0x0;
                goto LAB_03ed2fd0;
              }
              if (local_70[uVar10 + 1] == '\0') {
                local_188 = (char *)0x1;
                goto LAB_03ed2fd0;
              }
              if (local_70[uVar10 + 2] != local_188[uVar10 + 1]) {
                local_188 = (char *)0x0;
                uVar10 = uVar10 + 1;
                goto LAB_03ed2fd0;
              }
              if (local_70[uVar10 + 2] == '\0') {
                uVar10 = uVar10 + 1;
                local_188 = (char *)0x1;
                goto LAB_03ed2fd0;
              }
              if (uVar10 == 0x7fffe) {
                uVar10 = 0x80000;
                goto LAB_03ed2fd0;
              }
              lVar9 = uVar10 + 3;
              uVar3 = uVar10 + 2;
              if (local_70[lVar9] != local_188[uVar10 + 2]) {
                local_188 = (char *)0x0;
                goto LAB_03ed2fcc;
              }
              uVar10 = uVar10 + 3;
            } while (local_70[lVar9] != '\0');
            local_188 = (char *)0x1;
LAB_03ed2fcc:
            uVar10 = uVar3;
LAB_03ed2fd0:
            uVar8 = (uint)(uVar10 < 0x80000) & (uint)local_188;
          }
          else {
            uVar8 = 0;
          }
          uVar14 = uVar8 | uVar14;
          uVar8 = *param_2;
          uVar10 = (ulong)(int)uVar8;
          uVar13 = uVar13 + 1;
        } while ((long)uVar13 < (long)uVar10);
        if (uVar14 == 0) goto LAB_03ed2fe4;
      }
      lVar9 = *(long *)(param_1 + 0x10);
      lVar12 = lVar12 + 1;
      iVar11 = *(int *)(*(long *)(lVar9 + 0x18) + (ulong)*(ushort *)(param_1 + 10) * 0x24 + 4);
    } while (iVar11 != 0);
  }
  return;
}

