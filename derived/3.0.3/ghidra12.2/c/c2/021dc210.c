
void FUN_021dc210(int *param_1,int *param_2,byte param_3,ulong param_4)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  int *piVar4;
  int *piVar5;
  uint *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 *puVar12;
  byte bVar13;
  short sVar14;
  long lVar15;
  uint uVar16;
  uint local_8c;
  char local_88;
  undefined1 local_87;
  undefined2 local_86;
  uint local_84;
  undefined8 local_80;
  long lStack_78;
  undefined8 local_70;
  undefined1 local_65;
  
  uVar1 = *param_1 + 0x51;
  local_80 = (undefined *)CONCAT44(local_80._4_4_,uVar1);
  pbVar3 = DAT_053e5c10 + (ulong)uVar1 * 0x15;
  if (0x6c < uVar1) {
    pbVar3 = DAT_053e5c10;
  }
  lVar8 = FUN_016c91a4();
  lVar9 = FUN_021c9770(*param_1,1);
  if (lVar8 == 0) {
    return;
  }
  if (lVar9 == 0) {
    return;
  }
  lVar15 = *(long *)(lVar8 + 0x28);
  if (lVar15 == 0) {
    local_8c = 0;
  }
  else {
    if (*(undefined8 **)(lVar15 + 0x10) == (undefined8 *)0x0) {
      local_8c = 0;
      plVar10 = *(long **)(lVar15 + 0x20);
    }
    else {
      local_8c = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
      if (*(long *)(lVar8 + 0x28) == 0) goto LAB_021dc2f4;
      plVar10 = *(long **)(*(long *)(lVar8 + 0x28) + 0x20);
    }
    if (plVar10 != (long *)0x0) {
      local_80 = *(undefined **)(lVar8 + 8);
      lStack_78 = *(long *)(lVar8 + 0x10);
      local_70 = 0x1638;
      (**(code **)(*plVar10 + 0x20))(plVar10,&local_80);
    }
  }
LAB_021dc2f4:
  uVar2 = (uint)pbVar3[4] | (pbVar3[5] & 3) << 8;
  if (0x1ff < uVar2) {
    uVar2 = uVar2 | 0xfffffc00;
  }
  uVar16 = 0xffffffff;
  switch(*param_2) {
  case 0:
    if (DAT_055c1b60 != &DAT_055c1b58) {
      sVar14 = 0;
      puVar12 = DAT_055c1b60;
      do {
        if (*(int *)(puVar12 + -1) == 0x6622bd46) goto LAB_021dc528;
        puVar12 = (undefined8 *)puVar12[1];
        sVar14 = sVar14 + 1;
      } while (puVar12 != &DAT_055c1b58);
    }
    break;
  default:
    goto switchD_021dc330_caseD_1;
  case 4:
    if (DAT_055c1b60 != &DAT_055c1b58) {
      sVar14 = 0;
      puVar12 = DAT_055c1b60;
      do {
        if (*(int *)(puVar12 + -1) == *(int *)(lVar9 + 0x1f8)) goto LAB_021dc528;
        puVar12 = (undefined8 *)puVar12[1];
        sVar14 = sVar14 + 1;
      } while (puVar12 != &DAT_055c1b58);
    }
    break;
  case 5:
    if (DAT_055c1b60 != &DAT_055c1b58) {
      sVar14 = 0;
      puVar12 = DAT_055c1b60;
      do {
        if (*(int *)(puVar12 + -1) == -0x75e80b7c) goto LAB_021dc528;
        puVar12 = (undefined8 *)puVar12[1];
        sVar14 = sVar14 + 1;
      } while (puVar12 != &DAT_055c1b58);
    }
    break;
  case 6:
    if (DAT_055c1b60 != &DAT_055c1b58) {
      sVar14 = 0;
      puVar12 = DAT_055c1b60;
      do {
        if (*(int *)(puVar12 + -1) == -0x6e1ed560) goto LAB_021dc528;
        puVar12 = (undefined8 *)puVar12[1];
        sVar14 = sVar14 + 1;
      } while (puVar12 != &DAT_055c1b58);
    }
    break;
  case 7:
    goto switchD_021dc330_caseD_7;
  case 8:
    local_88 = '\0';
    local_84 = 0xffffffff;
    lStack_78 = (long)&local_70 + 4;
    local_65 = 0;
    local_70 = CONCAT35(local_70._5_3_,8);
    local_80 = PTR_DAT_04bb3768 + 0x10;
    uVar11 = FUN_021d62e0(&local_80,*param_1);
    if (((uVar11 & 1) != 0) && (uVar11 = FUN_016d0eb0(&local_88,&local_80,0), (uVar11 & 1) != 0)) {
      piVar4 = &DAT_04058820;
      if (local_88 != '\0') {
        piVar4 = &DAT_04057780;
      }
      piVar5 = piVar4 + local_84;
      if (7 < local_84) {
        piVar5 = piVar4;
      }
      if (DAT_055c1b60 != &DAT_055c1b58) {
        sVar14 = 0;
        puVar12 = DAT_055c1b60;
        do {
          if (*(int *)(puVar12 + -1) == *piVar5) goto LAB_021dc528;
          puVar12 = (undefined8 *)puVar12[1];
          sVar14 = sVar14 + 1;
        } while (puVar12 != &DAT_055c1b58);
      }
      break;
    }
    goto switchD_021dc330_caseD_7;
  }
  sVar14 = -1;
