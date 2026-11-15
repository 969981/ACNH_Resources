
undefined8 FUN_021a57c0(long param_1,uint *param_2)

{
  char cVar1;
  long lVar2;
  char cVar3;
  char cVar4;
  undefined4 uVar5;
  long lVar6;
  char *pcVar7;
  uint *puVar8;
  long *plVar9;
  ushort uVar10;
  char *pcVar11;
  long *plVar12;
  int iVar13;
  undefined8 *puVar14;
  long *plVar15;
  char local_4c;
  char local_4b;
  undefined2 local_4a;
  undefined4 local_48;
  char local_44;
  char local_43;
  char local_42;
  undefined4 local_24;
  
  lVar6 = *(long *)PTR_DAT_04bb3968;
  if ((int)*(uint *)(lVar6 + 0x16718) < 1) {
    if (*(long *)(lVar6 + 0x16608) == 0) {
      return 0;
    }
    puVar8 = *(uint **)(*(long *)(lVar6 + 0x16608) + 8);
    if (puVar8 == (uint *)0x0) {
      return 0;
    }
    if ((5 < *(uint *)(lVar6 + 0x16620)) && (*(char *)(*(long *)(lVar6 + 0x16628) + 5) == '\0')) {
      return 0;
    }
    if (*puVar8 < 6) {
      return 0;
    }
    if (puVar8[1] == 0) {
      return 0;
    }
    if ((ushort)puVar8[2] == 0) {
      return 0;
    }
    iVar13 = 0xc;
    if (*(char *)((long)puVar8 + 10) != '\0') {
      iVar13 = 0x1c;
    }
    lVar6 = (ulong)(puVar8[1] * 5 + (uint)(ushort)puVar8[2] * 8 + iVar13) + (long)puVar8;
  }
  else {
    if (*(uint *)(lVar6 + 0x16718) < 6) {
      return 0;
    }
    lVar2 = 0x28;
    if (*(uint *)(lVar6 + 0x16708) < 6) {
      lVar2 = 0;
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0x16710) + lVar2);
  }
  if (lVar6 != 0) {
    cVar4 = *(char *)(*(long *)PTR_DAT_04bb32e8 + 0x4064);
    cVar3 = *(char *)(*(long *)PTR_DAT_04bb32e8 + 0x4065);
    cVar1 = cVar4 + '\x18';
    if ('\x04' < cVar4) {
      cVar1 = cVar4;
    }
    FUN_0214ca00(&local_4c);
    local_4a = 0x1d;
    lVar6 = param_1 + (ulong)*param_2 * 0xba0;
    if (9 < *param_2) {
      lVar6 = param_1;
    }
    lVar2 = lVar6 + 0x8b0;
    if (*(int *)(lVar6 + 0x930) < *(int *)(lVar6 + 0x948)) {
      pcVar7 = *(char **)(lVar6 + 0x938);
      if (pcVar7 != (char *)0x0) {
        *(undefined8 *)(lVar6 + 0x938) = *(undefined8 *)pcVar7;
      }
      pcVar7[0] = '\0';
      pcVar7[1] = '\0';
      pcVar7[2] = '\0';
      pcVar7[3] = '\0';
      pcVar7[4] = '\0';
      pcVar7[5] = '\0';
      pcVar7[6] = '\0';
      pcVar7[7] = '\0';
      pcVar7[0x18] = '\0';
      pcVar7[0x19] = '\0';
      pcVar7[0x1a] = '\0';
      pcVar7[0x1b] = '\0';
      pcVar7[0x1c] = '\0';
      pcVar7[0x1d] = '\0';
      pcVar7[0x1e] = '\0';
      pcVar7[0x1f] = '\0';
      *pcVar7 = cVar1;
      pcVar7[1] = cVar3;
      pcVar7[2] = '\x1d';
      pcVar7[3] = '\0';
      *(undefined4 *)(pcVar7 + 4) = local_48;
      pcVar7[8] = local_44;
      pcVar7[9] = local_43;
      pcVar11 = pcVar7 + 0x10;
      pcVar11[0] = '\0';
      pcVar11[1] = '\0';
      pcVar11[2] = '\0';
      pcVar11[3] = '\0';
      pcVar11[4] = '\0';
      pcVar11[5] = '\0';
      pcVar11[6] = '\0';
      pcVar11[7] = '\0';
      pcVar7[10] = local_42;
      puVar14 = *(undefined8 **)(lVar6 + 0x928);
      *(char **)(lVar6 + 0x928) = pcVar11;
      *(long **)pcVar11 = (long *)(lVar6 + 0x920);
      *(undefined8 **)(pcVar7 + 0x18) = puVar14;
      if (puVar14 != (undefined8 *)0x0) {
        *puVar14 = pcVar11;
      }
      *(int *)(lVar6 + 0x930) = *(int *)(lVar6 + 0x930) + 1;
    }
    if (*(long *)(lVar6 + 0xaa0) == 0) {
      uVar5 = 0x22;
    }
    else {
      uVar5 = *(undefined4 *)(*(long *)(lVar6 + 0xaa0) + 4);
    }
    *(undefined4 *)(lVar6 + 0xaac) = uVar5;
    *(undefined8 *)(lVar6 + 0xaa0) = 0;
    local_4c = cVar1;
    local_4b = cVar3;
    FUN_0214d220(lVar2);
    *(undefined1 *)(lVar6 + 0xae6) = 1;
    FUN_0214d690(lVar2,*param_2,0,0);
    plVar15 = *(long **)(lVar6 + 0xaa0);
    if ((plVar15 != (long *)0x0) && (*(int *)((long)plVar15 + 4) != 1)) {
      lVar6 = param_1 + (ulong)*param_2 * 0xba0;
      if (9 < *param_2) {
        lVar6 = param_1;
      }
      if (DAT_055c1b60 != &DAT_055c1b58) {
        iVar13 = *(int *)(lVar6 + 0xb00);
        uVar10 = 0;
        puVar14 = DAT_055c1b60;
        do {
          if (*(int *)(puVar14 + -1) == iVar13) {
            if (uVar10 == 0xffff) break;
            puVar8 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)uVar10 & 0xffffffffU) * 8);
            if ((uVar10 & 0xff00) != 0) {
              puVar8 = (uint *)PTR_DAT_04bc39f8;
            }
            if ((*puVar8 >> 7 & 1) == 0) {
              puVar8 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)uVar10 & 0xffffffffU) * 8);
              if ((uVar10 & 0xff00) != 0) {
                puVar8 = (uint *)PTR_DAT_04bc39f8;
              }
              if ((*puVar8 >> 0x13 & 1) == 0) {
                if (iVar13 == -0x6e1ed560) {
                  local_24 = 6;
                }
                else {
                  if (iVar13 != -0x75e80b7c) break;
                  local_24 = 5;
                }
              }
              else {
                local_24 = 4;
              }
            }
            else {
              local_24 = 2;
            }
            FUN_021dafb0(param_2,&local_24,0,0,1,1);
            return 1;
          }
          puVar14 = (undefined8 *)puVar14[1];
          uVar10 = uVar10 + 1;
        } while (puVar14 != &DAT_055c1b58);
      }
      local_24 = 7;
      FUN_021dafb0(param_2,&local_24,0,0,0,1);
      lVar6 = param_1 + (ulong)*param_2 * 0xba0;
      if (9 < *param_2) {
        lVar6 = param_1;
      }
      *(undefined4 *)(lVar6 + 0x6e0) = 1;
      return 1;
    }
    plVar9 = *(long **)(lVar6 + 0x928);
    if (plVar9 != (long *)(lVar6 + 0x920)) {
      plVar12 = plVar9 + -2;
      do {
        if (*(int *)((long)plVar12 + 4) == 5) {
          if (plVar15 == plVar12) {
            FUN_0214eb90(lVar2,*param_2,1);
            return 0;
          }
          if (*plVar9 != 0) {
            *(long *)(*plVar9 + 8) = plVar9[1];
          }
          if ((long *)plVar9[1] != (long *)0x0) {
            *(long *)plVar9[1] = *plVar9;
          }
          *plVar9 = 0;
          plVar9[1] = 0;
          *(int *)(lVar6 + 0x930) = *(int *)(lVar6 + 0x930) + -1;
          *plVar12 = *(long *)(lVar6 + 0x938);
          *(long **)(lVar6 + 0x938) = plVar12;
          return 0;
        }
        plVar9 = (long *)plVar9[1];
        plVar12 = plVar9 + -2;
      } while (plVar12 != (long *)(lVar6 + 0x910));
    }
  }
  return 0;
}

