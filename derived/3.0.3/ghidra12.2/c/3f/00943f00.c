
void FUN_00943f00(long param_1,float *param_2,uint param_3,uint param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  ulong uVar15;
  long lVar16;
  bool bVar17;
  undefined8 uVar18;
  uint uVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  uint uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined4 uVar29;
  float fVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  float fVar33;
  undefined4 uVar34;
  
  fVar26 = *param_2;
  lVar1 = param_1 + 0xe8;
  do {
    iVar2 = param_3 + param_4;
    if (iVar2 < 0 != SCARRY4(param_3,param_4)) {
      iVar2 = iVar2 + 1;
    }
    lVar16 = lVar1 + (ulong)(uint)(iVar2 >> 1) * 0x90;
    if (0x3f < (uint)(iVar2 >> 1)) {
      lVar16 = lVar1;
    }
    fVar25 = *(float *)(lVar16 + 0x40);
    fVar27 = *(float *)(lVar16 + 0x48);
    uVar20 = (ulong)param_3;
    fVar30 = 1.0 / SQRT(fVar27 * fVar27 + fVar25 * fVar25);
    fVar28 = param_2[1];
    fVar25 = fVar28 * fVar27 * fVar30 + fVar25 * fVar30 * fVar26;
    uVar24 = param_4;
    while( true ) {
      while( true ) {
        uVar19 = (uint)uVar20;
        lVar16 = lVar1 + uVar20 * 0x90;
        if (0x3f < uVar19) {
          lVar16 = lVar1;
        }
        fVar27 = *(float *)(lVar16 + 0x40);
        fVar30 = *(float *)(lVar16 + 0x48);
        fVar33 = 1.0 / SQRT(fVar30 * fVar30 + fVar27 * fVar27);
        if (fVar28 * fVar30 * fVar33 + fVar27 * fVar33 * fVar26 <= fVar25) break;
        uVar20 = (ulong)(uVar19 + 1);
      }
      while( true ) {
        lVar16 = lVar1 + (ulong)uVar24 * 0x90;
        if (0x3f < uVar24) {
          lVar16 = lVar1;
        }
        fVar27 = *(float *)(lVar16 + 0x40);
        fVar30 = *(float *)(lVar16 + 0x48);
        fVar33 = 1.0 / SQRT(fVar30 * fVar30 + fVar27 * fVar27);
        if (fVar25 <= fVar28 * fVar30 * fVar33 + fVar27 * fVar33 * fVar26) break;
        uVar24 = uVar24 - 1;
      }
      if ((int)uVar24 <= (int)uVar19) break;
      lVar16 = uVar20 * 0x90;
      uVar20 = (ulong)(uVar19 + 1);
      uVar15 = (ulong)uVar24;
      lVar16 = lVar1 + lVar16;
      if (0x3f < uVar19) {
        lVar16 = lVar1;
      }
      bVar17 = 0x3f < uVar24;
      uVar24 = uVar24 - 1;
      lVar3 = lVar1 + uVar15 * 0x90;
      if (bVar17) {
        lVar3 = lVar1;
      }
      uVar29 = *(undefined4 *)(lVar16 + 0x30);
      uVar6 = *(undefined8 *)(lVar16 + 0x10);
      uVar8 = *(undefined8 *)(lVar16 + 0x18);
      uVar21 = *(undefined8 *)(lVar16 + 0x40);
      uVar7 = *(undefined8 *)(lVar16 + 0x20);
      uVar9 = *(undefined8 *)(lVar16 + 0x28);
      uVar23 = *(undefined8 *)(lVar16 + 0x50);
      *(undefined4 *)(lVar16 + 0x10) = *(undefined4 *)(lVar3 + 0x10);
      uVar10 = *(undefined4 *)(lVar16 + 0x58);
      uVar32 = *(undefined4 *)(lVar16 + 0x48);
      uVar31 = *(undefined4 *)(lVar16 + 0x4c);
      uVar34 = *(undefined4 *)(lVar16 + 100);
      uVar13 = *(undefined1 *)(lVar16 + 0x68);
      uVar4 = *(undefined4 *)(lVar16 + 0x78);
      uVar5 = *(undefined4 *)(lVar16 + 0x7c);
      *(undefined4 *)(lVar16 + 0x14) = *(undefined4 *)(lVar3 + 0x14);
      *(undefined4 *)(lVar16 + 0x18) = *(undefined4 *)(lVar3 + 0x18);
      *(undefined4 *)(lVar16 + 0x1c) = *(undefined4 *)(lVar3 + 0x1c);
      *(undefined4 *)(lVar16 + 0x20) = *(undefined4 *)(lVar3 + 0x20);
      *(undefined4 *)(lVar16 + 0x24) = *(undefined4 *)(lVar3 + 0x24);
      *(undefined4 *)(lVar16 + 0x28) = *(undefined4 *)(lVar3 + 0x28);
      *(undefined4 *)(lVar16 + 0x2c) = *(undefined4 *)(lVar3 + 0x2c);
      *(undefined4 *)(lVar16 + 0x30) = *(undefined4 *)(lVar3 + 0x30);
      *(undefined4 *)(lVar16 + 0x40) = *(undefined4 *)(lVar3 + 0x40);
      *(undefined4 *)(lVar16 + 0x44) = *(undefined4 *)(lVar3 + 0x44);
      *(undefined4 *)(lVar16 + 0x48) = *(undefined4 *)(lVar3 + 0x48);
      *(undefined4 *)(lVar16 + 0x4c) = *(undefined4 *)(lVar3 + 0x4c);
      *(undefined4 *)(lVar16 + 0x50) = *(undefined4 *)(lVar3 + 0x50);
      *(undefined4 *)(lVar16 + 0x54) = *(undefined4 *)(lVar3 + 0x54);
      *(undefined4 *)(lVar16 + 0x58) = *(undefined4 *)(lVar3 + 0x58);
      uVar22 = *(undefined8 *)(lVar16 + 0x5c);
      *(undefined4 *)(lVar16 + 0x5c) = *(undefined4 *)(lVar3 + 0x5c);
      *(undefined4 *)(lVar16 + 0x60) = *(undefined4 *)(lVar3 + 0x60);
      *(undefined4 *)(lVar16 + 100) = *(undefined4 *)(lVar3 + 100);
      *(undefined1 *)(lVar16 + 0x68) = *(undefined1 *)(lVar3 + 0x68);
      *(undefined4 *)(lVar16 + 0x78) = *(undefined4 *)(lVar3 + 0x78);
      *(undefined4 *)(lVar16 + 0x7c) = *(undefined4 *)(lVar3 + 0x7c);
      uVar14 = *(undefined1 *)(lVar16 + 0x84);
      uVar11 = *(undefined4 *)(lVar16 + 0x80);
      uVar12 = *(undefined4 *)(lVar3 + 0x80);
      *(undefined1 *)(lVar16 + 0x84) = *(undefined1 *)(lVar3 + 0x84);
      *(undefined4 *)(lVar16 + 0x80) = uVar12;
      uVar18 = *(undefined8 *)(lVar16 + 0x88);
      *(undefined8 *)(lVar16 + 0x88) = *(undefined8 *)(lVar3 + 0x88);
      *(undefined8 *)(lVar3 + 0x10) = uVar6;
      *(undefined8 *)(lVar3 + 0x18) = uVar8;
      *(undefined8 *)(lVar3 + 0x20) = uVar7;
      *(undefined8 *)(lVar3 + 0x28) = uVar9;
      *(undefined4 *)(lVar3 + 0x30) = uVar29;
      *(undefined8 *)(lVar3 + 0x40) = uVar21;
      *(undefined4 *)(lVar3 + 0x48) = uVar32;
      *(undefined4 *)(lVar3 + 0x4c) = uVar31;
      *(undefined8 *)(lVar3 + 0x50) = uVar23;
      *(undefined4 *)(lVar3 + 0x58) = uVar10;
      *(undefined8 *)(lVar3 + 0x5c) = uVar22;
      *(undefined4 *)(lVar3 + 100) = uVar34;
      *(undefined1 *)(lVar3 + 0x68) = uVar13;
      *(undefined4 *)(lVar3 + 0x78) = uVar4;
      *(undefined4 *)(lVar3 + 0x7c) = uVar5;
      *(undefined8 *)(lVar3 + 0x88) = uVar18;
      *(undefined4 *)(lVar3 + 0x80) = uVar11;
      *(undefined1 *)(lVar3 + 0x84) = uVar14;
      fVar26 = *param_2;
      fVar28 = param_2[1];
    }
    if ((int)param_3 < (int)(uVar19 - 1)) {
      FUN_00943f00(param_1,param_2);
      fVar26 = *param_2;
    }
    param_3 = uVar24 + 1;
  } while ((int)param_3 < (int)param_4);
  return;
}

