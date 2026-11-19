
void FUN_03ac3390(long param_1,long *param_2)

{
  uint *puVar1;
  byte *pbVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  long *plVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  ushort uVar15;
  uint uVar16;
  char cVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  char cVar21;
  byte bVar22;
  ushort uVar23;
  ushort uVar24;
  uint uVar25;
  bool bVar26;
  bool bVar27;
  bool bVar28;
  bool bVar29;
  bool bVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  ulong uVar34;
  long lVar35;
  undefined4 *puVar36;
  undefined8 uVar37;
  uint uVar38;
  undefined4 *puVar39;
  undefined8 uVar40;
  float *pfVar41;
  uint uVar42;
  uint uVar43;
  undefined4 uVar44;
  uint uVar45;
  ulong uVar46;
  ulong uVar47;
  undefined8 uVar48;
  long lVar49;
  ulong uVar50;
  long lVar51;
  long lVar52;
  undefined4 *puVar53;
  long *plVar54;
  long lVar55;
  undefined8 *puVar56;
  ulong uVar57;
  long lVar58;
  long lVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  undefined4 uVar64;
  float fVar65;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  uint local_110;
  undefined8 local_10c;
  undefined1 local_c4;
  undefined *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  uint local_98;
  undefined8 local_94;
  undefined8 local_78;
  
  if (*(char *)(param_1 + 0x468) == '\0') {
    return;
  }
  uVar16 = *(uint *)(param_2 + 1);
  lVar58 = *(long *)(param_1 + 0x1d8);
  if (*(uint *)(param_1 + 0x1d0) <= uVar16) {
    uVar16 = 0;
  }
  if (*(int *)(param_1 + 0x488) == 0) {
    lVar59 = param_2[2];
  }
  else {
    lVar59 = param_2[3];
  }
  if (lVar59 == 0) {
    return;
  }
  plVar54 = (long *)(lVar58 + (long)(int)uVar16 * 0x1340);
  lVar55 = plVar54[2];
  (**(code **)(*plVar54 + 0x20))(plVar54);
  (**(code **)(*plVar54 + 0x20))(plVar54);
  lVar52 = *(long *)plVar54[1];
  bVar22 = (&DAT_041b370c)[(ulong)*(byte *)(lVar52 + 8) * 4];
  uVar57 = (ulong)bVar22;
  uVar34 = (**(code **)(*plVar54 + 0x18))(plVar54);
  if (bVar22 != 0) {
    uVar47 = (ulong)*(ushort *)(lVar52 + 4);
    puVar36 = (undefined4 *)(lVar58 + (long)(int)uVar16 * 0x1340 + 0x106c);
    uVar46 = uVar57 & 3;
    if (bVar22 < 4) {
      lVar52 = 0;
    }
    else {
      lVar52 = 0;
      puVar39 = (undefined4 *)(uVar47 + lVar55 + 8);
      do {
        lVar52 = lVar52 + -4;
        puVar39[-2] = *puVar36;
        puVar39[-1] = puVar36[1];
        *puVar39 = puVar36[2];
        puVar53 = puVar36 + 3;
        puVar36 = puVar36 + 4;
        puVar39[1] = *puVar53;
        puVar39 = puVar39 + 4;
      } while (-lVar52 != (uVar57 & 0xfc));
      lVar52 = -lVar52;
    }
    if ((bVar22 & 3) != 0) {
      puVar39 = puVar36;
      puVar53 = (undefined4 *)(lVar55 + uVar47 + lVar52 * 4);
      uVar50 = uVar46;
      do {
        puVar36 = puVar39 + 1;
        uVar50 = uVar50 - 1;
        *puVar53 = *puVar39;
        puVar39 = puVar36;
        puVar53 = puVar53 + 1;
      } while (uVar50 != 0);
    }
    uVar34 = uVar34 & 0xff;
    if (bVar22 < 4) {
      lVar52 = 0;
    }
    else {
      lVar52 = 0;
      puVar39 = (undefined4 *)(uVar47 + uVar34 * 4 + lVar55 + 8);
      do {
        lVar52 = lVar52 + -4;
        puVar39[-2] = *puVar36;
        puVar39[-1] = puVar36[1];
        *puVar39 = puVar36[2];
        puVar53 = puVar36 + 3;
        puVar36 = puVar36 + 4;
        puVar39[1] = *puVar53;
        puVar39 = puVar39 + 4;
      } while (-lVar52 != (uVar57 & 0xfc));
      lVar52 = -lVar52;
    }
    if ((bVar22 & 3) != 0) {
      puVar39 = puVar36;
      puVar53 = (undefined4 *)(lVar55 + uVar47 + lVar52 * 4 + uVar34 * 4);
      uVar50 = uVar46;
      do {
        puVar36 = puVar39 + 1;
        uVar50 = uVar50 - 1;
        *puVar53 = *puVar39;
        puVar39 = puVar36;
        puVar53 = puVar53 + 1;
      } while (uVar50 != 0);
    }
    lVar52 = lVar55 + uVar47;
    if (bVar22 < 4) {
      lVar51 = 0;
    }
    else {
      lVar51 = 0;
      puVar39 = (undefined4 *)(uVar47 + uVar34 * 8 + lVar55 + 8);
      do {
        lVar51 = lVar51 + -4;
        puVar39[-2] = *puVar36;
        puVar39[-1] = puVar36[1];
        *puVar39 = puVar36[2];
        puVar53 = puVar36 + 3;
        puVar36 = puVar36 + 4;
        puVar39[1] = *puVar53;
        puVar39 = puVar39 + 4;
      } while (-lVar51 != (uVar57 & 0xfc));
      lVar51 = -lVar51;
    }
    if ((bVar22 & 3) != 0) {
      puVar39 = puVar36;
      puVar53 = (undefined4 *)(lVar52 + uVar34 * 8 + lVar51 * 4);
      uVar50 = uVar46;
      do {
        puVar36 = puVar39 + 1;
        uVar50 = uVar50 - 1;
        *puVar53 = *puVar39;
        puVar39 = puVar36;
        puVar53 = puVar53 + 1;
      } while (uVar50 != 0);
    }
    if (bVar22 < 4) {
      lVar51 = 0;
    }
    else {
      lVar51 = 0;
      puVar39 = (undefined4 *)(uVar47 + uVar34 * 0xc + lVar55 + 8);
      do {
        lVar51 = lVar51 + -4;
        puVar39[-2] = *puVar36;
        puVar39[-1] = puVar36[1];
        *puVar39 = puVar36[2];
        puVar53 = puVar36 + 3;
        puVar36 = puVar36 + 4;
        puVar39[1] = *puVar53;
        puVar39 = puVar39 + 4;
      } while (-lVar51 != (uVar57 & 0xfc));
      lVar51 = -lVar51;
    }
    if ((bVar22 & 3) != 0) {
      puVar39 = puVar36;
      puVar53 = (undefined4 *)(lVar52 + lVar51 * 4 + uVar34 * 0xc);
      uVar50 = uVar46;
      do {
        puVar36 = puVar39 + 1;
        uVar50 = uVar50 - 1;
        *puVar53 = *puVar39;
        puVar39 = puVar36;
        puVar53 = puVar53 + 1;
      } while (uVar50 != 0);
    }
    if (bVar22 < 4) {
      lVar51 = 0;
    }
    else {
      lVar51 = 0;
      puVar39 = (undefined4 *)(uVar47 + uVar34 * 0x10 + lVar55 + 8);
      do {
        lVar51 = lVar51 + -4;
        puVar39[-2] = *puVar36;
        puVar39[-1] = puVar36[1];
        *puVar39 = puVar36[2];
        puVar53 = puVar36 + 3;
        puVar36 = puVar36 + 4;
        puVar39[1] = *puVar53;
        puVar39 = puVar39 + 4;
      } while (-lVar51 != (uVar57 & 0xfc));
      lVar51 = -lVar51;
    }
    if ((bVar22 & 3) != 0) {
      puVar39 = puVar36;
      puVar53 = (undefined4 *)(lVar52 + uVar34 * 0x10 + lVar51 * 4);
      uVar50 = uVar46;
      do {
        puVar36 = puVar39 + 1;
        uVar50 = uVar50 - 1;
        *puVar53 = *puVar39;
        puVar39 = puVar36;
        puVar53 = puVar53 + 1;
      } while (uVar50 != 0);
    }
    if (bVar22 < 4) {
      lVar51 = 0;
    }
    else {
      lVar51 = 0;
      puVar39 = (undefined4 *)(uVar47 + uVar34 * 0x14 + lVar55 + 8);
      do {
        lVar51 = lVar51 + -4;
        puVar39[-2] = *puVar36;
        puVar39[-1] = puVar36[1];
        *puVar39 = puVar36[2];
        puVar53 = puVar36 + 3;
        puVar36 = puVar36 + 4;
        puVar39[1] = *puVar53;
        puVar39 = puVar39 + 4;
      } while (-lVar51 != (uVar57 & 0xfc));
      lVar51 = -lVar51;
    }
    if ((bVar22 & 3) != 0) {
      puVar39 = puVar36;
      puVar53 = (undefined4 *)(lVar52 + lVar51 * 4 + uVar34 * 0x14);
      uVar50 = uVar46;
      do {
        puVar36 = puVar39 + 1;
        uVar50 = uVar50 - 1;
        *puVar53 = *puVar39;
        puVar39 = puVar36;
        puVar53 = puVar53 + 1;
      } while (uVar50 != 0);
    }
    if (bVar22 < 4) {
      lVar51 = 0;
    }
    else {
      lVar51 = 0;
      puVar39 = (undefined4 *)(uVar47 + uVar34 * 0x18 + lVar55 + 8);
      do {
        lVar51 = lVar51 + -4;
        puVar39[-2] = *puVar36;
        puVar39[-1] = puVar36[1];
        *puVar39 = puVar36[2];
        puVar53 = puVar36 + 3;
        puVar36 = puVar36 + 4;
        puVar39[1] = *puVar53;
        puVar39 = puVar39 + 4;
      } while (-lVar51 != (uVar57 & 0xfc));
      lVar51 = -lVar51;
    }
    if ((bVar22 & 3) != 0) {
      puVar39 = puVar36;
      puVar53 = (undefined4 *)(lVar52 + lVar51 * 4 + uVar34 * 0x18);
      uVar50 = uVar46;
      do {
        puVar36 = puVar39 + 1;
        uVar50 = uVar50 - 1;
        *puVar53 = *puVar39;
        puVar39 = puVar36;
        puVar53 = puVar53 + 1;
      } while (uVar50 != 0);
    }
    if (bVar22 < 4) {
      lVar51 = 0;
    }
    else {
      lVar51 = 0;
      puVar39 = (undefined4 *)(uVar47 + uVar34 * 0x1c + lVar55 + 8);
      do {
        lVar51 = lVar51 + -4;
        puVar39[-2] = *puVar36;
        puVar39[-1] = puVar36[1];
        *puVar39 = puVar36[2];
        puVar53 = puVar36 + 3;
        puVar36 = puVar36 + 4;
        puVar39[1] = *puVar53;
        puVar39 = puVar39 + 4;
      } while (-lVar51 != (uVar57 & 0xfc));
      lVar51 = -lVar51;
    }
    if ((bVar22 & 3) != 0) {
      puVar39 = puVar36;
      puVar53 = (undefined4 *)(lVar52 + lVar51 * 4 + uVar34 * 0x1c);
      uVar50 = uVar46;
      do {
        puVar36 = puVar39 + 1;
        uVar50 = uVar50 - 1;
        *puVar53 = *puVar39;
        puVar39 = puVar36;
        puVar53 = puVar53 + 1;
      } while (uVar50 != 0);
    }
    if (bVar22 < 4) {
      lVar51 = 0;
    }
    else {
      lVar51 = 0;
      puVar39 = (undefined4 *)(uVar47 + uVar34 * 0x20 + lVar55 + 8);
      do {
        lVar51 = lVar51 + -4;
        puVar39[-2] = *puVar36;
        puVar39[-1] = puVar36[1];
        *puVar39 = puVar36[2];
        puVar53 = puVar36 + 3;
        puVar36 = puVar36 + 4;
        puVar39[1] = *puVar53;
        puVar39 = puVar39 + 4;
      } while (-lVar51 != (uVar57 & 0xfc));
      lVar51 = -lVar51;
    }
    if ((bVar22 & 3) != 0) {
      puVar39 = puVar36;
      puVar53 = (undefined4 *)(lVar52 + uVar34 * 0x20 + lVar51 * 4);
      uVar50 = uVar46;
      do {
        puVar36 = puVar39 + 1;
        uVar50 = uVar50 - 1;
        *puVar53 = *puVar39;
        puVar39 = puVar36;
        puVar53 = puVar53 + 1;
      } while (uVar50 != 0);
    }
    if (bVar22 < 4) {
      lVar51 = 0;
    }
    else {
      lVar51 = 0;
      puVar39 = (undefined4 *)(uVar47 + uVar34 * 0x24 + lVar55 + 8);
      do {
        lVar51 = lVar51 + -4;
        puVar39[-2] = *puVar36;
        puVar39[-1] = puVar36[1];
        *puVar39 = puVar36[2];
        puVar53 = puVar36 + 3;
        puVar36 = puVar36 + 4;
        puVar39[1] = *puVar53;
        puVar39 = puVar39 + 4;
      } while (-lVar51 != (uVar57 & 0xfc));
      lVar51 = -lVar51;
    }
    if ((bVar22 & 3) != 0) {
      puVar39 = puVar36;
      puVar53 = (undefined4 *)(lVar52 + lVar51 * 4 + uVar34 * 0x24);
      uVar50 = uVar46;
      do {
        puVar36 = puVar39 + 1;
        uVar50 = uVar50 - 1;
        *puVar53 = *puVar39;
        puVar39 = puVar36;
        puVar53 = puVar53 + 1;
      } while (uVar50 != 0);
    }
    if (bVar22 < 4) {
      lVar51 = 0;
    }
    else {
      lVar51 = 0;
      puVar39 = (undefined4 *)(uVar47 + uVar34 * 0x28 + lVar55 + 8);
      do {
        lVar51 = lVar51 + -4;
        puVar39[-2] = *puVar36;
        puVar39[-1] = puVar36[1];
        *puVar39 = puVar36[2];
        puVar53 = puVar36 + 3;
        puVar36 = puVar36 + 4;
        puVar39[1] = *puVar53;
        puVar39 = puVar39 + 4;
      } while (-lVar51 != (uVar57 & 0xfc));
      lVar51 = -lVar51;
    }
    if ((bVar22 & 3) != 0) {
      puVar39 = puVar36;
      puVar53 = (undefined4 *)(lVar52 + lVar51 * 4 + uVar34 * 0x28);
      uVar50 = uVar46;
      do {
        puVar36 = puVar39 + 1;
        uVar50 = uVar50 - 1;
        *puVar53 = *puVar39;
        puVar39 = puVar36;
        puVar53 = puVar53 + 1;
      } while (uVar50 != 0);
    }
    if (bVar22 < 4) {
      lVar51 = 0;
    }
    else {
      lVar51 = 0;
      puVar39 = (undefined4 *)(uVar47 + uVar34 * 0x2c + lVar55 + 8);
      do {
        lVar51 = lVar51 + -4;
        puVar39[-2] = *puVar36;
        puVar39[-1] = puVar36[1];
        *puVar39 = puVar36[2];
        puVar53 = puVar36 + 3;
        puVar36 = puVar36 + 4;
        puVar39[1] = *puVar53;
        puVar39 = puVar39 + 4;
      } while (-lVar51 != (uVar57 & 0xfc));
      lVar51 = -lVar51;
    }
    if ((bVar22 & 3) != 0) {
      puVar39 = (undefined4 *)(lVar52 + lVar51 * 4 + uVar34 * 0x2c);
      do {
        uVar46 = uVar46 - 1;
        *puVar39 = *puVar36;
        puVar36 = puVar36 + 1;
        puVar39 = puVar39 + 1;
      } while (uVar46 != 0);
    }
  }
  lVar52 = plVar54[2];
  (**(code **)(*plVar54 + 0x20))(plVar54);
  (**(code **)(*plVar54 + 0x20))(plVar54);
  lVar55 = *(long *)plVar54[1];
  bVar22 = (&DAT_041b370c)[(ulong)*(byte *)(lVar55 + 0x14) * 4];
  uVar57 = (ulong)bVar22;
  uVar34 = (**(code **)(*plVar54 + 0x18))(plVar54);
  if (bVar22 != 0) {
    uVar47 = (ulong)*(ushort *)(lVar55 + 0x10);
    puVar36 = (undefined4 *)(lVar58 + (long)(int)uVar16 * 0x1340 + 0x112c);
    uVar46 = uVar57 & 3;
    if (bVar22 < 4) {
      lVar55 = 0;
    }
    else {
      lVar55 = 0;
      puVar39 = (undefined4 *)(uVar47 + lVar52 + 8);
      do {
        lVar55 = lVar55 + -4;
        puVar39[-2] = *puVar36;
        puVar39[-1] = puVar36[1];
        *puVar39 = puVar36[2];
        puVar53 = puVar36 + 3;
        puVar36 = puVar36 + 4;
        puVar39[1] = *puVar53;
        puVar39 = puVar39 + 4;
      } while (-lVar55 != (uVar57 & 0xfc));
      lVar55 = -lVar55;
    }
    if ((bVar22 & 3) != 0) {
      puVar39 = puVar36;
      puVar53 = (undefined4 *)(lVar52 + uVar47 + lVar55 * 4);
      uVar50 = uVar46;
      do {
        puVar36 = puVar39 + 1;
        uVar50 = uVar50 - 1;
        *puVar53 = *puVar39;
        puVar39 = puVar36;
        puVar53 = puVar53 + 1;
      } while (uVar50 != 0);
    }
    uVar34 = uVar34 & 0xff;
    if (bVar22 < 4) {
      lVar55 = 0;
    }
    else {
      lVar55 = 0;
      puVar39 = (undefined4 *)(uVar47 + uVar34 * 4 + lVar52 + 8);
      do {
        lVar55 = lVar55 + -4;
        puVar39[-2] = *puVar36;
        puVar39[-1] = puVar36[1];
        *puVar39 = puVar36[2];
        puVar53 = puVar36 + 3;
        puVar36 = puVar36 + 4;
        puVar39[1] = *puVar53;
        puVar39 = puVar39 + 4;
      } while (-lVar55 != (uVar57 & 0xfc));
      lVar55 = -lVar55;
    }
    if ((bVar22 & 3) != 0) {
      puVar39 = puVar36;
      puVar53 = (undefined4 *)(lVar52 + uVar47 + lVar55 * 4 + uVar34 * 4);
      uVar50 = uVar46;
      do {
        puVar36 = puVar39 + 1;
        uVar50 = uVar50 - 1;
        *puVar53 = *puVar39;
        puVar39 = puVar36;
        puVar53 = puVar53 + 1;
      } while (uVar50 != 0);
    }
    if (bVar22 < 4) {
      lVar55 = 0;
    }
    else {
      lVar55 = 0;
      puVar39 = (undefined4 *)(uVar47 + uVar34 * 8 + lVar52 + 8);
      do {
        lVar55 = lVar55 + -4;
        puVar39[-2] = *puVar36;
        puVar39[-1] = puVar36[1];
        *puVar39 = puVar36[2];
        puVar53 = puVar36 + 3;
        puVar36 = puVar36 + 4;
        puVar39[1] = *puVar53;
        puVar39 = puVar39 + 4;
      } while (-lVar55 != (uVar57 & 0xfc));
      lVar55 = -lVar55;
    }
    if ((bVar22 & 3) != 0) {
      puVar39 = puVar36;
      puVar53 = (undefined4 *)(lVar52 + uVar47 + uVar34 * 8 + lVar55 * 4);
      uVar50 = uVar46;
      do {
        puVar36 = puVar39 + 1;
        uVar50 = uVar50 - 1;
        *puVar53 = *puVar39;
        puVar39 = puVar36;
        puVar53 = puVar53 + 1;
      } while (uVar50 != 0);
    }
    if (bVar22 < 4) {
      lVar55 = 0;
    }
    else {
      lVar55 = 0;
      puVar39 = (undefined4 *)(uVar47 + uVar34 * 0xc + lVar52 + 8);
      do {
        lVar55 = lVar55 + -4;
        puVar39[-2] = *puVar36;
        puVar39[-1] = puVar36[1];
        *puVar39 = puVar36[2];
        puVar53 = puVar36 + 3;
        puVar36 = puVar36 + 4;
        puVar39[1] = *puVar53;
        puVar39 = puVar39 + 4;
      } while (-lVar55 != (uVar57 & 0xfc));
      lVar55 = -lVar55;
    }
    if ((bVar22 & 3) != 0) {
      puVar39 = (undefined4 *)(lVar52 + uVar47 + lVar55 * 4 + uVar34 * 0xc);
      do {
        uVar46 = uVar46 - 1;
        *puVar39 = *puVar36;
        puVar36 = puVar36 + 1;
        puVar39 = puVar39 + 1;
      } while (uVar46 != 0);
    }
  }
  lVar55 = plVar54[2];
  (**(code **)(*plVar54 + 0x20))(plVar54);
  (**(code **)(*plVar54 + 0x20))(plVar54);
  lVar52 = *(long *)plVar54[1];
  bVar22 = (&DAT_041b370c)[(ulong)*(byte *)(lVar52 + 0x20) * 4];
  uVar57 = (ulong)bVar22;
  uVar34 = (**(code **)(*plVar54 + 0x18))(plVar54);
  if (bVar22 != 0) {
    uVar47 = (ulong)*(ushort *)(lVar52 + 0x1c);
    puVar36 = (undefined4 *)(lVar58 + (long)(int)uVar16 * 0x1340 + 0x116c);
    uVar46 = uVar57 & 3;
    if (bVar22 < 4) {
      lVar52 = 0;
    }
    else {
      lVar52 = 0;
      puVar39 = (undefined4 *)(uVar47 + lVar55 + 8);
      do {
        lVar52 = lVar52 + -4;
        puVar39[-2] = *puVar36;
        puVar39[-1] = puVar36[1];
        *puVar39 = puVar36[2];
        puVar53 = puVar36 + 3;
        puVar36 = puVar36 + 4;
        puVar39[1] = *puVar53;
        puVar39 = puVar39 + 4;
      } while (-lVar52 != (uVar57 & 0xfc));
      lVar52 = -lVar52;
    }
    if ((bVar22 & 3) != 0) {
      puVar39 = puVar36;
      puVar53 = (undefined4 *)(lVar55 + uVar47 + lVar52 * 4);
      uVar50 = uVar46;
      do {
        puVar36 = puVar39 + 1;
        uVar50 = uVar50 - 1;
        *puVar53 = *puVar39;
        puVar39 = puVar36;
        puVar53 = puVar53 + 1;
      } while (uVar50 != 0);
    }
    uVar34 = uVar34 & 0xff;
    if (bVar22 < 4) {
      lVar52 = 0;
    }
    else {
      lVar52 = 0;
      puVar39 = (undefined4 *)(uVar47 + uVar34 * 4 + lVar55 + 8);
      do {
        lVar52 = lVar52 + -4;
        puVar39[-2] = *puVar36;
        puVar39[-1] = puVar36[1];
        *puVar39 = puVar36[2];
        puVar53 = puVar36 + 3;
        puVar36 = puVar36 + 4;
        puVar39[1] = *puVar53;
        puVar39 = puVar39 + 4;
      } while (-lVar52 != (uVar57 & 0xfc));
      lVar52 = -lVar52;
    }
    if ((bVar22 & 3) != 0) {
      puVar39 = puVar36;
      puVar53 = (undefined4 *)(lVar55 + uVar47 + lVar52 * 4 + uVar34 * 4);
      uVar50 = uVar46;
      do {
        puVar36 = puVar39 + 1;
        uVar50 = uVar50 - 1;
        *puVar53 = *puVar39;
        puVar39 = puVar36;
        puVar53 = puVar53 + 1;
      } while (uVar50 != 0);
    }
    lVar52 = lVar55 + uVar47;
    if (bVar22 < 4) {
      lVar51 = 0;
    }
    else {
      lVar51 = 0;
      puVar39 = (undefined4 *)(uVar47 + uVar34 * 8 + lVar55 + 8);
      do {
        lVar51 = lVar51 + -4;
        puVar39[-2] = *puVar36;
        puVar39[-1] = puVar36[1];
        *puVar39 = puVar36[2];
        puVar53 = puVar36 + 3;
        puVar36 = puVar36 + 4;
        puVar39[1] = *puVar53;
        puVar39 = puVar39 + 4;
      } while (-lVar51 != (uVar57 & 0xfc));
      lVar51 = -lVar51;
    }
    if ((bVar22 & 3) != 0) {
      puVar39 = puVar36;
      puVar53 = (undefined4 *)(lVar52 + uVar34 * 8 + lVar51 * 4);
      uVar50 = uVar46;
      do {
        puVar36 = puVar39 + 1;
        uVar50 = uVar50 - 1;
        *puVar53 = *puVar39;
        puVar39 = puVar36;
        puVar53 = puVar53 + 1;
      } while (uVar50 != 0);
    }
    if (bVar22 < 4) {
      lVar51 = 0;
    }
    else {
      lVar51 = 0;
      puVar39 = (undefined4 *)(uVar47 + uVar34 * 0xc + lVar55 + 8);
      do {
        lVar51 = lVar51 + -4;
        puVar39[-2] = *puVar36;
        puVar39[-1] = puVar36[1];
        *puVar39 = puVar36[2];
        puVar53 = puVar36 + 3;
        puVar36 = puVar36 + 4;
        puVar39[1] = *puVar53;
        puVar39 = puVar39 + 4;
      } while (-lVar51 != (uVar57 & 0xfc));
      lVar51 = -lVar51;
    }
    if ((bVar22 & 3) != 0) {
      puVar39 = puVar36;
      puVar53 = (undefined4 *)(lVar52 + lVar51 * 4 + uVar34 * 0xc);
      uVar50 = uVar46;
      do {
        puVar36 = puVar39 + 1;
        uVar50 = uVar50 - 1;
        *puVar53 = *puVar39;
        puVar39 = puVar36;
        puVar53 = puVar53 + 1;
      } while (uVar50 != 0);
    }
    if (bVar22 < 4) {
      lVar51 = 0;
    }
    else {
      lVar51 = 0;
      puVar39 = (undefined4 *)(uVar47 + uVar34 * 0x10 + lVar55 + 8);
      do {
        lVar51 = lVar51 + -4;
        puVar39[-2] = *puVar36;
        puVar39[-1] = puVar36[1];
        *puVar39 = puVar36[2];
        puVar53 = puVar36 + 3;
        puVar36 = puVar36 + 4;
        puVar39[1] = *puVar53;
        puVar39 = puVar39 + 4;
      } while (-lVar51 != (uVar57 & 0xfc));
      lVar51 = -lVar51;
    }
    if ((bVar22 & 3) != 0) {
      puVar39 = puVar36;
      puVar53 = (undefined4 *)(lVar52 + uVar34 * 0x10 + lVar51 * 4);
      uVar50 = uVar46;
      do {
        puVar36 = puVar39 + 1;
        uVar50 = uVar50 - 1;
        *puVar53 = *puVar39;
        puVar39 = puVar36;
        puVar53 = puVar53 + 1;
      } while (uVar50 != 0);
    }
    if (bVar22 < 4) {
      lVar51 = 0;
    }
    else {
      lVar51 = 0;
      puVar39 = (undefined4 *)(uVar47 + uVar34 * 0x14 + lVar55 + 8);
      do {
        lVar51 = lVar51 + -4;
        puVar39[-2] = *puVar36;
        puVar39[-1] = puVar36[1];
        *puVar39 = puVar36[2];
        puVar53 = puVar36 + 3;
        puVar36 = puVar36 + 4;
        puVar39[1] = *puVar53;
        puVar39 = puVar39 + 4;
      } while (-lVar51 != (uVar57 & 0xfc));
      lVar51 = -lVar51;
    }
    if ((bVar22 & 3) != 0) {
      puVar39 = puVar36;
      puVar53 = (undefined4 *)(lVar52 + lVar51 * 4 + uVar34 * 0x14);
      uVar50 = uVar46;
      do {
        puVar36 = puVar39 + 1;
        uVar50 = uVar50 - 1;
        *puVar53 = *puVar39;
        puVar39 = puVar36;
        puVar53 = puVar53 + 1;
      } while (uVar50 != 0);
    }
    if (bVar22 < 4) {
      lVar51 = 0;
    }
    else {
      lVar51 = 0;
      puVar39 = (undefined4 *)(uVar47 + uVar34 * 0x18 + lVar55 + 8);
      do {
        lVar51 = lVar51 + -4;
        puVar39[-2] = *puVar36;
        puVar39[-1] = puVar36[1];
        *puVar39 = puVar36[2];
        puVar53 = puVar36 + 3;
        puVar36 = puVar36 + 4;
        puVar39[1] = *puVar53;
        puVar39 = puVar39 + 4;
      } while (-lVar51 != (uVar57 & 0xfc));
      lVar51 = -lVar51;
    }
    if ((bVar22 & 3) != 0) {
      puVar39 = puVar36;
      puVar53 = (undefined4 *)(lVar52 + lVar51 * 4 + uVar34 * 0x18);
      uVar50 = uVar46;
      do {
        puVar36 = puVar39 + 1;
        uVar50 = uVar50 - 1;
        *puVar53 = *puVar39;
        puVar39 = puVar36;
        puVar53 = puVar53 + 1;
      } while (uVar50 != 0);
    }
    if (bVar22 < 4) {
      lVar51 = 0;
    }
    else {
      lVar51 = 0;
      puVar39 = (undefined4 *)(uVar47 + uVar34 * 0x1c + lVar55 + 8);
      do {
        lVar51 = lVar51 + -4;
        puVar39[-2] = *puVar36;
        puVar39[-1] = puVar36[1];
        *puVar39 = puVar36[2];
        puVar53 = puVar36 + 3;
        puVar36 = puVar36 + 4;
        puVar39[1] = *puVar53;
        puVar39 = puVar39 + 4;
      } while (-lVar51 != (uVar57 & 0xfc));
      lVar51 = -lVar51;
    }
    if ((bVar22 & 3) != 0) {
      puVar39 = puVar36;
      puVar53 = (undefined4 *)(lVar52 + lVar51 * 4 + uVar34 * 0x1c);
      uVar50 = uVar46;
      do {
        puVar36 = puVar39 + 1;
        uVar50 = uVar50 - 1;
        *puVar53 = *puVar39;
        puVar39 = puVar36;
        puVar53 = puVar53 + 1;
      } while (uVar50 != 0);
    }
    if (bVar22 < 4) {
      lVar51 = 0;
    }
    else {
      lVar51 = 0;
      puVar39 = (undefined4 *)(uVar47 + uVar34 * 0x20 + lVar55 + 8);
      do {
        lVar51 = lVar51 + -4;
        puVar39[-2] = *puVar36;
        puVar39[-1] = puVar36[1];
        *puVar39 = puVar36[2];
        puVar53 = puVar36 + 3;
        puVar36 = puVar36 + 4;
        puVar39[1] = *puVar53;
        puVar39 = puVar39 + 4;
      } while (-lVar51 != (uVar57 & 0xfc));
      lVar51 = -lVar51;
    }
    if ((bVar22 & 3) != 0) {
      puVar39 = puVar36;
      puVar53 = (undefined4 *)(lVar52 + uVar34 * 0x20 + lVar51 * 4);
      uVar50 = uVar46;
      do {
        puVar36 = puVar39 + 1;
        uVar50 = uVar50 - 1;
        *puVar53 = *puVar39;
        puVar39 = puVar36;
        puVar53 = puVar53 + 1;
      } while (uVar50 != 0);
    }
    if (bVar22 < 4) {
      lVar51 = 0;
    }
    else {
      lVar51 = 0;
      puVar39 = (undefined4 *)(uVar47 + uVar34 * 0x24 + lVar55 + 8);
      do {
        lVar51 = lVar51 + -4;
        puVar39[-2] = *puVar36;
        puVar39[-1] = puVar36[1];
        *puVar39 = puVar36[2];
        puVar53 = puVar36 + 3;
        puVar36 = puVar36 + 4;
        puVar39[1] = *puVar53;
        puVar39 = puVar39 + 4;
      } while (-lVar51 != (uVar57 & 0xfc));
      lVar51 = -lVar51;
    }
    if ((bVar22 & 3) != 0) {
      puVar39 = puVar36;
      puVar53 = (undefined4 *)(lVar52 + lVar51 * 4 + uVar34 * 0x24);
      uVar50 = uVar46;
      do {
        puVar36 = puVar39 + 1;
        uVar50 = uVar50 - 1;
        *puVar53 = *puVar39;
        puVar39 = puVar36;
        puVar53 = puVar53 + 1;
      } while (uVar50 != 0);
    }
    if (bVar22 < 4) {
      lVar51 = 0;
    }
    else {
      lVar51 = 0;
      puVar39 = (undefined4 *)(uVar47 + uVar34 * 0x28 + lVar55 + 8);
      do {
        lVar51 = lVar51 + -4;
        puVar39[-2] = *puVar36;
        puVar39[-1] = puVar36[1];
        *puVar39 = puVar36[2];
        puVar53 = puVar36 + 3;
        puVar36 = puVar36 + 4;
        puVar39[1] = *puVar53;
        puVar39 = puVar39 + 4;
      } while (-lVar51 != (uVar57 & 0xfc));
      lVar51 = -lVar51;
    }
    if ((bVar22 & 3) != 0) {
      puVar39 = puVar36;
      puVar53 = (undefined4 *)(lVar52 + lVar51 * 4 + uVar34 * 0x28);
      uVar50 = uVar46;
      do {
        puVar36 = puVar39 + 1;
        uVar50 = uVar50 - 1;
        *puVar53 = *puVar39;
        puVar39 = puVar36;
        puVar53 = puVar53 + 1;
      } while (uVar50 != 0);
    }
    if (bVar22 < 4) {
      lVar51 = 0;
    }
    else {
      lVar51 = 0;
      puVar39 = (undefined4 *)(uVar47 + uVar34 * 0x2c + lVar55 + 8);
      do {
        lVar51 = lVar51 + -4;
        puVar39[-2] = *puVar36;
        puVar39[-1] = puVar36[1];
        *puVar39 = puVar36[2];
        puVar53 = puVar36 + 3;
        puVar36 = puVar36 + 4;
        puVar39[1] = *puVar53;
        puVar39 = puVar39 + 4;
      } while (-lVar51 != (uVar57 & 0xfc));
      lVar51 = -lVar51;
    }
    if ((bVar22 & 3) != 0) {
      puVar39 = puVar36;
      puVar53 = (undefined4 *)(lVar52 + lVar51 * 4 + uVar34 * 0x2c);
      uVar50 = uVar46;
      do {
        puVar36 = puVar39 + 1;
        uVar50 = uVar50 - 1;
        *puVar53 = *puVar39;
        puVar39 = puVar36;
        puVar53 = puVar53 + 1;
      } while (uVar50 != 0);
    }
    if (bVar22 < 4) {
      lVar51 = 0;
    }
    else {
      lVar51 = 0;
      puVar39 = (undefined4 *)(uVar47 + uVar34 * 0x30 + lVar55 + 8);
      do {
        lVar51 = lVar51 + -4;
        puVar39[-2] = *puVar36;
        puVar39[-1] = puVar36[1];
        *puVar39 = puVar36[2];
        puVar53 = puVar36 + 3;
        puVar36 = puVar36 + 4;
        puVar39[1] = *puVar53;
        puVar39 = puVar39 + 4;
      } while (-lVar51 != (uVar57 & 0xfc));
      lVar51 = -lVar51;
    }
    if ((bVar22 & 3) != 0) {
      puVar39 = puVar36;
      puVar53 = (undefined4 *)(lVar52 + lVar51 * 4 + uVar34 * 0x30);
      uVar50 = uVar46;
      do {
        puVar36 = puVar39 + 1;
        uVar50 = uVar50 - 1;
        *puVar53 = *puVar39;
        puVar39 = puVar36;
        puVar53 = puVar53 + 1;
      } while (uVar50 != 0);
    }
    if (bVar22 < 4) {
      lVar51 = 0;
    }
    else {
      lVar51 = 0;
      puVar39 = (undefined4 *)(uVar47 + uVar34 * 0x34 + lVar55 + 8);
      do {
        lVar51 = lVar51 + -4;
        puVar39[-2] = *puVar36;
        puVar39[-1] = puVar36[1];
        *puVar39 = puVar36[2];
        puVar53 = puVar36 + 3;
        puVar36 = puVar36 + 4;
        puVar39[1] = *puVar53;
        puVar39 = puVar39 + 4;
      } while (-lVar51 != (uVar57 & 0xfc));
      lVar51 = -lVar51;
    }
    if ((bVar22 & 3) != 0) {
      puVar39 = puVar36;
      puVar53 = (undefined4 *)(lVar52 + lVar51 * 4 + uVar34 * 0x34);
      uVar50 = uVar46;
      do {
        puVar36 = puVar39 + 1;
        uVar50 = uVar50 - 1;
        *puVar53 = *puVar39;
        puVar39 = puVar36;
        puVar53 = puVar53 + 1;
      } while (uVar50 != 0);
    }
    if (bVar22 < 4) {
      lVar51 = 0;
    }
    else {
      lVar51 = 0;
      puVar39 = (undefined4 *)(uVar47 + uVar34 * 0x38 + lVar55 + 8);
      do {
        lVar51 = lVar51 + -4;
        puVar39[-2] = *puVar36;
        puVar39[-1] = puVar36[1];
        *puVar39 = puVar36[2];
        puVar53 = puVar36 + 3;
        puVar36 = puVar36 + 4;
        puVar39[1] = *puVar53;
        puVar39 = puVar39 + 4;
      } while (-lVar51 != (uVar57 & 0xfc));
      lVar51 = -lVar51;
    }
    if ((bVar22 & 3) != 0) {
      puVar39 = puVar36;
      puVar53 = (undefined4 *)(lVar52 + lVar51 * 4 + uVar34 * 0x38);
      uVar50 = uVar46;
      do {
        puVar36 = puVar39 + 1;
        uVar50 = uVar50 - 1;
        *puVar53 = *puVar39;
        puVar39 = puVar36;
        puVar53 = puVar53 + 1;
      } while (uVar50 != 0);
    }
    if (bVar22 < 4) {
      lVar51 = 0;
    }
    else {
      lVar51 = 0;
      puVar39 = (undefined4 *)(uVar47 + uVar34 * 0x3c + lVar55 + 8);
      do {
        lVar51 = lVar51 + -4;
        puVar39[-2] = *puVar36;
        puVar39[-1] = puVar36[1];
        *puVar39 = puVar36[2];
        puVar53 = puVar36 + 3;
        puVar36 = puVar36 + 4;
        puVar39[1] = *puVar53;
        puVar39 = puVar39 + 4;
      } while (-lVar51 != (uVar57 & 0xfc));
      lVar51 = -lVar51;
    }
    if ((bVar22 & 3) != 0) {
      puVar39 = puVar36;
      puVar53 = (undefined4 *)(lVar52 + lVar51 * 4 + uVar34 * 0x3c);
      uVar50 = uVar46;
      do {
        puVar36 = puVar39 + 1;
        uVar50 = uVar50 - 1;
        *puVar53 = *puVar39;
        puVar39 = puVar36;
        puVar53 = puVar53 + 1;
      } while (uVar50 != 0);
    }
    if (bVar22 < 4) {
      lVar51 = 0;
    }
    else {
      lVar51 = 0;
      puVar39 = (undefined4 *)(uVar47 + uVar34 * 0x40 + lVar55 + 8);
      do {
        lVar51 = lVar51 + -4;
        puVar39[-2] = *puVar36;
        puVar39[-1] = puVar36[1];
        *puVar39 = puVar36[2];
        puVar53 = puVar36 + 3;
        puVar36 = puVar36 + 4;
        puVar39[1] = *puVar53;
        puVar39 = puVar39 + 4;
      } while (-lVar51 != (uVar57 & 0xfc));
      lVar51 = -lVar51;
    }
    if ((bVar22 & 3) != 0) {
      puVar39 = puVar36;
      puVar53 = (undefined4 *)(lVar52 + uVar34 * 0x40 + lVar51 * 4);
      uVar50 = uVar46;
      do {
        puVar36 = puVar39 + 1;
        uVar50 = uVar50 - 1;
        *puVar53 = *puVar39;
        puVar39 = puVar36;
        puVar53 = puVar53 + 1;
      } while (uVar50 != 0);
    }
    if (bVar22 < 4) {
      lVar51 = 0;
    }
    else {
      lVar51 = 0;
      puVar39 = (undefined4 *)(uVar47 + uVar34 * 0x44 + lVar55 + 8);
      do {
        lVar51 = lVar51 + -4;
        puVar39[-2] = *puVar36;
        puVar39[-1] = puVar36[1];
        *puVar39 = puVar36[2];
        puVar53 = puVar36 + 3;
        puVar36 = puVar36 + 4;
        puVar39[1] = *puVar53;
        puVar39 = puVar39 + 4;
      } while (-lVar51 != (uVar57 & 0xfc));
      lVar51 = -lVar51;
    }
    if ((bVar22 & 3) != 0) {
      puVar39 = (undefined4 *)(lVar52 + lVar51 * 4 + uVar34 * 0x44);
      do {
        uVar46 = uVar46 - 1;
        *puVar39 = *puVar36;
        puVar36 = puVar36 + 1;
        puVar39 = puVar39 + 1;
      } while (uVar46 != 0);
    }
  }
  lVar52 = plVar54[2];
  (**(code **)(*plVar54 + 0x20))(plVar54);
  (**(code **)(*plVar54 + 0x20))(plVar54);
  lVar55 = *(long *)plVar54[1];
  bVar22 = (&DAT_041b370c)[(ulong)*(byte *)(lVar55 + 0x2c) * 4];
  (**(code **)(*plVar54 + 0x18))(plVar54);
  if (bVar22 != 0) {
    uVar57 = (ulong)*(ushort *)(lVar55 + 0x28);
    puVar36 = (undefined4 *)(lVar58 + (long)(int)uVar16 * 0x1340 + 0x128c);
    uVar34 = (ulong)bVar22 & 3;
    if (bVar22 < 4) {
      lVar55 = 0;
    }
    else {
      lVar55 = 0;
      puVar39 = (undefined4 *)(uVar57 + lVar52 + 8);
      do {
        lVar55 = lVar55 + -4;
        puVar39[-2] = *puVar36;
        puVar39[-1] = puVar36[1];
        *puVar39 = puVar36[2];
        puVar53 = puVar36 + 3;
        puVar36 = puVar36 + 4;
        puVar39[1] = *puVar53;
        puVar39 = puVar39 + 4;
      } while (-lVar55 != ((ulong)bVar22 & 0xfc));
      lVar55 = -lVar55;
    }
    if ((bVar22 & 3) != 0) {
      puVar39 = (undefined4 *)(lVar52 + uVar57 + lVar55 * 4);
      do {
        uVar34 = uVar34 - 1;
        *puVar39 = *puVar36;
        puVar36 = puVar36 + 1;
        puVar39 = puVar39 + 1;
      } while (uVar34 != 0);
    }
  }
  lVar52 = plVar54[2];
  (**(code **)(*plVar54 + 0x20))(plVar54);
  (**(code **)(*plVar54 + 0x20))(plVar54);
  lVar55 = *(long *)plVar54[1];
  bVar22 = (&DAT_041b370c)[(ulong)*(byte *)(lVar55 + 0x38) * 4];
  (**(code **)(*plVar54 + 0x18))(plVar54);
  if (bVar22 != 0) {
    uVar57 = (ulong)*(ushort *)(lVar55 + 0x34);
    puVar36 = (undefined4 *)(lVar58 + (long)(int)uVar16 * 0x1340 + 0x129c);
    uVar34 = (ulong)bVar22 & 3;
    if (bVar22 < 4) {
      lVar55 = 0;
    }
    else {
      lVar55 = 0;
      puVar39 = (undefined4 *)(uVar57 + lVar52 + 8);
      do {
        lVar55 = lVar55 + -4;
        puVar39[-2] = *puVar36;
        puVar39[-1] = puVar36[1];
        *puVar39 = puVar36[2];
        puVar53 = puVar36 + 3;
        puVar36 = puVar36 + 4;
        puVar39[1] = *puVar53;
        puVar39 = puVar39 + 4;
      } while (-lVar55 != ((ulong)bVar22 & 0xfc));
      lVar55 = -lVar55;
    }
    if ((bVar22 & 3) != 0) {
      puVar39 = (undefined4 *)(lVar52 + uVar57 + lVar55 * 4);
      do {
        uVar34 = uVar34 - 1;
        *puVar39 = *puVar36;
        puVar36 = puVar36 + 1;
        puVar39 = puVar39 + 1;
      } while (uVar34 != 0);
    }
  }
  lVar52 = plVar54[2];
  (**(code **)(*plVar54 + 0x20))(plVar54);
  (**(code **)(*plVar54 + 0x20))(plVar54);
  lVar55 = *(long *)plVar54[1];
  bVar22 = (&DAT_041b370c)[(ulong)*(byte *)(lVar55 + 0x44) * 4];
  (**(code **)(*plVar54 + 0x18))(plVar54);
  if (bVar22 != 0) {
    uVar57 = (ulong)*(ushort *)(lVar55 + 0x40);
    puVar36 = (undefined4 *)(lVar58 + (long)(int)uVar16 * 0x1340 + 0x12ac);
    uVar34 = (ulong)bVar22 & 3;
    if (bVar22 < 4) {
      lVar55 = 0;
    }
    else {
      lVar55 = 0;
      puVar39 = (undefined4 *)(uVar57 + lVar52 + 8);
      do {
        lVar55 = lVar55 + -4;
        puVar39[-2] = *puVar36;
        puVar39[-1] = puVar36[1];
        *puVar39 = puVar36[2];
        puVar53 = puVar36 + 3;
        puVar36 = puVar36 + 4;
        puVar39[1] = *puVar53;
        puVar39 = puVar39 + 4;
      } while (-lVar55 != ((ulong)bVar22 & 0xfc));
      lVar55 = -lVar55;
    }
    if ((bVar22 & 3) != 0) {
      puVar39 = (undefined4 *)(lVar52 + uVar57 + lVar55 * 4);
      do {
        uVar34 = uVar34 - 1;
        *puVar39 = *puVar36;
        puVar36 = puVar36 + 1;
        puVar39 = puVar39 + 1;
      } while (uVar34 != 0);
    }
  }
  lVar52 = plVar54[2];
  (**(code **)(*plVar54 + 0x20))(plVar54);
  (**(code **)(*plVar54 + 0x20))(plVar54);
  lVar55 = *(long *)plVar54[1];
  bVar22 = (&DAT_041b370c)[(ulong)*(byte *)(lVar55 + 0x50) * 4];
  (**(code **)(*plVar54 + 0x18))(plVar54);
  if (bVar22 != 0) {
    uVar57 = (ulong)*(ushort *)(lVar55 + 0x4c);
    puVar36 = (undefined4 *)(lVar58 + (long)(int)uVar16 * 0x1340 + 0x12b4);
    uVar34 = (ulong)bVar22 & 3;
    if (bVar22 < 4) {
      lVar55 = 0;
    }
    else {
      lVar55 = 0;
      puVar39 = (undefined4 *)(uVar57 + lVar52 + 8);
      do {
        lVar55 = lVar55 + -4;
        puVar39[-2] = *puVar36;
        puVar39[-1] = puVar36[1];
        *puVar39 = puVar36[2];
        puVar53 = puVar36 + 3;
        puVar36 = puVar36 + 4;
        puVar39[1] = *puVar53;
        puVar39 = puVar39 + 4;
      } while (-lVar55 != ((ulong)bVar22 & 0xfc));
      lVar55 = -lVar55;
    }
    if ((bVar22 & 3) != 0) {
      puVar39 = (undefined4 *)(lVar52 + uVar57 + lVar55 * 4);
      do {
        uVar34 = uVar34 - 1;
        *puVar39 = *puVar36;
        puVar36 = puVar36 + 1;
        puVar39 = puVar39 + 1;
      } while (uVar34 != 0);
    }
  }
  lVar52 = plVar54[2];
  (**(code **)(*plVar54 + 0x20))(plVar54);
  (**(code **)(*plVar54 + 0x20))(plVar54);
  lVar55 = *(long *)plVar54[1];
  bVar22 = (&DAT_041b370c)[(ulong)*(byte *)(lVar55 + 0x5c) * 4];
  (**(code **)(*plVar54 + 0x18))(plVar54);
  if (bVar22 != 0) {
    uVar57 = (ulong)*(ushort *)(lVar55 + 0x58);
    puVar36 = (undefined4 *)(lVar58 + (long)(int)uVar16 * 0x1340 + 0x12bc);
    uVar34 = (ulong)bVar22 & 3;
    if (bVar22 < 4) {
      lVar55 = 0;
    }
    else {
      lVar55 = 0;
      puVar39 = (undefined4 *)(uVar57 + lVar52 + 8);
      do {
        lVar55 = lVar55 + -4;
        puVar39[-2] = *puVar36;
        puVar39[-1] = puVar36[1];
        *puVar39 = puVar36[2];
        puVar53 = puVar36 + 3;
        puVar36 = puVar36 + 4;
        puVar39[1] = *puVar53;
        puVar39 = puVar39 + 4;
      } while (-lVar55 != ((ulong)bVar22 & 0xfc));
      lVar55 = -lVar55;
    }
    if ((bVar22 & 3) != 0) {
      puVar39 = (undefined4 *)(lVar52 + uVar57 + lVar55 * 4);
      do {
        uVar34 = uVar34 - 1;
        *puVar39 = *puVar36;
        puVar36 = puVar36 + 1;
        puVar39 = puVar39 + 1;
      } while (uVar34 != 0);
    }
  }
  lVar52 = plVar54[2];
  (**(code **)(*plVar54 + 0x20))(plVar54);
  (**(code **)(*plVar54 + 0x20))(plVar54);
  lVar55 = *(long *)plVar54[1];
  bVar22 = (&DAT_041b370c)[(ulong)*(byte *)(lVar55 + 0x68) * 4];
  (**(code **)(*plVar54 + 0x18))(plVar54);
  if (bVar22 != 0) {
    uVar57 = (ulong)*(ushort *)(lVar55 + 100);
    puVar36 = (undefined4 *)(lVar58 + (long)(int)uVar16 * 0x1340 + 0x12c4);
    uVar34 = (ulong)bVar22 & 3;
    if (bVar22 < 4) {
      lVar55 = 0;
    }
    else {
      lVar55 = 0;
      puVar39 = (undefined4 *)(uVar57 + lVar52 + 8);
      do {
        lVar55 = lVar55 + -4;
        puVar39[-2] = *puVar36;
        puVar39[-1] = puVar36[1];
        *puVar39 = puVar36[2];
        puVar53 = puVar36 + 3;
        puVar36 = puVar36 + 4;
        puVar39[1] = *puVar53;
        puVar39 = puVar39 + 4;
      } while (-lVar55 != ((ulong)bVar22 & 0xfc));
      lVar55 = -lVar55;
    }
    if ((bVar22 & 3) != 0) {
      puVar39 = (undefined4 *)(lVar52 + uVar57 + lVar55 * 4);
      do {
        uVar34 = uVar34 - 1;
        *puVar39 = *puVar36;
        puVar36 = puVar36 + 1;
        puVar39 = puVar39 + 1;
      } while (uVar34 != 0);
    }
  }
  lVar52 = plVar54[2];
  (**(code **)(*plVar54 + 0x20))(plVar54);
  (**(code **)(*plVar54 + 0x20))(plVar54);
  lVar55 = *(long *)plVar54[1];
  bVar22 = (&DAT_041b370c)[(ulong)*(byte *)(lVar55 + 0x74) * 4];
  (**(code **)(*plVar54 + 0x18))(plVar54);
  if (bVar22 != 0) {
    uVar57 = (ulong)*(ushort *)(lVar55 + 0x70);
    puVar36 = (undefined4 *)(lVar58 + (long)(int)uVar16 * 0x1340 + 0x12cc);
    uVar34 = (ulong)bVar22 & 3;
    if (bVar22 < 4) {
      lVar55 = 0;
    }
    else {
      lVar55 = 0;
      puVar39 = (undefined4 *)(uVar57 + lVar52 + 8);
      do {
        lVar55 = lVar55 + -4;
        puVar39[-2] = *puVar36;
        puVar39[-1] = puVar36[1];
        *puVar39 = puVar36[2];
        puVar53 = puVar36 + 3;
        puVar36 = puVar36 + 4;
        puVar39[1] = *puVar53;
        puVar39 = puVar39 + 4;
      } while (-lVar55 != ((ulong)bVar22 & 0xfc));
      lVar55 = -lVar55;
    }
    if ((bVar22 & 3) != 0) {
      puVar39 = (undefined4 *)(lVar52 + uVar57 + lVar55 * 4);
      do {
        uVar34 = uVar34 - 1;
        *puVar39 = *puVar36;
        puVar36 = puVar36 + 1;
        puVar39 = puVar39 + 1;
      } while (uVar34 != 0);
    }
  }
  lVar52 = plVar54[2];
  (**(code **)(*plVar54 + 0x20))(plVar54);
  (**(code **)(*plVar54 + 0x20))(plVar54);
  lVar55 = *(long *)plVar54[1];
  bVar22 = (&DAT_041b370c)[(ulong)*(byte *)(lVar55 + 0x80) * 4];
  uVar57 = (ulong)bVar22;
  uVar34 = (**(code **)(*plVar54 + 0x18))(plVar54);
  if (bVar22 != 0) {
    uVar47 = (ulong)*(ushort *)(lVar55 + 0x7c);
    puVar36 = (undefined4 *)(lVar58 + (long)(int)uVar16 * 0x1340 + 0x12d4);
    uVar46 = uVar57 & 3;
    if (bVar22 < 4) {
      lVar55 = 0;
    }
    else {
      lVar55 = 0;
      puVar39 = (undefined4 *)(uVar47 + lVar52 + 8);
      do {
        lVar55 = lVar55 + -4;
        puVar39[-2] = *puVar36;
        puVar39[-1] = puVar36[1];
        *puVar39 = puVar36[2];
        puVar53 = puVar36 + 3;
        puVar36 = puVar36 + 4;
        puVar39[1] = *puVar53;
        puVar39 = puVar39 + 4;
      } while (-lVar55 != (uVar57 & 0xfc));
      lVar55 = -lVar55;
    }
    if ((bVar22 & 3) != 0) {
      puVar39 = puVar36;
      puVar53 = (undefined4 *)(lVar52 + uVar47 + lVar55 * 4);
      uVar50 = uVar46;
      do {
        puVar36 = puVar39 + 1;
        uVar50 = uVar50 - 1;
        *puVar53 = *puVar39;
        puVar39 = puVar36;
        puVar53 = puVar53 + 1;
      } while (uVar50 != 0);
    }
    uVar34 = uVar34 & 0xff;
    if (bVar22 < 4) {
      lVar55 = 0;
    }
    else {
      lVar55 = 0;
      puVar39 = (undefined4 *)(uVar47 + uVar34 * 4 + lVar52 + 8);
      do {
        lVar55 = lVar55 + -4;
        puVar39[-2] = *puVar36;
        puVar39[-1] = puVar36[1];
        *puVar39 = puVar36[2];
        puVar53 = puVar36 + 3;
        puVar36 = puVar36 + 4;
        puVar39[1] = *puVar53;
        puVar39 = puVar39 + 4;
      } while (-lVar55 != (uVar57 & 0xfc));
      lVar55 = -lVar55;
    }
    if ((bVar22 & 3) != 0) {
      puVar39 = puVar36;
      puVar53 = (undefined4 *)(lVar52 + uVar47 + lVar55 * 4 + uVar34 * 4);
      uVar50 = uVar46;
      do {
        puVar36 = puVar39 + 1;
        uVar50 = uVar50 - 1;
        *puVar53 = *puVar39;
        puVar39 = puVar36;
        puVar53 = puVar53 + 1;
      } while (uVar50 != 0);
    }
    if (bVar22 < 4) {
      lVar55 = 0;
    }
    else {
      lVar55 = 0;
      puVar39 = (undefined4 *)(uVar47 + uVar34 * 8 + lVar52 + 8);
      do {
        lVar55 = lVar55 + -4;
        puVar39[-2] = *puVar36;
        puVar39[-1] = puVar36[1];
        *puVar39 = puVar36[2];
        puVar53 = puVar36 + 3;
        puVar36 = puVar36 + 4;
        puVar39[1] = *puVar53;
        puVar39 = puVar39 + 4;
      } while (-lVar55 != (uVar57 & 0xfc));
      lVar55 = -lVar55;
    }
    if ((bVar22 & 3) != 0) {
      puVar39 = (undefined4 *)(lVar52 + uVar47 + uVar34 * 8 + lVar55 * 4);
      do {
        uVar46 = uVar46 - 1;
        *puVar39 = *puVar36;
        puVar36 = puVar36 + 1;
        puVar39 = puVar39 + 1;
      } while (uVar46 != 0);
    }
  }
  lVar52 = plVar54[2];
  (**(code **)(*plVar54 + 0x20))(plVar54);
  (**(code **)(*plVar54 + 0x20))(plVar54);
  lVar55 = *(long *)plVar54[1];
  bVar22 = (&DAT_041b370c)[(ulong)*(byte *)(lVar55 + 0x8c) * 4];
  uVar57 = (ulong)bVar22;
  uVar34 = (**(code **)(*plVar54 + 0x18))(plVar54);
  if (bVar22 != 0) {
    uVar47 = (ulong)*(ushort *)(lVar55 + 0x88);
    puVar36 = (undefined4 *)(lVar58 + (long)(int)uVar16 * 0x1340 + 0x12e0);
    uVar46 = uVar57 & 3;
    if (bVar22 < 4) {
      lVar55 = 0;
    }
    else {
      lVar55 = 0;
      puVar39 = (undefined4 *)(uVar47 + lVar52 + 8);
      do {
        lVar55 = lVar55 + -4;
        puVar39[-2] = *puVar36;
        puVar39[-1] = puVar36[1];
        *puVar39 = puVar36[2];
        puVar53 = puVar36 + 3;
        puVar36 = puVar36 + 4;
        puVar39[1] = *puVar53;
        puVar39 = puVar39 + 4;
      } while (-lVar55 != (uVar57 & 0xfc));
      lVar55 = -lVar55;
    }
    if ((bVar22 & 3) != 0) {
      puVar39 = puVar36;
      puVar53 = (undefined4 *)(lVar52 + uVar47 + lVar55 * 4);
      uVar50 = uVar46;
      do {
        puVar36 = puVar39 + 1;
        uVar50 = uVar50 - 1;
        *puVar53 = *puVar39;
        puVar39 = puVar36;
        puVar53 = puVar53 + 1;
      } while (uVar50 != 0);
    }
    if (bVar22 < 4) {
      lVar55 = 0;
    }
    else {
      lVar55 = 0;
      puVar39 = (undefined4 *)(uVar47 + (uVar34 & 0xff) * 4 + lVar52 + 8);
      do {
        lVar55 = lVar55 + -4;
        puVar39[-2] = *puVar36;
        puVar39[-1] = puVar36[1];
        *puVar39 = puVar36[2];
        puVar53 = puVar36 + 3;
        puVar36 = puVar36 + 4;
        puVar39[1] = *puVar53;
        puVar39 = puVar39 + 4;
      } while (-lVar55 != (uVar57 & 0xfc));
      lVar55 = -lVar55;
    }
    if ((bVar22 & 3) != 0) {
      puVar39 = (undefined4 *)(lVar52 + uVar47 + lVar55 * 4 + (uVar34 & 0xff) * 4);
      do {
        uVar46 = uVar46 - 1;
        *puVar39 = *puVar36;
        puVar36 = puVar36 + 1;
        puVar39 = puVar39 + 1;
      } while (uVar46 != 0);
    }
  }
  lVar52 = plVar54[2];
  (**(code **)(*plVar54 + 0x20))(plVar54);
  (**(code **)(*plVar54 + 0x20))(plVar54);
  lVar55 = *(long *)plVar54[1];
  bVar22 = (&DAT_041b370c)[(ulong)*(byte *)(lVar55 + 0x98) * 4];
  uVar57 = (ulong)bVar22;
  uVar34 = (**(code **)(*plVar54 + 0x18))(plVar54);
  if (bVar22 != 0) {
    uVar47 = (ulong)*(ushort *)(lVar55 + 0x94);
    puVar36 = (undefined4 *)(lVar58 + (long)(int)uVar16 * 0x1340 + 0x12f8);
    uVar46 = uVar57 & 3;
    if (bVar22 < 4) {
      lVar55 = 0;
    }
    else {
      lVar55 = 0;
      puVar39 = (undefined4 *)(uVar47 + lVar52 + 8);
      do {
        lVar55 = lVar55 + -4;
        puVar39[-2] = *puVar36;
        puVar39[-1] = puVar36[1];
        *puVar39 = puVar36[2];
        puVar53 = puVar36 + 3;
        puVar36 = puVar36 + 4;
        puVar39[1] = *puVar53;
        puVar39 = puVar39 + 4;
      } while (-lVar55 != (uVar57 & 0xfc));
      lVar55 = -lVar55;
    }
    if ((bVar22 & 3) != 0) {
      puVar39 = puVar36;
      puVar53 = (undefined4 *)(lVar52 + uVar47 + lVar55 * 4);
      uVar50 = uVar46;
      do {
        puVar36 = puVar39 + 1;
        uVar50 = uVar50 - 1;
        *puVar53 = *puVar39;
        puVar39 = puVar36;
        puVar53 = puVar53 + 1;
      } while (uVar50 != 0);
    }
    if (bVar22 < 4) {
      lVar55 = 0;
    }
    else {
      lVar55 = 0;
      puVar39 = (undefined4 *)(uVar47 + (uVar34 & 0xff) * 4 + lVar52 + 8);
      do {
        lVar55 = lVar55 + -4;
        puVar39[-2] = *puVar36;
        puVar39[-1] = puVar36[1];
        *puVar39 = puVar36[2];
        puVar53 = puVar36 + 3;
        puVar36 = puVar36 + 4;
        puVar39[1] = *puVar53;
        puVar39 = puVar39 + 4;
      } while (-lVar55 != (uVar57 & 0xfc));
      lVar55 = -lVar55;
    }
    if ((bVar22 & 3) != 0) {
      puVar39 = (undefined4 *)(lVar52 + uVar47 + lVar55 * 4 + (uVar34 & 0xff) * 4);
      do {
        uVar46 = uVar46 - 1;
        *puVar39 = *puVar36;
        puVar36 = puVar36 + 1;
        puVar39 = puVar39 + 1;
      } while (uVar46 != 0);
    }
  }
  lVar52 = plVar54[2];
  uVar64 = *(undefined4 *)(lVar58 + (long)(int)uVar16 * 0x1340 + 0x1300);
  (**(code **)(*plVar54 + 0x20))(plVar54);
  (**(code **)(*plVar54 + 0x20))(plVar54);
  local_128 = (undefined *)CONCAT44(local_128._4_4_,uVar64);
  lVar55 = *(long *)plVar54[1];
  bVar22 = (&DAT_041b370c)[(ulong)*(byte *)(lVar55 + 0xa4) * 4];
  (**(code **)(*plVar54 + 0x18))(plVar54);
  if ((ulong)bVar22 != 0) {
    memcpy((void *)(lVar52 + (ulong)*(ushort *)(lVar55 + 0xa0)),&local_128,(ulong)bVar22 << 2);
  }
  lVar52 = plVar54[2];
  uVar64 = *(undefined4 *)(lVar58 + (long)(int)uVar16 * 0x1340 + 0x1304);
  (**(code **)(*plVar54 + 0x20))(plVar54);
  (**(code **)(*plVar54 + 0x20))(plVar54);
  local_128 = (undefined *)CONCAT44(local_128._4_4_,uVar64);
  lVar55 = *(long *)plVar54[1];
  bVar22 = (&DAT_041b370c)[(ulong)*(byte *)(lVar55 + 0xb0) * 4];
  (**(code **)(*plVar54 + 0x18))(plVar54);
  if ((ulong)bVar22 != 0) {
    memcpy((void *)(lVar52 + (ulong)*(ushort *)(lVar55 + 0xac)),&local_128,(ulong)bVar22 << 2);
  }
  lVar52 = plVar54[2];
  uVar64 = *(undefined4 *)(lVar58 + (long)(int)uVar16 * 0x1340 + 0x1308);
  (**(code **)(*plVar54 + 0x20))(plVar54);
  (**(code **)(*plVar54 + 0x20))(plVar54);
  local_128 = (undefined *)CONCAT44(local_128._4_4_,uVar64);
  lVar55 = *(long *)plVar54[1];
  bVar22 = (&DAT_041b370c)[(ulong)*(byte *)(lVar55 + 0xbc) * 4];
  (**(code **)(*plVar54 + 0x18))(plVar54);
  if ((ulong)bVar22 != 0) {
    memcpy((void *)(lVar52 + (ulong)*(ushort *)(lVar55 + 0xb8)),&local_128,(ulong)bVar22 << 2);
  }
  lVar52 = plVar54[2];
  uVar64 = *(undefined4 *)(lVar58 + (long)(int)uVar16 * 0x1340 + 0x130c);
  (**(code **)(*plVar54 + 0x20))(plVar54);
  (**(code **)(*plVar54 + 0x20))(plVar54);
  local_128 = (undefined *)CONCAT44(local_128._4_4_,uVar64);
  lVar55 = *(long *)plVar54[1];
  bVar22 = (&DAT_041b370c)[(ulong)*(byte *)(lVar55 + 200) * 4];
  (**(code **)(*plVar54 + 0x18))(plVar54);
  if ((ulong)bVar22 != 0) {
    memcpy((void *)(lVar52 + (ulong)*(ushort *)(lVar55 + 0xc4)),&local_128,(ulong)bVar22 << 2);
  }
  lVar52 = plVar54[2];
  uVar64 = *(undefined4 *)(lVar58 + (long)(int)uVar16 * 0x1340 + 0x1310);
  (**(code **)(*plVar54 + 0x20))(plVar54);
  (**(code **)(*plVar54 + 0x20))(plVar54);
  local_128 = (undefined *)CONCAT44(local_128._4_4_,uVar64);
  lVar55 = *(long *)plVar54[1];
  bVar22 = (&DAT_041b370c)[(ulong)*(byte *)(lVar55 + 0xd4) * 4];
  (**(code **)(*plVar54 + 0x18))(plVar54);
  if ((ulong)bVar22 != 0) {
    memcpy((void *)(lVar52 + (ulong)*(ushort *)(lVar55 + 0xd0)),&local_128,(ulong)bVar22 << 2);
  }
  lVar52 = plVar54[2];
  uVar64 = *(undefined4 *)(lVar58 + (long)(int)uVar16 * 0x1340 + 0x1314);
  (**(code **)(*plVar54 + 0x20))(plVar54);
  (**(code **)(*plVar54 + 0x20))(plVar54);
  local_128 = (undefined *)CONCAT44(local_128._4_4_,uVar64);
  lVar55 = *(long *)plVar54[1];
  bVar22 = (&DAT_041b370c)[(ulong)*(byte *)(lVar55 + 0xe0) * 4];
  (**(code **)(*plVar54 + 0x18))(plVar54);
  if ((ulong)bVar22 != 0) {
    memcpy((void *)(lVar52 + (ulong)*(ushort *)(lVar55 + 0xdc)),&local_128,(ulong)bVar22 << 2);
  }
  lVar52 = plVar54[2];
  uVar64 = *(undefined4 *)(lVar58 + (long)(int)uVar16 * 0x1340 + 0x1318);
  (**(code **)(*plVar54 + 0x20))(plVar54);
  (**(code **)(*plVar54 + 0x20))(plVar54);
  local_128 = (undefined *)CONCAT44(local_128._4_4_,uVar64);
  lVar55 = *(long *)plVar54[1];
  bVar22 = (&DAT_041b370c)[(ulong)*(byte *)(lVar55 + 0xec) * 4];
  (**(code **)(*plVar54 + 0x18))(plVar54);
  if ((ulong)bVar22 != 0) {
    memcpy((void *)(lVar52 + (ulong)*(ushort *)(lVar55 + 0xe8)),&local_128,(ulong)bVar22 << 2);
  }
  lVar52 = plVar54[2];
  uVar64 = *(undefined4 *)(lVar58 + (long)(int)uVar16 * 0x1340 + 0x131c);
  (**(code **)(*plVar54 + 0x20))(plVar54);
  (**(code **)(*plVar54 + 0x20))(plVar54);
  local_128 = (undefined *)CONCAT44(local_128._4_4_,uVar64);
  lVar55 = *(long *)plVar54[1];
  bVar22 = (&DAT_041b370c)[(ulong)*(byte *)(lVar55 + 0xf8) * 4];
  (**(code **)(*plVar54 + 0x18))(plVar54);
  if ((ulong)bVar22 != 0) {
    memcpy((void *)(lVar52 + (ulong)*(ushort *)(lVar55 + 0xf4)),&local_128,(ulong)bVar22 << 2);
  }
  lVar52 = plVar54[2];
  uVar64 = *(undefined4 *)(lVar58 + (long)(int)uVar16 * 0x1340 + 0x1320);
  (**(code **)(*plVar54 + 0x20))(plVar54);
  (**(code **)(*plVar54 + 0x20))(plVar54);
  local_128 = (undefined *)CONCAT44(local_128._4_4_,uVar64);
  lVar55 = *(long *)plVar54[1];
  bVar22 = (&DAT_041b370c)[(ulong)*(byte *)(lVar55 + 0x104) * 4];
  (**(code **)(*plVar54 + 0x18))(plVar54);
  if ((ulong)bVar22 != 0) {
    memcpy((void *)(lVar52 + (ulong)*(ushort *)(lVar55 + 0x100)),&local_128,(ulong)bVar22 << 2);
  }
  lVar52 = plVar54[2];
  uVar64 = *(undefined4 *)(lVar58 + (long)(int)uVar16 * 0x1340 + 0x1328);
  (**(code **)(*plVar54 + 0x20))(plVar54);
  (**(code **)(*plVar54 + 0x20))(plVar54);
  local_128 = (undefined *)CONCAT44(local_128._4_4_,uVar64);
  lVar55 = *(long *)plVar54[1];
  bVar22 = (&DAT_041b370c)[(ulong)*(byte *)(lVar55 + 0x11c) * 4];
  (**(code **)(*plVar54 + 0x18))(plVar54);
  if ((ulong)bVar22 != 0) {
    memcpy((void *)(lVar52 + (ulong)*(ushort *)(lVar55 + 0x118)),&local_128,(ulong)bVar22 << 2);
  }
  lVar52 = plVar54[2];
  uVar64 = *(undefined4 *)(lVar58 + (long)(int)uVar16 * 0x1340 + 0x132c);
  (**(code **)(*plVar54 + 0x20))(plVar54);
  (**(code **)(*plVar54 + 0x20))(plVar54);
  local_128 = (undefined *)CONCAT44(local_128._4_4_,uVar64);
  lVar55 = *(long *)plVar54[1];
  bVar22 = (&DAT_041b370c)[(ulong)*(byte *)(lVar55 + 0x128) * 4];
  (**(code **)(*plVar54 + 0x18))(plVar54);
  if ((ulong)bVar22 != 0) {
    memcpy((void *)(lVar52 + (ulong)*(ushort *)(lVar55 + 0x124)),&local_128,(ulong)bVar22 << 2);
  }
  lVar52 = plVar54[2];
  uVar64 = *(undefined4 *)(lVar58 + (long)(int)uVar16 * 0x1340 + 0x1330);
  (**(code **)(*plVar54 + 0x20))(plVar54);
  (**(code **)(*plVar54 + 0x20))(plVar54);
  local_128 = (undefined *)CONCAT44(local_128._4_4_,uVar64);
  lVar55 = *(long *)plVar54[1];
  bVar22 = (&DAT_041b370c)[(ulong)*(byte *)(lVar55 + 0x134) * 4];
  (**(code **)(*plVar54 + 0x18))(plVar54);
  if ((ulong)bVar22 != 0) {
    memcpy((void *)(lVar52 + (ulong)*(ushort *)(lVar55 + 0x130)),&local_128,(ulong)bVar22 << 2);
  }
  lVar52 = plVar54[2];
  (**(code **)(*plVar54 + 0x20))(plVar54);
  (**(code **)(*plVar54 + 0x20))(plVar54);
  lVar55 = *(long *)plVar54[1];
  bVar22 = (&DAT_041b370c)[(ulong)*(byte *)(lVar55 + 0x140) * 4];
  (**(code **)(*plVar54 + 0x18))(plVar54);
  if (bVar22 != 0) {
    uVar57 = (ulong)*(ushort *)(lVar55 + 0x13c);
    puVar36 = (undefined4 *)(lVar58 + (long)(int)uVar16 * 0x1340 + 0x1334);
    uVar34 = (ulong)bVar22 & 3;
    if (bVar22 < 4) {
      lVar55 = 0;
    }
    else {
      lVar55 = 0;
      puVar39 = (undefined4 *)(uVar57 + lVar52 + 8);
      do {
        lVar55 = lVar55 + -4;
        puVar39[-2] = *puVar36;
        puVar39[-1] = puVar36[1];
        *puVar39 = puVar36[2];
        puVar53 = puVar36 + 3;
        puVar36 = puVar36 + 4;
        puVar39[1] = *puVar53;
        puVar39 = puVar39 + 4;
      } while (-lVar55 != ((ulong)bVar22 & 0xfc));
      lVar55 = -lVar55;
    }
    if ((bVar22 & 3) != 0) {
      puVar39 = (undefined4 *)(lVar52 + uVar57 + lVar55 * 4);
      do {
        uVar34 = uVar34 - 1;
        *puVar39 = *puVar36;
        puVar36 = puVar36 + 1;
        puVar39 = puVar39 + 1;
      } while (uVar34 != 0);
    }
  }
  puVar3 = PTR_DAT_04bbd510;
  uVar24 = *(ushort *)(lVar59 + 0x38);
  uVar23 = *(ushort *)(lVar59 + 0x3a);
  if (uVar24 < 2) {
    uVar24 = 1;
  }
  uVar15 = uVar23;
  if (*(short *)(lVar59 + 0x42) != 3) {
    uVar15 = 1;
  }
  if (uVar15 <= uVar23) {
    uVar15 = uVar23;
  }
  if (*(char *)(param_1 + 0x468) != '\0') {
    uVar45 = *(uint *)(param_2 + 1);
    lVar52 = *(long *)(param_1 + 0x1d8);
    lVar55 = *param_2;
    uVar42 = uVar45;
    if (*(uint *)(param_1 + 0x1d0) <= uVar45) {
      uVar42 = 0;
    }
    lVar51 = lVar52 + (long)(int)uVar42 * 0x1340;
    uVar43 = 2;
    if (*(int *)(param_1 + 0x488) != 1) {
      uVar43 = (uint)(*(int *)(param_1 + 0x488) == 0);
    }
    if (*(long *)(lVar51 + 0xff0) != 0 && (*(byte *)(param_1 + 0x1e0) & 1) != 0) {
      uVar43 = uVar43 | 8;
    }
    if (*(int *)(param_1 + 0x4a8) != 0) {
      uVar43 = uVar43 | 0x10;
    }
    if (*(char *)(param_1 + 0x708) != '\0') {
      uVar43 = uVar43 | 0x20;
    }
    if (*(uint *)(lVar51 + 0xfe4) == uVar43) {
      bVar29 = *(char *)(lVar52 + (long)(int)uVar42 * 0x1340 + 0xfe0) == '\0';
    }
    else {
      *(uint *)(lVar51 + 0xfe4) = uVar43;
      *(undefined1 *)(lVar52 + (long)(int)uVar42 * 0x1340 + 0xfe0) = 0;
      bVar29 = true;
    }
    lVar52 = lVar52 + (long)(int)uVar42 * 0x1340;
    fVar60 = *(float *)(lVar52 + 0x1068) * (float)uVar24;
    fVar61 = *(float *)(lVar52 + 0x1068) * (float)uVar15;
    uVar42 = (uint)fVar60;
    fVar60 = (float)NEON_ucvtf((int)fVar60);
    fVar65 = (float)NEON_ucvtf((int)fVar61);
    uVar43 = (uint)fVar61;
    *(float *)(lVar52 + 0xfe8) = 1.0 / fVar60;
    *(float *)(lVar52 + 0xfec) = 1.0 / fVar65;
    if (bVar29) {
      lVar52 = *(long *)(param_1 + 0x1d8);
      uVar9 = uVar45;
      if (*(uint *)(param_1 + 0x1d0) <= uVar45) {
        uVar9 = 0;
      }
      lVar51 = lVar52 + (long)(int)uVar9 * 0x1340;
      puVar56 = (undefined8 *)(lVar51 + 0x3f8);
      if (*(long *)(lVar51 + 0x3f8) != 0) {
        FUN_039499cc(*(undefined8 *)puVar3);
        *puVar56 = 0;
        *(undefined1 *)(lVar52 + (long)(int)uVar9 * 0x1340 + 0xfe1) = 1;
      }
      lVar51 = lVar52 + (long)(int)uVar9 * 0x1340;
      *(undefined1 *)(lVar51 + 0xfe0) = 1;
      cVar17 = *(char *)(param_1 + 0x528);
      cVar18 = *(char *)(param_1 + 0x568);
      cVar19 = *(char *)(param_1 + 0x668);
      cVar20 = *(char *)(param_1 + 0x788);
      cVar21 = *(char *)(param_1 + 0x708);
      *(float *)(lVar51 + 0x408) = fVar60;
      *(float *)(lVar51 + 0x40c) = fVar65;
      *(undefined8 *)(lVar51 + 0x410) = 0;
      *(float *)(lVar51 + 0x418) = fVar60;
      *(float *)(lVar51 + 0x41c) = fVar65;
      bVar29 = cVar17 != '\0';
      bVar30 = cVar18 != '\0';
      bVar27 = cVar19 != '\0';
      bVar28 = cVar20 != '\0';
      uVar64 = 10;
      if ((bVar29 || bVar30) || (bVar27 || bVar28)) {
        uVar64 = 0x1d;
      }
      lVar51 = *(long *)puVar3;
      local_128 = PTR_DAT_04bb2020 + 0x10;
      uVar44 = 1;
      if (cVar21 != '\0') {
        uVar44 = 2;
      }
      local_120 = "shadow_prepass_light_buffer";
      lVar35 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
      if (lVar35 == 0) {
        iVar31 = nn::os::GetCurrentCoreNumber();
      }
      else {
        iVar31 = (int)lVar35 + -1;
      }
      local_b0 = (undefined *)CONCAT44(local_b0._4_4_,iVar31);
      puVar36 = (undefined4 *)
                FUN_03948e10(lVar51,lVar55,lVar51 + (long)iVar31 * 0x290 + 0x10,&local_128,uVar64,1,
                             uVar42,uVar43,uVar44,0,1,0,1,0,0,0);
      *puVar56 = puVar36;
      lVar51 = lVar52 + (long)(int)uVar9 * 0x1340;
      *(undefined4 *)(lVar51 + 0x318) = *puVar36;
      *(undefined4 *)(lVar51 + 0x31c) = puVar36[1];
      *(undefined8 *)(lVar51 + 800) = *(undefined8 *)(puVar36 + 2);
      *(undefined8 *)(lVar51 + 0x328) = *(undefined8 *)(puVar36 + 4);
      *(undefined4 *)(lVar51 + 0x330) = puVar36[6];
      *(undefined4 *)(lVar51 + 0x334) = puVar36[7];
      *(undefined8 *)(lVar51 + 0x338) = *(undefined8 *)(puVar36 + 8);
      *(undefined8 *)(lVar51 + 0x340) = *(undefined8 *)(puVar36 + 10);
      uVar40 = *(undefined8 *)(puVar36 + 0xc);
      uVar37 = *(undefined8 *)(puVar36 + 0xe);
      uVar48 = *(undefined8 *)(puVar36 + 0x10);
      *(undefined8 *)(lVar51 + 0x35f) = *(undefined8 *)((long)puVar36 + 0x47);
      *(undefined8 *)(lVar51 + 0x358) = uVar48;
      *(undefined8 *)(lVar51 + 0x350) = uVar37;
      *(undefined8 *)(lVar51 + 0x348) = uVar40;
      FUN_038fd1e0(lVar51 + 0x368);
      FUN_038fd2f0(lVar51 + 0x368,puVar36 + 0x14);
      uVar64 = puVar36[0x26];
      *(undefined8 *)(lVar51 + 0x3a8) = *(undefined8 *)(puVar36 + 0x24);
      puVar1 = (uint *)(lVar51 + 0x3ec);
      *(undefined4 *)(lVar51 + 0x3b0) = uVar64;
      do {
        cVar17 = '\x01';
        bVar26 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar26) {
          *puVar1 = *puVar1 | 1;
          cVar17 = ExclusiveMonitorsStatus();
        }
      } while (cVar17 != '\0');
      puVar36 = (undefined4 *)*puVar56;
      lVar51 = lVar52 + (long)(int)uVar9 * 0x1340;
      *(undefined4 *)(lVar51 + 0xf00) = *puVar36;
      *(undefined4 *)(lVar51 + 0xf04) = puVar36[1];
      *(undefined8 *)(lVar51 + 0xf08) = *(undefined8 *)(puVar36 + 2);
      *(undefined8 *)(lVar51 + 0xf10) = *(undefined8 *)(puVar36 + 4);
      *(undefined4 *)(lVar51 + 0xf18) = puVar36[6];
      *(undefined4 *)(lVar51 + 0xf1c) = puVar36[7];
      *(undefined8 *)(lVar51 + 0xf20) = *(undefined8 *)(puVar36 + 8);
      *(undefined8 *)(lVar51 + 0xf28) = *(undefined8 *)(puVar36 + 10);
      uVar48 = *(undefined8 *)(puVar36 + 0x10);
      uVar40 = *(undefined8 *)(puVar36 + 0xc);
      uVar37 = *(undefined8 *)(puVar36 + 0xe);
      *(undefined8 *)(lVar51 + 0xf47) = *(undefined8 *)((long)puVar36 + 0x47);
      *(undefined8 *)(lVar51 + 0xf40) = uVar48;
      *(undefined8 *)(lVar51 + 0xf38) = uVar37;
      *(undefined8 *)(lVar51 + 0xf30) = uVar40;
      FUN_038fd1e0(lVar51 + 0xf50);
      FUN_038fd2f0(lVar51 + 0xf50,puVar36 + 0x14);
      uVar64 = puVar36[0x26];
      *(undefined8 *)(lVar51 + 0xf90) = *(undefined8 *)(puVar36 + 0x24);
      puVar1 = (uint *)(lVar51 + 0xfd4);
      *(undefined4 *)(lVar51 + 0xf98) = uVar64;
      do {
        cVar17 = '\x01';
        bVar26 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar26) {
          *puVar1 = *puVar1 | 1;
          cVar17 = ExclusiveMonitorsStatus();
        }
      } while (cVar17 != '\0');
      lVar52 = lVar52 + (long)(int)uVar9 * 0x1340;
      FUN_01560750(lVar52 + 0x468,*puVar56,*(undefined1 *)(lVar52 + 0x526),
                   *(undefined2 *)(lVar52 + 0x524));
      *(long *)(lVar52 + 0x420) = lVar52 + 0x468;
      *(undefined1 *)(lVar52 + 0xfd0) = 3;
      pbVar2 = (byte *)(lVar52 + 0xfd8);
      puVar1 = (uint *)(lVar52 + 0xfd4);
      if ((bVar29 || bVar30) || (bVar27 || bVar28)) {
        *(undefined1 *)(lVar52 + 0xfd1) = 5;
        *(undefined1 *)(lVar52 + 0xfd2) = 4;
        *(undefined1 *)(lVar52 + 0xfd3) = 2;
        *pbVar2 = *pbVar2 | 2;
        do {
          cVar17 = '\x01';
          bVar29 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar29) {
            *puVar1 = *puVar1 | 1;
            cVar17 = ExclusiveMonitorsStatus();
          }
        } while (cVar17 != '\0');
      }
      else {
        *(undefined1 *)(lVar52 + 0xfd2) = 1;
        *(undefined1 *)(lVar52 + 0xfd3) = 2;
        *(undefined1 *)(lVar52 + 0xfd1) = 1;
        *pbVar2 = *pbVar2 | 2;
        do {
          cVar17 = '\x01';
          bVar29 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar29) {
            *puVar1 = *puVar1 | 1;
            cVar17 = ExclusiveMonitorsStatus();
          }
        } while (cVar17 != '\0');
      }
    }
    lVar52 = *(long *)(param_1 + 0x1d8);
    uVar9 = uVar45;
    if (*(uint *)(param_1 + 0x1d0) <= uVar45) {
      uVar9 = 0;
    }
    uVar64 = 10;
    if ((*(char *)(param_1 + 0x528) != '\0' || *(char *)(param_1 + 0x568) != '\0') ||
        (*(char *)(param_1 + 0x668) != '\0' || *(char *)(param_1 + 0x788) != '\0')) {
      uVar64 = 0x1d;
    }
    if (*(int *)(param_1 + 0x4a8) != 0) {
      lVar51 = lVar52 + (long)(int)uVar9 * 0x1340;
      *(float *)(lVar51 + 0x638) = fVar60;
      *(float *)(lVar51 + 0x63c) = fVar65;
      *(undefined8 *)(lVar51 + 0x640) = 0;
      *(float *)(lVar51 + 0x648) = fVar60;
      *(float *)(lVar51 + 0x64c) = fVar65;
      lVar35 = *(long *)puVar3;
      local_128 = PTR_DAT_04bb2020 + 0x10;
      local_120 = "shadow_prepass_light_buffer_temp";
      lVar51 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
      if (lVar51 == 0) {
        iVar31 = nn::os::GetCurrentCoreNumber();
      }
      else {
        iVar31 = (int)lVar51 + -1;
      }
      local_b0 = (undefined *)CONCAT44(local_b0._4_4_,iVar31);
      puVar36 = (undefined4 *)
                FUN_03948e10(lVar35,lVar55,lVar35 + (long)iVar31 * 0x290 + 0x10,&local_128,uVar64,1,
                             uVar42,uVar43,1,0,1,0,1,0,0,0);
      lVar51 = lVar52 + (long)(int)uVar9 * 0x1340;
      *(undefined4 **)(lVar51 + 0x628) = puVar36;
      *(undefined4 *)(lVar51 + 0x548) = *puVar36;
      *(undefined4 *)(lVar51 + 0x54c) = puVar36[1];
      *(undefined8 *)(lVar51 + 0x550) = *(undefined8 *)(puVar36 + 2);
      *(undefined8 *)(lVar51 + 0x558) = *(undefined8 *)(puVar36 + 4);
      *(undefined4 *)(lVar51 + 0x560) = puVar36[6];
      *(undefined4 *)(lVar51 + 0x564) = puVar36[7];
      *(undefined8 *)(lVar51 + 0x568) = *(undefined8 *)(puVar36 + 8);
      *(undefined8 *)(lVar51 + 0x570) = *(undefined8 *)(puVar36 + 10);
      uVar40 = *(undefined8 *)(puVar36 + 0xc);
      uVar37 = *(undefined8 *)(puVar36 + 0xe);
      uVar48 = *(undefined8 *)(puVar36 + 0x10);
      *(undefined8 *)(lVar51 + 0x58f) = *(undefined8 *)((long)puVar36 + 0x47);
      *(undefined8 *)(lVar51 + 0x588) = uVar48;
      *(undefined8 *)(lVar51 + 0x580) = uVar37;
      *(undefined8 *)(lVar51 + 0x578) = uVar40;
      FUN_038fd1e0(lVar51 + 0x598);
      FUN_038fd2f0(lVar51 + 0x598,puVar36 + 0x14);
      uVar44 = puVar36[0x26];
      *(undefined8 *)(lVar51 + 0x5d8) = *(undefined8 *)(puVar36 + 0x24);
      puVar1 = (uint *)(lVar51 + 0x61c);
      *(undefined4 *)(lVar51 + 0x5e0) = uVar44;
      do {
        cVar17 = '\x01';
        bVar29 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar29) {
          *puVar1 = *puVar1 | 1;
          cVar17 = ExclusiveMonitorsStatus();
        }
      } while (cVar17 != '\0');
      lVar35 = lVar52 + (long)(int)uVar9 * 0x1340;
      FUN_01560750(lVar35 + 0x698,*(undefined8 *)(lVar51 + 0x628),*(undefined1 *)(lVar35 + 0x756),
                   *(undefined2 *)(lVar35 + 0x754));
      *(long *)(lVar35 + 0x650) = lVar35 + 0x698;
    }
    if (*(char *)(param_1 + 0x708) != '\0') {
      uVar38 = 1;
      if (*(char *)(param_1 + 0x728) != '\0') {
        uVar38 = 2;
      }
      uVar25 = uVar42 >> (ulong)uVar38;
      fVar60 = (float)uVar25;
      uVar38 = uVar43 >> (ulong)uVar38;
      fVar61 = (float)uVar38;
      lVar51 = lVar52 + (long)(int)uVar9 * 0x1340;
      *(undefined8 *)(lVar51 + 0xa38) = 0;
      *(float *)(lVar51 + 0xa30) = fVar60;
      *(float *)(lVar51 + 0xa40) = fVar60;
      *(float *)(lVar51 + 0xa34) = fVar61;
      *(float *)(lVar51 + 0xa44) = fVar61;
      lVar35 = *(long *)puVar3;
      local_128 = PTR_DAT_04bb2020 + 0x10;
      local_120 = "shadow_prepass_light_buffer_temp_half";
      lVar51 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
      if (lVar51 == 0) {
        iVar31 = nn::os::GetCurrentCoreNumber();
      }
      else {
        iVar31 = (int)lVar51 + -1;
      }
      local_b0 = (undefined *)CONCAT44(local_b0._4_4_,iVar31);
      puVar36 = (undefined4 *)
                FUN_03948e10(lVar35,lVar55,lVar35 + (long)iVar31 * 0x290 + 0x10,&local_128,uVar64,1,
                             uVar25,uVar38,1,0,1,0,1,0,0,0);
      lVar51 = lVar52 + (long)(int)uVar9 * 0x1340;
      *(undefined4 **)(lVar51 + 0xa18) = puVar36;
      *(undefined4 *)(lVar51 + 0x858) = *puVar36;
      *(undefined4 *)(lVar51 + 0x85c) = puVar36[1];
      *(undefined8 *)(lVar51 + 0x860) = *(undefined8 *)(puVar36 + 2);
      *(undefined8 *)(lVar51 + 0x868) = *(undefined8 *)(puVar36 + 4);
      *(undefined4 *)(lVar51 + 0x870) = puVar36[6];
      *(undefined4 *)(lVar51 + 0x874) = puVar36[7];
      *(undefined8 *)(lVar51 + 0x878) = *(undefined8 *)(puVar36 + 8);
      *(undefined8 *)(lVar51 + 0x880) = *(undefined8 *)(puVar36 + 10);
      uVar40 = *(undefined8 *)(puVar36 + 0xc);
      uVar37 = *(undefined8 *)(puVar36 + 0xe);
      uVar48 = *(undefined8 *)(puVar36 + 0x10);
      *(undefined8 *)(lVar51 + 0x89f) = *(undefined8 *)((long)puVar36 + 0x47);
      *(undefined8 *)(lVar51 + 0x898) = uVar48;
      *(undefined8 *)(lVar51 + 0x890) = uVar37;
      *(undefined8 *)(lVar51 + 0x888) = uVar40;
      FUN_038fd1e0(lVar51 + 0x8a8);
      FUN_038fd2f0(lVar51 + 0x8a8,puVar36 + 0x14);
      uVar44 = puVar36[0x26];
      *(undefined8 *)(lVar51 + 0x8e8) = *(undefined8 *)(puVar36 + 0x24);
      puVar1 = (uint *)(lVar51 + 0x92c);
      *(undefined4 *)(lVar51 + 0x8f0) = uVar44;
      do {
        cVar17 = '\x01';
        bVar29 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar29) {
          *puVar1 = *puVar1 | 1;
          cVar17 = ExclusiveMonitorsStatus();
        }
      } while (cVar17 != '\0');
      lVar35 = lVar52 + (long)(int)uVar9 * 0x1340;
      FUN_01560750(lVar35 + 0xaf8,*(undefined8 *)(lVar51 + 0xa18),*(undefined1 *)(lVar35 + 0xbb6),
                   *(undefined2 *)(lVar35 + 0xbb4));
      *(long *)(lVar35 + 0xa48) = lVar35 + 0xaf8;
      *(float *)(lVar35 + 0xa98) = fVar60;
      *(float *)(lVar35 + 0xa9c) = fVar61;
      *(undefined8 *)(lVar35 + 0xaa0) = 0;
      *(float *)(lVar35 + 0xaa8) = fVar60;
      *(float *)(lVar35 + 0xaac) = fVar61;
      lVar35 = *(long *)PTR_DAT_04bbd510;
      local_128 = PTR_DAT_04bb2020 + 0x10;
      local_120 = "shadow_prepass_light_buffer_temp_half";
      lVar51 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
      if (lVar51 == 0) {
        iVar31 = nn::os::GetCurrentCoreNumber();
      }
      else {
        iVar31 = (int)lVar51 + -1;
      }
      local_b0 = (undefined *)CONCAT44(local_b0._4_4_,iVar31);
      puVar36 = (undefined4 *)
                FUN_03948e10(lVar35,lVar55,lVar35 + (long)iVar31 * 0x290 + 0x10,&local_128,uVar64,1,
                             uVar25,uVar38,1,0,1,0,1,0,0,0);
      lVar51 = lVar52 + (long)(int)uVar9 * 0x1340;
      *(undefined4 **)(lVar51 + 0xa20) = puVar36;
      *(undefined4 *)(lVar51 + 0x938) = *puVar36;
      *(undefined4 *)(lVar51 + 0x93c) = puVar36[1];
      *(undefined8 *)(lVar51 + 0x940) = *(undefined8 *)(puVar36 + 2);
      *(undefined8 *)(lVar51 + 0x948) = *(undefined8 *)(puVar36 + 4);
      *(undefined4 *)(lVar51 + 0x950) = puVar36[6];
      *(undefined4 *)(lVar51 + 0x954) = puVar36[7];
      *(undefined8 *)(lVar51 + 0x958) = *(undefined8 *)(puVar36 + 8);
      *(undefined8 *)(lVar51 + 0x960) = *(undefined8 *)(puVar36 + 10);
      uVar40 = *(undefined8 *)(puVar36 + 0xc);
      uVar37 = *(undefined8 *)(puVar36 + 0xe);
      uVar48 = *(undefined8 *)(puVar36 + 0x10);
      *(undefined8 *)(lVar51 + 0x97f) = *(undefined8 *)((long)puVar36 + 0x47);
      *(undefined8 *)(lVar51 + 0x978) = uVar48;
      *(undefined8 *)(lVar51 + 0x970) = uVar37;
      *(undefined8 *)(lVar51 + 0x968) = uVar40;
      FUN_038fd1e0(lVar51 + 0x988);
      FUN_038fd2f0(lVar51 + 0x988,puVar36 + 0x14);
      uVar64 = puVar36[0x26];
      *(undefined8 *)(lVar51 + 0x9c8) = *(undefined8 *)(puVar36 + 0x24);
      puVar1 = (uint *)(lVar51 + 0xa0c);
      *(undefined4 *)(lVar51 + 0x9d0) = uVar64;
      do {
        cVar17 = '\x01';
        bVar29 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar29) {
          *puVar1 = *puVar1 | 1;
          cVar17 = ExclusiveMonitorsStatus();
        }
      } while (cVar17 != '\0');
      lVar52 = lVar52 + (long)(int)uVar9 * 0x1340;
      FUN_01560750(lVar52 + 0xbd8,*(undefined8 *)(lVar51 + 0xa20),*(undefined1 *)(lVar52 + 0xc96),
                   *(undefined2 *)(lVar52 + 0xc94));
      *(long *)(lVar52 + 0xab0) = lVar52 + 0xbd8;
      FUN_01560750(lVar52 + 0xd20,*(undefined8 *)(lVar52 + 0x3f8),1,0);
      *(long *)(lVar52 + 0xcd8) = lVar52 + 0xd20;
      fVar61 = (float)(uVar42 >> 1);
      *(float *)(lVar52 + 0xcc0) = fVar61;
      fVar60 = fVar61;
      if (1 < uVar42) {
        fVar60 = 0.0;
      }
      fVar62 = (float)(uVar43 >> 1);
      fVar65 = 0.0;
      if (1 < uVar42) {
        fVar65 = fVar61;
      }
      *(float *)(lVar52 + 0xcc4) = fVar62;
      *(float *)(lVar52 + 0xcc8) = fVar60;
      fVar60 = fVar62;
      if (1 < uVar43) {
        fVar60 = 0.0;
      }
      *(float *)(lVar52 + 0xcd0) = fVar65;
      fVar61 = 0.0;
      if (1 < uVar43) {
        fVar61 = fVar62;
      }
      *(float *)(lVar52 + 0xccc) = fVar60;
      *(float *)(lVar52 + 0xcd4) = fVar61;
    }
    if (*(uint *)(param_1 + 0x1d0) <= uVar45) {
      uVar45 = 0;
    }
    uVar42 = *(uint *)(*(long *)(param_1 + 0x1d8) + (long)(int)uVar45 * 0x1340 + 0x4c0);
    if (uVar42 != 0xffffffff) {
      lVar52 = *(long *)PTR_DAT_04bc1010;
      if ((*(uint *)(lVar52 + 0x5c8) >> 3 & 1) == 0) {
        uVar45 = uVar42 - *(ushort *)(lVar52 + 0x3da);
        if (*(uint *)(lVar52 + 0x368) <= uVar45) {
          uVar45 = 0;
        }
        if ((*(uint *)(*(long *)(lVar52 + 0x370) + (long)(int)uVar45 * 0x20 + 4) >> 2 & 1) == 0) {
          *(ulong *)(lVar55 + 0x100) = *(ulong *)(lVar55 + 0x100) | 1L << ((ulong)uVar42 & 0x3f);
          goto LAB_03ac6548;
        }
      }
      if ((*(uint *)(lVar52 + 0x5c8) >> 5 & 1) == 0) {
        uVar44 = 0x112;
        uVar64 = 0x12;
      }
      else {
        uVar44 = 0x111;
        uVar64 = 0x11;
      }
      if ((*(uint *)(lVar52 + 800) & 2) != 0) {
        uVar64 = uVar44;
      }
      (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(lVar55 + 0xb8),uVar64);
      *(undefined8 *)(lVar55 + 0x100) = 0;
    }
  }
