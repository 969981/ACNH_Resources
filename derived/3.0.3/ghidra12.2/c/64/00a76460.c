
undefined8
FUN_00a76460(long param_1,byte *param_2,long param_3,uint param_4,uint param_5,undefined4 param_6)

{
  byte *pbVar1;
  int iVar2;
  long lVar3;
  uint *puVar4;
  byte bVar5;
  byte bVar6;
  
  pbVar1 = (byte *)(param_1 + 0x5f8);
  if (*(int *)(param_1 + 0x614) == 0) {
LAB_00a764cc:
    if (*(int *)(param_1 + 0x63c) != 0) {
      iVar2 = *(int *)(param_1 + 0x638);
      if (((iVar2 == 0x10) || (iVar2 == 0xc)) && (*(long *)(param_1 + 0x628) == param_3)) {
        lVar3 = 1;
        goto LAB_00a76824;
      }
      bVar5 = *(byte *)(param_1 + 0x620);
      bVar6 = *param_2;
      if (7 < bVar5) {
        bVar5 = 0xff;
      }
      if (7 < bVar6) {
        bVar6 = 0xff;
      }
      if (bVar5 == bVar6) {
        puVar4 = (uint *)(param_1 + 0x638);
        lVar3 = 1;
        goto LAB_00a767d0;
      }
    }
    if (*(int *)(param_1 + 0x664) != 0) {
      iVar2 = *(int *)(param_1 + 0x660);
      if (((iVar2 == 0x10) || (iVar2 == 0xc)) && (*(long *)(param_1 + 0x650) == param_3)) {
        lVar3 = 2;
        goto LAB_00a76824;
      }
      bVar5 = *(byte *)(param_1 + 0x648);
      bVar6 = *param_2;
      if (7 < bVar5) {
        bVar5 = 0xff;
      }
      if (7 < bVar6) {
        bVar6 = 0xff;
      }
      if (bVar5 == bVar6) {
        puVar4 = (uint *)(param_1 + 0x660);
        lVar3 = 2;
        goto LAB_00a767d0;
      }
    }
    if (*(int *)(param_1 + 0x68c) != 0) {
      iVar2 = *(int *)(param_1 + 0x688);
      if (((iVar2 == 0x10) || (iVar2 == 0xc)) && (*(long *)(param_1 + 0x678) == param_3)) {
        lVar3 = 3;
        goto LAB_00a76824;
      }
      bVar5 = *(byte *)(param_1 + 0x670);
      bVar6 = *param_2;
      if (7 < bVar5) {
        bVar5 = 0xff;
      }
      if (7 < bVar6) {
        bVar6 = 0xff;
      }
      if (bVar5 == bVar6) {
        puVar4 = (uint *)(param_1 + 0x688);
        lVar3 = 3;
        goto LAB_00a767d0;
      }
    }
    if (*(int *)(param_1 + 0x6b4) != 0) {
      iVar2 = *(int *)(param_1 + 0x6b0);
      if (((iVar2 == 0x10) || (iVar2 == 0xc)) && (*(long *)(param_1 + 0x6a0) == param_3)) {
        lVar3 = 4;
        goto LAB_00a76824;
      }
      bVar5 = *(byte *)(param_1 + 0x698);
      bVar6 = *param_2;
      if (7 < bVar5) {
        bVar5 = 0xff;
      }
      if (7 < bVar6) {
        bVar6 = 0xff;
      }
      if (bVar5 == bVar6) {
        puVar4 = (uint *)(param_1 + 0x6b0);
        lVar3 = 4;
        goto LAB_00a767d0;
      }
    }
    if (*(int *)(param_1 + 0x6dc) != 0) {
      iVar2 = *(int *)(param_1 + 0x6d8);
      if (((iVar2 == 0x10) || (iVar2 == 0xc)) && (*(long *)(param_1 + 0x6c8) == param_3)) {
        lVar3 = 5;
        goto LAB_00a76824;
      }
      bVar5 = *(byte *)(param_1 + 0x6c0);
      bVar6 = *param_2;
      if (7 < bVar5) {
        bVar5 = 0xff;
      }
      if (7 < bVar6) {
        bVar6 = 0xff;
      }
      if (bVar5 == bVar6) {
        puVar4 = (uint *)(param_1 + 0x6d8);
        lVar3 = 5;
        goto LAB_00a767d0;
      }
    }
    if (*(int *)(param_1 + 0x704) != 0) {
      iVar2 = *(int *)(param_1 + 0x700);
      if (((iVar2 == 0x10) || (iVar2 == 0xc)) && (*(long *)(param_1 + 0x6f0) == param_3)) {
        lVar3 = 6;
        goto LAB_00a76824;
      }
      bVar5 = *(byte *)(param_1 + 0x6e8);
      bVar6 = *param_2;
      if (7 < bVar5) {
        bVar5 = 0xff;
      }
      if (7 < bVar6) {
        bVar6 = 0xff;
      }
      if (bVar5 == bVar6) {
        puVar4 = (uint *)(param_1 + 0x700);
        lVar3 = 6;
        goto LAB_00a767d0;
      }
    }
    if (*(int *)(param_1 + 0x72c) != 0) {
      iVar2 = *(int *)(param_1 + 0x728);
      if (((iVar2 == 0x10) || (iVar2 == 0xc)) && (*(long *)(param_1 + 0x718) == param_3)) {
        lVar3 = 7;
        goto LAB_00a76824;
      }
      bVar5 = *(byte *)(param_1 + 0x710);
      bVar6 = *param_2;
      if (7 < bVar5) {
        bVar5 = 0xff;
      }
      if (7 < bVar6) {
        bVar6 = 0xff;
      }
      if (bVar5 == bVar6) {
        puVar4 = (uint *)(param_1 + 0x728);
        lVar3 = 7;
        goto LAB_00a767d0;
      }
    }
    if (*(int *)(param_1 + 0x754) == 0) {
      return 0;
    }
    iVar2 = *(int *)(param_1 + 0x750);
    if (((iVar2 == 0x10) || (iVar2 == 0xc)) && (*(long *)(param_1 + 0x740) == param_3)) {
      lVar3 = 8;
      goto LAB_00a76824;
    }
    bVar5 = *(byte *)(param_1 + 0x738);
    bVar6 = *param_2;
    if (7 < bVar5) {
      bVar5 = 0xff;
    }
    if (7 < bVar6) {
      bVar6 = 0xff;
    }
    if (bVar5 != bVar6) {
      return 0;
    }
    puVar4 = (uint *)(param_1 + 0x750);
    lVar3 = 8;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x610);
    if (((iVar2 == 0xc) || (iVar2 == 0x10)) && (*(long *)(param_1 + 0x600) == param_3)) {
      lVar3 = 0;
      goto LAB_00a76824;
    }
    bVar5 = *pbVar1;
    bVar6 = *param_2;
    if (7 < bVar5) {
      bVar5 = 0xff;
    }
    if (7 < bVar6) {
      bVar6 = 0xff;
    }
    if (bVar5 != bVar6) goto LAB_00a764cc;
    lVar3 = 0;
    puVar4 = (uint *)(param_1 + 0x610);
  }
LAB_00a767d0:
  if (((((3 < param_4) || (param_4 == 2)) || (iVar2 != 2)) &&
      ((*puVar4 != param_4 && (*puVar4 != param_5)))) ||
     (*(long *)(pbVar1 + lVar3 * 0x28 + 8) != param_3)) {
    return 0;
  }
LAB_00a76824:
  *(undefined4 *)(pbVar1 + lVar3 * 0x28 + 0x20) = param_6;
  return 1;
}

