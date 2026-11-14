
uint FUN_01ae4840(long param_1,int param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *__s;
  int iVar3;
  uint uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint *puVar8;
  int *piVar9;
  ulong uVar10;
  uint *puVar11;
  char cVar12;
  
  iVar3 = FUN_01ad7260();
  __s = PTR_DAT_04bbfe90;
  puVar2 = PTR_DAT_04bbfe88;
  if (iVar3 < param_2) {
    return 0;
  }
  puVar11 = *(uint **)(param_1 + 0x10);
  if (puVar11 == (uint *)0x0) {
    return 0;
  }
  if (*puVar11 == 0) {
    return 0;
  }
  cVar12 = *PTR_DAT_04bbfe88;
  do {
    if (cVar12 == '\0') {
      cVar12 = '\x01';
      *puVar2 = 1;
      memset(__s,0xff,0x1ac);
    }
    else {
      uVar4 = *(uint *)(__s + 0x120);
      uVar10 = (ulong)uVar4;
      if (-1 < (int)uVar4) {
        if ((short *)(uVar10 + (long)puVar11) == (short *)0x0) {
          return 0;
        }
        if (*(short *)(uVar10 + (long)puVar11) == -1) {
          return 0;
        }
        puVar11 = *(uint **)(param_1 + 0x10);
        if ((puVar11 == (uint *)0x0) || (*puVar11 == 0)) goto LAB_01ae4a14;
        break;
      }
      if (uVar4 != 0xffffffff) {
        return 0;
      }
    }
    puVar8 = (uint *)(ulong)*puVar11;
    if (*puVar11 == 0) {
      return 0;
    }
    if (puVar11 == puVar8) {
      return 0;
    }
    lVar5 = 0xc;
    if (*(char *)((long)puVar11 + (10 - (long)puVar8)) != '\0') {
      lVar5 = 0x1c;
    }
    lVar5 = (long)puVar11 + (lVar5 - (long)puVar8);
    if (lVar5 == 0) {
      return 0;
    }
    uVar10 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar8));
    *(undefined4 *)(__s + 0x120) = 0xfffffffe;
    if (uVar10 == 0) {
      return 0;
    }
    piVar9 = (int *)(lVar5 + 4);
    while (piVar9[-1] != -0x34a14cc1) {
      piVar9 = piVar9 + 2;
      uVar10 = uVar10 - 1;
      if (uVar10 == 0) {
        return 0;
      }
    }
    iVar3 = 0;
    if (*piVar9 != -1) {
      iVar3 = *piVar9;
    }
    *(int *)(__s + 0x120) = iVar3;
    if (*puVar11 == 0) {
      return 0;
    }
  } while( true );
LAB_01ae4980:
  if ((int)uVar10 < 0) {
    if ((int)uVar10 != -1) goto LAB_01ae4a14;
    puVar8 = (uint *)(ulong)*puVar11;
    uVar4 = 0xffff;
    if ((*puVar11 == 0) || (puVar11 == puVar8)) goto LAB_01ae4a18;
    lVar5 = 0xc;
    if (*(char *)((long)puVar11 + (10 - (long)puVar8)) != '\0') {
      lVar5 = 0x1c;
    }
    lVar5 = (long)puVar11 + (lVar5 - (long)puVar8);
    if (lVar5 == 0) goto LAB_01ae4a14;
    uVar10 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar8));
    *(undefined4 *)(__s + 0x120) = 0xfffffffe;
    if (uVar10 == 0) goto LAB_01ae4a14;
    puVar8 = (uint *)(lVar5 + 4);
    while (puVar8[-1] != 0xcb5eb33f) {
      puVar8 = puVar8 + 2;
      uVar10 = uVar10 - 1;
      if (uVar10 == 0) goto LAB_01ae4a14;
    }
    uVar1 = 0;
    if (*puVar8 != 0xffffffff) {
      uVar1 = *puVar8;
    }
    uVar10 = (ulong)uVar1;
    uVar4 = 0xffff;
    *(uint *)(__s + 0x120) = uVar1;
    if (*puVar11 == 0) goto LAB_01ae4a18;
    goto LAB_01ae4980;
  }
  if ((ushort *)((long)puVar11 + uVar10) == (ushort *)0x0) {
LAB_01ae4a14:
    uVar4 = 0xffff;
  }
  else {
    uVar4 = (uint)*(ushort *)((long)puVar11 + uVar10);
  }
LAB_01ae4a18:
  uVar4 = uVar4 - *(ushort *)(DAT_0532a7c8 + 0x1f8);
  if (*(uint *)(DAT_0532a7c8 + 0x1d8) <= uVar4) {
    return 0;
  }
  lVar5 = *(long *)(*(long *)(DAT_0532a7c8 + 0x1e0) + (long)(int)uVar4 * 8);
  if (lVar5 == 0) {
    return 0;
  }
  switch(param_2) {
  case 0:
    uVar4 = FUN_03853b94();
    if (*(uint *)PTR_DAT_04bc02e8 <= uVar4) {
      return 0;
    }
    uVar4 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc02e8 + 8) + (long)(int)uVar4 * 2);
    goto LAB_01ae4b08;
  case 1:
    uVar7 = 0x924c8d08;
    uVar6 = 2;
    break;
  case 2:
    uVar7 = 0x8331e771;
    uVar6 = 3;
    break;
  case 3:
    uVar7 = 0x3aca3c99;
    uVar6 = 4;
    break;
  case 4:
    uVar6 = 5;
    uVar7 = 0xa1cb3383;
    break;
  case 5:
    uVar7 = 0x1830e86b;
    uVar6 = 6;
    break;
  case 6:
    uVar7 = 0x94d8212;
    uVar6 = 7;
    break;
  case 7:
    uVar7 = 0xb0b659fa;
    uVar6 = 8;
    break;
  default:
    goto switchD_01ae4a60_default;
  }
  puVar11 = (uint *)FUN_01a61680(lVar5,uVar6,uVar7,0);
  if (puVar11 == (uint *)0x0) {
    return 0;
  }
  uVar4 = *puVar11;
LAB_01ae4b08:
  if (uVar4 < 0xb) {
    return uVar4;
  }
switchD_01ae4a60_default:
  return 0;
}

