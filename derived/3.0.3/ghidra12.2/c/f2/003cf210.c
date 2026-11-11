
void FUN_003cf210(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  byte bVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  undefined8 uVar12;
  void *__src;
  long lVar13;
  byte bVar14;
  int iVar15;
  long lVar16;
  undefined8 uVar17;
  undefined4 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined4 uVar51;
  float fVar52;
  undefined1 auStack_168 [200];
  
  (**(code **)(*param_1 + 0x58))();
  uVar18 = FUN_003cf8f0(param_1);
  fVar35 = *(float *)((long)param_1 + 0x124);
  fVar24 = *(float *)((long)param_1 + 0x6c);
  fVar32 = *(float *)(param_1 + 0xe);
  fVar25 = *(float *)((long)param_1 + 0xa4);
  lVar13 = param_1[4];
  iVar6 = (int)param_1[0x26];
  if ((int)param_1[0x10] != -1) {
    iVar6 = (int)param_1[0x10];
  }
  iVar15 = (int)*(char *)((long)param_1 + 0xf9);
  fVar26 = *(float *)(param_1 + 0x25);
  fVar27 = *(float *)(lVar13 + 0x50);
  fVar28 = *(float *)(param_1 + 0x16);
  if (*(char *)((long)param_1 + 0xf9) == -1) {
    iVar15 = *(int *)(lVar13 + 0x54);
    if (iVar15 == -1) {
      iVar15 = *(int *)((long)param_1 + 0xb4);
      if (iVar15 == -1) {
        iVar15 = (int)param_1[0xf];
        plVar10 = (long *)((long)param_1 + 0x74);
      }
      else {
        plVar10 = param_1 + 0x17;
      }
    }
    else {
      plVar10 = (long *)(lVar13 + 0x58);
    }
  }
  else {
    plVar10 = (long *)((long)param_1 + 300);
  }
  fVar36 = *(float *)((long)param_1 + 0x1a4);
  fVar42 = *(float *)((long)param_1 + 0x154);
  fVar37 = *(float *)(param_1 + 0x35);
  fVar43 = *(float *)(param_1 + 0x2b);
  fVar38 = *(float *)((long)param_1 + 0x1ac);
  fVar39 = *(float *)(param_1 + 0x36);
  fVar44 = *(float *)((long)param_1 + 0x15c);
  fVar40 = *(float *)((long)param_1 + 0x1b4);
  fVar41 = *(float *)(param_1 + 0x37);
  lVar16 = *plVar10;
  fVar50 = *(float *)(lVar13 + 0x60);
  fVar52 = *(float *)(lVar13 + 100);
  fVar45 = *(float *)(param_1 + 0x2c);
  fVar19 = *(float *)(param_1 + 0x15);
  fVar29 = *(float *)((long)param_1 + 0xac);
  fVar33 = *(float *)((long)param_1 + 0x16c);
  lVar11 = param_1[0x34];
  uVar12 = *(undefined8 *)((long)param_1 + 0x174);
  uVar2 = *(undefined8 *)((long)param_1 + 0x17c);
  fVar46 = *(float *)((long)param_1 + 0x164);
  uVar17 = *(undefined8 *)((long)param_1 + 0x194);
  uVar1 = *(undefined8 *)((long)param_1 + 0x184);
  uVar3 = *(undefined8 *)((long)param_1 + 0x18c);
  lVar4 = param_1[0x2a];
  fVar47 = *(float *)(param_1 + 0x2d);
  fVar48 = *(float *)(param_1 + 0x11);
  fVar49 = *(float *)((long)param_1 + 0x8c);
  uVar51 = *(undefined4 *)((long)param_1 + 0x19c);
  fVar20 = *(float *)(param_1 + 0x12);
  fVar30 = *(float *)((long)param_1 + 0x94);
  fVar21 = *(float *)(lVar13 + 0x68);
  fVar34 = *(float *)(lVar13 + 0x6c);
  fVar22 = *(float *)(param_1 + 0x13);
  fVar31 = *(float *)((long)param_1 + 0x9c);
  fVar23 = *(float *)(lVar13 + 0x70);
  uVar7 = FUN_003c5b84();
  lVar13 = FUN_003cbb70(uVar7,0x88,1);
  *(undefined4 *)(lVar13 + 8) = 10;
  uVar8 = (**(code **)(*param_1 + 0x40))(param_1);
  *(undefined8 *)(lVar13 + 0x18) = uVar8;
  *(int *)(lVar13 + 0x2c) = iVar15;
  *(float *)(lVar13 + 0x38) = fVar33 * fVar19 * fVar50 * fVar48;
  *(int *)(lVar13 + 0x3c) = (int)lVar4;
  *(undefined8 *)(lVar13 + 0x60) = uVar17;
  *(float *)(lVar13 + 0x70) = fVar36 + fVar42 + fVar29 + fVar49;
  *(float *)(lVar13 + 0x74) = fVar37 + fVar43 + fVar20;
  *(float *)(lVar13 + 0x78) = fVar38 + fVar44 + fVar52;
  *(float *)(lVar13 + 0x7c) = fVar39 + fVar45 + fVar21 + fVar30;
  *(int *)(lVar13 + 0x34) = iVar6;
  *(float *)(lVar13 + 0x80) = fVar40 + fVar46 + fVar34 + fVar22;
  *(float *)(lVar13 + 0x84) = fVar41 + fVar47 + fVar23 + fVar31;
  *(undefined4 *)(lVar13 + 0x20) = uVar18;
  *(float *)(lVar13 + 0x24) = fVar35 * fVar24 * fVar25;
  *(float *)(lVar13 + 0x28) = fVar26 + fVar32 + fVar27 + fVar28;
  *(int *)(lVar13 + 0x30) = (int)lVar16;
  *(undefined4 *)(lVar13 + 0x68) = uVar51;
  *(int *)(lVar13 + 0x6c) = (int)lVar11;
  *(undefined8 *)(lVar13 + 0x40) = uVar12;
  *(undefined8 *)(lVar13 + 0x48) = uVar2;
  *(undefined8 *)(lVar13 + 0x50) = uVar1;
  *(undefined8 *)(lVar13 + 0x58) = uVar3;
  FUN_003cc15c(uVar7,lVar13);
  if (param_1[0x38] != 0) {
    uVar9 = FUN_003c039c();
    if (((uVar9 & 1) != 0) && (plVar10 = (long *)FUN_003c0364(param_1[0x38]), 0 < (int)plVar10[1]))
    {
      lVar13 = param_1[4];
      if (lVar13 == 0) {
        lVar13 = 0;
        do {
          lVar16 = FUN_003cbb70(uVar7,0x28,1);
          *(undefined4 *)(lVar16 + 8) = 0xb;
          uVar12 = (**(code **)(*param_1 + 0x40))(param_1);
          *(undefined8 *)(lVar16 + 0x18) = uVar12;
          *(int *)(lVar16 + 0x20) = (int)lVar13 + 4;
          *(float *)(lVar16 + 0x24) = *(float *)(*plVar10 + lVar13 * 4) + 0.0;
          FUN_003cc15c(uVar7,lVar16);
          lVar13 = lVar13 + 1;
        } while (lVar13 < (int)plVar10[1]);
      }
      else {
        lVar16 = 0;
        do {
          iVar6 = (int)lVar16 + 4;
          fVar24 = (float)FUN_003ce1d0(lVar13,iVar6);
          lVar11 = FUN_003cbb70(uVar7,0x28,1);
          *(undefined4 *)(lVar11 + 8) = 0xb;
          uVar12 = (**(code **)(*param_1 + 0x40))(param_1);
          *(undefined8 *)(lVar11 + 0x18) = uVar12;
          *(int *)(lVar11 + 0x20) = iVar6;
          *(float *)(lVar11 + 0x24) = fVar24 + *(float *)(*plVar10 + lVar16 * 4);
          FUN_003cc15c(uVar7,lVar11);
          lVar16 = lVar16 + 1;
        } while (lVar16 < (int)plVar10[1]);
      }
    }
    uVar9 = FUN_003c0440(param_1[0x38]);
    if ((uVar9 & 1) != 0) {
      bVar5 = FUN_003c0408(param_1[0x38]);
      lVar13 = FUN_003cbb70(uVar7,0x28,1);
      *(undefined4 *)(lVar13 + 8) = 0xc;
      uVar12 = (**(code **)(*param_1 + 0x40))(param_1);
      *(undefined8 *)(lVar13 + 0x18) = uVar12;
      *(byte *)(lVar13 + 0x20) = bVar5 & 1;
      FUN_003cc15c(uVar7,lVar13);
      if ((bVar5 & 1) != 0) {
        __src = (void *)FUN_003c03f4(param_1[0x38]);
        memcpy(auStack_168,__src,0xc0);
        lVar13 = FUN_003cbb70(uVar7,0xe0,1);
        *(undefined4 *)(lVar13 + 8) = 0xd;
        uVar12 = (**(code **)(*param_1 + 0x40))(param_1);
        *(undefined8 *)(lVar13 + 0x18) = uVar12;
        memcpy((void *)(lVar13 + 0x20),auStack_168,0xc0);
        FUN_003cc15c(uVar7,lVar13);
        lVar13 = FUN_003c03d0(param_1[0x38]);
        if (0 < *(int *)(lVar13 + 0xd0)) {
          iVar6 = 0;
          do {
            lVar13 = FUN_003cbb70(uVar7,0x28,1);
            *(undefined4 *)(lVar13 + 8) = 0xe;
            uVar12 = (**(code **)(*param_1 + 0x40))(param_1);
            *(undefined8 *)(lVar13 + 0x18) = uVar12;
            *(int *)(lVar13 + 0x20) = iVar6;
            bVar5 = FUN_003c0420(param_1[0x38],iVar6);
            *(byte *)(lVar13 + 0x24) = bVar5 & 1;
            FUN_003cc15c(uVar7,lVar13);
            iVar6 = iVar6 + 1;
            lVar13 = FUN_003c03d0(param_1[0x38]);
          } while (iVar6 < *(int *)(lVar13 + 0xd0));
        }
      }
    }
    uVar9 = FUN_003c04a4(param_1[0x38]);
    if ((uVar9 & 1) != 0) {
      lVar13 = FUN_003cbb70(uVar7,0x28,1);
      *(undefined4 *)(lVar13 + 8) = 0x10;
      uVar12 = (**(code **)(*param_1 + 0x40))(param_1);
      *(undefined8 *)(lVar13 + 0x18) = uVar12;
      if ((param_1[0x38] == 0) || (uVar9 = FUN_003c04a4(), (uVar9 & 1) == 0)) {
        bVar5 = 0;
        bVar14 = 0;
      }
      else {
        iVar6 = (**(code **)(*(long *)param_1[0x27] + 0x10))();
        if (0 < iVar6) {
          lVar16 = 0;
          do {
            plVar10 = (long *)FUN_003c0450(param_1[0x38]);
            if ((lVar16 < (int)plVar10[1]) && (*(char *)(*plVar10 + lVar16) != '\0')) {
              bVar5 = 1;
              goto LAB_003cf774;
            }
            lVar16 = lVar16 + 1;
            iVar6 = (**(code **)(*(long *)param_1[0x27] + 0x10))();
          } while (lVar16 < iVar6);
        }
        bVar5 = 0;
LAB_003cf774:
        bVar14 = 1;
      }
      *(byte *)(lVar13 + 0x20) = bVar5 & bVar14;
      FUN_003cc15c(uVar7,lVar13);
      if (*(char *)(lVar13 + 0x20) != '\0') {
        lVar13 = param_1[0x24];
        plVar10 = (long *)FUN_003c0450(param_1[0x38]);
        lVar16 = FUN_003cbb70(uVar7,0x28,1);
        *(undefined4 *)(lVar16 + 8) = 0xf;
        uVar12 = (**(code **)(*param_1 + 0x40))(param_1);
        *(undefined8 *)(lVar16 + 0x18) = uVar12;
        *(int *)(lVar16 + 0x20) = (int)lVar13;
        FUN_003cc15c(uVar7,lVar16);
        if (0 < (int)plVar10[1]) {
          lVar13 = 0;
          do {
            lVar16 = FUN_003cbb70(uVar7,0x28,1);
            *(undefined4 *)(lVar16 + 8) = 0x11;
            uVar12 = (**(code **)(*param_1 + 0x40))(param_1);
            *(undefined8 *)(lVar16 + 0x18) = uVar12;
            *(int *)(lVar16 + 0x20) = (int)lVar13;
            *(undefined1 *)(lVar16 + 0x24) = *(undefined1 *)(*plVar10 + lVar13);
            FUN_003cc15c(uVar7,lVar16);
            lVar13 = lVar13 + 1;
          } while (lVar13 < (int)plVar10[1]);
        }
      }
    }
  }
  return;
}

