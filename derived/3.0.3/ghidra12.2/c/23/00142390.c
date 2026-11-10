
undefined8 FUN_00142390(long param_1,uint param_2,long *param_3)

{
  undefined2 uVar1;
  ushort uVar2;
  short sVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  ushort *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  uint uVar12;
  ulong uVar13;
  undefined1 auStack_c0 [112];
  
  uVar4 = 0xffff;
  if (8 < (param_2 & 0xffff) - 1) {
    return 0xffff;
  }
  switch(param_2 & 0xffff) {
  case 1:
    lVar5 = *param_3;
    if ((((*(char *)(lVar5 + 0x50) != '\x01') || (*(char *)(lVar5 + 0x51) != '\0')) ||
        (*(int *)(param_1 + 0x641e8) == 0)) ||
       ((*(char *)(param_1 + 3) != '\0' || ((*(byte *)(param_1 + 0x6d641) >> 1 & 1) == 0))))
    goto LAB_001424d4;
    uVar4 = *(undefined8 *)(lVar5 + 0x30);
    uVar1 = *(undefined2 *)(lVar5 + 0x4c);
    uVar13 = 0;
    *(undefined4 *)(param_3[1] + 0x3c) = 0;
    *(int *)(param_3[1] + 0x40) = *(int *)(param_1 + 0x641e8) + -1;
    do {
      sVar3 = FUN_0012dfe0(param_1,param_1 + uVar13 * 0x88 + 0x62758,auStack_c0,0x70);
      if ((-1 < sVar3) &&
         (sVar3 = FUN_00142750(uVar4,uVar1,auStack_c0,*(undefined8 *)(param_1 + 0x6cd58)),
         sVar3 == 1)) {
        *(int *)(param_3[1] + 0x38) = (int)uVar13;
        *(undefined1 *)(param_3[1] + 0x5e) = 0x10;
        puVar7 = (ushort *)param_3[1];
        uVar2 = puVar7[3];
LAB_00142730:
        *puVar7 = uVar2;
        puVar7 = (ushort *)param_3[1];
LAB_00142738:
        *(undefined1 *)((long)puVar7 + 0x5f) = 2;
        return 1;
      }
      lVar5 = param_3[1];
      uVar12 = (int)uVar13 + 1;
      uVar13 = (ulong)uVar12;
    } while (uVar12 <= *(uint *)(lVar5 + 0x40));
    goto LAB_001424d8;
  case 2:
    lVar5 = *param_3;
    if ((((*(char *)(lVar5 + 0x50) == '\x01') && (*(char *)(lVar5 + 0x51) == '\0')) &&
        (*(int *)(param_1 + 0x641e8) != 0)) &&
       ((*(char *)(param_1 + 3) == '\0' && ((*(byte *)(param_1 + 0x6d641) >> 1 & 1) != 0)))) {
      lVar8 = param_3[1];
      uVar12 = *(int *)(lVar8 + 0x38) + 1;
      if (uVar12 <= *(uint *)(lVar8 + 0x40)) {
        uVar4 = *(undefined8 *)(lVar5 + 0x30);
        uVar1 = *(undefined2 *)(lVar5 + 0x4c);
        do {
          sVar3 = FUN_0012dfe0(param_1,param_1 + (ulong)uVar12 * 0x88 + 0x62758,auStack_c0,0x70);
          if ((-1 < sVar3) &&
             (sVar3 = FUN_00142750(uVar4,uVar1,auStack_c0,*(undefined8 *)(param_1 + 0x6cd58)),
             sVar3 == 1)) {
            *(uint *)(param_3[1] + 0x38) = uVar12;
            *(undefined1 *)(param_3[1] + 0x5e) = 0x10;
            *(short *)param_3[1] = *(short *)param_3[1] + -1;
            puVar7 = (ushort *)param_3[1];
            uVar2 = puVar7[2];
            if ((int)(short)*puVar7 < (int)(uint)uVar2) goto LAB_00142730;
            goto LAB_00142738;
          }
          lVar8 = param_3[1];
          uVar12 = uVar12 + 1;
        } while (uVar12 <= *(uint *)(lVar8 + 0x40));
      }
      *(undefined1 *)(lVar8 + 0x5f) = 3;
      return 0;
    }
LAB_001424d4:
    lVar5 = param_3[1];
LAB_001424d8:
    uVar4 = 0;
    *(undefined1 *)(lVar5 + 0x5f) = 4;
    break;
  case 3:
    uVar12 = *(uint *)(param_3[1] + 0x38);
    if (*(uint *)(param_3[1] + 0x40) < uVar12) {
      uVar4 = 0xffff;
    }
    else {
      param_1 = param_1 + (ulong)uVar12 * 0x88;
      puVar6 = (undefined8 *)param_3[3];
      uVar4 = 0;
      uVar9 = *(undefined8 *)(param_1 + 0x62758);
      uVar10 = *(undefined8 *)(param_1 + 0x62760);
      uVar11 = *(undefined8 *)(param_1 + 0x62770);
      puVar6[2] = *(undefined8 *)(param_1 + 0x62768);
      puVar6[3] = uVar11;
      *puVar6 = uVar9;
      puVar6[1] = uVar10;
      uVar9 = *(undefined8 *)(param_1 + 0x62778);
      uVar10 = *(undefined8 *)(param_1 + 0x62780);
      uVar11 = *(undefined8 *)(param_1 + 0x62790);
      puVar6[6] = *(undefined8 *)(param_1 + 0x62788);
      puVar6[7] = uVar11;
      puVar6[4] = uVar9;
      puVar6[5] = uVar10;
      uVar9 = *(undefined8 *)(param_1 + 0x62798);
      uVar10 = *(undefined8 *)(param_1 + 0x627a0);
      uVar11 = *(undefined8 *)(param_1 + 0x627b0);
      puVar6[10] = *(undefined8 *)(param_1 + 0x627a8);
      puVar6[0xb] = uVar11;
      puVar6[8] = uVar9;
      puVar6[9] = uVar10;
      uVar10 = *(undefined8 *)(param_1 + 0x627b8);
      uVar11 = *(undefined8 *)(param_1 + 0x627c0);
      uVar9 = *(undefined8 *)(param_1 + 0x627d0);
      puVar6[0xe] = *(undefined8 *)(param_1 + 0x627c8);
      puVar6[0xf] = uVar9;
      puVar6[0xc] = uVar10;
      puVar6[0xd] = uVar11;
      *(undefined2 *)(param_3[3] + 8) = *(undefined2 *)param_3[1];
    }
    break;
  case 4:
  case 5:
    break;
  default:
    uVar4 = 0;
  }
  return uVar4;
}