LAB_03ac6548:
  uVar42 = *(uint *)(param_2 + 1);
  lVar52 = *(long *)(param_1 + 0x1d8);
  if (*(uint *)(param_1 + 0x1d0) <= uVar42) {
    uVar42 = 0;
  }
  uVar45 = *(uint *)(lVar52 + (long)(int)uVar42 * 0x1340 + 0x4c0);
  if (uVar45 != 0xffffffff) {
    lVar51 = *param_2;
    lVar55 = *(long *)PTR_DAT_04bc1010;
    if ((*(uint *)(lVar55 + 0x5c8) >> 3 & 1) == 0) {
      uVar43 = uVar45 - *(ushort *)(lVar55 + 0x3da);
      if (*(uint *)(lVar55 + 0x368) <= uVar43) {
        uVar43 = 0;
      }
      if ((*(uint *)(*(long *)(lVar55 + 0x370) + (long)(int)uVar43 * 0x20 + 4) >> 2 & 1) == 0) {
        *(ulong *)(lVar51 + 0x100) = *(ulong *)(lVar51 + 0x100) | 1L << ((ulong)uVar45 & 0x3f);
        goto LAB_03ac660c;
      }
    }
    if ((*(uint *)(lVar55 + 0x5c8) >> 5 & 1) == 0) {
      uVar44 = 0x112;
      uVar64 = 0x12;
    }
    else {
      uVar44 = 0x111;
      uVar64 = 0x11;
    }
    if ((*(uint *)(lVar55 + 800) & 2) != 0) {
      uVar64 = uVar44;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(lVar51 + 0xb8),uVar64);
    *(undefined8 *)(lVar51 + 0x100) = 0;
  }
