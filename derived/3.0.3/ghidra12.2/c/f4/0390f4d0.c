
void FUN_0390f4d0(long param_1,undefined *param_2)

{
  long lVar1;
  uint *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint *puVar7;
  ushort uVar8;
  ushort uVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  byte bVar13;
  ushort uVar14;
  uint uVar15;
  char cVar16;
  float fVar17;
  bool bVar18;
  undefined *puVar19;
  undefined *puVar20;
  bool bVar21;
  int iVar22;
  undefined8 *puVar23;
  long lVar24;
  undefined4 *puVar25;
  undefined8 uVar26;
  undefined4 *puVar27;
  undefined4 *puVar28;
  uint uVar29;
  long lVar30;
  undefined4 uVar31;
  long lVar32;
  ulong uVar33;
  long lVar34;
  undefined8 uVar35;
  long *plVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  ulong uVar40;
  long lVar41;
  undefined8 uVar42;
  long lVar43;
  long lVar44;
  uint uVar45;
  long lVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined4 uVar51;
  undefined4 local_244;
  long local_218;
  char local_210;
  uint local_204;
  uint local_200;
  undefined1 local_19f;
  undefined *local_190;
  undefined8 local_188;
  undefined8 local_180;
  uint local_178;
  undefined8 local_174;
  undefined *local_168;
  char *local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  uint local_110 [2];
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  char *local_d0;
  undefined4 local_c8;
  uint local_b0;
  uint local_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  
  lVar32 = *(long *)(param_1 + 0x160);
  if (*(long *)(lVar32 + 0x158) == 0 && *(long *)(lVar32 + 0x150) == 0) {
    return;
  }
  lVar37 = *(long *)(*(long *)(param_1 + 0x150) + 0x10);
  local_210 = '\x01';
  lVar30 = *(long *)(param_1 + 0x1a0);
  puVar23 = *(undefined8 **)(lVar30 + 0x448);
  if (puVar23 == (undefined8 *)0x0) {
    lVar41 = *(long *)PTR_DAT_04bbd510;
  }
  else {
    local_218 = lVar37;
    (**(code **)*puVar23)(puVar23,param_2,&local_218);
    lVar41 = *(long *)PTR_DAT_04bbd510;
    if (local_210 == '\0') goto LAB_039115b0;
    lVar32 = *(long *)(param_1 + 0x160);
    lVar30 = *(long *)(param_1 + 0x1a0);
  }
  lVar32 = *(long *)(lVar32 + 0x10);
  if (((ulong)*(ushort *)(lVar32 + 0x98) - 0x2f < 0x2a) ||
     ((*(byte *)(lVar30 + 0x453) >> 6 & 1) == 0)) {
    uVar51 = *(undefined4 *)(lVar30 + 0x2b8);
    local_168 = PTR_DAT_04bb2020 + 0x10;
    uVar14 = *(ushort *)(lVar37 + 0x30);
    local_160 = "cubemap_filter";
    if (uVar14 < 2) {
      uVar14 = 1;
    }
    lVar32 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
    if (lVar32 == 0) {
      local_204 = nn::os::GetCurrentCoreNumber();
    }
    else {
      local_204 = (int)lVar32 - 1;
    }
    bVar21 = true;
    lVar32 = FUN_03948e10(lVar41,param_2,lVar41 + (long)(int)local_204 * 0x290 + 0x10,&local_168,
                          uVar51,8,uVar14,uVar14,0xf,0,1,0,1,0,0,0);
    bVar18 = true;
  }
  else {
    bVar18 = false;
    bVar21 = *(long *)(param_1 + 0x170) != 0;
  }
  (**(code **)(**(long **)(param_1 + 0x158) + 0x28))(*(long **)(param_1 + 0x158),lVar32);
  lVar30 = *(long *)(param_1 + 0x160);
  if ((*(long *)(param_1 + 0x170) == 0) &&
     ((*(byte *)(*(long *)(param_1 + 0x1a0) + 0x452) & 1) != 0)) {
    uVar51 = *(undefined4 *)(lVar30 + 0x100);
    lVar37 = *(long *)(lVar30 + 0x10);
  }
  else {
    uVar51 = 0;
    lVar37 = *(long *)(lVar30 + 0x10);
  }
  if (bVar21) {
    if (*(uint *)(lVar30 + 0x25d0) == 0) {
      fVar47 = 1.0;
    }
    else {
      fVar47 = (float)*(uint *)(lVar30 + 0x25d0) * 0.3 + 0.7;
    }
    FUN_0391e1b0(fVar47,*(undefined8 *)(*(long *)(param_1 + 0x158) + 0x10),param_2,
                 *(undefined8 *)(*(long *)(param_1 + 0x150) + 0x10),0,0,0,0);
  }
  puVar23 = *(undefined8 **)(param_1 + 0x1a8);
  if (puVar23 == (undefined8 *)0x0) {
    FUN_0391e3b0(0x3f800000,*(undefined8 *)(*(long *)(param_1 + 0x158) + 0x10),param_2,uVar51,1,
                 0xffffffff,0,1);
  }
  else {
    local_160 = *(char **)(*(long *)(param_1 + 0x158) + 0x10);
    local_158 = CONCAT44(local_158._4_4_,uVar51);
    local_168 = param_2;
    (**(code **)*puVar23)(puVar23,&local_168);
    (**(code **)(**(long **)(param_1 + 0x1a8) + 8))(*(long **)(param_1 + 0x1a8),&local_168);
  }
  uVar29 = *(uint *)(*(long *)(param_1 + 0x1a0) + 0x450);
  if ((uVar29 >> 0x1e & 1) == 0) {
    local_244 = 0;
    lVar10 = *(long *)(param_1 + 0x158);
    lVar11 = *(long *)(param_1 + 0x160);
    uVar33 = (ulong)*(ushort *)(lVar37 + 0x98) - 0x2f;
    lVar30 = lVar10;
    if (0x29 < uVar33) {
      lVar30 = lVar11;
    }
    lVar30 = *(long *)(lVar30 + 0x10);
    if (((uVar29 >> 0x10 & 1) != 0) && (0x29 < uVar33)) {
      local_244 = *(undefined4 *)(lVar11 + 0x100);
    }
    FUN_038e4cec(&local_204);
    local_19f = 0;
    local_204 = local_204 & 0xffff0000;
    local_200 = local_200 & 0xfffffffe;
    lVar34 = *(long *)(lVar10 + 0x10);
    lVar1 = lVar10 + 0x108;
    if (*(int *)(lVar11 + 0x2608) != 0) {
      lVar39 = *(long *)PTR_DAT_04bbd510;
      local_168 = PTR_DAT_04bb2020 + 0x10;
      local_160 = "temp_elem";
      uVar14 = *(ushort *)(lVar34 + 0x30);
      if (uVar14 < 2) {
        uVar14 = 1;
      }
      lVar24 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
      if (lVar24 == 0) {
        iVar22 = nn::os::GetCurrentCoreNumber();
      }
      else {
        iVar22 = (int)lVar24 + -1;
      }
      local_190 = (undefined *)CONCAT44(local_190._4_4_,iVar22);
      puVar25 = (undefined4 *)
                FUN_03948e10(lVar39,param_2,lVar39 + (long)iVar22 * 0x290 + 0x10,&local_168,9,4,
                             uVar14,uVar14,1,0,6,0,1,0,0,0);
      *(undefined4 *)(lVar10 + 0x2c8) = *puVar25;
      *(undefined4 *)(lVar10 + 0x2cc) = puVar25[1];
      *(undefined8 *)(lVar10 + 0x2d0) = *(undefined8 *)(puVar25 + 2);
      *(undefined8 *)(lVar10 + 0x2d8) = *(undefined8 *)(puVar25 + 4);
      *(undefined4 *)(lVar10 + 0x2e0) = puVar25[6];
      *(undefined4 *)(lVar10 + 0x2e4) = puVar25[7];
      *(undefined8 *)(lVar10 + 0x2e8) = *(undefined8 *)(puVar25 + 8);
      *(undefined8 *)(lVar10 + 0x2f0) = *(undefined8 *)(puVar25 + 10);
      uVar42 = *(undefined8 *)(puVar25 + 0xc);
      uVar26 = *(undefined8 *)(puVar25 + 0xe);
      uVar35 = *(undefined8 *)(puVar25 + 0x10);
      *(undefined8 *)(lVar10 + 0x30f) = *(undefined8 *)((long)puVar25 + 0x47);
      *(undefined8 *)(lVar10 + 0x308) = uVar35;
      *(undefined8 *)(lVar10 + 0x300) = uVar26;
      *(undefined8 *)(lVar10 + 0x2f8) = uVar42;
      FUN_038fd1e0(lVar10 + 0x318);
      FUN_038fd2f0(lVar10 + 0x318,puVar25 + 0x14);
      uVar51 = puVar25[0x26];
      *(undefined8 *)(lVar10 + 0x358) = *(undefined8 *)(puVar25 + 0x24);
      puVar2 = (uint *)(lVar10 + 0x39c);
      *(undefined4 *)(lVar10 + 0x360) = uVar51;
      do {
        cVar16 = '\x01';
        bVar21 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar21) {
          *puVar2 = *puVar2 | 1;
          cVar16 = ExclusiveMonitorsStatus();
        }
      } while (cVar16 != '\0');
      FUN_038e4d90(&local_204,param_2);
      lVar39 = *(long *)(lVar10 + 0x10);
      uVar14 = *(ushort *)(lVar34 + 0x30);
      if (uVar14 < 2) {
        uVar14 = 1;
      }
      local_158 = 0;
      local_160 = (char *)0x0;
      lVar43 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x340) +
                                  8) + 0x18);
      local_118 = 0;
      local_120 = 0;
      local_128 = 0;
      local_130 = 0;
      local_138 = 0;
      local_140 = 0;
      local_148 = 0;
      local_150 = 0;
      local_108 = 0;
      local_100 = 0;
      local_f8 = 0;
      local_f0 = 0;
      local_e8 = 0;
      local_e0 = 0;
      local_d8 = 0;
      local_110[0] = 0xffffffff;
      local_d0 = "agl::TextureData";
      local_c8 = 0x10000;
      local_b0 = 0xff;
      local_ac = 0;
      local_90 = 0;
      local_98 = 0;
      local_a0 = 0;
      local_168 = PTR_DAT_04bd1198 + 0x10;
      local_a8 = 0x80000000000;
      FUN_01560750(&local_168,puVar25,0,0);
      uVar29 = 0;
      puVar2 = (uint *)(lVar43 + 0x14);
      puVar3 = PTR_DAT_04bd0f08 + 0x10;
      lVar24 = *(long *)PTR_DAT_04bb29d0 / 1000000;
      do {
        if (uVar29 != (local_ac & 0xffff)) {
          do {
            cVar16 = '\x01';
            bVar21 = (bool)ExclusiveMonitorPass(&local_b0,0x10);
            if (bVar21) {
              cVar16 = ExclusiveMonitorsStatus();
              local_b0 = local_b0 | 2;
            }
          } while (cVar16 != '\0');
          local_ac = CONCAT22(local_ac._2_2_,(short)uVar29);
        }
        *(undefined8 *)(lVar39 + 0x350) = 0;
        *(undefined8 *)(lVar39 + 0x358) = 0;
        uVar8 = (ushort)local_130;
        if ((ushort)local_130 < 2) {
          uVar8 = 1;
        }
        *(undefined8 *)(lVar39 + 0x360) = 0;
        *(undefined8 *)(lVar39 + 0x368) = 0;
        *(undefined8 *)(lVar39 + 0x370) = 0;
        *(undefined8 *)(lVar39 + 0x378) = 0;
        *(undefined8 *)(lVar39 + 0x380) = 0;
        *(undefined8 *)(lVar39 + 0x388) = 0;
        uVar9 = local_130._2_2_;
        if (local_128._2_2_ != 3) {
          uVar9 = 1;
        }
        if (uVar9 <= local_130._2_2_) {
          uVar9 = local_130._2_2_;
        }
        *(undefined ***)(lVar39 + 0x348) = &local_168;
        *(undefined8 *)(lVar39 + 0x338) = 0;
        *(float *)(lVar39 + 0x340) = (float)uVar8;
        *(float *)(lVar39 + 0x330) = (float)uVar8;
        *(float *)(lVar39 + 0x344) = (float)uVar9;
        *(float *)(lVar39 + 0x334) = (float)uVar9;
        (**(code **)(*(long *)(lVar39 + 0x328) + 0x38))(lVar39 + 0x328,param_2);
        local_188 = (undefined1 *)0x7f7fffff7f7fffff;
        local_180 = 0xff7fffffff7fffff;
        local_174 = 0x3f80000000000000;
        local_178 = *(uint *)PTR_DAT_04bd0ea8;
        if (local_178 < 6) {
          if ((1 << (ulong)(local_178 & 0x1f) & 0x39U) == 0) {
            fVar47 = *(float *)(lVar39 + 0x334);
            fVar49 = *(float *)(lVar39 + 0x330);
          }
          else {
            fVar47 = *(float *)(lVar39 + 0x330);
            fVar49 = *(float *)(lVar39 + 0x334);
          }
          fVar48 = fVar47;
          fVar17 = 0.0;
          if (fVar47 <= 0.0) {
            fVar48 = 0.0;
            fVar17 = fVar47;
          }
          fVar50 = fVar49;
          fVar47 = 0.0;
          if (fVar49 <= 0.0) {
            fVar50 = 0.0;
            fVar47 = fVar49;
          }
          local_188 = (undefined1 *)CONCAT44(fVar47,fVar17);
          local_180 = CONCAT44(fVar50,fVar48);
        }
        local_190 = puVar3;
        FUN_038e77e4(&local_190,param_2,lVar39 + 0x328);
        FUN_03907810(lVar43,param_2);
        do {
          uVar45 = *puVar2;
          cVar16 = '\x01';
          bVar21 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar21) {
            *puVar2 = uVar45 | 0x80000000;
            cVar16 = ExclusiveMonitorsStatus();
          }
        } while (cVar16 != '\0');
        if ((uVar45 & 0x7fffffff) != 0) {
          if ((int)uVar45 < 0) {
            while ((int)*puVar2 < 0) {
              nn::os::ConvertToTimeSpan(lVar24);
              nn::os::SleepThread();
            }
          }
          else {
            FUN_03907b80(lVar43);
          }
        }
        do {
          cVar16 = '\x01';
          bVar21 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar21) {
            *puVar2 = 0;
            cVar16 = ExclusiveMonitorsStatus();
          }
        } while (cVar16 != '\0');
        FUN_0390d290(lVar34,param_2,*(undefined8 *)(lVar43 + 0x68),0xffffffff,0);
        do {
          uVar45 = *puVar2;
          cVar16 = '\x01';
          bVar21 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar21) {
            *puVar2 = uVar45 | 0x80000000;
            cVar16 = ExclusiveMonitorsStatus();
          }
        } while (cVar16 != '\0');
        if ((uVar45 & 0x7fffffff) != 0) {
          if ((int)uVar45 < 0) {
            while ((int)*puVar2 < 0) {
              nn::os::ConvertToTimeSpan(lVar24);
              nn::os::SleepThread();
            }
          }
          else {
            FUN_03907b80(lVar43);
          }
        }
        do {
          cVar16 = '\x01';
          bVar21 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar21) {
            *puVar2 = 0;
            cVar16 = ExclusiveMonitorsStatus();
          }
        } while (cVar16 != '\0');
        local_190 = (undefined *)((ulong)local_190 & 0xffffffff00000000);
        if (**(int **)(lVar43 + 0x38) != -1) {
          (**(code **)PTR_DAT_04bcf2e0)
                    (*(undefined8 *)(param_2 + 0xb8),
                     *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                     *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),
                     (long)**(int **)(lVar43 + 0x38),4,&local_190);
        }
        do {
          uVar45 = *puVar2;
          cVar16 = '\x01';
          bVar21 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar21) {
            *puVar2 = uVar45 | 0x80000000;
            cVar16 = ExclusiveMonitorsStatus();
          }
        } while (cVar16 != '\0');
        if ((uVar45 & 0x7fffffff) != 0) {
          if ((int)uVar45 < 0) {
            while ((int)*puVar2 < 0) {
              nn::os::ConvertToTimeSpan(lVar24);
              nn::os::SleepThread();
            }
          }
          else {
            FUN_03907b80(lVar43);
          }
        }
        do {
          cVar16 = '\x01';
          bVar21 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar21) {
            *puVar2 = 0;
            cVar16 = ExclusiveMonitorsStatus();
          }
        } while (cVar16 != '\0');
        local_190 = (undefined *)CONCAT44(local_190._4_4_,uVar29);
        lVar38 = 0x30;
        if (*(uint *)(lVar43 + 0x30) < 3) {
          lVar38 = 0;
        }
        iVar22 = *(int *)(*(long *)(lVar43 + 0x38) + lVar38);
        if (iVar22 != -1) {
          (**(code **)PTR_DAT_04bcf2e0)
                    (*(undefined8 *)(param_2 + 0xb8),
                     *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                     *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar22,4,&local_190);
        }
        do {
          uVar45 = *puVar2;
          cVar16 = '\x01';
          bVar21 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar21) {
            *puVar2 = uVar45 | 0x80000000;
            cVar16 = ExclusiveMonitorsStatus();
          }
        } while (cVar16 != '\0');
        if ((uVar45 & 0x7fffffff) != 0) {
          if ((int)uVar45 < 0) {
            while ((int)*puVar2 < 0) {
              nn::os::ConvertToTimeSpan(lVar24);
              nn::os::SleepThread();
            }
          }
          else {
            FUN_03907b80(lVar43);
          }
        }
        do {
          cVar16 = '\x01';
          bVar21 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar21) {
            *puVar2 = 0;
            cVar16 = ExclusiveMonitorsStatus();
          }
        } while (cVar16 != '\0');
        local_190 = (undefined *)((ulong)local_190 & 0xffffffff00000000);
        iVar22 = *(int *)(*(long *)(lVar43 + 0x38) + (ulong)(1 < *(uint *)(lVar43 + 0x30)) * 0x18);
        if (iVar22 != -1) {
          (**(code **)PTR_DAT_04bcf2e0)
                    (*(undefined8 *)(param_2 + 0xb8),
                     *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                     *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar22,4,&local_190);
        }
        do {
          uVar45 = *puVar2;
          cVar16 = '\x01';
          bVar21 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar21) {
            *puVar2 = uVar45 | 0x80000000;
            cVar16 = ExclusiveMonitorsStatus();
          }
        } while (cVar16 != '\0');
        if ((uVar45 & 0x7fffffff) != 0) {
          if ((int)uVar45 < 0) {
            while ((int)*puVar2 < 0) {
              nn::os::ConvertToTimeSpan(lVar24);
              nn::os::SleepThread();
            }
          }
          else {
            FUN_03907b80(lVar43);
          }
        }
        do {
          cVar16 = '\x01';
          bVar21 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar21) {
            *puVar2 = 0;
            cVar16 = ExclusiveMonitorsStatus();
          }
        } while (cVar16 != '\0');
        local_190 = (undefined *)CONCAT44(local_190._4_4_,(float)uVar14);
        lVar38 = 0x60;
        if (*(uint *)(lVar43 + 0x30) < 5) {
          lVar38 = 0;
        }
        iVar22 = *(int *)(*(long *)(lVar43 + 0x38) + lVar38);
        if (iVar22 != -1) {
          (**(code **)PTR_DAT_04bcf2e0)
                    (*(undefined8 *)(param_2 + 0xb8),
                     *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                     *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar22,4,&local_190);
        }
        uVar42 = *(undefined8 *)(param_2 + 0xb8);
        lVar38 = *(long *)PTR_DAT_04bbd7e0;
        (**(code **)PTR_DAT_04bcf1a8)(uVar42,0x10,lVar38 + 0xe44);
        (**(code **)PTR_DAT_04bcf1b0)(uVar42,0x10,lVar38 + 0xe88);
        iVar22 = *(int *)(lVar38 + 0xe30);
        if (iVar22 != 0) {
          lVar38 = *(long *)(lVar38 + 0xe38);
          uVar33 = 0;
          uVar40 = 0;
          do {
            lVar44 = *(long *)(lVar38 + (-(uVar40 >> 0x1f) & 0xfffffff800000000 | uVar40 << 3));
            if (lVar44 != 0) {
              uVar26 = (**(code **)PTR_DAT_04bbd560)(lVar44 + 8);
              (**(code **)PTR_DAT_04bcf1e8)
                        (uVar42,uVar33 & 0xffffffff,uVar26,*(undefined4 *)(lVar44 + 0x118));
            }
            uVar33 = uVar40 + 1;
            uVar40 = uVar33 & 0xffffffff;
          } while (iVar22 != (int)uVar33);
        }
        lVar38 = *(long *)PTR_DAT_04bbd7e8;
        iVar22 = *(int *)(lVar38 + 0x1f8);
        if (iVar22 != 0) {
          uVar51 = *(undefined4 *)(lVar38 + 0x1dc);
          uVar26 = *(undefined8 *)(param_2 + 0xb8);
          uVar42 = (**(code **)PTR_DAT_04bbd560)(lVar38 + 0x200);
          (**(code **)PTR_DAT_04bbd568)(uVar26,uVar51,*(undefined4 *)(lVar38 + 0x1d8),iVar22,uVar42)
          ;
        }
        if (local_110[0] != 0xffffffff) {
          lVar38 = *(long *)PTR_DAT_04bc1010;
          if ((*(uint *)(lVar38 + 0x5c8) >> 3 & 1) == 0) {
            uVar45 = local_110[0] - *(ushort *)(lVar38 + 0x3da);
            if (*(uint *)(lVar38 + 0x368) <= uVar45) {
              uVar45 = 0;
            }
            if ((*(uint *)(*(long *)(lVar38 + 0x370) + (long)(int)uVar45 * 0x20 + 4) >> 2 & 1) != 0)
            goto LAB_039100a0;
            uVar33 = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)local_110[0] & 0x3f);
          }
          else {
LAB_039100a0:
            if ((*(uint *)(lVar38 + 0x5c8) >> 5 & 1) == 0) {
              uVar31 = 0x112;
              uVar51 = 0x12;
            }
            else {
              uVar31 = 0x111;
              uVar51 = 0x11;
            }
            if ((*(uint *)(lVar38 + 800) & 2) != 0) {
              uVar51 = uVar31;
            }
            (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar51);
            uVar33 = 0;
          }
          *(ulong *)(param_2 + 0x100) = uVar33;
        }
        uVar29 = uVar29 + 1;
        *(undefined8 *)(lVar39 + 0x380) = 0;
        *(undefined8 *)(lVar39 + 0x388) = 0;
        *(undefined8 *)(lVar39 + 0x348) = 0;
        *(undefined8 *)(lVar39 + 0x370) = 0;
        *(undefined8 *)(lVar39 + 0x378) = 0;
        *(undefined8 *)(lVar39 + 0x360) = 0;
        *(undefined8 *)(lVar39 + 0x368) = 0;
        *(undefined8 *)(lVar39 + 0x350) = 0;
        *(undefined8 *)(lVar39 + 0x358) = 0;
      } while (uVar29 != 6);
      local_168 = PTR_DAT_04bbd508 + 0x10;
      FUN_038fd0e0(local_110);
      lVar24 = *(long *)(lVar10 + 0x10);
      lVar39 = lVar24 + 0x328;
      uVar29 = (uint)*(ushort *)(lVar10 + 0x2f8);
      if (*(ushort *)(lVar10 + 0x2f8) < 2) {
        uVar29 = 1;
      }
      uVar45 = uVar29 + 3 >> 2;
      lVar43 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x348) +
                                  8) + 0x18);
      puVar27 = (undefined4 *)(lVar11 + 0x18);
      if (uVar45 != 1) {
        lVar44 = *(long *)PTR_DAT_04bbd510;
        local_168 = PTR_DAT_04bb2020 + 0x10;
        local_160 = "cubemap_max_conv";
        lVar38 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
        if (lVar38 == 0) {
          iVar22 = nn::os::GetCurrentCoreNumber();
        }
        else {
          iVar22 = (int)lVar38 + -1;
        }
        local_190 = (undefined *)CONCAT44(local_190._4_4_,iVar22);
        puVar27 = (undefined4 *)
                  FUN_03948e10(lVar44,param_2,lVar44 + (long)iVar22 * 0x290 + 0x10,&local_168,9,1,
                               uVar45,uVar45,1,0,1,0,1,0,0,0);
      }
      local_118 = 0;
      local_110[0] = 0xffffffff;
      local_d0 = "agl::TextureData";
      local_c8 = 0x10000;
      local_120 = 0;
      local_128 = 0;
      local_130 = 0;
      local_138 = 0;
      local_140 = 0;
      local_148 = 0;
      local_150 = 0;
      local_158 = 0;
      local_160 = (char *)0x0;
      local_108 = 0;
      local_100 = 0;
      local_f8 = 0;
      local_f0 = 0;
      local_e8 = 0;
      local_e0 = 0;
      local_d8 = 0;
      local_b0 = 0xff;
      local_ac = 0;
      local_168 = PTR_DAT_04bd1198 + 0x10;
      local_a8 = 0x80000000000;
      local_a0 = 0;
      local_98 = 0;
      local_90 = 0;
      FUN_01560750(&local_168,puVar27,0,0);
      *(undefined8 *)(lVar24 + 0x338) = 0;
      *(undefined8 *)(lVar24 + 0x350) = 0;
      *(undefined8 *)(lVar24 + 0x358) = 0;
      *(undefined8 *)(lVar24 + 0x360) = 0;
      *(undefined8 *)(lVar24 + 0x368) = 0;
      uVar14 = (ushort)local_130;
      if ((ushort)local_130 < 2) {
        uVar14 = 1;
      }
      *(undefined8 *)(lVar24 + 0x370) = 0;
      *(undefined8 *)(lVar24 + 0x378) = 0;
      *(undefined8 *)(lVar24 + 0x380) = 0;
      *(undefined8 *)(lVar24 + 0x388) = 0;
      *(undefined ***)(lVar24 + 0x348) = &local_168;
      uVar8 = local_130._2_2_;
      if (local_128._2_2_ != 3) {
        uVar8 = 1;
      }
      if (uVar8 <= local_130._2_2_) {
        uVar8 = local_130._2_2_;
      }
      *(float *)(lVar24 + 0x340) = (float)uVar14;
      *(float *)(lVar24 + 0x330) = (float)uVar14;
      *(float *)(lVar24 + 0x344) = (float)uVar8;
      *(float *)(lVar24 + 0x334) = (float)uVar8;
      (**(code **)(*(long *)(lVar24 + 0x328) + 0x38))(lVar39,param_2);
      local_180 = 0xff7fffffff7fffff;
      local_190 = PTR_DAT_04bd0f08 + 0x10;
      local_188 = (undefined1 *)0x7f7fffff7f7fffff;
      local_174 = 0x3f80000000000000;
      local_178 = *(uint *)PTR_DAT_04bd0ea8;
      if (local_178 < 6) {
        if ((1 << (ulong)(local_178 & 0x1f) & 0x39U) == 0) {
          fVar47 = *(float *)(lVar24 + 0x334);
          fVar49 = *(float *)(lVar24 + 0x330);
        }
        else {
          fVar47 = *(float *)(lVar24 + 0x330);
          fVar49 = *(float *)(lVar24 + 0x334);
        }
        fVar48 = fVar47;
        fVar17 = 0.0;
        if (fVar47 <= 0.0) {
          fVar48 = 0.0;
          fVar17 = fVar47;
        }
        fVar50 = fVar49;
        fVar47 = 0.0;
        if (fVar49 <= 0.0) {
          fVar50 = 0.0;
          fVar47 = fVar49;
        }
        local_188 = (undefined1 *)CONCAT44(fVar47,fVar17);
        local_180 = CONCAT44(fVar50,fVar48);
      }
      FUN_038e77e4(&local_190,param_2,lVar39);
      FUN_03907810(lVar43,param_2);
      puVar2 = (uint *)(lVar43 + 0x14);
      do {
        uVar15 = *puVar2;
        cVar16 = '\x01';
        bVar21 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar21) {
          *puVar2 = uVar15 | 0x80000000;
          cVar16 = ExclusiveMonitorsStatus();
        }
      } while (cVar16 != '\0');
      if ((uVar15 & 0x7fffffff) != 0) {
        if ((int)uVar15 < 0) {
          if ((int)*puVar2 < 0) {
            lVar38 = *(long *)PTR_DAT_04bb29d0;
            do {
              nn::os::ConvertToTimeSpan(lVar38 / 1000000);
              nn::os::SleepThread();
            } while ((int)*puVar2 < 0);
          }
        }
        else {
          FUN_03907b80(lVar43);
        }
      }
      do {
        cVar16 = '\x01';
        bVar21 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar21) {
          *puVar2 = 0;
          cVar16 = ExclusiveMonitorsStatus();
        }
      } while (cVar16 != '\0');
      FUN_0390d290(lVar10 + 0x2c8,param_2,*(undefined8 *)(lVar43 + 0x68),0xffffffff,0);
      do {
        uVar15 = *puVar2;
        cVar16 = '\x01';
        bVar21 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar21) {
          *puVar2 = uVar15 | 0x80000000;
          cVar16 = ExclusiveMonitorsStatus();
        }
      } while (cVar16 != '\0');
      if ((uVar15 & 0x7fffffff) != 0) {
        if ((int)uVar15 < 0) {
          if ((int)*puVar2 < 0) {
            lVar38 = *(long *)PTR_DAT_04bb29d0;
            do {
              nn::os::ConvertToTimeSpan(lVar38 / 1000000);
              nn::os::SleepThread();
            } while ((int)*puVar2 < 0);
          }
        }
        else {
          FUN_03907b80(lVar43);
        }
      }
      do {
        cVar16 = '\x01';
        bVar21 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar21) {
          *puVar2 = 0;
          cVar16 = ExclusiveMonitorsStatus();
        }
      } while (cVar16 != '\0');
      local_190 = (undefined *)((ulong)local_190 & 0xffffffff00000000);
      if (**(int **)(lVar43 + 0x38) != -1) {
        (**(code **)PTR_DAT_04bcf2e0)
                  (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70)
                   ,*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),
                   (long)**(int **)(lVar43 + 0x38),4,&local_190);
      }
      do {
        uVar15 = *puVar2;
        cVar16 = '\x01';
        bVar21 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar21) {
          *puVar2 = uVar15 | 0x80000000;
          cVar16 = ExclusiveMonitorsStatus();
        }
      } while (cVar16 != '\0');
      if ((uVar15 & 0x7fffffff) != 0) {
        if ((int)uVar15 < 0) {
          if ((int)*puVar2 < 0) {
            lVar38 = *(long *)PTR_DAT_04bb29d0;
            do {
              nn::os::ConvertToTimeSpan(lVar38 / 1000000);
              nn::os::SleepThread();
            } while ((int)*puVar2 < 0);
          }
        }
        else {
          FUN_03907b80(lVar43);
        }
      }
      do {
        cVar16 = '\x01';
        bVar21 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar21) {
          *puVar2 = 0;
          cVar16 = ExclusiveMonitorsStatus();
        }
      } while (cVar16 != '\0');
      local_190 = (undefined *)CONCAT44(local_190._4_4_,(float)uVar29);
      iVar22 = *(int *)(*(long *)(lVar43 + 0x38) + (ulong)(1 < *(uint *)(lVar43 + 0x30)) * 0x18);
      if (iVar22 != -1) {
        (**(code **)PTR_DAT_04bcf2e0)
                  (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70)
                   ,*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar22,4,&local_190);
      }
      uVar42 = *(undefined8 *)(param_2 + 0xb8);
      lVar43 = *(long *)PTR_DAT_04bbd7e0;
      (**(code **)PTR_DAT_04bcf1a8)(uVar42,0x10,lVar43 + 0xe44);
      (**(code **)PTR_DAT_04bcf1b0)(uVar42,0x10,lVar43 + 0xe88);
      iVar22 = *(int *)(lVar43 + 0xe30);
      if (iVar22 != 0) {
        lVar43 = *(long *)(lVar43 + 0xe38);
        uVar33 = 0;
        uVar40 = 0;
        do {
          lVar38 = *(long *)(lVar43 + (-(uVar40 >> 0x1f) & 0xfffffff800000000 | uVar40 << 3));
          if (lVar38 != 0) {
            uVar26 = (**(code **)PTR_DAT_04bbd560)(lVar38 + 8);
            (**(code **)PTR_DAT_04bcf1e8)
                      (uVar42,uVar33 & 0xffffffff,uVar26,*(undefined4 *)(lVar38 + 0x118));
          }
          uVar33 = uVar40 + 1;
          uVar40 = uVar33 & 0xffffffff;
        } while (iVar22 != (int)uVar33);
      }
      lVar43 = *(long *)PTR_DAT_04bbd7e8;
      iVar22 = *(int *)(lVar43 + 0x1f8);
      if (iVar22 != 0) {
        uVar51 = *(undefined4 *)(lVar43 + 0x1dc);
        uVar26 = *(undefined8 *)(param_2 + 0xb8);
        uVar42 = (**(code **)PTR_DAT_04bbd560)(lVar43 + 0x200);
        (**(code **)PTR_DAT_04bbd568)(uVar26,uVar51,*(undefined4 *)(lVar43 + 0x1d8),iVar22,uVar42);
      }
      if (local_110[0] != 0xffffffff) {
        lVar43 = *(long *)PTR_DAT_04bc1010;
        if ((*(uint *)(lVar43 + 0x5c8) >> 3 & 1) == 0) {
          uVar29 = local_110[0] - *(ushort *)(lVar43 + 0x3da);
          if (*(uint *)(lVar43 + 0x368) <= uVar29) {
            uVar29 = 0;
          }
          if ((*(uint *)(*(long *)(lVar43 + 0x370) + (long)(int)uVar29 * 0x20 + 4) >> 2 & 1) != 0)
          goto LAB_03910748;
          uVar33 = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)local_110[0] & 0x3f);
        }
        else {
LAB_03910748:
          if ((*(uint *)(lVar43 + 0x5c8) >> 5 & 1) == 0) {
            uVar31 = 0x112;
            uVar51 = 0x12;
          }
          else {
            uVar31 = 0x111;
            uVar51 = 0x11;
          }
          if ((*(uint *)(lVar43 + 800) & 2) != 0) {
            uVar51 = uVar31;
          }
          (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar51);
          uVar33 = 0;
        }
        *(ulong *)(param_2 + 0x100) = uVar33;
      }
      *(undefined8 *)(lVar24 + 0x348) = 0;
      *(undefined8 *)(lVar24 + 0x380) = 0;
      *(undefined8 *)(lVar24 + 0x388) = 0;
      *(undefined8 *)(lVar24 + 0x370) = 0;
      *(undefined8 *)(lVar24 + 0x378) = 0;
      *(undefined8 *)(lVar24 + 0x360) = 0;
      *(undefined8 *)(lVar24 + 0x368) = 0;
      *(undefined8 *)(lVar24 + 0x350) = 0;
      *(undefined8 *)(lVar24 + 0x358) = 0;
      puVar3 = PTR_DAT_04bbd508 + 0x10;
      local_168 = puVar3;
      FUN_038fd0e0(local_110);
      if (uVar45 != 1) {
        lVar38 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x350)
                                    + 8) + 0x18);
        puVar2 = (uint *)(lVar38 + 0x14);
        puVar7 = (uint *)(lVar10 + 0x1dc);
        puVar4 = PTR_DAT_04bd1198 + 0x10;
        puVar5 = PTR_DAT_04bd0f08 + 0x10;
        puVar6 = PTR_DAT_04bb2020 + 0x10;
        lVar43 = *(long *)PTR_DAT_04bb29d0 / 1000000;
        do {
          uVar29 = uVar45 + 3 >> 2;
          puVar28 = (undefined4 *)(lVar11 + 0x18);
          if (uVar29 != 1) {
            lVar46 = *(long *)PTR_DAT_04bbd510;
            local_160 = "cubemap_max_conv";
            local_168 = puVar6;
            lVar44 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
            if (lVar44 == 0) {
              iVar22 = nn::os::GetCurrentCoreNumber();
            }
            else {
              iVar22 = (int)lVar44 + -1;
            }
            local_190 = (undefined *)CONCAT44(local_190._4_4_,iVar22);
            puVar28 = (undefined4 *)
                      FUN_03948e10(lVar46,param_2,lVar46 + (long)iVar22 * 0x290 + 0x10,&local_168,9,
                                   1,uVar29,uVar29,1,0,1,0,1,0,0,0);
          }
          local_120 = 0;
          local_118 = 0;
          local_130 = 0;
          local_128 = 0;
          local_140 = 0;
          local_138 = 0;
          local_150 = 0;
          local_148 = 0;
          local_160 = (char *)0x0;
          local_158 = 0;
          local_110[0] = 0xffffffff;
          local_d8 = 0;
          local_108 = 0;
          local_100 = 0;
          local_f8 = 0;
          local_f0 = 0;
          local_e8 = 0;
          local_e0 = 0;
          local_d0 = "agl::TextureData";
          local_c8 = 0x10000;
          local_b0 = 0xff;
          local_ac = 0;
          local_a8 = 0x80000000000;
          local_90 = 0;
          local_a0 = 0;
          local_98 = 0;
          local_168 = puVar4;
          FUN_01560750(&local_168,puVar28,0,0);
          *(undefined8 *)(lVar24 + 0x338) = 0;
          uVar14 = (ushort)local_130;
          if ((ushort)local_130 < 2) {
            uVar14 = 1;
          }
          uVar8 = local_130._2_2_;
          if (local_128._2_2_ != 3) {
            uVar8 = 1;
          }
          if (uVar8 <= local_130._2_2_) {
            uVar8 = local_130._2_2_;
          }
          *(undefined ***)(lVar24 + 0x348) = &local_168;
          *(float *)(lVar24 + 0x340) = (float)uVar14;
          *(float *)(lVar24 + 0x330) = (float)uVar14;
          *(undefined8 *)(lVar24 + 0x350) = 0;
          *(undefined8 *)(lVar24 + 0x358) = 0;
          *(undefined8 *)(lVar24 + 0x360) = 0;
          *(undefined8 *)(lVar24 + 0x368) = 0;
          *(float *)(lVar24 + 0x344) = (float)uVar8;
          *(undefined8 *)(lVar24 + 0x370) = 0;
          *(undefined8 *)(lVar24 + 0x378) = 0;
          *(float *)(lVar24 + 0x334) = (float)uVar8;
          *(undefined8 *)(lVar24 + 0x380) = 0;
          *(undefined8 *)(lVar24 + 0x388) = 0;
          (**(code **)(*(long *)(lVar24 + 0x328) + 0x38))(lVar39,param_2);
          local_188 = (undefined1 *)0x7f7fffff7f7fffff;
          local_180 = 0xff7fffffff7fffff;
          local_174 = 0x3f80000000000000;
          local_178 = *(uint *)PTR_DAT_04bd0ea8;
          if (local_178 < 6) {
            if ((1 << (ulong)(local_178 & 0x1f) & 0x39U) == 0) {
              fVar47 = *(float *)(lVar24 + 0x334);
              fVar49 = *(float *)(lVar24 + 0x330);
            }
            else {
              fVar47 = *(float *)(lVar24 + 0x330);
              fVar49 = *(float *)(lVar24 + 0x334);
            }
            fVar48 = fVar47;
            fVar17 = 0.0;
            if (fVar47 <= 0.0) {
              fVar48 = 0.0;
              fVar17 = fVar47;
            }
            fVar50 = fVar49;
            fVar47 = 0.0;
            if (fVar49 <= 0.0) {
              fVar50 = 0.0;
              fVar47 = fVar49;
            }
            local_188 = (undefined1 *)CONCAT44(fVar47,fVar17);
            local_180 = CONCAT44(fVar50,fVar48);
          }
          local_190 = puVar5;
          FUN_038e77e4(&local_190,param_2,lVar39);
          FUN_03907810(lVar38,param_2);
          *(undefined4 *)(lVar10 + 0x108) = *puVar27;
          *(undefined4 *)(lVar10 + 0x10c) = puVar27[1];
          *(undefined8 *)(lVar10 + 0x110) = *(undefined8 *)(puVar27 + 2);
          *(undefined8 *)(lVar10 + 0x118) = *(undefined8 *)(puVar27 + 4);
          *(undefined4 *)(lVar10 + 0x120) = puVar27[6];
          *(undefined4 *)(lVar10 + 0x124) = puVar27[7];
          *(undefined8 *)(lVar10 + 0x128) = *(undefined8 *)(puVar27 + 8);
          *(undefined8 *)(lVar10 + 0x130) = *(undefined8 *)(puVar27 + 10);
          uVar42 = *(undefined8 *)(puVar27 + 0xc);
          uVar26 = *(undefined8 *)(puVar27 + 0xe);
          uVar35 = *(undefined8 *)(puVar27 + 0x10);
          *(undefined8 *)(lVar10 + 0x14f) = *(undefined8 *)((long)puVar27 + 0x47);
          *(undefined8 *)(lVar10 + 0x138) = uVar42;
          *(undefined8 *)(lVar10 + 0x140) = uVar26;
          *(undefined8 *)(lVar10 + 0x148) = uVar35;
          FUN_038fd1e0(lVar10 + 0x158);
          FUN_038fd2f0(lVar10 + 0x158,puVar27 + 0x14);
          uVar42 = *(undefined8 *)(puVar27 + 0x24);
          *(undefined4 *)(lVar10 + 0x1a0) = puVar27[0x26];
          *(undefined8 *)(lVar10 + 0x198) = uVar42;
          do {
            cVar16 = '\x01';
            bVar21 = (bool)ExclusiveMonitorPass(puVar7,0x10);
            if (bVar21) {
              *puVar7 = *puVar7 | 1;
              cVar16 = ExclusiveMonitorsStatus();
            }
          } while (cVar16 != '\0');
          do {
            uVar15 = *puVar2;
            cVar16 = '\x01';
            bVar21 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar21) {
              *puVar2 = uVar15 | 0x80000000;
              cVar16 = ExclusiveMonitorsStatus();
            }
          } while (cVar16 != '\0');
          if ((uVar15 & 0x7fffffff) != 0) {
            if ((int)uVar15 < 0) {
              while ((int)*puVar2 < 0) {
                nn::os::ConvertToTimeSpan(lVar43);
                nn::os::SleepThread();
              }
            }
            else {
              FUN_03907b80(lVar38);
            }
          }
          do {
            cVar16 = '\x01';
            bVar21 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar21) {
              *puVar2 = 0;
              cVar16 = ExclusiveMonitorsStatus();
            }
          } while (cVar16 != '\0');
          FUN_0390d290(lVar1,param_2,*(undefined8 *)(lVar38 + 0x68),0xffffffff,0);
          do {
            uVar15 = *puVar2;
            cVar16 = '\x01';
            bVar21 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar21) {
              *puVar2 = uVar15 | 0x80000000;
              cVar16 = ExclusiveMonitorsStatus();
            }
          } while (cVar16 != '\0');
          if ((uVar15 & 0x7fffffff) != 0) {
            if ((int)uVar15 < 0) {
              while ((int)*puVar2 < 0) {
                nn::os::ConvertToTimeSpan(lVar43);
                nn::os::SleepThread();
              }
            }
            else {
              FUN_03907b80(lVar38);
            }
          }
          do {
            cVar16 = '\x01';
            bVar21 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar21) {
              *puVar2 = 0;
              cVar16 = ExclusiveMonitorsStatus();
            }
          } while (cVar16 != '\0');
          local_190 = (undefined *)((ulong)local_190 & 0xffffffff00000000);
          if (**(int **)(lVar38 + 0x38) != -1) {
            (**(code **)PTR_DAT_04bcf2e0)
                      (*(undefined8 *)(param_2 + 0xb8),
                       *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                       *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),
                       (long)**(int **)(lVar38 + 0x38),4,&local_190);
          }
          do {
            uVar15 = *puVar2;
            cVar16 = '\x01';
            bVar21 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar21) {
              *puVar2 = uVar15 | 0x80000000;
              cVar16 = ExclusiveMonitorsStatus();
            }
          } while (cVar16 != '\0');
          if ((uVar15 & 0x7fffffff) != 0) {
            if ((int)uVar15 < 0) {
              while ((int)*puVar2 < 0) {
                nn::os::ConvertToTimeSpan(lVar43);
                nn::os::SleepThread();
              }
            }
            else {
              FUN_03907b80(lVar38);
            }
          }
          do {
            cVar16 = '\x01';
            bVar21 = (bool)ExclusiveMonitorPass(puVar2,0x10);
            if (bVar21) {
              *puVar2 = 0;
              cVar16 = ExclusiveMonitorsStatus();
            }
          } while (cVar16 != '\0');
          local_190 = (undefined *)CONCAT44(local_190._4_4_,(float)uVar45);
          iVar22 = *(int *)(*(long *)(lVar38 + 0x38) + (ulong)(1 < *(uint *)(lVar38 + 0x30)) * 0x18)
          ;
          if (iVar22 != -1) {
            (**(code **)PTR_DAT_04bcf2e0)
                      (*(undefined8 *)(param_2 + 0xb8),
                       *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                       *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar22,4,&local_190);
          }
          uVar42 = *(undefined8 *)(param_2 + 0xb8);
          lVar44 = *(long *)PTR_DAT_04bbd7e0;
          (**(code **)PTR_DAT_04bcf1a8)(uVar42,0x10,lVar44 + 0xe44);
          (**(code **)PTR_DAT_04bcf1b0)(uVar42,0x10,lVar44 + 0xe88);
          iVar22 = *(int *)(lVar44 + 0xe30);
          if (iVar22 != 0) {
            lVar44 = *(long *)(lVar44 + 0xe38);
            uVar33 = 0;
            uVar40 = 0;
            do {
              lVar46 = *(long *)(lVar44 + (-(uVar40 >> 0x1f) & 0xfffffff800000000 | uVar40 << 3));
              if (lVar46 != 0) {
                uVar26 = (**(code **)PTR_DAT_04bbd560)(lVar46 + 8);
                (**(code **)PTR_DAT_04bcf1e8)
                          (uVar42,uVar33 & 0xffffffff,uVar26,*(undefined4 *)(lVar46 + 0x118));
              }
              uVar33 = uVar40 + 1;
              uVar40 = uVar33 & 0xffffffff;
            } while (iVar22 != (int)uVar33);
          }
          lVar44 = *(long *)PTR_DAT_04bbd7e8;
          iVar22 = *(int *)(lVar44 + 0x1f8);
          if (iVar22 != 0) {
            uVar51 = *(undefined4 *)(lVar44 + 0x1dc);
            uVar26 = *(undefined8 *)(param_2 + 0xb8);
            uVar42 = (**(code **)PTR_DAT_04bbd560)(lVar44 + 0x200);
            (**(code **)PTR_DAT_04bbd568)
                      (uVar26,uVar51,*(undefined4 *)(lVar44 + 0x1d8),iVar22,uVar42);
          }
          if (local_110[0] != 0xffffffff) {
            lVar44 = *(long *)PTR_DAT_04bc1010;
            if ((*(uint *)(lVar44 + 0x5c8) >> 3 & 1) == 0) {
              uVar45 = local_110[0] - *(ushort *)(lVar44 + 0x3da);
              if (*(uint *)(lVar44 + 0x368) <= uVar45) {
                uVar45 = 0;
              }
              if ((*(uint *)(*(long *)(lVar44 + 0x370) + (long)(int)uVar45 * 0x20 + 4) >> 2 & 1) !=
                  0) goto LAB_03911d50;
              uVar33 = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)local_110[0] & 0x3f);
            }
            else {
LAB_03911d50:
              if ((*(uint *)(lVar44 + 0x5c8) >> 5 & 1) == 0) {
                uVar31 = 0x112;
                uVar51 = 0x12;
              }
              else {
                uVar31 = 0x111;
                uVar51 = 0x11;
              }
              if ((*(uint *)(lVar44 + 800) & 2) != 0) {
                uVar51 = uVar31;
              }
              (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar51);
              uVar33 = 0;
            }
            *(ulong *)(param_2 + 0x100) = uVar33;
          }
          FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510,puVar27);
          *(undefined8 *)(lVar24 + 0x348) = 0;
          *(undefined8 *)(lVar24 + 0x350) = 0;
          *(undefined8 *)(lVar24 + 0x358) = 0;
          *(undefined8 *)(lVar24 + 0x360) = 0;
          *(undefined8 *)(lVar24 + 0x388) = 0;
          *(undefined8 *)(lVar24 + 0x368) = 0;
          *(undefined8 *)(lVar24 + 0x370) = 0;
          *(undefined8 *)(lVar24 + 0x378) = 0;
          *(undefined8 *)(lVar24 + 0x380) = 0;
          local_168 = puVar3;
          FUN_038fd0e0(local_110);
          puVar27 = puVar28;
          uVar45 = uVar29;
        } while (uVar29 != 1);
      }
      FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510,puVar25);
      *(undefined4 *)(lVar10 + 0x1e8) = *(undefined4 *)(lVar11 + 0x18);
      *(undefined4 *)(lVar10 + 0x1ec) = *(undefined4 *)(lVar11 + 0x1c);
      *(undefined8 *)(lVar10 + 0x1f0) = *(undefined8 *)(lVar11 + 0x20);
      *(undefined8 *)(lVar10 + 0x1f8) = *(undefined8 *)(lVar11 + 0x28);
      *(undefined4 *)(lVar10 + 0x200) = *(undefined4 *)(lVar11 + 0x30);
      *(undefined4 *)(lVar10 + 0x204) = *(undefined4 *)(lVar11 + 0x34);
      *(undefined8 *)(lVar10 + 0x208) = *(undefined8 *)(lVar11 + 0x38);
      *(undefined8 *)(lVar10 + 0x210) = *(undefined8 *)(lVar11 + 0x40);
      uVar42 = *(undefined8 *)(lVar11 + 0x48);
      uVar26 = *(undefined8 *)(lVar11 + 0x50);
      uVar35 = *(undefined8 *)(lVar11 + 0x58);
      *(undefined8 *)(lVar10 + 0x22f) = *(undefined8 *)(lVar11 + 0x5f);
      *(undefined8 *)(lVar10 + 0x228) = uVar35;
      *(undefined8 *)(lVar10 + 0x220) = uVar26;
      *(undefined8 *)(lVar10 + 0x218) = uVar42;
      FUN_038fd1e0(lVar10 + 0x238);
      FUN_038fd2f0(lVar10 + 0x238,lVar11 + 0x68);
      uVar51 = *(undefined4 *)(lVar11 + 0xb0);
      *(undefined8 *)(lVar10 + 0x278) = *(undefined8 *)(lVar11 + 0xa8);
      puVar2 = (uint *)(lVar10 + 700);
      *(undefined4 *)(lVar10 + 0x280) = uVar51;
      do {
        cVar16 = '\x01';
        bVar21 = (bool)ExclusiveMonitorPass(puVar2,0x10);
        if (bVar21) {
          *puVar2 = *puVar2 | 1;
          cVar16 = ExclusiveMonitorsStatus();
        }
      } while (cVar16 != '\0');
    }
    FUN_0391c428(lVar30,param_2,0,1);
    bVar13 = *(byte *)(lVar30 + 0x39);
    if (bVar13 != 0) {
      uVar29 = 0;
      lVar39 = lVar30 + 0x328;
      puVar2 = (uint *)(lVar10 + 0x1dc);
      puVar3 = PTR_DAT_04bb2020 + 0x10;
      puVar4 = PTR_DAT_04bd1198 + 0x10;
      puVar5 = PTR_DAT_04bd0f08 + 0x10;
      lVar24 = *(long *)PTR_DAT_04bb29d0 / 1000000;
      puVar6 = PTR_DAT_04bbd508 + 0x10;
      plVar36 = (long *)PTR_DAT_04bbd510;
      do {
        lVar43 = *plVar36;
        uVar14 = *(ushort *)(*(long *)(lVar10 + 0x10) + 0x30) >> (ulong)(uVar29 & 0x1f);
        if (uVar14 < 2) {
          uVar14 = 1;
        }
        local_160 = "tex_temp2d";
        local_168 = puVar3;
        lVar38 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
        if (lVar38 == 0) {
          iVar22 = nn::os::GetCurrentCoreNumber();
        }
        else {
          iVar22 = (int)lVar38 + -1;
        }
        local_190 = (undefined *)CONCAT44(local_190._4_4_,iVar22);
        puVar25 = (undefined4 *)
                  FUN_03948e10(lVar43,param_2,lVar43 + (long)iVar22 * 0x290 + 0x10,&local_168,0x1d,1
                               ,uVar14,uVar14,1,0,1,0,1,0,0,0);
        local_120 = 0;
        local_118 = 0;
        local_130 = 0;
        local_128 = 0;
        local_140 = 0;
        local_138 = 0;
        local_150 = 0;
        local_148 = 0;
        local_160 = (char *)0x0;
        local_158 = 0;
        local_110[0] = 0xffffffff;
        local_d8 = 0;
        local_108 = 0;
        local_100 = 0;
        local_f8 = 0;
        local_f0 = 0;
        local_e8 = 0;
        local_e0 = 0;
        local_d0 = "agl::TextureData";
        local_c8 = 0x10000;
        local_b0 = 0xff;
        local_ac = 0;
        local_a8 = 0x80000000000;
        local_90 = 0;
        local_a0 = 0;
        local_98 = 0;
        local_168 = puVar4;
        FUN_01560750(&local_168,puVar25,0,0);
        *(undefined4 *)(lVar10 + 0x108) = *puVar25;
        *(undefined4 *)(lVar10 + 0x10c) = puVar25[1];
        *(undefined8 *)(lVar10 + 0x110) = *(undefined8 *)(puVar25 + 2);
        *(undefined8 *)(lVar10 + 0x118) = *(undefined8 *)(puVar25 + 4);
        *(undefined4 *)(lVar10 + 0x120) = puVar25[6];
        *(undefined4 *)(lVar10 + 0x124) = puVar25[7];
        *(undefined8 *)(lVar10 + 0x128) = *(undefined8 *)(puVar25 + 8);
        *(undefined8 *)(lVar10 + 0x130) = *(undefined8 *)(puVar25 + 10);
        uVar42 = *(undefined8 *)(puVar25 + 0xc);
        uVar26 = *(undefined8 *)(puVar25 + 0xe);
        uVar35 = *(undefined8 *)(puVar25 + 0x10);
        *(undefined8 *)(lVar10 + 0x14f) = *(undefined8 *)((long)puVar25 + 0x47);
        *(undefined8 *)(lVar10 + 0x138) = uVar42;
        *(undefined8 *)(lVar10 + 0x140) = uVar26;
        *(undefined8 *)(lVar10 + 0x148) = uVar35;
        FUN_038fd1e0(lVar10 + 0x158);
        FUN_038fd2f0(lVar10 + 0x158,puVar25 + 0x14);
        uVar42 = *(undefined8 *)(puVar25 + 0x24);
        *(undefined4 *)(lVar10 + 0x1a0) = puVar25[0x26];
        *(undefined8 *)(lVar10 + 0x198) = uVar42;
        do {
          cVar16 = '\x01';
          bVar21 = (bool)ExclusiveMonitorPass(puVar2,0x10);
          if (bVar21) {
            *puVar2 = *puVar2 | 1;
            cVar16 = ExclusiveMonitorsStatus();
          }
        } while (cVar16 != '\0');
        iVar22 = 0;
        do {
          *(undefined8 *)(lVar30 + 0x338) = 0;
          *(undefined8 *)(lVar30 + 0x350) = 0;
          *(undefined8 *)(lVar30 + 0x358) = 0;
          uVar8 = (ushort)local_130;
          if ((ushort)local_130 < 2) {
            uVar8 = 1;
          }
          *(undefined8 *)(lVar30 + 0x360) = 0;
          *(undefined8 *)(lVar30 + 0x368) = 0;
          *(undefined8 *)(lVar30 + 0x370) = 0;
          *(undefined8 *)(lVar30 + 0x378) = 0;
          *(undefined8 *)(lVar30 + 0x380) = 0;
          *(undefined8 *)(lVar30 + 0x388) = 0;
          uVar9 = local_130._2_2_;
          if (local_128._2_2_ != 3) {
            uVar9 = 1;
          }
          if (uVar9 <= local_130._2_2_) {
            uVar9 = local_130._2_2_;
          }
          *(undefined ***)(lVar30 + 0x348) = &local_168;
          *(float *)(lVar30 + 0x340) = (float)uVar8;
          *(float *)(lVar30 + 0x330) = (float)uVar8;
          *(float *)(lVar30 + 0x344) = (float)uVar9;
          *(float *)(lVar30 + 0x334) = (float)uVar9;
          (**(code **)(*(long *)(lVar30 + 0x328) + 0x38))(lVar39,param_2);
          local_188 = (undefined1 *)0x7f7fffff7f7fffff;
          local_180 = 0xff7fffffff7fffff;
          local_174 = 0x3f80000000000000;
          local_178 = *(uint *)PTR_DAT_04bd0ea8;
          if (local_178 < 6) {
            if ((1 << (ulong)(local_178 & 0x1f) & 0x39U) == 0) {
              fVar47 = *(float *)(lVar30 + 0x334);
              fVar49 = *(float *)(lVar30 + 0x330);
            }
            else {
              fVar47 = *(float *)(lVar30 + 0x330);
              fVar49 = *(float *)(lVar30 + 0x334);
            }
            fVar48 = fVar47;
            fVar17 = 0.0;
            if (fVar47 <= 0.0) {
              fVar48 = 0.0;
              fVar17 = fVar47;
            }
            fVar50 = fVar49;
            fVar47 = 0.0;
            if (fVar49 <= 0.0) {
              fVar50 = 0.0;
              fVar47 = fVar49;
            }
            local_188 = (undefined1 *)CONCAT44(fVar47,fVar17);
            local_180 = CONCAT44(fVar50,fVar48);
          }
          local_190 = puVar5;
          FUN_038e77e4(&local_190,param_2,lVar39);
          FUN_038e4d90(&local_204,param_2);
          puVar20 = PTR_DAT_04bd0fc8;
          puVar19 = PTR_DAT_04bcf2e0;
          iVar12 = *(int *)(lVar11 + 0x2608);
          if (iVar12 == 0) {
            FUN_03946bc0((float)uVar29,param_2,lVar34,&DAT_05ae7a20,PTR_DAT_04bbd558,0,iVar22);
          }
          else {
            lVar43 = *(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x358) + 8);
            if (iVar12 < 2) {
              lVar43 = *(long *)(lVar43 + 0x18);
            }
            else {
              uVar45 = iVar12 - 2;
              if (*(uint *)(lVar43 + 0x20) <= uVar45) {
                uVar45 = 0;
              }
              lVar43 = *(long *)(lVar43 + 0x28) + (ulong)uVar45 * 0x150;
            }
            FUN_03907810(lVar43,param_2);
            puVar7 = (uint *)(lVar43 + 0x14);
            do {
              uVar45 = *puVar7;
              cVar16 = '\x01';
              bVar21 = (bool)ExclusiveMonitorPass(puVar7,0x10);
              if (bVar21) {
                *puVar7 = uVar45 | 0x80000000;
                cVar16 = ExclusiveMonitorsStatus();
              }
            } while (cVar16 != '\0');
            if ((uVar45 & 0x7fffffff) != 0) {
              if ((int)uVar45 < 0) {
                while ((int)*puVar7 < 0) {
                  nn::os::ConvertToTimeSpan(lVar24);
                  nn::os::SleepThread();
                }
              }
              else {
                FUN_03907b80(lVar43);
              }
            }
            do {
              cVar16 = '\x01';
              bVar21 = (bool)ExclusiveMonitorPass(puVar7,0x10);
              if (bVar21) {
                *puVar7 = 0;
                cVar16 = ExclusiveMonitorsStatus();
              }
            } while (cVar16 != '\0');
            FUN_0390d290(lVar34,param_2,*(undefined8 *)(lVar43 + 0x68),0xffffffff,0);
            do {
              uVar45 = *puVar7;
              cVar16 = '\x01';
              bVar21 = (bool)ExclusiveMonitorPass(puVar7,0x10);
              if (bVar21) {
                *puVar7 = uVar45 | 0x80000000;
                cVar16 = ExclusiveMonitorsStatus();
              }
            } while (cVar16 != '\0');
            if ((uVar45 & 0x7fffffff) != 0) {
              if ((int)uVar45 < 0) {
                while ((int)*puVar7 < 0) {
                  nn::os::ConvertToTimeSpan(lVar24);
                  nn::os::SleepThread();
                }
              }
              else {
                FUN_03907b80(lVar43);
              }
            }
            do {
              cVar16 = '\x01';
              bVar21 = (bool)ExclusiveMonitorPass(puVar7,0x10);
              if (bVar21) {
                *puVar7 = 0;
                cVar16 = ExclusiveMonitorsStatus();
              }
            } while (cVar16 != '\0');
            FUN_0390d290(lVar10 + 0x1e8,param_2,
                         *(long *)(lVar43 + 0x68) + (ulong)(1 < *(uint *)(lVar43 + 0x60)) * 0x18,
                         0xffffffff,0);
            do {
              uVar45 = *puVar7;
              cVar16 = '\x01';
              bVar21 = (bool)ExclusiveMonitorPass(puVar7,0x10);
              if (bVar21) {
                *puVar7 = uVar45 | 0x80000000;
                cVar16 = ExclusiveMonitorsStatus();
              }
            } while (cVar16 != '\0');
            if ((uVar45 & 0x7fffffff) != 0) {
              if ((int)uVar45 < 0) {
                while ((int)*puVar7 < 0) {
                  nn::os::ConvertToTimeSpan(lVar24);
                  nn::os::SleepThread();
                }
              }
              else {
                FUN_03907b80(lVar43);
              }
            }
            do {
              cVar16 = '\x01';
              bVar21 = (bool)ExclusiveMonitorPass(puVar7,0x10);
              if (bVar21) {
                *puVar7 = 0;
                cVar16 = ExclusiveMonitorsStatus();
              }
            } while (cVar16 != '\0');
            local_190 = (undefined *)((ulong)local_190 & 0xffffffff00000000);
            if (**(int **)(lVar43 + 0x38) != -1) {
              (**(code **)puVar19)
                        (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)puVar20 + 0x70),
                         *(undefined8 *)(*(long *)puVar20 + 0x18),(long)**(int **)(lVar43 + 0x38),4,
                         &local_190);
            }
            do {
              uVar45 = *puVar7;
              cVar16 = '\x01';
              bVar21 = (bool)ExclusiveMonitorPass(puVar7,0x10);
              if (bVar21) {
                *puVar7 = uVar45 | 0x80000000;
                cVar16 = ExclusiveMonitorsStatus();
              }
            } while (cVar16 != '\0');
            if ((uVar45 & 0x7fffffff) != 0) {
              if ((int)uVar45 < 0) {
                while ((int)*puVar7 < 0) {
                  nn::os::ConvertToTimeSpan(lVar24);
                  nn::os::SleepThread();
                }
              }
              else {
                FUN_03907b80(lVar43);
              }
            }
            do {
              cVar16 = '\x01';
              bVar21 = (bool)ExclusiveMonitorPass(puVar7,0x10);
              if (bVar21) {
                *puVar7 = 0;
                cVar16 = ExclusiveMonitorsStatus();
              }
            } while (cVar16 != '\0');
            local_190 = (undefined *)CONCAT44(local_190._4_4_,iVar22);
            lVar38 = 0x30;
            if (*(uint *)(lVar43 + 0x30) < 3) {
              lVar38 = 0;
            }
            iVar12 = *(int *)(*(long *)(lVar43 + 0x38) + lVar38);
            if (iVar12 != -1) {
              (**(code **)puVar19)
                        (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)puVar20 + 0x70),
                         *(undefined8 *)(*(long *)puVar20 + 0x18),(long)iVar12,4,&local_190);
            }
            do {
              uVar45 = *puVar7;
              cVar16 = '\x01';
              bVar21 = (bool)ExclusiveMonitorPass(puVar7,0x10);
              if (bVar21) {
                *puVar7 = uVar45 | 0x80000000;
                cVar16 = ExclusiveMonitorsStatus();
              }
            } while (cVar16 != '\0');
            if ((uVar45 & 0x7fffffff) != 0) {
              if ((int)uVar45 < 0) {
                while ((int)*puVar7 < 0) {
                  nn::os::ConvertToTimeSpan(lVar24);
                  nn::os::SleepThread();
                }
              }
              else {
                FUN_03907b80(lVar43);
              }
            }
            do {
              cVar16 = '\x01';
              bVar21 = (bool)ExclusiveMonitorPass(puVar7,0x10);
              if (bVar21) {
                *puVar7 = 0;
                cVar16 = ExclusiveMonitorsStatus();
              }
            } while (cVar16 != '\0');
            local_190 = (undefined *)CONCAT44(local_190._4_4_,(float)uVar29);
            iVar12 = *(int *)(*(long *)(lVar43 + 0x38) +
                             (ulong)(1 < *(uint *)(lVar43 + 0x30)) * 0x18);
            if (iVar12 != -1) {
              (**(code **)puVar19)
                        (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)puVar20 + 0x70),
                         *(undefined8 *)(*(long *)puVar20 + 0x18),(long)iVar12,4,&local_190);
            }
            do {
              uVar45 = *puVar7;
              cVar16 = '\x01';
              bVar21 = (bool)ExclusiveMonitorPass(puVar7,0x10);
              if (bVar21) {
                *puVar7 = uVar45 | 0x80000000;
                cVar16 = ExclusiveMonitorsStatus();
              }
            } while (cVar16 != '\0');
            if ((uVar45 & 0x7fffffff) != 0) {
              if ((int)uVar45 < 0) {
                while ((int)*puVar7 < 0) {
                  nn::os::ConvertToTimeSpan(lVar24);
                  nn::os::SleepThread();
                }
              }
              else {
                FUN_03907b80(lVar43);
              }
            }
            do {
              cVar16 = '\x01';
              bVar21 = (bool)ExclusiveMonitorPass(puVar7,0x10);
              if (bVar21) {
                *puVar7 = 0;
                cVar16 = ExclusiveMonitorsStatus();
              }
            } while (cVar16 != '\0');
            local_190 = (undefined *)CONCAT44(local_190._4_4_,(float)uVar14);
            lVar38 = 0x60;
            if (*(uint *)(lVar43 + 0x30) < 5) {
              lVar38 = 0;
            }
            iVar12 = *(int *)(*(long *)(lVar43 + 0x38) + lVar38);
            if (iVar12 != -1) {
              (**(code **)puVar19)
                        (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)puVar20 + 0x70),
                         *(undefined8 *)(*(long *)puVar20 + 0x18),(long)iVar12,4,&local_190);
            }
            uVar51 = *(undefined4 *)(lVar11 + 0x260c);
            do {
              uVar45 = *puVar7;
              cVar16 = '\x01';
              bVar21 = (bool)ExclusiveMonitorPass(puVar7,0x10);
              if (bVar21) {
                *puVar7 = uVar45 | 0x80000000;
                cVar16 = ExclusiveMonitorsStatus();
              }
            } while (cVar16 != '\0');
            if ((uVar45 & 0x7fffffff) != 0) {
              if ((int)uVar45 < 0) {
                while ((int)*puVar7 < 0) {
                  nn::os::ConvertToTimeSpan(lVar24);
                  nn::os::SleepThread();
                }
              }
              else {
                FUN_03907b80(lVar43);
              }
            }
            do {
              cVar16 = '\x01';
              bVar21 = (bool)ExclusiveMonitorPass(puVar7,0x10);
              if (bVar21) {
                *puVar7 = 0;
                cVar16 = ExclusiveMonitorsStatus();
              }
            } while (cVar16 != '\0');
            local_190 = (undefined *)CONCAT44(local_190._4_4_,uVar51);
            lVar38 = 0x78;
            if (*(uint *)(lVar43 + 0x30) < 6) {
              lVar38 = 0;
            }
            iVar12 = *(int *)(*(long *)(lVar43 + 0x38) + lVar38);
            if (iVar12 != -1) {
              (**(code **)puVar19)
                        (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)puVar20 + 0x70),
                         *(undefined8 *)(*(long *)puVar20 + 0x18),(long)iVar12,4,&local_190);
            }
            uVar51 = *(undefined4 *)(lVar11 + 0x2610);
            do {
              uVar45 = *puVar7;
              cVar16 = '\x01';
              bVar21 = (bool)ExclusiveMonitorPass(puVar7,0x10);
              if (bVar21) {
                *puVar7 = uVar45 | 0x80000000;
                cVar16 = ExclusiveMonitorsStatus();
              }
            } while (cVar16 != '\0');
            if ((uVar45 & 0x7fffffff) != 0) {
              if ((int)uVar45 < 0) {
                while ((int)*puVar7 < 0) {
                  nn::os::ConvertToTimeSpan(lVar24);
                  nn::os::SleepThread();
                }
              }
              else {
                FUN_03907b80(lVar43);
              }
            }
            do {
              cVar16 = '\x01';
              bVar21 = (bool)ExclusiveMonitorPass(puVar7,0x10);
              if (bVar21) {
                *puVar7 = 0;
                cVar16 = ExclusiveMonitorsStatus();
              }
            } while (cVar16 != '\0');
            local_190 = (undefined *)CONCAT44(local_190._4_4_,uVar51);
            lVar38 = 0x90;
            if (*(uint *)(lVar43 + 0x30) < 7) {
              lVar38 = 0;
            }
            iVar12 = *(int *)(*(long *)(lVar43 + 0x38) + lVar38);
            if (iVar12 != -1) {
              (**(code **)puVar19)
                        (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)puVar20 + 0x70),
                         *(undefined8 *)(*(long *)puVar20 + 0x18),(long)iVar12,4,&local_190);
            }
            uVar42 = *(undefined8 *)(param_2 + 0xb8);
            lVar43 = *(long *)PTR_DAT_04bbd7e0;
            (**(code **)PTR_DAT_04bcf1a8)(uVar42,0x10,lVar43 + 0xe44);
            (**(code **)PTR_DAT_04bcf1b0)(uVar42,0x10,lVar43 + 0xe88);
            iVar12 = *(int *)(lVar43 + 0xe30);
            if (iVar12 != 0) {
              lVar43 = *(long *)(lVar43 + 0xe38);
              uVar33 = 0;
              uVar40 = 0;
              do {
                lVar38 = *(long *)(lVar43 + (-(uVar40 >> 0x1f) & 0xfffffff800000000 | uVar40 << 3));
                if (lVar38 != 0) {
                  uVar26 = (**(code **)PTR_DAT_04bbd560)(lVar38 + 8);
                  (**(code **)PTR_DAT_04bcf1e8)
                            (uVar42,uVar33 & 0xffffffff,uVar26,*(undefined4 *)(lVar38 + 0x118));
                }
                uVar33 = uVar40 + 1;
                uVar40 = uVar33 & 0xffffffff;
              } while (iVar12 != (int)uVar33);
            }
            lVar43 = *(long *)PTR_DAT_04bbd7e8;
            iVar12 = *(int *)(lVar43 + 0x1f8);
            if (iVar12 != 0) {
              uVar51 = *(undefined4 *)(lVar43 + 0x1dc);
              uVar26 = *(undefined8 *)(param_2 + 0xb8);
              uVar42 = (**(code **)PTR_DAT_04bbd560)(lVar43 + 0x200);
              (**(code **)PTR_DAT_04bbd568)
                        (uVar26,uVar51,*(undefined4 *)(lVar43 + 0x1d8),iVar12,uVar42);
            }
          }
          if (local_110[0] != 0xffffffff) {
            lVar43 = *(long *)PTR_DAT_04bc1010;
            if ((*(uint *)(lVar43 + 0x5c8) >> 3 & 1) == 0) {
              uVar45 = local_110[0] - *(ushort *)(lVar43 + 0x3da);
              if (*(uint *)(lVar43 + 0x368) <= uVar45) {
                uVar45 = 0;
              }
              if ((*(uint *)(*(long *)(lVar43 + 0x370) + (long)(int)uVar45 * 0x20 + 4) >> 2 & 1) !=
                  0) goto LAB_039113a0;
              uVar33 = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)local_110[0] & 0x3f);
            }
            else {
LAB_039113a0:
              if ((*(uint *)(lVar43 + 0x5c8) >> 5 & 1) == 0) {
                uVar31 = 0x112;
                uVar51 = 0x12;
              }
              else {
                uVar31 = 0x111;
                uVar51 = 0x11;
              }
              if ((*(uint *)(lVar43 + 800) & 2) != 0) {
                uVar51 = uVar31;
              }
              (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar51);
              uVar33 = 0;
            }
            *(ulong *)(param_2 + 0x100) = uVar33;
          }
          FUN_0391c654(lVar30,param_2,local_244,iVar22,uVar29);
          local_180 = 0xff7fffffff7fffff;
          local_190 = PTR_DAT_04bd0f08 + 0x10;
          local_188 = (undefined1 *)0x7f7fffff7f7fffff;
          local_174 = 0x3f80000000000000;
          local_178 = *(uint *)PTR_DAT_04bd0ea8;
          if (local_178 < 6) {
            if ((1 << (ulong)(local_178 & 0x1f) & 0x39U) == 0) {
              fVar47 = *(float *)(lVar30 + 0x334);
              fVar49 = *(float *)(lVar30 + 0x330);
            }
            else {
              fVar47 = *(float *)(lVar30 + 0x330);
              fVar49 = *(float *)(lVar30 + 0x334);
            }
            fVar48 = fVar47;
            fVar17 = 0.0;
            if (fVar47 <= 0.0) {
              fVar48 = 0.0;
              fVar17 = fVar47;
            }
            fVar50 = fVar49;
            fVar47 = 0.0;
            if (fVar49 <= 0.0) {
              fVar50 = 0.0;
              fVar47 = fVar49;
            }
            local_188 = (undefined1 *)CONCAT44(fVar47,fVar17);
            local_180 = CONCAT44(fVar50,fVar48);
          }
          FUN_038e77e4(&local_190,param_2,lVar39);
          FUN_038e4d90(&local_204,param_2);
          if (*(char *)(lVar11 + 0x490) == '\0') {
            local_190 = &DAT_3f8000003f800000;
            local_188 = &DAT_3f8000003f800000;
            if (*(uint *)(*(long *)PTR_DAT_04bbdd18 + 8) < 6) {
              uVar42 = 0;
            }
            else {
              uVar42 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x28);
            }
            FUN_03907810(uVar42,param_2);
            FUN_039466e0(param_2,uVar42,lVar1,&DAT_05ae7a20,PTR_DAT_04bbd558,&local_190);
          }
          else {
            FUN_0392b4a0(lVar11 + 0x278,param_2);
            FUN_0392c510(lVar11 + 0x278,param_2,0,lVar39,lVar1);
          }
          FUN_0391cd60(lVar30,param_2,0);
          iVar22 = iVar22 + 1;
          *(undefined8 *)(lVar30 + 0x380) = 0;
          *(undefined8 *)(lVar30 + 0x388) = 0;
          *(undefined8 *)(lVar30 + 0x348) = 0;
          *(undefined8 *)(lVar30 + 0x370) = 0;
          *(undefined8 *)(lVar30 + 0x378) = 0;
          *(undefined8 *)(lVar30 + 0x360) = 0;
          *(undefined8 *)(lVar30 + 0x368) = 0;
          *(undefined8 *)(lVar30 + 0x350) = 0;
          *(undefined8 *)(lVar30 + 0x358) = 0;
          plVar36 = (long *)PTR_DAT_04bbd510;
        } while (iVar22 != 6);
        FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510,puVar25);
        local_168 = puVar6;
        FUN_038fd0e0(local_110);
        uVar29 = uVar29 + 1;
      } while (uVar29 != bVar13);
    }
    FUN_0391d6c4(lVar30,param_2);
  }
  if ((ulong)*(ushort *)(lVar37 + 0x98) - 0x2f < 0x2a) {
    lVar30 = *(long *)(*(long *)(param_1 + 0x158) + 0x10);
    bVar13 = *(byte *)(lVar30 + 0x39);
    if (*(byte *)(lVar37 + 0x39) <= bVar13) {
      bVar13 = *(byte *)(lVar37 + 0x39);
    }
    if ((*(byte *)(*(long *)(param_1 + 0x1a0) + 0x452) & 1) == 0) {
      iVar22 = 0;
    }
    else {
      iVar22 = *(int *)(*(long *)(param_1 + 0x160) + 0x100) * 6;
    }
    FUN_0390bd30(lVar30,param_2,lVar37,6,bVar13,iVar22,0,0,0);
  }
  if (bVar18) {
    FUN_039499cc(lVar41,lVar32);
  }
LAB_039115b0:
  if (*(long *)(param_1 + 0x170) != 0) {
    if (*(uint *)(param_1 + 0x168) < 4) {
      FUN_039499cc(lVar41);
    }
    *(undefined8 *)(param_1 + 0x170) = 0;
  }
  *(int *)(*(long *)(param_1 + 0x160) + 0x2600) = *(int *)(*(long *)(param_1 + 0x160) + 0x2600) + -1
  ;
  *(undefined1 *)(param_1 + 0x199) = 1;
  return;
}

