
void FUN_020d98fc(undefined8 *param_1,byte *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined1 uVar21;
  undefined1 uVar22;
  undefined1 uVar23;
  undefined2 uVar24;
  undefined2 uVar25;
  undefined2 uVar26;
  undefined2 uVar27;
  undefined2 uVar28;
  undefined2 uVar29;
  undefined2 uVar30;
  long lVar31;
  undefined8 *puVar32;
  undefined2 *puVar33;
  ulong uVar34;
  undefined4 *puVar35;
  long lVar36;
  long lVar37;
  uint local_d0;
  undefined4 local_6c;
  undefined4 uStack_68;
  byte local_64 [4];
  
  *param_1 = 0xfffe;
  FUN_0277d4ac();
  param_1[1] = 0xfffe;
  FUN_0277d4ac();
  param_1[2] = 0xfffe;
  FUN_0277d4ac();
  param_1[3] = 0xfffe;
  FUN_0277d4ac();
  param_1[4] = 0xfffe;
  FUN_0277d4ac();
  param_1[5] = 0xfffe;
  FUN_0277d4ac();
  param_1[6] = 0xfffe;
  FUN_0277d4ac();
  param_1[7] = 0xfffe;
  FUN_0277d4ac();
  param_1[8] = 0xfffe;
  FUN_0277d4ac();
  local_64[0] = *param_2;
  if (7 < local_64[0]) {
    local_64[0] = 0xff;
  }
  lVar31 = FUN_025830c0(DAT_055021a0,local_64,1);
  if (lVar31 != 0) {
    if ((*(long **)(lVar31 + 0xd0) == (long *)0x0) ||
       (puVar32 = (undefined8 *)**(long **)(lVar31 + 0xd0), puVar32 == (undefined8 *)0x0)) {
      local_d0 = 0;
    }
    else {
      local_d0 = (**(code **)*puVar32)();
    }
    lVar37 = *(long *)(lVar31 + 0xb8) + *(long *)(lVar31 + 0xb0);
    if ((*(char *)(lVar37 + 0xaf89) == '\0') || (7 < *(byte *)(lVar37 + 0xaf88))) {
      lVar36 = lVar37;
      if ((*(char *)(lVar37 + 0xaf8a) != '\0') &&
         ((uVar34 = FUN_016e5e90(), (uVar34 & 1) != 0 &&
          (lVar36 = lVar37 + 0xaf90, (*(byte *)(lVar37 + 0xaf8b) & 0xfe) != 0)))) {
        lVar36 = lVar37;
      }
    }
    else {
      lVar36 = lVar37 + (ulong)*(byte *)(lVar37 + 0xaf88) * 0x11f8 + 0x1fc8;
    }
    puVar33 = (undefined2 *)FUN_026e85f0(lVar36);
    lVar37 = *(long *)(lVar31 + 0xb8) + *(long *)(lVar31 + 0xb0);
    uVar24 = *puVar33;
    uVar10 = *(undefined1 *)(puVar33 + 1);
    uVar11 = *(undefined1 *)((long)puVar33 + 3);
    uVar3 = *(undefined4 *)(puVar33 + 2);
    if ((*(char *)(lVar37 + 0xaf89) == '\0') || (7 < *(byte *)(lVar37 + 0xaf88))) {
      lVar36 = lVar37;
      if ((*(char *)(lVar37 + 0xaf8a) != '\0') &&
         ((uVar34 = FUN_016e5e90(), (uVar34 & 1) != 0 &&
          (lVar36 = lVar37 + 0xaf90, (*(byte *)(lVar37 + 0xaf8b) & 0xfe) != 0)))) {
        lVar36 = lVar37;
      }
    }
    else {
      lVar36 = lVar37 + (ulong)*(byte *)(lVar37 + 0xaf88) * 0x11f8 + 0x1fc8;
    }
    puVar33 = (undefined2 *)FUN_026ea320(lVar36);
    lVar37 = *(long *)(lVar31 + 0xb8) + *(long *)(lVar31 + 0xb0);
    uVar25 = *puVar33;
    uVar12 = *(undefined1 *)(puVar33 + 1);
    uVar13 = *(undefined1 *)((long)puVar33 + 3);
    uVar4 = *(undefined4 *)(puVar33 + 2);
    if ((*(char *)(lVar37 + 0xaf89) == '\0') || (7 < *(byte *)(lVar37 + 0xaf88))) {
      lVar36 = lVar37;
      if ((*(char *)(lVar37 + 0xaf8a) != '\0') &&
         ((uVar34 = FUN_016e5e90(), (uVar34 & 1) != 0 &&
          (lVar36 = lVar37 + 0xaf90, (*(byte *)(lVar37 + 0xaf8b) & 0xfe) != 0)))) {
        lVar36 = lVar37;
      }
    }
    else {
      lVar36 = lVar37 + (ulong)*(byte *)(lVar37 + 0xaf88) * 0x11f8 + 0x1fc8;
    }
    puVar33 = (undefined2 *)FUN_026ea720(lVar36);
    uVar26 = *puVar33;
    uVar14 = *(undefined1 *)(puVar33 + 1);
    uVar15 = *(undefined1 *)((long)puVar33 + 3);
    uVar5 = *(undefined4 *)(puVar33 + 2);
    puVar33 = (undefined2 *)FUN_028078d8(*(long *)(lVar31 + 0xb8) + *(long *)(lVar31 + 0xb0));
    uVar16 = *(undefined1 *)((long)puVar33 + 3);
    uVar6 = *(undefined4 *)(puVar33 + 2);
    uVar27 = *puVar33;
    uVar17 = *(undefined1 *)(puVar33 + 1);
    puVar33 = (undefined2 *)FUN_02807b30(*(long *)(lVar31 + 0xb8) + *(long *)(lVar31 + 0xb0));
    lVar37 = *(long *)(lVar31 + 0xb8) + *(long *)(lVar31 + 0xb0);
    uVar28 = *puVar33;
    uVar18 = *(undefined1 *)(puVar33 + 1);
    uVar19 = *(undefined1 *)((long)puVar33 + 3);
    uVar7 = *(undefined4 *)(puVar33 + 2);
    if ((*(char *)(lVar37 + 0xaf89) == '\0') || (7 < *(byte *)(lVar37 + 0xaf88))) {
      lVar36 = lVar37;
      if ((*(char *)(lVar37 + 0xaf8a) != '\0') &&
         ((uVar34 = FUN_016e5e90(), (uVar34 & 1) != 0 &&
          (lVar36 = lVar37 + 0xaf90, (*(byte *)(lVar37 + 0xaf8b) & 0xfe) != 0)))) {
        lVar36 = lVar37;
      }
    }
    else {
      lVar36 = lVar37 + (ulong)*(byte *)(lVar37 + 0xaf88) * 0x11f8 + 0x1fc8;
    }
    puVar33 = (undefined2 *)FUN_026e9470(lVar36);
    uVar29 = *puVar33;
    uVar20 = *(undefined1 *)(puVar33 + 1);
    uVar21 = *(undefined1 *)((long)puVar33 + 3);
    lVar37 = *(long *)(lVar31 + 0xb8) + *(long *)(lVar31 + 0xb0);
    uVar8 = *(undefined4 *)(puVar33 + 2);
    if ((*(char *)(lVar37 + 0xaf89) == '\0') || (7 < *(byte *)(lVar37 + 0xaf88))) {
      lVar36 = lVar37;
      if ((*(char *)(lVar37 + 0xaf8a) != '\0') &&
         ((uVar34 = FUN_016e5e90(), (uVar34 & 1) != 0 &&
          (lVar36 = lVar37 + 0xaf90, (*(byte *)(lVar37 + 0xaf8b) & 0xfe) != 0)))) {
        lVar36 = lVar37;
      }
    }
    else {
      lVar36 = lVar37 + (ulong)*(byte *)(lVar37 + 0xaf88) * 0x11f8 + 0x1fc8;
    }
    puVar33 = (undefined2 *)FUN_026e9240(lVar36);
    lVar37 = *(long *)(lVar31 + 0xb8) + *(long *)(lVar31 + 0xb0);
    uVar30 = *puVar33;
    uVar22 = *(undefined1 *)(puVar33 + 1);
    uVar23 = *(undefined1 *)((long)puVar33 + 3);
    uVar9 = *(undefined4 *)(puVar33 + 2);
    if ((*(char *)(lVar37 + 0xaf89) == '\0') || (7 < *(byte *)(lVar37 + 0xaf88))) {
      if (*(char *)(lVar37 + 0xaf8a) != '\0') {
        uVar34 = FUN_016e5e90();
        if ((uVar34 & 1) != 0) {
          lVar36 = lVar37 + 0xaf90;
          if ((*(byte *)(lVar37 + 0xaf8b) & 0xfe) != 0) {
            lVar36 = lVar37;
          }
          lVar37 = lVar36;
        }
      }
    }
    else {
      lVar37 = lVar37 + (ulong)*(byte *)(lVar37 + 0xaf88) * 0x11f8 + 0x1fc8;
    }
    puVar35 = (undefined4 *)FUN_026e96a0(lVar37);
    uVar1 = *puVar35;
    uVar2 = puVar35[1];
    FUN_0253395c(&local_6c,param_2,*(undefined4 *)PTR_DAT_04bb3238);
    *(undefined2 *)param_1 = uVar27;
    *(undefined4 *)((long)param_1 + 0x1c) = uVar5;
    *(undefined2 *)(param_1 + 6) = uVar30;
    *(undefined1 *)((long)param_1 + 0x32) = uVar22;
    *(undefined1 *)((long)param_1 + 0x33) = uVar23;
    *(undefined4 *)((long)param_1 + 0x34) = uVar9;
    *(undefined4 *)(param_1 + 7) = uVar1;
    *(undefined1 *)((long)param_1 + 2) = uVar17;
    *(undefined1 *)((long)param_1 + 3) = uVar16;
    *(undefined4 *)((long)param_1 + 4) = uVar6;
    *(undefined2 *)(param_1 + 1) = uVar24;
    *(undefined1 *)((long)param_1 + 10) = uVar10;
    *(undefined1 *)((long)param_1 + 0xb) = uVar11;
    *(undefined4 *)((long)param_1 + 0xc) = uVar3;
    *(undefined2 *)(param_1 + 2) = uVar25;
    *(undefined1 *)((long)param_1 + 0x12) = uVar12;
    *(undefined1 *)((long)param_1 + 0x13) = uVar13;
    *(undefined4 *)((long)param_1 + 0x14) = uVar4;
    *(undefined2 *)(param_1 + 3) = uVar26;
    *(undefined1 *)((long)param_1 + 0x1a) = uVar14;
    *(undefined1 *)((long)param_1 + 0x1b) = uVar15;
    *(undefined2 *)(param_1 + 4) = uVar28;
    *(undefined1 *)((long)param_1 + 0x22) = uVar18;
    *(undefined1 *)((long)param_1 + 0x23) = uVar19;
    *(undefined4 *)((long)param_1 + 0x24) = uVar7;
    *(undefined2 *)(param_1 + 5) = uVar29;
    *(undefined1 *)((long)param_1 + 0x2a) = uVar20;
    *(undefined1 *)((long)param_1 + 0x2b) = uVar21;
    *(undefined4 *)((long)param_1 + 0x2c) = uVar8;
    *(undefined4 *)((long)param_1 + 0x3c) = uVar2;
    *(undefined4 *)(param_1 + 8) = local_6c;
    *(undefined4 *)((long)param_1 + 0x44) = uStack_68;
    if ((((local_d0 & 1) != 0) && (*(long *)(lVar31 + 0xd0) != 0)) &&
       (puVar32 = *(undefined8 **)(*(long *)(lVar31 + 0xd0) + 8), puVar32 != (undefined8 *)0x0)) {
      (**(code **)*puVar32)();
    }
  }
  return;
}

