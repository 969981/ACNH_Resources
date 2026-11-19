
bool FUN_039d0790(long param_1,undefined8 param_2,long param_3)

{
  uint *puVar1;
  long *plVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  bool bVar8;
  undefined *puVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined4 *puVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined **local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  uint local_90;
  undefined8 local_8c;
  int local_7c;
  
  uVar5 = *(uint *)(param_1 + 0xa70);
  uVar12 = *(uint *)(param_1 + 0x13f4);
  uVar10 = *(uint *)(param_1 + 0x13fc);
  uVar13 = *(uint *)(param_1 + 0x498);
  if ((uVar5 & 1) != 0) {
    uVar13 = uVar13 | 1;
    *(uint *)(param_1 + 0x498) = uVar13;
  }
  if (((uVar13 & 1) != 0) && ((int)*(char *)(param_1 + 0xcb8) != 0xffffffff)) {
    uVar6 = 0xf << (ulong)(((int)*(char *)(param_1 + 0xcb8) & 7U) << 2);
    uVar12 = uVar6 | uVar12;
    uVar10 = uVar6 | uVar10;
    *(uint *)(param_1 + 0x13f4) = uVar12;
    *(uint *)(param_1 + 0x13fc) = uVar10;
  }
  if ((uVar5 >> 1 & 1) != 0) {
    uVar13 = uVar13 | 2;
    *(uint *)(param_1 + 0x498) = uVar13;
  }
  if (((uVar13 >> 1 & 1) != 0) && ((int)*(char *)(param_1 + 0xdb8) != 0xffffffff)) {
    uVar6 = 0xf << (ulong)(((int)*(char *)(param_1 + 0xdb8) & 7U) << 2);
    uVar12 = uVar6 | uVar12;
    uVar10 = uVar6 | uVar10;
    *(uint *)(param_1 + 0x13f4) = uVar12;
    *(uint *)(param_1 + 0x13fc) = uVar10;
  }
  if ((uVar5 >> 2 & 1) != 0) {
    uVar13 = uVar13 | 4;
    *(uint *)(param_1 + 0x498) = uVar13;
  }
  if (((uVar13 >> 2 & 1) != 0) && ((int)*(char *)(param_1 + 0xeb8) != 0xffffffff)) {
    uVar6 = 0xf << (ulong)(((int)*(char *)(param_1 + 0xeb8) & 7U) << 2);
    uVar12 = uVar6 | uVar12;
    uVar10 = uVar6 | uVar10;
    *(uint *)(param_1 + 0x13f4) = uVar12;
    *(uint *)(param_1 + 0x13fc) = uVar10;
  }
  if ((uVar5 >> 3 & 1) != 0) {
    uVar13 = uVar13 | 8;
    *(uint *)(param_1 + 0x498) = uVar13;
  }
  uVar20 = *(undefined4 *)(param_1 + 0x1400);
  if (((uVar13 >> 3 & 1) != 0) && ((int)*(char *)(param_1 + 0xfb8) != 0xffffffff)) {
    *(undefined4 *)(param_1 + 0x1400) = uVar20;
    uVar6 = 0xf << (ulong)(((int)*(char *)(param_1 + 0xfb8) & 7U) << 2);
    uVar12 = uVar6 | uVar12;
    uVar10 = uVar6 | uVar10;
    *(uint *)(param_1 + 0x13f4) = uVar12;
    *(uint *)(param_1 + 0x13fc) = uVar10;
  }
  if ((uVar5 >> 4 & 1) != 0) {
    uVar13 = uVar13 | 0x10;
    *(uint *)(param_1 + 0x498) = uVar13;
  }
  if (((uVar13 >> 4 & 1) != 0) && ((int)*(char *)(param_1 + 0x10b8) != 0xffffffff)) {
    *(undefined4 *)(param_1 + 0x1400) = uVar20;
    uVar5 = 0xf << (ulong)(((int)*(char *)(param_1 + 0x10b8) & 7U) << 2);
    *(uint *)(param_1 + 0x13f4) = uVar5 | uVar12;
    *(uint *)(param_1 + 0x13fc) = uVar5 | uVar10;
  }
  fVar27 = *(float *)(param_3 + 0x1c) - *(float *)(param_3 + 0x14);
  lVar17 = *(long *)(param_3 + 0x60);
  fVar26 = *(float *)(param_3 + 0x18) - *(float *)(param_3 + 0x10);
  *(undefined4 *)(param_1 + 0x4a8) = *(undefined4 *)(param_3 + 8);
  uVar20 = *(undefined4 *)(param_3 + 0xc);
  *(undefined8 *)(param_1 + 0x500) = 0;
  *(undefined8 *)(param_1 + 0x4f8) = 0;
  *(undefined8 *)(param_1 + 0x4f0) = 0;
  *(undefined8 *)(param_1 + 0x4e8) = 0;
  *(undefined8 *)(param_1 + 0x4e0) = 0;
  *(undefined8 *)(param_1 + 0x4d8) = 0;
  fVar23 = fVar26;
  if (fVar26 <= 0.0) {
    fVar23 = 0.0;
  }
  *(undefined8 *)(param_1 + 0x4d0) = 0;
  *(undefined8 *)(param_1 + 0x4c8) = 0;
  *(undefined8 *)(param_1 + 0x4c0) = 0;
  *(undefined4 *)(param_1 + 0x4ac) = uVar20;
  fVar21 = 0.0;
  if (fVar26 <= 0.0) {
    fVar21 = fVar26;
  }
  *(float *)(param_1 + 0x4b8) = fVar23;
  fVar23 = fVar27;
  if (fVar27 <= 0.0) {
    fVar23 = 0.0;
  }
  fVar24 = 0.0;
  if (fVar27 <= 0.0) {
    fVar24 = fVar27;
  }
  *(float *)(param_1 + 0x4b0) = fVar21;
  fVar21 = fVar27 * 0.5;
  *(float *)(param_1 + 0x4b4) = fVar24;
  *(float *)(param_1 + 0x4bc) = fVar23;
  fVar24 = fVar26 * 0.5;
  *(undefined4 *)(param_1 + 0xa80) = *(undefined4 *)(param_3 + 8);
  puVar9 = PTR_DAT_04bbd510;
  fVar23 = fVar24;
  if (fVar24 <= 0.0) {
    fVar23 = 0.0;
  }
  fVar25 = 0.0;
  if (fVar24 <= 0.0) {
    fVar25 = fVar24;
  }
  fVar24 = fVar21;
  if (fVar21 <= 0.0) {
    fVar24 = 0.0;
  }
  fVar22 = 0.0;
  if (fVar21 <= 0.0) {
    fVar22 = fVar21;
  }
  uVar20 = *(undefined4 *)(param_3 + 0xc);
  *(float *)(param_1 + 0xa88) = fVar25;
  *(float *)(param_1 + 0xa90) = fVar23;
  *(undefined8 *)(param_1 + 0xad8) = 0;
  *(undefined8 *)(param_1 + 0xad0) = 0;
  *(undefined8 *)(param_1 + 0xac8) = 0;
  *(undefined8 *)(param_1 + 0xac0) = 0;
  *(undefined8 *)(param_1 + 0xab8) = 0;
  *(undefined8 *)(param_1 + 0xab0) = 0;
  *(undefined8 *)(param_1 + 0xaa8) = 0;
  *(undefined8 *)(param_1 + 0xaa0) = 0;
  *(undefined8 *)(param_1 + 0xa98) = 0;
  *(float *)(param_1 + 0xa94) = fVar24;
  *(float *)(param_1 + 0xa8c) = fVar22;
  lVar11 = *(long *)puVar9;
  *(undefined4 *)(param_1 + 0xa84) = uVar20;
  FUN_01560750(param_1 + 0x1138,*(long *)(param_3 + 0x20) + 8,*(undefined1 *)(param_1 + 0x11f6),
               *(undefined2 *)(param_1 + 0x11f4));
  FUN_0155a100(param_1 + 0x508,lVar17 + 8,*(undefined1 *)(param_1 + 0x5c6),
               *(undefined2 *)(param_1 + 0x5c4));
  lVar14 = *(long *)(lVar17 + 0xd0);
  iVar3 = *(int *)(lVar17 + 0xcc);
  if (((lVar14 != *(long *)(param_1 + 0x5d8)) ||
      (*(int *)(lVar17 + 200) != *(int *)(param_1 + 0x5d0))) || (iVar3 != *(int *)(param_1 + 0x5d4))
     ) {
    uVar16 = *(undefined8 *)(lVar17 + 0xd8);
    *(int *)(param_1 + 0x5d0) = *(int *)(lVar17 + 200);
    puVar1 = (uint *)(param_1 + 0x5c0);
    *(int *)(param_1 + 0x5d4) = iVar3;
    *(long *)(param_1 + 0x5d8) = lVar14;
    *(undefined8 *)(param_1 + 0x5e0) = uVar16;
    do {
      cVar7 = '\x01';
      bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar8) {
        *puVar1 = *puVar1 | 8;
        cVar7 = ExclusiveMonitorsStatus();
      }
    } while (cVar7 != '\0');
  }
  uVar5 = (*(uint *)(param_1 + 0x498) | *(uint *)(param_1 + 0xa70)) & 0x1f;
  if (uVar5 != 0) {
    *(long *)(param_1 + 0x4c0) = param_1 + 0x1138;
    *(long *)(param_1 + 0x500) = param_1 + 0x508;
    uVar12 = 0;
    plVar2 = (long *)(param_1 + 0x4a0);
    do {
      if ((*(uint *)(param_1 + 0x498) >> (ulong)(uVar12 & 0x1f) & 1) != 0) {
        lVar17 = param_1 + 0xbc0 + (long)(int)uVar12 * 0x100;
        if (uVar12 == 3) {
          *(undefined4 *)(param_1 + 0x2d0) = *(undefined4 *)(param_1 + 0x1140);
          *(undefined4 *)(param_1 + 0x2d4) = *(undefined4 *)(param_1 + 0x1144);
          *(undefined8 *)(param_1 + 0x2d8) = *(undefined8 *)(param_1 + 0x1148);
          *(undefined8 *)(param_1 + 0x2e0) = *(undefined8 *)(param_1 + 0x1150);
          *(undefined4 *)(param_1 + 0x2e8) = *(undefined4 *)(param_1 + 0x1158);
          *(undefined4 *)(param_1 + 0x2ec) = *(undefined4 *)(param_1 + 0x115c);
          *(undefined8 *)(param_1 + 0x2f0) = *(undefined8 *)(param_1 + 0x1160);
          *(undefined8 *)(param_1 + 0x2f8) = *(undefined8 *)(param_1 + 0x1168);
          *(undefined8 *)(param_1 + 0x317) = *(undefined8 *)(param_1 + 0x1187);
          *(undefined8 *)(param_1 + 0x300) = *(undefined8 *)(param_1 + 0x1170);
          *(undefined8 *)(param_1 + 0x308) = *(undefined8 *)(param_1 + 0x1178);
          *(undefined8 *)(param_1 + 0x310) = *(undefined8 *)(param_1 + 0x1180);
          FUN_038fd1e0(param_1 + 800);
          FUN_038fd2f0(param_1 + 800,param_1 + 0x1190);
          *(undefined8 *)(param_1 + 0x360) = *(undefined8 *)(param_1 + 0x11d0);
          *(undefined4 *)(param_1 + 0x368) = *(undefined4 *)(param_1 + 0x11d8);
          puVar1 = (uint *)(param_1 + 0x3a4);
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar8) {
              *puVar1 = *puVar1 | 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          FUN_01560750(lVar17 + 0x18,param_1 + 0x1140,*(undefined1 *)(lVar17 + 0xd6),
                       *(undefined2 *)(lVar17 + 0xd4));
        }
        else {
          puVar18 = (undefined8 *)(param_1 + 0x10 + (long)(int)uVar12 * 0xe8);
          puVar19 = (undefined4 *)*puVar18;
          if (puVar19 == (undefined4 *)0x0) {
            local_a0 = (&PTR_s_GBuffer_Albedo__04b6aff0)[(int)uVar12];
            uVar20 = *(undefined4 *)(param_1 + 0xbc0 + ((long)((ulong)uVar12 << 0x20) >> 0x18));
            local_a8 = &PTR_LAB_048f9770;
            lVar14 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
            if (lVar14 == 0) {
              local_7c = nn::os::GetCurrentCoreNumber();
            }
            else {
              local_7c = (int)lVar14 + -1;
            }
            puVar19 = (undefined4 *)
                      FUN_03948e10(lVar11,param_2,lVar11 + 0x10 + (long)local_7c * 0x290,&local_a8,
                                   uVar20,1,(int)fVar26,(int)fVar27,1,0,1,0,1,0,0,0);
            *puVar18 = puVar19;
          }
          lVar14 = param_1 + 0x10 + (long)(int)uVar12 * 0xe8;
          *(undefined4 *)(lVar14 + 8) = *puVar19;
          *(undefined4 *)(lVar14 + 0xc) = puVar19[1];
          *(undefined8 *)(lVar14 + 0x10) = *(undefined8 *)(puVar19 + 2);
          *(undefined8 *)(lVar14 + 0x18) = *(undefined8 *)(puVar19 + 4);
          *(undefined4 *)(lVar14 + 0x20) = puVar19[6];
          *(undefined4 *)(lVar14 + 0x24) = puVar19[7];
          *(undefined8 *)(lVar14 + 0x28) = *(undefined8 *)(puVar19 + 8);
          *(undefined8 *)(lVar14 + 0x30) = *(undefined8 *)(puVar19 + 10);
          uVar16 = *(undefined8 *)(puVar19 + 0xc);
          uVar4 = *(undefined8 *)(puVar19 + 0xe);
          uVar15 = *(undefined8 *)(puVar19 + 0x10);
          *(undefined8 *)(lVar14 + 0x4f) = *(undefined8 *)((long)puVar19 + 0x47);
          *(undefined8 *)(lVar14 + 0x40) = uVar4;
          *(undefined8 *)(lVar14 + 0x48) = uVar15;
          *(undefined8 *)(lVar14 + 0x38) = uVar16;
          FUN_038fd1e0(lVar14 + 0x58);
          FUN_038fd2f0(lVar14 + 0x58,puVar19 + 0x14);
          uVar20 = puVar19[0x26];
          *(undefined8 *)(lVar14 + 0x98) = *(undefined8 *)(puVar19 + 0x24);
          puVar1 = (uint *)(lVar14 + 0xdc);
          *(undefined4 *)(lVar14 + 0xa0) = uVar20;
          do {
            cVar7 = '\x01';
            bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar8) {
              *puVar1 = *puVar1 | 1;
              cVar7 = ExclusiveMonitorsStatus();
            }
          } while (cVar7 != '\0');
          FUN_01560750(lVar17 + 0x18,*puVar18,*(undefined1 *)(lVar17 + 0xd6),
                       *(undefined2 *)(lVar17 + 0xd4));
        }
        *(long *)(param_1 + 0x4c0 + (long)*(char *)(lVar17 + 0xf8) * 8) = lVar17 + 0x18;
        if ((long)*(char *)(lVar17 + 0xf9) != -1) {
          *(long *)(param_1 + 0x4c0 + (long)*(char *)(lVar17 + 0xf9) * 8) = lVar17 + 0x18;
        }
        if ((*(byte *)(lVar17 + 0xfa) & 1) != 0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,param_2);
          local_a0 = (undefined *)0x7f7fffff7f7fffff;
          local_98 = 0xff7fffffff7fffff;
          local_a8 = &PTR_LAB_04b65888;
          local_8c = 0x3f80000000000000;
          local_90 = DAT_05ae77d0;
          if (DAT_05ae77d0 < 6) {
            if ((1 << (ulong)(DAT_05ae77d0 & 0x1f) & 0x39U) == 0) {
              fVar23 = *(float *)(param_1 + 0x4ac);
              fVar21 = *(float *)(param_1 + 0x4a8);
            }
            else {
              fVar23 = *(float *)(param_1 + 0x4a8);
              fVar21 = *(float *)(param_1 + 0x4ac);
            }
            fVar24 = fVar23;
            if (fVar23 <= 0.0) {
              fVar24 = 0.0;
            }
            fVar25 = 0.0;
            if (fVar23 <= 0.0) {
              fVar25 = fVar23;
            }
            fVar22 = fVar21;
            fVar23 = 0.0;
            if (fVar21 <= 0.0) {
              fVar22 = 0.0;
              fVar23 = fVar21;
            }
            local_a0 = (undefined *)CONCAT44(fVar23,fVar25);
            local_98 = CONCAT44(fVar22,fVar24);
          }
          FUN_038e77e4(&local_a8,param_2,plVar2);
          local_98 = 0xff7fffffff7fffff;
          local_a8 = &PTR_LAB_04b65888;
          local_a0 = (undefined *)0x7f7fffff7f7fffff;
          local_8c = 0x3f80000000000000;
          local_90 = DAT_05ae77d0;
          if (DAT_05ae77d0 < 6) {
            if ((1 << (ulong)(DAT_05ae77d0 & 0x1f) & 0x39U) == 0) {
              fVar23 = *(float *)(param_1 + 0x4ac);
              fVar21 = *(float *)(param_1 + 0x4a8);
            }
            else {
              fVar23 = *(float *)(param_1 + 0x4a8);
              fVar21 = *(float *)(param_1 + 0x4ac);
            }
            fVar24 = fVar23;
            if (fVar23 <= 0.0) {
              fVar24 = 0.0;
            }
            fVar25 = 0.0;
            if (fVar23 <= 0.0) {
              fVar25 = fVar23;
            }
            fVar22 = fVar21;
            fVar23 = 0.0;
            if (fVar21 <= 0.0) {
              fVar22 = 0.0;
              fVar23 = fVar21;
            }
            local_a0 = (undefined *)CONCAT44(fVar23,fVar25);
            local_98 = CONCAT44(fVar22,fVar24);
          }
          FUN_039025b0(0x3f800000,plVar2,param_2,(long)*(char *)(lVar17 + 0xf8),1,lVar17 + 8,0,
                       &local_a8,1);
        }
      }
      uVar12 = uVar12 + 1;
    } while (uVar12 != 5);
    (**(code **)(*plVar2 + 0x38))(plVar2,param_2);
    local_98 = 0xff7fffffff7fffff;
    local_a8 = &PTR_LAB_04b65888;
    local_a0 = (undefined *)0x7f7fffff7f7fffff;
    local_8c = 0x3f80000000000000;
    local_90 = DAT_05ae77d0;
    if (DAT_05ae77d0 < 6) {
      if ((1 << (ulong)(DAT_05ae77d0 & 0x1f) & 0x39U) == 0) {
        fVar23 = *(float *)(param_1 + 0x4ac);
        fVar26 = *(float *)(param_1 + 0x4a8);
      }
      else {
        fVar23 = *(float *)(param_1 + 0x4a8);
        fVar26 = *(float *)(param_1 + 0x4ac);
      }
      fVar21 = fVar23;
      fVar27 = 0.0;
      if (fVar23 <= 0.0) {
        fVar21 = 0.0;
        fVar27 = fVar23;
      }
      fVar24 = fVar26;
      fVar23 = 0.0;
      if (fVar26 <= 0.0) {
        fVar24 = 0.0;
        fVar23 = fVar26;
      }
      local_a0 = (undefined *)CONCAT44(fVar23,fVar27);
      local_98 = CONCAT44(fVar24,fVar21);
    }
    FUN_038e77e4(&local_a8,param_2,plVar2);
  }
  return uVar5 != 0;
}