LAB_03ac660c:
  lVar55 = lVar58 + (long)(int)uVar16 * 0x1340;
  *(undefined4 *)(lVar55 + 0x780) = *(undefined4 *)(lVar59 + 8);
  *(undefined4 *)(lVar55 + 0x784) = *(undefined4 *)(lVar59 + 0xc);
  *(undefined8 *)(lVar55 + 0x788) = *(undefined8 *)(lVar59 + 0x10);
  *(undefined8 *)(lVar55 + 0x790) = *(undefined8 *)(lVar59 + 0x18);
  *(undefined4 *)(lVar55 + 0x798) = *(undefined4 *)(lVar59 + 0x20);
  *(undefined4 *)(lVar55 + 0x79c) = *(undefined4 *)(lVar59 + 0x24);
  *(undefined8 *)(lVar55 + 0x7a0) = *(undefined8 *)(lVar59 + 0x28);
  *(undefined8 *)(lVar55 + 0x7a8) = *(undefined8 *)(lVar59 + 0x30);
  uVar40 = *(undefined8 *)(lVar59 + 0x38);
  uVar37 = *(undefined8 *)(lVar59 + 0x40);
  uVar48 = *(undefined8 *)(lVar59 + 0x48);
  *(undefined8 *)(lVar55 + 0x7c7) = *(undefined8 *)(lVar59 + 0x4f);
  *(undefined8 *)(lVar55 + 0x7c0) = uVar48;
  *(undefined8 *)(lVar55 + 0x7b8) = uVar37;
  *(undefined8 *)(lVar55 + 0x7b0) = uVar40;
  FUN_038fd1e0(lVar55 + 2000);
  FUN_038fd2f0(lVar55 + 2000,lVar59 + 0x58);
  uVar40 = *(undefined8 *)(lVar59 + 0x98);
  *(undefined4 *)(lVar55 + 0x818) = *(undefined4 *)(lVar59 + 0xa0);
  *(undefined8 *)(lVar55 + 0x810) = uVar40;
  do {
    cVar17 = '\x01';
    bVar29 = (bool)ExclusiveMonitorPass((undefined4 *)(lVar55 + 0x830),0x10);
    if (bVar29) {
      *(undefined4 *)(lVar55 + 0x830) = 0x7fffffff;
      cVar17 = ExclusiveMonitorsStatus();
    }
  } while (cVar17 != '\0');
  *(undefined2 *)(lVar55 + 0x834) = *(undefined2 *)(lVar59 + 0xbc);
  *(undefined1 *)(lVar55 + 0x836) = *(undefined1 *)(lVar59 + 0xbe);
  *(undefined1 *)(lVar55 + 0x837) = *(undefined1 *)(lVar59 + 0xbf);
  uVar40 = *(undefined8 *)(lVar59 + 0xb0);
  *(undefined8 *)(lVar55 + 0x820) = *(undefined8 *)(lVar59 + 0xa8);
  *(undefined8 *)(lVar55 + 0x828) = uVar40;
  lVar51 = lVar58 + (long)(int)uVar16 * 0x1340;
  *(undefined8 *)(lVar51 + 0x838) = *(undefined8 *)(lVar59 + 0xc0);
  *(undefined4 *)(lVar51 + 0x840) = *(undefined4 *)(lVar59 + 200);
  *(undefined4 *)(lVar51 + 0x844) = *(undefined4 *)(lVar59 + 0xcc);
  *(undefined8 *)(lVar51 + 0x848) = *(undefined8 *)(lVar59 + 0xd0);
  *(undefined8 *)(lVar51 + 0x850) = *(undefined8 *)(lVar59 + 0xd8);
  *(long *)(lVar52 + (long)(int)uVar42 * 0x1340 + 0x460) = lVar55 + 0x778;
  lVar52 = *param_2;
  uVar42 = *(uint *)(param_2 + 1);
  lVar59 = *(long *)(param_1 + 0x1d8);
  if (*(uint *)(param_1 + 0x1d0) <= uVar42) {
    uVar42 = 0;
  }
  uVar45 = *(uint *)(lVar59 + (long)(int)uVar42 * 0x1340 + 0x4c0);
  if (uVar45 != 0xffffffff) {
    lVar55 = *(long *)PTR_DAT_04bc1010;
    if ((*(uint *)(lVar55 + 0x5c8) >> 3 & 1) == 0) {
      uVar43 = uVar45 - *(ushort *)(lVar55 + 0x3da);
      if (*(uint *)(lVar55 + 0x368) <= uVar43) {
        uVar43 = 0;
      }
      if ((*(uint *)(*(long *)(lVar55 + 0x370) + (long)(int)uVar43 * 0x20 + 4) >> 2 & 1) == 0) {
        *(ulong *)(lVar52 + 0x100) = *(ulong *)(lVar52 + 0x100) | 1L << ((ulong)uVar45 & 0x3f);
        goto LAB_03ac67d4;
      }
    }
    if ((*(uint *)(lVar55 + 0x5c8) >> 5 & 1) == 0) {
      uVar44 = 0x112;
      uVar64 = 0x12;
    }
    else {
      uVar44 = 0x111;
      uVar64 = 0x11;
    }
    if ((*(uint *)(lVar55 + 800) & 2) != 0) {
      uVar64 = uVar44;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(lVar52 + 0xb8),uVar64);
    *(undefined8 *)(lVar52 + 0x100) = 0;
  }
