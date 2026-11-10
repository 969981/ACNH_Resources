
void FUN_002a1824(undefined8 param_1,long *param_2)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  byte *pbVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  ulong uVar18;
  ulong uVar19;
  byte bVar20;
  undefined4 local_178 [4];
  undefined8 local_168;
  undefined8 auStack_158 [21];
  uint local_ac;
  undefined8 local_a8;
  byte *local_a0;
  undefined4 local_98;
  uint local_94;
  undefined1 auStack_90 [16];
  int local_80 [2];
  undefined1 auStack_78 [8];
  int local_70;
  ErrorResultVariant aEStack_6c [4];
  int local_68 [2];
  int in_stack_ffffffffffffffa0;
  undefined1 auStack_58 [8];
  int in_stack_ffffffffffffffc0;
  
  if (*(uint *)(param_2 + 1) == 0) {
    return;
  }
  puVar11 = (undefined1 *)*param_2;
  switch(*puVar11) {
  case 3:
    lVar15 = param_2[2];
    if (lVar15 == 0) {
      return;
    }
    plVar14 = *(long **)(DAT_04c60f48 + 0x70);
    if (plVar14 == (long *)0x0) {
      return;
    }
    if (*(uint *)(param_2 + 1) < 0x13) {
      return;
    }
    pbVar12 = (byte *)*param_2;
    bVar1 = *pbVar12;
    local_94 = (uint)pbVar12[1];
    iVar6 = FUN_00228490(pbVar12 + 2);
    local_98 = FUN_00228490(pbVar12 + 6);
    uVar10 = FUN_00228470(pbVar12 + 10);
    bVar2 = pbVar12[0x12];
    if (*(uint *)(param_2 + 1) < 0x14) {
      uVar9 = 0;
      uVar5 = 0;
      local_a0 = (byte *)0x0;
      bVar20 = 0;
    }
    else {
      if (*(uint *)(param_2 + 1) < 0x1d) {
        return;
      }
      local_a8 = FUN_00228470(pbVar12 + 0x13);
      bVar20 = pbVar12[0x1c];
      local_ac = (uint)(pbVar12[0x1b] != 0);
      uVar5 = (**(code **)(*plVar14 + 0x38))(plVar14);
      if (uVar5 != bVar20) {
        return;
      }
      if (*(uint *)(param_2 + 1) < uVar5 + 0x1d) {
        return;
      }
      local_a0 = pbVar12 + 0x1d;
      uVar9 = local_a8;
      uVar5 = local_ac;
    }
    uVar7 = FUN_0026c89c(DAT_04c603c8);
    FUN_002610a0(local_80,uVar7,&local_70,lVar15);
    if (((local_80[0] == 0) && (bVar2 != 0)) &&
       (iVar6 == *(int *)(DAT_04c60f48 + (ulong)*(byte *)(DAT_04c60f48 + 0x162) * 4 + 0x180))) {
      if ((int)plVar14[0x12] == 0) {
        FUN_002a2628(auStack_90,param_1,local_94,uVar10,local_98,0);
      }
      else {
        if (*(uint *)(plVar14 + 0x13) != (uint)bVar1) {
          return;
        }
        FUN_0029dc34(DAT_04c60f48,bVar2);
        FUN_00295c78(auStack_90,plVar14,local_94,local_98,uVar9,uVar5,local_a0,bVar20,uVar10);
      }
      FUN_00229780(local_80,auStack_90);
    }
    return;
  case 4:
    lVar15 = param_2[2];
    if ((lVar15 != 0) && (*(long *)(DAT_04c60f48 + 0x70) != 0 && 0xe < *(uint *)(param_2 + 1))) {
      lVar16 = *param_2;
      bVar1 = *(byte *)(lVar16 + 1);
      cVar4 = *(char *)(lVar16 + 2);
      iVar6 = FUN_00228490(lVar16 + 3);
      uVar10 = FUN_00228470(lVar16 + 7);
      uVar9 = FUN_0026c89c(*(undefined8 *)PTR_DAT_04bcd350);
      FUN_002610a0(local_68 + 2,uVar9,auStack_58 + 8,lVar15);
      if (in_stack_ffffffffffffffa0 == 0) {
        uVar19 = (ulong)*(byte *)(DAT_04c60f48 + 0x162);
        if (1 < bVar1 - 9) {
          uVar19 = (ulong)((ulong)*(byte *)(DAT_04c60f48 + 0x162) == 0);
        }
        if (iVar6 == *(int *)(DAT_04c60f48 + uVar19 * 4 + 0x180)) {
          FUN_00291b50(*(undefined8 *)(DAT_04c60f48 + 0xb8),uVar10,cVar4 != '\0');
          return;
        }
      }
    }
    return;
  default:
    return;
  case 6:
    break;
  case 7:
  case 9:
  case 0xb:
  case 0x15:
    lVar15 = param_2[2];
    if ((lVar15 != 0) &&
       (lVar16 = *(long *)(DAT_04c60f48 + 0x70), lVar16 != 0 && 10 < *(uint *)(param_2 + 1))) {
      pbVar12 = (byte *)*param_2;
      bVar1 = *pbVar12;
      bVar2 = pbVar12[1];
      bVar20 = pbVar12[2];
      uVar10 = FUN_00228470(pbVar12 + 3);
      uVar9 = FUN_0026c89c(*(undefined8 *)PTR_DAT_04bcd350);
      FUN_002610a0(local_68 + 2,uVar9,auStack_58 + 8,lVar15);
      if ((in_stack_ffffffffffffffa0 == 0) &&
         ((*(uint *)(lVar16 + 0x90) != 0 && *(uint *)(lVar16 + 0x90) == (uint)bVar2) &&
          *(uint *)(lVar16 + 0x98) == (uint)bVar1)) {
        FUN_00291f70(*(undefined8 *)(DAT_04c60f48 + 0xb8),uVar10,bVar20 != 0);
        return;
      }
    }
    return;
  case 8:
    lVar15 = param_2[2];
    if (lVar15 == 0) {
      return;
    }
    lVar16 = *(long *)(DAT_04c60f48 + 0x70);
    if (lVar16 == 0) {
      return;
    }
    if (*(uint *)(param_2 + 1) < 0xb) {
      return;
    }
    puVar11 = (undefined1 *)*param_2;
    uVar3 = *puVar11;
    cVar4 = puVar11[1];
    lVar13 = FUN_00228470(puVar11 + 2);
    bVar1 = puVar11[10];
    uVar19 = (ulong)bVar1;
    if (0x1f < bVar1) {
      return;
    }
    if ((ulong)*(uint *)(param_2 + 1) < uVar19 * 8 + 0xb) {
      return;
    }
    local_70 = 0;
    local_168._0_4_ = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_6c,(Result *)&local_168);
    if (cVar4 != '\t') {
      return;
    }
    if (*(char *)(lVar16 + 0xfb) != '\0') {
      return;
    }
    iVar6 = *(int *)(lVar16 + 0x90);
    if (iVar6 - 9U < 2) {
      lVar15 = FUN_0029bf00(DAT_04c60f48);
      if (lVar15 != lVar13) {
        return;
      }
      FUN_002a2984(&local_168,param_1,9,9,lVar13,1);
      piVar8 = &local_70;
LAB_002a2164:
      FUN_00229780(piVar8,&local_168);
    }
    else {
      if (iVar6 == 0) {
        if (lVar13 == lVar15) {
          if (bVar1 != 0) {
            puVar11 = puVar11 + 0xb;
            puVar17 = &local_168;
            do {
              uVar10 = FUN_00228470(puVar11);
              puVar11 = puVar11 + 8;
              uVar19 = uVar19 - 1;
              *puVar17 = uVar10;
              puVar17 = puVar17 + 1;
            } while (uVar19 != 0);
          }
          FUN_0029596c(local_178,lVar16,9,uVar3,&local_168,bVar1,lVar15);
          FUN_00229780(&local_70,local_178);
          if (local_70 == 0) {
            FUN_002211bc(lVar16,0);
            return;
          }
          iVar6 = *(int *)(lVar16 + 0x90);
          goto LAB_002a2138;
        }
      }
      else {
LAB_002a2138:
        if (iVar6 != 0) {
          local_178[0] = 0;
          local_168._0_4_ = 0x6c59;
          nn::err::ErrorResultVariant::ErrorResultVariant
                    ((ErrorResultVariant *)((long)&local_168 + 4),(Result *)local_178);
          piVar8 = (int *)(lVar16 + 0x100);
          *(undefined1 *)(lVar16 + 0xfb) = 1;
          goto LAB_002a2164;
        }
      }
      uVar19 = FUN_0029c668(DAT_04c60f48);
      if ((uVar19 & 1) == 0) {
        FUN_0029d938(DAT_04c60f48);
      }
      else {
        FUN_0029ca08();
      }
    }
    return;
  case 10:
    if (((param_2[2] != 0) && (lVar15 = *(long *)(DAT_04c60f48 + 0x70), lVar15 != 0)) &&
       (10 < *(uint *)(param_2 + 1))) {
      pbVar12 = (byte *)*param_2;
      bVar1 = *pbVar12;
      bVar2 = pbVar12[1];
      lVar16 = FUN_00228470(pbVar12 + 2);
      bVar20 = pbVar12[10];
      uVar19 = (ulong)bVar20;
      if ((bVar20 < 0x20) && (uVar19 * 8 + 0xb <= (ulong)*(uint *)(param_2 + 1))) {
        if (bVar20 != 0) {
          pbVar12 = pbVar12 + 0xb;
          puVar17 = auStack_158;
          uVar18 = uVar19;
          do {
            uVar10 = FUN_00228470(pbVar12);
            pbVar12 = pbVar12 + 8;
            uVar18 = uVar18 - 1;
            *puVar17 = uVar10;
            puVar17 = puVar17 + 1;
          } while (uVar18 != 0);
        }
        if (((*(char *)(lVar15 + 0xfb) == '\0') && (*(uint *)(lVar15 + 0x90) != 0)) &&
           ((*(uint *)(lVar15 + 0x90) == (uint)bVar2 &&
            ((*(long *)(lVar15 + 0xa0) == lVar16 && (*(uint *)(lVar15 + 0x98) == (uint)bVar1)))))) {
          FUN_00295eac(&local_168,lVar15,(uint)bVar2,lVar16);
          if (bVar20 != 0) {
            puVar17 = auStack_158;
            do {
              FUN_00291b50(*(undefined8 *)(DAT_04c60f48 + 0xb8),*puVar17,1);
              uVar19 = uVar19 - 1;
              puVar17 = puVar17 + 1;
            } while (uVar19 != 0);
          }
          FUN_002a2984(local_178,param_1,0xb,bVar2,lVar16,1);
          FUN_00229780(&local_168,local_178);
        }
      }
    }
    return;
  case 0x13:
    lVar15 = param_2[2];
    if ((lVar15 != 0) &&
       (lVar16 = *(long *)(DAT_04c60f48 + 0x70), lVar16 != 0 && 10 < *(uint *)(param_2 + 1))) {
      lVar13 = *param_2;
      uVar3 = *(undefined1 *)(lVar13 + 1);
      cVar4 = *(char *)(lVar13 + 2);
      uVar10 = FUN_00228470(lVar13 + 3);
      uVar9 = FUN_0026c89c(*(undefined8 *)PTR_DAT_04bcd350);
      FUN_002610a0(local_68,uVar9,auStack_58,lVar15);
      if ((local_68[0] == 0) &&
         (FUN_00291eb0(*(undefined8 *)(DAT_04c60f48 + 0xb8),uVar10,cVar4 != '\0'),
         *(char *)(lVar16 + 0xfb) == '\0')) {
        if (*(int *)(lVar16 + 0x90) == 0) {
          iVar6 = FUN_0029b330(DAT_04c60f48);
          if ((iVar6 != 3) && (iVar6 = FUN_0029b330(DAT_04c60f48), iVar6 != 1)) {
            FUN_002a27dc(auStack_78,param_1,uVar3,uVar10);
            return;
          }
        }
        else if (*(char *)(lVar16 + 0xf9) == '\0') {
          return;
        }
        FUN_002a3110(auStack_78,param_1,0x14,uVar3,auStack_58 + 0x10,1,
                     *(undefined8 *)(DAT_04c60f48 + 0xf0),0,0);
        return;
      }
    }
    return;
  case 0x14:
    if (param_2[2] == 0) {
      return;
    }
    if (*(uint *)(param_2 + 1) < 10) {
      return;
    }
    lVar15 = *(long *)(DAT_04c60f48 + 0x70);
    if (lVar15 == 0) {
      return;
    }
    bVar1 = puVar11[1];
    lVar16 = FUN_00228470(puVar11 + 2);
    if (*(char *)(lVar15 + 0xfb) != '\0') {
      return;
    }
    if (*(uint *)(lVar15 + 0x90) == 0 || *(uint *)(lVar15 + 0x90) != (uint)bVar1) {
      return;
    }
    if (*(long *)(lVar15 + 0xa0) != lVar16) {
      return;
    }
    if (*(int *)(lVar15 + 0x98) == 0x14) {
      FUN_00295f6c(auStack_58 + 0x28,lVar15,(uint)bVar1,lVar16);
      return;
    }
    return;
  case 0x16:
    lVar15 = param_2[2];
    if ((lVar15 != 0) &&
       (lVar16 = *(long *)(DAT_04c60f48 + 0x70), lVar16 != 0 && 9 < *(uint *)(param_2 + 1))) {
      FUN_00228470(*param_2 + 2);
      uVar10 = FUN_0026c89c(DAT_04c603c8);
      FUN_002610a0(auStack_58 + 0x18,uVar10,auStack_58 + 0x28,lVar15);
      if ((in_stack_ffffffffffffffc0 == 0) &&
         ((*(char *)(lVar16 + 0xfb) == '\0' && (*(int *)(lVar16 + 0x90) != 0)))) {
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)(auStack_58 + 0xc),(Result *)(auStack_58 + 0x44));
        *(undefined1 *)(lVar16 + 0xfb) = 1;
        FUN_00229780(lVar16 + 0x100,auStack_58 + 8);
        return;
      }
    }
    return;
  }
  lVar15 = param_2[2];
  if (lVar15 == 0) {
    return;
  }
  lVar16 = *(long *)(DAT_04c60f48 + 0x70);
  if (lVar16 == 0) {
    return;
  }
  if (*(uint *)(param_2 + 1) < 0xb) {
    return;
  }
  puVar11 = (undefined1 *)*param_2;
  uVar3 = *puVar11;
  bVar1 = puVar11[1];
  lVar13 = FUN_00228470(puVar11 + 2);
  bVar2 = puVar11[10];
  uVar19 = (ulong)bVar2;
  if (0x1f < bVar2) {
    return;
  }
  if ((ulong)*(uint *)(param_2 + 1) < uVar19 * 8 + 0xb) {
    return;
  }
  local_70 = 0;
  local_168._0_4_ = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_6c,(Result *)&local_168);
  if (*(char *)(lVar16 + 0xfb) != '\0') {
    return;
  }
  if (*(uint *)(lVar16 + 0x90) == 0) {
    if (lVar13 != lVar15) goto LAB_002a1fb8;
    if (bVar2 != 0) {
      puVar11 = puVar11 + 0xb;
      puVar17 = &local_168;
      uVar18 = uVar19;
      do {
        uVar10 = FUN_00228470(puVar11);
        puVar11 = puVar11 + 8;
        uVar18 = uVar18 - 1;
        *puVar17 = uVar10;
        puVar17 = puVar17 + 1;
      } while (uVar18 != 0);
    }
    FUN_0029596c(local_178,lVar16,bVar1,uVar3,&local_168,uVar19,lVar15);
    FUN_00229780(&local_70,local_178);
    if (local_70 == 0) {
      FUN_002211bc(lVar16,0);
      return;
    }
LAB_002a1f60:
    if (*(int *)(lVar16 + 0x90) == 0) {
LAB_002a1fb8:
      uVar19 = FUN_0029c668(DAT_04c60f48);
      if ((uVar19 & 1) == 0) {
        FUN_0029d938(DAT_04c60f48);
        return;
      }
      FUN_0029ca08();
      return;
    }
  }
  else if (*(uint *)(lVar16 + 0x90) == (uint)bVar1) {
    if ((bVar1 == 9) && (*(long *)(lVar16 + 0xa0) == 0)) {
      if (bVar2 != 0) {
        puVar11 = puVar11 + 0xb;
        puVar17 = &local_168;
        uVar18 = uVar19;
        do {
          uVar10 = FUN_00228470(puVar11);
          puVar11 = puVar11 + 8;
          uVar18 = uVar18 - 1;
          *puVar17 = uVar10;
          puVar17 = puVar17 + 1;
        } while (uVar18 != 0);
      }
      FUN_00295dac(local_178,lVar16,9,&local_168,uVar19,lVar13);
      FUN_00229780(&local_70,local_178);
      if (local_70 == 0) {
        return;
      }
    }
    else if (*(long *)(lVar16 + 0xa0) == lVar13) {
      FUN_002a2984(&local_168,param_1,7,bVar1,lVar13,1);
      piVar8 = &local_70;
      goto LAB_002a1f90;
    }
    goto LAB_002a1f60;
  }
  local_178[0] = 0;
  local_168._0_4_ = 0x6c59;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((long)&local_168 + 4),(Result *)local_178);
  piVar8 = (int *)(lVar16 + 0x100);
  *(undefined1 *)(lVar16 + 0xfb) = 1;
LAB_002a1f90:
  FUN_00229780(piVar8,&local_168);
  return;
}

