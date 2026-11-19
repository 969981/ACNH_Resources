
void FUN_03b2df70(long param_1,long param_2,undefined8 param_3)

{
  ushort uVar1;
  uint uVar2;
  char cVar3;
  byte bVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  short sVar8;
  uint uVar9;
  float fVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined2 uVar13;
  uint *puVar14;
  bool bVar15;
  long lVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined *local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  uint local_1d8;
  undefined8 local_1d4;
  uint local_1c8;
  uint uStack_1c4;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  uint local_1b0;
  uint uStack_1ac;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined4 local_178 [2];
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_138;
  uint local_130;
  undefined4 local_f8;
  uint local_f4;
  byte local_f0;
  short local_ee;
  uint local_e8;
  uint local_e4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  
  if (*(char *)(param_1 + 0xd5) == '\0') {
    return;
  }
  lVar19 = *(long *)(param_2 + 0x1a0);
  if (lVar19 == 0) {
    return;
  }
  lVar21 = param_1 + 0x108;
  puVar14 = (uint *)FUN_03b2e5d0(param_1,param_2,param_1 + 0xd2,*(undefined8 *)(param_1 + 0xe0),
                                 lVar21,param_1 + 0x170,*(undefined8 *)(param_1 + 0xd8),param_3);
  puVar12 = PTR_DAT_04bc1010;
  if (puVar14 == (uint *)0x0) {
    return;
  }
  lVar16 = *(long *)(param_1 + 0x100);
  uVar5 = *(ushort *)(lVar16 + 0x98);
  cVar3 = *(char *)(lVar16 + 0x4d);
  if ((ulong)uVar5 - 0x2f < 0x2a) {
    if (0x34 < uVar5) {
      if (uVar5 != 0x37) {
        if (uVar5 != 0x35) goto LAB_03b2e0e0;
        goto LAB_03b2e0d0;
      }
LAB_03b2e10c:
      local_1c8 = *puVar14;
      uStack_1c4 = puVar14[1];
      local_198 = *(undefined8 *)(puVar14 + 0xc);
      uStack_190 = *(undefined8 *)(puVar14 + 0xe);
      local_1c0 = *(undefined8 *)(puVar14 + 2);
      uStack_1b8 = *(undefined8 *)(puVar14 + 4);
      local_1b0 = puVar14[6];
      uStack_1ac = puVar14[7];
      local_1a8 = *(undefined8 *)(puVar14 + 8);
      uStack_1a0 = *(undefined8 *)(puVar14 + 10);
      local_188 = *(undefined8 *)(puVar14 + 0x10);
      uStack_180 = *(undefined8 *)(puVar14 + 0x12);
      local_140 = 0;
      local_170 = 0;
      uStack_168 = 0;
      local_160 = 0;
      uStack_158 = 0;
      local_150 = 0;
      uStack_148 = 0;
      local_178[0] = 0xffffffff;
      FUN_038fd2f0(local_178,puVar14 + 0x14);
      local_138 = *(undefined8 *)(puVar14 + 0x24);
      local_130 = puVar14[0x26];
      uVar13 = uStack_180._6_2_;
      bVar4 = uStack_180._6_1_;
      if (cVar3 == '\x02') {
        uStack_180._0_6_ = CONCAT42(0x1010105,(undefined2)uStack_180);
        uStack_180 = CONCAT26(uVar13,(undefined6)uStack_180);
        if ((bVar4 >> 1 & 1) != 0) goto LAB_03b2e2fc;
LAB_03b2e198:
        bVar15 = false;
      }
      else {
        uStack_180._0_6_ = CONCAT42(0x1010502,(undefined2)uStack_180);
        uStack_180 = CONCAT26(uVar13,(undefined6)uStack_180);
        if ((bVar4 >> 1 & 1) == 0) goto LAB_03b2e198;
LAB_03b2e2fc:
        bVar15 = 0x11 < (local_130 & 0xffff) && (local_130 & 0xffff) - 0x59 < 0xffffffd6;
      }
      local_e8 = local_1c8;
      local_e4 = uStack_1c4;
      local_e0 = local_1c0;
      uStack_d8 = uStack_1b8;
      FUN_038fd3e0(local_178,&local_e8,&local_198,0,local_138,bVar15,0);
      FUN_0390af20(&local_1c8,*(undefined8 *)(lVar19 + 0x20),*(undefined8 *)(param_1 + 0x100),0,0,0,
                   0);
      goto LAB_03b2e458;
    }
    if (uVar5 == 1) {
LAB_03b2e0d0:
      if ((uVar5 == 10) || (cVar3 == '\x02')) goto LAB_03b2e10c;
    }
    else if (uVar5 == 10) goto LAB_03b2e10c;
LAB_03b2e0e0:
    FUN_0390af20(puVar14,*(undefined8 *)(lVar19 + 0x20),lVar16,0,0,0,0);
    lVar21 = *(long *)(param_1 + 0xe0);
    if (lVar21 != 0) goto LAB_03b2e464;
LAB_03b2e4a8:
    FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510,puVar14);
  }
  else {
    uVar6 = *(ushort *)(lVar16 + 0x30);
    uVar7 = *(ushort *)(lVar16 + 0x32);
    if (uVar6 < 2) {
      uVar6 = 1;
    }
    uVar1 = uVar7;
    if (*(short *)(lVar16 + 0x3a) != 3) {
      uVar1 = 1;
    }
    if (uVar1 <= uVar7) {
      uVar1 = uVar7;
    }
    FUN_01560750(param_1 + 0x170,lVar16,*(undefined1 *)(param_1 + 0x22e),
                 *(undefined2 *)(param_1 + 0x22c));
    *(undefined8 *)(param_1 + 0x118) = 0;
    *(float *)(param_1 + 0x120) = (float)uVar6;
    *(float *)(param_1 + 0x124) = (float)uVar1;
    *(float *)(param_1 + 0x110) = (float)uVar6;
    *(float *)(param_1 + 0x114) = (float)uVar1;
    (**(code **)(*(long *)(param_1 + 0x108) + 0x38))(lVar21,*(undefined8 *)(lVar19 + 0x20));
    FUN_038e4cec(&local_e8);
    local_e8 = local_e8 & 0xffffff00;
    local_e4 = local_e4 & 0xfffffffe;
    FUN_038e4d90(&local_e8,*(undefined8 *)(lVar19 + 0x20));
    FUN_0390d120(&local_1c8,puVar14);
    if (uVar5 < 0x35) {
      if (uVar5 == 1) {
LAB_03b2e1b0:
        if (cVar3 == '\x02') {
          local_f8 = 0x1010105;
          local_f0 = local_f0 | 2;
          do {
            cVar3 = '\x01';
            bVar15 = (bool)ExclusiveMonitorPass(&local_f4,0x10);
            if (bVar15) {
              cVar3 = ExclusiveMonitorsStatus();
              local_f4 = local_f4 | 1;
            }
          } while (cVar3 != '\0');
          goto LAB_03b2e230;
        }
      }
      if (uVar5 == 10) {
LAB_03b2e1fc:
        local_f8 = 0x1010502;
        local_f0 = local_f0 | 2;
        do {
          cVar3 = '\x01';
          bVar15 = (bool)ExclusiveMonitorPass(&local_f4,0x10);
          if (bVar15) {
            cVar3 = ExclusiveMonitorsStatus();
            local_f4 = local_f4 | 1;
          }
        } while (cVar3 != '\0');
      }
    }
    else {
      if (uVar5 == 0x37) goto LAB_03b2e1fc;
      if (uVar5 == 0x35) goto LAB_03b2e1b0;
    }
LAB_03b2e230:
    uVar5 = (ushort)puVar14[0xc];
    if (uVar5 < 2) {
      uVar5 = 1;
    }
    lVar16 = *(long *)(param_1 + 0x100);
    uVar6 = *(ushort *)(lVar16 + 0x30);
    if (uVar6 < 2) {
      uVar6 = 1;
    }
    if (uVar5 == uVar6) {
      uVar6 = *(ushort *)((long)puVar14 + 0x32);
      uVar5 = uVar6;
      if (*(short *)((long)puVar14 + 0x3a) != 3) {
        uVar5 = 1;
      }
      if (uVar5 <= uVar6) {
        uVar5 = uVar6;
      }
      uVar7 = *(ushort *)(lVar16 + 0x32);
      uVar6 = uVar7;
      if (*(short *)(lVar16 + 0x3a) != 3) {
        uVar6 = 1;
      }
      if (uVar6 <= uVar7) {
        uVar6 = uVar7;
      }
      if (uVar5 != uVar6) goto LAB_03b2e28c;
    }
    else {
LAB_03b2e28c:
      local_1e0 = 0xff7fffffff7fffff;
      local_1f0 = PTR_DAT_04bd0f08 + 0x10;
      local_1e8 = 0x7f7fffff7f7fffff;
      local_1d8 = *(uint *)PTR_DAT_04bd0ea8;
      local_1d4 = 0x3f80000000000000;
      if (local_1d8 < 6) {
        if ((1 << (ulong)(local_1d8 & 0x1f) & 0x39U) == 0) {
          fVar24 = *(float *)(param_1 + 0x114);
          fVar25 = *(float *)(param_1 + 0x110);
        }
        else {
          fVar24 = *(float *)(param_1 + 0x110);
          fVar25 = *(float *)(param_1 + 0x114);
        }
        fVar27 = fVar24;
        fVar10 = 0.0;
        if (fVar24 <= 0.0) {
          fVar27 = 0.0;
          fVar10 = fVar24;
        }
        fVar26 = fVar25;
        fVar24 = 0.0;
        if (fVar25 <= 0.0) {
          fVar26 = 0.0;
          fVar24 = fVar25;
        }
        local_1e8 = CONCAT44(fVar24,fVar10);
        local_1e0 = CONCAT44(fVar26,fVar27);
      }
      FUN_038e77e4(&local_1f0,*(undefined8 *)(lVar19 + 0x20),lVar21);
    }
    uVar22 = *(undefined8 *)(lVar19 + 0x20);
    uVar23 = *(undefined8 *)
              (*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x28) + 8) + 0x28);
    FUN_03907810(uVar23,uVar22);
    FUN_0394a420(uVar22,uVar23,&local_1c8);
    if (local_ee != -1) {
      lVar21 = *(long *)puVar12;
      nn::os::LockMutex((MutexType *)(lVar21 + 0x580));
      uVar2 = (int)local_ee - (uint)*(ushort *)(lVar21 + 0x5c0);
      if (*(uint *)(lVar21 + 0x5a0) <= uVar2) {
        uVar2 = 0;
      }
      lVar16 = *(long *)(lVar21 + 0x5a8) + (long)(int)uVar2 * 0x80;
      sVar8 = *(short *)(lVar16 + 0x76) + -1;
      *(short *)(lVar16 + 0x76) = sVar8;
      if (sVar8 == 0) {
        *(short *)(lVar21 + 0x5c4) = *(short *)(lVar21 + 0x5c4) + -1;
      }
      nn::os::UnlockMutex((MutexType *)(lVar21 + 0x580));
      local_ee = -1;
    }