LAB_03ac67d4:
  lVar59 = lVar59 + (long)(int)uVar42 * 0x1340;
  (**(code **)(*(long *)(lVar59 + 0x400) + 0x38))(lVar59 + 0x400,lVar52);
  local_120 = (char *)0x7f7fffff7f7fffff;
  local_118 = 0xff7fffffff7fffff;
  local_128 = PTR_DAT_04bd0f08 + 0x10;
  local_10c = 0x3f80000000000000;
  local_110 = *(uint *)PTR_DAT_04bd0ea8;
  if (local_110 < 6) {
    if ((1 << (ulong)(local_110 & 0x1f) & 0x39U) == 0) {
      fVar61 = *(float *)(lVar59 + 0x408);
      fVar60 = *(float *)(lVar59 + 0x40c);
    }
    else {
      fVar60 = *(float *)(lVar59 + 0x408);
      fVar61 = *(float *)(lVar59 + 0x40c);
    }
    fVar62 = fVar60;
    fVar65 = 0.0;
    if (fVar60 <= 0.0) {
      fVar62 = 0.0;
      fVar65 = fVar60;
    }
    fVar63 = fVar61;
    fVar60 = 0.0;
    if (fVar61 <= 0.0) {
      fVar63 = 0.0;
      fVar60 = fVar61;
    }
    local_120 = (char *)CONCAT44(fVar60,fVar65);
    local_118 = CONCAT44(fVar63,fVar62);
  }
  FUN_038e77e4(&local_128,lVar52,lVar59 + 0x400);
  puVar39 = (undefined4 *)param_2[4];
  puVar36 = (undefined4 *)param_2[5];
  if (puVar39 != (undefined4 *)0x0) {
    puVar36 = puVar39;
  }
  lVar59 = lVar58 + (long)(int)uVar16 * 0x1340;
  *(undefined4 *)(lVar59 + 0x78) = *puVar36;
  *(undefined4 *)(lVar59 + 0x7c) = puVar36[1];
  *(undefined8 *)(lVar59 + 0x80) = *(undefined8 *)(puVar36 + 2);
  *(undefined8 *)(lVar59 + 0x88) = *(undefined8 *)(puVar36 + 4);
  *(undefined4 *)(lVar59 + 0x90) = puVar36[6];
  *(undefined4 *)(lVar59 + 0x94) = puVar36[7];
  *(undefined8 *)(lVar59 + 0x98) = *(undefined8 *)(puVar36 + 8);
  *(undefined8 *)(lVar59 + 0xa0) = *(undefined8 *)(puVar36 + 10);
  uVar40 = *(undefined8 *)(puVar36 + 0xc);
  uVar37 = *(undefined8 *)(puVar36 + 0xe);
  uVar48 = *(undefined8 *)(puVar36 + 0x10);
  *(undefined8 *)(lVar59 + 0xbf) = *(undefined8 *)((long)puVar36 + 0x47);
  *(undefined8 *)(lVar59 + 0xb0) = uVar37;
  *(undefined8 *)(lVar59 + 0xb8) = uVar48;
  *(undefined8 *)(lVar59 + 0xa8) = uVar40;
  FUN_038fd1e0(lVar59 + 200);
  FUN_038fd2f0(lVar59 + 200,puVar36 + 0x14);
  uVar64 = puVar36[0x26];
  *(undefined8 *)(lVar59 + 0x108) = *(undefined8 *)(puVar36 + 0x24);
  puVar1 = (uint *)(lVar59 + 0x14c);
  *(undefined4 *)(lVar59 + 0x110) = uVar64;
  do {
    cVar17 = '\x01';
    bVar29 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar29) {
      *puVar1 = *puVar1 | 1;
      cVar17 = ExclusiveMonitorsStatus();
    }
  } while (cVar17 != '\0');
  puVar53 = *(undefined4 **)(lVar58 + (long)(int)uVar16 * 0x1340 + 0xee0);
  if (puVar53 != (undefined4 *)0x0) {
    lVar52 = lVar58 + (long)(int)uVar16 * 0x1340;
    *(undefined4 *)(lVar52 + 0x238) = *puVar53;
    *(undefined4 *)(lVar52 + 0x23c) = puVar53[1];
    *(undefined8 *)(lVar52 + 0x240) = *(undefined8 *)(puVar53 + 2);
    *(undefined8 *)(lVar52 + 0x248) = *(undefined8 *)(puVar53 + 4);
    *(undefined4 *)(lVar52 + 0x250) = puVar53[6];
    *(undefined4 *)(lVar52 + 0x254) = puVar53[7];
    *(undefined8 *)(lVar52 + 600) = *(undefined8 *)(puVar53 + 8);
    *(undefined8 *)(lVar52 + 0x260) = *(undefined8 *)(puVar53 + 10);
    uVar40 = *(undefined8 *)(puVar53 + 0xc);
    uVar37 = *(undefined8 *)(puVar53 + 0xe);
    uVar48 = *(undefined8 *)(puVar53 + 0x10);
    *(undefined8 *)(lVar52 + 0x27f) = *(undefined8 *)((long)puVar53 + 0x47);
    *(undefined8 *)(lVar52 + 0x278) = uVar48;
    *(undefined8 *)(lVar52 + 0x270) = uVar37;
    *(undefined8 *)(lVar52 + 0x268) = uVar40;
    FUN_038fd1e0(lVar52 + 0x288);
    FUN_038fd2f0(lVar52 + 0x288,puVar53 + 0x14);
    uVar40 = *(undefined8 *)(puVar53 + 0x24);
    *(undefined4 *)(lVar52 + 0x2d0) = puVar53[0x26];
    *(undefined8 *)(lVar52 + 0x2c8) = uVar40;
    puVar1 = (uint *)(lVar52 + 0x30c);
    do {
      cVar17 = '\x01';
      bVar29 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar29) {
        *puVar1 = *puVar1 | 1;
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
  }
  lVar52 = *param_2;
  iVar31 = *(int *)((long)param_2 + 0xc);
  uVar23 = *(ushort *)((long)puVar36 + 0x32);
  uVar24 = *(ushort *)(puVar36 + 0xc);
  if (uVar24 < 2) {
    uVar24 = 1;
  }
  uVar15 = uVar23;
  if (*(short *)((long)puVar36 + 0x3a) != 3) {
    uVar15 = 1;
  }
  if (uVar15 <= uVar23) {
    uVar15 = uVar23;
  }
  local_128 = (undefined *)CONCAT44(1.0 / (float)uVar15,1.0 / (float)uVar24);
  lVar55 = plVar54[2];
  (**(code **)(*plVar54 + 0x20))(plVar54);
  (**(code **)(*plVar54 + 0x20))(plVar54);
  lVar51 = *(long *)plVar54[1];
  bVar22 = (&DAT_041b370c)[(ulong)*(byte *)(lVar51 + 0x50) * 4];
  (**(code **)(*plVar54 + 0x18))(plVar54);
  if ((ulong)bVar22 != 0) {
    memcpy((void *)(lVar55 + (ulong)*(ushort *)(lVar51 + 0x4c)),&local_128,(ulong)bVar22 << 2);
  }
  bVar22 = *(byte *)((long)plVar54 + 0x39);
  uVar24 = *(ushort *)((long)plVar54 + 0x3a);
  lVar55 = plVar54[6];
  iVar32 = (**(code **)(*plVar54 + 0x20))(plVar54);
  iVar33 = (**(code **)(*plVar54 + 0x20))(plVar54);
  lVar51 = plVar54[4];
  if (lVar51 != 0) {
    lVar35 = plVar54[6];
    lVar49 = plVar54[3];
    uVar42 = (**(code **)PTR_DAT_04bcf030)(lVar51);
    if ((uVar42 >> 2 & 1) != 0) {
      (**(code **)PTR_DAT_04bcf350)
                (lVar51,(int)lVar49 +
                        (uint)uVar24 * (uint)bVar22 * (((int)lVar55 + iVar32) - 1U & -iVar33),
                 (int)lVar35);
    }
  }
  if (*(uint *)(*(long *)PTR_DAT_04bbdd18 + 8) < 0x99) {
    lVar55 = 0;
  }
  else {
    lVar55 = *(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x4c0);
  }
  FUN_038e4cec(&local_128);
  bVar29 = *(char *)(param_1 + 0x7a8) != '\0';
  if (bVar29) {
    local_c4 = 5;
  }
  bVar30 = false;
  uVar64 = local_128._4_4_;
  local_128._0_2_ = (ushort)bVar29;
  local_128 = (undefined *)(CONCAT44(uVar64,(undefined4)local_128) & 0xfffffffeffffffff);
  iVar32 = 0;
  if (*(uint *)(param_1 + 0x808) < 3 && *(int *)(param_1 + 0x7e8) == 1) {
    iVar32 = *(uint *)(param_1 + 0x808) + 1;
  }
  if (*(int *)(param_1 + 0x810) != 0) {
    iVar31 = *(int *)(param_1 + 0x810);
  }
  bVar22 = *(byte *)(param_1 + 0x668);
  iVar33 = 2;
  if (iVar31 < 3) {
    iVar33 = iVar31 + -1;
  }
  iVar31 = 3;
  if (puVar53 != (undefined4 *)0x0) {
    iVar31 = 0;
  }
  if (iVar33 != 0) {
    iVar31 = iVar33;
  }
  iVar33 = 1;
  if (*(char *)(param_1 + 0x548) != '\0') {
    iVar33 = 2;
  }
  iVar10 = 0;
  if (*(char *)(param_1 + 0x528) != '\0') {
    iVar10 = iVar33;
  }
  lVar51 = lVar58 + (long)(int)uVar16 * 0x1340;
  if ((*(byte *)(param_1 + 0x1e0) & 1) == 0) {
    iVar33 = 0;
  }
  else {
    iVar33 = 0;
    if (*(long *)(lVar51 + 0xff0) != 0) {
      bVar30 = *(long *)(lVar58 + (long)(int)uVar16 * 0x1340 + 0xff8) != 0;
      iVar33 = 1;
      if (bVar30) {
        iVar33 = 2;
      }
    }
  }
  FUN_038e4d90(&local_128,lVar52);
  lVar35 = *(long *)(lVar55 + 8);
  uVar42 = *(uint *)(lVar35 + 0x30);
  lVar49 = *(long *)(lVar35 + 0x38);
  lVar55 = 0x70;
  if (uVar42 < 3) {
    lVar55 = 0;
  }
  lVar11 = 0xa8;
  if (uVar42 < 4) {
    lVar11 = 0;
  }
  lVar12 = 0xe0;
  if (uVar42 < 5) {
    lVar12 = 0;
  }
  lVar13 = 0x118;
  if (uVar42 < 6) {
    lVar13 = 0;
  }
  uVar45 = (uint)*(ushort *)(lVar49 + lVar13 + 0x30);
  if (puVar39 != (undefined4 *)0x0) {
    uVar45 = 0;
  }
  iVar31 = iVar10 * (uint)*(ushort *)(lVar49 + 0x30) +
           (uint)*(ushort *)(lVar49 + (ulong)(1 < uVar42) * 0x38 + 0x30) * (uint)bVar22 +
           iVar31 * (uint)*(ushort *)(lVar49 + lVar55 + 0x30) +
           iVar32 * (uint)*(ushort *)(lVar49 + lVar11 + 0x30) +
           iVar33 * (uint)*(ushort *)(lVar49 + lVar12 + 0x30) + uVar45;
  if (iVar31 < 1) {
    lVar55 = *(long *)(lVar35 + 0x18);
  }
  else {
    uVar42 = iVar31 - 1;
    if (*(uint *)(lVar35 + 0x20) <= uVar42) {
      uVar42 = 0;
    }
    lVar55 = *(long *)(lVar35 + 0x28) + (ulong)uVar42 * 0x150;
  }
  lVar35 = lVar58 + (long)(int)uVar16 * 0x1340;
  FUN_03907810(lVar55,lVar52);
  if (((*(byte *)(param_1 + 0x1e0) & 1) != 0) && (lVar51 = *(long *)(lVar51 + 0xff0), lVar51 != 0))
  {
    puVar1 = (uint *)(lVar55 + 0x14);
    do {
      uVar42 = *puVar1;
      cVar17 = '\x01';
      bVar29 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar29) {
        *puVar1 = uVar42 | 0x80000000;
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
    if ((uVar42 & 0x7fffffff) != 0) {
      if ((int)uVar42 < 0) {
        if ((int)*puVar1 < 0) {
          lVar49 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar49 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar1 < 0);
        }
      }
      else {
        FUN_03907b80(lVar55);
      }
    }
    do {
      cVar17 = '\x01';
      bVar29 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar29) {
        *puVar1 = 0;
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
    FUN_0390d290(lVar51,lVar52,
                 *(long *)(lVar55 + 0x68) + (ulong)(1 < *(uint *)(lVar55 + 0x60)) * 0x18,0xffffffff,
                 0);
  }
  if ((bVar30) && (lVar51 = *(long *)(lVar58 + (long)(int)uVar16 * 0x1340 + 0xff8), lVar51 != 0)) {
    puVar1 = (uint *)(lVar55 + 0x14);
    do {
      uVar42 = *puVar1;
      cVar17 = '\x01';
      bVar29 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar29) {
        *puVar1 = uVar42 | 0x80000000;
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
    if ((uVar42 & 0x7fffffff) != 0) {
      if ((int)uVar42 < 0) {
        if ((int)*puVar1 < 0) {
          lVar49 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar49 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar1 < 0);
        }
      }
      else {
        FUN_03907b80(lVar55);
      }
    }
    do {
      cVar17 = '\x01';
      bVar29 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar29) {
        *puVar1 = 0;
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
    lVar49 = 0xa8;
    if (*(uint *)(lVar55 + 0x60) < 8) {
      lVar49 = 0;
    }
    FUN_0390d290(lVar51,lVar52,*(long *)(lVar55 + 0x68) + lVar49,0xffffffff,0);
  }
  puVar1 = (uint *)(lVar55 + 0x14);
  do {
    uVar42 = *puVar1;
    cVar17 = '\x01';
    bVar29 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar29) {
      *puVar1 = uVar42 | 0x80000000;
      cVar17 = ExclusiveMonitorsStatus();
    }
  } while (cVar17 != '\0');
  if ((uVar42 & 0x7fffffff) != 0) {
    if ((int)uVar42 < 0) {
      if ((int)*puVar1 < 0) {
        lVar51 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar51 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar55);
    }
  }
  do {
    cVar17 = '\x01';
    bVar29 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar29) {
      *puVar1 = 0;
      cVar17 = ExclusiveMonitorsStatus();
    }
  } while (cVar17 != '\0');
  FUN_0390d290((undefined4 *)(lVar59 + 0x78),lVar52,*(undefined8 *)(lVar55 + 0x68),0xffffffff,0);
  do {
    uVar42 = *puVar1;
    cVar17 = '\x01';
    bVar29 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar29) {
      *puVar1 = uVar42 | 0x80000000;
      cVar17 = ExclusiveMonitorsStatus();
    }
  } while (cVar17 != '\0');
  if ((uVar42 & 0x7fffffff) != 0) {
    if ((int)uVar42 < 0) {
      if ((int)*puVar1 < 0) {
        lVar59 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar59 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar55);
    }
  }
  do {
    cVar17 = '\x01';
    bVar29 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar29) {
      *puVar1 = 0;
      cVar17 = ExclusiveMonitorsStatus();
    }
  } while (cVar17 != '\0');
  lVar59 = 0x48;
  if (*(uint *)(lVar55 + 0x60) < 4) {
    lVar59 = 0;
  }
  FUN_0390d290(lVar35 + 0x158,lVar52,*(long *)(lVar55 + 0x68) + lVar59,0xffffffff,0);
  do {
    uVar42 = *puVar1;
    cVar17 = '\x01';
    bVar29 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar29) {
      *puVar1 = uVar42 | 0x80000000;
      cVar17 = ExclusiveMonitorsStatus();
    }
  } while (cVar17 != '\0');
  if ((uVar42 & 0x7fffffff) != 0) {
    if ((int)uVar42 < 0) {
      if ((int)*puVar1 < 0) {
        lVar59 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar59 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar55);
    }
  }
  do {
    cVar17 = '\x01';
    bVar29 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar29) {
      *puVar1 = 0;
      cVar17 = ExclusiveMonitorsStatus();
    }
  } while (cVar17 != '\0');
  lVar59 = 0x30;
  if (*(uint *)(lVar55 + 0x60) < 3) {
    lVar59 = 0;
  }
  FUN_0390d290(lVar35 + 0x238,lVar52,*(long *)(lVar55 + 0x68) + lVar59,0xffffffff,0);
  lVar59 = *(long *)(lVar58 + (long)(int)uVar16 * 0x1340 + 0xee8);
  if (lVar59 != 0) {
    do {
      uVar42 = *puVar1;
      cVar17 = '\x01';
      bVar29 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar29) {
        *puVar1 = uVar42 | 0x80000000;
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
    if ((uVar42 & 0x7fffffff) != 0) {
      if ((int)uVar42 < 0) {
        if ((int)*puVar1 < 0) {
          lVar51 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar51 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar1 < 0);
        }
      }
      else {
        FUN_03907b80(lVar55);
      }
    }
    do {
      cVar17 = '\x01';
      bVar29 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar29) {
        *puVar1 = 0;
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
    lVar51 = 0x60;
    if (*(uint *)(lVar55 + 0x60) < 5) {
      lVar51 = 0;
    }
    FUN_0390d290(lVar59,lVar52,*(long *)(lVar55 + 0x68) + lVar51,0xffffffff,0);
  }
  lVar59 = *(long *)(lVar58 + (long)(int)uVar16 * 0x1340 + 0xef0);
  if ((lVar59 != 0) &&
     (lVar51 = lVar58 + (long)(int)uVar16 * 0x1340, *(long *)(lVar51 + 0xef8) != 0)) {
    do {
      uVar42 = *puVar1;
      cVar17 = '\x01';
      bVar29 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar29) {
        *puVar1 = uVar42 | 0x80000000;
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
    if ((uVar42 & 0x7fffffff) != 0) {
      if ((int)uVar42 < 0) {
        if ((int)*puVar1 < 0) {
          lVar35 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar35 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar1 < 0);
        }
      }
      else {
        FUN_03907b80(lVar55);
      }
    }
    do {
      cVar17 = '\x01';
      bVar29 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar29) {
        *puVar1 = 0;
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
    lVar35 = 0x78;
    if (*(uint *)(lVar55 + 0x60) < 6) {
      lVar35 = 0;
    }
    FUN_0390d290(lVar59,lVar52,*(long *)(lVar55 + 0x68) + lVar35,0xffffffff,0);
    uVar40 = *(undefined8 *)(lVar51 + 0xef8);
    do {
      uVar42 = *puVar1;
      cVar17 = '\x01';
      bVar29 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar29) {
        *puVar1 = uVar42 | 0x80000000;
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
    if ((uVar42 & 0x7fffffff) != 0) {
      if ((int)uVar42 < 0) {
        if ((int)*puVar1 < 0) {
          lVar59 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar59 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar1 < 0);
        }
      }
      else {
        FUN_03907b80(lVar55);
      }
    }
    do {
      cVar17 = '\x01';
      bVar29 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar29) {
        *puVar1 = 0;
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
    lVar59 = 0x90;
    if (*(uint *)(lVar55 + 0x60) < 7) {
      lVar59 = 0;
    }
    FUN_0390d290(uVar40,lVar52,*(long *)(lVar55 + 0x68) + lVar59,0xffffffff,0);
  }
  FUN_01557430(lVar55,lVar52,0,plVar54,0);
  uVar40 = *(undefined8 *)(lVar52 + 0xb8);
  lVar59 = *(long *)PTR_DAT_04bbd7e0;
  (**(code **)PTR_DAT_04bcf1a8)(uVar40,0x10,lVar59 + 0xe44);
  (**(code **)PTR_DAT_04bcf1b0)(uVar40,0x10,lVar59 + 0xe88);
  puVar4 = PTR_DAT_04bcf1e8;
  puVar3 = PTR_DAT_04bbd560;
  iVar31 = *(int *)(lVar59 + 0xe30);
  if (iVar31 != 0) {
    lVar59 = *(long *)(lVar59 + 0xe38);
    uVar34 = 0;
    uVar57 = 0;
    do {
      lVar55 = *(long *)(lVar59 + (-(uVar57 >> 0x1f) & 0xfffffff800000000 | uVar57 << 3));
      if (lVar55 != 0) {
        uVar37 = (**(code **)puVar3)(lVar55 + 8);
        (**(code **)puVar4)(uVar40,uVar34 & 0xffffffff,uVar37,*(undefined4 *)(lVar55 + 0x118));
      }
      uVar34 = uVar57 + 1;
      uVar57 = uVar34 & 0xffffffff;
    } while (iVar31 != (int)uVar34);
  }
  lVar59 = *(long *)PTR_DAT_04bbd7e8;
  iVar31 = *(int *)(lVar59 + 0x1f8);
  if (iVar31 != 0) {
    uVar64 = *(undefined4 *)(lVar59 + 0x1dc);
    uVar37 = *(undefined8 *)(lVar52 + 0xb8);
    uVar40 = (**(code **)puVar3)(lVar59 + 0x200);
    (**(code **)PTR_DAT_04bbd568)(uVar37,uVar64,*(undefined4 *)(lVar59 + 0x1d8),iVar31,uVar40);
  }
  if (*(int *)(param_1 + 0x4a8) != 0) {
    lVar59 = *(long *)(param_1 + 0x1d8);
    lVar52 = *param_2;
    uVar42 = *(uint *)(param_2 + 1);
    if (*(uint *)(param_1 + 0x1d0) <= uVar42) {
      uVar42 = 0;
    }
    uVar45 = *(uint *)(lVar59 + (long)(int)uVar42 * 0x1340 + 0x6f0);
    if (uVar45 != 0xffffffff) {
      lVar55 = *(long *)PTR_DAT_04bc1010;
      if ((*(uint *)(lVar55 + 0x5c8) >> 3 & 1) == 0) {
        uVar43 = uVar45 - *(ushort *)(lVar55 + 0x3da);
        if (*(uint *)(lVar55 + 0x368) <= uVar43) {
          uVar43 = 0;
        }
        if ((*(uint *)(*(long *)(lVar55 + 0x370) + (long)(int)uVar43 * 0x20 + 4) >> 2 & 1) == 0) {
          *(ulong *)(lVar52 + 0x100) = *(ulong *)(lVar52 + 0x100) | 1L << ((ulong)uVar45 & 0x3f);
          goto LAB_03ac7500;
        }
      }
      if ((*(uint *)(lVar55 + 0x5c8) >> 5 & 1) == 0) {
        uVar44 = 0x112;
        uVar64 = 0x12;
      }
      else {
        uVar44 = 0x111;
        uVar64 = 0x11;
      }
      if ((*(uint *)(lVar55 + 800) & 2) != 0) {
        uVar64 = uVar44;
      }
      (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(lVar52 + 0xb8),uVar64);
      *(undefined8 *)(lVar52 + 0x100) = 0;
    }
LAB_03ac7500:
    lVar59 = lVar59 + (long)(int)uVar42 * 0x1340;
    (**(code **)(*(long *)(lVar59 + 0x630) + 0x38))(lVar59 + 0x630,lVar52);
    local_118 = 0xff7fffffff7fffff;
    local_128 = PTR_DAT_04bd0f08 + 0x10;
    local_120 = (char *)0x7f7fffff7f7fffff;
    local_10c = 0x3f80000000000000;
    local_110 = *(uint *)PTR_DAT_04bd0ea8;
    if (local_110 < 6) {
      if ((1 << (ulong)(local_110 & 0x1f) & 0x39U) == 0) {
        fVar61 = *(float *)(lVar59 + 0x638);
        fVar60 = *(float *)(lVar59 + 0x63c);
      }
      else {
        fVar60 = *(float *)(lVar59 + 0x638);
        fVar61 = *(float *)(lVar59 + 0x63c);
      }
      fVar62 = fVar60;
      fVar65 = 0.0;
      if (fVar60 <= 0.0) {
        fVar62 = 0.0;
        fVar65 = fVar60;
      }
      fVar63 = fVar61;
      fVar60 = 0.0;
      if (fVar61 <= 0.0) {
        fVar63 = 0.0;
        fVar60 = fVar61;
      }
      local_120 = (char *)CONCAT44(fVar60,fVar65);
      local_118 = CONCAT44(fVar63,fVar62);
    }
    FUN_038e77e4(&local_128,lVar52,lVar59 + 0x630);
    iVar31 = *(int *)(param_1 + 0x4c8);
    FUN_038e4cec(&local_128);
    local_128 = (undefined *)((ulong)local_128 & 0xfffffffeffff0000);
    if (*(char *)(param_1 + 0x668) == '\0') {
      bVar22 = *(byte *)(param_1 + 0x788);
LAB_03ac75f0:
      uVar42 = 2;
    }
    else {
      bVar22 = *(byte *)(param_1 + 0x788);
      if (*(char *)(param_1 + 0x688) != '\0') goto LAB_03ac75f0;
      uVar42 = 0;
    }
    local_10c = CONCAT44(local_10c._4_4_,bVar22 | uVar42 | (uint)local_10c & 0xfffffff0) | 4;
    FUN_038e4d90(&local_128,*param_2);
    if (0 < *(int *)(param_1 + 0x4e8)) {
      lVar59 = *(long *)(param_1 + 0x1d8);
      lVar52 = *param_2;
      uVar42 = *(uint *)(param_2 + 1);
      if (*(uint *)(param_1 + 0x1d0) <= uVar42) {
        uVar42 = 0;
      }
      if (*(int *)(param_1 + 0x4a8) == 0) {
        plVar54 = (long *)(lVar59 + (long)(int)uVar42 * 0x1340 + 0x400);
      }
      else {
        uVar45 = *(uint *)(lVar59 + (long)(int)uVar42 * 0x1340 + 0x6f0);
        if (uVar45 != 0xffffffff) {
          lVar55 = *(long *)PTR_DAT_04bc1010;
          if ((*(uint *)(lVar55 + 0x5c8) >> 3 & 1) == 0) {
            uVar43 = uVar45 - *(ushort *)(lVar55 + 0x3da);
            if (*(uint *)(lVar55 + 0x368) <= uVar43) {
              uVar43 = 0;
            }
            if ((*(uint *)(*(long *)(lVar55 + 0x370) + (long)(int)uVar43 * 0x20 + 4) >> 2 & 1) == 0)
            {
              *(ulong *)(lVar52 + 0x100) = *(ulong *)(lVar52 + 0x100) | 1L << ((ulong)uVar45 & 0x3f)
              ;
              goto LAB_03ac7704;
            }
          }
          if ((*(uint *)(lVar55 + 0x5c8) >> 5 & 1) == 0) {
            uVar44 = 0x112;
            uVar64 = 0x12;
          }
          else {
            uVar44 = 0x111;
            uVar64 = 0x11;
          }
          if ((*(uint *)(lVar55 + 800) & 2) != 0) {
            uVar64 = uVar44;
          }
          (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(lVar52 + 0xb8),uVar64);
          *(undefined8 *)(lVar52 + 0x100) = 0;
        }
LAB_03ac7704:
        plVar54 = (long *)(lVar59 + (long)(int)uVar42 * 0x1340 + 0x630);
      }
      (**(code **)(*plVar54 + 0x38))(plVar54,lVar52);
      local_118 = 0xff7fffffff7fffff;
      puVar3 = PTR_DAT_04bd0f08 + 0x10;
      local_120 = (char *)0x7f7fffff7f7fffff;
      local_10c = 0x3f80000000000000;
      local_110 = *(uint *)PTR_DAT_04bd0ea8;
      if (local_110 < 6) {
        if ((1 << (ulong)(local_110 & 0x1f) & 0x39U) == 0) {
          fVar61 = *(float *)(plVar54 + 1);
          fVar60 = *(float *)((long)plVar54 + 0xc);
        }
        else {
          fVar60 = *(float *)(plVar54 + 1);
          fVar61 = *(float *)((long)plVar54 + 0xc);
        }
        fVar62 = fVar60;
        fVar65 = 0.0;
        if (fVar60 <= 0.0) {
          fVar62 = 0.0;
          fVar65 = fVar60;
        }
        fVar63 = fVar61;
        fVar60 = 0.0;
        if (fVar61 <= 0.0) {
          fVar63 = 0.0;
          fVar60 = fVar61;
        }
        local_120 = (char *)CONCAT44(fVar60,fVar65);
        local_118 = CONCAT44(fVar63,fVar62);
      }
      local_128 = puVar3;
      FUN_038e77e4(&local_128,lVar52,plVar54);
      local_120 = (char *)0x7f7fffff7f7fffff;
      local_118 = 0xff7fffffff7fffff;
      local_10c = 0x3f80000000000000;
      local_110 = *(uint *)PTR_DAT_04bd0ea8;
      if (local_110 < 6) {
        if ((1 << (ulong)(local_110 & 0x1f) & 0x39U) == 0) {
          fVar61 = *(float *)(plVar54 + 1);
          fVar60 = *(float *)((long)plVar54 + 0xc);
        }
        else {
          fVar60 = *(float *)(plVar54 + 1);
          fVar61 = *(float *)((long)plVar54 + 0xc);
        }
        fVar62 = fVar60;
        fVar65 = 0.0;
        if (fVar60 <= 0.0) {
          fVar62 = 0.0;
          fVar65 = fVar60;
        }
        fVar63 = fVar61;
        fVar60 = 0.0;
        if (fVar61 <= 0.0) {
          fVar63 = 0.0;
          fVar60 = fVar61;
        }
        local_120 = (char *)CONCAT44(fVar60,fVar65);
        local_118 = CONCAT44(fVar63,fVar62);
      }
      local_128 = puVar3;
      FUN_038e77e4(&local_128,*param_2,plVar54);
      uVar42 = *(uint *)(param_2 + 1);
      lVar52 = *param_2;
      lVar59 = *(long *)(param_1 + 0x1d8);
      if (*(uint *)(param_1 + 0x1d0) <= uVar42) {
        uVar42 = 0;
      }
      uVar45 = *(uint *)(lVar59 + (long)(int)uVar42 * 0x1340 + 0x4c0);
      if (uVar45 != 0xffffffff) {
        lVar55 = *(long *)PTR_DAT_04bc1010;
        if ((*(uint *)(lVar55 + 0x5c8) >> 3 & 1) == 0) {
          uVar43 = uVar45 - *(ushort *)(lVar55 + 0x3da);
          if (*(uint *)(lVar55 + 0x368) <= uVar43) {
            uVar43 = 0;
          }
          if ((*(uint *)(*(long *)(lVar55 + 0x370) + (long)(int)uVar43 * 0x20 + 4) >> 2 & 1) == 0) {
            *(ulong *)(lVar52 + 0x100) = *(ulong *)(lVar52 + 0x100) | 1L << ((ulong)uVar45 & 0x3f);
            goto LAB_03ac78fc;
          }
        }
        if ((*(uint *)(lVar55 + 0x5c8) >> 5 & 1) == 0) {
          uVar44 = 0x112;
          uVar64 = 0x12;
        }
        else {
          uVar44 = 0x111;
          uVar64 = 0x11;
        }
        if ((*(uint *)(lVar55 + 800) & 2) != 0) {
          uVar64 = uVar44;
        }
        (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(lVar52 + 0xb8),uVar64);
        *(undefined8 *)(lVar52 + 0x100) = 0;
      }
LAB_03ac78fc:
      uVar45 = iVar31 * 4;
      lVar55 = *(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x60) + 8);
      if (iVar31 < 0) {
        lVar55 = *(long *)(lVar55 + 0x18);
      }
      else {
        uVar43 = uVar45 | 2;
        if (*(uint *)(lVar55 + 0x20) <= uVar43) {
          uVar43 = 0;
        }
        lVar55 = *(long *)(lVar55 + 0x28) + (ulong)uVar43 * 0x150;
      }
      FUN_03907810(lVar55,lVar52);
      FUN_03949e90(lVar52,lVar55,lVar59 + (long)(int)uVar42 * 0x1340 + 0x318,&local_128,
                   PTR_DAT_04bbdc38,PTR_DAT_04bb2f48);
      uVar42 = *(uint *)(param_2 + 1);
      lVar52 = *param_2;
      lVar59 = *(long *)(param_1 + 0x1d8);
      if (*(uint *)(param_1 + 0x1d0) <= uVar42) {
        uVar42 = 0;
      }
      if (*(int *)(param_1 + 0x4a8) != 0) {
        uVar43 = *(uint *)(lVar59 + (long)(int)uVar42 * 0x1340 + 0x4c0);
        if (uVar43 != 0xffffffff) {
          lVar55 = *(long *)PTR_DAT_04bc1010;
          if ((*(uint *)(lVar55 + 0x5c8) >> 3 & 1) == 0) {
            uVar9 = uVar43 - *(ushort *)(lVar55 + 0x3da);
            if (*(uint *)(lVar55 + 0x368) <= uVar9) {
              uVar9 = 0;
            }
            if ((*(uint *)(*(long *)(lVar55 + 0x370) + (long)(int)uVar9 * 0x20 + 4) >> 2 & 1) == 0)
            {
              *(ulong *)(lVar52 + 0x100) = *(ulong *)(lVar52 + 0x100) | 1L << ((ulong)uVar43 & 0x3f)
              ;
              goto LAB_03ac7a48;
            }
          }
          if ((*(uint *)(lVar55 + 0x5c8) >> 5 & 1) == 0) {
            uVar44 = 0x112;
            uVar64 = 0x12;
          }
          else {
            uVar44 = 0x111;
            uVar64 = 0x11;
          }
          if ((*(uint *)(lVar55 + 800) & 2) != 0) {
            uVar64 = uVar44;
          }
          (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(lVar52 + 0xb8),uVar64);
          *(undefined8 *)(lVar52 + 0x100) = 0;
        }
      }
LAB_03ac7a48:
      lVar59 = lVar59 + (long)(int)uVar42 * 0x1340;
      lVar55 = lVar59 + 0x400;
      (**(code **)(*(long *)(lVar59 + 0x400) + 0x38))(lVar55,lVar52);
      local_118 = 0xff7fffffff7fffff;
      puVar3 = PTR_DAT_04bd0f08 + 0x10;
      local_120 = (char *)0x7f7fffff7f7fffff;
      local_10c = 0x3f80000000000000;
      local_110 = *(uint *)PTR_DAT_04bd0ea8;
      if (local_110 < 6) {
        if ((1 << (ulong)(local_110 & 0x1f) & 0x39U) == 0) {
          fVar61 = *(float *)(lVar59 + 0x408);
          fVar60 = *(float *)(lVar59 + 0x40c);
        }
        else {
          fVar60 = *(float *)(lVar59 + 0x408);
          fVar61 = *(float *)(lVar59 + 0x40c);
        }
        fVar62 = fVar60;
        fVar65 = 0.0;
        if (fVar60 <= 0.0) {
          fVar62 = 0.0;
          fVar65 = fVar60;
        }
        fVar63 = fVar61;
        fVar60 = 0.0;
        if (fVar61 <= 0.0) {
          fVar63 = 0.0;
          fVar60 = fVar61;
        }
        local_120 = (char *)CONCAT44(fVar60,fVar65);
        local_118 = CONCAT44(fVar63,fVar62);
      }
      local_128 = puVar3;
      FUN_038e77e4(&local_128,lVar52,lVar55);
      local_120 = (char *)0x7f7fffff7f7fffff;
      local_118 = 0xff7fffffff7fffff;
      local_10c = 0x3f80000000000000;
      local_110 = *(uint *)PTR_DAT_04bd0ea8;
      if (local_110 < 6) {
        if ((1 << (ulong)(local_110 & 0x1f) & 0x39U) == 0) {
          fVar61 = *(float *)(lVar59 + 0x408);
          fVar60 = *(float *)(lVar59 + 0x40c);
        }
        else {
          fVar60 = *(float *)(lVar59 + 0x408);
          fVar61 = *(float *)(lVar59 + 0x40c);
        }
        fVar62 = fVar60;
        fVar65 = 0.0;
        if (fVar60 <= 0.0) {
          fVar62 = 0.0;
          fVar65 = fVar60;
        }
        fVar63 = fVar61;
        fVar60 = 0.0;
        if (fVar61 <= 0.0) {
          fVar63 = 0.0;
          fVar60 = fVar61;
        }
        local_120 = (char *)CONCAT44(fVar60,fVar65);
        local_118 = CONCAT44(fVar63,fVar62);
      }
      local_128 = puVar3;
      FUN_038e77e4(&local_128,*param_2,lVar55);
      uVar42 = *(uint *)(param_2 + 1);
      lVar52 = *param_2;
      lVar59 = *(long *)(param_1 + 0x1d8);
      if (*(uint *)(param_1 + 0x1d0) <= uVar42) {
        uVar42 = 0;
      }
      if (*(int *)(param_1 + 0x4a8) == 0) {
        lVar59 = lVar59 + (long)(int)uVar42 * 0x1340 + 0x318;
      }
      else {
        uVar43 = *(uint *)(lVar59 + (long)(int)uVar42 * 0x1340 + 0x6f0);
        if (uVar43 != 0xffffffff) {
          lVar55 = *(long *)PTR_DAT_04bc1010;
          if ((*(uint *)(lVar55 + 0x5c8) >> 3 & 1) == 0) {
            uVar9 = uVar43 - *(ushort *)(lVar55 + 0x3da);
            if (*(uint *)(lVar55 + 0x368) <= uVar9) {
              uVar9 = 0;
            }
            if ((*(uint *)(*(long *)(lVar55 + 0x370) + (long)(int)uVar9 * 0x20 + 4) >> 2 & 1) == 0)
            {
              *(ulong *)(lVar52 + 0x100) = *(ulong *)(lVar52 + 0x100) | 1L << ((ulong)uVar43 & 0x3f)
              ;
              goto LAB_03ac7c58;
            }
          }
          if ((*(uint *)(lVar55 + 0x5c8) >> 5 & 1) == 0) {
            uVar44 = 0x112;
            uVar64 = 0x12;
          }
          else {
            uVar44 = 0x111;
            uVar64 = 0x11;
          }
          if ((*(uint *)(lVar55 + 800) & 2) != 0) {
            uVar64 = uVar44;
          }
          (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(lVar52 + 0xb8),uVar64);
          *(undefined8 *)(lVar52 + 0x100) = 0;
        }
LAB_03ac7c58:
        lVar59 = lVar59 + (long)(int)uVar42 * 0x1340 + 0x548;
      }
      lVar55 = *(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x60) + 8);
      if (iVar31 < 0) {
        lVar55 = *(long *)(lVar55 + 0x18);
      }
      else {
        uVar42 = uVar45;
        if (*(uint *)(lVar55 + 0x20) <= uVar45) {
          uVar42 = 0;
        }
        lVar55 = *(long *)(lVar55 + 0x28) + (ulong)uVar42 * 0x150;
      }
      FUN_03907810(lVar55,lVar52);
      FUN_03949e90(lVar52,lVar55,lVar59,&local_128,PTR_DAT_04bbdc38,PTR_DAT_04bb2f48);
      if (1 < *(int *)(param_1 + 0x4e8)) {
        iVar32 = 1;
        puVar3 = PTR_DAT_04bd0f08 + 0x10;
        do {
          lVar52 = *(long *)(param_1 + 0x1d8);
          lVar59 = *param_2;
          uVar42 = *(uint *)(param_2 + 1);
          if (*(uint *)(param_1 + 0x1d0) <= uVar42) {
            uVar42 = 0;
          }
          if (*(int *)(param_1 + 0x4a8) == 0) {
            plVar54 = (long *)(lVar52 + (long)(int)uVar42 * 0x1340 + 0x400);
          }
          else {
            uVar43 = *(uint *)(lVar52 + (long)(int)uVar42 * 0x1340 + 0x6f0);
            if (uVar43 != 0xffffffff) {
              lVar55 = *(long *)PTR_DAT_04bc1010;
              if ((*(uint *)(lVar55 + 0x5c8) >> 3 & 1) == 0) {
                uVar9 = uVar43 - *(ushort *)(lVar55 + 0x3da);
                if (*(uint *)(lVar55 + 0x368) <= uVar9) {
                  uVar9 = 0;
                }
                if ((*(uint *)(*(long *)(lVar55 + 0x370) + (long)(int)uVar9 * 0x20 + 4) >> 2 & 1) ==
                    0) {
                  *(ulong *)(lVar59 + 0x100) =
                       *(ulong *)(lVar59 + 0x100) | 1L << ((ulong)uVar43 & 0x3f);
                  goto LAB_03ac7e4c;
                }
              }
              if ((*(uint *)(lVar55 + 0x5c8) >> 5 & 1) == 0) {
                uVar44 = 0x112;
                uVar64 = 0x12;
              }
              else {
                uVar44 = 0x111;
                uVar64 = 0x11;
              }
              if ((*(uint *)(lVar55 + 800) & 2) != 0) {
                uVar64 = uVar44;
              }
              (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(lVar59 + 0xb8),uVar64);
              *(undefined8 *)(lVar59 + 0x100) = 0;
            }
LAB_03ac7e4c:
            plVar54 = (long *)(lVar52 + (long)(int)uVar42 * 0x1340 + 0x630);
          }
          (**(code **)(*plVar54 + 0x38))(plVar54,lVar59);
          local_120 = (char *)0x7f7fffff7f7fffff;
          local_118 = 0xff7fffffff7fffff;
          local_10c = 0x3f80000000000000;
          local_110 = *(uint *)PTR_DAT_04bd0ea8;
          if (local_110 < 6) {
            if ((1 << (ulong)(local_110 & 0x1f) & 0x39U) == 0) {
              fVar61 = *(float *)(plVar54 + 1);
              fVar60 = *(float *)((long)plVar54 + 0xc);
            }
            else {
              fVar60 = *(float *)(plVar54 + 1);
              fVar61 = *(float *)((long)plVar54 + 0xc);
            }
            fVar65 = fVar60;
            if (fVar60 <= 0.0) {
              fVar65 = 0.0;
            }
            fVar62 = 0.0;
            if (fVar60 <= 0.0) {
              fVar62 = fVar60;
            }
            fVar63 = fVar61;
            fVar60 = 0.0;
            if (fVar61 <= 0.0) {
              fVar63 = 0.0;
              fVar60 = fVar61;
            }
            local_120 = (char *)CONCAT44(fVar60,fVar62);
            local_118 = CONCAT44(fVar63,fVar65);
          }
          local_128 = puVar3;
          FUN_038e77e4(&local_128,lVar59,plVar54);
          local_118 = 0xff7fffffff7fffff;
          local_128 = PTR_DAT_04bd0f08 + 0x10;
          local_120 = (char *)0x7f7fffff7f7fffff;
          local_10c = 0x3f80000000000000;
          local_110 = *(uint *)PTR_DAT_04bd0ea8;
          if (local_110 < 6) {
            if ((1 << (ulong)(local_110 & 0x1f) & 0x39U) == 0) {
              fVar61 = *(float *)(plVar54 + 1);
              fVar60 = *(float *)((long)plVar54 + 0xc);
            }
            else {
              fVar60 = *(float *)(plVar54 + 1);
              fVar61 = *(float *)((long)plVar54 + 0xc);
            }
            fVar65 = fVar60;
            if (fVar60 <= 0.0) {
              fVar65 = 0.0;
            }
            fVar62 = 0.0;
            if (fVar60 <= 0.0) {
              fVar62 = fVar60;
            }
            fVar63 = fVar61;
            fVar60 = 0.0;
            if (fVar61 <= 0.0) {
              fVar63 = 0.0;
              fVar60 = fVar61;
            }
            local_120 = (char *)CONCAT44(fVar60,fVar62);
            local_118 = CONCAT44(fVar63,fVar65);
          }
          FUN_038e77e4(&local_128,*param_2,plVar54);
          uVar42 = *(uint *)(param_2 + 1);
          lVar59 = *param_2;
          lVar52 = *(long *)(param_1 + 0x1d8);
          if (*(uint *)(param_1 + 0x1d0) <= uVar42) {
            uVar42 = 0;
          }
          if (*(int *)(param_1 + 0x4a8) != 0) {
            uVar43 = *(uint *)(lVar52 + (long)(int)uVar42 * 0x1340 + 0x4c0);
            if (uVar43 != 0xffffffff) {
              lVar55 = *(long *)PTR_DAT_04bc1010;
              if ((*(uint *)(lVar55 + 0x5c8) >> 3 & 1) == 0) {
                uVar9 = uVar43 - *(ushort *)(lVar55 + 0x3da);
                if (*(uint *)(lVar55 + 0x368) <= uVar9) {
                  uVar9 = 0;
                }
                if ((*(uint *)(*(long *)(lVar55 + 0x370) + (long)(int)uVar9 * 0x20 + 4) >> 2 & 1) ==
                    0) {
                  *(ulong *)(lVar59 + 0x100) =
                       *(ulong *)(lVar59 + 0x100) | 1L << ((ulong)uVar43 & 0x3f);
                  goto LAB_03ac8030;
                }
              }
              if ((*(uint *)(lVar55 + 0x5c8) >> 5 & 1) == 0) {
                uVar44 = 0x112;
                uVar64 = 0x12;
              }
              else {
                uVar44 = 0x111;
                uVar64 = 0x11;
              }
              if ((*(uint *)(lVar55 + 800) & 2) != 0) {
                uVar64 = uVar44;
              }
              (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(lVar59 + 0xb8),uVar64);
              *(undefined8 *)(lVar59 + 0x100) = 0;
            }
          }
LAB_03ac8030:
          lVar55 = *(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x60) + 8);
          if (iVar31 < 0) {
            lVar55 = *(long *)(lVar55 + 0x18);
          }
          else {
            uVar43 = uVar45 | 2;
            if (*(uint *)(lVar55 + 0x20) <= (uVar45 | 2)) {
              uVar43 = 0;
            }
            lVar55 = *(long *)(lVar55 + 0x28) + (ulong)uVar43 * 0x150;
          }
          FUN_03907810(lVar55,lVar59);
          FUN_03949e90(lVar59,lVar55,lVar52 + (long)(int)uVar42 * 0x1340 + 0x318,&local_128,
                       PTR_DAT_04bbdc38,PTR_DAT_04bb2f48);
          lVar52 = *param_2;
          uVar42 = *(uint *)(param_2 + 1);
          lVar59 = *(long *)(param_1 + 0x1d8);
          if (*(uint *)(param_1 + 0x1d0) <= uVar42) {
            uVar42 = 0;
          }
          if (*(int *)(param_1 + 0x4a8) != 0) {
            uVar43 = *(uint *)(lVar59 + (long)(int)uVar42 * 0x1340 + 0x4c0);
            if (uVar43 != 0xffffffff) {
              lVar55 = *(long *)PTR_DAT_04bc1010;
              if ((*(uint *)(lVar55 + 0x5c8) >> 3 & 1) == 0) {
                uVar9 = uVar43 - *(ushort *)(lVar55 + 0x3da);
                if (*(uint *)(lVar55 + 0x368) <= uVar9) {
                  uVar9 = 0;
                }
                if ((*(uint *)(*(long *)(lVar55 + 0x370) + (long)(int)uVar9 * 0x20 + 4) >> 2 & 1) ==
                    0) {
                  *(ulong *)(lVar52 + 0x100) =
                       *(ulong *)(lVar52 + 0x100) | 1L << ((ulong)uVar43 & 0x3f);
                  goto LAB_03ac8170;
                }
              }
              if ((*(uint *)(lVar55 + 0x5c8) >> 5 & 1) == 0) {
                uVar44 = 0x112;
                uVar64 = 0x12;
              }
              else {
                uVar44 = 0x111;
                uVar64 = 0x11;
              }
              if ((*(uint *)(lVar55 + 800) & 2) != 0) {
                uVar64 = uVar44;
              }
              (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(lVar52 + 0xb8),uVar64);
              *(undefined8 *)(lVar52 + 0x100) = 0;
            }
          }
LAB_03ac8170:
          lVar59 = lVar59 + (long)(int)uVar42 * 0x1340;
          lVar55 = lVar59 + 0x400;
          (**(code **)(*(long *)(lVar59 + 0x400) + 0x38))(lVar55,lVar52);
          local_118 = 0xff7fffffff7fffff;
          puVar4 = PTR_DAT_04bd0f08 + 0x10;
          local_120 = (char *)0x7f7fffff7f7fffff;
          local_10c = 0x3f80000000000000;
          local_110 = *(uint *)PTR_DAT_04bd0ea8;
          if (local_110 < 6) {
            if ((1 << (ulong)(local_110 & 0x1f) & 0x39U) == 0) {
              fVar61 = *(float *)(lVar59 + 0x408);
              fVar60 = *(float *)(lVar59 + 0x40c);
            }
            else {
              fVar60 = *(float *)(lVar59 + 0x408);
              fVar61 = *(float *)(lVar59 + 0x40c);
            }
            fVar65 = fVar60;
            if (fVar60 <= 0.0) {
              fVar65 = 0.0;
            }
            fVar62 = 0.0;
            if (fVar60 <= 0.0) {
              fVar62 = fVar60;
            }
            fVar63 = fVar61;
            fVar60 = 0.0;
            if (fVar61 <= 0.0) {
              fVar63 = 0.0;
              fVar60 = fVar61;
            }
            local_120 = (char *)CONCAT44(fVar60,fVar62);
            local_118 = CONCAT44(fVar63,fVar65);
          }
          local_128 = puVar4;
          FUN_038e77e4(&local_128,lVar52,lVar55);
          local_120 = (char *)0x7f7fffff7f7fffff;
          local_118 = 0xff7fffffff7fffff;
          local_10c = 0x3f80000000000000;
          local_110 = *(uint *)PTR_DAT_04bd0ea8;
          if (local_110 < 6) {
            if ((1 << (ulong)(local_110 & 0x1f) & 0x39U) == 0) {
              fVar61 = *(float *)(lVar59 + 0x408);
              fVar60 = *(float *)(lVar59 + 0x40c);
            }
            else {
              fVar60 = *(float *)(lVar59 + 0x408);
              fVar61 = *(float *)(lVar59 + 0x40c);
            }
            fVar65 = fVar60;
            if (fVar60 <= 0.0) {
              fVar65 = 0.0;
            }
            fVar62 = 0.0;
            if (fVar60 <= 0.0) {
              fVar62 = fVar60;
            }
            fVar63 = fVar61;
            fVar60 = 0.0;
            if (fVar61 <= 0.0) {
              fVar63 = 0.0;
              fVar60 = fVar61;
            }
            local_120 = (char *)CONCAT44(fVar60,fVar62);
            local_118 = CONCAT44(fVar63,fVar65);
          }
          local_128 = puVar4;
          FUN_038e77e4(&local_128,*param_2,lVar55);
          uVar42 = *(uint *)(param_2 + 1);
          lVar59 = *param_2;
          lVar52 = *(long *)(param_1 + 0x1d8);
          if (*(uint *)(param_1 + 0x1d0) <= uVar42) {
            uVar42 = 0;
          }
          if (*(int *)(param_1 + 0x4a8) == 0) {
            lVar52 = lVar52 + (long)(int)uVar42 * 0x1340 + 0x318;
          }
          else {
            uVar43 = *(uint *)(lVar52 + (long)(int)uVar42 * 0x1340 + 0x6f0);
            if (uVar43 != 0xffffffff) {
              lVar55 = *(long *)PTR_DAT_04bc1010;
              if ((*(uint *)(lVar55 + 0x5c8) >> 3 & 1) == 0) {
                uVar9 = uVar43 - *(ushort *)(lVar55 + 0x3da);
                if (*(uint *)(lVar55 + 0x368) <= uVar9) {
                  uVar9 = 0;
                }
                if ((*(uint *)(*(long *)(lVar55 + 0x370) + (long)(int)uVar9 * 0x20 + 4) >> 2 & 1) ==
                    0) {
                  *(ulong *)(lVar59 + 0x100) =
                       *(ulong *)(lVar59 + 0x100) | 1L << ((ulong)uVar43 & 0x3f);
                  goto LAB_03ac836c;
                }
              }
              if ((*(uint *)(lVar55 + 0x5c8) >> 5 & 1) == 0) {
                uVar44 = 0x112;
                uVar64 = 0x12;
              }
              else {
                uVar44 = 0x111;
                uVar64 = 0x11;
              }
              if ((*(uint *)(lVar55 + 800) & 2) != 0) {
                uVar64 = uVar44;
              }
              (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(lVar59 + 0xb8),uVar64);
              *(undefined8 *)(lVar59 + 0x100) = 0;
            }
LAB_03ac836c:
            lVar52 = lVar52 + (long)(int)uVar42 * 0x1340 + 0x548;
          }
          lVar55 = *(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x60) + 8);
          if (iVar31 < 0) {
            lVar55 = *(long *)(lVar55 + 0x18);
          }
          else {
            uVar42 = uVar45;
            if (*(uint *)(lVar55 + 0x20) <= uVar45) {
              uVar42 = 0;
            }
            lVar55 = *(long *)(lVar55 + 0x28) + (ulong)uVar42 * 0x150;
          }
          FUN_03907810(lVar55,lVar59);
          FUN_03949e90(lVar59,lVar55,lVar52,&local_128,PTR_DAT_04bbdc38,PTR_DAT_04bb2f48);
          iVar32 = iVar32 + 1;
        } while (iVar32 < *(int *)(param_1 + 0x4e8));
      }
    }
  }
  puVar56 = (undefined8 *)PTR_DAT_04bbd510;
  lVar59 = lVar58 + (long)(int)uVar16 * 0x1340;
  uVar42 = *(uint *)(lVar59 + 0x4c0);
  if (uVar42 != 0xffffffff) {
    lVar55 = *param_2;
    lVar52 = *(long *)PTR_DAT_04bc1010;
    if ((*(uint *)(lVar52 + 0x5c8) >> 3 & 1) == 0) {
      uVar45 = uVar42 - *(ushort *)(lVar52 + 0x3da);
      if (*(uint *)(lVar52 + 0x368) <= uVar45) {
        uVar45 = 0;
      }
      if ((*(uint *)(*(long *)(lVar52 + 0x370) + (long)(int)uVar45 * 0x20 + 4) >> 2 & 1) == 0) {
        *(ulong *)(lVar55 + 0x100) = *(ulong *)(lVar55 + 0x100) | 1L << ((ulong)uVar42 & 0x3f);
        goto LAB_03ac8458;
      }
    }
    if ((*(uint *)(lVar52 + 0x5c8) >> 5 & 1) == 0) {
      uVar44 = 0x112;
      uVar64 = 0x12;
    }
    else {
      uVar44 = 0x111;
      uVar64 = 0x11;
    }
    if ((*(uint *)(lVar52 + 800) & 2) != 0) {
      uVar64 = uVar44;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(lVar55 + 0xb8),uVar64);
    *(undefined8 *)(lVar55 + 0x100) = 0;
  }
