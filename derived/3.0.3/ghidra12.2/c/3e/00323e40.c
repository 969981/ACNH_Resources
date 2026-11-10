
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00323e40(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [12];
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined4 *puVar18;
  byte *pbVar19;
  float *pfVar20;
  long *plVar21;
  float fVar22;
  undefined4 uVar23;
  int iVar24;
  float fVar27;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar34;
  float fVar35;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined8 local_38;
  
  plVar21 = (long *)(param_1 + 0x10);
  lVar13 = *plVar21;
  if (*(long *)(lVar13 + 0xa40) != -1) {
    uVar11 = (**(code **)(*param_3 + 0x20))(param_3,lVar13 + 0xa40);
    lVar13 = *(long *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x60) = uVar11;
  }
  if (*(long *)(lVar13 + 0xa60) != -1) {
    uVar11 = (**(code **)(*param_3 + 0x20))(param_3,lVar13 + 0xa60);
    lVar13 = *(long *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x68) = uVar11;
  }
  if (*(long *)(lVar13 + 0xa80) != -1) {
    uVar11 = (**(code **)(*param_3 + 0x20))(param_3,lVar13 + 0xa80);
    lVar13 = *(long *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x70) = uVar11;
  }
  if (*(char *)(lVar13 + 0x9ec) == '\0') {
    *(undefined4 *)(lVar13 + 0x3c8) = *(undefined4 *)(lVar13 + 0x9f8);
    *(undefined8 *)(lVar13 + 0x3c0) = *(undefined8 *)(lVar13 + 0x9f0);
    lVar13 = *plVar21;
    cVar5 = *(char *)(lVar13 + 0x9ee);
  }
  else {
    cVar5 = *(char *)(lVar13 + 0x9ee);
  }
  if (cVar5 == '\0') {
    *(undefined4 *)(lVar13 + 0x440) = *(undefined4 *)(lVar13 + 0x9fc);
    lVar13 = *plVar21;
    cVar5 = *(char *)(lVar13 + 0x9ed);
  }
  else {
    cVar5 = *(char *)(lVar13 + 0x9ed);
  }
  if (cVar5 == '\0') {
    *(undefined4 *)(lVar13 + 0x4c8) = *(undefined4 *)(lVar13 + 0xa08);
    *(undefined8 *)(lVar13 + 0x4c0) = *(undefined8 *)(lVar13 + 0xa00);
    lVar13 = *plVar21;
    cVar5 = *(char *)(lVar13 + 0x9ef);
  }
  else {
    cVar5 = *(char *)(lVar13 + 0x9ef);
  }
  if (cVar5 == '\0') {
    *(undefined4 *)(lVar13 + 0x540) = *(undefined4 *)(lVar13 + 0xa0c);
    lVar13 = *plVar21;
  }
  if ((ulong)(long)*(char *)(lVar13 + 0xaa4) < 4) {
    lVar12 = (long)*(char *)(lVar13 + 0xaa4) * 4;
    uVar23 = *(undefined4 *)(&DAT_04102120 + lVar12);
    *(undefined4 *)(lVar13 + 0x300) = *(undefined4 *)(&DAT_041021c0 + lVar12);
    *(undefined4 *)(*plVar21 + 0x304) = uVar23;
    lVar13 = *plVar21;
    cVar5 = *(char *)(lVar13 + 0xab4);
  }
  else {
    lVar13 = *plVar21;
    cVar5 = *(char *)(lVar13 + 0xab4);
  }
  if ((ulong)(long)cVar5 < 4) {
    lVar12 = (long)cVar5 * 4;
    uVar23 = *(undefined4 *)(&DAT_04102120 + lVar12);
    *(undefined4 *)(lVar13 + 0x350) = *(undefined4 *)(&DAT_041021c0 + lVar12);
    *(undefined4 *)(*plVar21 + 0x354) = uVar23;
    lVar13 = *plVar21;
    cVar5 = *(char *)(lVar13 + 0xac4);
  }
  else {
    lVar13 = *plVar21;
    cVar5 = *(char *)(lVar13 + 0xac4);
  }
  if ((ulong)(long)cVar5 < 4) {
    lVar12 = (long)cVar5 * 4;
    uVar23 = *(undefined4 *)(&DAT_04102120 + lVar12);
    *(undefined4 *)(lVar13 + 0x3a0) = *(undefined4 *)(&DAT_041021c0 + lVar12);
    *(undefined4 *)(*plVar21 + 0x3a4) = uVar23;
    lVar13 = *plVar21;
    cVar5 = *(char *)(lVar13 + 0xaa1);
  }
  else {
    lVar13 = *plVar21;
    cVar5 = *(char *)(lVar13 + 0xaa1);
  }
  if (cVar5 == '\0') {
    *(undefined4 *)(lVar13 + 0x2c8) = 0;
    *(undefined4 *)(*plVar21 + 0x2cc) = 0;
    *(undefined4 *)(*plVar21 + 0x2c0) = 0;
    *(undefined4 *)(*plVar21 + 0x2c4) = 0;
    *(undefined4 *)(*plVar21 + 0x2d0) = 0;
    *(undefined4 *)(*plVar21 + 0x2d4) = 0;
    lVar13 = *plVar21;
    cVar5 = *(char *)(lVar13 + 0xab1);
  }
  else {
    cVar5 = *(char *)(lVar13 + 0xab1);
  }
  if (cVar5 == '\0') {
    *(undefined4 *)(lVar13 + 0x318) = 0;
    *(undefined4 *)(*plVar21 + 0x31c) = 0;
    *(undefined4 *)(*plVar21 + 0x310) = 0;
    *(undefined4 *)(*plVar21 + 0x314) = 0;
    *(undefined4 *)(*plVar21 + 800) = 0;
    *(undefined4 *)(*plVar21 + 0x324) = 0;
    lVar13 = *plVar21;
    cVar5 = *(char *)(lVar13 + 0xac1);
  }
  else {
    cVar5 = *(char *)(lVar13 + 0xac1);
  }
  if (cVar5 == '\0') {
    *(undefined4 *)(lVar13 + 0x368) = 0;
    *(undefined4 *)(*plVar21 + 0x36c) = 0;
    *(undefined4 *)(*plVar21 + 0x360) = 0;
    *(undefined4 *)(*plVar21 + 0x364) = 0;
    *(undefined4 *)(*plVar21 + 0x370) = 0;
    *(undefined4 *)(*plVar21 + 0x374) = 0;
    lVar13 = *plVar21;
    cVar5 = *(char *)(lVar13 + 0xaa2);
  }
  else {
    cVar5 = *(char *)(lVar13 + 0xaa2);
  }
  if (cVar5 == '\0') {
    *(undefined4 *)(lVar13 + 0x2f0) = 0;
    *(undefined4 *)(*plVar21 + 0x2f4) = 0;
    *(undefined4 *)(*plVar21 + 0x2f8) = 0;
    lVar13 = *plVar21;
    cVar5 = *(char *)(lVar13 + 0xab2);
  }
  else {
    cVar5 = *(char *)(lVar13 + 0xab2);
  }
  if (cVar5 == '\0') {
    *(undefined4 *)(lVar13 + 0x340) = 0;
    *(undefined4 *)(*plVar21 + 0x344) = 0;
    *(undefined4 *)(*plVar21 + 0x348) = 0;
    lVar13 = *plVar21;
    cVar5 = *(char *)(lVar13 + 0xac2);
  }
  else {
    cVar5 = *(char *)(lVar13 + 0xac2);
  }
  if (cVar5 == '\0') {
    *(undefined4 *)(lVar13 + 0x390) = 0;
    *(undefined4 *)(*plVar21 + 0x394) = 0;
    *(undefined4 *)(*plVar21 + 0x398) = 0;
    lVar13 = *plVar21;
    cVar5 = *(char *)(lVar13 + 0xaa3);
  }
  else {
    cVar5 = *(char *)(lVar13 + 0xaa3);
  }
  if (cVar5 == '\0') {
    *(undefined4 *)(lVar13 + 0x2e0) = 0x3f800000;
    *(undefined4 *)(*plVar21 + 0x2e4) = 0x3f800000;
    *(undefined4 *)(*plVar21 + 0x2d8) = 0;
    *(undefined4 *)(*plVar21 + 0x2dc) = 0;
    *(undefined4 *)(*plVar21 + 0x2e8) = 0;
    *(undefined4 *)(*plVar21 + 0x2ec) = 0;
    lVar13 = *plVar21;
    cVar5 = *(char *)(lVar13 + 0xab3);
  }
  else {
    cVar5 = *(char *)(lVar13 + 0xab3);
  }
  if (cVar5 == '\0') {
    *(undefined4 *)(lVar13 + 0x330) = 0x3f800000;
    *(undefined4 *)(*plVar21 + 0x334) = 0x3f800000;
    *(undefined4 *)(*plVar21 + 0x328) = 0;
    *(undefined4 *)(*plVar21 + 0x32c) = 0;
    *(undefined4 *)(*plVar21 + 0x338) = 0;
    *(undefined4 *)(*plVar21 + 0x33c) = 0;
    lVar13 = *plVar21;
    cVar5 = *(char *)(lVar13 + 0xac3);
  }
  else {
    cVar5 = *(char *)(lVar13 + 0xac3);
  }
  if (cVar5 == '\0') {
    *(undefined4 *)(lVar13 + 0x380) = 0x3f800000;
    *(undefined4 *)(*plVar21 + 900) = 0x3f800000;
    *(undefined4 *)(*plVar21 + 0x378) = 0;
    *(undefined4 *)(*plVar21 + 0x37c) = 0;
    *(undefined4 *)(*plVar21 + 0x388) = 0;
    *(undefined4 *)(*plVar21 + 0x38c) = 0;
    lVar13 = *plVar21;
    cVar5 = *(char *)(lVar13 + 0x8f8);
  }
  else {
    cVar5 = *(char *)(lVar13 + 0x8f8);
  }
  if (cVar5 == '\0') {
    *(undefined4 *)(lVar13 + 0x700) = 0;
    *(undefined4 *)(*plVar21 + 0x710) = 0;
    *(undefined4 *)(*plVar21 + 0x720) = 0;
    *(undefined4 *)(*plVar21 + 0x730) = 0;
    *(undefined4 *)(*plVar21 + 0x750) = 0;
    *(undefined4 *)(*plVar21 + 0x760) = 0x3f800000;
    *(undefined4 *)(*plVar21 + 0x770) = 0;
    *(undefined4 *)(*plVar21 + 0x780) = 0;
    lVar13 = *plVar21;
    cVar5 = *(char *)(lVar13 + 0x8f9);
  }
  else {
    cVar5 = *(char *)(lVar13 + 0x8f9);
  }
  if (cVar5 == '\0') {
    *(undefined4 *)(lVar13 + 0x704) = 0;
    *(undefined4 *)(*plVar21 + 0x714) = 0;
    *(undefined4 *)(*plVar21 + 0x724) = 0;
    *(undefined4 *)(*plVar21 + 0x734) = 0;
    *(undefined4 *)(*plVar21 + 0x754) = 0;
    *(undefined4 *)(*plVar21 + 0x764) = 0x3f800000;
    *(undefined4 *)(*plVar21 + 0x774) = 0;
    *(undefined4 *)(*plVar21 + 0x784) = 0;
    lVar13 = *plVar21;
    cVar5 = *(char *)(lVar13 + 0x8fa);
  }
  else {
    cVar5 = *(char *)(lVar13 + 0x8fa);
  }
  if (cVar5 == '\0') {
    *(undefined4 *)(lVar13 + 0x708) = 0;
    *(undefined4 *)(*plVar21 + 0x718) = 0;
    *(undefined4 *)(*plVar21 + 0x728) = 0;
    *(undefined4 *)(*plVar21 + 0x738) = 0;
    *(undefined4 *)(*plVar21 + 0x758) = 0;
    *(undefined4 *)(*plVar21 + 0x768) = 0x3f800000;
    *(undefined4 *)(*plVar21 + 0x778) = 0;
    *(undefined4 *)(*plVar21 + 0x788) = 0;
    lVar13 = *plVar21;
    cVar5 = *(char *)(lVar13 + 0xaa0);
  }
  else {
    cVar5 = *(char *)(lVar13 + 0xaa0);
  }
  if (cVar5 == '\x05') {
    lVar12 = FUN_00333a70(param_2,*(undefined8 *)(lVar13 + 0xa40));
    lVar13 = *plVar21;
    if (lVar12 != 0) {
      *(float *)(lVar13 + 0x110) = (float)*(int *)(lVar12 + 0x30);
      lVar13 = *plVar21;
    }
  }
  if (*(char *)(lVar13 + 0xab0) == '\x05') {
    lVar12 = FUN_00333a70(param_2,*(undefined8 *)(lVar13 + 0xa60));
    lVar13 = *plVar21;
    if (lVar12 != 0) {
      *(float *)(lVar13 + 0x1a0) = (float)*(int *)(lVar12 + 0x30);
      lVar13 = *plVar21;
    }
  }
  if (*(char *)(lVar13 + 0xac0) == '\x05') {
    lVar12 = FUN_00333a70(param_2,*(undefined8 *)(lVar13 + 0xa80));
    lVar13 = *plVar21;
    if (lVar12 != 0) {
      *(float *)(lVar13 + 0x230) = (float)*(int *)(lVar12 + 0x30);
      lVar13 = *plVar21;
    }
  }
  uVar15 = (ulong)*(uint *)(lVar13 + 0x60);
  if (*(uint *)(lVar13 + 0x60) - 1 < 7) {
    lVar13 = uVar15 * 0x10 + 0x3c0;
    do {
      lVar17 = *plVar21;
      iVar24 = (int)uVar15;
      uVar15 = (ulong)(iVar24 + 1);
      lVar12 = lVar17 + (long)*(int *)(lVar17 + 0x60) * 0x10;
      uVar11 = *(undefined8 *)(lVar12 + 0x3b8);
      *(undefined8 *)(lVar17 + lVar13) = *(undefined8 *)(lVar12 + 0x3b0);
      ((undefined8 *)(lVar17 + lVar13))[1] = uVar11;
      lVar12 = *plVar21 + lVar13;
      lVar13 = lVar13 + 0x10;
      *(float *)(lVar12 + 0xc) = *(float *)(lVar12 + 0xc) + (float)iVar24;
    } while (iVar24 < 7);
    lVar13 = *plVar21;
    uVar14 = *(uint *)(lVar13 + 0x68);
  }
  else {
    uVar14 = *(uint *)(lVar13 + 0x68);
  }
  if (uVar14 - 1 < 7) {
    uVar15 = (ulong)uVar14;
    lVar13 = uVar15 * 0x10 + 0x4c0;
    do {
      lVar17 = *plVar21;
      iVar24 = (int)uVar15;
      uVar15 = (ulong)(iVar24 + 1);
      lVar12 = lVar17 + (long)*(int *)(lVar17 + 0x68) * 0x10;
      uVar11 = *(undefined8 *)(lVar12 + 0x4b8);
      *(undefined8 *)(lVar17 + lVar13) = *(undefined8 *)(lVar12 + 0x4b0);
      ((undefined8 *)(lVar17 + lVar13))[1] = uVar11;
      lVar12 = *plVar21 + lVar13;
      lVar13 = lVar13 + 0x10;
      *(float *)(lVar12 + 0xc) = *(float *)(lVar12 + 0xc) + (float)iVar24;
    } while (iVar24 < 7);
    lVar13 = *plVar21;
    uVar14 = *(uint *)(lVar13 + 100);
  }
  else {
    uVar14 = *(uint *)(lVar13 + 100);
  }
  if (uVar14 - 1 < 7) {
    uVar15 = (ulong)uVar14;
    lVar13 = uVar15 * 0x10 + 0x440;
    do {
      lVar17 = *plVar21;
      iVar24 = (int)uVar15;
      uVar15 = (ulong)(iVar24 + 1);
      lVar12 = lVar17 + (long)*(int *)(lVar17 + 100) * 0x10;
      uVar11 = *(undefined8 *)(lVar12 + 0x438);
      *(undefined8 *)(lVar17 + lVar13) = *(undefined8 *)(lVar12 + 0x430);
      ((undefined8 *)(lVar17 + lVar13))[1] = uVar11;
      lVar12 = *plVar21 + lVar13;
      lVar13 = lVar13 + 0x10;
      *(float *)(lVar12 + 0xc) = *(float *)(lVar12 + 0xc) + (float)iVar24;
    } while (iVar24 < 7);
    lVar13 = *plVar21;
    uVar14 = *(uint *)(lVar13 + 0x6c);
  }
  else {
    uVar14 = *(uint *)(lVar13 + 0x6c);
  }
  if (uVar14 - 1 < 7) {
    uVar15 = (ulong)uVar14;
    lVar13 = uVar15 * 0x10 + 0x540;
    do {
      lVar17 = *plVar21;
      iVar24 = (int)uVar15;
      uVar15 = (ulong)(iVar24 + 1);
      lVar12 = lVar17 + (long)*(int *)(lVar17 + 0x6c) * 0x10;
      uVar11 = *(undefined8 *)(lVar12 + 0x538);
      *(undefined8 *)(lVar17 + lVar13) = *(undefined8 *)(lVar12 + 0x530);
      ((undefined8 *)(lVar17 + lVar13))[1] = uVar11;
      lVar12 = *plVar21 + lVar13;
      lVar13 = lVar13 + 0x10;
      *(float *)(lVar12 + 0xc) = *(float *)(lVar12 + 0xc) + (float)iVar24;
    } while (iVar24 < 7);
    lVar13 = *plVar21;
    uVar14 = *(uint *)(lVar13 + 0x70);
  }
  else {
    uVar14 = *(uint *)(lVar13 + 0x70);
  }
  if (uVar14 - 1 < 7) {
    uVar15 = (ulong)uVar14;
    lVar13 = uVar15 * 0x10 + 0x600;
    do {
      lVar17 = *plVar21;
      iVar24 = (int)uVar15;
      uVar15 = (ulong)(iVar24 + 1);
      lVar12 = lVar17 + (long)*(int *)(lVar17 + 0x70) * 0x10;
      uVar11 = *(undefined8 *)(lVar12 + 0x5f8);
      *(undefined8 *)(lVar17 + lVar13) = *(undefined8 *)(lVar12 + 0x5f0);
      ((undefined8 *)(lVar17 + lVar13))[1] = uVar11;
      lVar12 = *plVar21 + lVar13;
      lVar13 = lVar13 + 0x10;
      *(float *)(lVar12 + 0xc) = *(float *)(lVar12 + 0xc) + (float)iVar24;
    } while (iVar24 < 7);
    lVar13 = *plVar21;
    uVar14 = *(uint *)(lVar13 + 0x74);
  }
  else {
    uVar14 = *(uint *)(lVar13 + 0x74);
  }
  if (uVar14 - 1 < 7) {
    uVar15 = (ulong)uVar14;
    lVar13 = uVar15 * 0x10 + 0x680;
    do {
      lVar17 = *plVar21;
      iVar24 = (int)uVar15;
      uVar15 = (ulong)(iVar24 + 1);
      lVar12 = lVar17 + (long)*(int *)(lVar17 + 0x74) * 0x10;
      uVar11 = *(undefined8 *)(lVar12 + 0x678);
      *(undefined8 *)(lVar17 + lVar13) = *(undefined8 *)(lVar12 + 0x670);
      ((undefined8 *)(lVar17 + lVar13))[1] = uVar11;
      lVar12 = *plVar21 + lVar13;
      lVar13 = lVar13 + 0x10;
      *(float *)(lVar12 + 0xc) = *(float *)(lVar12 + 0xc) + (float)iVar24;
    } while (iVar24 < 7);
    lVar13 = *plVar21;
    cVar5 = *(char *)(lVar13 + 0x920);
  }
  else {
    cVar5 = *(char *)(lVar13 + 0x920);
  }
  fVar22 = 0.0;
  if (cVar5 != '\0') {
    fVar22 = (float)*(int *)(lVar13 + 0x92c);
  }
  fVar29 = 0.0;
  *(float *)(lVar13 + 0x80) = fVar22;
  auVar56 = ZEXT816(0x3f800000);
  uVar39 = auVar56[2];
  uVar41 = auVar56[3];
  uVar36 = 0;
  uVar37 = 0;
  if (*(char *)(*plVar21 + 0x925) != '\0') {
    uVar36 = uVar39;
    uVar37 = uVar41;
  }
  *(uint *)(*plVar21 + 0x94) = (uint)CONCAT11(uVar37,uVar36) << 0x10;
  lVar13 = *plVar21;
  if (*(char *)(lVar13 + 0x921) != '\0') {
    fVar29 = (float)*(int *)(lVar13 + 0x930);
  }
  *(float *)(lVar13 + 0x84) = fVar29;
  fVar22 = 0.0;
  uVar36 = 0;
  uVar37 = 0;
  if (*(char *)(*plVar21 + 0x926) != '\0') {
    uVar36 = uVar39;
    uVar37 = uVar41;
  }
  *(uint *)(*plVar21 + 0x98) = (uint)CONCAT11(uVar37,uVar36) << 0x10;
  uVar36 = 0;
  uVar37 = 0;
  uVar38 = 0;
  uVar40 = 0;
  lVar13 = *plVar21;
  if (*(char *)(lVar13 + 0x922) != '\0') {
    fVar29 = (float)*(int *)(lVar13 + 0x934);
    uVar36 = SUB41(fVar29,0);
    uVar37 = (undefined1)((uint)fVar29 >> 8);
    uVar38 = (undefined1)((uint)fVar29 >> 0x10);
    uVar40 = (undefined1)((uint)fVar29 >> 0x18);
  }
  *(uint *)(lVar13 + 0x88) = CONCAT13(uVar40,CONCAT12(uVar38,CONCAT11(uVar37,uVar36)));
  uVar36 = 0;
  uVar37 = 0;
  if (*(char *)(*plVar21 + 0x927) != '\0') {
    uVar36 = uVar39;
    uVar37 = uVar41;
  }
  *(uint *)(*plVar21 + 0x9c) = (uint)CONCAT11(uVar37,uVar36) << 0x10;
  lVar13 = *plVar21;
  if (*(char *)(lVar13 + 0x923) != '\0') {
    fVar22 = (float)*(int *)(lVar13 + 0x938);
  }
  *(float *)(lVar13 + 0x8c) = fVar22;
  uVar36 = 0;
  uVar37 = 0;
  if (*(char *)(*plVar21 + 0x928) != '\0') {
    uVar36 = uVar39;
    uVar37 = uVar41;
  }
  *(uint *)(*plVar21 + 0xa0) = (uint)CONCAT11(uVar37,uVar36) << 0x10;
  uVar36 = 0;
  uVar37 = 0;
  uVar39 = 0;
  uVar41 = 0;
  lVar13 = *plVar21;
  if (*(char *)(lVar13 + 0x924) != '\0') {
    fVar22 = (float)*(int *)(lVar13 + 0x93c);
    uVar36 = SUB41(fVar22,0);
    uVar37 = (undefined1)((uint)fVar22 >> 8);
    uVar39 = (undefined1)((uint)fVar22 >> 0x10);
    uVar41 = (undefined1)((uint)fVar22 >> 0x18);
  }
  *(uint *)(lVar13 + 0x90) = CONCAT13(uVar41,CONCAT12(uVar39,CONCAT11(uVar37,uVar36)));
  uVar23 = 0;
  if (*(char *)(*plVar21 + 0x929) != '\0') {
    uVar23 = auVar56._0_4_;
  }
  *(undefined4 *)(*plVar21 + 0xa4) = uVar23;
  bVar42 = *(byte *)(*plVar21 + 0x880);
  if ((0xf < bVar42) || (uVar14 = (uint)bVar42, (1 << (ulong)(uVar14 & 0x1f) & 0xa064U) == 0)) {
    *(undefined4 *)(*plVar21 + 0x8bc) = 0xffffffff;
    uVar14 = (uint)*(byte *)(*plVar21 + 0x880);
  }
  if (uVar14 - 2 < 0xe) {
                    /* WARNING: Could not recover jumptable at 0x003244e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_003244e8 + (ulong)(byte)(&DAT_04129df6)[uVar14 - 2] * 4))();
    return;
  }
  local_38 = 0;
  FUN_00325090(&local_38,param_1);
  *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x50) = (undefined4)local_38;
  *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x54) = local_38._4_4_;
  if (*(undefined4 **)(param_1 + 0x290) != (undefined4 *)0x0) {
    *(undefined4 *)(*plVar21 + 0x5c) = **(undefined4 **)(param_1 + 0x290);
  }
  lVar13 = *(long *)(param_1 + 0x10);
  uVar11 = *(undefined8 *)*(undefined1 (*) [12])(lVar13 + 0x7c8);
  auVar10 = *(undefined1 (*) [12])(lVar13 + 0x7c8);
  fVar22 = *(float *)PTR_Float2Pi_04bcede0;
  fVar30 = *(float *)PTR_Float1Divided2Pi_04bcedd8;
  fVar51 = *(float *)PTR_FloatPi_04bcedc8;
  fVar29 = (float)uVar11;
  fVar52 = -fVar51;
  fVar62 = *(float *)PTR_SinCoefficients_04bcede8;
  fVar34 = (float)*(undefined8 *)(PTR_SinCoefficients_04bcede8 + 4);
  auVar25._0_4_ = fVar29 - (float)(int)(fVar29 * fVar30) * fVar22;
  auVar25._4_4_ = auVar10._4_4_ - (float)(int)((float)((ulong)uVar11 >> 0x20) * fVar30) * fVar22;
  auVar25._8_4_ = auVar10._8_4_ - (float)(int)(*(float *)(lVar13 + 2000) * fVar30) * fVar22;
  auVar25._12_4_ = 0.0 - (float)(int)(fVar30 * 0.0) * fVar22;
  fVar22 = *(float *)PTR_FloatPiDivided2_04bcedc0;
  fVar29 = -fVar22;
  auVar31._0_4_ = -(uint)(fVar22 < auVar25._0_4_);
  auVar31._4_4_ = -(uint)(fVar22 < auVar25._4_4_);
  auVar31._8_4_ = -(uint)(fVar22 < auVar25._8_4_);
  auVar31._12_4_ = -(uint)(fVar22 < auVar25._12_4_);
  auVar55._0_4_ = fVar51 - auVar25._0_4_;
  auVar55._4_4_ = fVar51 - auVar25._4_4_;
  auVar55._8_4_ = fVar51 - auVar25._8_4_;
  auVar55._12_4_ = fVar51 - auVar25._12_4_;
  auVar25 = auVar25 ^ (auVar25 ^ auVar55) & auVar31;
  fVar22 = *(float *)(PTR_CosCoefficients_04bcedf0 + 4);
  fVar30 = *(float *)(PTR_CosCoefficients_04bcedf0 + 0xc);
  iVar24 = -(uint)(auVar25._0_4_ < fVar29);
  iVar6 = -(uint)(auVar25._4_4_ < fVar29);
  bVar42 = (byte)((uint)iVar6 >> 8);
  bVar43 = (byte)((uint)iVar6 >> 0x10);
  bVar44 = (byte)((uint)iVar6 >> 0x18);
  iVar7 = -(uint)(auVar25._8_4_ < fVar29);
  bVar45 = (byte)((uint)iVar7 >> 8);
  bVar46 = (byte)((uint)iVar7 >> 0x10);
  bVar47 = (byte)((uint)iVar7 >> 0x18);
  iVar8 = -(uint)(auVar25._12_4_ < fVar29);
  bVar48 = (byte)((uint)iVar8 >> 8);
  bVar49 = (byte)((uint)iVar8 >> 0x10);
  bVar50 = (byte)((uint)iVar8 >> 0x18);
  auVar32[0] = (byte)iVar24 | (byte)auVar31._0_4_;
  auVar32[1] = (byte)((uint)iVar24 >> 8) | (byte)((uint)auVar31._0_4_ >> 8);
  auVar32[2] = (byte)((uint)iVar24 >> 0x10) | (byte)((uint)auVar31._0_4_ >> 0x10);
  auVar32[3] = (byte)((uint)iVar24 >> 0x18) | (byte)((uint)auVar31._0_4_ >> 0x18);
  auVar32[4] = (byte)iVar6 | (byte)auVar31._4_4_;
  auVar32[5] = bVar42 | (byte)((uint)auVar31._4_4_ >> 8);
  auVar32[6] = bVar43 | (byte)((uint)auVar31._4_4_ >> 0x10);
  auVar32[7] = bVar44 | (byte)((uint)auVar31._4_4_ >> 0x18);
  auVar32[8] = (byte)iVar7 | (byte)auVar31._8_4_;
  auVar32[9] = bVar45 | (byte)((uint)auVar31._8_4_ >> 8);
  auVar32[10] = bVar46 | (byte)((uint)auVar31._8_4_ >> 0x10);
  auVar32[0xb] = bVar47 | (byte)((uint)auVar31._8_4_ >> 0x18);
  auVar32[0xc] = (byte)iVar8 | (byte)auVar31._12_4_;
  auVar32[0xd] = bVar48 | (byte)((uint)auVar31._12_4_ >> 8);
  auVar32[0xe] = bVar49 | (byte)((uint)auVar31._12_4_ >> 0x10);
  auVar32[0xf] = bVar50 | (byte)((uint)auVar31._12_4_ >> 0x18);
  auVar9._4_4_ = fVar52 - auVar25._4_4_;
  auVar9._0_4_ = fVar52 - auVar25._0_4_;
  auVar9._8_4_ = fVar52 - auVar25._8_4_;
  auVar9._12_4_ = fVar52 - auVar25._12_4_;
  auVar56[4] = (byte)iVar6;
  auVar56._0_4_ = iVar24;
  auVar56[5] = bVar42;
  auVar56[6] = bVar43;
  auVar56[7] = bVar44;
  auVar56[8] = (byte)iVar7;
  auVar56[9] = bVar45;
  auVar56[10] = bVar46;
  auVar56[0xb] = bVar47;
  auVar56[0xc] = (byte)iVar8;
  auVar56[0xd] = bVar48;
  auVar56[0xe] = bVar49;
  auVar56[0xf] = bVar50;
  auVar25 = auVar25 ^ (auVar25 ^ auVar9) & auVar56;
  fVar29 = *(float *)PTR_CosCoefficients_04bcedf0;
  fVar51 = auVar25._0_4_;
  fVar58 = fVar51 * fVar51;
  fVar52 = auVar25._4_4_;
  fVar59 = fVar52 * fVar52;
  fVar27 = auVar25._8_4_;
  fVar60 = fVar27 * fVar27;
  fVar28 = auVar25._12_4_;
  fVar61 = fVar28 * fVar28;
  fVar53 = -*(float *)(PTR_CosCoefficients_04bcedf0 + 8);
  fVar63 = -(float)((ulong)*(undefined8 *)(PTR_SinCoefficients_04bcede8 + 4) >> 0x20);
  fVar35 = (float)*(undefined8 *)(PTR_SinCoefficients_04bcede8 + 0xc);
  fVar54 = -*(float *)(PTR_CosCoefficients_04bcedf0 + 0x10);
  fVar64 = -(float)((ulong)*(undefined8 *)(PTR_SinCoefficients_04bcede8 + 0xc) >> 0x20);
  auVar56 = NEON_fmov(0x3f800000,4);
  auVar33._0_4_ =
       auVar56._0_4_ +
       fVar58 * (fVar54 + fVar58 * (fVar30 + fVar58 * (fVar53 + fVar58 * (fVar22 - fVar58 * fVar29))
                                   ));
  auVar33._4_4_ =
       auVar56._4_4_ +
       fVar59 * (fVar54 + fVar59 * (fVar30 + fVar59 * (fVar53 + fVar59 * (fVar22 - fVar59 * fVar29))
                                   ));
  auVar33._8_4_ =
       auVar56._8_4_ +
       fVar60 * (fVar54 + fVar60 * (fVar30 + fVar60 * (fVar53 + fVar60 * (fVar22 - fVar60 * fVar29))
                                   ));
  auVar33._12_4_ =
       auVar56._12_4_ +
       fVar61 * (fVar54 + fVar61 * (fVar30 + fVar61 * (fVar53 + fVar61 * (fVar22 - fVar61 * fVar29))
                                   ));
  fVar22 = -auVar33._4_4_;
  fVar29 = -auVar33._8_4_;
  fVar30 = -auVar33._12_4_;
  auVar26._0_4_ =
       fVar51 * (auVar56._0_4_ +
                fVar58 * (fVar64 + fVar58 * (fVar35 + fVar58 * (fVar63 + fVar58 * (fVar34 - fVar58 *
                                                                                            fVar62))
                                            )));
  auVar26._4_4_ =
       fVar52 * (auVar56._4_4_ +
                fVar59 * (fVar64 + fVar59 * (fVar35 + fVar59 * (fVar63 + fVar59 * (fVar34 - fVar59 *
                                                                                            fVar62))
                                            )));
  auVar26._8_4_ =
       fVar27 * (auVar56._8_4_ +
                fVar60 * (fVar64 + fVar60 * (fVar35 + fVar60 * (fVar63 + fVar60 * (fVar34 - fVar60 *
                                                                                            fVar62))
                                            )));
  auVar26._12_4_ =
       fVar28 * (auVar56._12_4_ +
                fVar61 * (fVar64 + fVar61 * (fVar35 + fVar61 * (fVar63 + fVar61 * (fVar34 - fVar61 *
                                                                                            fVar62))
                                            )));
  auVar56 = NEON_ext(auVar26,auVar26,8,1);
  auVar65[4] = SUB41(fVar22,0);
  auVar65._0_4_ = -auVar33._0_4_;
  auVar65[5] = (char)((uint)fVar22 >> 8);
  auVar65[6] = (char)((uint)fVar22 >> 0x10);
  auVar65[7] = (char)((uint)fVar22 >> 0x18);
  auVar65[8] = SUB41(fVar29,0);
  auVar65[9] = (char)((uint)fVar29 >> 8);
  auVar65[10] = (char)((uint)fVar29 >> 0x10);
  auVar65[0xb] = (char)((uint)fVar29 >> 0x18);
  auVar65[0xc] = SUB41(fVar30,0);
  auVar65[0xd] = (char)((uint)fVar30 >> 8);
  auVar65[0xe] = (char)((uint)fVar30 >> 0x10);
  auVar65[0xf] = (char)((uint)fVar30 >> 0x18);
  auVar33 = auVar33 ^ (auVar33 ^ auVar65) & auVar32;
  fVar34 = auVar33._4_4_;
  auVar65 = NEON_ext(auVar33,auVar33,8,1);
  fVar29 = auVar65._0_4_;
  fVar30 = auVar56._0_4_;
  fVar58 = fVar34 * (float)DAT_041015a8;
  fVar59 = (float)((ulong)DAT_041015a8 >> 0x20) * 0.0;
  uVar14 = *(uint *)(lVar13 + 0x7b8);
  fVar60 = auVar26._4_4_ * (float)DAT_04101610;
  fVar61 = (float)((ulong)DAT_04101610 >> 0x20) * 0.0;
  fVar53 = auVar33._0_4_;
  fVar22 = *(float *)(lVar13 + 0x7e8);
  uVar11 = *(undefined8 *)(lVar13 + 0x7b0);
  fVar51 = fVar30 * fVar53 * (float)_DAT_04101d60 + fVar29 * auVar26._4_4_ * auVar26._0_4_;
  fVar52 = fVar29 * fVar53 * (float)((ulong)_DAT_04101d60 >> 0x20) +
           fVar30 * auVar26._4_4_ * auVar26._0_4_;
  fVar27 = fVar53 * 0.0 * (float)_UNK_04101d68 + fVar58 * auVar26._0_4_;
  fVar28 = fVar53 * 0.0 * (float)((ulong)_UNK_04101d68 >> 0x20) + fVar59 * auVar26._0_4_;
  fVar54 = fVar30 * auVar26._0_4_ * (float)_DAT_04102790 + fVar29 * auVar26._4_4_ * fVar53;
  fVar35 = fVar29 * auVar26._0_4_ * (float)((ulong)_DAT_04102790 >> 0x20) +
           fVar30 * auVar26._4_4_ * fVar53;
  fVar58 = auVar26._0_4_ * 0.0 * (float)_UNK_04102798 + fVar58 * fVar53;
  fVar53 = auVar26._0_4_ * 0.0 * (float)((ulong)_UNK_04102798 >> 0x20) + fVar59 * fVar53;
  fVar59 = (float)*(undefined8 *)(lVar13 + 0x7e0);
  auVar66._0_8_ = CONCAT44(fVar30 * fVar34 * fVar59,fVar29 * fVar34 * fVar59);
  auVar66._8_4_ = fVar60 * fVar59;
  auVar66._12_4_ = fVar61 * fVar59;
  fVar59 = (float)((ulong)*(undefined8 *)(lVar13 + 0x7e0) >> 0x20);
  *(ulong *)(param_1 + 0x208) = CONCAT44(fVar61,fVar60);
  *(ulong *)(param_1 + 0x200) = CONCAT44(fVar30 * fVar34,fVar29 * fVar34);
  *(float *)(param_1 + 0x218) = fVar27;
  *(float *)(param_1 + 0x21c) = fVar28;
  *(float *)(param_1 + 0x210) = fVar51;
  *(float *)(param_1 + 0x214) = fVar52;
  *(float *)(param_1 + 0x228) = fVar58;
  *(float *)(param_1 + 0x22c) = fVar53;
  *(float *)(param_1 + 0x220) = fVar54;
  *(float *)(param_1 + 0x224) = fVar35;
  *(ulong *)(param_1 + 0x238) = (ulong)uVar14;
  *(undefined8 *)(param_1 + 0x230) = uVar11;
  auVar57._0_8_ = CONCAT44(fVar35 * fVar22,fVar54 * fVar22);
  auVar57._8_4_ = fVar58 * fVar22;
  auVar57._12_4_ = fVar53 * fVar22;
  *(long *)(param_1 + 0x1c8) = auVar66._8_8_;
  *(undefined8 *)(param_1 + 0x1c0) = auVar66._0_8_;
  *(ulong *)(param_1 + 0x1d8) = CONCAT44(fVar28 * fVar59,fVar27 * fVar59);
  *(ulong *)(param_1 + 0x1d0) = CONCAT44(fVar52 * fVar59,fVar51 * fVar59);
  *(long *)(param_1 + 0x1e8) = auVar57._8_8_;
  *(undefined8 *)(param_1 + 0x1e0) = auVar57._0_8_;
  *(ulong *)(param_1 + 0x1f8) = (ulong)uVar14;
  *(undefined8 *)(param_1 + 0x1f0) = uVar11;
  uVar11 = *(undefined8 *)(lVar13 + 0x700);
  lVar12 = *(long *)(param_1 + 0x2c8);
  *(ulong *)(param_1 + 0x338) = (ulong)*(uint *)(lVar13 + 0x708);
  *(undefined8 *)(param_1 + 0x330) = uVar11;
  if (lVar12 == 0) {
    *(undefined4 *)(param_1 + 0x420) = *(undefined4 *)(lVar13 + 0x900);
    lVar12 = *(long *)(param_1 + 0x2c0);
  }
  else {
    uVar14 = *(uint *)(lVar12 + 4);
    if ((int)uVar14 < 1) {
      *(undefined4 *)(param_1 + 0x420) = 0;
      lVar12 = *(long *)(param_1 + 0x2c0);
    }
    else {
      if (uVar14 == 1) {
        uVar15 = 0;
        fVar22 = 0.0;
      }
      else {
        fVar22 = 0.0;
        uVar15 = 0;
        pfVar20 = (float *)(lVar12 + 0x1c);
        do {
          uVar15 = uVar15 + 2;
          fVar29 = pfVar20[-4];
          if (pfVar20[-4] <= fVar22) {
            fVar29 = fVar22;
          }
          fVar22 = *pfVar20;
          if (*pfVar20 <= fVar29) {
            fVar22 = fVar29;
          }
          pfVar20 = pfVar20 + 8;
        } while (((ulong)uVar14 & 0xfffffffe) != uVar15);
      }
      fVar29 = fVar22;
      if (((uVar14 & 1) != 0) &&
         (fVar29 = *(float *)(lVar12 + uVar15 * 0x10 + 0xc), fVar29 <= fVar22)) {
        fVar29 = fVar22;
      }
      *(int *)(param_1 + 0x420) = (int)fVar29;
      lVar12 = *(long *)(param_1 + 0x2c0);
    }
  }
  if (lVar12 == 0) {
    fVar22 = *(float *)(lVar13 + 0x848);
  }
  else {
    uVar14 = *(uint *)(lVar12 + 4);
    if ((int)uVar14 < 1) {
      fVar22 = 0.0;
    }
    else {
      if (uVar14 == 1) {
        uVar15 = 0;
        fVar29 = 0.0;
      }
      else {
        fVar29 = 0.0;
        uVar15 = 0;
        pfVar20 = (float *)(lVar12 + 0x1c);
        do {
          uVar15 = uVar15 + 2;
          fVar22 = pfVar20[-4];
          if (pfVar20[-4] <= fVar29) {
            fVar22 = fVar29;
          }
          fVar29 = *pfVar20;
          if (*pfVar20 <= fVar22) {
            fVar29 = fVar22;
          }
          pfVar20 = pfVar20 + 8;
        } while (((ulong)uVar14 & 0xfffffffe) != uVar15);
      }
      fVar22 = fVar29;
      if (((uVar14 & 1) != 0) &&
         (fVar22 = *(float *)(lVar12 + uVar15 * 0x10 + 0xc), fVar22 <= fVar29)) {
        fVar22 = fVar29;
      }
    }
  }
  lVar13 = *(long *)(param_1 + 0x28);
  *(float *)(param_1 + 0x424) = fVar22;
  lVar12 = FUN_00347cc4(*(undefined8 *)(param_1 + 0x20));
  if (lVar12 != 0) {
    memcpy((void *)(lVar12 + lVar13),*(void **)(param_1 + 0x10),0x790);
    uVar11 = *(undefined8 *)(param_1 + 0x20);
    FUN_00347cdc(uVar11,*(undefined8 *)(param_1 + 0x28),0x790);
    FUN_00347cd8(uVar11);
  }
  if (*(long *)(param_1 + 0x348) != 0) {
    lVar12 = *(long *)(param_1 + 0x30);
    lVar13 = FUN_00347cc4(*(undefined8 *)(param_1 + 0x20));
    if (lVar13 != 0) {
      puVar16 = *(undefined8 **)(param_1 + 0x348);
      puVar1 = (undefined8 *)(lVar13 + lVar12);
      uVar11 = *puVar16;
      uVar3 = puVar16[1];
      uVar4 = puVar16[3];
      puVar1[2] = puVar16[2];
      puVar1[3] = uVar4;
      *puVar1 = uVar11;
      puVar1[1] = uVar3;
      uVar11 = puVar16[4];
      uVar3 = puVar16[5];
      uVar4 = puVar16[7];
      puVar1[6] = puVar16[6];
      puVar1[7] = uVar4;
      puVar1[4] = uVar11;
      puVar1[5] = uVar3;
      uVar11 = puVar16[8];
      uVar3 = puVar16[9];
      uVar4 = puVar16[0xb];
      puVar1[10] = puVar16[10];
      puVar1[0xb] = uVar4;
      puVar1[8] = uVar11;
      puVar1[9] = uVar3;
      uVar11 = puVar16[0xc];
      uVar3 = puVar16[0xd];
      uVar4 = puVar16[0xf];
      puVar1[0xe] = puVar16[0xe];
      puVar1[0xf] = uVar4;
      puVar1[0xc] = uVar11;
      puVar1[0xd] = uVar3;
      uVar11 = *(undefined8 *)(param_1 + 0x20);
      FUN_00347cdc(uVar11,*(undefined8 *)(param_1 + 0x30),0x80);
      FUN_00347cd8(uVar11);
    }
  }
  if (*(long *)(param_1 + 0x308) != 0) {
    lVar12 = *(long *)(param_1 + 0x38);
    lVar13 = FUN_00347cc4(*(undefined8 *)(param_1 + 0x20));
    if (lVar13 != 0) {
      memcpy((void *)(lVar13 + lVar12),*(void **)(param_1 + 0x308),*(size_t *)(param_1 + 0x310));
      uVar11 = *(undefined8 *)(param_1 + 0x20);
      FUN_00347cdc(uVar11,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x310));
      FUN_00347cd8(uVar11);
    }
  }
  if (*(char *)(param_1 + 3) != '\0') {
    lVar12 = *(long *)(param_1 + 0x40);
    lVar13 = FUN_00347cc4(*(undefined8 *)(param_1 + 0x20));
    if (lVar13 != 0) {
      lVar17 = *(long *)(param_1 + 0x248);
      puVar2 = (undefined4 *)(lVar13 + lVar12);
      if (lVar17 != 0) {
        *puVar2 = *(undefined4 *)(lVar17 + 4);
        puVar2[1] = *(undefined4 *)(lVar17 + 8);
        puVar2[2] = *(undefined4 *)(lVar17 + 0xc);
        puVar2[3] = (float)*(int *)(*(long *)(param_1 + 0x248) + 0x10);
        puVar2[4] = *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x2c);
        puVar2[5] = *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x30);
        puVar2[6] = *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x34);
        puVar2[7] = *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x38);
        puVar2[8] = *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x1c);
        puVar2[9] = *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x20);
        puVar2[10] = *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x24);
        puVar2[0xb] = *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x28);
        uVar23 = NEON_ucvtf((uint)**(byte **)(param_1 + 0x248));
        puVar2[0xc] = uVar23;
        uVar23 = NEON_ucvtf((uint)*(byte *)(*(long *)(param_1 + 0x248) + 1));
        puVar2[0xd] = uVar23;
        uVar23 = NEON_ucvtf((uint)*(byte *)(*(long *)(param_1 + 0x248) + 2));
        puVar2[0xe] = uVar23;
        puVar2[0x10] = *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x14);
        puVar2[0x11] = *(undefined4 *)(*(long *)(param_1 + 0x248) + 0x18);
      }
      puVar18 = *(undefined4 **)(param_1 + 0x250);
      if (puVar18 != (undefined4 *)0x0) {
        puVar2[0x14] = *puVar18;
        puVar2[0x15] = puVar18[1];
        puVar2[0x16] = puVar18[2];
        puVar2[0x17] = (float)*(int *)(*(long *)(param_1 + 0x250) + 0xc);
      }
      lVar13 = *(long *)(param_1 + 0x278);
      if (lVar13 != 0) {
        puVar2[0x18] = *(undefined4 *)(lVar13 + 4);
        puVar2[0x19] = *(undefined4 *)(lVar13 + 8);
        puVar2[0x1a] = *(undefined4 *)(lVar13 + 0xc);
        uVar23 = NEON_ucvtf((uint)**(byte **)(param_1 + 0x278));
        puVar2[0x1b] = uVar23;
      }
      lVar13 = *(long *)(param_1 + 600);
      if (lVar13 != 0) {
        puVar2[0x1c] = *(undefined4 *)(lVar13 + 8);
        puVar2[0x1d] = *(undefined4 *)(lVar13 + 0xc);
        puVar2[0x1e] = *(undefined4 *)(lVar13 + 0x10);
        puVar2[0x1f] = *(undefined4 *)(*(long *)(param_1 + 600) + 4);
        uVar23 = NEON_ucvtf((uint)**(byte **)(param_1 + 600));
        puVar2[0x20] = uVar23;
        uVar23 = NEON_ucvtf((uint)*(byte *)(*(long *)(param_1 + 600) + 1));
        puVar2[0x21] = uVar23;
        uVar23 = NEON_ucvtf((uint)*(byte *)(*(long *)(param_1 + 600) + 2));
        puVar2[0x22] = uVar23;
        uVar23 = NEON_ucvtf((uint)*(byte *)(*(long *)(param_1 + 600) + 3));
        puVar2[0x23] = uVar23;
        uVar23 = NEON_ucvtf((uint)*(byte *)(*(long *)(param_1 + 600) + 0xac));
        puVar2[0x24] = uVar23;
      }
      lVar13 = *(long *)(param_1 + 0x270);
      if (lVar13 != 0) {
        puVar2[0x28] = *(undefined4 *)(lVar13 + 4);
        puVar2[0x29] = *(undefined4 *)(lVar13 + 8);
        puVar2[0x2a] = *(undefined4 *)(lVar13 + 0xc);
        puVar2[0x2b] = *(undefined4 *)(*(long *)(param_1 + 0x270) + 0x10);
        uVar23 = NEON_ucvtf((uint)**(byte **)(param_1 + 0x270));
        puVar2[0x2c] = uVar23;
        uVar23 = NEON_ucvtf((uint)*(byte *)(*(long *)(param_1 + 0x270) + 1));
        puVar2[0x2d] = uVar23;
      }
      if (*(undefined4 **)(param_1 + 0x260) != (undefined4 *)0x0) {
        puVar2[0x30] = **(undefined4 **)(param_1 + 0x260);
        puVar2[0x31] = *(undefined4 *)(*(long *)(param_1 + 0x260) + 8);
        uVar23 = NEON_ucvtf(*(undefined4 *)(*(long *)(param_1 + 0x260) + 4));
        puVar2[0x32] = uVar23;
      }
      pbVar19 = *(byte **)(param_1 + 0x268);
      if (pbVar19 != (byte *)0x0) {
        fVar22 = (float)NEON_ucvtf((uint)pbVar19[1]);
        puVar2[0x34] = fVar22 + (float)((uint)*pbVar19 << 1);
        puVar2[0x35] = *(undefined4 *)(*(long *)(param_1 + 0x268) + 8);
        puVar2[0x36] = *(undefined4 *)(*(long *)(param_1 + 0x268) + 0x10);
        puVar2[0x37] = *(undefined4 *)(*(long *)(param_1 + 0x268) + 4);
      }
      lVar13 = *(long *)(param_1 + 0x280);
      if (lVar13 != 0) {
        puVar2[0x38] = *(undefined4 *)(lVar13 + 0x10);
        puVar2[0x39] = *(undefined4 *)(lVar13 + 0x14);
        puVar2[0x3a] = *(undefined4 *)(lVar13 + 0x18);
        puVar2[0x3b] = *(undefined4 *)(*(long *)(param_1 + 0x280) + 0x1c);
        lVar13 = *(long *)(param_1 + 0x280);
        puVar2[0x3c] = *(undefined4 *)(lVar13 + 4);
        puVar2[0x3d] = *(undefined4 *)(lVar13 + 8);
        puVar2[0x3e] = *(undefined4 *)(lVar13 + 0xc);
        puVar2[0x3f] = *(undefined4 *)(*(long *)(param_1 + 0x280) + 0x20);
        uVar23 = NEON_ucvtf((uint)*(byte *)(*(long *)(param_1 + 0x280) + 1));
        puVar2[0x40] = uVar23;
        uVar23 = NEON_ucvtf((uint)*(byte *)(*(long *)(param_1 + 0x280) + 2));
        puVar2[0x41] = uVar23;
      }
      if (*(undefined4 **)(param_1 + 0x288) != (undefined4 *)0x0) {
        puVar2[0x54] = **(undefined4 **)(param_1 + 0x288);
        puVar2[0x55] = *(undefined4 *)(*(long *)(param_1 + 0x288) + 4);
        iVar24 = *(int *)(*(long *)(param_1 + 0x288) + 8);
        puVar2[0x57] = 0;
        puVar2[0x56] = (float)iVar24;
      }
      if (*(long *)(param_1 + 0x290) != 0) {
        puVar2[0x44] = *(undefined4 *)(*(long *)(param_1 + 0x290) + 4);
        puVar2[0x45] = *(undefined4 *)(*(long *)(param_1 + 0x290) + 8);
        puVar2[0x46] = *(undefined4 *)(*(long *)(param_1 + 0x290) + 0xc);
        puVar2[0x47] = *(undefined4 *)(*(long *)(param_1 + 0x290) + 0x10);
        puVar2[0x48] = *(undefined4 *)(*(long *)(param_1 + 0x290) + 0x14);
        puVar2[0x49] = *(undefined4 *)(*(long *)(param_1 + 0x290) + 0x18);
        puVar2[0x4a] = *(undefined4 *)(*(long *)(param_1 + 0x290) + 0x1c);
        puVar2[0x4b] = *(undefined4 *)(*(long *)(param_1 + 0x290) + 0x20);
        puVar2[0x4c] = *(undefined4 *)(*(long *)(param_1 + 0x290) + 0x24);
        puVar2[0x4d] = *(undefined4 *)(*(long *)(param_1 + 0x290) + 0x28);
        puVar2[0x4e] = *(undefined4 *)(*(long *)(param_1 + 0x290) + 0x2c);
        puVar2[0x4f] = *(undefined4 *)(*(long *)(param_1 + 0x290) + 0x30);
        puVar2[0x50] = *(undefined4 *)(*(long *)(param_1 + 0x290) + 0x34);
        puVar2[0x51] = *(undefined4 *)(*(long *)(param_1 + 0x290) + 0x38);
        puVar2[0x52] = *(undefined4 *)(*(long *)(param_1 + 0x290) + 0x3c);
        puVar2[0x53] = *(undefined4 *)(*(long *)(param_1 + 0x290) + 0x40);
      }
      uVar11 = *(undefined8 *)(param_1 + 0x20);
      FUN_00347cdc(uVar11,*(undefined8 *)(param_1 + 0x40),0x160);
      FUN_00347cd8(uVar11);
    }
  }
  return;
}