LAB_021dc528:
  uVar16 = (uint)sVar14;
switchD_021dc330_caseD_7:
  if (*param_2 != 0) {
    *(undefined4 *)(lVar9 + 0x11c) = 0;
    local_80 = (undefined *)((ulong)local_80 & 0xffffffff00000000);
    *(byte *)(lVar9 + 0x118) = *(byte *)(lVar9 + 0x118) & 0xfe;
  }
  puVar7 = PTR_DAT_04bb5018;
  if (uVar16 != uVar2) {
    pbVar3[4] = 0xff;
    bVar13 = *puVar7;
    pbVar3[8] = pbVar3[8] & 0xc0;
    pbVar3[0xb] = pbVar3[0xb] & 0x3f;
    pbVar3[7] = bVar13 >> 6 | 4;
    pbVar3[5] = bVar13 << 2 | 3;
    pbVar3[6] = bVar13 >> 6 | bVar13 << 2;
    pbVar3[0xc] = pbVar3[0xc] & 0xfc;
  }
  puVar7 = PTR_DAT_04bb4760;
  if ((*(long *)(lVar8 + 0x28) != 0) &&
     (plVar10 = *(long **)(*(long *)(lVar8 + 0x28) + 0x20), plVar10 != (long *)0x0)) {
    local_80 = *(undefined **)(lVar8 + 8);
    lStack_78 = *(long *)(lVar8 + 0x10);
    local_70 = 0x1638;
    (**(code **)(*plVar10 + 0x20))(plVar10,&local_80);
  }
  *(int *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8) + 0x1630) = *param_2;
  if ((param_4 & 1) != 0) {
    local_86 = (undefined2)uVar16;
    local_84 = CONCAT31(local_84._1_3_,param_3) & 0xffffff01;
    uVar11 = (ulong)local_80 >> 0x30;
    local_87 = (undefined1)*param_2;
    local_88 = (char)*param_1;
    local_80 = (undefined *)CONCAT26((ushort)uVar11 & 0xff00,0xff0000000000);
    if (-1 < DAT_053d10d0) {
      FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d10d0,&local_80,&local_88,6,0);
    }
  }
  if (uVar16 == 0xffffffff) {
LAB_021dc6f0:
    uVar16 = 0xff;
    bVar13 = 0xff;
  }
  else {
    local_80 = (undefined *)CONCAT44(local_80._4_4_,3);
    puVar6 = (uint *)(PTR_DAT_04bc39f8 + (ulong)uVar16 * 8);
    if (0xff < uVar16) {
      puVar6 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar6 >> 3 & 1) != 0) {
      if (DAT_055c1b60 != &DAT_055c1b58) {
        uVar16 = 0;
        puVar12 = DAT_055c1b60;
        do {
          if (*(int *)(puVar12 + -1) == 0x6622bd46) {
            bVar13 = (byte)(uVar16 >> 8);
            goto LAB_021dc700;
          }
          puVar12 = (undefined8 *)puVar12[1];
          uVar16 = uVar16 + 1;
        } while (puVar12 != &DAT_055c1b58);
      }
      goto LAB_021dc6f0;
    }
    bVar13 = (byte)(uVar16 >> 8);
  }
