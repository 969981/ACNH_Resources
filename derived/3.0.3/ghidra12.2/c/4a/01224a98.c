
void FUN_01224a98(long param_1)

{
  byte *pbVar1;
  undefined4 uVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  long lVar33;
  long lVar34;
  undefined8 *puVar35;
  
  lVar34 = *(long *)PTR_DAT_04bb46b0;
  if (lVar34 != 0) {
    puVar35 = *(undefined8 **)(lVar34 + 0x10);
    if ((*(byte *)(lVar34 + 0x453) & 1) == 0) {
      lVar33 = (**(code **)(*(long *)*puVar35 + 0x38))();
      lVar34 = 0;
      if (lVar33 != 0) {
        lVar34 = lVar33 + 0x70;
      }
      goto LAB_01224b1c;
    }
    if (puVar35 != (undefined8 *)0x0) {
      lVar34 = 0;
      if ((long *)puVar35[0x26] != (long *)0x0) {
        lVar34 = (**(code **)(*(long *)puVar35[0x26] + 0x38))();
      }
      goto LAB_01224b1c;
    }
  }
  lVar34 = 0;
LAB_01224b1c:
  if ((*(long **)(lVar34 + 0xe7290) == (long *)0x0) ||
     (puVar35 = (undefined8 *)**(long **)(lVar34 + 0xe7290), puVar35 == (undefined8 *)0x0)) {
    uVar32 = 1;
  }
  else {
    uVar32 = (**(code **)*puVar35)();
    uVar32 = uVar32 ^ 1;
  }
  pbVar1 = (byte *)(*(long *)(lVar34 + 0xe7278) + *(long *)(lVar34 + 0xe7270));
  bVar4 = *pbVar1;
  bVar5 = pbVar1[1];
  bVar6 = pbVar1[2];
  bVar7 = pbVar1[3];
  bVar8 = pbVar1[4];
  bVar9 = pbVar1[5];
  bVar10 = pbVar1[6];
  bVar11 = pbVar1[7];
  bVar12 = pbVar1[8];
  bVar13 = pbVar1[9];
  bVar14 = pbVar1[10];
  bVar15 = pbVar1[0xb];
  bVar16 = pbVar1[0xc];
  bVar17 = pbVar1[0xd];
  bVar18 = pbVar1[0xe];
  bVar19 = pbVar1[0xf];
  bVar20 = pbVar1[0x10];
  bVar21 = pbVar1[0x11];
  bVar22 = pbVar1[0x12];
  bVar23 = pbVar1[0x13];
  bVar24 = pbVar1[0x14];
  bVar25 = pbVar1[0x15];
  bVar26 = pbVar1[0x16];
  bVar27 = pbVar1[0x17];
  if ((((uVar32 & 1) == 0) && (*(long *)(lVar34 + 0xe7290) != 0)) &&
     (puVar35 = *(undefined8 **)(*(long *)(lVar34 + 0xe7290) + 8), puVar35 != (undefined8 *)0x0)) {
    (**(code **)*puVar35)();
  }
  uVar2 = crc32b(0xffffffff,(uint)bVar4,0x4c11db7);
  uVar2 = crc32b(uVar2,(uint)bVar5,0x4c11db7);
  uVar2 = crc32b(uVar2,(uint)bVar6,0x4c11db7);
  uVar2 = crc32b(uVar2,(uint)bVar7,0x4c11db7);
  uVar2 = crc32b(uVar2,(uint)bVar8,0x4c11db7);
  uVar2 = crc32b(uVar2,(uint)bVar9,0x4c11db7);
  uVar2 = crc32b(uVar2,(uint)bVar10,0x4c11db7);
  uVar2 = crc32b(uVar2,(uint)bVar11,0x4c11db7);
  uVar2 = crc32b(uVar2,(uint)bVar12,0x4c11db7);
  uVar2 = crc32b(uVar2,(uint)bVar13,0x4c11db7);
  uVar2 = crc32b(uVar2,(uint)bVar14,0x4c11db7);
  uVar2 = crc32b(uVar2,(uint)bVar15,0x4c11db7);
  uVar2 = crc32b(uVar2,(uint)bVar16,0x4c11db7);
  uVar2 = crc32b(uVar2,(uint)bVar17,0x4c11db7);
  uVar2 = crc32b(uVar2,(uint)bVar18,0x4c11db7);
  uVar2 = crc32b(uVar2,(uint)bVar19,0x4c11db7);
  uVar2 = crc32b(uVar2,(uint)bVar20,0x4c11db7);
  uVar2 = crc32b(uVar2,(uint)bVar21,0x4c11db7);
  uVar2 = crc32b(uVar2,(uint)bVar22,0x4c11db7);
  uVar2 = crc32b(uVar2,(uint)bVar23,0x4c11db7);
  uVar2 = crc32b(uVar2,(uint)bVar24,0x4c11db7);
  uVar2 = crc32b(uVar2,(uint)bVar25,0x4c11db7);
  uVar2 = crc32b(uVar2,(uint)bVar26,0x4c11db7);
  uVar32 = crc32b(uVar2,(uint)bVar27,0x4c11db7);
  uVar28 = (uVar32 ^ ~uVar32 >> 0x1e ^ 0xffffffff) * 0x6c078965 + 1;
  uVar32 = uVar28 ^ uVar28 * 0x800;
  uVar29 = (uVar28 ^ uVar28 >> 0x1e) * 0x6c078965 + 2;
  uVar28 = uVar29 ^ uVar29 * 0x800;
  uVar30 = (uVar29 ^ uVar29 >> 0x1e) * 0x6c078965 + 3;
  uVar29 = uVar30 ^ uVar30 * 0x800;
  uVar31 = (uVar30 ^ uVar30 >> 0x1e) * 0x6c078965 + 4;
  uVar30 = uVar31 ^ uVar31 * 0x800;
  uVar32 = uVar32 >> 8 ^ uVar31 >> 0x13 ^ uVar32 ^ uVar31;
  uVar31 = uVar32 ^ uVar32 << 0xb;
  uVar3 = uVar28 >> 8 ^ uVar32 >> 0x13 ^ uVar28 ^ uVar32;
  uVar32 = uVar29 >> 8 ^ uVar3 >> 0x13 ^ uVar29 ^ uVar3;
  uVar28 = uVar30 >> 8 ^ uVar32 >> 0x13 ^ uVar30 ^ uVar32;
  uVar3 = uVar3 ^ uVar3 << 0xb;
  uVar28 = uVar31 >> 8 ^ uVar28 >> 0x13 ^ uVar31 ^ uVar28;
  uVar29 = uVar32 ^ uVar32 << 0xb;
  uVar28 = uVar3 >> 8 ^ uVar28 >> 0x13 ^ uVar3 ^ uVar28;
  *(uint *)(param_1 + 0x87e4) = uVar32;
  *(uint *)(param_1 + 0x87e8) = uVar29 >> 8 ^ uVar28 >> 0x13 ^ uVar29 ^ uVar28;
  return;
}