LAB_03ac8458:
  if (*(char *)(param_1 + 0x708) == '\0') goto LAB_03ac922c;
  lVar55 = *param_2;
  lVar52 = lVar58 + (long)(int)uVar16 * 0x1340;
  uVar42 = *(uint *)(lVar52 + 0xd78);
  if (uVar42 != 0xffffffff) {
    lVar51 = *(long *)PTR_DAT_04bc1010;
    if ((*(uint *)(lVar51 + 0x5c8) >> 3 & 1) == 0) {
      uVar45 = uVar42 - *(ushort *)(lVar51 + 0x3da);
      if (*(uint *)(lVar51 + 0x368) <= uVar45) {
        uVar45 = 0;
      }
      if ((*(uint *)(*(long *)(lVar51 + 0x370) + (long)(int)uVar45 * 0x20 + 4) >> 2 & 1) == 0) {
        *(ulong *)(lVar55 + 0x100) = *(ulong *)(lVar55 + 0x100) | 1L << ((ulong)uVar42 & 0x3f);
        goto LAB_03ac850c;
      }
    }
    if ((*(uint *)(lVar51 + 0x5c8) >> 5 & 1) == 0) {
      uVar44 = 0x112;
      uVar64 = 0x12;
    }
    else {
      uVar44 = 0x111;
      uVar64 = 0x11;
    }
    if ((*(uint *)(lVar51 + 800) & 2) != 0) {
      uVar64 = uVar44;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(lVar55 + 0xb8),uVar64);
    *(undefined8 *)(lVar55 + 0x100) = 0;
  }
