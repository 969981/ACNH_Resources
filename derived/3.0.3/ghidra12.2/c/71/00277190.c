
void FUN_00277190(undefined8 param_1,undefined1 *param_2,uint *param_3,undefined8 param_4,
                 undefined4 param_5,undefined1 param_6)

{
  uint uVar1;
  undefined *puVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined2 *puVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  uint local_4a8;
  undefined1 auStack_4a4 [4];
  undefined8 local_4a0;
  undefined4 local_498;
  undefined1 auStack_490 [32];
  undefined1 auStack_470 [256];
  undefined1 auStack_370 [112];
  undefined1 auStack_300 [112];
  undefined1 auStack_290 [112];
  undefined1 auStack_220 [112];
  undefined1 auStack_1b0 [72];
  undefined1 auStack_168 [72];
  undefined1 auStack_120 [72];
  undefined1 auStack_d8 [72];
  char local_90 [4];
  undefined1 local_8c;
  undefined1 local_8b;
  undefined1 local_8a;
  undefined4 local_88;
  undefined8 local_80 [4];
  
  puVar2 = PTR_DAT_04bc1510;
  lVar7 = *(long *)PTR_DAT_04bc1510 + 0x10;
  FUN_00232ac4(auStack_490);
  uVar6 = FUN_0026c8a4(DAT_04c603c8);
  FUN_002620b0(&local_4a0,uVar6,auStack_490);
  *param_2 = param_6;
  param_2[3] = (char)((ulong)param_4 >> 0x38);
  param_2[1] = 0;
  param_2[4] = (char)((ulong)param_4 >> 0x30);
  param_2[10] = (char)param_4;
  param_2[0xe] = (char)param_5;
  param_2[2] = local_8c;
  param_2[5] = (char)((ulong)param_4 >> 0x28);
  param_2[6] = (char)((ulong)param_4 >> 0x20);
  param_2[7] = (char)((ulong)param_4 >> 0x18);
  param_2[8] = (char)((ulong)param_4 >> 0x10);
  param_2[9] = (char)((ulong)param_4 >> 8);
  param_2[0xb] = (char)((uint)param_5 >> 0x18);
  param_2[0xc] = (char)((uint)param_5 >> 0x10);
  param_2[0xd] = (char)((uint)param_5 >> 8);
  uVar3 = FUN_002ab700(lVar7);
  param_2[0xf] = uVar3;
  FUN_002ab810(lVar7,param_2 + 0x10,auStack_4a4);
  uVar4 = FUN_002ab700(lVar7);
  uVar12 = (uVar4 & 0xff) * 2;
  lVar7 = FUN_002ba788(*(undefined8 *)puVar2);
  uVar1 = uVar12 + 0x12;
  (**(code **)(*(long *)(lVar7 + 8) + 0x10))
            (&local_4a0,(long *)(lVar7 + 8),param_2 + uVar1,&local_4a8,(uVar4 & 0xff) * -2 + 0x3a1);
  lVar7 = FUN_002ba788(*(undefined8 *)puVar2);
  local_498 = 0;
  local_4a0 = 0x200000000000;
  (**(code **)(*(long *)(lVar7 + 8) + 0x20))((long *)(lVar7 + 8),&local_4a0);
  uVar1 = local_4a8 + uVar1;
  *(ushort *)(param_2 + (ulong)uVar12 + 0x10) =
       (ushort)(local_4a8 >> 8) & 0xff | (ushort)((local_4a8 & 0xff00ff) << 8);
  memcpy(param_2 + uVar1,auStack_490,0x20);
  FUN_00228480(param_2 + (uVar1 + 0x20),local_88);
  param_2[uVar1 + 0x24] = local_8b;
  param_2[uVar1 + 0x25] = local_8a;
  if (((local_90[0] == -1) && (iVar5 = FUN_00227ad4(auStack_370), iVar5 == 0)) &&
     (iVar5 = FUN_00227ad4(auStack_1b0), iVar5 == 0)) {
    uVar12 = 0;
  }
  else {
    uVar12 = 1;
  }
  if (((local_90[1] != -1) || (iVar5 = FUN_00227ad4(auStack_300), iVar5 != 0)) ||
     (iVar5 = FUN_00227ad4(auStack_168), iVar5 != 0)) {
    uVar12 = uVar12 + 1;
  }
  if (((local_90[2] != -1) || (iVar5 = FUN_00227ad4(auStack_290), iVar5 != 0)) ||
     (iVar5 = FUN_00227ad4(auStack_120), iVar5 != 0)) {
    uVar12 = uVar12 + 1;
  }
  if (((local_90[3] != -1) || (iVar5 = FUN_00227ad4(auStack_220), iVar5 != 0)) ||
     (iVar5 = FUN_00227ad4(auStack_d8), iVar5 != 0)) {
    uVar12 = uVar12 + 1;
  }
  uVar11 = 0;
  uVar4 = uVar1 + 0x27;
  if (uVar12 < 2) {
    uVar12 = 1;
  }
  param_2[uVar1 + 0x26] = (char)uVar12;
  do {
    puVar8 = auStack_370 + uVar11 * 0x70;
    uVar3 = FUN_00227d94(puVar8);
    param_2[uVar4] = uVar3;
    iVar5 = FUN_00227d94(puVar8);
    if (iVar5 == 2) {
      puVar9 = (undefined2 *)FUN_00227acc(puVar8);
      FUN_002284a0(param_2 + (uVar4 + 1),*puVar9);
      FUN_002284a0(param_2 + (uVar4 + 3),puVar9[1]);
      FUN_002284a0(param_2 + (uVar4 + 5),puVar9[2]);
      FUN_002284a0(param_2 + (uVar4 + 7),puVar9[3]);
      FUN_002284a0(param_2 + (uVar4 + 9),puVar9[4]);
      FUN_002284a0(param_2 + (uVar4 + 0xb),puVar9[5]);
      FUN_002284a0(param_2 + (uVar4 + 0xd),puVar9[6]);
      FUN_002284a0(param_2 + (uVar4 + 0xf),puVar9[7]);
      FUN_002284a0(param_2 + (uVar4 + 0x11),puVar9[8]);
      FUN_002284a0(param_2 + (uVar4 + 0x13),puVar9[9]);
      FUN_002284a0(param_2 + (uVar4 + 0x15),puVar9[10]);
      FUN_002284a0(param_2 + (uVar4 + 0x17),puVar9[0xb]);
      FUN_002284a0(param_2 + (uVar4 + 0x19),puVar9[0xc]);
      FUN_002284a0(param_2 + (uVar4 + 0x1b),puVar9[0xd]);
      FUN_002284a0(param_2 + (uVar4 + 0x1d),puVar9[0xe]);
      FUN_002284a0(param_2 + (uVar4 + 0x1f),puVar9[0xf]);
      FUN_002284a0(param_2 + (uVar4 + 0x21),puVar9[0x10]);
      FUN_002284a0(param_2 + (uVar4 + 0x23),puVar9[0x11]);
      FUN_002284a0(param_2 + (uVar4 + 0x25),puVar9[0x12]);
      FUN_002284a0(param_2 + (uVar4 + 0x27),puVar9[0x13]);
      FUN_002284a0(param_2 + (uVar4 + 0x29),puVar9[0x14]);
      FUN_002284a0(param_2 + (uVar4 + 0x2b),puVar9[0x15]);
      FUN_002284a0(param_2 + (uVar4 + 0x2d),puVar9[0x16]);
      FUN_002284a0(param_2 + (uVar4 + 0x2f),puVar9[0x17]);
      FUN_002284a0(param_2 + (uVar4 + 0x31),puVar9[0x18]);
      FUN_002284a0(param_2 + (uVar4 + 0x33),puVar9[0x19]);
      FUN_002284a0(param_2 + (uVar4 + 0x35),puVar9[0x1a]);
      FUN_002284a0(param_2 + (uVar4 + 0x37),puVar9[0x1b]);
      FUN_002284a0(param_2 + (uVar4 + 0x39),puVar9[0x1c]);
      FUN_002284a0(param_2 + (uVar4 + 0x3b),puVar9[0x1d]);
      FUN_002284a0(param_2 + (uVar4 + 0x3d),puVar9[0x1e]);
      FUN_002284a0(param_2 + (uVar4 + 0x3f),puVar9[0x1f]);
      FUN_002284a0(param_2 + (uVar4 + 0x41),puVar9[0x20]);
      FUN_002284a0(param_2 + (uVar4 + 0x43),puVar9[0x21]);
      FUN_002284a0(param_2 + (uVar4 + 0x45),puVar9[0x22]);
      FUN_002284a0(param_2 + (uVar4 + 0x47),puVar9[0x23]);
      FUN_002284a0(param_2 + (uVar4 + 0x49),puVar9[0x24]);
      FUN_002284a0(param_2 + (uVar4 + 0x4b),puVar9[0x25]);
      FUN_002284a0(param_2 + (uVar4 + 0x4d),puVar9[0x26]);
      FUN_002284a0(param_2 + (uVar4 + 0x4f),puVar9[0x27]);
    }
    else {
      lVar10 = FUN_00227adc(puVar8);
      lVar7 = 0;
      do {
        FUN_002284c0(param_2 + (uVar4 + 1 + (int)lVar7),*(undefined1 *)(lVar10 + lVar7));
        lVar7 = lVar7 + 1;
      } while ((int)lVar7 != 0x50);
    }
    puVar8 = auStack_1b0 + uVar11 * 0x48;
    uVar3 = FUN_00227d94(puVar8);
    param_2[uVar4 + 0x51] = uVar3;
    iVar5 = FUN_00227d94(puVar8);
    if (iVar5 == 2) {
      puVar9 = (undefined2 *)FUN_00227acc(puVar8);
      FUN_002284a0(param_2 + (uVar4 + 0x52),*puVar9);
      FUN_002284a0(param_2 + (uVar4 + 0x54),puVar9[1]);
      FUN_002284a0(param_2 + (uVar4 + 0x56),puVar9[2]);
      FUN_002284a0(param_2 + (uVar4 + 0x58),puVar9[3]);
      FUN_002284a0(param_2 + (uVar4 + 0x5a),puVar9[4]);
      FUN_002284a0(param_2 + (uVar4 + 0x5c),puVar9[5]);
      FUN_002284a0(param_2 + (uVar4 + 0x5e),puVar9[6]);
      FUN_002284a0(param_2 + (uVar4 + 0x60),puVar9[7]);
      FUN_002284a0(param_2 + (uVar4 + 0x62),puVar9[8]);
      FUN_002284a0(param_2 + (uVar4 + 100),puVar9[9]);
      FUN_002284a0(param_2 + (uVar4 + 0x66),puVar9[10]);
      FUN_002284a0(param_2 + (uVar4 + 0x68),puVar9[0xb]);
      FUN_002284a0(param_2 + (uVar4 + 0x6a),puVar9[0xc]);
      FUN_002284a0(param_2 + (uVar4 + 0x6c),puVar9[0xd]);
      FUN_002284a0(param_2 + (uVar4 + 0x6e),puVar9[0xe]);
      FUN_002284a0(param_2 + (uVar4 + 0x70),puVar9[0xf]);
      FUN_002284a0(param_2 + (uVar4 + 0x72),puVar9[0x10]);
      FUN_002284a0(param_2 + (uVar4 + 0x74),puVar9[0x11]);
      FUN_002284a0(param_2 + (uVar4 + 0x76),puVar9[0x12]);
      FUN_002284a0(param_2 + (uVar4 + 0x78),puVar9[0x13]);
    }
    else {
      puVar8 = (undefined1 *)FUN_00227adc(puVar8);
      FUN_002284c0(param_2 + (uVar4 + 0x52),*puVar8);
      FUN_002284c0(param_2 + (uVar4 + 0x53),puVar8[1]);
      FUN_002284c0(param_2 + (uVar4 + 0x54),puVar8[2]);
      FUN_002284c0(param_2 + (uVar4 + 0x55),puVar8[3]);
      FUN_002284c0(param_2 + (uVar4 + 0x56),puVar8[4]);
      FUN_002284c0(param_2 + (uVar4 + 0x57),puVar8[5]);
      FUN_002284c0(param_2 + (uVar4 + 0x58),puVar8[6]);
      FUN_002284c0(param_2 + (uVar4 + 0x59),puVar8[7]);
      FUN_002284c0(param_2 + (uVar4 + 0x5a),puVar8[8]);
      FUN_002284c0(param_2 + (uVar4 + 0x5b),puVar8[9]);
      FUN_002284c0(param_2 + (uVar4 + 0x5c),puVar8[10]);
      FUN_002284c0(param_2 + (uVar4 + 0x5d),puVar8[0xb]);
      FUN_002284c0(param_2 + (uVar4 + 0x5e),puVar8[0xc]);
      FUN_002284c0(param_2 + (uVar4 + 0x5f),puVar8[0xd]);
      FUN_002284c0(param_2 + (uVar4 + 0x60),puVar8[0xe]);
      FUN_002284c0(param_2 + (uVar4 + 0x61),puVar8[0xf]);
      FUN_002284c0(param_2 + (uVar4 + 0x62),puVar8[0x10]);
      FUN_002284c0(param_2 + (uVar4 + 99),puVar8[0x11]);
      FUN_002284c0(param_2 + (uVar4 + 100),puVar8[0x12]);
      FUN_002284c0(param_2 + (uVar4 + 0x65),puVar8[0x13]);
      FUN_002284c0(param_2 + (uVar4 + 0x66),puVar8[0x14]);
      FUN_002284c0(param_2 + (uVar4 + 0x67),puVar8[0x15]);
      FUN_002284c0(param_2 + (uVar4 + 0x68),puVar8[0x16]);
      FUN_002284c0(param_2 + (uVar4 + 0x69),puVar8[0x17]);
      FUN_002284c0(param_2 + (uVar4 + 0x6a),puVar8[0x18]);
      FUN_002284c0(param_2 + (uVar4 + 0x6b),puVar8[0x19]);
      FUN_002284c0(param_2 + (uVar4 + 0x6c),puVar8[0x1a]);
      FUN_002284c0(param_2 + (uVar4 + 0x6d),puVar8[0x1b]);
      FUN_002284c0(param_2 + (uVar4 + 0x6e),puVar8[0x1c]);
      FUN_002284c0(param_2 + (uVar4 + 0x6f),puVar8[0x1d]);
      FUN_002284c0(param_2 + (uVar4 + 0x70),puVar8[0x1e]);
      FUN_002284c0(param_2 + (uVar4 + 0x71),puVar8[0x1f]);
      FUN_002284c0(param_2 + (uVar4 + 0x72),puVar8[0x20]);
      FUN_002284c0(param_2 + (uVar4 + 0x73),puVar8[0x21]);
      FUN_002284c0(param_2 + (uVar4 + 0x74),puVar8[0x22]);
      FUN_002284c0(param_2 + (uVar4 + 0x75),puVar8[0x23]);
      FUN_002284c0(param_2 + (uVar4 + 0x76),puVar8[0x24]);
      FUN_002284c0(param_2 + (uVar4 + 0x77),puVar8[0x25]);
      FUN_002284c0(param_2 + (uVar4 + 0x78),puVar8[0x26]);
      FUN_002284c0(param_2 + (uVar4 + 0x79),puVar8[0x27]);
    }
    param_2[uVar4 + 0x7a] = local_90[uVar11];
    memcpy(param_2 + (uVar4 + 0x7b),auStack_470 + uVar11 * 0x40,0x40);
    FUN_00228460(param_2 + (uVar4 + 0xbb),local_80[uVar11]);
    uVar11 = uVar11 + 1;
    uVar4 = uVar4 + 0xc3;
  } while (uVar11 != uVar12);
  *param_3 = uVar4;
  return;
}