LAB_021dc700:
  pbVar3[4] = (byte)uVar16;
  pbVar3[5] = pbVar3[5] & 0xfc | bVar13 & 3;
  FUN_020ea498(*(undefined8 *)puVar7,uVar1,0,0);
  if (DAT_0537fc68 != 0) {
    uVar1 = (uint)*pbVar3 | (pbVar3[1] & 0xf) << 8;
    lVar15 = DAT_0537fc68 + (long)*param_1 * 6;
    if ((pbVar3[1] & 8) != 0) {
      uVar1 = uVar1 | 0xfffff000;
    }
    bVar13 = (byte)((uint)(int)(float)(int)uVar1 >> 8);
    *(char *)(lVar15 + 0x70) = (char)(int)(float)(int)uVar1;
    *(byte *)(lVar15 + 0x71) = *(byte *)(lVar15 + 0x71) & 0xf0 | bVar13 & 0xf;
    uVar2 = (uint)(pbVar3[1] >> 4) | (uint)pbVar3[2] << 4;
    uVar1 = uVar2 | 0xfffff000;
    if (-1 < (char)pbVar3[2]) {
      uVar1 = uVar2;
    }
    *(char *)(lVar15 + 0x72) = (char)((uint)(int)(float)(int)uVar1 >> 4);
    *(byte *)(lVar15 + 0x71) = bVar13 & 0xf | (byte)((int)(float)(int)uVar1 << 4);
    *(byte *)(lVar15 + 0x73) = pbVar3[3];
    bVar13 = pbVar3[5];
    *(byte *)(lVar15 + 0x74) = pbVar3[4];
    *(byte *)(lVar15 + 0x75) = *(byte *)(lVar15 + 0x75) & 0xfc | bVar13 & 3;
    local_80 = (undefined *)(CONCAT44(local_80._4_4_,(uint)(pbVar3[7] >> 2)) & 0xffffffff00000003);
    *(byte *)(lVar15 + 0x75) = (byte)((int)local_80 << 2) | *(byte *)(lVar15 + 0x75) & 0xf3;
  }
  if ((param_3 & 1) == 0) {
switchD_021dc824_caseD_7:
    if (*(char *)(lVar9 + 0x6c) != '\0') {
      *(undefined1 *)(lVar9 + 0x6c) = 0;
    }
  }
  else {
    switch(*param_2) {
    case 0:
      if (*(char *)(lVar9 + 0x6c) == '\0') {
        *(undefined1 *)(lVar9 + 0x6c) = 1;
      }
      *(undefined4 *)(lVar9 + 0x68) = 0;
      break;
    default:
      if (*(char *)(lVar9 + 0x6c) == '\0') {
        *(undefined1 *)(lVar9 + 0x6c) = 1;
      }
      *(undefined4 *)(lVar9 + 0x68) = 1;
      break;
    case 4:
      if (*(char *)(lVar9 + 0x6c) == '\0') {
        *(undefined1 *)(lVar9 + 0x6c) = 1;
      }
      *(undefined4 *)(lVar9 + 0x1f8) = *(undefined4 *)(lVar9 + 0x1f8);
      *(undefined4 *)(lVar9 + 0x68) = 2;
      *(undefined4 *)(lVar9 + 0x1fc) = 2;
      break;
    case 5:
      if (*(char *)(lVar9 + 0x6c) == '\0') {
        *(undefined1 *)(lVar9 + 0x6c) = 1;
      }
      *(undefined4 *)(lVar9 + 0x68) = 2;
      *(undefined8 *)(lVar9 + 0x1f8) = 0x8a17f484;
      break;
    case 6:
      if (*(char *)(lVar9 + 0x6c) == '\0') {
        *(undefined1 *)(lVar9 + 0x6c) = 1;
      }
      *(undefined4 *)(lVar9 + 0x68) = 2;
      *(undefined8 *)(lVar9 + 0x1f8) = 0x591e12aa0;
      break;
    case 7:
      goto switchD_021dc824_caseD_7;
    }
  }
switchD_021dc330_caseD_1:
  if ((((local_8c & 1) != 0) && (*(long *)(lVar8 + 0x28) != 0)) &&
     (puVar12 = *(undefined8 **)(*(long *)(lVar8 + 0x28) + 0x18), puVar12 != (undefined8 *)0x0)) {
    (**(code **)*puVar12)();
  }
  return;
}