LAB_03b2e458:
    FUN_038fd0e0(local_178);
    lVar21 = *(long *)(param_1 + 0xe0);
    if (lVar21 == 0) goto LAB_03b2e4a8;
LAB_03b2e464:
    puVar11 = PTR_DAT_04bbd510;
    if (*(long *)(lVar21 + 0x570) == 0) goto LAB_03b2e4a8;
    if ((*(byte *)(lVar21 + 0x7b8) & 1) == 0) {
      FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510);
    }
    *(undefined8 *)(lVar21 + 0x570) = 0;
    lVar20 = *(long *)puVar11;
    lVar16 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
    if (lVar16 == 0) {
      local_1c8 = nn::os::GetCurrentCoreNumber();
    }
    else {
      local_1c8 = (int)lVar16 - 1;
    }
    *(byte *)(lVar21 + 0x7b8) =
         *(byte *)(lVar21 + 0x7b8) & 0xfe |
         *(byte *)(lVar20 + (long)(int)local_1c8 * 0x290 + 0x298) & 1;
  }
  uVar2 = *(uint *)(param_1 + 0x1c8);
  if (uVar2 != 0xffffffff) {
    lVar21 = *(long *)puVar12;
    lVar16 = *(long *)(lVar19 + 0x20);
    if ((*(uint *)(lVar21 + 0x5c8) >> 3 & 1) == 0) {
      uVar9 = uVar2 - *(ushort *)(lVar21 + 0x3da);
      if (*(uint *)(lVar21 + 0x368) <= uVar9) {
        uVar9 = 0;
      }
      if ((*(uint *)(*(long *)(lVar21 + 0x370) + (long)(int)uVar9 * 0x20 + 4) >> 2 & 1) == 0) {
        *(ulong *)(lVar16 + 0x100) = *(ulong *)(lVar16 + 0x100) | 1L << ((ulong)uVar2 & 0x3f);
        goto LAB_03b2e57c;
      }
    }
    if ((*(uint *)(lVar21 + 0x5c8) >> 5 & 1) == 0) {
      uVar17 = 0x112;
      uVar18 = 0x12;
    }
    else {
      uVar17 = 0x111;
      uVar18 = 0x11;
    }
    if ((*(uint *)(lVar21 + 800) & 2) != 0) {
      uVar18 = uVar17;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(lVar16 + 0xb8),uVar18);
    *(undefined8 *)(lVar16 + 0x100) = 0;
  }
LAB_03b2e57c:
  FUN_03b2c1e4(lVar19);
  FUN_00365038(param_2);
  bVar4 = *(byte *)(param_1 + 0xd2);
  *(undefined1 *)(param_1 + 0xd5) = 0;
  *(byte *)(param_1 + 0xd2) = bVar4 | 1;
  *(byte *)(param_1 + 0xd3) = bVar4 >> 6 & 1;
  return;
}

