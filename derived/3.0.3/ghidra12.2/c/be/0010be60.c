
undefined8 FUN_0010be60(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 param_4)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  byte bVar10;
  short sVar11;
  long *plVar12;
  uint uVar13;
  long *plVar14;
  
  plVar12 = (long *)(param_2 + 0x10);
  if (*plVar12 == 0) {
    return 0x9b26;
  }
  bVar10 = *(byte *)(param_2 + 0x66);
  bVar1 = (bVar10 & 0xf) + 1;
  if (bVar10 >> 4 <= bVar1) {
    return 0x9b26;
  }
  *param_3 = 0;
  *(undefined2 *)(param_3 + 1) = 0;
  *(undefined2 *)((long)param_3 + 0x7c) = 0;
  *(undefined4 *)(param_3 + 0xf) = 0;
  *(undefined2 *)((long)param_3 + 0x74) = 0;
  *(undefined4 *)(param_3 + 0xe) = 0;
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  uVar5 = *(undefined8 *)(param_2 + 0x28);
  plVar14 = param_3 + 2;
  *plVar14 = *plVar12;
  uVar6 = *(undefined8 *)(param_2 + 0x68);
  uVar13 = (uint)uVar6 & 0xff;
  uVar3 = *(undefined8 *)(param_2 + 0x50);
  uVar7 = *(undefined8 *)(param_2 + 0x58);
  param_3[0xc] = *(undefined8 *)(param_2 + 0x60);
  param_3[4] = uVar2;
  param_3[5] = uVar5;
  uVar2 = *(undefined8 *)(param_2 + 0x40);
  uVar8 = *(undefined8 *)(param_2 + 0x48);
  uVar5 = *(undefined8 *)(param_2 + 0x30);
  uVar9 = *(undefined8 *)(param_2 + 0x38);
  param_3[3] = uVar4;
  param_3[8] = uVar2;
  param_3[9] = uVar8;
  param_3[6] = uVar5;
  param_3[7] = uVar9;
  param_3[0xd] = uVar6;
  param_3[10] = uVar3;
  param_3[0xb] = uVar7;
  *(byte *)((long)param_3 + 0x66) = bVar1 | bVar10 & 0xf0;
  if (1 < uVar13 - 1) {
    if (uVar13 == 3) {
      uVar13 = *(uint *)(*plVar12 + 0x70);
    }
    else {
      uVar13 = *(uint *)(*plVar12 + 8);
      uVar13 = (uVar13 & 0xff00ff00) >> 8 | (uVar13 & 0xff00ff) << 8;
      uVar13 = uVar13 >> 0x10 | uVar13 << 0x10;
    }
    if ((int)uVar13 < 0x40000006) {
      if ((uVar13 - 0x50000 < 2) || (uVar13 == 6)) {
        sVar11 = FUN_0013a190(plVar14,param_3,param_4);
        goto joined_r0x0010c004;
      }
    }
    else if ((uVar13 + 0xbffb0000 < 2) || (uVar13 == 0x40000006)) {
      sVar11 = FUN_00128260(plVar14,param_3,param_4);
      goto joined_r0x0010c004;
    }
  }
  sVar11 = FUN_0011c940(param_1,plVar14,param_3);
joined_r0x0010c004:
  if (sVar11 == 1) {
    FUN_0010c010(plVar14,0,param_3);
    return 1;
  }
  return 0x9b26;
}