LAB_03ac850c:
  lVar51 = lVar58 + (long)(int)uVar16 * 0x1340;
  uVar42 = *(uint *)(lVar51 + 0xb50);
  if (uVar42 != 0xffffffff) {
    lVar35 = *(long *)PTR_DAT_04bc1010;
    if ((*(uint *)(lVar35 + 0x5c8) >> 3 & 1) == 0) {
      uVar45 = uVar42 - *(ushort *)(lVar35 + 0x3da);
      if (*(uint *)(lVar35 + 0x368) <= uVar45) {
        uVar45 = 0;
      }
      if ((*(uint *)(*(long *)(lVar35 + 0x370) + (long)(int)uVar45 * 0x20 + 4) >> 2 & 1) == 0) {
        *(ulong *)(lVar55 + 0x100) = *(ulong *)(lVar55 + 0x100) | 1L << ((ulong)uVar42 & 0x3f);
        goto LAB_03ac85b4;
      }
    }
    if ((*(uint *)(lVar35 + 0x5c8) >> 5 & 1) == 0) {
      uVar44 = 0x112;
      uVar64 = 0x12;
    }
    else {
      uVar44 = 0x111;
      uVar64 = 0x11;
    }
    if ((*(uint *)(lVar35 + 800) & 2) != 0) {
      uVar64 = uVar44;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(lVar55 + 0xb8),uVar64);
    *(undefined8 *)(lVar55 + 0x100) = 0;
  }
