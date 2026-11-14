
bool FUN_01c93ba0(undefined8 *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  ushort uVar6;
  undefined *puVar7;
  char cVar8;
  bool bVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  long *plVar13;
  int *piVar14;
  long lVar15;
  undefined1 uVar16;
  uint uVar17;
  ushort *puVar18;
  int iVar19;
  byte *pbVar20;
  long *plVar21;
  long lVar22;
  undefined8 *puVar23;
  long *plVar24;
  ulong uVar25;
  ulong uVar26;
  undefined1 auVar27 [16];
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  undefined1 local_68 [4];
  char local_64 [4];
  
  puVar7 = PTR_DAT_04bb21d0;
  if (**(char **)(*(long *)PTR_DAT_04bb21d0 + 0x2070) == '\0') {
    if ((*(int *)(param_1 + 2) != -1) || (*(int *)(param_1 + 0x23) != -1)) {
      FUN_01c939d8(param_1);
      return false;
    }
LAB_01c9410c:
    bVar9 = false;
  }
  else {
    plVar21 = *(long **)(DAT_05ae6a60 + 0x68);
    uVar10 = (**(code **)(*plVar21 + 0x28))(plVar21);
    lVar11 = (**(code **)(*(long *)param_1[1] + 0x100))();
    if (*(long *)(lVar11 + 0x88) == 0) {
      lVar15 = *(long *)PTR_DAT_04bc1140;
      uVar12 = *(undefined8 *)(lVar15 + 0x25fe8);
      uVar2 = *(undefined8 *)(lVar15 + 0x25ff0);
      uVar3 = *(undefined8 *)(lVar15 + 0x26000);
      *(undefined8 *)(lVar11 + 0x58) = *(undefined8 *)(lVar15 + 0x25ff8);
      *(undefined8 *)(lVar11 + 0x60) = uVar3;
      *(undefined8 *)(lVar11 + 0x48) = uVar12;
      *(undefined8 *)(lVar11 + 0x50) = uVar2;
      uVar12 = *(undefined8 *)(lVar15 + 0x26008);
      uVar3 = *(undefined8 *)(lVar15 + 0x26010);
      uVar2 = *(undefined8 *)(lVar15 + 0x26018);
      uVar4 = *(undefined8 *)(lVar15 + 0x26020);
      *(undefined1 *)(lVar11 + 0x3f) = 0;
      *(undefined8 *)(lVar11 + 0x78) = uVar2;
      *(undefined8 *)(lVar11 + 0x80) = uVar4;
      lVar15 = DAT_05ae6a60;
      *(undefined8 *)(lVar11 + 0x68) = uVar12;
      *(undefined8 *)(lVar11 + 0x70) = uVar3;
      lVar22 = *(long *)(lVar15 + 0x18);
      (**(code **)(*(long *)(lVar22 + 0x128) + 0x18))(lVar22 + 0x128);
      uVar17 = 0;
      lVar15 = 0x7fffffff;
      puVar18 = *(ushort **)(lVar22 + 0x130);
      do {
        pbVar20 = (byte *)(lVar11 + (ulong)uVar17);
        if (lVar15 == 0) goto LAB_01c93d54;
        uVar6 = *puVar18;
        if (uVar6 == 0) goto LAB_01c93d54;
        bVar5 = (byte)uVar6;
        if (uVar6 < 0x80) {
          *pbVar20 = bVar5;
          iVar19 = 1;
        }
        else if (uVar6 < 0x800) {
          if (0x3e < uVar17) break;
          *pbVar20 = (byte)(uVar6 >> 6) | 0xc0;
          pbVar20[1] = bVar5 & 0x3f | 0x80;
          iVar19 = 2;
        }
        else {
          if (0x3f < uVar17 + 2) break;
          *pbVar20 = (byte)(uVar6 >> 0xc) | 0xe0;
          pbVar20[1] = (byte)(uVar6 >> 6) & 0x3f | 0x80;
          pbVar20[2] = bVar5 & 0x3f | 0x80;
          iVar19 = 3;
        }
        uVar17 = iVar19 + uVar17;
        lVar15 = lVar15 + -1;
        puVar18 = puVar18 + 1;
      } while (uVar17 < 0x40);
      pbVar20 = (byte *)(lVar11 + (ulong)(uVar17 - 1));
LAB_01c93d54:
      *pbVar20 = 0;
      uVar12 = nn::oe::GetDesiredLanguage();
      *(undefined8 *)(lVar11 + 0x40) = uVar12;
      lVar15 = plVar21[3];
      lVar22 = plVar21[2];
      *(undefined2 *)(lVar11 + 0x9c) = 0;
      *(short *)(lVar11 + 0x90) = (short)lVar15;
      *(long *)(lVar11 + 0x88) = lVar22;
      *(undefined4 *)(lVar11 + 0x98) = 0xffffffff;
      *(undefined1 *)(lVar11 + 0x9e) = 0x40;
      (**(code **)(*(long *)param_1[1] + 0x38))((long *)param_1[1],1);
      cVar8 = *(char *)((long)param_1 + 0x224);
    }
    else {
      cVar8 = *(char *)((long)param_1 + 0x224);
    }
    if (cVar8 != '\0') {
      iVar19 = *(int *)(param_1 + 0x44);
      puVar23 = *(undefined8 **)(*(long *)puVar7 + 0xf90);
      plVar24 = *(long **)(DAT_05ae6a60 + 0x68);
      uVar26 = (**(code **)(*plVar24 + 0x28))(plVar24);
      local_64[0] = '\0';
      lVar11 = *(long *)(DAT_05ae6a60 + 0x68);
      do {
        if (((uVar26 >> ((long)local_64[0] & 0x3fU) & 1) != 0) &&
           ((((auVar27 = (**(code **)(*plVar24 + 0x130))(plVar24,local_64),
              *(long *)(lVar11 + 0x28) != auVar27._0_8_ ||
              ((uint)*(byte *)(lVar11 + 0x30) != (auVar27._8_4_ & 0xff))) ||
             ((uint)*(byte *)(lVar11 + 0x31) != (auVar27._9_4_ & 0xff))) &&
            (plVar13 = (long *)*puVar23,
            piVar14 = (int *)(**(code **)(*plVar13 + 0x110))(plVar13,local_64), *piVar14 != iVar19))
           )) goto LAB_01c9410c;
        local_64[0] = local_64[0] + '\x01';
      } while (local_64[0] < '@');
      *(undefined1 *)((long)param_1 + 0x224) = 0;
      *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_1 + 0x23);
      param_1[3] = param_1[0x24];
      *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_1 + 0x25);
      *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_1 + 0x26);
      *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_1 + 0x27);
      *(undefined2 *)((long)param_1 + 0x31) = *(undefined2 *)((long)param_1 + 0x139);
      *(undefined4 *)((long)param_1 + 0x2c) = *(undefined4 *)((long)param_1 + 0x134);
      param_1[7] = param_1[0x28];
      *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_1 + 0x29);
      *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_1 + 0x2a);
      *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_1 + 0x2b);
      *(undefined2 *)((long)param_1 + 0x51) = *(undefined2 *)((long)param_1 + 0x159);
      *(undefined4 *)((long)param_1 + 0x4c) = *(undefined4 *)((long)param_1 + 0x154);
      param_1[0xb] = param_1[0x2c];
      *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_1 + 0x2d);
      *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_1 + 0x2e);
      *(undefined2 *)(param_1 + 0xe) = *(undefined2 *)(param_1 + 0x2f);
      *(undefined4 *)((long)param_1 + 0x6c) = *(undefined4 *)((long)param_1 + 0x174);
      *(undefined1 *)((long)param_1 + 0x72) = *(undefined1 *)((long)param_1 + 0x17a);
      *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_1 + 0x31);
      param_1[0xf] = param_1[0x30];
      *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_1 + 0x32);
      *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_1 + 0x33);
      *(undefined2 *)((long)param_1 + 0x91) = *(undefined2 *)((long)param_1 + 0x199);
      *(undefined4 *)((long)param_1 + 0x8c) = *(undefined4 *)((long)param_1 + 0x194);
      *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_1 + 0x35);
      param_1[0x13] = param_1[0x34];
      *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_1 + 0x36);
      *(undefined1 *)(param_1 + 0x16) = *(undefined1 *)(param_1 + 0x37);
      *(undefined1 *)((long)param_1 + 0xb1) = *(undefined1 *)((long)param_1 + 0x1b9);
      *(undefined4 *)((long)param_1 + 0xac) = *(undefined4 *)((long)param_1 + 0x1b4);
      *(undefined1 *)((long)param_1 + 0xb2) = *(undefined1 *)((long)param_1 + 0x1ba);
      *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_1 + 0x39);
      param_1[0x17] = param_1[0x38];
      *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)(param_1 + 0x3a);
      *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)(param_1 + 0x3b);
      *(undefined1 *)((long)param_1 + 0xd1) = *(undefined1 *)((long)param_1 + 0x1d9);
      *(undefined4 *)((long)param_1 + 0xcc) = *(undefined4 *)((long)param_1 + 0x1d4);
      *(undefined1 *)((long)param_1 + 0xd2) = *(undefined1 *)((long)param_1 + 0x1da);
      *(undefined1 *)(param_1 + 0x1c) = *(undefined1 *)(param_1 + 0x3d);
      param_1[0x1b] = param_1[0x3c];
      *(undefined1 *)(param_1 + 0x1d) = *(undefined1 *)(param_1 + 0x3e);
      *(undefined1 *)(param_1 + 0x1e) = *(undefined1 *)(param_1 + 0x3f);
      *(undefined1 *)((long)param_1 + 0xf1) = *(undefined1 *)((long)param_1 + 0x1f9);
      *(undefined4 *)((long)param_1 + 0xec) = *(undefined4 *)((long)param_1 + 500);
      *(undefined1 *)((long)param_1 + 0xf2) = *(undefined1 *)((long)param_1 + 0x1fa);
      *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_1 + 0x41);
      param_1[0x1f] = param_1[0x40];
      *(undefined1 *)(param_1 + 0x21) = *(undefined1 *)(param_1 + 0x42);
      *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_1 + 0x43);
      *(undefined1 *)((long)param_1 + 0x111) = *(undefined1 *)((long)param_1 + 0x219);
      *(undefined4 *)((long)param_1 + 0x10c) = *(undefined4 *)((long)param_1 + 0x214);
      *(undefined1 *)((long)param_1 + 0x112) = *(undefined1 *)((long)param_1 + 0x21a);
    }
    if (7 < *(byte *)((long)param_1 + 0x225)) {
      FUN_01c94580(param_1);
    }
    if (*(char *)(*(long *)puVar7 + 0x2078) == '\0') {
      plVar21 = (long *)*param_1;
      plVar24 = *(long **)(DAT_05ae6a60 + 0x68);
      uVar10 = (**(code **)(*plVar24 + 0xa8))(plVar24);
      if (((uVar10 & 1) == 0) &&
         ((plVar24[2] != plVar24[5] ||
          (*(char *)((long)plVar24 + 0x19) != *(char *)((long)plVar24 + 0x31))))) {
        plVar24 = *(long **)(DAT_05ae6a60 + 0x68);
        cVar8 = (**(code **)(*plVar24 + 0x160))(plVar24,plVar24 + 5);
        lVar11 = *(long *)(plVar21[3] + (long)cVar8 * 8);
        piVar14 = (int *)**(undefined8 **)
                           (*(long *)(lVar11 + 8) + (long)*(int *)(lVar11 + 0x20) * 8);
      }
      else {
        piVar14 = (int *)(**(code **)(*plVar21 + 0x108))(plVar21);
      }
      if (((piVar14 == (int *)0x0) ||
          (uVar10 = (**(code **)(*(long *)*param_1 + 0xc0))(), (uVar10 & 1) == 0)) ||
         (*(int *)(param_1 + 0x23) == *piVar14)) goto LAB_01c9410c;
      *(int *)(param_1 + 0x23) = *piVar14;
      uVar17 = piVar14[0x2e];
      uVar1 = piVar14[0x2f];
      param_1[0x24] = *(undefined8 *)(piVar14 + 1);
      *(char *)(param_1 + 0x25) = (char)piVar14[3];
      *(char *)(param_1 + 0x26) = (char)piVar14[0x1c];
      *(byte *)(param_1 + 0x27) = (byte)uVar17 & 1;
      *(byte *)((long)param_1 + 0x139) = (byte)uVar1 & 1;
      *(int *)((long)param_1 + 0x134) = piVar14[0x1f];
      *(char *)((long)param_1 + 0x13a) = (char)piVar14[0x2b];
      param_1[0x28] = *(undefined8 *)((long)piVar14 + 0xd);
      *(undefined1 *)(param_1 + 0x29) = *(undefined1 *)((long)piVar14 + 0x15);
      *(undefined1 *)(param_1 + 0x2a) = *(undefined1 *)((long)piVar14 + 0x71);
      *(byte *)(param_1 + 0x2b) = (byte)(uVar17 >> 1) & 1;
      *(byte *)((long)param_1 + 0x159) = (byte)(uVar1 >> 1) & 1;
      *(int *)((long)param_1 + 0x154) = piVar14[0x20];
      *(undefined1 *)((long)param_1 + 0x15a) = *(undefined1 *)((long)piVar14 + 0xad);
      param_1[0x2c] = *(undefined8 *)((long)piVar14 + 0x16);
      *(undefined1 *)(param_1 + 0x2d) = *(undefined1 *)((long)piVar14 + 0x1e);
      *(undefined1 *)(param_1 + 0x2e) = *(undefined1 *)((long)piVar14 + 0x72);
      *(byte *)(param_1 + 0x2f) = (byte)(uVar17 >> 2) & 1;
      *(byte *)((long)param_1 + 0x179) = (byte)(uVar1 >> 2) & 1;
      *(int *)((long)param_1 + 0x174) = piVar14[0x21];
      *(undefined1 *)((long)param_1 + 0x17a) = *(undefined1 *)((long)piVar14 + 0xae);
      param_1[0x30] = *(undefined8 *)((long)piVar14 + 0x1f);
      *(undefined1 *)(param_1 + 0x31) = *(undefined1 *)((long)piVar14 + 0x27);
      *(undefined1 *)(param_1 + 0x32) = *(undefined1 *)((long)piVar14 + 0x73);
      *(byte *)(param_1 + 0x33) = (byte)(uVar17 >> 3) & 1;
      *(byte *)((long)param_1 + 0x199) = (byte)(uVar1 >> 3) & 1;
      *(int *)((long)param_1 + 0x194) = piVar14[0x22];
      *(undefined1 *)((long)param_1 + 0x19a) = *(undefined1 *)((long)piVar14 + 0xaf);
      param_1[0x34] = *(undefined8 *)(piVar14 + 10);
      *(char *)(param_1 + 0x35) = (char)piVar14[0xc];
      *(char *)(param_1 + 0x36) = (char)piVar14[0x1d];
      *(byte *)(param_1 + 0x37) = (byte)(uVar17 >> 4) & 1;
      *(byte *)((long)param_1 + 0x1b9) = (byte)(uVar1 >> 4) & 1;
      *(int *)((long)param_1 + 0x1b4) = piVar14[0x23];
      *(char *)((long)param_1 + 0x1ba) = (char)piVar14[0x2c];
      param_1[0x38] = *(undefined8 *)((long)piVar14 + 0x31);
      *(undefined1 *)(param_1 + 0x39) = *(undefined1 *)((long)piVar14 + 0x39);
      *(undefined1 *)(param_1 + 0x3a) = *(undefined1 *)((long)piVar14 + 0x75);
      *(byte *)(param_1 + 0x3b) = (byte)(uVar17 >> 5) & 1;
      *(byte *)((long)param_1 + 0x1d9) = (byte)(uVar1 >> 5) & 1;
      *(int *)((long)param_1 + 0x1d4) = piVar14[0x24];
      *(undefined1 *)((long)param_1 + 0x1da) = *(undefined1 *)((long)piVar14 + 0xb1);
      param_1[0x3c] = *(undefined8 *)((long)piVar14 + 0x3a);
      *(undefined1 *)(param_1 + 0x3d) = *(undefined1 *)((long)piVar14 + 0x42);
      *(undefined1 *)(param_1 + 0x3e) = *(undefined1 *)((long)piVar14 + 0x76);
      *(byte *)(param_1 + 0x3f) = (byte)(uVar17 >> 6) & 1;
      *(byte *)((long)param_1 + 0x1f9) = (byte)(uVar1 >> 6) & 1;
      *(int *)((long)param_1 + 500) = piVar14[0x25];
      *(undefined1 *)((long)param_1 + 0x1fa) = *(undefined1 *)((long)piVar14 + 0xb2);
      param_1[0x40] = *(undefined8 *)((long)piVar14 + 0x43);
      *(undefined1 *)(param_1 + 0x41) = *(undefined1 *)((long)piVar14 + 0x4b);
      uVar16 = *(undefined1 *)((long)piVar14 + 0x77);
      *(byte *)(param_1 + 0x43) = (byte)(uVar17 >> 7) & 1;
      *(byte *)((long)param_1 + 0x219) = (byte)(uVar1 >> 7) & 1;
      *(undefined1 *)(param_1 + 0x42) = uVar16;
      *(int *)((long)param_1 + 0x214) = piVar14[0x26];
      *(undefined1 *)((long)param_1 + 0x21a) = *(undefined1 *)((long)piVar14 + 0xb3);
    }
    else {
      uVar26 = 0;
      uVar25 = 0;
      bVar9 = false;
      do {
        iVar19 = (int)uVar25;
        if ((uVar10 >> (uVar25 & 0x3f) & 1) == 0) {
          plVar24 = (long *)((long)param_1 + ((long)(uVar25 << 0x20) >> 0x1b) + 0x120);
          if ((*plVar24 != 0) && ((char)plVar24[2] != -1)) {
            *plVar24 = 0;
            uVar16 = 0;
            *(undefined1 *)(plVar24 + 1) = 0;
            *(char *)(plVar24 + 2) = -1;
            *(undefined1 *)((long)param_1 + (long)iVar19 * 0x20 + 0x139) = 0;
            *(undefined4 *)((long)param_1 + (long)iVar19 * 0x20 + 0x134) = 0;
LAB_01c94320:
            *(undefined1 *)((long)param_1 + (long)iVar19 * 0x20 + 0x13a) = uVar16;
            bVar9 = true;
          }
        }
        else {
          uVar16 = (undefined1)uVar25;
          local_68[0] = uVar16;
          auVar27 = (**(code **)(*plVar21 + 0x130))(plVar21,local_68);
          lVar11 = auVar27._0_8_;
          plVar24 = (long *)((long)param_1 + ((long)(uVar25 << 0x20) >> 0x1b) + 0x120);
          if ((*plVar24 == 0) || ((char)plVar24[2] == -1)) {
            local_70[0] = uVar16;
            lVar15 = (**(code **)(*(long *)param_1[1] + 0x110))((long *)param_1[1],local_70);
            if ((lVar15 != 0) &&
               (((*(long *)(lVar15 + 0x88) == lVar11 &&
                 (bVar5 = *(byte *)(lVar15 + 0x90), (uint)bVar5 == (auVar27._8_4_ & 0xff))) &&
                ((uint)*(byte *)(lVar15 + 0x91) == (auVar27._9_4_ & 0xff))))) {
              *plVar24 = lVar11;
              *(byte *)(plVar24 + 1) = bVar5;
LAB_01c9448c:
              if (((((param_1[0x24] != lVar11) || (cVar8 = *(char *)(param_1 + 0x26), cVar8 == -1))
                   && ((param_1[0x28] != lVar11 || (cVar8 = *(char *)(param_1 + 0x2a), cVar8 == -1))
                      )) && (((param_1[0x2c] != lVar11 ||
                              (cVar8 = *(char *)(param_1 + 0x2e), cVar8 == -1)) &&
                             ((param_1[0x30] != lVar11 ||
                              (cVar8 = *(char *)(param_1 + 0x32), cVar8 == -1)))))) &&
                 ((((param_1[0x34] != lVar11 || (cVar8 = *(char *)(param_1 + 0x36), cVar8 == -1)) &&
                   ((param_1[0x38] != lVar11 || (cVar8 = *(char *)(param_1 + 0x3a), cVar8 == -1))))
                  && ((param_1[0x3c] != lVar11 || (cVar8 = *(char *)(param_1 + 0x3e), cVar8 == -1)))
                  ))) {
                cVar8 = (char)uVar26;
                if (*(char *)(param_1 + 0x42) != -1 && param_1[0x40] == lVar11) {
                  cVar8 = *(char *)(param_1 + 0x42);
                }
              }
              *(char *)(plVar24 + 2) = cVar8;
              lVar11 = (long)iVar19 * 0x20;
              *(undefined1 *)(param_1 + (long)iVar19 * 4 + 0x27) = *(undefined1 *)(lVar15 + 0x9c);
              *(undefined1 *)((long)param_1 + lVar11 + 0x139) = *(undefined1 *)(lVar15 + 0x9d);
              *(undefined4 *)((long)param_1 + lVar11 + 0x134) = *(undefined4 *)(lVar15 + 0x98);
              uVar16 = *(undefined1 *)(lVar15 + 0x9e);
              goto LAB_01c94320;
            }
          }
          else {
            uVar17 = auVar27._8_4_ & 0xff;
            if ((*plVar24 != lVar11) || (*(byte *)(plVar24 + 1) != uVar17)) {
              local_6c[0] = uVar16;
              lVar15 = (**(code **)(*(long *)param_1[1] + 0x110))((long *)param_1[1],local_6c);
              if (((lVar15 != 0) &&
                  ((*(long *)(lVar15 + 0x88) == lVar11 && (*(byte *)(lVar15 + 0x90) == uVar17)))) &&
                 ((uint)*(byte *)(lVar15 + 0x91) == (auVar27._9_4_ & 0xff))) {
                *plVar24 = lVar11;
                *(char *)(plVar24 + 1) = auVar27[8];
                goto LAB_01c9448c;
              }
            }
          }
        }
        uVar26 = uVar25 + 1;
        uVar25 = uVar26 & 0xffffffff;
      } while ((int)uVar26 != 8);
      if (!bVar9) {
        return bVar9;
      }
      iVar19 = 0;
      if (*(int *)(param_1 + 0x23) != -2) {
        iVar19 = *(int *)(param_1 + 0x23) + 1;
      }
      *(int *)(param_1 + 0x23) = iVar19;
    }
    bVar9 = true;
  }
  return bVar9;
}

