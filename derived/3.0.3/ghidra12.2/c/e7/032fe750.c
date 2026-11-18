
void FUN_032fe750(long param_1,void *param_2)

{
  char *pcVar1;
  char *pcVar2;
  long lVar3;
  uint uVar4;
  undefined *puVar5;
  uint uVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  int iVar14;
  
  lVar10 = DAT_05355a60;
  pcVar1 = (char *)(param_1 + 0x16408);
  pcVar2 = (char *)(param_1 + 0x106a);
  memcpy((void *)(param_1 + 0x1050),param_2,0x518);
  uVar6 = 0;
  if (*(uint *)(param_1 + 0x1050) < 10) {
    uVar6 = *(uint *)(param_1 + 0x1050);
  }
  *(uint *)(param_1 + 0x1050) = uVar6;
  *(byte *)(param_1 + 0x16969) = *(byte *)(param_1 + 0x1511) ^ 1;
  if ((uVar6 < 10) && ((1 << (ulong)(uVar6 & 0x1f) & 0x360U) != 0)) {
    iVar7 = 0;
    *(undefined4 *)(param_1 + 0x1404) = 0;
  }
  else {
    iVar7 = *(int *)(param_1 + 0x1404);
  }
  uVar4 = *(uint *)(param_1 + 0x106c);
  *(int *)(param_1 + 0x1568) = iVar7;
  *(int *)(param_1 + 0x156c) = iVar7;
  if ((uVar4 >> 7 & 1) != 0) {
    uVar6 = 2;
    *pcVar2 = '\0';
    *(undefined4 *)(param_1 + 0x1050) = 2;
  }
  if (((iVar7 == 1) && (uVar6 != 1)) && (*pcVar2 != '\0')) {
    *pcVar2 = '\0';
  }
  if (uVar4 == 0) {
LAB_032fe848:
    if ((uVar6 == 2) && (*pcVar2 != '\0')) {
      *pcVar2 = '\0';
    }
    iVar14 = *(int *)(param_1 + 0x1408);
    if (iVar14 == 2) {
      if (uVar6 == 1) goto LAB_032fe870;
      if (uVar6 == 2) {
        if ((*pcVar2 != '\0') || ((iVar14 = 2, *pcVar1 != '\0' && (iVar7 == 0)))) {
          iVar14 = 2;
          *pcVar2 = '\0';
        }
      }
      else {
        iVar14 = 1;
        *(undefined4 *)(param_1 + 0x1408) = 1;
        if (uVar6 - 5 < 5) goto LAB_032fe8f8;
      }
      *pcVar1 = '\0';
LAB_032fe914:
      if (*pcVar2 == '\0') goto LAB_032fe878;
    }
    else {
      if (4 < uVar6 - 5) {
        *pcVar1 = '\0';
        if (uVar6 == 1) goto LAB_032fe878;
        goto LAB_032fe914;
      }
LAB_032fe8f8:
      *pcVar1 = '\0';
      *pcVar2 = '\x01';
      *(uint *)(param_1 + 0x106c) = uVar4 & 0xfffffeff;
    }
  }
  else {
    if (uVar6 != 1) {
      if ((*pcVar2 != '\0') || ((*pcVar1 != '\0' && (iVar7 == 0)))) {
        *pcVar2 = '\0';
      }
      goto LAB_032fe848;
    }
    iVar14 = *(int *)(param_1 + 0x1408);
    if (iVar14 == 2) {
LAB_032fe870:
      iVar14 = 2;
    }
    *pcVar1 = '\0';
LAB_032fe878:
    if (((0 < *(int *)(lVar10 + 0xbe4)) && ((uVar4 >> 7 & 1) == 0)) && (iVar14 != 2)) {
      *pcVar1 = '\x01';
      goto LAB_032fe920;
    }
  }
  *pcVar1 = '\0';
LAB_032fe920:
  lVar10 = param_1 + 0x1570;
  **(undefined2 **)(param_1 + 0x1578) = 0;
  if ((*(byte *)(param_1 + 0x106c) >> 1 & 1) != 0) {
    (**(code **)(*(long *)(param_1 + 0x1570) + 0x18))(lVar10);
    lVar9 = *(long *)(param_1 + 0x1578);
    uVar12 = 0;
    do {
      if (*(short *)(lVar9 + uVar12 * 2) == 0) goto LAB_032fe99c;
      lVar3 = lVar9 + uVar12 * 2;
      if (*(short *)(lVar3 + 2) == 0) {
        uVar12 = uVar12 + 1;
        goto LAB_032fe99c;
      }
      if (*(short *)(lVar3 + 4) == 0) {
        uVar12 = uVar12 + 2;
        goto LAB_032fe99c;
      }
      uVar12 = uVar12 + 3;
    } while (uVar12 != 0x80001);
    uVar12 = 0;
LAB_032fe99c:
    if ((int)uVar12 < *(int *)(param_1 + 0x1580) + -1) {
      *(undefined4 *)
       (lVar9 + (-(uVar12 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar12 & 0xffffffff) << 1)) = 0x20;
    }
    (**(code **)(*(long *)(param_1 + 0x1570) + 0x18))(lVar10);
    lVar9 = *(long *)(param_1 + 0x1578);
    uVar12 = 0;
    do {
      if (*(short *)(lVar9 + uVar12 * 2) == 0) goto LAB_032fea0c;
      lVar3 = lVar9 + uVar12 * 2;
      if (*(short *)(lVar3 + 2) == 0) {
        uVar12 = uVar12 + 1;
        goto LAB_032fea0c;
      }
      if (*(short *)(lVar3 + 4) == 0) {
        uVar12 = uVar12 + 2;
        goto LAB_032fea0c;
      }
      uVar12 = uVar12 + 3;
    } while (uVar12 != 0x80001);
    uVar12 = 0;
LAB_032fea0c:
    if ((int)uVar12 < *(int *)(param_1 + 0x1580) + -1) {
      *(undefined4 *)
       (lVar9 + (-(uVar12 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar12 & 0xffffffff) << 1)) = 0x3000;
    }
  }
  if ((*(byte *)(param_1 + 0x106c) >> 2 & 1) != 0) {
    (**(code **)(*(long *)(param_1 + 0x1570) + 0x18))(lVar10);
    lVar9 = *(long *)(param_1 + 0x1578);
    uVar12 = 0;
    do {
      if (*(short *)(lVar9 + uVar12 * 2) == 0) goto LAB_032fea8c;
      lVar3 = lVar9 + uVar12 * 2;
      if (*(short *)(lVar3 + 2) == 0) {
        uVar12 = uVar12 + 1;
        goto LAB_032fea8c;
      }
      if (*(short *)(lVar3 + 4) == 0) {
        uVar12 = uVar12 + 2;
        goto LAB_032fea8c;
      }
      uVar12 = uVar12 + 3;
    } while (uVar12 != 0x80001);
    uVar12 = 0;
LAB_032fea8c:
    if ((int)uVar12 < *(int *)(param_1 + 0x1580) + -1) {
      *(undefined4 *)
       (lVar9 + (-(uVar12 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar12 & 0xffffffff) << 1)) = 0x40;
    }
    (**(code **)(*(long *)(param_1 + 0x1570) + 0x18))(lVar10);
    lVar9 = *(long *)(param_1 + 0x1578);
    uVar12 = 0;
    do {
      if (*(short *)(lVar9 + uVar12 * 2) == 0) goto LAB_032feafc;
      lVar3 = lVar9 + uVar12 * 2;
      if (*(short *)(lVar3 + 2) == 0) {
        uVar12 = uVar12 + 1;
        goto LAB_032feafc;
      }
      if (*(short *)(lVar3 + 4) == 0) {
        uVar12 = uVar12 + 2;
        goto LAB_032feafc;
      }
      uVar12 = uVar12 + 3;
    } while (uVar12 != 0x80001);
    uVar12 = 0;
LAB_032feafc:
    if ((int)uVar12 < *(int *)(param_1 + 0x1580) + -1) {
      *(undefined4 *)
       (lVar9 + (-(uVar12 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar12 & 0xffffffff) << 1)) = 0xff20;
    }
  }
  if ((*(byte *)(param_1 + 0x106c) >> 3 & 1) != 0) {
    (**(code **)(*(long *)(param_1 + 0x1570) + 0x18))(lVar10);
    lVar9 = *(long *)(param_1 + 0x1578);
    uVar12 = 0;
    do {
      if (*(short *)(lVar9 + uVar12 * 2) == 0) goto LAB_032feb7c;
      lVar3 = lVar9 + uVar12 * 2;
      if (*(short *)(lVar3 + 2) == 0) {
        uVar12 = uVar12 + 1;
        goto LAB_032feb7c;
      }
      if (*(short *)(lVar3 + 4) == 0) {
        uVar12 = uVar12 + 2;
        goto LAB_032feb7c;
      }
      uVar12 = uVar12 + 3;
    } while (uVar12 != 0x80001);
    uVar12 = 0;
LAB_032feb7c:
    if ((int)uVar12 < *(int *)(param_1 + 0x1580) + -1) {
      *(undefined4 *)
       (lVar9 + (-(uVar12 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar12 & 0xffffffff) << 1)) = 0x25;
    }
    (**(code **)(*(long *)(param_1 + 0x1570) + 0x18))(lVar10);
    lVar9 = *(long *)(param_1 + 0x1578);
    uVar12 = 0;
    do {
      if (*(short *)(lVar9 + uVar12 * 2) == 0) goto LAB_032febec;
      lVar3 = lVar9 + uVar12 * 2;
      if (*(short *)(lVar3 + 2) == 0) {
        uVar12 = uVar12 + 1;
        goto LAB_032febec;
      }
      if (*(short *)(lVar3 + 4) == 0) {
        uVar12 = uVar12 + 2;
        goto LAB_032febec;
      }
      uVar12 = uVar12 + 3;
    } while (uVar12 != 0x80001);
    uVar12 = 0;
LAB_032febec:
    if ((int)uVar12 < *(int *)(param_1 + 0x1580) + -1) {
      *(undefined4 *)
       (lVar9 + (-(uVar12 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar12 & 0xffffffff) << 1)) = 0xff05;
    }
  }
  if ((*(byte *)(param_1 + 0x106c) >> 4 & 1) != 0) {
    (**(code **)(*(long *)(param_1 + 0x1570) + 0x18))(lVar10);
    lVar9 = *(long *)(param_1 + 0x1578);
    uVar12 = 0;
    do {
      if (*(short *)(lVar9 + uVar12 * 2) == 0) goto LAB_032fec6c;
      lVar3 = lVar9 + uVar12 * 2;
      if (*(short *)(lVar3 + 2) == 0) {
        uVar12 = uVar12 + 1;
        goto LAB_032fec6c;
      }
      if (*(short *)(lVar3 + 4) == 0) {
        uVar12 = uVar12 + 2;
        goto LAB_032fec6c;
      }
      uVar12 = uVar12 + 3;
    } while (uVar12 != 0x80001);
    uVar12 = 0;
LAB_032fec6c:
    if ((int)uVar12 < *(int *)(param_1 + 0x1580) + -1) {
      *(undefined4 *)
       (lVar9 + (-(uVar12 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar12 & 0xffffffff) << 1)) = 0x2f;
    }
    (**(code **)(*(long *)(param_1 + 0x1570) + 0x18))(lVar10);
    lVar9 = *(long *)(param_1 + 0x1578);
    uVar12 = 0;
    do {
      if (*(short *)(lVar9 + uVar12 * 2) == 0) goto LAB_032fecdc;
      lVar3 = lVar9 + uVar12 * 2;
      if (*(short *)(lVar3 + 2) == 0) {
        uVar12 = uVar12 + 1;
        goto LAB_032fecdc;
      }
      if (*(short *)(lVar3 + 4) == 0) {
        uVar12 = uVar12 + 2;
        goto LAB_032fecdc;
      }
      uVar12 = uVar12 + 3;
    } while (uVar12 != 0x80001);
    uVar12 = 0;
LAB_032fecdc:
    if ((int)uVar12 < *(int *)(param_1 + 0x1580) + -1) {
      *(undefined4 *)
       (lVar9 + (-(uVar12 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar12 & 0xffffffff) << 1)) = 0xff0f;
    }
  }
  if ((*(byte *)(param_1 + 0x106c) >> 5 & 1) != 0) {
    (**(code **)(*(long *)(param_1 + 0x1570) + 0x18))(lVar10);
    lVar9 = *(long *)(param_1 + 0x1578);
    uVar12 = 0;
    do {
      if (*(short *)(lVar9 + uVar12 * 2) == 0) goto LAB_032fed5c;
      lVar3 = lVar9 + uVar12 * 2;
      if (*(short *)(lVar3 + 2) == 0) {
        uVar12 = uVar12 + 1;
        goto LAB_032fed5c;
      }
      if (*(short *)(lVar3 + 4) == 0) {
        uVar12 = uVar12 + 2;
        goto LAB_032fed5c;
      }
      uVar12 = uVar12 + 3;
    } while (uVar12 != 0x80001);
    uVar12 = 0;
LAB_032fed5c:
    if ((int)uVar12 < *(int *)(param_1 + 0x1580) + -1) {
      *(undefined4 *)
       (lVar9 + (-(uVar12 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar12 & 0xffffffff) << 1)) = 0x5c;
    }
    (**(code **)(*(long *)(param_1 + 0x1570) + 0x18))(lVar10);
    lVar9 = *(long *)(param_1 + 0x1578);
    uVar12 = 0;
    do {
      if (*(short *)(lVar9 + uVar12 * 2) == 0) goto LAB_032fedcc;
      lVar3 = lVar9 + uVar12 * 2;
      if (*(short *)(lVar3 + 2) == 0) {
        uVar12 = uVar12 + 1;
        goto LAB_032fedcc;
      }
      if (*(short *)(lVar3 + 4) == 0) {
        uVar12 = uVar12 + 2;
        goto LAB_032fedcc;
      }
      uVar12 = uVar12 + 3;
    } while (uVar12 != 0x80001);
    uVar12 = 0;
LAB_032fedcc:
    if ((int)uVar12 < *(int *)(param_1 + 0x1580) + -1) {
      *(undefined4 *)
       (lVar9 + (-(uVar12 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar12 & 0xffffffff) << 1)) = 0xff3c;
    }
  }
  if ((*(byte *)(param_1 + 0x106c) >> 6 & 1) != 0) {
    (**(code **)(*(long *)(param_1 + 0x1570) + 0x18))(lVar10);
    lVar9 = *(long *)(param_1 + 0x1578);
    uVar12 = 0;
    do {
      if (*(short *)(lVar9 + uVar12 * 2) == 0) goto LAB_032fee4c;
      lVar3 = lVar9 + uVar12 * 2;
      if (*(short *)(lVar3 + 2) == 0) {
        uVar12 = uVar12 + 1;
        goto LAB_032fee4c;
      }
      if (*(short *)(lVar3 + 4) == 0) {
        uVar12 = uVar12 + 2;
        goto LAB_032fee4c;
      }
      uVar12 = uVar12 + 3;
    } while (uVar12 != 0x80001);
    uVar12 = 0;
LAB_032fee4c:
    if ((int)uVar12 < *(int *)(param_1 + 0x1580) + -1) {
      *(undefined4 *)
       (lVar9 + (-(uVar12 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar12 & 0xffffffff) << 1)) = 0x30;
    }
    (**(code **)(*(long *)(param_1 + 0x1570) + 0x18))(lVar10);
    lVar9 = *(long *)(param_1 + 0x1578);
    uVar12 = 0;
    do {
      if (*(short *)(lVar9 + uVar12 * 2) == 0) goto LAB_032feebc;
      lVar3 = lVar9 + uVar12 * 2;
      if (*(short *)(lVar3 + 2) == 0) {
        uVar12 = uVar12 + 1;
        goto LAB_032feebc;
      }
      if (*(short *)(lVar3 + 4) == 0) {
        uVar12 = uVar12 + 2;
        goto LAB_032feebc;
      }
      uVar12 = uVar12 + 3;
    } while (uVar12 != 0x80001);
    uVar12 = 0;
LAB_032feebc:
    if ((int)uVar12 < *(int *)(param_1 + 0x1580) + -1) {
      *(undefined4 *)
       (lVar9 + (-(uVar12 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar12 & 0xffffffff) << 1)) = 0x31;
    }
    (**(code **)(*(long *)(param_1 + 0x1570) + 0x18))(lVar10);
    lVar9 = *(long *)(param_1 + 0x1578);
    uVar12 = 0;
    do {
      if (*(short *)(lVar9 + uVar12 * 2) == 0) goto LAB_032fef2c;
      lVar3 = lVar9 + uVar12 * 2;
      if (*(short *)(lVar3 + 2) == 0) {
        uVar12 = uVar12 + 1;
        goto LAB_032fef2c;
      }
      if (*(short *)(lVar3 + 4) == 0) {
        uVar12 = uVar12 + 2;
        goto LAB_032fef2c;
      }
      uVar12 = uVar12 + 3;
    } while (uVar12 != 0x80001);
    uVar12 = 0;
LAB_032fef2c:
    if ((int)uVar12 < *(int *)(param_1 + 0x1580) + -1) {
      *(undefined4 *)
       (lVar9 + (-(uVar12 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar12 & 0xffffffff) << 1)) = 0x32;
    }
    (**(code **)(*(long *)(param_1 + 0x1570) + 0x18))(lVar10);
    lVar9 = *(long *)(param_1 + 0x1578);
    uVar12 = 0;
    do {
      if (*(short *)(lVar9 + uVar12 * 2) == 0) goto LAB_032fef9c;
      lVar3 = lVar9 + uVar12 * 2;
      if (*(short *)(lVar3 + 2) == 0) {
        uVar12 = uVar12 + 1;
        goto LAB_032fef9c;
      }
      if (*(short *)(lVar3 + 4) == 0) {
        uVar12 = uVar12 + 2;
        goto LAB_032fef9c;
      }
      uVar12 = uVar12 + 3;
    } while (uVar12 != 0x80001);
    uVar12 = 0;
LAB_032fef9c:
    if ((int)uVar12 < *(int *)(param_1 + 0x1580) + -1) {
      *(undefined4 *)
       (lVar9 + (-(uVar12 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar12 & 0xffffffff) << 1)) = 0x33;
    }
    (**(code **)(*(long *)(param_1 + 0x1570) + 0x18))(lVar10);
    lVar9 = *(long *)(param_1 + 0x1578);
    uVar12 = 0;
    do {
      if (*(short *)(lVar9 + uVar12 * 2) == 0) goto LAB_032ff00c;
      lVar3 = lVar9 + uVar12 * 2;
      if (*(short *)(lVar3 + 2) == 0) {
        uVar12 = uVar12 + 1;
        goto LAB_032ff00c;
      }
      if (*(short *)(lVar3 + 4) == 0) {
        uVar12 = uVar12 + 2;
        goto LAB_032ff00c;
      }
      uVar12 = uVar12 + 3;
    } while (uVar12 != 0x80001);
    uVar12 = 0;
LAB_032ff00c:
    if ((int)uVar12 < *(int *)(param_1 + 0x1580) + -1) {
      *(undefined4 *)
       (lVar9 + (-(uVar12 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar12 & 0xffffffff) << 1)) = 0x34;
    }
    (**(code **)(*(long *)(param_1 + 0x1570) + 0x18))(lVar10);
    lVar9 = *(long *)(param_1 + 0x1578);
    uVar12 = 0;
    do {
      if (*(short *)(lVar9 + uVar12 * 2) == 0) goto LAB_032ff07c;
      lVar3 = lVar9 + uVar12 * 2;
      if (*(short *)(lVar3 + 2) == 0) {
        uVar12 = uVar12 + 1;
        goto LAB_032ff07c;
      }
      if (*(short *)(lVar3 + 4) == 0) {
        uVar12 = uVar12 + 2;
        goto LAB_032ff07c;
      }
      uVar12 = uVar12 + 3;
    } while (uVar12 != 0x80001);
    uVar12 = 0;
LAB_032ff07c:
    if ((int)uVar12 < *(int *)(param_1 + 0x1580) + -1) {
      *(undefined4 *)
       (lVar9 + (-(uVar12 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar12 & 0xffffffff) << 1)) = 0x35;
    }
    (**(code **)(*(long *)(param_1 + 0x1570) + 0x18))(lVar10);
    lVar9 = *(long *)(param_1 + 0x1578);
    uVar12 = 0;
    do {
      if (*(short *)(lVar9 + uVar12 * 2) == 0) goto LAB_032ff0ec;
      lVar3 = lVar9 + uVar12 * 2;
      if (*(short *)(lVar3 + 2) == 0) {
        uVar12 = uVar12 + 1;
        goto LAB_032ff0ec;
      }
      if (*(short *)(lVar3 + 4) == 0) {
        uVar12 = uVar12 + 2;
        goto LAB_032ff0ec;
      }
      uVar12 = uVar12 + 3;
    } while (uVar12 != 0x80001);
    uVar12 = 0;
LAB_032ff0ec:
    if ((int)uVar12 < *(int *)(param_1 + 0x1580) + -1) {
      *(undefined4 *)
       (lVar9 + (-(uVar12 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar12 & 0xffffffff) << 1)) = 0x36;
    }
    (**(code **)(*(long *)(param_1 + 0x1570) + 0x18))(lVar10);
    lVar9 = *(long *)(param_1 + 0x1578);
    uVar12 = 0;
    do {
      if (*(short *)(lVar9 + uVar12 * 2) == 0) goto LAB_032ff15c;
      lVar3 = lVar9 + uVar12 * 2;
      if (*(short *)(lVar3 + 2) == 0) {
        uVar12 = uVar12 + 1;
        goto LAB_032ff15c;
      }
      if (*(short *)(lVar3 + 4) == 0) {
        uVar12 = uVar12 + 2;
        goto LAB_032ff15c;
      }
      uVar12 = uVar12 + 3;
    } while (uVar12 != 0x80001);
    uVar12 = 0;
LAB_032ff15c:
    if ((int)uVar12 < *(int *)(param_1 + 0x1580) + -1) {
      *(undefined4 *)
       (lVar9 + (-(uVar12 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar12 & 0xffffffff) << 1)) = 0x37;
    }
    (**(code **)(*(long *)(param_1 + 0x1570) + 0x18))(lVar10);
    lVar9 = *(long *)(param_1 + 0x1578);
    uVar12 = 0;
    do {
      if (*(short *)(lVar9 + uVar12 * 2) == 0) goto LAB_032ff1cc;
      lVar3 = lVar9 + uVar12 * 2;
      if (*(short *)(lVar3 + 2) == 0) {
        uVar12 = uVar12 + 1;
        goto LAB_032ff1cc;
      }
      if (*(short *)(lVar3 + 4) == 0) {
        uVar12 = uVar12 + 2;
        goto LAB_032ff1cc;
      }
      uVar12 = uVar12 + 3;
    } while (uVar12 != 0x80001);
    uVar12 = 0;
LAB_032ff1cc:
    if ((int)uVar12 < *(int *)(param_1 + 0x1580) + -1) {
      *(undefined4 *)
       (lVar9 + (-(uVar12 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar12 & 0xffffffff) << 1)) = 0x38;
    }
    (**(code **)(*(long *)(param_1 + 0x1570) + 0x18))(lVar10);
    lVar9 = *(long *)(param_1 + 0x1578);
    uVar12 = 0;
    do {
      if (*(short *)(lVar9 + uVar12 * 2) == 0) goto LAB_032ff23c;
      lVar3 = lVar9 + uVar12 * 2;
      if (*(short *)(lVar3 + 2) == 0) {
        uVar12 = uVar12 + 1;
        goto LAB_032ff23c;
      }
      if (*(short *)(lVar3 + 4) == 0) {
        uVar12 = uVar12 + 2;
        goto LAB_032ff23c;
      }
      uVar12 = uVar12 + 3;
    } while (uVar12 != 0x80001);
    uVar12 = 0;
LAB_032ff23c:
    if ((int)uVar12 < *(int *)(param_1 + 0x1580) + -1) {
      *(undefined4 *)
       (lVar9 + (-(uVar12 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar12 & 0xffffffff) << 1)) = 0x39;
    }
    (**(code **)(*(long *)(param_1 + 0x1570) + 0x18))(lVar10);
    lVar9 = *(long *)(param_1 + 0x1578);
    uVar12 = 0;
    do {
      if (*(short *)(lVar9 + uVar12 * 2) == 0) goto LAB_032ff2ac;
      lVar3 = lVar9 + uVar12 * 2;
      if (*(short *)(lVar3 + 2) == 0) {
        uVar12 = uVar12 + 1;
        goto LAB_032ff2ac;
      }
      if (*(short *)(lVar3 + 4) == 0) {
        uVar12 = uVar12 + 2;
        goto LAB_032ff2ac;
      }
      uVar12 = uVar12 + 3;
    } while (uVar12 != 0x80001);
    uVar12 = 0;
LAB_032ff2ac:
    if ((int)uVar12 < *(int *)(param_1 + 0x1580) + -1) {
      *(undefined4 *)
       (lVar9 + (-(uVar12 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar12 & 0xffffffff) << 1)) = 0xb9;
    }
    (**(code **)(*(long *)(param_1 + 0x1570) + 0x18))(lVar10);
    lVar9 = *(long *)(param_1 + 0x1578);
    uVar12 = 0;
    do {
      if (*(short *)(lVar9 + uVar12 * 2) == 0) goto LAB_032ff31c;
      lVar3 = lVar9 + uVar12 * 2;
      if (*(short *)(lVar3 + 2) == 0) {
        uVar12 = uVar12 + 1;
        goto LAB_032ff31c;
      }
      if (*(short *)(lVar3 + 4) == 0) {
        uVar12 = uVar12 + 2;
        goto LAB_032ff31c;
      }
      uVar12 = uVar12 + 3;
    } while (uVar12 != 0x80001);
    uVar12 = 0;
LAB_032ff31c:
    if ((int)uVar12 < *(int *)(param_1 + 0x1580) + -1) {
      *(undefined4 *)
       (lVar9 + (-(uVar12 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar12 & 0xffffffff) << 1)) = 0xb2;
    }
    (**(code **)(*(long *)(param_1 + 0x1570) + 0x18))(lVar10);
    lVar9 = *(long *)(param_1 + 0x1578);
    uVar12 = 0;
    do {
      if (*(short *)(lVar9 + uVar12 * 2) == 0) goto LAB_032ff38c;
      lVar3 = lVar9 + uVar12 * 2;
      if (*(short *)(lVar3 + 2) == 0) {
        uVar12 = uVar12 + 1;
        goto LAB_032ff38c;
      }
      if (*(short *)(lVar3 + 4) == 0) {
        uVar12 = uVar12 + 2;
        goto LAB_032ff38c;
      }
      uVar12 = uVar12 + 3;
    } while (uVar12 != 0x80001);
    uVar12 = 0;
LAB_032ff38c:
    if ((int)uVar12 < *(int *)(param_1 + 0x1580) + -1) {
      *(undefined4 *)
       (lVar9 + (-(uVar12 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar12 & 0xffffffff) << 1)) = 0xb3;
    }
    (**(code **)(*(long *)(param_1 + 0x1570) + 0x18))(lVar10);
    lVar9 = *(long *)(param_1 + 0x1578);
    uVar12 = 0;
    do {
      if (*(short *)(lVar9 + uVar12 * 2) == 0) goto LAB_032ff3fc;
      lVar3 = lVar9 + uVar12 * 2;
      if (*(short *)(lVar3 + 2) == 0) {
        uVar12 = uVar12 + 1;
        goto LAB_032ff3fc;
      }
      if (*(short *)(lVar3 + 4) == 0) {
        uVar12 = uVar12 + 2;
        goto LAB_032ff3fc;
      }
      uVar12 = uVar12 + 3;
    } while (uVar12 != 0x80001);
    uVar12 = 0;
LAB_032ff3fc:
    if ((int)uVar12 < *(int *)(param_1 + 0x1580) + -1) {
      *(undefined4 *)
       (lVar9 + (-(uVar12 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar12 & 0xffffffff) << 1)) = 0xff10;
    }
    (**(code **)(*(long *)(param_1 + 0x1570) + 0x18))(lVar10);
    lVar9 = *(long *)(param_1 + 0x1578);
    uVar12 = 0;
    do {
      if (*(short *)(lVar9 + uVar12 * 2) == 0) goto LAB_032ff46c;
      lVar3 = lVar9 + uVar12 * 2;
      if (*(short *)(lVar3 + 2) == 0) {
        uVar12 = uVar12 + 1;
        goto LAB_032ff46c;
      }
      if (*(short *)(lVar3 + 4) == 0) {
        uVar12 = uVar12 + 2;
        goto LAB_032ff46c;
      }
      uVar12 = uVar12 + 3;
    } while (uVar12 != 0x80001);
    uVar12 = 0;
LAB_032ff46c:
    if ((int)uVar12 < *(int *)(param_1 + 0x1580) + -1) {
      *(undefined4 *)
       (lVar9 + (-(uVar12 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar12 & 0xffffffff) << 1)) = 0xff11;
    }
    (**(code **)(*(long *)(param_1 + 0x1570) + 0x18))(lVar10);
    lVar9 = *(long *)(param_1 + 0x1578);
    uVar12 = 0;
    do {
      if (*(short *)(lVar9 + uVar12 * 2) == 0) goto LAB_032ff4dc;
      lVar3 = lVar9 + uVar12 * 2;
      if (*(short *)(lVar3 + 2) == 0) {
        uVar12 = uVar12 + 1;
        goto LAB_032ff4dc;
      }
      if (*(short *)(lVar3 + 4) == 0) {
        uVar12 = uVar12 + 2;
        goto LAB_032ff4dc;
      }
      uVar12 = uVar12 + 3;
    } while (uVar12 != 0x80001);
    uVar12 = 0;
LAB_032ff4dc:
    if ((int)uVar12 < *(int *)(param_1 + 0x1580) + -1) {
      *(undefined4 *)
       (lVar9 + (-(uVar12 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar12 & 0xffffffff) << 1)) = 0xff12;
    }
    (**(code **)(*(long *)(param_1 + 0x1570) + 0x18))(lVar10);
    lVar9 = *(long *)(param_1 + 0x1578);
    uVar12 = 0;
    do {
      if (*(short *)(lVar9 + uVar12 * 2) == 0) goto LAB_032ff54c;
      lVar3 = lVar9 + uVar12 * 2;
      if (*(short *)(lVar3 + 2) == 0) {
        uVar12 = uVar12 + 1;
        goto LAB_032ff54c;
      }
      if (*(short *)(lVar3 + 4) == 0) {
        uVar12 = uVar12 + 2;
        goto LAB_032ff54c;
      }
      uVar12 = uVar12 + 3;
    } while (uVar12 != 0x80001);
    uVar12 = 0;
LAB_032ff54c:
    if ((int)uVar12 < *(int *)(param_1 + 0x1580) + -1) {
      *(undefined4 *)
       (lVar9 + (-(uVar12 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar12 & 0xffffffff) << 1)) = 0xff13;
    }
    (**(code **)(*(long *)(param_1 + 0x1570) + 0x18))(lVar10);
    lVar9 = *(long *)(param_1 + 0x1578);
    uVar12 = 0;
    do {
      if (*(short *)(lVar9 + uVar12 * 2) == 0) goto LAB_032ff5bc;
      lVar3 = lVar9 + uVar12 * 2;
      if (*(short *)(lVar3 + 2) == 0) {
        uVar12 = uVar12 + 1;
        goto LAB_032ff5bc;
      }
      if (*(short *)(lVar3 + 4) == 0) {
        uVar12 = uVar12 + 2;
        goto LAB_032ff5bc;
      }
      uVar12 = uVar12 + 3;
    } while (uVar12 != 0x80001);
    uVar12 = 0;
LAB_032ff5bc:
    if ((int)uVar12 < *(int *)(param_1 + 0x1580) + -1) {
      *(undefined4 *)
       (lVar9 + (-(uVar12 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar12 & 0xffffffff) << 1)) = 0xff14;
    }
    (**(code **)(*(long *)(param_1 + 0x1570) + 0x18))(lVar10);
    lVar9 = *(long *)(param_1 + 0x1578);
    uVar12 = 0;
    do {
      if (*(short *)(lVar9 + uVar12 * 2) == 0) goto LAB_032ff62c;
      lVar3 = lVar9 + uVar12 * 2;
      if (*(short *)(lVar3 + 2) == 0) {
        uVar12 = uVar12 + 1;
        goto LAB_032ff62c;
      }
      if (*(short *)(lVar3 + 4) == 0) {
        uVar12 = uVar12 + 2;
        goto LAB_032ff62c;
      }
      uVar12 = uVar12 + 3;
    } while (uVar12 != 0x80001);
    uVar12 = 0;
LAB_032ff62c:
    if ((int)uVar12 < *(int *)(param_1 + 0x1580) + -1) {
      *(undefined4 *)
       (lVar9 + (-(uVar12 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar12 & 0xffffffff) << 1)) = 0xff15;
    }
    (**(code **)(*(long *)(param_1 + 0x1570) + 0x18))(lVar10);
    lVar9 = *(long *)(param_1 + 0x1578);
    uVar12 = 0;
    do {
      if (*(short *)(lVar9 + uVar12 * 2) == 0) goto LAB_032ff69c;
      lVar3 = lVar9 + uVar12 * 2;
      if (*(short *)(lVar3 + 2) == 0) {
        uVar12 = uVar12 + 1;
        goto LAB_032ff69c;
      }
      if (*(short *)(lVar3 + 4) == 0) {
        uVar12 = uVar12 + 2;
        goto LAB_032ff69c;
      }
      uVar12 = uVar12 + 3;
    } while (uVar12 != 0x80001);
    uVar12 = 0;
LAB_032ff69c:
    if ((int)uVar12 < *(int *)(param_1 + 0x1580) + -1) {
      *(undefined4 *)
       (lVar9 + (-(uVar12 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar12 & 0xffffffff) << 1)) = 0xff16;
    }
    (**(code **)(*(long *)(param_1 + 0x1570) + 0x18))(lVar10);
    lVar9 = *(long *)(param_1 + 0x1578);
    uVar12 = 0;
    do {
      if (*(short *)(lVar9 + uVar12 * 2) == 0) goto LAB_032ff70c;
      lVar3 = lVar9 + uVar12 * 2;
      if (*(short *)(lVar3 + 2) == 0) {
        uVar12 = uVar12 + 1;
        goto LAB_032ff70c;
      }
      if (*(short *)(lVar3 + 4) == 0) {
        uVar12 = uVar12 + 2;
        goto LAB_032ff70c;
      }
      uVar12 = uVar12 + 3;
    } while (uVar12 != 0x80001);
    uVar12 = 0;
LAB_032ff70c:
    if ((int)uVar12 < *(int *)(param_1 + 0x1580) + -1) {
      *(undefined4 *)
       (lVar9 + (-(uVar12 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar12 & 0xffffffff) << 1)) = 0xff17;
    }
    (**(code **)(*(long *)(param_1 + 0x1570) + 0x18))(lVar10);
    lVar9 = *(long *)(param_1 + 0x1578);
    uVar12 = 0;
    do {
      if (*(short *)(lVar9 + uVar12 * 2) == 0) goto LAB_032ff77c;
      lVar3 = lVar9 + uVar12 * 2;
      if (*(short *)(lVar3 + 2) == 0) {
        uVar12 = uVar12 + 1;
        goto LAB_032ff77c;
      }
      if (*(short *)(lVar3 + 4) == 0) {
        uVar12 = uVar12 + 2;
        goto LAB_032ff77c;
      }
      uVar12 = uVar12 + 3;
    } while (uVar12 != 0x80001);
    uVar12 = 0;
LAB_032ff77c:
    if ((int)uVar12 < *(int *)(param_1 + 0x1580) + -1) {
      *(undefined4 *)
       (lVar9 + (-(uVar12 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar12 & 0xffffffff) << 1)) = 0xff18;
    }
    (**(code **)(*(long *)(param_1 + 0x1570) + 0x18))(lVar10);
    lVar10 = *(long *)(param_1 + 0x1578);
    uVar12 = 0;
    do {
      if (*(short *)(lVar10 + uVar12 * 2) == 0) goto LAB_032ff7ec;
      lVar9 = lVar10 + uVar12 * 2;
      if (*(short *)(lVar9 + 2) == 0) {
        uVar12 = uVar12 + 1;
        goto LAB_032ff7ec;
      }
      if (*(short *)(lVar9 + 4) == 0) {
        uVar12 = uVar12 + 2;
        goto LAB_032ff7ec;
      }
      uVar12 = uVar12 + 3;
    } while (uVar12 != 0x80001);
    uVar12 = 0;
LAB_032ff7ec:
    if ((int)uVar12 < *(int *)(param_1 + 0x1580) + -1) {
      *(undefined4 *)
       (lVar10 + (-(uVar12 >> 0x1f & 1) & 0xfffffffe00000000 | (uVar12 & 0xffffffff) << 1)) = 0xff19
      ;
    }
  }
  *(undefined4 *)(param_1 + 0x1b18) = 0;
  *(undefined1 *)(param_1 + 0x16409) = *(undefined1 *)(param_1 + 0x140d);
  puVar5 = PTR_DAT_04bc92f0;
  uVar6 = (**(code **)(**(long **)PTR_DAT_04bc92f0 + 0x18))();
  if (uVar6 < 0xc) {
    uVar6 = *(uint *)(&DAT_0418d758 + (long)(int)uVar6 * 4);
  }
  else {
    uVar6 = 0x88000;
  }
  *(undefined4 *)(param_1 + 0x1b1c) = 0;
  plVar8 = *(long **)puVar5;
  *(uint *)(param_1 + 0x1b18) = *(uint *)(param_1 + 0x1b18) | uVar6;
  iVar7 = (**(code **)(*plVar8 + 0x18))();
  *(undefined4 *)(param_1 + 0x600) = 0xd;
  *(undefined4 *)(param_1 + 0x540) = 1;
  *(undefined4 *)(param_1 + 0x560) = 3;
  *(undefined4 *)(param_1 + 0x590) = 6;
  *(undefined4 *)(param_1 + 0x570) = 4;
  uVar6 = 0x10;
  if (iVar7 != 7) {
    uVar6 = 4;
  }
  *(undefined4 *)(param_1 + 0x530) = 0;
  uVar4 = 8;
  if (iVar7 != 4) {
    uVar4 = uVar6;
  }
  *(undefined4 *)(param_1 + 0x610) = 0xe;
  *(undefined4 *)(param_1 + 0x620) = 0xf;
  uVar11 = *(undefined8 *)(param_1 + 0x4f8);
  *(undefined4 *)(param_1 + 0x640) = 0x11;
  *(undefined4 *)(param_1 + 0x650) = 0x12;
  *(undefined4 *)(param_1 + 0x5b0) = 8;
  *(uint *)(param_1 + 0x1b1c) = uVar4 | *(uint *)(param_1 + 0x1b1c);
  *(undefined4 *)(param_1 + 0x660) = 0x13;
  *(undefined4 *)(param_1 + 0x550) = 2;
  *(undefined4 *)(param_1 + 0x580) = 5;
  *(undefined4 *)(param_1 + 0x670) = 0x14;
  *(undefined4 *)(param_1 + 0x5a0) = 7;
  *(undefined4 *)(param_1 + 0x5c0) = 9;
  *(undefined8 *)(param_1 + 0x608) = uVar11;
  *(undefined4 *)(param_1 + 0x5d0) = 10;
  *(undefined8 *)(param_1 + 0x548) = uVar11;
  *(undefined4 *)(param_1 + 0x5e0) = 0xb;
  *(undefined8 *)(param_1 + 0x568) = uVar11;
  *(undefined4 *)(param_1 + 0x5f0) = 0xc;
  uVar13 = *(undefined8 *)(param_1 + 0x4f0);
  *(undefined8 *)(param_1 + 0x598) = uVar11;
  *(undefined8 *)(param_1 + 0x538) = uVar11;
  *(undefined8 *)(param_1 + 0x558) = uVar11;
  *(undefined8 *)(param_1 + 0x578) = uVar11;
  *(undefined8 *)(param_1 + 0x588) = uVar11;
  *(undefined8 *)(param_1 + 0x5a8) = uVar11;
  *(undefined8 *)(param_1 + 0x5b8) = uVar11;
  *(undefined8 *)(param_1 + 0x5c8) = uVar11;
  *(undefined8 *)(param_1 + 0x5d8) = uVar11;
  *(undefined8 *)(param_1 + 0x5e8) = uVar11;
  *(undefined8 *)(param_1 + 0x618) = uVar13;
  *(undefined8 *)(param_1 + 0x628) = uVar13;
  *(undefined8 *)(param_1 + 0x638) = uVar13;
  *(undefined8 *)(param_1 + 0x5f8) = uVar11;
  *(undefined8 *)(param_1 + 0x6a8) = uVar11;
  *(undefined8 *)(param_1 + 0x6b8) = uVar11;
  *(undefined8 *)(param_1 + 0x6c8) = uVar11;
  *(undefined8 *)(param_1 + 0x648) = *(undefined8 *)(param_1 + 0x500);
  *(undefined4 *)(param_1 + 0x680) = 0x15;
  *(undefined4 *)(param_1 + 0x630) = 0x10;
  *(undefined4 *)(param_1 + 0x690) = 0x16;
  *(undefined8 *)(param_1 + 0x6e0) = 0;
  *(bool *)(param_1 + 0x16410) = *(int *)(param_1 + 0x1050) == 3 || *(int *)(param_1 + 0x1050) == 9;
  *(undefined8 *)(param_1 + 0x658) = *(undefined8 *)(param_1 + 0x508);
  uVar11 = *(undefined8 *)(param_1 + 0x510);
  *(undefined8 *)(param_1 + 0x668) = uVar11;
  *(undefined8 *)(param_1 + 0x678) = uVar11;
  *(undefined8 *)(param_1 + 0x688) = uVar11;
  *(undefined8 *)(param_1 + 0x698) = uVar11;
  *(undefined4 *)(param_1 + 0x6a0) = 0x17;
  *(undefined4 *)(param_1 + 0x6b0) = 0x18;
  *(undefined4 *)(param_1 + 0x6c0) = 0x19;
  return;
}