LAB_03ac85b4:
  lVar35 = lVar58 + (long)(int)uVar16 * 0x1340;
  uVar42 = *(uint *)(lVar35 + 0xc30);
  if (uVar42 != 0xffffffff) {
    lVar49 = *(long *)PTR_DAT_04bc1010;
    if ((*(uint *)(lVar49 + 0x5c8) >> 3 & 1) == 0) {
      uVar45 = uVar42 - *(ushort *)(lVar49 + 0x3da);
      if (*(uint *)(lVar49 + 0x368) <= uVar45) {
        uVar45 = 0;
      }
      if ((*(uint *)(*(long *)(lVar49 + 0x370) + (long)(int)uVar45 * 0x20 + 4) >> 2 & 1) == 0) {
        *(ulong *)(lVar55 + 0x100) = *(ulong *)(lVar55 + 0x100) | 1L << ((ulong)uVar42 & 0x3f);
        goto LAB_03ac865c;
      }
    }
    if ((*(uint *)(lVar49 + 0x5c8) >> 5 & 1) == 0) {
      uVar44 = 0x112;
      uVar64 = 0x12;
    }
    else {
      uVar44 = 0x111;
      uVar64 = 0x11;
    }
    if ((*(uint *)(lVar49 + 800) & 2) != 0) {
      uVar64 = uVar44;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(lVar55 + 0xb8),uVar64);
    *(undefined8 *)(lVar55 + 0x100) = 0;
  }
