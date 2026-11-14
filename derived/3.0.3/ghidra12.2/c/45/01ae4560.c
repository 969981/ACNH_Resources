
uint FUN_01ae4560(long param_1,int param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *__s;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  uint *puVar7;
  int *piVar8;
  uint uVar9;
  ulong uVar10;
  uint *puVar11;
  char cVar12;
  
  iVar3 = FUN_01afcfa0();
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
      uVar9 = *(uint *)(__s + 0x120);
      uVar10 = (ulong)uVar9;
      if (-1 < (int)uVar9) {
        if ((short *)(uVar10 + (long)puVar11) == (short *)0x0) {
          return 0;
        }
        if (*(short *)(uVar10 + (long)puVar11) == -1) {
          return 0;
        }
        puVar11 = *(uint **)(param_1 + 0x10);
        if ((puVar11 == (uint *)0x0) || (*puVar11 == 0)) goto LAB_01ae4734;
        break;
      }
      if (uVar9 != 0xffffffff) {
        return 0;
      }
    }
    puVar7 = (uint *)(ulong)*puVar11;
    if (*puVar11 == 0) {
      return 0;
    }
    if (puVar11 == puVar7) {
      return 0;
    }
    lVar4 = 0xc;
    if (*(char *)((long)puVar11 + (10 - (long)puVar7)) != '\0') {
      lVar4 = 0x1c;
    }
    lVar4 = (long)puVar11 + (lVar4 - (long)puVar7);
    if (lVar4 == 0) {
      return 0;
    }
    uVar10 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar7));
    *(undefined4 *)(__s + 0x120) = 0xfffffffe;
    if (uVar10 == 0) {
      return 0;
    }
    piVar8 = (int *)(lVar4 + 4);
    while (piVar8[-1] != -0x34a14cc1) {
      piVar8 = piVar8 + 2;
      uVar10 = uVar10 - 1;
      if (uVar10 == 0) {
        return 0;
      }
    }
    iVar3 = 0;
    if (*piVar8 != -1) {
      iVar3 = *piVar8;
    }
    *(int *)(__s + 0x120) = iVar3;
    if (*puVar11 == 0) {
      return 0;
    }
  } while( true );
LAB_01ae46a0:
  if ((int)uVar10 < 0) {
    if ((int)uVar10 != -1) goto LAB_01ae4734;
    puVar7 = (uint *)(ulong)*puVar11;
    uVar9 = 0xffff;
    if ((*puVar11 == 0) || (puVar11 == puVar7)) goto LAB_01ae4738;
    lVar4 = 0xc;
    if (*(char *)((long)puVar11 + (10 - (long)puVar7)) != '\0') {
      lVar4 = 0x1c;
    }
    lVar4 = (long)puVar11 + (lVar4 - (long)puVar7);
    if (lVar4 == 0) goto LAB_01ae4734;
    uVar10 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar7));
    *(undefined4 *)(__s + 0x120) = 0xfffffffe;
    if (uVar10 == 0) goto LAB_01ae4734;
    puVar7 = (uint *)(lVar4 + 4);
    while (puVar7[-1] != 0xcb5eb33f) {
      puVar7 = puVar7 + 2;
      uVar10 = uVar10 - 1;
      if (uVar10 == 0) goto LAB_01ae4734;
    }
    uVar1 = 0;
    if (*puVar7 != 0xffffffff) {
      uVar1 = *puVar7;
    }
    uVar10 = (ulong)uVar1;
    uVar9 = 0xffff;
    *(uint *)(__s + 0x120) = uVar1;
    if (*puVar11 == 0) goto LAB_01ae4738;
    goto LAB_01ae46a0;
  }
  if ((ushort *)((long)puVar11 + uVar10) == (ushort *)0x0) {
LAB_01ae4734:
    uVar9 = 0xffff;
  }
  else {
    uVar9 = (uint)*(ushort *)((long)puVar11 + uVar10);
  }
LAB_01ae4738:
  uVar9 = uVar9 - *(ushort *)(DAT_0532a7c8 + 0x1f8);
  if (uVar9 < *(uint *)(DAT_0532a7c8 + 0x1d8)) {
    lVar4 = *(long *)(*(long *)(DAT_0532a7c8 + 0x1e0) + (long)(int)uVar9 * 8);
    if (lVar4 == 0) {
      return 0;
    }
    switch(param_2) {
    case 0:
      uVar5 = 9;
      puVar6 = (undefined1 *)0x9938d8a6;
      break;
    case 1:
      uVar5 = 10;
      puVar6 = (undefined1 *)0x20c3034e;
      break;
    case 2:
      uVar5 = 0xb;
      puVar6 = (undefined1 *)0x31be6937;
      break;
    case 3:
      puVar6 = (undefined1 *)0x8845b2df;
      uVar5 = 0xc;
      break;
    case 4:
      uVar5 = 0xd;
      puVar6 = (undefined1 *)0x1344bdc5;
      break;
    case 5:
      puVar6 = (undefined1 *)0xaabf662d;
      uVar5 = 0xe;
      break;
    case 6:
      puVar6 = (undefined1 *)0xbbc20c54;
      uVar5 = 0xf;
      break;
    case 7:
      puVar6 = &LAB_0239d7bc;
      uVar5 = 0x10;
      break;
    default:
      goto switchD_01ae4780_default;
    }
    puVar11 = (uint *)FUN_01a61680(lVar4,uVar5,puVar6,0);
    if (puVar11 == (uint *)0x0) {
      return 0;
    }
    if (*puVar11 < 0xb) {
      return *puVar11;
    }
  }
switchD_01ae4780_default:
  return 0;
}

