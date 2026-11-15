
/* WARNING: Removing unreachable block (ram,0x024045d0) */
/* WARNING: Removing unreachable block (ram,0x02404dd4) */
/* WARNING: Removing unreachable block (ram,0x02404308) */
/* WARNING: Removing unreachable block (ram,0x02404a68) */

void FUN_024040e0(long param_1)

{
  byte *pbVar1;
  int iVar2;
  float fVar3;
  long *plVar4;
  long lVar5;
  uint uVar6;
  ushort uVar7;
  ushort uVar8;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined4 uVar14;
  int iVar15;
  long lVar16;
  undefined4 *puVar17;
  float *pfVar18;
  ulong uVar19;
  uint *puVar20;
  uint uVar21;
  char cVar22;
  uint uVar23;
  uint uVar24;
  int *piVar25;
  int iVar26;
  char *pcVar27;
  undefined8 *puVar28;
  uint uVar29;
  float fVar30;
  undefined8 local_a0;
  undefined1 uStack_98;
  undefined1 uStack_97;
  undefined2 local_96;
  undefined4 uStack_94;
  byte local_90 [4];
  byte local_8c;
  undefined1 uStack_8b;
  undefined1 uStack_8a;
  uint uStack_89;
  undefined4 local_85;
  undefined2 local_80;
  undefined1 local_7e;
  undefined4 local_7c;
  undefined2 local_78;
  byte local_74 [4];
  undefined8 local_70;
  float local_68;
  long local_60;
  byte local_58 [4];
  byte local_54 [4];
  
  local_70 = (undefined *)
             CONCAT44((float)(int)*(short *)(param_1 + 0x1904) * 0.25,
                      (float)*(int *)(param_1 + 0x1900) * 0.001);
  local_68 = (float)*(int *)(param_1 + 0x1906) * 0.001;
  lVar16 = FUN_0251e98c(1);
  puVar17 = (undefined4 *)(**(code **)(*(long *)(lVar16 + 0x1380) + 0xf0))(lVar16 + 0x1380);
  puVar28 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar28 = *(undefined8 **)(param_1 + 0x4c8);
  }
  FUN_03eb4b60(*puVar17,0x41200000,0x3e4ccccc,puVar28 + 0x4f,&local_70);
  uVar7 = *(ushort *)(param_1 + 0x190a);
  lVar16 = FUN_0251e98c(1);
  pfVar18 = (float *)(**(code **)(*(long *)(lVar16 + 0x13b0) + 0xf0))(lVar16 + 0x13b0);
  fVar30 = *pfVar18;
  if (*(int *)(param_1 + 0x178) == 0) {
    local_a0._0_4_ = 10;
    local_8c = 10;
    uStack_8b = 0;
    uStack_8a = 0;
    uStack_89 = uStack_89 & 0xffffff00;
    if ((*(byte *)(param_1 + 0x18f5) >> 2 & 1) == 0) goto LAB_02404220;
  }
  else {
LAB_02404220:
    iVar15 = (uint)uVar7 * 0x10000;
    plVar4 = &DAT_054e9a58;
    if (*(long **)(param_1 + 0x4c8) != (long *)0x0) {
      plVar4 = *(long **)(param_1 + 0x4c8);
    }
    lVar16 = (**(code **)(*plVar4 + 0x148))();
    iVar26 = iVar15 - *(int *)(lVar16 + 4);
    if (0xb60b5e < iVar26 + 0x5b05afU) {
      iVar9 = 0x15555560;
      iVar15 = -0x15555560;
      iVar26 = (int)(fVar30 * (float)iVar26);
      if (iVar26 < 1) {
        iVar9 = -0x5b05b0;
      }
      else {
        iVar15 = 0x5b05b0;
      }
      iVar2 = iVar26;
      if (iVar9 <= iVar26) {
        iVar2 = iVar9;
      }
      if (iVar15 <= iVar26) {
        iVar15 = iVar2;
      }
      iVar15 = iVar15 + *(int *)(lVar16 + 4);
    }
    *(int *)(lVar16 + 4) = iVar15;
    if (*(int *)(param_1 + 0x178) != 0) goto LAB_02404a10;
  }
  puVar28 = *(undefined8 **)(param_1 + 0x60);
  if (puVar28 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar15 = __cxa_guard_acquire(&DAT_052461c0);
      puVar28 = &DAT_05240280;
      if (iVar15 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar28 = &DAT_05240280;
    }
  }
  if (puVar28[0x227] == 0) {
    local_8c = 0;
    uStack_8b = 0;
    uStack_8a = 0;
    uStack_89 = (uint)uStack_89._1_3_ << 8;
    goto LAB_02404a10;
  }
  uVar21 = *(uint *)(puVar28 + 0x2d3) >> 1 & 1;
  local_8c = (byte)uVar21;
  uStack_8b = 0;
  uStack_8a = 0;
  uStack_89 = (uint)uStack_89._1_3_ << 8;
  local_70 = (undefined *)CONCAT44(local_70._4_4_,0x26);
  uVar19 = FUN_03850890(puVar28[0x227],0x26,0,uVar21);
  if ((uVar19 & 1) == 0) goto LAB_02404a10;
  local_54[0] = *(byte *)(param_1 + 0x1ee8);
  if (7 < local_54[0]) {
    local_54[0] = 0xff;
  }
  FUN_02642790(&local_70,local_54);
  puVar13 = PTR_DAT_04bb4868;
  local_70 = (undefined *)(CONCAT44(local_70._4_4_,local_68) & 0xffffffff000000ff);
  lVar16 = *(long *)PTR_DAT_04bb4868;
  uVar21 = (uint)*(ushort *)(lVar16 + 0x240);
  uVar7 = *(short *)(lVar16 + 0x242) + 1;
  if (*(ushort *)(lVar16 + 0x240) == uVar7) {
    uVar29 = 0;
  }
  else {
    uVar29 = 0;
    pcVar27 = PTR_DAT_04bb5a28;
    puVar28 = (undefined8 *)PTR_DAT_04bb5a30;
    do {
      uVar23 = uVar21 & 0xffff;
      uVar21 = uVar23 - *(ushort *)(lVar16 + 0x240);
      if (((uVar21 < *(uint *)(lVar16 + 0x220)) &&
          (puVar20 = *(uint **)(*(long *)(lVar16 + 0x228) + (long)(int)uVar21 * 8),
          puVar20 != (uint *)0x0)) || (puVar20 = &DAT_054b8770, (DAT_054b8778 & 1) != 0)) {
        uVar21 = *puVar20;
      }
      else {
        iVar15 = __cxa_guard_acquire();
        uVar21 = DAT_054b8770;
        pcVar27 = PTR_DAT_04bb5a28;
        puVar28 = (undefined8 *)PTR_DAT_04bb5a30;
        if (iVar15 != 0) {
          DAT_054b8770 = 0;
          __cxa_guard_release(&DAT_054b8778);
          uVar21 = DAT_054b8770;
          pcVar27 = PTR_DAT_04bb5a28;
          puVar28 = (undefined8 *)PTR_DAT_04bb5a30;
        }
      }
      if (uVar21 != 0) {
        cVar22 = *pcVar27;
        do {
          if (cVar22 == '\0') {
            cVar22 = '\x01';
            *puVar28 = 0xffffffffffffffff;
            *(undefined4 *)(puVar28 + 1) = 0xffffffff;
            *pcVar27 = '\x01';
            uVar21 = *puVar20;
          }
          else {
            uVar6 = *(uint *)(puVar28 + 1);
            if (-1 < (int)uVar6) {
              if ((ushort *)((ulong)uVar6 + (long)puVar20) != (ushort *)0x0) {
                uVar8 = *(ushort *)((ulong)uVar6 + (long)puVar20);
                uVar21 = (uint)uVar8;
                if (0xc < uVar8) goto LAB_0240457c;
                goto LAB_02404574;
              }
              break;
            }
            if (uVar6 != 0xffffffff) break;
          }
          puVar11 = (uint *)(ulong)uVar21;
          uVar21 = 0;
          if ((puVar11 == (uint *)0x0) || (uVar21 = 0, puVar20 == puVar11)) goto LAB_02404574;
          lVar5 = 0xc;
          if (*(char *)((long)puVar20 + (10 - (long)puVar11)) != '\0') {
            lVar5 = 0x1c;
          }
          lVar5 = (long)puVar20 + (lVar5 - (long)puVar11);
          uVar21 = 0;
          if (lVar5 == 0) goto LAB_02404574;
          uVar19 = (ulong)*(ushort *)((long)puVar20 + (8 - (long)puVar11));
          *(undefined4 *)(puVar28 + 1) = 0xfffffffe;
          if (uVar19 == 0) break;
          piVar25 = (int *)(lVar5 + 4);
          while (piVar25[-1] != 0x54706054) {
            piVar25 = piVar25 + 2;
            uVar19 = uVar19 - 1;
            if (uVar19 == 0) goto LAB_02404570;
          }
          iVar15 = 0;
          if (*piVar25 != -1) {
            iVar15 = *piVar25;
          }
          *(int *)(puVar28 + 1) = iVar15;
          uVar21 = *puVar20;
          if (uVar21 == 0) break;
        } while( true );
      }
LAB_02404570:
      uVar21 = 0;
LAB_02404574:
      uVar29 = 1 << (ulong)(uVar21 & 0x1f) | uVar29;
LAB_0240457c:
      uVar8 = *(ushort *)(lVar16 + 0x242);
      uVar21 = uVar23;
      uVar6 = uVar23;
      if (uVar23 <= uVar8) {
        uVar6 = (uint)uVar8;
      }
      do {
        while( true ) {
          if (uVar6 == uVar21) {
            uVar21 = uVar23 + 1;
            goto LAB_024043d4;
          }
          uVar24 = (uVar21 + 1 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x240);
          if (uVar24 < *(uint *)(lVar16 + 0x220)) break;
          uVar21 = uVar21 + 1;
        }
        uVar21 = uVar21 + 1;
      } while (*(long *)(*(long *)(lVar16 + 0x228) + (long)(int)uVar24 * 8) == 0);
LAB_024043d4:
    } while ((uint)uVar7 != (uVar21 & 0xffff));
    uVar23 = (uint)*(ushort *)(lVar16 + 0x240);
    uVar21 = uVar8 + 1;
    if ((uint)*(ushort *)(lVar16 + 0x240) != (uVar21 & 0xffff)) {
      do {
        uVar6 = uVar23 & 0xffff;
        uVar23 = uVar6 - *(ushort *)(lVar16 + 0x240);
        if (((uVar23 < *(uint *)(lVar16 + 0x220)) &&
            (puVar20 = *(uint **)(*(long *)(lVar16 + 0x228) + (long)(int)uVar23 * 8),
            puVar20 != (uint *)0x0)) || (puVar20 = &DAT_054b8770, (DAT_054b8778 & 1) != 0)) {
          uVar23 = *puVar20;
        }
        else {
          iVar15 = __cxa_guard_acquire();
          uVar23 = DAT_054b8770;
          pcVar27 = PTR_DAT_04bb5a28;
          puVar28 = (undefined8 *)PTR_DAT_04bb5a30;
          if (iVar15 != 0) {
            DAT_054b8770 = 0;
            __cxa_guard_release(&DAT_054b8778);
            uVar23 = DAT_054b8770;
            pcVar27 = PTR_DAT_04bb5a28;
            puVar28 = (undefined8 *)PTR_DAT_04bb5a30;
          }
        }
        if (uVar23 != 0) {
          cVar22 = *pcVar27;
          do {
            if (cVar22 == '\0') {
              cVar22 = '\x01';
              *puVar28 = 0xffffffffffffffff;
              *(undefined4 *)(puVar28 + 1) = 0xffffffff;
              *pcVar27 = '\x01';
              uVar23 = *puVar20;
            }
            else {
              uVar24 = *(uint *)((long)puVar28 + 4);
              if (-1 < (int)uVar24) {
                if ((ushort *)((ulong)uVar24 + (long)puVar20) != (ushort *)0x0) {
                  uVar23 = (uint)*(ushort *)((ulong)uVar24 + (long)puVar20);
                  goto LAB_02404c98;
                }
                break;
              }
              if (uVar24 != 0xffffffff) break;
            }
            puVar11 = (uint *)(ulong)uVar23;
            uVar23 = 0;
            if ((puVar11 == (uint *)0x0) || (uVar23 = 0, puVar20 == puVar11)) goto LAB_02404c98;
            lVar5 = 0xc;
            if (*(char *)((long)puVar20 + (10 - (long)puVar11)) != '\0') {
              lVar5 = 0x1c;
            }
            lVar5 = (long)puVar20 + (lVar5 - (long)puVar11);
            uVar23 = 0;
            if (lVar5 == 0) goto LAB_02404c98;
            uVar19 = (ulong)*(ushort *)((long)puVar20 + (8 - (long)puVar11));
            *(undefined4 *)((long)puVar28 + 4) = 0xfffffffe;
            if (uVar19 == 0) break;
            piVar25 = (int *)(lVar5 + 4);
            while (piVar25[-1] != 0x25de7b8f) {
              piVar25 = piVar25 + 2;
              uVar19 = uVar19 - 1;
              if (uVar19 == 0) goto LAB_02404c94;
            }
            iVar15 = 0;
            if (*piVar25 != -1) {
              iVar15 = *piVar25;
            }
            *(int *)((long)puVar28 + 4) = iVar15;
            uVar23 = *puVar20;
            if (uVar23 == 0) break;
          } while( true );
        }
LAB_02404c94:
        uVar23 = 0;
LAB_02404c98:
        if ((uint)local_70 == uVar23) {
          uVar23 = *puVar20;
          if (uVar23 != 0) {
            cVar22 = *pcVar27;
            do {
              if (cVar22 == '\0') {
                cVar22 = '\x01';
                *puVar28 = 0xffffffffffffffff;
                *(undefined4 *)(puVar28 + 1) = 0xffffffff;
                *pcVar27 = '\x01';
                uVar23 = *puVar20;
              }
              else {
                uVar24 = *(uint *)(puVar28 + 1);
                if (-1 < (int)uVar24) {
                  if ((ushort *)((ulong)uVar24 + (long)puVar20) != (ushort *)0x0) {
                    uVar7 = *(ushort *)((ulong)uVar24 + (long)puVar20);
                    uVar23 = (uint)uVar7;
                    if (0xc < uVar7) goto LAB_02404d80;
                    goto LAB_02404d78;
                  }
                  break;
                }
                if (uVar24 != 0xffffffff) break;
              }
              puVar11 = (uint *)(ulong)uVar23;
              uVar23 = 0;
              if ((puVar11 == (uint *)0x0) || (uVar23 = 0, puVar20 == puVar11)) goto LAB_02404d78;
              lVar5 = 0xc;
              if (*(char *)((long)puVar20 + (10 - (long)puVar11)) != '\0') {
                lVar5 = 0x1c;
              }
              lVar5 = (long)puVar20 + (lVar5 - (long)puVar11);
              uVar23 = 0;
              if (lVar5 == 0) goto LAB_02404d78;
              uVar19 = (ulong)*(ushort *)((long)puVar20 + (8 - (long)puVar11));
              *(undefined4 *)(puVar28 + 1) = 0xfffffffe;
              if (uVar19 == 0) break;
              piVar25 = (int *)(lVar5 + 4);
              while (piVar25[-1] != 0x54706054) {
                piVar25 = piVar25 + 2;
                uVar19 = uVar19 - 1;
                if (uVar19 == 0) goto LAB_02404d74;
              }
              iVar15 = 0;
              if (*piVar25 != -1) {
                iVar15 = *piVar25;
              }
              *(int *)(puVar28 + 1) = iVar15;
              uVar23 = *puVar20;
              if (uVar23 == 0) break;
            } while( true );
          }
LAB_02404d74:
          uVar23 = 0;
LAB_02404d78:
          uVar29 = uVar29 & (1 << (ulong)(uVar23 & 0x1f) ^ 0xffffffffU);
        }
LAB_02404d80:
        uVar24 = uVar6;
        if (uVar6 <= *(ushort *)(lVar16 + 0x242)) {
          uVar24 = (uint)*(ushort *)(lVar16 + 0x242);
        }
        uVar23 = uVar6;
        do {
          while( true ) {
            if (uVar24 == uVar23) {
              uVar23 = uVar6 + 1;
              goto LAB_02404b04;
            }
            uVar10 = (uVar23 + 1 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x240);
            if (uVar10 < *(uint *)(lVar16 + 0x220)) break;
            uVar23 = uVar23 + 1;
          }
          uVar23 = uVar23 + 1;
        } while (*(long *)(*(long *)(lVar16 + 0x228) + (long)(int)uVar10 * 8) == 0);
LAB_02404b04:
      } while ((uVar21 & 0xffff) != (uVar23 & 0xffff));
    }
  }
  puVar12 = PTR_DAT_04bb39d8;
  pbVar1 = (byte *)(param_1 + 0x1ee8);
  uVar21 = uVar29 - (uVar29 >> 1 & 0x55555555);
  uVar21 = (uVar21 >> 2 & 0x33333333) + (uVar21 & 0x33333333);
  uVar21 = uVar21 + (uVar21 >> 4) & 0xf0f0f0f;
  uVar21 = uVar21 + (uVar21 >> 8);
  uVar21 = uVar21 + (uVar21 >> 0x10) & 0x3f;
  puVar20 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
  uVar23 = *puVar20 ^ *puVar20 << 0xb;
  uVar6 = puVar20[3];
  *puVar20 = puVar20[1];
  puVar20[1] = puVar20[2];
  uVar23 = uVar23 >> 8 ^ uVar6 >> 0x13 ^ uVar23 ^ uVar6;
  puVar20[2] = uVar6;
  puVar20[3] = uVar23;
  uVar23 = (uint)((ulong)uVar21 * (ulong)uVar23 >> 0x20);
  if (uVar23 < uVar21 && uVar29 != 0) {
    iVar15 = uVar23 + 2;
    fVar30 = -NAN;
    do {
      iVar15 = iVar15 + -1;
      if (iVar15 < 2) {
        uVar21 = uVar29 - 1 & (uVar29 ^ 0xffffffff);
        uVar21 = uVar21 - (uVar21 >> 1 & 0x55555555);
        uVar21 = (uVar21 >> 2 & 0x33333333) + (uVar21 & 0x33333333);
        uVar21 = uVar21 + (uVar21 >> 4) & 0xf0f0f0f;
        uVar21 = uVar21 + (uVar21 >> 8);
        fVar30 = (float)(uVar21 + (uVar21 >> 0x10) & 0x3f);
        break;
      }
      uVar29 = uVar29 - 1 & uVar29;
    } while (uVar29 != 0);
  }
  else {
    fVar30 = -NAN;
  }
  local_58[0] = *pbVar1;
  if (7 < local_58[0]) {
    local_58[0] = 0xff;
  }
  FUN_02642790(&local_70,local_58);
  local_70 = (undefined *)CONCAT44(local_70._4_4_,(uint)local_70._3_1_);
  puVar20 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar12);
  uVar29 = puVar20[3];
  uVar21 = *puVar20 ^ *puVar20 << 0xb;
  *puVar20 = puVar20[1];
  puVar20[1] = puVar20[2];
  uVar21 = uVar21 >> 8 ^ uVar29 >> 0x13 ^ uVar21 ^ uVar29;
  puVar20[2] = uVar29;
  puVar20[3] = uVar21;
  uVar21 = (int)((ulong)uVar21 * 6 >> 0x20) + 6;
  uVar19 = (ulong)uVar21;
  if (uVar21 == (uint)local_70) {
    puVar20 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar12);
    uVar21 = *puVar20 ^ *puVar20 << 0xb;
    uVar29 = puVar20[3];
    *puVar20 = puVar20[1];
    puVar20[1] = puVar20[2];
    uVar21 = uVar21 >> 8 ^ uVar29 >> 0x13 ^ uVar21 ^ uVar29;
    puVar20[2] = uVar29;
    puVar20[3] = uVar21;
    uVar21 = (int)((ulong)uVar21 * 6 >> 0x20) + 6;
    uVar19 = (ulong)uVar21;
    if (uVar21 == (uint)local_70) {
      puVar20 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar12);
      uVar21 = *puVar20 ^ *puVar20 << 0xb;
      uVar29 = puVar20[3];
      *puVar20 = puVar20[1];
      puVar20[1] = puVar20[2];
      uVar21 = uVar21 >> 8 ^ uVar29 >> 0x13 ^ uVar21 ^ uVar29;
      puVar20[2] = uVar29;
      puVar20[3] = uVar21;
      uVar21 = (int)((ulong)uVar21 * 6 >> 0x20) + 6;
      uVar19 = (ulong)uVar21;
      if (uVar21 == (uint)local_70) {
        puVar20 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar12);
        uVar21 = *puVar20 ^ *puVar20 << 0xb;
        uVar29 = puVar20[3];
        *puVar20 = puVar20[1];
        puVar20[1] = puVar20[2];
        uVar21 = uVar21 >> 8 ^ uVar29 >> 0x13 ^ uVar21 ^ uVar29;
        puVar20[2] = uVar29;
        puVar20[3] = uVar21;
        uVar21 = (int)((ulong)uVar21 * 6 >> 0x20) + 6;
        uVar19 = (ulong)uVar21;
        if (uVar21 == (uint)local_70) {
          puVar20 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar12);
          uVar21 = *puVar20 ^ *puVar20 << 0xb;
          uVar29 = puVar20[3];
          *puVar20 = puVar20[1];
          puVar20[1] = puVar20[2];
          uVar21 = uVar21 >> 8 ^ uVar29 >> 0x13 ^ uVar21 ^ uVar29;
          puVar20[2] = uVar29;
          puVar20[3] = uVar21;
          uVar21 = (int)((ulong)uVar21 * 6 >> 0x20) + 6;
          uVar19 = (ulong)uVar21;
          if (uVar21 == (uint)local_70) {
            puVar20 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar12);
            uVar21 = *puVar20 ^ *puVar20 << 0xb;
            uVar29 = puVar20[3];
            *puVar20 = puVar20[1];
            puVar20[1] = puVar20[2];
            uVar21 = uVar21 >> 8 ^ uVar29 >> 0x13 ^ uVar21 ^ uVar29;
            puVar20[2] = uVar29;
            puVar20[3] = uVar21;
            uVar21 = (int)((ulong)uVar21 * 6 >> 0x20) + 6;
            uVar29 = 6;
            if (uVar21 != (uint)local_70) {
              uVar29 = uVar21;
            }
            uVar19 = (ulong)uVar29;
          }
        }
      }
    }
  }
  local_8c = SUB41(fVar30,0);
  uStack_8b = (undefined1)((uint)fVar30 >> 8);
  uStack_8a = (undefined1)((uint)fVar30 >> 0x10);
  uStack_89._0_1_ = (undefined1)((uint)fVar30 >> 0x18);
  lVar16 = *(long *)puVar13;
  local_70 = PTR_DAT_04bb5a20 + 0x10;
  if ((int)*(float *)(lVar16 + 0x208) < 1) {
    if ((((*(long *)(lVar16 + 0xf8) == 0) ||
         (pfVar18 = *(float **)(*(long *)(lVar16 + 0xf8) + 8), pfVar18 == (float *)0x0)) ||
        (((uint)fVar30 < (uint)*(float *)(lVar16 + 0x110) &&
         (*(char *)(*(long *)(lVar16 + 0x118) + (long)(int)fVar30) == '\0')))) ||
       ((((uint)*pfVar18 <= (uint)fVar30 || (pfVar18[1] == 0.0)) || (*(ushort *)(pfVar18 + 2) == 0))
       )) goto LAB_02404948;
    iVar15 = 0xc;
    if (*(char *)((long)pfVar18 + 10) != '\0') {
      iVar15 = 0x1c;
    }
    local_60 = (ulong)((int)pfVar18[1] * (int)fVar30 + (uint)*(ushort *)(pfVar18 + 2) * 8 + iVar15)
               + (long)pfVar18;
  }
  else if ((uint)fVar30 < (uint)*(float *)(lVar16 + 0x208)) {
    fVar3 = fVar30;
    if ((uint)*(float *)(lVar16 + 0x1f8) <= (uint)fVar30) {
      fVar3 = 0.0;
    }
    local_60 = *(long *)(*(long *)(lVar16 + 0x200) + (ulong)(uint)fVar3 * 8);
  }
  else {
LAB_02404948:
    local_60 = 0;
  }
  local_68 = fVar30;
  lVar16 = FUN_009089f0(&local_70);
  uVar14 = FUN_009088e0(&local_70);
  local_74[0] = *pbVar1;
  if (7 < local_74[0]) {
    local_74[0] = 0xff;
  }
  FUN_02642870(local_74,uVar19 | lVar16 << 0x20,uVar14);
  local_7c = 0;
  local_7e = 1;
  local_78 = 0x100;
  local_90[0] = *pbVar1;
  if (7 < local_90[0]) {
    local_90[0] = 0xff;
  }
  local_8c = local_90[0];
  FUN_02642790(&local_a0,local_90);
  uStack_8a = (undefined1)local_a0;
  uStack_89 = CONCAT13(local_a0._4_1_,local_a0._1_3_);
  local_85 = CONCAT13(uStack_98,local_a0._5_3_);
  local_80 = local_96;
  FUN_025445cc(&local_8c);
  local_a0 = PTR_DAT_04bb2020 + 0x10;
  uStack_98 = 0x7e;
  uStack_97 = 0x9c;
  local_96 = 0x40c;
  uStack_94 = 0;
  FUN_0274bfe8(pbVar1,&local_a0,0);
LAB_02404a10:
  puVar28 = *(undefined8 **)(param_1 + 0x60);
  if (puVar28 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar15 = __cxa_guard_acquire(&DAT_052461c0);
      puVar28 = &DAT_05240280;
      if (iVar15 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar28 = &DAT_05240280;
    }
  }
  if (puVar28[0x227] != 0) {
    uVar21 = *(uint *)(puVar28 + 0x2d3) >> 1 & 1;
    local_8c = (byte)uVar21;
    uStack_8b = 0;
    uStack_8a = 0;
    uStack_89 = uStack_89 & 0xffffff00;
    local_70 = (undefined *)CONCAT44(local_70._4_4_,0x21);
    uVar19 = FUN_03850a90(puVar28[0x227],0x21,0,uVar21);
    if ((uVar19 & 1) != 0) {
      *(uint *)(param_1 + 0x17d4) = *(uint *)(param_1 + 0x17d4) & 0xfffeffff;
      if (*(int *)(param_1 + 0x178) == 0) {
        FUN_0237432c(param_1,6);
      }
      else {
        FUN_023164ec(param_1,6);
      }
    }
  }
  return;
}