LAB_03ac865c:
  lVar49 = lVar58 + (long)(int)uVar16 * 0x1340;
  plVar54 = (long *)(lVar49 + 0xa90);
  (**(code **)(*(long *)(lVar49 + 0xa90) + 0x38))(plVar54,lVar55);
  local_a0 = 0xff7fffffff7fffff;
  local_b0 = PTR_DAT_04bd0f08 + 0x10;
  local_a8 = 0x7f7fffff7f7fffff;
  local_94 = 0x3f80000000000000;
  local_98 = *(uint *)PTR_DAT_04bd0ea8;
  if (local_98 < 6) {
    if ((1 << (ulong)(local_98 & 0x1f) & 0x39U) == 0) {
      lVar49 = lVar58 + (long)(int)uVar16 * 0x1340;
      fVar60 = *(float *)(lVar49 + 0xa9c);
      fVar61 = *(float *)(lVar49 + 0xa98);
    }
    else {
      lVar49 = lVar58 + (long)(int)uVar16 * 0x1340;
      fVar60 = *(float *)(lVar49 + 0xa98);
      fVar61 = *(float *)(lVar49 + 0xa9c);
    }
    fVar62 = fVar60;
    fVar65 = 0.0;
    if (fVar60 <= 0.0) {
      fVar62 = 0.0;
      fVar65 = fVar60;
    }
    fVar63 = fVar61;
    fVar60 = 0.0;
    if (fVar61 <= 0.0) {
      fVar63 = 0.0;
      fVar60 = fVar61;
    }
    local_a8 = CONCAT44(fVar60,fVar65);
    local_a0 = CONCAT44(fVar63,fVar62);
  }
  puVar1 = (uint *)(lVar52 + 0xd78);
  puVar5 = (uint *)(lVar51 + 0xb50);
  puVar6 = (uint *)(lVar35 + 0xc30);
  FUN_038e77e4(&local_b0,lVar55,plVar54);
  FUN_038e4cec(&local_128);
  local_128 = (undefined *)((ulong)local_128 & 0xfffffffeffff0000);
  FUN_038e4d90(&local_128,lVar55);
  lVar52 = lVar58 + (long)(int)uVar16 * 0x1340;
  cVar17 = *(char *)(param_1 + 0x728);
  puVar7 = (uint *)(lVar52 + 0x3ec);
  *(undefined4 *)(lVar52 + 0x3d4) = 0;
  do {
    cVar18 = '\x01';
    bVar29 = (bool)ExclusiveMonitorPass(puVar7,0x10);
    if (bVar29) {
      *puVar7 = *puVar7 & 0xfffffff7 | 8;
      cVar18 = ExclusiveMonitorsStatus();
    }
  } while (cVar18 != '\0');
  local_130 = 0;
  uVar64 = 0x3f000000;
  if (cVar17 != '\0') {
    uVar64 = 0x3e800000;
  }
  local_78 = CONCAT44(uVar64,uVar64);
  uVar40 = *(undefined8 *)
            (*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x28) + 8) + 0x18);
  FUN_03907810(uVar40,lVar55);
  FUN_03949e90(lVar55,uVar40,lVar58 + (long)(int)uVar16 * 0x1340 + 0x318,&local_b0,&local_78,
               &local_130);
  *(undefined4 *)(lVar52 + 0x3d4) = 0x41600000;
  do {
    cVar17 = '\x01';
    bVar29 = (bool)ExclusiveMonitorPass(puVar7,0x10);
    if (bVar29) {
      *puVar7 = *puVar7 & 0xfffffff7 | 8;
      cVar17 = ExclusiveMonitorsStatus();
    }
  } while (cVar17 != '\0');
  uVar42 = *puVar5;
  if (uVar42 != 0xffffffff) {
    lVar52 = *(long *)PTR_DAT_04bc1010;
    if ((*(uint *)(lVar52 + 0x5c8) >> 3 & 1) == 0) {
      uVar45 = uVar42 - *(ushort *)(lVar52 + 0x3da);
      if (*(uint *)(lVar52 + 0x368) <= uVar45) {
        uVar45 = 0;
      }
      if ((*(uint *)(*(long *)(lVar52 + 0x370) + (long)(int)uVar45 * 0x20 + 4) >> 2 & 1) == 0) {
        *(ulong *)(lVar55 + 0x100) = *(ulong *)(lVar55 + 0x100) | 1L << ((ulong)uVar42 & 0x3f);
        goto LAB_03ac88d4;
      }
    }
    if ((*(uint *)(lVar52 + 0x5c8) >> 5 & 1) == 0) {
      uVar44 = 0x112;
      uVar64 = 0x12;
    }
    else {
      uVar44 = 0x111;
      uVar64 = 0x11;
    }
    if ((*(uint *)(lVar52 + 800) & 2) != 0) {
      uVar64 = uVar44;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(lVar55 + 0xb8),uVar64);
    *(undefined8 *)(lVar55 + 0x100) = 0;
  }
LAB_03ac88d4:
  uVar42 = *puVar6;
  if (uVar42 != 0xffffffff) {
    lVar52 = *(long *)PTR_DAT_04bc1010;
    if ((*(uint *)(lVar52 + 0x5c8) >> 3 & 1) == 0) {
      uVar45 = uVar42 - *(ushort *)(lVar52 + 0x3da);
      if (*(uint *)(lVar52 + 0x368) <= uVar45) {
        uVar45 = 0;
      }
      if ((*(uint *)(*(long *)(lVar52 + 0x370) + (long)(int)uVar45 * 0x20 + 4) >> 2 & 1) == 0) {
        *(ulong *)(lVar55 + 0x100) = *(ulong *)(lVar55 + 0x100) | 1L << ((ulong)uVar42 & 0x3f);
        goto LAB_03ac8970;
      }
    }
    if ((*(uint *)(lVar52 + 0x5c8) >> 5 & 1) == 0) {
      uVar44 = 0x112;
      uVar64 = 0x12;
    }
    else {
      uVar44 = 0x111;
      uVar64 = 0x11;
    }
    if ((*(uint *)(lVar52 + 800) & 2) != 0) {
      uVar64 = uVar44;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(lVar55 + 0xb8),uVar64);
    *(undefined8 *)(lVar55 + 0x100) = 0;
  }
LAB_03ac8970:
  if (0 < *(int *)(param_1 + 0x768)) {
    iVar31 = 0;
    plVar8 = (long *)(lVar58 + (long)(int)uVar16 * 0x1340 + 0xa28);
    lVar52 = lVar58 + (long)(int)uVar16 * 0x1340;
    iVar32 = *(int *)(param_1 + 0x748);
    uVar42 = iVar32 << 2 | 2;
    puVar3 = PTR_DAT_04bd0f08 + 0x10;
    do {
      (**(code **)(*plVar8 + 0x38))(plVar8,lVar55);
      local_120 = (char *)0x7f7fffff7f7fffff;
      local_118 = 0xff7fffffff7fffff;
      local_10c = 0x3f80000000000000;
      local_110 = *(uint *)PTR_DAT_04bd0ea8;
      if (local_110 < 6) {
        if ((1 << (ulong)(local_110 & 0x1f) & 0x39U) == 0) {
          fVar60 = *(float *)(lVar52 + 0xa34);
          pfVar41 = (float *)(lVar52 + 0xa30);
        }
        else {
          fVar60 = *(float *)(lVar52 + 0xa30);
          pfVar41 = (float *)(lVar52 + 0xa34);
        }
        fVar65 = *pfVar41;
        fVar61 = fVar60;
        if (fVar60 <= 0.0) {
          fVar61 = 0.0;
        }
        fVar62 = 0.0;
        if (fVar60 <= 0.0) {
          fVar62 = fVar60;
        }
        fVar63 = fVar65;
        fVar60 = 0.0;
        if (fVar65 <= 0.0) {
          fVar63 = 0.0;
          fVar60 = fVar65;
        }
        local_120 = (char *)CONCAT44(fVar60,fVar62);
        local_118 = CONCAT44(fVar63,fVar61);
      }
      local_128 = puVar3;
      FUN_038e77e4(&local_128,lVar55,plVar8);
      lVar51 = *(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x60) + 8);
      if (iVar32 < 0) {
        lVar51 = *(long *)(lVar51 + 0x18);
      }
      else {
        uVar45 = uVar42;
        if (*(uint *)(lVar51 + 0x20) <= uVar42) {
          uVar45 = 0;
        }
        lVar51 = *(long *)(lVar51 + 0x28) + (ulong)uVar45 * 0x150;
      }
      FUN_03907810(lVar51,lVar55);
      FUN_03949e90(lVar55,lVar51,lVar52 + 0x938,&local_128,PTR_DAT_04bbdc38,PTR_DAT_04bb2f48);
      uVar45 = *puVar5;
      lVar51 = *(long *)PTR_DAT_04bc1010;
      if (uVar45 != 0xffffffff) {
        if ((*(uint *)(lVar51 + 0x5c8) >> 3 & 1) == 0) {
          uVar43 = uVar45 - *(ushort *)(lVar51 + 0x3da);
          if (*(uint *)(lVar51 + 0x368) <= uVar43) {
            uVar43 = 0;
          }
          if ((*(uint *)(*(long *)(lVar51 + 0x370) + (long)(int)uVar43 * 0x20 + 4) >> 2 & 1) != 0)
          goto LAB_03ac8ba0;
          uVar34 = *(ulong *)(lVar55 + 0x100) | 1L << ((ulong)uVar45 & 0x3f);
        }
        else {
LAB_03ac8ba0:
          if ((*(uint *)(lVar51 + 0x5c8) >> 5 & 1) == 0) {
            uVar44 = 0x112;
            uVar64 = 0x12;
          }
          else {
            uVar44 = 0x111;
            uVar64 = 0x11;
          }
          if ((*(uint *)(lVar51 + 800) & 2) != 0) {
            uVar64 = uVar44;
          }
          (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(lVar55 + 0xb8),uVar64);
          uVar34 = 0;
        }
        *(ulong *)(lVar55 + 0x100) = uVar34;
        lVar51 = *(long *)PTR_DAT_04bc1010;
      }
      uVar45 = *puVar6;
      if (uVar45 != 0xffffffff) {
        if ((*(uint *)(lVar51 + 0x5c8) >> 3 & 1) == 0) {
          uVar43 = uVar45 - *(ushort *)(lVar51 + 0x3da);
          if (*(uint *)(lVar51 + 0x368) <= uVar43) {
            uVar43 = 0;
          }
          if ((*(uint *)(*(long *)(lVar51 + 0x370) + (long)(int)uVar43 * 0x20 + 4) >> 2 & 1) != 0)
          goto LAB_03ac8c40;
          uVar34 = *(ulong *)(lVar55 + 0x100) | 1L << ((ulong)uVar45 & 0x3f);
        }
        else {
LAB_03ac8c40:
          if ((*(uint *)(lVar51 + 0x5c8) >> 5 & 1) == 0) {
            uVar44 = 0x112;
            uVar64 = 0x12;
          }
          else {
            uVar44 = 0x111;
            uVar64 = 0x11;
          }
          if ((*(uint *)(lVar51 + 800) & 2) != 0) {
            uVar64 = uVar44;
          }
          (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(lVar55 + 0xb8),uVar64);
          uVar34 = 0;
        }
        *(ulong *)(lVar55 + 0x100) = uVar34;
      }
      plVar14 = (long *)(lVar52 + 0xcb8);
      if (*(char *)(param_1 + 0x728) != '\0' || iVar31 != *(int *)(param_1 + 0x768) + -1) {
        plVar14 = plVar54;
      }
      (**(code **)(*plVar14 + 0x38))(plVar14,lVar55);
      local_118 = 0xff7fffffff7fffff;
      local_128 = PTR_DAT_04bd0f08 + 0x10;
      local_120 = (char *)0x7f7fffff7f7fffff;
      local_10c = 0x3f80000000000000;
      local_110 = *(uint *)PTR_DAT_04bd0ea8;
      if (local_110 < 6) {
        if ((1 << (ulong)(local_110 & 0x1f) & 0x39U) == 0) {
          fVar61 = *(float *)(plVar14 + 1);
          fVar60 = *(float *)((long)plVar14 + 0xc);
        }
        else {
          fVar60 = *(float *)(plVar14 + 1);
          fVar61 = *(float *)((long)plVar14 + 0xc);
        }
        fVar65 = fVar60;
        if (fVar60 <= 0.0) {
          fVar65 = 0.0;
        }
        fVar62 = 0.0;
        if (fVar60 <= 0.0) {
          fVar62 = fVar60;
        }
        fVar63 = fVar61;
        fVar60 = 0.0;
        if (fVar61 <= 0.0) {
          fVar63 = 0.0;
          fVar60 = fVar61;
        }
        local_120 = (char *)CONCAT44(fVar60,fVar62);
        local_118 = CONCAT44(fVar63,fVar65);
      }
      FUN_038e77e4(&local_128,lVar55,plVar14);
      lVar51 = *(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x60) + 8);
      if (iVar32 < 0) {
        lVar51 = *(long *)(lVar51 + 0x18);
      }
      else {
        uVar45 = iVar32 * 4;
        if (*(uint *)(lVar51 + 0x20) <= (uint)(iVar32 * 4)) {
          uVar45 = 0;
        }
        lVar51 = *(long *)(lVar51 + 0x28) + (ulong)uVar45 * 0x150;
      }
      FUN_03907810(lVar51,lVar55);
      FUN_03949e90(lVar55,lVar51,lVar52 + 0x858,&local_128,PTR_DAT_04bbdc38,PTR_DAT_04bb2f48);
      uVar45 = *puVar5;
      lVar51 = *(long *)PTR_DAT_04bc1010;
      if (uVar45 != 0xffffffff) {
        if ((*(uint *)(lVar51 + 0x5c8) >> 3 & 1) == 0) {
          uVar43 = uVar45 - *(ushort *)(lVar51 + 0x3da);
          if (*(uint *)(lVar51 + 0x368) <= uVar43) {
            uVar43 = 0;
          }
          if ((*(uint *)(*(long *)(lVar51 + 0x370) + (long)(int)uVar43 * 0x20 + 4) >> 2 & 1) != 0)
          goto LAB_03ac8e20;
          uVar34 = *(ulong *)(lVar55 + 0x100) | 1L << ((ulong)uVar45 & 0x3f);
        }
        else {
LAB_03ac8e20:
          if ((*(uint *)(lVar51 + 0x5c8) >> 5 & 1) == 0) {
            uVar44 = 0x112;
            uVar64 = 0x12;
          }
          else {
            uVar44 = 0x111;
            uVar64 = 0x11;
          }
          if ((*(uint *)(lVar51 + 800) & 2) != 0) {
            uVar64 = uVar44;
          }
          (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(lVar55 + 0xb8),uVar64);
          uVar34 = 0;
        }
        *(ulong *)(lVar55 + 0x100) = uVar34;
        lVar51 = *(long *)PTR_DAT_04bc1010;
      }
      uVar45 = *puVar6;
      if (uVar45 != 0xffffffff) {
        if ((*(uint *)(lVar51 + 0x5c8) >> 3 & 1) == 0) {
          uVar43 = uVar45 - *(ushort *)(lVar51 + 0x3da);
          if (*(uint *)(lVar51 + 0x368) <= uVar43) {
            uVar43 = 0;
          }
          if ((*(uint *)(*(long *)(lVar51 + 0x370) + (long)(int)uVar43 * 0x20 + 4) >> 2 & 1) != 0)
          goto LAB_03ac8ec0;
          uVar34 = *(ulong *)(lVar55 + 0x100) | 1L << ((ulong)uVar45 & 0x3f);
        }
        else {
LAB_03ac8ec0:
          if ((*(uint *)(lVar51 + 0x5c8) >> 5 & 1) == 0) {
            uVar44 = 0x112;
            uVar64 = 0x12;
          }
          else {
            uVar44 = 0x111;
            uVar64 = 0x11;
          }
          if ((*(uint *)(lVar51 + 800) & 2) != 0) {
            uVar64 = uVar44;
          }
          (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(lVar55 + 0xb8),uVar64);
          uVar34 = 0;
        }
        *(ulong *)(lVar55 + 0x100) = uVar34;
      }
      iVar31 = iVar31 + 1;
    } while (iVar31 < *(int *)(param_1 + 0x768));
  }
  lVar52 = *(long *)PTR_DAT_04bc1010;
  if (*(char *)(param_1 + 0x728) != '\0') {
    uVar42 = *puVar1;
    if (uVar42 != 0xffffffff) {
      if ((*(uint *)(lVar52 + 0x5c8) >> 3 & 1) == 0) {
        uVar45 = uVar42 - *(ushort *)(lVar52 + 0x3da);
        if (*(uint *)(lVar52 + 0x368) <= uVar45) {
          uVar45 = 0;
        }
        if ((*(uint *)(*(long *)(lVar52 + 0x370) + (long)(int)uVar45 * 0x20 + 4) >> 2 & 1) == 0) {
          *(ulong *)(lVar55 + 0x100) = *(ulong *)(lVar55 + 0x100) | 1L << ((ulong)uVar42 & 0x3f);
          goto LAB_03ac8fac;
        }
      }
      if ((*(uint *)(lVar52 + 0x5c8) >> 5 & 1) == 0) {
        uVar44 = 0x112;
        uVar64 = 0x12;
      }
      else {
        uVar44 = 0x111;
        uVar64 = 0x11;
      }
      if ((*(uint *)(lVar52 + 800) & 2) != 0) {
        uVar64 = uVar44;
      }
      (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(lVar55 + 0xb8),uVar64);
      *(undefined8 *)(lVar55 + 0x100) = 0;
    }
LAB_03ac8fac:
    lVar51 = lVar58 + (long)(int)uVar16 * 0x1340;
    lVar52 = lVar51 + 0xcb8;
    (**(code **)(*(long *)(lVar51 + 0xcb8) + 0x38))(lVar52,lVar55);
    local_118 = 0xff7fffffff7fffff;
    local_128 = PTR_DAT_04bd0f08 + 0x10;
    local_120 = (char *)0x7f7fffff7f7fffff;
    local_10c = 0x3f80000000000000;
    local_110 = *(uint *)PTR_DAT_04bd0ea8;
    if (local_110 < 6) {
      if ((1 << (ulong)(local_110 & 0x1f) & 0x39U) == 0) {
        lVar51 = lVar58 + (long)(int)uVar16 * 0x1340;
        fVar60 = *(float *)(lVar51 + 0xcc4);
        fVar61 = *(float *)(lVar51 + 0xcc0);
      }
      else {
        lVar51 = lVar58 + (long)(int)uVar16 * 0x1340;
        fVar60 = *(float *)(lVar51 + 0xcc0);
        fVar61 = *(float *)(lVar51 + 0xcc4);
      }
      fVar62 = fVar60;
      fVar65 = 0.0;
      if (fVar60 <= 0.0) {
        fVar62 = 0.0;
        fVar65 = fVar60;
      }
      fVar63 = fVar61;
      fVar60 = 0.0;
      if (fVar61 <= 0.0) {
        fVar63 = 0.0;
        fVar60 = fVar61;
      }
      local_120 = (char *)CONCAT44(fVar60,fVar65);
      local_118 = CONCAT44(fVar63,fVar62);
    }
    FUN_038e77e4(&local_128,lVar55,lVar52);
    local_78 = 0;
    local_b0 = (undefined *)0x4000000040000000;
    uVar40 = *(undefined8 *)
              (*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x28) + 8) + 0x18);
    FUN_03907810(uVar40,lVar55);
    FUN_03949e90(lVar55,uVar40,lVar58 + (long)(int)uVar16 * 0x1340 + 0x938,&local_128,&local_b0,
                 &local_78);
    lVar52 = *(long *)PTR_DAT_04bc1010;
  }
  puVar56 = (undefined8 *)PTR_DAT_04bbd510;
  uVar42 = *puVar1;
  if (uVar42 != 0xffffffff) {
    if ((*(uint *)(lVar52 + 0x5c8) >> 3 & 1) == 0) {
      uVar45 = uVar42 - *(ushort *)(lVar52 + 0x3da);
      if (*(uint *)(lVar52 + 0x368) <= uVar45) {
        uVar45 = 0;
      }
      if ((*(uint *)(*(long *)(lVar52 + 0x370) + (long)(int)uVar45 * 0x20 + 4) >> 2 & 1) == 0) {
        *(ulong *)(lVar55 + 0x100) = *(ulong *)(lVar55 + 0x100) | 1L << ((ulong)uVar42 & 0x3f);
        goto LAB_03ac9188;
      }
    }
    if ((*(uint *)(lVar52 + 0x5c8) >> 5 & 1) == 0) {
      uVar44 = 0x112;
      uVar64 = 0x12;
    }
    else {
      uVar44 = 0x111;
      uVar64 = 0x11;
    }
    if ((*(uint *)(lVar52 + 800) & 2) != 0) {
      uVar64 = uVar44;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(lVar55 + 0xb8),uVar64);
    *(undefined8 *)(lVar55 + 0x100) = 0;
  }
LAB_03ac9188:
  uVar42 = *(uint *)(lVar59 + 0x4c0);
  if (uVar42 != 0xffffffff) {
    lVar52 = *param_2;
    lVar59 = *(long *)PTR_DAT_04bc1010;
    if ((*(uint *)(lVar59 + 0x5c8) >> 3 & 1) == 0) {
      uVar45 = uVar42 - *(ushort *)(lVar59 + 0x3da);
      if (*(uint *)(lVar59 + 0x368) <= uVar45) {
        uVar45 = 0;
      }
      if ((*(uint *)(*(long *)(lVar59 + 0x370) + (long)(int)uVar45 * 0x20 + 4) >> 2 & 1) == 0) {
        *(ulong *)(lVar52 + 0x100) = *(ulong *)(lVar52 + 0x100) | 1L << ((ulong)uVar42 & 0x3f);
        goto LAB_03ac922c;
      }
    }
    if ((*(uint *)(lVar59 + 0x5c8) >> 5 & 1) == 0) {
      uVar44 = 0x112;
      uVar64 = 0x12;
    }
    else {
      uVar44 = 0x111;
      uVar64 = 0x11;
    }
    if ((*(uint *)(lVar59 + 800) & 2) != 0) {
      uVar64 = uVar44;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(lVar52 + 0xb8),uVar64);
    *(undefined8 *)(lVar52 + 0x100) = 0;
  }
LAB_03ac922c:
  lVar59 = lVar58 + (long)(int)uVar16 * 0x1340;
  if (*(long *)(lVar59 + 0x628) != 0) {
    FUN_039499cc(*puVar56);
    *(undefined8 *)(lVar59 + 0x628) = 0;
  }
  if (*(char *)(param_1 + 0x708) != '\0') {
    lVar59 = lVar58 + (long)(int)uVar16 * 0x1340;
    if (*(long *)(lVar59 + 0xa18) != 0) {
      FUN_039499cc(*puVar56);
      *(undefined8 *)(lVar59 + 0xa18) = 0;
    }
    lVar58 = lVar58 + (long)(int)uVar16 * 0x1340;
    if (*(long *)(lVar58 + 0xa20) != 0) {
      FUN_039499cc(*puVar56);
      *(undefined8 *)(lVar58 + 0xa20) = 0;
    }
  }
  return;
}

