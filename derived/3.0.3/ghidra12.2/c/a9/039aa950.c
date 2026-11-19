
void FUN_039aa950(long param_1,long param_2,undefined8 param_3,uint param_4,uint *param_5,
                 long param_6,uint *param_7,long *param_8,long param_9)

{
  bool bVar1;
  int *piVar2;
  undefined *puVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar7;
  byte bVar8;
  char cVar9;
  undefined1 auVar10 [16];
  undefined *puVar11;
  bool bVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  long lVar21;
  long *plVar22;
  void *pvVar23;
  undefined4 *puVar24;
  long *plVar25;
  ulong uVar26;
  long *plVar27;
  ulong *puVar28;
  ulong *puVar29;
  uint uVar30;
  ulong uVar31;
  ulong uVar32;
  ushort *puVar33;
  undefined4 *puVar34;
  void *pvVar35;
  ushort uVar36;
  uint uVar37;
  uint uVar38;
  int iVar39;
  undefined8 uVar40;
  ulong uVar41;
  long lVar42;
  ulong uVar43;
  long lVar44;
  uint *puVar45;
  byte *pbVar46;
  long lVar47;
  byte *pbVar48;
  long lVar49;
  long lVar50;
  ulong uVar51;
  ulong uVar52;
  size_t sVar53;
  long lVar54;
  uint *puVar55;
  long *plVar56;
  uint *puVar57;
  undefined8 *puVar58;
  long local_d20;
  long local_cb0;
  undefined8 local_ca8;
  uint local_898;
  uint uStack_894;
  uint local_890;
  undefined1 uStack_88c;
  byte bStack_88b;
  undefined1 uStack_88a;
  undefined1 uStack_889;
  undefined8 local_888;
  ulong local_880;
  undefined8 local_878;
  undefined8 local_870;
  undefined8 local_868;
  undefined8 local_860;
  undefined8 local_858;
  undefined8 local_850;
  undefined8 local_848;
  undefined8 local_840;
  undefined8 local_838;
  undefined8 local_830;
  undefined8 local_828;
  undefined8 local_820;
  undefined8 local_818;
  undefined8 local_810;
  undefined8 local_808;
  undefined8 local_800;
  undefined8 local_7f8;
  undefined8 local_7f0;
  undefined8 local_7e8;
  undefined8 local_7e0;
  undefined8 local_7d8;
  undefined8 local_7d0;
  undefined8 local_7c8;
  undefined8 local_7c0;
  undefined8 local_7b8;
  undefined8 local_480;
  long local_478;
  undefined8 local_470;
  undefined8 local_468;
  undefined8 local_460;
  undefined8 local_458;
  undefined8 local_450;
  undefined1 local_6d;
  
  if (0 < (int)param_4) {
    lVar47 = *(long *)PTR_DAT_04bb2698;
    if (lVar47 == 0) {
      pvVar23 = malloc((long)(int)(param_4 << 3));
joined_r0x039aab74:
      if (pvVar23 != (void *)0x0) {
        *(void **)(param_1 + 0xd0) = pvVar23;
        *(undefined4 *)(param_1 + 200) = 0;
        *(uint *)(param_1 + 0xcc) = param_4;
      }
    }
    else {
      plVar22 = param_8;
      if (param_8 != (long *)0x0) {
LAB_039aa9e0:
        pvVar23 = (void *)(**(code **)(*plVar22 + 0x30))(plVar22,(long)(int)(param_4 << 3),8);
        goto joined_r0x039aab74;
      }
      lVar21 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar22 = (long *)(lVar47 + 8);
      if (lVar21 != 0) {
        plVar22 = (long *)(lVar21 + 0xa8);
      }
      plVar22 = (long *)*plVar22;
      if (plVar22 != (long *)0x0) goto LAB_039aa9e0;
    }
    uVar31 = 0;
    do {
      if (*(int *)(param_1 + 200) < *(int *)(param_1 + 0xcc)) {
        *(undefined8 *)(*(long *)(param_1 + 0xd0) + (long)*(int *)(param_1 + 200) * 8) =
             *(undefined8 *)(param_2 + uVar31 * 8);
        *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 1;
      }
      piVar2 = (int *)(*(long *)(param_2 + uVar31 * 8) + 0x2b8);
      do {
        cVar9 = '\x01';
        bVar12 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar12) {
          *piVar2 = *piVar2 + 1;
          cVar9 = ExclusiveMonitorsStatus();
        }
      } while (cVar9 != '\0');
      uVar31 = uVar31 + 1;
    } while (uVar31 != param_4);
  }
  uVar37 = *(uint *)(param_6 + 0x30);
  if ((int)uVar37 < 1) {
LAB_039aab8c:
    uVar37 = *(uint *)(param_1 + 8);
    puVar24 = *(undefined4 **)(param_1 + 0x10);
    plVar22 = (long *)PTR_DAT_04bb3350;
  }
  else {
    sVar53 = (ulong)uVar37 * 0x18;
    lVar47 = *(long *)PTR_DAT_04bb2698;
    if (lVar47 == 0) {
      puVar24 = malloc(sVar53);
    }
    else {
      plVar22 = param_8;
      if (param_8 == (long *)0x0) {
        lVar21 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar22 = (long *)(lVar47 + 8);
        if (lVar21 != 0) {
          plVar22 = (long *)(lVar21 + 0xa8);
        }
        plVar22 = (long *)*plVar22;
        if (plVar22 == (long *)0x0) goto LAB_039aab8c;
      }
      puVar24 = (undefined4 *)(**(code **)(*plVar22 + 0x30))(plVar22,sVar53,8);
    }
    if (puVar24 == (undefined4 *)0x0) goto LAB_039aab8c;
    uVar30 = ((uint)((sVar53 - 0x18) / 0x18) & 0xfffffff) + 1;
    uVar31 = (ulong)uVar30 & 3;
    puVar34 = puVar24;
    if ((uVar30 & 3) != 0) {
      do {
        *puVar34 = 0;
        uVar31 = uVar31 - 1;
        *(undefined8 *)(puVar34 + 2) = 0;
        puVar34 = puVar34 + 6;
      } while (uVar31 != 0);
    }
    if (0x47 < sVar53 - 0x18) {
      do {
        *puVar34 = 0;
        *(undefined8 *)(puVar34 + 2) = 0;
        puVar34[6] = 0;
        *(undefined8 *)(puVar34 + 8) = 0;
        puVar34[0xc] = 0;
        *(undefined8 *)(puVar34 + 0xe) = 0;
        puVar34[0x12] = 0;
        *(undefined8 *)(puVar34 + 0x14) = 0;
        puVar34 = puVar34 + 0x18;
      } while (puVar34 != puVar24 + (ulong)uVar37 * 6);
    }
    *(uint *)(param_1 + 8) = uVar37;
    *(undefined4 **)(param_1 + 0x10) = puVar24;
    plVar22 = (long *)PTR_DAT_04bb3350;
  }
  PTR_DAT_04bb3350 = (undefined *)plVar22;
  if (uVar37 != 0) {
    uVar30 = 0;
    do {
      uVar38 = *param_5;
      uVar31 = (ulong)uVar38;
      if (0 < (int)uVar38) {
        puVar55 = puVar24 + (long)(int)uVar30 * 6;
        lVar47 = *(long *)PTR_DAT_04bb2698;
        if (lVar47 == 0) {
          pvVar23 = malloc(uVar31 << 1);
          if (pvVar23 == (void *)0x0) goto LAB_039aac5c;
LAB_039aac3c:
          *puVar55 = uVar38;
          *(void **)(puVar55 + 2) = pvVar23;
        }
        else {
          plVar25 = param_8;
          if (param_8 == (long *)0x0) {
            lVar21 = nn::os::GetTlsValue(*(undefined4 *)(*plVar22 + 0x68));
            plVar25 = (long *)(lVar47 + 8);
            if (lVar21 != 0) {
              plVar25 = (long *)(lVar21 + 0xa8);
            }
            plVar25 = (long *)*plVar25;
            if (plVar25 == (long *)0x0) goto LAB_039aac5c;
          }
          pvVar23 = (void *)(**(code **)(*plVar25 + 0x30))(plVar25,uVar31 << 1,8);
          if (pvVar23 != (void *)0x0) goto LAB_039aac3c;
LAB_039aac5c:
          uVar31 = (ulong)*puVar55;
          if ((int)*puVar55 < 1) goto LAB_039aabb0;
        }
        if (uVar31 - 1 < 7) {
          uVar43 = 0;
        }
        else {
          uVar43 = 0;
          do {
            lVar47 = uVar43 * 2;
            uVar43 = uVar43 + 8;
            *(undefined2 *)(*(long *)(puVar55 + 2) + lVar47) = 0;
            *(undefined2 *)(*(long *)(puVar55 + 2) + lVar47 + 2) = 0;
            *(undefined2 *)(*(long *)(puVar55 + 2) + lVar47 + 4) = 0;
            *(undefined2 *)(*(long *)(puVar55 + 2) + lVar47 + 6) = 0;
            *(undefined2 *)(*(long *)(puVar55 + 2) + lVar47 + 8) = 0;
            *(undefined2 *)(*(long *)(puVar55 + 2) + lVar47 + 10) = 0;
            *(undefined2 *)(*(long *)(puVar55 + 2) + lVar47 + 0xc) = 0;
            *(undefined2 *)(*(long *)(puVar55 + 2) + lVar47 + 0xe) = 0;
          } while ((uVar31 & 0xfffffff8) != uVar43);
        }
        uVar31 = uVar31 & 7;
        if (uVar31 != 0) {
          lVar47 = uVar43 << 1;
          do {
            uVar31 = uVar31 - 1;
            *(undefined2 *)(*(long *)(puVar55 + 2) + lVar47) = 0;
            lVar47 = lVar47 + 2;
          } while (uVar31 != 0);
        }
      }
LAB_039aabb0:
      *(undefined2 *)(puVar24 + (long)(int)uVar30 * 6 + 4) = 0;
      uVar30 = uVar30 + 1;
    } while (uVar37 != uVar30);
  }
  uVar37 = 0;
  uVar30 = *(uint *)(param_6 + 0x20);
  if ((uint)*(ushort *)(param_6 + 0x284) <= *(uint *)(param_6 + 0x20)) {
    uVar30 = (uint)*(ushort *)(param_6 + 0x284);
  }
  if (uVar30 != 0) {
    lVar47 = *(long *)(param_6 + 0x28);
    uVar38 = 0;
    do {
      uVar13 = (**(code **)(**(long **)(lVar47 + (long)(int)uVar38 * 0x38) + 0x30))();
      uVar38 = uVar38 + 1;
      if ((int)uVar37 <= (int)uVar13) {
        uVar37 = uVar13;
      }
    } while (uVar30 != uVar38);
  }
  uVar30 = 0;
  *(short *)(param_1 + 0xe4) = (short)uVar37;
  uVar38 = *(uint *)(param_6 + 0x20);
  if ((uint)*(ushort *)(param_6 + 0x284) <= *(uint *)(param_6 + 0x20)) {
    uVar38 = (uint)*(ushort *)(param_6 + 0x284);
  }
  if (uVar38 == 0) {
    uVar37 = uVar37 & 0xffff;
  }
  else {
    lVar47 = *(long *)(param_6 + 0x28);
    uVar37 = 0;
    do {
      uVar13 = (**(code **)(**(long **)(lVar47 + (long)(int)uVar37 * 0x38) + 0xb8))();
      uVar37 = uVar37 + 1;
      if ((int)uVar30 <= (int)uVar13) {
        uVar30 = uVar13;
      }
    } while (uVar38 != uVar37);
    uVar37 = (uint)*(ushort *)(param_1 + 0xe4);
  }
  *(short *)(param_1 + 0xe6) = (short)uVar30;
  uVar30 = uVar30 & 0xffff;
  if (((0 < (int)*param_5) && (uVar37 != 0)) && (*(int *)(param_1 + 200) != 0)) {
    plVar22 = *(long **)(param_1 + 0xd0);
    uVar37 = 0;
    uVar43 = (long)*(int *)(param_1 + 200) - 1U & 0x1fffffffffffffff;
    uVar31 = uVar43 + 1;
    if (uVar43 != 0) {
      uVar43 = uVar31 & 0x3ffffffffffffffe;
      plVar25 = plVar22;
      do {
        plVar22 = plVar25 + 2;
        uVar43 = uVar43 - 2;
        uVar37 = uVar37 + *(ushort *)(*(long *)(*plVar25 + 0x20) + 0xe2) +
                 (uint)*(ushort *)(*(long *)(plVar25[1] + 0x20) + 0xe2);
        plVar25 = plVar22;
      } while (uVar43 != 0);
    }
    if ((uVar31 & 1) != 0) {
      uVar37 = uVar37 + *(ushort *)(*(long *)(*plVar22 + 0x20) + 0xe2);
    }
    if (uVar37 != 0) {
      sVar53 = ((ulong)uVar37 + (ulong)uVar37 * 4) * 8;
      lVar47 = *(long *)PTR_DAT_04bb2698;
      if (lVar47 == 0) {
        pvVar23 = malloc(sVar53);
joined_r0x039aaee4:
        if (pvVar23 != (void *)0x0) {
          lVar47 = (ulong)uVar37 * 0x28;
          uVar43 = lVar47 - 0x28;
          uVar30 = ((uint)(uVar43 / 0x28) & 0x7ffffff) + 1;
          uVar31 = (ulong)uVar30 & 3;
          pvVar35 = pvVar23;
          if ((uVar30 & 3) != 0) {
            do {
              *(undefined4 *)((long)pvVar35 + 8) = 0;
              uVar31 = uVar31 - 1;
              *(undefined8 *)((long)pvVar35 + 0x10) = 0;
              *(undefined4 *)((long)pvVar35 + 0x20) = 0;
              pvVar35 = (void *)((long)pvVar35 + 0x28);
            } while (uVar31 != 0);
          }
          if (0x77 < uVar43) {
            do {
              *(undefined4 *)((long)pvVar35 + 8) = 0;
              *(undefined8 *)((long)pvVar35 + 0x10) = 0;
              *(undefined4 *)((long)pvVar35 + 0x20) = 0;
              *(undefined4 *)((long)pvVar35 + 0x30) = 0;
              *(undefined8 *)((long)pvVar35 + 0x38) = 0;
              *(undefined4 *)((long)pvVar35 + 0x48) = 0;
              *(undefined4 *)((long)pvVar35 + 0x58) = 0;
              *(undefined8 *)((long)pvVar35 + 0x60) = 0;
              *(undefined4 *)((long)pvVar35 + 0x70) = 0;
              *(undefined4 *)((long)pvVar35 + 0x80) = 0;
              *(undefined8 *)((long)pvVar35 + 0x88) = 0;
              *(undefined4 *)((long)pvVar35 + 0x98) = 0;
              pvVar35 = (void *)((long)pvVar35 + 0xa0);
            } while (pvVar35 != (void *)((long)pvVar23 + lVar47));
          }
          *(uint *)(param_1 + 0x80) = uVar37;
          *(void **)(param_1 + 0x88) = pvVar23;
        }
      }
      else {
        plVar22 = param_8;
        if (param_8 != (long *)0x0) {
LAB_039aaec0:
          pvVar23 = (void *)(**(code **)(*plVar22 + 0x30))(plVar22,sVar53,8);
          goto joined_r0x039aaee4;
        }
        lVar21 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar22 = (long *)(lVar47 + 8);
        if (lVar21 != 0) {
          plVar22 = (long *)(lVar21 + 0xa8);
        }
        plVar22 = (long *)*plVar22;
        if (plVar22 != (long *)0x0) goto LAB_039aaec0;
      }
      uStack_88a = 0;
      local_898 = 0xffffffff;
      uStack_894 = 0xffffffff;
      local_860 = 0xffffffffffffffff;
      local_840 = 0xffffffffffffffff;
      local_820 = 0xffffffffffffffff;
      local_800 = 0xffffffffffffffff;
      uStack_88c = 1;
      bStack_88b = 0;
      local_870 = 8;
      local_850 = 8;
      local_830 = 8;
      local_810 = 8;
      puVar55 = &local_898;
      if (param_7 != (uint *)0x0) {
        puVar55 = param_7;
      }
      local_888 = 0;
      local_880 = 0;
      local_878 = 0;
      local_868 = 0;
      local_858 = 0;
      local_848 = 0;
      local_838 = 0;
      local_828 = 0;
      local_818 = 0;
      *puVar55 = (uint)*(ushort *)(param_1 + 0xe4);
      local_808 = 0;
      local_890 = 0xffffffff;
      *(bool *)((long)puVar55 + 0xe) = *(long *)(param_5 + 4) != 0;
      if (*(int *)(param_1 + 200) != 0) {
        local_d20 = 0;
        uVar37 = 0;
        plVar22 = *(long **)(param_1 + 0xd0);
        plVar25 = plVar22 + *(int *)(param_1 + 200);
        puVar57 = &local_898;
        if (param_7 != (uint *)0x0) {
          puVar57 = param_7;
        }
        puVar3 = PTR_DAT_04bb3498 + 0x10;
        pbVar48 = PTR_DAT_04bb3490;
        plVar56 = (long *)PTR_DAT_04bb3488;
        do {
          lVar47 = *plVar22;
          uVar31 = (ulong)*(ushort *)(*(long *)(lVar47 + 0x20) + 0xe2);
          if (uVar31 != 0) {
            uVar43 = 0;
LAB_039ab108:
            lVar21 = *(long *)(param_1 + 0x88);
            lVar42 = *(long *)(lVar47 + 0x38);
            uVar30 = uVar37;
            if (*(uint *)(param_1 + 0x80) <= uVar37) {
              uVar30 = 0;
            }
            *(ulong *)(lVar21 + (long)(int)uVar30 * 0x28) = lVar42 + uVar43 * 0x18;
            puVar45 = (uint *)(lVar21 + (long)(int)uVar30 * 0x28 + 0x20);
            *puVar45 = 6;
            lVar42 = *(long *)(lVar42 + uVar43 * 0x18);
            uVar38 = puVar57[1];
            if ((int)uVar38 <= (int)(uint)*(ushort *)(lVar42 + 0x4c)) {
              uVar38 = (uint)*(ushort *)(lVar42 + 0x4c);
            }
            puVar57[1] = uVar38;
            uVar38 = puVar57[2];
            if ((int)puVar57[2] <= (int)*(uint *)(lVar42 + 0x44)) {
              uVar38 = *(uint *)(lVar42 + 0x44);
            }
            puVar57[2] = uVar38;
            *(byte *)((long)puVar57 + 0xd) =
                 *(byte *)((long)puVar57 + 0xd) | (*(uint *)(lVar42 + 4) & 1) == 0;
            uVar40 = 0;
            if (*(long *)(param_5 + 4) != 0) {
              uVar40 = *(undefined8 *)(*(long *)(param_5 + 4) + local_d20 * 8);
            }
            *(undefined8 *)(lVar21 + (long)(int)uVar30 * 0x28 + 0x18) = uVar40;
            if (0 < *(int *)(param_6 + 0x30)) {
              lVar54 = 0;
              uVar38 = 0;
LAB_039ab210:
              puVar58 = (undefined8 *)**(undefined8 **)(*(long *)(param_6 + 0x38) + lVar54 * 8);
              if (((*pbVar48 & 1) == 0) && (iVar14 = __cxa_guard_acquire(pbVar48), iVar14 != 0)) {
                *plVar56 = (long)puVar3;
                __cxa_guard_release(pbVar48);
              }
              if (puVar58 != (undefined8 *)0x0) {
                uVar26 = (**(code **)*puVar58)(puVar58,plVar56);
                if ((uVar26 & 1) == 0) goto LAB_039ab200;
                uVar26 = (ulong)*(ushort *)(lVar42 + 0x4c);
                if (uVar26 == 0) goto LAB_039ab200;
                lVar49 = *(long *)(*(long *)puVar58[0x22] + 8);
                if (lVar49 == 0) goto LAB_039ab200;
                plVar56 = *(long **)(lVar42 + 0x28);
                uVar32 = (ulong)*(ushort *)(lVar49 + 0xc);
                uVar13 = ((int *)(lVar49 + 8))[uVar32 * 4];
                if (*(int *)(lVar49 + 8) < (int)uVar13) {
                  uVar52 = 0;
                  do {
                    pcVar4 = (char *)(plVar56[uVar52 * 7] + 2);
                    sVar53 = strlen(pcVar4);
                    uVar51 = uVar32;
                    uVar5 = uVar13;
                    do {
                      uVar41 = (long)((ulong)uVar5 << 0x20) >> 0x23;
                      if (uVar41 < sVar53) {
                        uVar41 = (ulong)((byte)pcVar4[sVar53 + ~uVar41] >> ((ulong)uVar5 & 7)) & 1;
                      }
                      else {
                        uVar41 = 0;
                      }
                      uVar51 = (ulong)*(ushort *)(lVar49 + 8 + uVar51 * 0x10 + uVar41 * 2 + 4);
                      uVar6 = *(uint *)(lVar49 + 8 + uVar51 * 0x10);
                      bVar12 = (int)uVar5 < (int)uVar6;
                      uVar5 = uVar6;
                    } while (bVar12);
                    puVar33 = *(ushort **)(lVar49 + uVar51 * 0x10 + 0x10);
                    if (((sVar53 == *puVar33) &&
                        (iVar14 = memcmp(puVar33 + 1,pcVar4,sVar53), iVar14 == 0)) &&
                       ((uVar51 * 0x10 + 0xffffffff0 >> 0x23 & 1) == 0)) goto LAB_039ab1d4;
                    uVar52 = uVar52 + 1;
                  } while (uVar52 != uVar26);
                }
                else if ((uVar32 * 0x10 + 0xffffffff0 >> 0x23 & 1) == 0) {
                  puVar33 = *(ushort **)(lVar49 + uVar32 * 0x10 + 0x10);
                  uVar32 = (ulong)*puVar33;
                  do {
                    lVar49 = *plVar56;
                    sVar53 = strlen((char *)(lVar49 + 2));
                    if ((sVar53 == uVar32) &&
                       (iVar14 = memcmp(puVar33 + 1,(char *)(lVar49 + 2),uVar32), iVar14 == 0))
                    goto LAB_039ab1d4;
                    uVar26 = uVar26 - 1;
                    plVar56 = plVar56 + 7;
                  } while (uVar26 != 0);
                }
                goto LAB_039ab1f0;
              }
              goto LAB_039ab200;
            }
            goto LAB_039ab0f0;
          }
LAB_039ab080:
          local_d20 = local_d20 + 1;
          plVar22 = plVar22 + 1;
        } while (plVar22 != plVar25);
      }
      uVar37 = *param_5;
      if (0 < (int)uVar37) {
        sVar53 = (ulong)uVar37 * 0xb8 + 8;
        lVar47 = *(long *)PTR_DAT_04bb2698;
        if (lVar47 == 0) {
          puVar28 = malloc(sVar53);
        }
        else {
          plVar22 = param_8;
          if (param_8 == (long *)0x0) {
            lVar21 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            plVar22 = (long *)(lVar47 + 8);
            if (lVar21 != 0) {
              plVar22 = (long *)(lVar21 + 0xa8);
            }
            plVar22 = (long *)*plVar22;
            if (plVar22 == (long *)0x0) goto LAB_039ab5fc;
          }
          puVar28 = (ulong *)(**(code **)(*plVar22 + 0x30))(plVar22,sVar53,8);
        }
        if (puVar28 != (ulong *)0x0) {
          puVar29 = puVar28 + 9;
          *puVar28 = (ulong)uVar37;
          puVar11 = PTR_FUN_04bd09a0;
          lVar47 = (ulong)uVar37 * 0xb8;
          puVar3 = PTR_DAT_04bd0ab0 + 0x10;
          do {
            *(undefined4 *)(puVar29 + -8) = 0xffffffff;
            lVar47 = lVar47 + -0xb8;
            puVar29[-3] = 0;
            puVar29[-2] = 0x3f80000000000000;
            puVar29[-1] = (ulong)puVar11;
            puVar29[2] = 0;
            *(undefined4 *)(puVar29 + 3) = 0;
            *(undefined4 *)(puVar29 + 0xd) = 0;
            puVar29[8] = 0;
            *puVar29 = 0;
            puVar29[1] = 0;
            puVar29[4] = 0;
            puVar29[5] = 0;
            puVar29[6] = 0;
            puVar29[7] = 0;
            puVar29[-5] = (ulong)puVar3;
            puVar29[-4] = (ulong)(puVar29 + -3);
            puVar29[0xb] = 0;
            puVar29[0xc] = 0;
            puVar29[9] = 0;
            puVar29[10] = 0;
            puVar29 = puVar29 + 0x17;
          } while (lVar47 != 0);
          *(uint *)(param_1 + 0x38) = uVar37;
          *(ulong **)(param_1 + 0x40) = puVar28 + 1;
        }
      }
LAB_039ab5fc:
      FUN_003a4744(puVar55);
      local_470 = 0;
      local_478 = 0;
      local_468 = 0;
      local_458 = 0;
      puVar57 = &local_898;
      if (param_7 != (uint *)0x0) {
        puVar57 = param_7;
      }
      local_460 = 8;
      uVar31 = *(long *)(puVar57 + 4) + 0xfU & 0xfffffffffffffff0;
      local_450 = 0xffffffffffffffff;
      local_480 = (undefined *)CONCAT44(local_480._4_4_,(uint)*(ushort *)(param_1 + 0xe4));
      FUN_003a8408(&local_480);
      lVar47 = local_478;
      sVar53 = local_478 + uVar31 * (long)(int)*param_5;
      lVar21 = *(long *)PTR_DAT_04bb2698;
      if (lVar21 == 0) {
        pvVar23 = malloc(sVar53);
      }
      else {
        plVar22 = param_8;
        if (param_8 == (long *)0x0) {
          lVar42 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar22 = (long *)(lVar21 + 8);
          if (lVar42 != 0) {
            plVar22 = (long *)(lVar42 + 0xa8);
          }
          plVar22 = (long *)*plVar22;
          if (plVar22 == (long *)0x0) {
            pvVar23 = (void *)0x0;
            goto LAB_039ab6cc;
          }
        }
        pvVar23 = (void *)(**(code **)(*plVar22 + 0x30))(plVar22,sVar53,0x10);
      }
LAB_039ab6cc:
      iVar14 = *(int *)(param_1 + 0x38);
      if (iVar14 != 0) {
        lVar21 = *(long *)(param_1 + 0x40);
        iVar15 = 0;
        do {
          lVar42 = lVar21 + (long)iVar15 * 0xb8;
          FUN_003a4830(lVar42 + 0x18,puVar55,pvVar23,uVar31);
          iVar15 = iVar15 + 1;
          pvVar23 = (void *)((long)pvVar23 + uVar31);
          *(undefined8 *)(lVar42 + 8) = 0;
          *(undefined4 *)(lVar42 + 0x10) = 0;
          *(undefined8 *)(lVar42 + 0xa8) = 0;
          *(undefined2 *)(lVar42 + 0xb0) = 0;
        } while (iVar14 != iVar15);
      }
      FUN_003a8438(param_1 + 0x18,&local_480,pvVar23,lVar47);
      uVar30 = (uint)*(ushort *)(param_1 + 0xe6);
    }
  }
  if ((param_5[1] != 0) && (uVar30 != 0)) {
    if (*(int *)(param_1 + 200) == 0) {
      iVar39 = 0;
      iVar18 = 0;
      iVar17 = 0;
      iVar16 = 0;
      iVar15 = 0;
      iVar14 = 0;
    }
    else {
      iVar14 = 0;
      iVar15 = 0;
      iVar16 = 0;
      iVar17 = 0;
      iVar18 = 0;
      iVar39 = 0;
      lVar47 = (long)*(int *)(param_1 + 200) << 3;
      plVar22 = *(long **)(param_1 + 0xd0);
      do {
        lVar21 = *plVar22;
        lVar47 = lVar47 + -8;
        iVar14 = iVar14 + (uint)*(ushort *)(lVar21 + 0x78);
        iVar15 = iVar15 + (uint)*(ushort *)(lVar21 + 0x7a);
        iVar16 = iVar16 + (uint)*(ushort *)(lVar21 + 0x7c);
        iVar17 = iVar17 + (uint)*(ushort *)(lVar21 + 0x7e);
        iVar18 = iVar18 + (uint)*(ushort *)(lVar21 + 0x80);
        iVar39 = iVar39 + (uint)*(ushort *)(lVar21 + 0x82);
        plVar22 = plVar22 + 1;
      } while (lVar47 != 0);
    }
    iVar16 = iVar14 + iVar15 + iVar16;
    iVar17 = iVar16 + iVar17;
    iVar18 = iVar17 + iVar18;
    uVar37 = iVar18 + iVar39;
    if (uVar37 != 0) {
      *(short *)(param_1 + 0xa0) = (short)iVar14;
      *(short *)(param_1 + 0xa2) = (short)(iVar14 + iVar15);
      *(short *)(param_1 + 0xa4) = (short)iVar16;
      *(short *)(param_1 + 0xa6) = (short)iVar17;
      *(short *)(param_1 + 0xa8) = (short)iVar18;
      *(short *)(param_1 + 0xaa) = (short)uVar37;
      if (0 < (int)uVar37) {
        sVar53 = ((ulong)uVar37 + (ulong)uVar37 * 2) * 8;
        lVar47 = *(long *)PTR_DAT_04bb2698;
        if (lVar47 == 0) {
          pvVar23 = malloc(sVar53);
        }
        else {
          plVar22 = param_8;
          if (param_8 == (long *)0x0) {
            lVar21 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            plVar22 = (long *)(lVar47 + 8);
            if (lVar21 != 0) {
              plVar22 = (long *)(lVar21 + 0xa8);
            }
            plVar22 = (long *)*plVar22;
            if (plVar22 == (long *)0x0) goto LAB_039ab918;
          }
          pvVar23 = (void *)(**(code **)(*plVar22 + 0x30))(plVar22,sVar53,8);
        }
        if (pvVar23 != (void *)0x0) {
          lVar47 = (ulong)uVar37 * 0x18;
          uVar43 = lVar47 - 0x18;
          uVar30 = ((uint)(uVar43 / 0x18) & 0xfffffff) + 1;
          uVar31 = (ulong)uVar30 & 3;
          pvVar35 = pvVar23;
          if ((uVar30 & 3) != 0) {
            do {
              *(undefined4 *)((long)pvVar35 + 8) = 0;
              uVar31 = uVar31 - 1;
              *(undefined8 *)((long)pvVar35 + 0x10) = 0;
              pvVar35 = (void *)((long)pvVar35 + 0x18);
            } while (uVar31 != 0);
          }
          if (0x47 < uVar43) {
            do {
              *(undefined4 *)((long)pvVar35 + 8) = 0;
              *(undefined8 *)((long)pvVar35 + 0x10) = 0;
              *(undefined4 *)((long)pvVar35 + 0x20) = 0;
              *(undefined8 *)((long)pvVar35 + 0x28) = 0;
              *(undefined4 *)((long)pvVar35 + 0x38) = 0;
              *(undefined8 *)((long)pvVar35 + 0x40) = 0;
              *(undefined4 *)((long)pvVar35 + 0x50) = 0;
              *(undefined8 *)((long)pvVar35 + 0x58) = 0;
              pvVar35 = (void *)((long)pvVar35 + 0x60);
            } while (pvVar35 != (void *)((long)pvVar23 + lVar47));
          }
          *(uint *)(param_1 + 0x90) = uVar37;
          *(void **)(param_1 + 0x98) = pvVar23;
        }
      }
LAB_039ab918:
      if (*(short *)(param_1 + 0xa0) == 0) {
        uVar36 = 0;
        uVar37 = 0;
        iVar14 = 0;
        iVar15 = 0;
      }
      else {
        local_888 = CONCAT26(local_888._6_2_,0x100000000);
        local_890 = 0xffffffff;
        uStack_88c = 0xff;
        bStack_88b = 0xff;
        uStack_88a = 0xff;
        uStack_889 = 0xff;
        local_868 = 8;
        local_848 = 8;
        local_828 = 8;
        local_808 = 8;
        local_7e8 = 8;
        local_7c8 = 8;
        uStack_894 = 0xffffffff;
        local_880 = 0;
        local_878 = 0;
        local_870 = 0;
        local_860 = 0;
        local_858 = 0xffffffffffffffff;
        local_850 = 0;
        local_840 = 0;
        local_838 = 0xffffffffffffffff;
        local_830 = 0;
        local_820 = 0;
        local_818 = 0xffffffffffffffff;
        local_810 = 0;
        local_800 = 0;
        local_7f8 = 0xffffffffffffffff;
        local_7f0 = 0;
        local_7e0 = 0;
        local_7d8 = 0xffffffffffffffff;
        local_7d0 = 0;
        local_7c0 = 0;
        local_7b8 = 0xffffffffffffffff;
        local_888 = CONCAT44(local_888._4_4_,0xffffffff);
        local_898 = (uint)*(ushort *)(param_1 + 0xe6);
        if (*(int *)(param_1 + 200) == 0) {
          iVar14 = 0;
        }
        else {
          iVar14 = 0;
          uVar37 = 0;
          puVar3 = PTR_DAT_04bb3498 + 0x10;
          plVar22 = *(long **)(param_1 + 0xd0);
          plVar25 = plVar22 + *(int *)(param_1 + 200);
          plVar56 = (long *)PTR_DAT_04bb3488;
          pbVar48 = PTR_DAT_04bb3490;
          do {
            lVar47 = *plVar22;
            uVar31 = (ulong)*(ushort *)(lVar47 + 0x78);
            if (uVar31 != 0) {
              uVar43 = 0;
              do {
                uVar26 = local_888;
                plVar27 = (long *)(*(long *)(lVar47 + 0x48) + uVar43 * 0x18);
                lVar21 = *plVar27;
                if ((int)uStack_894 <= (int)(uint)*(ushort *)(lVar21 + 0x62)) {
                  uStack_894 = (uint)*(ushort *)(lVar21 + 0x62);
                }
                uVar30 = (uint)*(ushort *)(lVar21 + 0x68) + (uint)*(ushort *)(lVar21 + 0x66);
                if ((int)local_890 <= (int)uVar30) {
                  local_890 = uVar30;
                }
                uVar38 = CONCAT13(uStack_889,CONCAT12(uStack_88a,CONCAT11(bStack_88b,uStack_88c)));
                uVar30 = (uint)local_888;
                if ((int)(uint)local_888 <= (int)(uint)*(ushort *)(lVar21 + 100)) {
                  uVar30 = (uint)*(ushort *)(lVar21 + 100);
                }
                local_888 = CONCAT44(local_888._4_4_,uVar30);
                uVar40 = local_888;
                if ((int)uVar38 <= (int)(uint)*(ushort *)(lVar21 + 0x6c)) {
                  uVar38 = (uint)*(ushort *)(lVar21 + 0x6c);
                }
                lVar42 = *(long *)(param_1 + 0x98);
                uStack_88c = (undefined1)uVar38;
                bStack_88b = (byte)(uVar38 >> 8);
                uStack_88a = (undefined1)(uVar38 >> 0x10);
                uStack_889 = (undefined1)(uVar38 >> 0x18);
                local_888._5_1_ = SUB81(uVar26,5);
                local_888._6_2_ = SUB82(uVar26,6);
                local_888._0_5_ = (undefined5)uVar40;
                local_888._0_6_ =
                     CONCAT15(local_888._5_1_ | (*(ushort *)(lVar21 + 4) & 1) == 0,
                              (undefined5)local_888);
                uVar30 = uVar37;
                if (*(uint *)(param_1 + 0x90) <= uVar37) {
                  uVar30 = 0;
                }
                *(long **)(lVar42 + (long)(int)uVar30 * 0x18) = plVar27;
                if (0 < *(int *)(param_1 + 8)) {
                  lVar54 = 0;
                  uVar38 = 0;
                  do {
                    puVar58 = (undefined8 *)
                              **(undefined8 **)(*(long *)(param_6 + 0x38) + lVar54 * 8);
                    if (((*pbVar48 & 1) == 0) &&
                       (iVar15 = __cxa_guard_acquire(pbVar48), iVar15 != 0)) {
                      *plVar56 = (long)puVar3;
                      __cxa_guard_release(pbVar48);
                    }
                    if (puVar58 != (undefined8 *)0x0) {
                      uVar26 = (**(code **)*puVar58)(puVar58,plVar56);
                      if ((uVar26 & 1) != 0) {
                        uVar26 = (ulong)*(ushort *)(lVar21 + 0x62);
                        if (uVar26 != 0) {
                          lVar49 = *(long *)(puVar58[0x1b] + 0x48);
                          if (lVar49 != 0) {
                            plVar56 = *(long **)(lVar21 + 0x28);
                            lVar44 = *(long *)(puVar58[0x1b] + 0x38);
                            uVar32 = (ulong)*(ushort *)(lVar49 + 0xc);
                            uVar13 = ((int *)(lVar49 + 8))[uVar32 * 4];
                            if (*(int *)(lVar49 + 8) < (int)uVar13) {
                              uVar52 = 0;
                              bVar12 = true;
                              do {
                                pcVar4 = (char *)(plVar56[uVar52 * 8] + 2);
                                sVar53 = strlen(pcVar4);
                                uVar51 = uVar32;
                                uVar5 = uVar13;
                                do {
                                  uVar41 = (long)((ulong)uVar5 << 0x20) >> 0x23;
                                  if (uVar41 < sVar53) {
                                    uVar41 = (ulong)((byte)pcVar4[sVar53 + ~uVar41] >>
                                                    ((ulong)uVar5 & 7)) & 1;
                                  }
                                  else {
                                    uVar41 = 0;
                                  }
                                  uVar51 = (ulong)*(ushort *)
                                                   (lVar49 + 8 + uVar51 * 0x10 + uVar41 * 2 + 4);
                                  uVar6 = *(uint *)(lVar49 + 8 + uVar51 * 0x10);
                                  bVar1 = (int)uVar5 < (int)uVar6;
                                  uVar5 = uVar6;
                                } while (bVar1);
                                puVar33 = *(ushort **)(lVar49 + uVar51 * 0x10 + 0x10);
                                if ((sVar53 == *puVar33) &&
                                   (iVar15 = memcmp(puVar33 + 1,pcVar4,sVar53),
                                   (iVar15 == 0 &&
                                   ((uVar51 * 0x10 + 0xffffffff0 ^ 0xffffffffffffffff) & 0xffffffff0
                                   ) != 0) && lVar44 != 0)) break;
                                uVar52 = uVar52 + 1;
                                bVar12 = uVar52 < uVar26;
                              } while (uVar52 != uVar26);
                            }
                            else {
                              if (lVar44 == 0 ||
                                  ((uVar32 * 0x10 + 0xffffffff0 ^ 0xffffffffffffffff) & 0xffffffff0)
                                  == 0) {
                                plVar56 = (long *)PTR_DAT_04bb3488;
                                goto LAB_039abb20;
                              }
                              uVar52 = 0;
                              puVar33 = *(ushort **)(lVar49 + uVar32 * 0x10 + 0x10);
                              bVar12 = true;
                              uVar32 = (ulong)*puVar33;
                              do {
                                lVar49 = *plVar56;
                                sVar53 = strlen((char *)(lVar49 + 2));
                                if ((sVar53 == uVar32) &&
                                   (iVar15 = memcmp(puVar33 + 1,(char *)(lVar49 + 2),uVar32),
                                   iVar15 == 0)) break;
                                uVar52 = uVar52 + 1;
                                plVar56 = plVar56 + 8;
                                bVar12 = uVar52 < uVar26;
                              } while (uVar26 != uVar52);
                            }
                            if (bVar12) {
                              *(int *)((long)&local_480 + (long)(int)uVar38 * 4) = (int)lVar54;
                              uVar38 = uVar38 + 1;
                            }
                            plVar56 = (long *)PTR_DAT_04bb3488;
                            pbVar48 = PTR_DAT_04bb3490;
                          }
                        }
                      }
                    }
LAB_039abb20:
                    lVar54 = lVar54 + 1;
                  } while (lVar54 < *(int *)(param_1 + 8));
                  if (0 < (int)uVar38) {
                    puVar55 = (uint *)(lVar42 + (long)(int)uVar30 * 0x18 + 8);
                    lVar21 = *(long *)PTR_DAT_04bb2698;
                    if (lVar21 == 0) {
                      pvVar23 = malloc((ulong)uVar38 << 1);
                      if (pvVar23 == (void *)0x0) goto LAB_039abe04;
LAB_039abdd0:
                      *puVar55 = uVar38;
                      *(void **)(lVar42 + (long)(int)uVar30 * 0x18 + 0x10) = pvVar23;
                      uVar13 = uVar38;
LAB_039abe28:
                      uVar26 = 0;
                      puVar58 = &local_480;
                      do {
                        *(short *)((long)pvVar23 +
                                  (-(uVar26 >> 0x1f) & 0xfffffffe00000000 | uVar26 << 1)) =
                             (short)*(undefined4 *)puVar58;
                        uVar32 = uVar26 + 1;
                        uVar26 = uVar32 & 0xffffffff;
                        puVar58 = (undefined8 *)((long)puVar58 + 4);
                      } while (uVar13 != (uint)uVar32);
                    }
                    else {
                      plVar27 = param_8;
                      if (param_8 == (long *)0x0) {
                        lVar54 = nn::os::GetTlsValue(*(undefined4 *)
                                                      (*(long *)PTR_DAT_04bb3350 + 0x68));
                        plVar27 = (long *)(lVar21 + 8);
                        if (lVar54 != 0) {
                          plVar27 = (long *)(lVar54 + 0xa8);
                        }
                        plVar27 = (long *)*plVar27;
                        if (plVar27 == (long *)0x0) goto LAB_039abe04;
                      }
                      pvVar23 = (void *)(**(code **)(*plVar27 + 0x30))(plVar27,(ulong)uVar38 << 1,8)
                      ;
                      if (pvVar23 != (void *)0x0) goto LAB_039abdd0;
LAB_039abe04:
                      uVar13 = *puVar55;
                      if (uVar13 != 0) {
                        pvVar23 = *(void **)(lVar42 + (long)(int)uVar30 * 0x18 + 0x10);
                        goto LAB_039abe28;
                      }
                    }
                    iVar14 = iVar14 + uVar38 + -1;
                  }
                }
                uVar43 = uVar43 + 1;
                uVar37 = uVar37 + 1;
              } while (uVar43 != uVar31);
            }
            plVar22 = plVar22 + 1;
          } while (plVar22 != plVar25);
        }
        FUN_003aac60(&local_898);
        uVar37 = 0xa0;
        uVar31 = (ulong)*(uint *)(param_1 + 0xe0);
        if (*(uint *)(param_1 + 0xe0) <= local_880) {
          uVar31 = local_880;
        }
        uVar36 = *(ushort *)(param_1 + 0xa0);
        *(int *)(param_1 + 0xe0) = (int)uVar31;
        iVar15 = 8;
      }
      uVar7 = *(ushort *)(param_1 + 0xa2);
      if (uVar36 < uVar7) {
        local_888 = CONCAT26(local_888._6_2_,0x100000000);
        local_868 = 8;
        local_848 = 8;
        iVar39 = 0;
        local_828 = 8;
        local_808 = 8;
        local_7e8 = 8;
        local_7c8 = 8;
        local_890 = 0xffffffff;
        uStack_88c = 0xff;
        bStack_88b = 0xff;
        uStack_88a = 0xff;
        uStack_889 = 0xff;
        uStack_894 = 0xffffffff;
        local_880 = 0;
        local_878 = 0;
        local_870 = 0;
        local_860 = 0;
        local_858 = 0xffffffffffffffff;
        local_850 = 0;
        local_840 = 0;
        local_838 = 0xffffffffffffffff;
        local_830 = 0;
        local_820 = 0;
        local_818 = 0xffffffffffffffff;
        local_810 = 0;
        local_800 = 0;
        local_7f8 = 0xffffffffffffffff;
        local_7f0 = 0;
        local_7e0 = 0;
        local_7d8 = 0xffffffffffffffff;
        local_7d0 = 0;
        local_7c0 = 0;
        local_7b8 = 0xffffffffffffffff;
        local_888 = CONCAT44(local_888._4_4_,0xffffffff);
        local_898 = (uint)*(ushort *)(param_1 + 0xe6);
        if (*(int *)(param_1 + 200) != 0) {
          iVar15 = 0;
          puVar3 = PTR_DAT_04bb3498 + 0x10;
          plVar22 = *(long **)(param_1 + 0xd0);
          plVar25 = plVar22 + *(int *)(param_1 + 200);
          plVar56 = (long *)PTR_DAT_04bb3488;
          pbVar48 = PTR_DAT_04bb3490;
          do {
            lVar47 = *plVar22;
            uVar31 = (ulong)*(ushort *)(lVar47 + 0x7a);
            if (uVar31 != 0) {
              uVar43 = 0;
              do {
                uVar26 = local_888;
                plVar27 = (long *)(*(long *)(lVar47 + 0x50) + uVar43 * 0x18);
                lVar21 = *plVar27;
                if ((int)uStack_894 <= (int)(uint)*(ushort *)(lVar21 + 0x62)) {
                  uStack_894 = (uint)*(ushort *)(lVar21 + 0x62);
                }
                uVar37 = (uint)*(ushort *)(lVar21 + 0x68) + (uint)*(ushort *)(lVar21 + 0x66);
                if ((int)local_890 <= (int)uVar37) {
                  local_890 = uVar37;
                }
                uVar30 = CONCAT13(uStack_889,CONCAT12(uStack_88a,CONCAT11(bStack_88b,uStack_88c)));
                uVar37 = (uint)local_888;
                if ((int)(uint)local_888 <= (int)(uint)*(ushort *)(lVar21 + 100)) {
                  uVar37 = (uint)*(ushort *)(lVar21 + 100);
                }
                local_888 = CONCAT44(local_888._4_4_,uVar37);
                uVar40 = local_888;
                if ((int)uVar30 <= (int)(uint)*(ushort *)(lVar21 + 0x6c)) {
                  uVar30 = (uint)*(ushort *)(lVar21 + 0x6c);
                }
                lVar42 = *(long *)(param_1 + 0x98);
                uStack_88c = (undefined1)uVar30;
                bStack_88b = (byte)(uVar30 >> 8);
                uStack_88a = (undefined1)(uVar30 >> 0x10);
                uStack_889 = (undefined1)(uVar30 >> 0x18);
                local_888._5_1_ = SUB81(uVar26,5);
                local_888._6_2_ = SUB82(uVar26,6);
                local_888._0_5_ = (undefined5)uVar40;
                local_888._0_6_ =
                     CONCAT15(local_888._5_1_ | (*(ushort *)(lVar21 + 4) & 1) == 0,
                              (undefined5)local_888);
                uVar37 = iVar15 + (uint)*(ushort *)(param_1 + 0xa0);
                if (*(uint *)(param_1 + 0x90) <= uVar37) {
                  uVar37 = 0;
                }
                *(long **)(lVar42 + (long)(int)uVar37 * 0x18) = plVar27;
                if (0 < *(int *)(param_1 + 8)) {
                  lVar54 = 0;
                  uVar30 = 0;
                  do {
                    puVar58 = (undefined8 *)
                              **(undefined8 **)(*(long *)(param_6 + 0x38) + lVar54 * 8);
                    if (((*pbVar48 & 1) == 0) &&
                       (iVar16 = __cxa_guard_acquire(pbVar48), iVar16 != 0)) {
                      *plVar56 = (long)puVar3;
                      __cxa_guard_release(pbVar48);
                    }
                    if (puVar58 != (undefined8 *)0x0) {
                      uVar26 = (**(code **)*puVar58)(puVar58,plVar56);
                      if ((uVar26 & 1) != 0) {
                        uVar26 = (ulong)*(ushort *)(lVar21 + 0x62);
                        if (uVar26 != 0) {
                          lVar49 = *(long *)(puVar58[0x1b] + 0x48);
                          if (lVar49 != 0) {
                            plVar27 = *(long **)(lVar21 + 0x28);
                            lVar44 = *(long *)(puVar58[0x1b] + 0x38);
                            uVar32 = (ulong)*(ushort *)(lVar49 + 0xc);
                            uVar38 = ((int *)(lVar49 + 8))[uVar32 * 4];
                            if (*(int *)(lVar49 + 8) < (int)uVar38) {
                              uVar52 = 0;
                              bVar12 = true;
                              do {
                                pcVar4 = (char *)(plVar27[uVar52 * 8] + 2);
                                sVar53 = strlen(pcVar4);
                                uVar51 = uVar32;
                                uVar13 = uVar38;
                                do {
                                  uVar41 = (long)((ulong)uVar13 << 0x20) >> 0x23;
                                  if (uVar41 < sVar53) {
                                    uVar41 = (ulong)((byte)pcVar4[sVar53 + ~uVar41] >>
                                                    ((ulong)uVar13 & 7)) & 1;
                                  }
                                  else {
                                    uVar41 = 0;
                                  }
                                  uVar51 = (ulong)*(ushort *)
                                                   (lVar49 + 8 + uVar51 * 0x10 + uVar41 * 2 + 4);
                                  uVar5 = *(uint *)(lVar49 + 8 + uVar51 * 0x10);
                                  bVar1 = (int)uVar13 < (int)uVar5;
                                  uVar13 = uVar5;
                                } while (bVar1);
                                puVar33 = *(ushort **)(lVar49 + uVar51 * 0x10 + 0x10);
                                if ((sVar53 == *puVar33) &&
                                   (iVar16 = memcmp(puVar33 + 1,pcVar4,sVar53),
                                   (iVar16 == 0 &&
                                   ((uVar51 * 0x10 + 0xffffffff0 ^ 0xffffffffffffffff) & 0xffffffff0
                                   ) != 0) && lVar44 != 0)) break;
                                uVar52 = uVar52 + 1;
                                bVar12 = uVar52 < uVar26;
                              } while (uVar52 != uVar26);
                            }
                            else {
                              plVar56 = (long *)PTR_DAT_04bb3488;
                              if (lVar44 == 0 ||
                                  ((uVar32 * 0x10 + 0xffffffff0 ^ 0xffffffffffffffff) & 0xffffffff0)
                                  == 0) goto LAB_039ac0c0;
                              uVar52 = 0;
                              puVar33 = *(ushort **)(lVar49 + uVar32 * 0x10 + 0x10);
                              bVar12 = true;
                              uVar32 = (ulong)*puVar33;
                              do {
                                lVar49 = *plVar27;
                                sVar53 = strlen((char *)(lVar49 + 2));
                                if ((sVar53 == uVar32) &&
                                   (iVar16 = memcmp(puVar33 + 1,(char *)(lVar49 + 2),uVar32),
                                   iVar16 == 0)) break;
                                uVar52 = uVar52 + 1;
                                plVar27 = plVar27 + 8;
                                bVar12 = uVar52 < uVar26;
                              } while (uVar26 != uVar52);
                            }
                            plVar56 = (long *)PTR_DAT_04bb3488;
                            pbVar48 = PTR_DAT_04bb3490;
                            if (bVar12) {
                              *(int *)((long)&local_480 + (long)(int)uVar30 * 4) = (int)lVar54;
                              uVar30 = uVar30 + 1;
                            }
                          }
                        }
                      }
                    }
LAB_039ac0c0:
                    lVar54 = lVar54 + 1;
                  } while (lVar54 < *(int *)(param_1 + 8));
                  if (0 < (int)uVar30) {
                    puVar55 = (uint *)(lVar42 + (long)(int)uVar37 * 0x18 + 8);
                    lVar21 = *(long *)PTR_DAT_04bb2698;
                    if (lVar21 == 0) {
                      pvVar23 = malloc((ulong)uVar30 << 1);
                      if (pvVar23 == (void *)0x0) goto LAB_039ac3a8;
LAB_039ac370:
                      *puVar55 = uVar30;
                      *(void **)(lVar42 + (long)(int)uVar37 * 0x18 + 0x10) = pvVar23;
                      uVar38 = uVar30;
LAB_039ac3d0:
                      uVar26 = 0;
                      puVar58 = &local_480;
                      do {
                        *(short *)((long)pvVar23 +
                                  (-(uVar26 >> 0x1f) & 0xfffffffe00000000 | uVar26 << 1)) =
                             (short)*(undefined4 *)puVar58;
                        uVar32 = uVar26 + 1;
                        uVar26 = uVar32 & 0xffffffff;
                        puVar58 = (undefined8 *)((long)puVar58 + 4);
                      } while (uVar38 != (uint)uVar32);
                    }
                    else {
                      plVar27 = param_8;
                      if (param_8 == (long *)0x0) {
                        lVar54 = nn::os::GetTlsValue(*(undefined4 *)
                                                      (*(long *)PTR_DAT_04bb3350 + 0x68));
                        plVar27 = (long *)(lVar21 + 8);
                        if (lVar54 != 0) {
                          plVar27 = (long *)(lVar54 + 0xa8);
                        }
                        plVar27 = (long *)*plVar27;
                        if (plVar27 == (long *)0x0) goto LAB_039ac3a8;
                      }
                      pvVar23 = (void *)(**(code **)(*plVar27 + 0x30))(plVar27,(ulong)uVar30 << 1,8)
                      ;
                      if (pvVar23 != (void *)0x0) goto LAB_039ac370;
LAB_039ac3a8:
                      uVar38 = *puVar55;
                      if (uVar38 != 0) {
                        pvVar23 = *(void **)(lVar42 + (long)(int)uVar37 * 0x18 + 0x10);
                        goto LAB_039ac3d0;
                      }
                    }
                    iVar39 = iVar39 + uVar30 + -1;
                  }
                }
                uVar43 = uVar43 + 1;
                iVar15 = iVar15 + 1;
              } while (uVar43 != uVar31);
            }
            plVar22 = plVar22 + 1;
          } while (plVar22 != plVar25);
        }
        FUN_003aac60(&local_898);
        uVar37 = 0xa0;
        uVar31 = (ulong)*(uint *)(param_1 + 0xe0);
        if (*(uint *)(param_1 + 0xe0) <= local_880) {
          uVar31 = local_880;
        }
        *(int *)(param_1 + 0xe0) = (int)uVar31;
        uVar7 = *(ushort *)(param_1 + 0xa2);
        iVar15 = 8;
      }
      else {
        iVar39 = 0;
      }
      uVar36 = *(ushort *)(param_1 + 0xa4);
      if (uVar7 < uVar36) {
        local_888 = CONCAT26(local_888._6_2_,0x100000000);
        local_868 = 8;
        iVar16 = 0;
        local_848 = 8;
        local_828 = 8;
        local_808 = 8;
        local_7e8 = 8;
        local_7c8 = 8;
        local_890 = 0xffffffff;
        uStack_88c = 0xff;
        bStack_88b = 0xff;
        uStack_88a = 0xff;
        uStack_889 = 0xff;
        uStack_894 = 0xffffffff;
        local_880 = 0;
        local_878 = 0;
        local_870 = 0;
        local_860 = 0;
        local_858 = 0xffffffffffffffff;
        local_850 = 0;
        local_840 = 0;
        local_838 = 0xffffffffffffffff;
        local_830 = 0;
        local_820 = 0;
        local_818 = 0xffffffffffffffff;
        local_810 = 0;
        local_800 = 0;
        local_7f8 = 0xffffffffffffffff;
        local_7f0 = 0;
        local_7e0 = 0;
        local_7d8 = 0xffffffffffffffff;
        local_7d0 = 0;
        local_7c0 = 0;
        local_7b8 = 0xffffffffffffffff;
        local_888 = CONCAT44(local_888._4_4_,0xffffffff);
        local_898 = (uint)*(ushort *)(param_1 + 0xe6);
        if (*(int *)(param_1 + 200) != 0) {
          iVar15 = 0;
          puVar3 = PTR_DAT_04bb3498 + 0x10;
          plVar22 = *(long **)(param_1 + 0xd0);
          plVar25 = plVar22 + *(int *)(param_1 + 200);
          plVar56 = (long *)PTR_DAT_04bb3488;
          pbVar48 = PTR_DAT_04bb3490;
          do {
            lVar47 = *plVar22;
            uVar31 = (ulong)*(ushort *)(lVar47 + 0x7c);
            if (uVar31 != 0) {
              uVar43 = 0;
              do {
                uVar26 = local_888;
                plVar27 = (long *)(*(long *)(lVar47 + 0x58) + uVar43 * 0x18);
                lVar21 = *plVar27;
                if ((int)uStack_894 <= (int)(uint)*(ushort *)(lVar21 + 0x62)) {
                  uStack_894 = (uint)*(ushort *)(lVar21 + 0x62);
                }
                uVar37 = (uint)*(ushort *)(lVar21 + 0x68) + (uint)*(ushort *)(lVar21 + 0x66);
                if ((int)local_890 <= (int)uVar37) {
                  local_890 = uVar37;
                }
                uVar30 = CONCAT13(uStack_889,CONCAT12(uStack_88a,CONCAT11(bStack_88b,uStack_88c)));
                uVar37 = (uint)local_888;
                if ((int)(uint)local_888 <= (int)(uint)*(ushort *)(lVar21 + 100)) {
                  uVar37 = (uint)*(ushort *)(lVar21 + 100);
                }
                local_888 = CONCAT44(local_888._4_4_,uVar37);
                uVar40 = local_888;
                if ((int)uVar30 <= (int)(uint)*(ushort *)(lVar21 + 0x6c)) {
                  uVar30 = (uint)*(ushort *)(lVar21 + 0x6c);
                }
                lVar42 = *(long *)(param_1 + 0x98);
                uStack_88c = (undefined1)uVar30;
                bStack_88b = (byte)(uVar30 >> 8);
                uStack_88a = (undefined1)(uVar30 >> 0x10);
                uStack_889 = (undefined1)(uVar30 >> 0x18);
                local_888._5_1_ = SUB81(uVar26,5);
                local_888._6_2_ = SUB82(uVar26,6);
                local_888._0_5_ = (undefined5)uVar40;
                local_888._0_6_ =
                     CONCAT15(local_888._5_1_ | (*(ushort *)(lVar21 + 4) & 1) == 0,
                              (undefined5)local_888);
                uVar37 = iVar15 + (uint)*(ushort *)(param_1 + 0xa2);
                if (*(uint *)(param_1 + 0x90) <= uVar37) {
                  uVar37 = 0;
                }
                *(long **)(lVar42 + (long)(int)uVar37 * 0x18) = plVar27;
                if (0 < *(int *)(param_1 + 8)) {
                  lVar54 = 0;
                  uVar30 = 0;
                  do {
                    puVar58 = (undefined8 *)
                              **(undefined8 **)(*(long *)(param_6 + 0x38) + lVar54 * 8);
                    if (((*pbVar48 & 1) == 0) &&
                       (iVar17 = __cxa_guard_acquire(pbVar48), iVar17 != 0)) {
                      *plVar56 = (long)puVar3;
                      __cxa_guard_release(pbVar48);
                    }
                    if (puVar58 != (undefined8 *)0x0) {
                      uVar26 = (**(code **)*puVar58)(puVar58,plVar56);
                      if ((uVar26 & 1) != 0) {
                        uVar26 = (ulong)*(ushort *)(lVar21 + 0x62);
                        if (uVar26 != 0) {
                          lVar49 = *(long *)(puVar58[0x1b] + 0x48);
                          if (lVar49 != 0) {
                            plVar27 = *(long **)(lVar21 + 0x28);
                            lVar44 = *(long *)(puVar58[0x1b] + 0x38);
                            uVar32 = (ulong)*(ushort *)(lVar49 + 0xc);
                            uVar38 = ((int *)(lVar49 + 8))[uVar32 * 4];
                            if (*(int *)(lVar49 + 8) < (int)uVar38) {
                              uVar52 = 0;
                              bVar12 = true;
                              do {
                                pcVar4 = (char *)(plVar27[uVar52 * 8] + 2);
                                sVar53 = strlen(pcVar4);
                                uVar51 = uVar32;
                                uVar13 = uVar38;
                                do {
                                  uVar41 = (long)((ulong)uVar13 << 0x20) >> 0x23;
                                  if (uVar41 < sVar53) {
                                    uVar41 = (ulong)((byte)pcVar4[sVar53 + ~uVar41] >>
                                                    ((ulong)uVar13 & 7)) & 1;
                                  }
                                  else {
                                    uVar41 = 0;
                                  }
                                  uVar51 = (ulong)*(ushort *)
                                                   (lVar49 + 8 + uVar51 * 0x10 + uVar41 * 2 + 4);
                                  uVar5 = *(uint *)(lVar49 + 8 + uVar51 * 0x10);
                                  bVar1 = (int)uVar13 < (int)uVar5;
                                  uVar13 = uVar5;
                                } while (bVar1);
                                puVar33 = *(ushort **)(lVar49 + uVar51 * 0x10 + 0x10);
                                if ((sVar53 == *puVar33) &&
                                   (iVar17 = memcmp(puVar33 + 1,pcVar4,sVar53),
                                   (iVar17 == 0 &&
                                   ((uVar51 * 0x10 + 0xffffffff0 ^ 0xffffffffffffffff) & 0xffffffff0
                                   ) != 0) && lVar44 != 0)) break;
                                uVar52 = uVar52 + 1;
                                bVar12 = uVar52 < uVar26;
                              } while (uVar52 != uVar26);
                            }
                            else {
                              plVar56 = (long *)PTR_DAT_04bb3488;
                              if (lVar44 == 0 ||
                                  ((uVar32 * 0x10 + 0xffffffff0 ^ 0xffffffffffffffff) & 0xffffffff0)
                                  == 0) goto LAB_039ac670;
                              uVar52 = 0;
                              puVar33 = *(ushort **)(lVar49 + uVar32 * 0x10 + 0x10);
                              bVar12 = true;
                              uVar32 = (ulong)*puVar33;
                              do {
                                lVar49 = *plVar27;
                                sVar53 = strlen((char *)(lVar49 + 2));
                                if ((sVar53 == uVar32) &&
                                   (iVar17 = memcmp(puVar33 + 1,(char *)(lVar49 + 2),uVar32),
                                   iVar17 == 0)) break;
                                uVar52 = uVar52 + 1;
                                plVar27 = plVar27 + 8;
                                bVar12 = uVar52 < uVar26;
                              } while (uVar26 != uVar52);
                            }
                            plVar56 = (long *)PTR_DAT_04bb3488;
                            pbVar48 = PTR_DAT_04bb3490;
                            if (bVar12) {
                              *(int *)((long)&local_480 + (long)(int)uVar30 * 4) = (int)lVar54;
                              uVar30 = uVar30 + 1;
                            }
                          }
                        }
                      }
                    }
LAB_039ac670:
                    lVar54 = lVar54 + 1;
                  } while (lVar54 < *(int *)(param_1 + 8));
                  if (0 < (int)uVar30) {
                    puVar55 = (uint *)(lVar42 + (long)(int)uVar37 * 0x18 + 8);
                    lVar21 = *(long *)PTR_DAT_04bb2698;
                    if (lVar21 == 0) {
                      pvVar23 = malloc((ulong)uVar30 << 1);
                      if (pvVar23 == (void *)0x0) goto LAB_039ac958;
LAB_039ac920:
                      *puVar55 = uVar30;
                      *(void **)(lVar42 + (long)(int)uVar37 * 0x18 + 0x10) = pvVar23;
                      uVar38 = uVar30;
LAB_039ac980:
                      uVar26 = 0;
                      puVar58 = &local_480;
                      do {
                        *(short *)((long)pvVar23 +
                                  (-(uVar26 >> 0x1f) & 0xfffffffe00000000 | uVar26 << 1)) =
                             (short)*(undefined4 *)puVar58;
                        uVar32 = uVar26 + 1;
                        uVar26 = uVar32 & 0xffffffff;
                        puVar58 = (undefined8 *)((long)puVar58 + 4);
                      } while (uVar38 != (uint)uVar32);
                    }
                    else {
                      plVar27 = param_8;
                      if (param_8 == (long *)0x0) {
                        lVar54 = nn::os::GetTlsValue(*(undefined4 *)
                                                      (*(long *)PTR_DAT_04bb3350 + 0x68));
                        plVar27 = (long *)(lVar21 + 8);
                        if (lVar54 != 0) {
                          plVar27 = (long *)(lVar54 + 0xa8);
                        }
                        plVar27 = (long *)*plVar27;
                        if (plVar27 == (long *)0x0) goto LAB_039ac958;
                      }
                      pvVar23 = (void *)(**(code **)(*plVar27 + 0x30))(plVar27,(ulong)uVar30 << 1,8)
                      ;
                      if (pvVar23 != (void *)0x0) goto LAB_039ac920;
LAB_039ac958:
                      uVar38 = *puVar55;
                      if (uVar38 != 0) {
                        pvVar23 = *(void **)(lVar42 + (long)(int)uVar37 * 0x18 + 0x10);
                        goto LAB_039ac980;
                      }
                    }
                    iVar16 = iVar16 + uVar30 + -1;
                  }
                }
                uVar43 = uVar43 + 1;
                iVar15 = iVar15 + 1;
              } while (uVar43 != uVar31);
            }
            plVar22 = plVar22 + 1;
          } while (plVar22 != plVar25);
        }
        FUN_003aac60(&local_898);
        uVar37 = 0xa0;
        uVar31 = (ulong)*(uint *)(param_1 + 0xe0);
        if (*(uint *)(param_1 + 0xe0) <= local_880) {
          uVar31 = local_880;
        }
        uVar36 = *(ushort *)(param_1 + 0xa4);
        *(int *)(param_1 + 0xe0) = (int)uVar31;
        iVar15 = 8;
      }
      else {
        iVar16 = 0;
      }
      uVar7 = *(ushort *)(param_1 + 0xa6);
      if (uVar36 < uVar7) {
        local_888 = CONCAT26(local_888._6_2_,0x100000000);
        local_868 = 8;
        iVar17 = 0;
        local_848 = 8;
        local_828 = 8;
        local_808 = 8;
        local_7e8 = 8;
        local_7c8 = 8;
        local_890 = 0xffffffff;
        uStack_88c = 0xff;
        bStack_88b = 0xff;
        uStack_88a = 0xff;
        uStack_889 = 0xff;
        uStack_894 = 0xffffffff;
        local_880 = 0;
        local_878 = 0;
        local_870 = 0;
        local_860 = 0;
        local_858 = 0xffffffffffffffff;
        local_850 = 0;
        local_840 = 0;
        local_838 = 0xffffffffffffffff;
        local_830 = 0;
        local_820 = 0;
        local_818 = 0xffffffffffffffff;
        local_810 = 0;
        local_800 = 0;
        local_7f8 = 0xffffffffffffffff;
        local_7f0 = 0;
        local_7e0 = 0;
        local_7d8 = 0xffffffffffffffff;
        local_7d0 = 0;
        local_7c0 = 0;
        local_7b8 = 0xffffffffffffffff;
        local_888 = CONCAT44(local_888._4_4_,0xffffffff);
        local_898 = (uint)*(ushort *)(param_1 + 0xe6);
        if (*(int *)(param_1 + 200) != 0) {
          iVar15 = 0;
          puVar3 = PTR_DAT_04bb3498 + 0x10;
          plVar22 = *(long **)(param_1 + 0xd0);
          plVar25 = plVar22 + *(int *)(param_1 + 200);
          plVar56 = (long *)PTR_DAT_04bb3488;
          pbVar48 = PTR_DAT_04bb3490;
          do {
            lVar47 = *plVar22;
            uVar31 = (ulong)*(ushort *)(lVar47 + 0x7e);
            if (uVar31 != 0) {
              uVar43 = 0;
              do {
                uVar26 = local_888;
                plVar27 = (long *)(*(long *)(lVar47 + 0x60) + uVar43 * 0x18);
                lVar21 = *plVar27;
                if ((int)uStack_894 <= (int)(uint)*(ushort *)(lVar21 + 0x62)) {
                  uStack_894 = (uint)*(ushort *)(lVar21 + 0x62);
                }
                uVar37 = (uint)*(ushort *)(lVar21 + 0x68) + (uint)*(ushort *)(lVar21 + 0x66);
                if ((int)local_890 <= (int)uVar37) {
                  local_890 = uVar37;
                }
                uVar30 = CONCAT13(uStack_889,CONCAT12(uStack_88a,CONCAT11(bStack_88b,uStack_88c)));
                uVar37 = (uint)local_888;
                if ((int)(uint)local_888 <= (int)(uint)*(ushort *)(lVar21 + 100)) {
                  uVar37 = (uint)*(ushort *)(lVar21 + 100);
                }
                local_888 = CONCAT44(local_888._4_4_,uVar37);
                uVar40 = local_888;
                if ((int)uVar30 <= (int)(uint)*(ushort *)(lVar21 + 0x6c)) {
                  uVar30 = (uint)*(ushort *)(lVar21 + 0x6c);
                }
                lVar42 = *(long *)(param_1 + 0x98);
                uStack_88c = (undefined1)uVar30;
                bStack_88b = (byte)(uVar30 >> 8);
                uStack_88a = (undefined1)(uVar30 >> 0x10);
                uStack_889 = (undefined1)(uVar30 >> 0x18);
                local_888._5_1_ = SUB81(uVar26,5);
                local_888._6_2_ = SUB82(uVar26,6);
                local_888._0_5_ = (undefined5)uVar40;
                local_888._0_6_ =
                     CONCAT15(local_888._5_1_ | (*(ushort *)(lVar21 + 4) & 1) == 0,
                              (undefined5)local_888);
                uVar37 = iVar15 + (uint)*(ushort *)(param_1 + 0xa4);
                if (*(uint *)(param_1 + 0x90) <= uVar37) {
                  uVar37 = 0;
                }
                *(long **)(lVar42 + (long)(int)uVar37 * 0x18) = plVar27;
                if (0 < *(int *)(param_1 + 8)) {
                  lVar54 = 0;
                  uVar30 = 0;
                  do {
                    puVar58 = (undefined8 *)
                              **(undefined8 **)(*(long *)(param_6 + 0x38) + lVar54 * 8);
                    if (((*pbVar48 & 1) == 0) &&
                       (iVar18 = __cxa_guard_acquire(pbVar48), iVar18 != 0)) {
                      *plVar56 = (long)puVar3;
                      __cxa_guard_release(pbVar48);
                    }
                    if (puVar58 != (undefined8 *)0x0) {
                      uVar26 = (**(code **)*puVar58)(puVar58,plVar56);
                      if ((uVar26 & 1) != 0) {
                        uVar26 = (ulong)*(ushort *)(lVar21 + 0x62);
                        if (uVar26 != 0) {
                          lVar49 = *(long *)(puVar58[0x1b] + 0x48);
                          if (lVar49 != 0) {
                            plVar27 = *(long **)(lVar21 + 0x28);
                            lVar44 = *(long *)(puVar58[0x1b] + 0x38);
                            uVar32 = (ulong)*(ushort *)(lVar49 + 0xc);
                            uVar38 = ((int *)(lVar49 + 8))[uVar32 * 4];
                            if (*(int *)(lVar49 + 8) < (int)uVar38) {
                              uVar52 = 0;
                              bVar12 = true;
                              do {
                                pcVar4 = (char *)(plVar27[uVar52 * 8] + 2);
                                sVar53 = strlen(pcVar4);
                                uVar51 = uVar32;
                                uVar13 = uVar38;
                                do {
                                  uVar41 = (long)((ulong)uVar13 << 0x20) >> 0x23;
                                  if (uVar41 < sVar53) {
                                    uVar41 = (ulong)((byte)pcVar4[sVar53 + ~uVar41] >>
                                                    ((ulong)uVar13 & 7)) & 1;
                                  }
                                  else {
                                    uVar41 = 0;
                                  }
                                  uVar51 = (ulong)*(ushort *)
                                                   (lVar49 + 8 + uVar51 * 0x10 + uVar41 * 2 + 4);
                                  uVar5 = *(uint *)(lVar49 + 8 + uVar51 * 0x10);
                                  bVar1 = (int)uVar13 < (int)uVar5;
                                  uVar13 = uVar5;
                                } while (bVar1);
                                puVar33 = *(ushort **)(lVar49 + uVar51 * 0x10 + 0x10);
                                if ((sVar53 == *puVar33) &&
                                   (iVar18 = memcmp(puVar33 + 1,pcVar4,sVar53),
                                   (iVar18 == 0 &&
                                   ((uVar51 * 0x10 + 0xffffffff0 ^ 0xffffffffffffffff) & 0xffffffff0
                                   ) != 0) && lVar44 != 0)) break;
                                uVar52 = uVar52 + 1;
                                bVar12 = uVar52 < uVar26;
                              } while (uVar52 != uVar26);
                            }
                            else {
                              plVar56 = (long *)PTR_DAT_04bb3488;
                              if (lVar44 == 0 ||
                                  ((uVar32 * 0x10 + 0xffffffff0 ^ 0xffffffffffffffff) & 0xffffffff0)
                                  == 0) goto LAB_039acc20;
                              uVar52 = 0;
                              puVar33 = *(ushort **)(lVar49 + uVar32 * 0x10 + 0x10);
                              bVar12 = true;
                              uVar32 = (ulong)*puVar33;
                              do {
                                lVar49 = *plVar27;
                                sVar53 = strlen((char *)(lVar49 + 2));
                                if ((sVar53 == uVar32) &&
                                   (iVar18 = memcmp(puVar33 + 1,(char *)(lVar49 + 2),uVar32),
                                   iVar18 == 0)) break;
                                uVar52 = uVar52 + 1;
                                plVar27 = plVar27 + 8;
                                bVar12 = uVar52 < uVar26;
                              } while (uVar26 != uVar52);
                            }
                            plVar56 = (long *)PTR_DAT_04bb3488;
                            pbVar48 = PTR_DAT_04bb3490;
                            if (bVar12) {
                              *(int *)((long)&local_480 + (long)(int)uVar30 * 4) = (int)lVar54;
                              uVar30 = uVar30 + 1;
                            }
                          }
                        }
                      }
                    }
LAB_039acc20:
                    lVar54 = lVar54 + 1;
                  } while (lVar54 < *(int *)(param_1 + 8));
                  if (0 < (int)uVar30) {
                    puVar55 = (uint *)(lVar42 + (long)(int)uVar37 * 0x18 + 8);
                    lVar21 = *(long *)PTR_DAT_04bb2698;
                    if (lVar21 == 0) {
                      pvVar23 = malloc((ulong)uVar30 << 1);
                      if (pvVar23 == (void *)0x0) goto LAB_039acf08;
LAB_039aced0:
                      *puVar55 = uVar30;
                      *(void **)(lVar42 + (long)(int)uVar37 * 0x18 + 0x10) = pvVar23;
                      uVar38 = uVar30;
LAB_039acf30:
                      uVar26 = 0;
                      puVar58 = &local_480;
                      do {
                        *(short *)((long)pvVar23 +
                                  (-(uVar26 >> 0x1f) & 0xfffffffe00000000 | uVar26 << 1)) =
                             (short)*(undefined4 *)puVar58;
                        uVar32 = uVar26 + 1;
                        uVar26 = uVar32 & 0xffffffff;
                        puVar58 = (undefined8 *)((long)puVar58 + 4);
                      } while (uVar38 != (uint)uVar32);
                    }
                    else {
                      plVar27 = param_8;
                      if (param_8 == (long *)0x0) {
                        lVar54 = nn::os::GetTlsValue(*(undefined4 *)
                                                      (*(long *)PTR_DAT_04bb3350 + 0x68));
                        plVar27 = (long *)(lVar21 + 8);
                        if (lVar54 != 0) {
                          plVar27 = (long *)(lVar54 + 0xa8);
                        }
                        plVar27 = (long *)*plVar27;
                        if (plVar27 == (long *)0x0) goto LAB_039acf08;
                      }
                      pvVar23 = (void *)(**(code **)(*plVar27 + 0x30))(plVar27,(ulong)uVar30 << 1,8)
                      ;
                      if (pvVar23 != (void *)0x0) goto LAB_039aced0;
LAB_039acf08:
                      uVar38 = *puVar55;
                      if (uVar38 != 0) {
                        pvVar23 = *(void **)(lVar42 + (long)(int)uVar37 * 0x18 + 0x10);
                        goto LAB_039acf30;
                      }
                    }
                    iVar17 = iVar17 + uVar30 + -1;
                  }
                }
                uVar43 = uVar43 + 1;
                iVar15 = iVar15 + 1;
              } while (uVar43 != uVar31);
            }
            plVar22 = plVar22 + 1;
          } while (plVar22 != plVar25);
        }
        FUN_003aac60(&local_898);
        uVar37 = 0xa0;
        uVar31 = (ulong)*(uint *)(param_1 + 0xe0);
        if (*(uint *)(param_1 + 0xe0) <= local_880) {
          uVar31 = local_880;
        }
        *(int *)(param_1 + 0xe0) = (int)uVar31;
        uVar7 = *(ushort *)(param_1 + 0xa6);
        iVar15 = 8;
      }
      else {
        iVar17 = 0;
      }
      uVar36 = *(ushort *)(param_1 + 0xa8);
      if (uVar7 < uVar36) {
        local_888 = 0;
        uStack_894 = 0xffffffff;
        local_890 = 0xffffffff;
        iVar18 = 0;
        uStack_88c = 1;
        bStack_88b = 0;
        local_860 = 0xffffffffffffffff;
        local_870 = 8;
        local_850 = 8;
        local_840 = 0xffffffffffffffff;
        local_830 = 8;
        local_820 = 0xffffffffffffffff;
        local_880 = 0;
        local_878 = 0;
        local_868 = 0;
        local_858 = 0;
        local_848 = 0;
        local_838 = 0;
        local_828 = 0;
        local_898 = (uint)*(ushort *)(param_1 + 0xe4);
        if (*(int *)(param_1 + 200) != 0) {
          iVar15 = 0;
          puVar3 = PTR_DAT_04bb3498 + 0x10;
          plVar22 = *(long **)(param_1 + 0xd0);
          plVar25 = plVar22 + *(int *)(param_1 + 200);
          plVar56 = (long *)PTR_DAT_04bb3488;
          pbVar48 = PTR_DAT_04bb3490;
          do {
            lVar47 = *plVar22;
            uVar31 = (ulong)*(ushort *)(lVar47 + 0x80);
            if (uVar31 != 0) {
              uVar43 = 0;
              do {
                plVar27 = (long *)(*(long *)(lVar47 + 0x68) + uVar43 * 0x18);
                lVar21 = *plVar27;
                if ((int)uStack_894 <= (int)(uint)*(ushort *)(lVar21 + 0x58)) {
                  uStack_894 = (uint)*(ushort *)(lVar21 + 0x58);
                }
                if ((int)local_890 <= (int)(uint)*(ushort *)(lVar21 + 0x5a)) {
                  local_890 = (uint)*(ushort *)(lVar21 + 0x5a);
                }
                lVar42 = *(long *)(param_1 + 0x98);
                bStack_88b = bStack_88b | (*(ushort *)(lVar21 + 4) & 1) == 0;
                uVar30 = iVar15 + (uint)*(ushort *)(param_1 + 0xa6);
                if (*(uint *)(param_1 + 0x90) <= uVar30) {
                  uVar30 = 0;
                }
                *(long **)(lVar42 + (long)(int)uVar30 * 0x18) = plVar27;
                if (0 < *(int *)(param_1 + 8)) {
                  lVar54 = 0;
                  uVar38 = 0;
                  do {
                    puVar58 = (undefined8 *)
                              **(undefined8 **)(*(long *)(param_6 + 0x38) + lVar54 * 8);
                    if (((*pbVar48 & 1) == 0) &&
                       (iVar19 = __cxa_guard_acquire(pbVar48), iVar19 != 0)) {
                      *plVar56 = (long)puVar3;
                      __cxa_guard_release(pbVar48);
                    }
                    if (puVar58 != (undefined8 *)0x0) {
                      uVar26 = (**(code **)*puVar58)(puVar58,plVar56);
                      if ((uVar26 & 1) != 0) {
                        uVar26 = (ulong)*(ushort *)(lVar21 + 0x58);
                        if (uVar26 != 0) {
                          lVar49 = *(long *)(lVar21 + 0x38);
                          lVar44 = *(long *)(*(long *)(puVar58[0x1b] + 0x18) + 8);
                          uVar32 = (ulong)*(ushort *)(lVar44 + 0xc);
                          uVar13 = ((int *)(lVar44 + 8))[uVar32 * 4];
                          if (*(int *)(lVar44 + 8) < (int)uVar13) {
                            uVar52 = 0;
                            bVar12 = true;
                            do {
                              pcVar4 = (char *)(*(long *)(lVar49 + uVar52 * 8) + 2);
                              sVar53 = strlen(pcVar4);
                              uVar51 = uVar32;
                              uVar5 = uVar13;
                              do {
                                uVar41 = (long)((ulong)uVar5 << 0x20) >> 0x23;
                                if (uVar41 < sVar53) {
                                  uVar41 = (ulong)((byte)pcVar4[sVar53 + ~uVar41] >>
                                                  ((ulong)uVar5 & 7)) & 1;
                                }
                                else {
                                  uVar41 = 0;
                                }
                                uVar51 = (ulong)*(ushort *)
                                                 (lVar44 + 8 + uVar51 * 0x10 + uVar41 * 2 + 4);
                                uVar6 = *(uint *)(lVar44 + 8 + uVar51 * 0x10);
                                bVar1 = (int)uVar5 < (int)uVar6;
                                uVar5 = uVar6;
                              } while (bVar1);
                              puVar33 = *(ushort **)(lVar44 + uVar51 * 0x10 + 0x10);
                              if ((sVar53 == *puVar33) &&
                                 (iVar19 = memcmp(puVar33 + 1,pcVar4,sVar53),
                                 iVar19 == 0 &&
                                 ((uVar51 * 0x10 + 0xffffffff0 ^ 0xffffffffffffffff) & 0xffffffff0)
                                 != 0)) break;
                              uVar52 = uVar52 + 1;
                              bVar12 = uVar52 < uVar26;
                            } while (uVar52 != uVar26);
                          }
                          else {
                            if (((uVar32 * 0x10 + 0xffffffff0 ^ 0xffffffffffffffff) & 0xffffffff0)
                                == 0) goto LAB_039ad170;
                            uVar52 = 0;
                            puVar33 = *(ushort **)(lVar44 + uVar32 * 0x10 + 0x10);
                            bVar12 = true;
                            uVar32 = (ulong)*puVar33;
                            do {
                              pcVar4 = (char *)(*(long *)(lVar49 + uVar52 * 8) + 2);
                              sVar53 = strlen(pcVar4);
                              if ((sVar53 == uVar32) &&
                                 (iVar19 = memcmp(puVar33 + 1,pcVar4,uVar32), iVar19 == 0)) break;
                              uVar52 = uVar52 + 1;
                              bVar12 = uVar52 < uVar26;
                            } while (uVar26 != uVar52);
                          }
                          plVar56 = (long *)PTR_DAT_04bb3488;
                          pbVar48 = PTR_DAT_04bb3490;
                          if (bVar12) {
                            *(int *)((long)&local_480 + (long)(int)uVar38 * 4) = (int)lVar54;
                            uVar38 = uVar38 + 1;
                          }
                        }
                      }
                    }
LAB_039ad170:
                    lVar54 = lVar54 + 1;
                  } while (lVar54 < *(int *)(param_1 + 8));
                  if (0 < (int)uVar38) {
                    puVar55 = (uint *)(lVar42 + (long)(int)uVar30 * 0x18 + 8);
                    lVar21 = *(long *)PTR_DAT_04bb2698;
                    if (lVar21 == 0) {
                      pvVar23 = malloc((ulong)uVar38 << 1);
                      if (pvVar23 == (void *)0x0) goto LAB_039ad438;
LAB_039ad408:
                      *puVar55 = uVar38;
                      *(void **)(lVar42 + (long)(int)uVar30 * 0x18 + 0x10) = pvVar23;
                      uVar13 = uVar38;
LAB_039ad458:
                      plVar56 = (long *)PTR_DAT_04bb3488;
                      uVar26 = 0;
                      puVar58 = &local_480;
                      do {
                        *(short *)((long)pvVar23 +
                                  (-(uVar26 >> 0x1f) & 0xfffffffe00000000 | uVar26 << 1)) =
                             (short)*(undefined4 *)puVar58;
                        uVar32 = uVar26 + 1;
                        uVar26 = uVar32 & 0xffffffff;
                        puVar58 = (undefined8 *)((long)puVar58 + 4);
                      } while (uVar13 != (uint)uVar32);
                    }
                    else {
                      plVar56 = param_8;
                      if (param_8 == (long *)0x0) {
                        lVar54 = nn::os::GetTlsValue(*(undefined4 *)
                                                      (*(long *)PTR_DAT_04bb3350 + 0x68));
                        plVar56 = (long *)(lVar21 + 8);
                        if (lVar54 != 0) {
                          plVar56 = (long *)(lVar54 + 0xa8);
                        }
                        plVar56 = (long *)*plVar56;
                        if (plVar56 == (long *)0x0) goto LAB_039ad438;
                      }
                      pvVar23 = (void *)(**(code **)(*plVar56 + 0x30))(plVar56,(ulong)uVar38 << 1,8)
                      ;
                      if (pvVar23 != (void *)0x0) goto LAB_039ad408;
LAB_039ad438:
                      uVar13 = *puVar55;
                      plVar56 = (long *)PTR_DAT_04bb3488;
                      if (uVar13 != 0) {
                        pvVar23 = *(void **)(lVar42 + (long)(int)uVar30 * 0x18 + 0x10);
                        goto LAB_039ad458;
                      }
                    }
                    iVar18 = iVar18 + uVar38 + -1;
                  }
                }
                uVar43 = uVar43 + 1;
                iVar15 = iVar15 + 1;
              } while (uVar43 != uVar31);
            }
            plVar22 = plVar22 + 1;
          } while (plVar22 != plVar25);
        }
        FUN_003aa384(&local_898);
        iVar15 = 8;
        uVar31 = (ulong)*(uint *)(param_1 + 0xe0);
        if (*(uint *)(param_1 + 0xe0) <= local_888) {
          uVar31 = local_888;
        }
        uVar36 = *(ushort *)(param_1 + 0xa8);
        if (uVar37 < 0x81) {
          uVar37 = 0x80;
        }
        *(int *)(param_1 + 0xe0) = (int)uVar31;
      }
      else {
        iVar18 = 0;
      }
      if (uVar36 < *(ushort *)(param_1 + 0xaa)) {
        local_888 = CONCAT26(local_888._6_2_,0x100000000);
        local_868 = 8;
        local_848 = 8;
        local_828 = 8;
        local_808 = 8;
        local_7e8 = 8;
        local_7c8 = 8;
        local_890 = 0xffffffff;
        uStack_88c = 0xff;
        bStack_88b = 0xff;
        uStack_88a = 0xff;
        uStack_889 = 0xff;
        uStack_894 = 0xffffffff;
        local_880 = 0;
        local_878 = 0;
        local_870 = 0;
        local_860 = 0;
        local_858 = 0xffffffffffffffff;
        local_850 = 0;
        local_840 = 0;
        local_838 = 0xffffffffffffffff;
        local_830 = 0;
        local_820 = 0;
        local_818 = 0xffffffffffffffff;
        local_810 = 0;
        local_800 = 0;
        local_7f8 = 0xffffffffffffffff;
        local_7f0 = 0;
        local_7e0 = 0;
        local_7d8 = 0xffffffffffffffff;
        local_7d0 = 0;
        local_7c0 = 0;
        local_7b8 = 0xffffffffffffffff;
        local_888 = CONCAT44(local_888._4_4_,0xffffffff);
        local_898 = (uint)*(ushort *)(param_1 + 0xe6);
        if (*(int *)(param_1 + 200) == 0) {
          iVar19 = 0;
        }
        else {
          iVar19 = 0;
          iVar15 = 0;
          puVar3 = PTR_DAT_04bb3498 + 0x10;
          plVar22 = *(long **)(param_1 + 0xd0);
          plVar25 = plVar22 + *(int *)(param_1 + 200);
          plVar56 = (long *)PTR_DAT_04bb3488;
          pbVar48 = PTR_DAT_04bb3490;
          do {
            lVar47 = *plVar22;
            uVar31 = (ulong)*(ushort *)(lVar47 + 0x82);
            if (uVar31 != 0) {
              uVar43 = 0;
              do {
                uVar26 = local_888;
                plVar27 = (long *)(*(long *)(lVar47 + 0x70) + uVar43 * 0x18);
                lVar21 = *plVar27;
                if ((int)uStack_894 <= (int)(uint)*(ushort *)(lVar21 + 0x62)) {
                  uStack_894 = (uint)*(ushort *)(lVar21 + 0x62);
                }
                uVar37 = (uint)*(ushort *)(lVar21 + 0x68) + (uint)*(ushort *)(lVar21 + 0x66);
                if ((int)local_890 <= (int)uVar37) {
                  local_890 = uVar37;
                }
                uVar30 = CONCAT13(uStack_889,CONCAT12(uStack_88a,CONCAT11(bStack_88b,uStack_88c)));
                uVar37 = (uint)local_888;
                if ((int)(uint)local_888 <= (int)(uint)*(ushort *)(lVar21 + 100)) {
                  uVar37 = (uint)*(ushort *)(lVar21 + 100);
                }
                local_888 = CONCAT44(local_888._4_4_,uVar37);
                uVar40 = local_888;
                if ((int)uVar30 <= (int)(uint)*(ushort *)(lVar21 + 0x6c)) {
                  uVar30 = (uint)*(ushort *)(lVar21 + 0x6c);
                }
                lVar42 = *(long *)(param_1 + 0x98);
                uStack_88c = (undefined1)uVar30;
                bStack_88b = (byte)(uVar30 >> 8);
                uStack_88a = (undefined1)(uVar30 >> 0x10);
                uStack_889 = (undefined1)(uVar30 >> 0x18);
                local_888._5_1_ = SUB81(uVar26,5);
                local_888._6_2_ = SUB82(uVar26,6);
                local_888._0_5_ = (undefined5)uVar40;
                local_888._0_6_ =
                     CONCAT15(local_888._5_1_ | (*(ushort *)(lVar21 + 4) & 1) == 0,
                              (undefined5)local_888);
                uVar37 = iVar15 + (uint)*(ushort *)(param_1 + 0xa8);
                if (*(uint *)(param_1 + 0x90) <= uVar37) {
                  uVar37 = 0;
                }
                *(long **)(lVar42 + (long)(int)uVar37 * 0x18) = plVar27;
                if (0 < *(int *)(param_1 + 8)) {
                  lVar54 = 0;
                  uVar30 = 0;
                  do {
                    puVar58 = (undefined8 *)
                              **(undefined8 **)(*(long *)(param_6 + 0x38) + lVar54 * 8);
                    if (((*pbVar48 & 1) == 0) &&
                       (iVar20 = __cxa_guard_acquire(pbVar48), iVar20 != 0)) {
                      *plVar56 = (long)puVar3;
                      __cxa_guard_release(pbVar48);
                    }
                    if (puVar58 != (undefined8 *)0x0) {
                      uVar26 = (**(code **)*puVar58)(puVar58,plVar56);
                      if ((uVar26 & 1) != 0) {
                        uVar26 = (ulong)*(ushort *)(lVar21 + 0x62);
                        if (uVar26 != 0) {
                          lVar49 = *(long *)(puVar58[0x1b] + 0x48);
                          if (lVar49 != 0) {
                            plVar27 = *(long **)(lVar21 + 0x28);
                            lVar44 = *(long *)(puVar58[0x1b] + 0x38);
                            uVar32 = (ulong)*(ushort *)(lVar49 + 0xc);
                            uVar38 = ((int *)(lVar49 + 8))[uVar32 * 4];
                            if (*(int *)(lVar49 + 8) < (int)uVar38) {
                              uVar52 = 0;
                              bVar12 = true;
                              do {
                                pcVar4 = (char *)(plVar27[uVar52 * 8] + 2);
                                sVar53 = strlen(pcVar4);
                                uVar51 = uVar32;
                                uVar13 = uVar38;
                                do {
                                  uVar41 = (long)((ulong)uVar13 << 0x20) >> 0x23;
                                  if (uVar41 < sVar53) {
                                    uVar41 = (ulong)((byte)pcVar4[sVar53 + ~uVar41] >>
                                                    ((ulong)uVar13 & 7)) & 1;
                                  }
                                  else {
                                    uVar41 = 0;
                                  }
                                  uVar51 = (ulong)*(ushort *)
                                                   (lVar49 + 8 + uVar51 * 0x10 + uVar41 * 2 + 4);
                                  uVar5 = *(uint *)(lVar49 + 8 + uVar51 * 0x10);
                                  bVar1 = (int)uVar13 < (int)uVar5;
                                  uVar13 = uVar5;
                                } while (bVar1);
                                puVar33 = *(ushort **)(lVar49 + uVar51 * 0x10 + 0x10);
                                if ((sVar53 == *puVar33) &&
                                   (iVar20 = memcmp(puVar33 + 1,pcVar4,sVar53),
                                   (iVar20 == 0 &&
                                   ((uVar51 * 0x10 + 0xffffffff0 ^ 0xffffffffffffffff) & 0xffffffff0
                                   ) != 0) && lVar44 != 0)) break;
                                uVar52 = uVar52 + 1;
                                bVar12 = uVar52 < uVar26;
                              } while (uVar52 != uVar26);
                            }
                            else {
                              plVar56 = (long *)PTR_DAT_04bb3488;
                              if (lVar44 == 0 ||
                                  ((uVar32 * 0x10 + 0xffffffff0 ^ 0xffffffffffffffff) & 0xffffffff0)
                                  == 0) goto LAB_039ad6e4;
                              uVar52 = 0;
                              puVar33 = *(ushort **)(lVar49 + uVar32 * 0x10 + 0x10);
                              bVar12 = true;
                              uVar32 = (ulong)*puVar33;
                              do {
                                lVar49 = *plVar27;
                                sVar53 = strlen((char *)(lVar49 + 2));
                                if ((sVar53 == uVar32) &&
                                   (iVar20 = memcmp(puVar33 + 1,(char *)(lVar49 + 2),uVar32),
                                   iVar20 == 0)) break;
                                uVar52 = uVar52 + 1;
                                plVar27 = plVar27 + 8;
                                bVar12 = uVar52 < uVar26;
                              } while (uVar26 != uVar52);
                            }
                            plVar56 = (long *)PTR_DAT_04bb3488;
                            pbVar48 = PTR_DAT_04bb3490;
                            if (bVar12) {
                              *(int *)((long)&local_480 + (long)(int)uVar30 * 4) = (int)lVar54;
                              uVar30 = uVar30 + 1;
                            }
                          }
                        }
                      }
                    }
LAB_039ad6e4:
                    lVar54 = lVar54 + 1;
                  } while (lVar54 < *(int *)(param_1 + 8));
                  if (0 < (int)uVar30) {
                    puVar55 = (uint *)(lVar42 + (long)(int)uVar37 * 0x18 + 8);
                    lVar21 = *(long *)PTR_DAT_04bb2698;
                    if (lVar21 == 0) {
                      pvVar23 = malloc((ulong)uVar30 << 1);
                      if (pvVar23 == (void *)0x0) goto LAB_039ad9c4;
LAB_039ad990:
                      *puVar55 = uVar30;
                      *(void **)(lVar42 + (long)(int)uVar37 * 0x18 + 0x10) = pvVar23;
                      uVar38 = uVar30;
LAB_039ad9e8:
                      uVar26 = 0;
                      puVar58 = &local_480;
                      do {
                        *(short *)((long)pvVar23 +
                                  (-(uVar26 >> 0x1f) & 0xfffffffe00000000 | uVar26 << 1)) =
                             (short)*(undefined4 *)puVar58;
                        uVar32 = uVar26 + 1;
                        uVar26 = uVar32 & 0xffffffff;
                        puVar58 = (undefined8 *)((long)puVar58 + 4);
                      } while (uVar38 != (uint)uVar32);
                    }
                    else {
                      plVar27 = param_8;
                      if (param_8 == (long *)0x0) {
                        lVar54 = nn::os::GetTlsValue(*(undefined4 *)
                                                      (*(long *)PTR_DAT_04bb3350 + 0x68));
                        plVar27 = (long *)(lVar21 + 8);
                        if (lVar54 != 0) {
                          plVar27 = (long *)(lVar54 + 0xa8);
                        }
                        plVar27 = (long *)*plVar27;
                        if (plVar27 == (long *)0x0) goto LAB_039ad9c4;
                      }
                      pvVar23 = (void *)(**(code **)(*plVar27 + 0x30))(plVar27,(ulong)uVar30 << 1,8)
                      ;
                      if (pvVar23 != (void *)0x0) goto LAB_039ad990;
LAB_039ad9c4:
                      uVar38 = *puVar55;
                      if (uVar38 != 0) {
                        pvVar23 = *(void **)(lVar42 + (long)(int)uVar37 * 0x18 + 0x10);
                        goto LAB_039ad9e8;
                      }
                    }
                    iVar19 = iVar19 + uVar30 + -1;
                  }
                }
                uVar43 = uVar43 + 1;
                iVar15 = iVar15 + 1;
              } while (uVar43 != uVar31);
            }
            plVar22 = plVar22 + 1;
          } while (plVar22 != plVar25);
        }
        FUN_003aac60(&local_898);
        uVar37 = 0xa0;
        uVar31 = (ulong)*(uint *)(param_1 + 0xe0);
        if (*(uint *)(param_1 + 0xe0) <= local_880) {
          uVar31 = local_880;
        }
        *(int *)(param_1 + 0xe0) = (int)uVar31;
        iVar15 = 8;
      }
      else {
        iVar19 = 0;
      }
      uVar30 = iVar39 + iVar14 + iVar16 + iVar17 + iVar18 + iVar19;
      *(short *)(param_1 + 0xe8) = (short)uVar30;
      uVar30 = param_5[1] + (uVar30 & 0xffff);
      uVar31 = (ulong)uVar30;
      if (0 < (int)uVar30) {
        sVar53 = (uVar31 + (ulong)uVar30 * 2) * 0x10;
        lVar47 = *(long *)PTR_DAT_04bb2698;
        if (lVar47 == 0) {
          puVar24 = malloc(sVar53);
joined_r0x039adaec:
          if (puVar24 != (undefined4 *)0x0) {
            uVar43 = uVar31 * 0x30 - 0x30;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = uVar43;
            puVar34 = puVar24;
            if ((SUB164(auVar10 * ZEXT816(0xaaaaaaaaaaaaaaab),8) >> 5 & 1) == 0) {
              *(undefined8 *)(puVar24 + 2) = 0;
              *(undefined8 *)(puVar24 + 4) = 0;
              *puVar24 = 0xffffffff;
              puVar24[6] = 0xffff;
              puVar34 = puVar24 + 0xc;
              *(undefined8 *)(puVar24 + 8) = 0;
              *(undefined8 *)(puVar24 + 10) = 0;
            }
            if (0x2f < uVar43) {
              do {
                *puVar34 = 0xffffffff;
                puVar34[6] = 0xffff;
                puVar34[0xc] = 0xffffffff;
                puVar34[0x12] = 0xffff;
                *(undefined8 *)(puVar34 + 2) = 0;
                *(undefined8 *)(puVar34 + 4) = 0;
                *(undefined8 *)(puVar34 + 8) = 0;
                *(undefined8 *)(puVar34 + 10) = 0;
                *(undefined8 *)(puVar34 + 0xe) = 0;
                *(undefined8 *)(puVar34 + 0x10) = 0;
                *(undefined8 *)(puVar34 + 0x14) = 0;
                *(undefined8 *)(puVar34 + 0x16) = 0;
                puVar34 = puVar34 + 0x18;
              } while (puVar34 != puVar24 + uVar31 * 0xc);
            }
            *(uint *)(param_1 + 0x48) = uVar30;
            *(undefined4 **)(param_1 + 0x50) = puVar24;
          }
          lVar47 = *(long *)PTR_DAT_04bb2698;
          if (lVar47 == 0) goto LAB_039ae3f4;
          plVar22 = param_8;
          if (param_8 == (long *)0x0) {
LAB_039adbb4:
            lVar21 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            plVar22 = (long *)(lVar47 + 8);
            if (lVar21 != 0) {
              plVar22 = (long *)(lVar21 + 0xa8);
            }
            plVar22 = (long *)*plVar22;
            if (plVar22 == (long *)0x0) goto LAB_039adc18;
          }
          pvVar23 = (void *)(**(code **)(*plVar22 + 0x30))(plVar22,uVar31 << 2,8);
        }
        else {
          plVar22 = param_8;
          if (param_8 != (long *)0x0) {
LAB_039adac8:
            puVar24 = (undefined4 *)(**(code **)(*plVar22 + 0x30))(plVar22,sVar53,8);
            goto joined_r0x039adaec;
          }
          lVar21 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar22 = (long *)(lVar47 + 8);
          if (lVar21 != 0) {
            plVar22 = (long *)(lVar21 + 0xa8);
          }
          plVar22 = (long *)*plVar22;
          if (plVar22 != (long *)0x0) goto LAB_039adac8;
          lVar47 = *(long *)PTR_DAT_04bb2698;
          if (lVar47 != 0) goto LAB_039adbb4;
LAB_039ae3f4:
          pvVar23 = malloc(uVar31 << 2);
        }
        if (pvVar23 != (void *)0x0) {
          memset(pvVar23,0xff,uVar31 << 2);
          *(uint *)(param_1 + 0x70) = uVar30;
          *(void **)(param_1 + 0x78) = pvVar23;
        }
      }
LAB_039adc18:
      uVar37 = (uVar37 + iVar15 + *(int *)(param_1 + 0xe0)) - 1 & -iVar15;
      uVar31 = (ulong)(uVar37 + (uVar37 + uVar30 * 8) * uVar30);
      lVar47 = *(long *)PTR_DAT_04bb2698;
      if (lVar47 == 0) {
        pvVar23 = malloc(uVar31);
      }
      else {
        plVar22 = param_8;
        if (param_8 == (long *)0x0) {
          lVar21 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar22 = (long *)(lVar47 + 8);
          if (lVar21 != 0) {
            plVar22 = (long *)(lVar21 + 0xa8);
          }
          plVar22 = (long *)*plVar22;
          pvVar23 = (void *)0x0;
          if (plVar22 == (long *)0x0) goto LAB_039adca8;
        }
        pvVar23 = (void *)(**(code **)(*plVar22 + 0x30))(plVar22,uVar31,iVar15);
      }
LAB_039adca8:
      puVar3 = PTR_FUN_04bd09a0;
      iVar14 = *(int *)(param_1 + 0x48);
      if (iVar14 == 0) {
        *(void **)(param_1 + 0x68) = pvVar23;
      }
      else {
        lVar47 = *(long *)(param_1 + 0x50);
        iVar15 = 0;
        do {
          lVar21 = lVar47 + (long)iVar15 * 0x30;
          *(void **)(lVar21 + 8) = pvVar23;
          puVar58 = (undefined8 *)((long)pvVar23 + (ulong)*(uint *)(param_1 + 0xe0));
          pvVar23 = (void *)((long)pvVar23 + (ulong)uVar37);
          puVar58[3] = 0;
          puVar58[4] = puVar3;
          *(undefined4 *)((long)puVar58 + 0x1c) = 0x3f800000;
          puVar58[5] = 0;
          puVar58[6] = 0;
          puVar58[7] = 0;
          puVar58[8] = 0;
          *(undefined4 *)(puVar58 + 8) = 0;
          puVar58[9] = 0;
          puVar58[10] = 0;
          puVar58[2] = 0;
          puVar58[0xb] = 0;
          puVar58[0xc] = 0;
          *puVar58 = &PTR_LAB_04b6a488;
          puVar58[1] = puVar58 + 2;
          *(undefined8 **)(lVar21 + 0x10) = puVar58;
          iVar15 = iVar15 + 1;
          *(undefined4 *)(lVar21 + 0x18) = 0xffff;
        } while (iVar14 != iVar15);
        lVar47 = *(long *)(param_1 + 0x50);
        *(void **)(param_1 + 0x68) = pvVar23;
        iVar14 = *(int *)(param_1 + 0x48);
        if (iVar14 != 0) {
          iVar15 = 0;
          lVar21 = (long)pvVar23 + (ulong)uVar37;
          do {
            lVar42 = lVar47 + (long)iVar15 * 0x30;
            if ((0 < (int)uVar30) && (lVar21 != 0)) {
              *(long *)(lVar42 + 0x28) = lVar21;
              *(uint *)(lVar42 + 0x24) = uVar30;
            }
            *(undefined4 *)(lVar42 + 0x20) = 0;
            iVar15 = iVar15 + 1;
            lVar21 = lVar21 + (ulong)(uVar30 * 8);
          } while (iVar14 != iVar15);
        }
      }
    }
  }
  if (((int)param_5[2] < 1) || (*(int *)(param_1 + 200) == 0)) goto LAB_039ae54c;
  plVar22 = *(long **)(param_1 + 0xd0);
  uVar26 = 0;
  uVar43 = (long)*(int *)(param_1 + 200) - 1U & 0x1fffffffffffffff;
  uVar31 = uVar43 + 1;
  if (uVar43 != 0) {
    uVar43 = uVar31 & 0x3ffffffffffffffe;
    plVar25 = plVar22;
    do {
      plVar22 = plVar25 + 2;
      uVar43 = uVar43 - 2;
      uVar26 = (ulong)((int)uVar26 + (uint)*(ushort *)(*(long *)(*plVar25 + 0x20) + 0xe8) +
                      (uint)*(ushort *)(*(long *)(plVar25[1] + 0x20) + 0xe8));
      plVar25 = plVar22;
    } while (uVar43 != 0);
  }
  if ((uVar31 & 1) != 0) {
    uVar26 = (ulong)((int)uVar26 + (uint)*(ushort *)(*(long *)(*plVar22 + 0x20) + 0xe8));
  }
  if ((int)uVar26 == 0) goto LAB_039ae54c;
  lVar47 = *(long *)PTR_DAT_04bb2698;
  if (lVar47 == 0) {
    pvVar23 = malloc(uVar26 << 5);
joined_r0x039ade7c:
    if (pvVar23 != (void *)0x0) {
      uVar31 = uVar26 & 3;
      pvVar35 = pvVar23;
      if (uVar31 != 0) {
        do {
          *(undefined4 *)((long)pvVar35 + 8) = 0;
          uVar31 = uVar31 - 1;
          *(undefined8 *)((long)pvVar35 + 0x10) = 0;
          *(undefined4 *)((long)pvVar35 + 0x18) = 0;
          pvVar35 = (void *)((long)pvVar35 + 0x20);
        } while (uVar31 != 0);
      }
      if (2 < (uVar26 - 1 & 0x7ffffffffffffff)) {
        do {
          *(undefined4 *)((long)pvVar35 + 8) = 0;
          *(undefined8 *)((long)pvVar35 + 0x10) = 0;
          *(undefined4 *)((long)pvVar35 + 0x18) = 0;
          *(undefined4 *)((long)pvVar35 + 0x28) = 0;
          *(undefined8 *)((long)pvVar35 + 0x30) = 0;
          *(undefined4 *)((long)pvVar35 + 0x38) = 0;
          *(undefined4 *)((long)pvVar35 + 0x48) = 0;
          *(undefined8 *)((long)pvVar35 + 0x50) = 0;
          *(undefined4 *)((long)pvVar35 + 0x58) = 0;
          *(undefined4 *)((long)pvVar35 + 0x68) = 0;
          *(undefined8 *)((long)pvVar35 + 0x70) = 0;
          *(undefined4 *)((long)pvVar35 + 0x78) = 0;
          pvVar35 = (void *)((long)pvVar35 + 0x80);
        } while (pvVar35 != (void *)((long)pvVar23 + uVar26 * 0x20));
      }
      *(int *)(param_1 + 0xb0) = (int)uVar26;
      *(void **)(param_1 + 0xb8) = pvVar23;
    }
  }
  else {
    plVar22 = param_8;
    if (param_8 != (long *)0x0) {
LAB_039ade58:
      pvVar23 = (void *)(**(code **)(*plVar22 + 0x30))(plVar22,uVar26 << 5,8);
      goto joined_r0x039ade7c;
    }
    lVar21 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar22 = (long *)(lVar47 + 8);
    if (lVar21 != 0) {
      plVar22 = (long *)(lVar21 + 0xa8);
    }
    plVar22 = (long *)*plVar22;
    if (plVar22 != (long *)0x0) goto LAB_039ade58;
  }
  local_888 = CONCAT62(local_888._2_6_,1);
  local_890 = 0xffffffff;
  uStack_88c = 0xff;
  bStack_88b = 0xff;
  uStack_88a = 0xff;
  uStack_889 = 0xff;
  local_868 = 8;
  local_848 = 8;
  local_828 = 8;
  local_808 = 8;
  local_898 = 0xffffffff;
  uStack_894 = 0xffffffff;
  local_880 = 0;
  local_878 = 0;
  local_870 = 0;
  local_860 = 0;
  local_858 = 0xffffffffffffffff;
  local_850 = 0;
  local_840 = 0;
  local_838 = 0xffffffffffffffff;
  local_830 = 0;
  local_820 = 0;
  local_818 = 0xffffffffffffffff;
  local_810 = 0;
  local_800 = 0;
  local_7f8 = 0xffffffffffffffff;
  if (*(int *)(param_1 + 200) != 0) {
    uVar37 = 0;
    puVar3 = PTR_DAT_04bb3498 + 0x10;
    plVar22 = *(long **)(param_1 + 0xd0);
    plVar25 = plVar22 + *(int *)(param_1 + 200);
    pbVar48 = PTR_DAT_04bb3490;
    plVar56 = (long *)PTR_DAT_04bb3488;
    do {
      lVar47 = *plVar22;
      uVar31 = (ulong)*(ushort *)(*(long *)(lVar47 + 0x20) + 0xe8);
      if (uVar31 != 0) {
        uVar43 = 0;
        do {
          lVar42 = *(long *)(lVar47 + 0x40);
          lVar21 = *(long *)(param_1 + 0xb8);
          uVar30 = uVar37;
          if (*(uint *)(param_1 + 0xb0) <= uVar37) {
            uVar30 = 0;
          }
          uVar26 = -(ulong)(uVar30 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar30 << 5;
          *(ulong *)(lVar21 + uVar26) = lVar42 + uVar43 * 0x18;
          pbVar46 = (byte *)(lVar21 + uVar26 + 0x18);
          pbVar46[0] = 6;
          pbVar46[1] = 0;
          pbVar46[2] = 0;
          pbVar46[3] = 0;
          lVar42 = *(long *)(lVar42 + uVar43 * 0x18);
          if ((int)uStack_894 <= (int)(uint)*(ushort *)(lVar42 + 0x4a)) {
            uStack_894 = (uint)*(ushort *)(lVar42 + 0x4a);
          }
          if ((int)local_890 <= (int)(uint)*(ushort *)(lVar42 + 0x4c)) {
            local_890 = (uint)*(ushort *)(lVar42 + 0x4c);
          }
          uVar38 = CONCAT13(uStack_889,CONCAT12(uStack_88a,CONCAT11(bStack_88b,uStack_88c)));
          if ((int)uVar38 <= (int)(uint)*(ushort *)(lVar42 + 0x4e)) {
            uVar38 = (uint)*(ushort *)(lVar42 + 0x4e);
          }
          uStack_88c = (undefined1)uVar38;
          bStack_88b = (byte)(uVar38 >> 8);
          uStack_88a = (undefined1)(uVar38 >> 0x10);
          uStack_889 = (undefined1)(uVar38 >> 0x18);
          bVar8 = local_888._1_1_ | (*(ushort *)(lVar42 + 4) & 1) == 0;
          local_888._0_2_ = CONCAT11(bVar8,(undefined1)local_888);
          if (0 < *(int *)(param_6 + 0x30)) {
            lVar54 = 0;
            uVar38 = 0;
            do {
              puVar58 = (undefined8 *)**(undefined8 **)(*(long *)(param_6 + 0x38) + lVar54 * 8);
              if (((*pbVar48 & 1) == 0) && (iVar14 = __cxa_guard_acquire(pbVar48), iVar14 != 0)) {
                *plVar56 = (long)puVar3;
                __cxa_guard_release(pbVar48);
              }
              if (puVar58 != (undefined8 *)0x0) {
                uVar26 = (**(code **)*puVar58)(puVar58,plVar56);
                if (((uVar26 & 1) != 0) && (uVar36 = *(ushort *)(lVar42 + 0x4a), (ulong)uVar36 != 0)
                   ) {
                  lVar49 = puVar58[0x1b];
                  lVar44 = *(long *)(lVar49 + 0x30);
                  if (lVar44 != 0) {
                    lVar50 = *(long *)(lVar42 + 0x28);
                    uVar26 = 0;
                    iVar14 = *(int *)(lVar44 + 8);
                    uVar7 = *(ushort *)(lVar44 + 0xc);
                    puVar55 = (uint *)((int *)(lVar44 + 8) + (ulong)uVar7 * 4);
                    uVar13 = *puVar55;
                    do {
                      pcVar4 = (char *)(*(long *)(lVar50 + uVar26 * 0x30) + 2);
                      sVar53 = strlen(pcVar4);
                      puVar57 = puVar55;
                      if (iVar14 < (int)uVar13) {
                        uVar32 = (ulong)uVar7;
                        uVar5 = uVar13;
                        do {
                          uVar52 = (long)((ulong)uVar5 << 0x20) >> 0x23;
                          if (uVar52 < sVar53) {
                            uVar52 = (ulong)((byte)pcVar4[sVar53 + ~uVar52] >> ((ulong)uVar5 & 7)) &
                                     1;
                          }
                          else {
                            uVar52 = 0;
                          }
                          uVar32 = (ulong)*(ushort *)(lVar44 + 8 + uVar32 * 0x10 + uVar52 * 2 + 4);
                          puVar57 = (uint *)(lVar44 + 8 + uVar32 * 0x10);
                          bVar12 = (int)uVar5 < (int)*puVar57;
                          uVar5 = *puVar57;
                        } while (bVar12);
                      }
                      if ((((sVar53 == **(ushort **)(puVar57 + 2)) &&
                           (iVar15 = memcmp(*(ushort **)(puVar57 + 2) + 1,pcVar4,sVar53),
                           iVar15 == 0)) &&
                          ((((long)puVar57 - (lVar44 + 0x18) ^ 0xffffffffffffffffU) & 0xffffffff0)
                           != 0)) && (*(long *)(lVar49 + 0x28) != 0)) {
                        if ((int)local_898 <= (int)(uint)*(ushort *)(lVar49 + 0x6a)) {
                          local_898 = (uint)*(ushort *)(lVar49 + 0x6a);
                        }
                        *(short *)((long)&local_480 + (long)(int)uVar38 * 2) = (short)lVar54;
                        uVar38 = uVar38 + 1;
                        break;
                      }
                      uVar26 = uVar26 + 1;
                    } while (uVar26 != uVar36);
                    pbVar48 = PTR_DAT_04bb3490;
                    plVar56 = (long *)PTR_DAT_04bb3488;
                  }
                }
              }
              lVar54 = lVar54 + 1;
            } while (lVar54 < *(int *)(param_6 + 0x30));
            if ((0 < (int)uVar38) && ((*pbVar46 & 1) == 0)) {
              lVar42 = *(long *)PTR_DAT_04bb2698;
              lVar21 = lVar21 + (long)(int)uVar30 * 0x20;
              if (lVar42 == 0) {
                pvVar23 = malloc((ulong)uVar38 << 1);
                if (pvVar23 != (void *)0x0) goto LAB_039adff4;
LAB_039ae360:
                pvVar23 = *(void **)(lVar21 + 0x10);
              }
              else {
                plVar27 = param_8;
                if (param_8 == (long *)0x0) {
                  lVar54 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
                  plVar27 = (long *)(lVar42 + 8);
                  if (lVar54 != 0) {
                    plVar27 = (long *)(lVar54 + 0xa8);
                  }
                  plVar27 = (long *)*plVar27;
                  if (plVar27 == (long *)0x0) goto LAB_039ae360;
                }
                pvVar23 = (void *)(**(code **)(*plVar27 + 0x30))(plVar27,(ulong)uVar38 << 1,8);
                if (pvVar23 == (void *)0x0) goto LAB_039ae360;
LAB_039adff4:
                *(void **)(lVar21 + 0x10) = pvVar23;
                *(uint *)(lVar21 + 8) = uVar38;
              }
              memcpy(pvVar23,&local_480,(long)(int)(uVar38 << 1));
            }
          }
          uVar43 = uVar43 + 1;
          uVar37 = uVar37 + 1;
        } while (uVar43 != uVar31);
      }
      plVar22 = plVar22 + 1;
    } while (plVar22 != plVar25);
  }
  FUN_003a97d8(&local_898);
  uVar37 = param_5[2];
  if (0 < (int)uVar37) {
    sVar53 = (ulong)uVar37 * 0x98 + 8;
    lVar47 = *(long *)PTR_DAT_04bb2698;
    if (lVar47 == 0) {
      puVar28 = malloc(sVar53);
    }
    else {
      plVar22 = param_8;
      if (param_8 == (long *)0x0) {
        lVar21 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar22 = (long *)(lVar47 + 8);
        if (lVar21 != 0) {
          plVar22 = (long *)(lVar21 + 0xa8);
        }
        plVar22 = (long *)*plVar22;
        if (plVar22 == (long *)0x0) goto LAB_039ae488;
      }
      puVar28 = (ulong *)(**(code **)(*plVar22 + 0x30))(plVar22,sVar53,8);
    }
    if (puVar28 != (ulong *)0x0) {
      puVar29 = puVar28 + 0xb;
      *puVar28 = (ulong)uVar37;
      puVar11 = PTR_FUN_04bd09a0;
      lVar47 = (ulong)uVar37 * 0x98;
      puVar3 = PTR_DAT_04bd09e0 + 0x10;
      do {
        *(undefined4 *)(puVar29 + -10) = 0xffffffff;
        lVar47 = lVar47 + -0x98;
        puVar29[-7] = 0;
        puVar29[-6] = 0x3f80000000000000;
        puVar29[-5] = (ulong)puVar11;
        puVar29[-2] = 0;
        *(undefined4 *)(puVar29 + -1) = 0;
        *(undefined2 *)((long)puVar29 + 0x44) = 0;
        puVar29[-4] = 0;
        puVar29[-3] = 0;
        *puVar29 = 0;
        puVar29[1] = 0;
        puVar29[2] = 0;
        puVar29[3] = 0;
        puVar29[-9] = (ulong)puVar3;
        puVar29[-8] = (ulong)(puVar29 + -7);
        puVar29[6] = 0;
        puVar29[7] = 0;
        puVar29[4] = 0;
        puVar29[5] = 0;
        puVar29 = puVar29 + 0x13;
      } while (lVar47 != 0);
      *(uint *)(param_1 + 0x58) = uVar37;
      *(ulong **)(param_1 + 0x60) = puVar28 + 1;
    }
  }
LAB_039ae488:
  uVar31 = local_880 + 7 & 0xfffffffffffffff8;
  uVar37 = param_5[2];
  lVar47 = *(long *)PTR_DAT_04bb2698;
  if (lVar47 == 0) {
    pvVar23 = malloc(uVar31 * (long)(int)uVar37);
LAB_039ae504:
    iVar14 = *(int *)(param_1 + 0x58);
  }
  else {
    if (param_8 != (long *)0x0) {
LAB_039ae4e4:
      pvVar23 = (void *)(**(code **)(*param_8 + 0x30))(param_8,uVar31 * (long)(int)uVar37,8);
      goto LAB_039ae504;
    }
    lVar21 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    param_8 = (long *)(lVar47 + 8);
    if (lVar21 != 0) {
      param_8 = (long *)(lVar21 + 0xa8);
    }
    param_8 = (long *)*param_8;
    if (param_8 != (long *)0x0) goto LAB_039ae4e4;
    pvVar23 = (void *)0x0;
    iVar14 = *(int *)(param_1 + 0x58);
  }
  if (iVar14 != 0) {
    lVar47 = *(long *)(param_1 + 0x60);
    iVar15 = 0;
    do {
      FUN_003a98b8(lVar47 + (long)iVar15 * 0x98 + 8,&local_898,pvVar23,uVar31);
      iVar15 = iVar15 + 1;
      pvVar23 = (void *)((long)pvVar23 + uVar31);
    } while (iVar14 != iVar15);
  }
LAB_039ae54c:
  FUN_006e9454(&local_480,&DAT_040cc569,*(undefined8 *)(PTR_PTR_04bb2238 + 8));
  if (param_9 != 0) {
    FUN_006e9454(&local_cb0,"%s_%s","model","folder");
    local_478 = (long)&local_470 + 4;
    local_6d = 0;
    local_470 = CONCAT35(local_470._5_3_,0x400);
    local_480 = PTR_DAT_04bb2f40 + 0x10;
    (**(code **)(local_cb0 + 0x18))(&local_cb0);
    FUN_006e9454(&local_898,"%s\\%s","model",local_ca8);
    (**(code **)(CONCAT44(uStack_894,local_898) + 0x18))(&local_898);
    FUN_038d1270(&local_480,"Icon=%%AGL_ROOT%%\\..\\gsys\\tools\\icons\\%s.png",
                 CONCAT17(uStack_889,
                          CONCAT16(uStack_88a,CONCAT15(bStack_88b,CONCAT14(uStack_88c,local_890)))))
    ;
  }
  return;
LAB_039ab1d4:
  *(short *)((long)&local_480 + (long)(int)uVar38 * 2) = (short)lVar54;
  uVar38 = uVar38 + 1;
LAB_039ab1f0:
  pbVar48 = PTR_DAT_04bb3490;
  plVar56 = (long *)PTR_DAT_04bb3488;
LAB_039ab200:
  lVar54 = lVar54 + 1;
  if (*(int *)(param_6 + 0x30) <= lVar54) goto LAB_039ab3c0;
  goto LAB_039ab210;
LAB_039ab3c0:
  if ((int)uVar38 < 1) goto LAB_039ab0f0;
  if (0 < (int)uVar37) {
    uVar5 = *(uint *)(param_1 + 0x80);
    uVar13 = 0;
    lVar42 = *(long *)(param_1 + 0x88);
    do {
      uVar6 = uVar13;
      if (uVar5 <= uVar13) {
        uVar6 = 0;
      }
      if (*(uint *)(lVar42 + (ulong)uVar6 * 0x28 + 8) == uVar38) {
        pvVar23 = *(void **)(lVar42 + (ulong)uVar6 * 0x28 + 0x10);
        iVar14 = memcmp(pvVar23,&local_480,(long)(int)(uVar38 << 1));
        if (iVar14 == 0) {
          if (pvVar23 != (void *)0x0) {
            lVar42 = lVar21 + (long)(int)uVar30 * 0x28;
            *(void **)(lVar42 + 0x10) = pvVar23;
            *(uint *)(lVar42 + 8) = uVar38;
          }
          *puVar45 = *puVar45 | 1;
          break;
        }
      }
      uVar13 = uVar13 + 1;
    } while (uVar37 != uVar13);
  }
  plVar56 = (long *)PTR_DAT_04bb3488;
  if ((*(byte *)puVar45 & 1) != 0) goto LAB_039ab0f0;
  lVar42 = *(long *)PTR_DAT_04bb2698;
  if (lVar42 == 0) {
    pvVar23 = malloc((ulong)uVar38 << 1);
    if (pvVar23 != (void *)0x0) goto LAB_039ab0d0;
LAB_039ab4e4:
    pvVar23 = *(void **)(lVar21 + (long)(int)uVar30 * 0x28 + 0x10);
  }
  else {
    plVar27 = param_8;
    if (param_8 == (long *)0x0) {
      lVar54 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar27 = (long *)(lVar42 + 8);
      if (lVar54 != 0) {
        plVar27 = (long *)(lVar54 + 0xa8);
      }
      plVar27 = (long *)*plVar27;
      if (plVar27 == (long *)0x0) goto LAB_039ab4e4;
    }
    pvVar23 = (void *)(**(code **)(*plVar27 + 0x30))(plVar27,(ulong)uVar38 << 1,8);
    if (pvVar23 == (void *)0x0) goto LAB_039ab4e4;
LAB_039ab0d0:
    lVar21 = lVar21 + (long)(int)uVar30 * 0x28;
    *(uint *)(lVar21 + 8) = uVar38;
    *(void **)(lVar21 + 0x10) = pvVar23;
  }
  memcpy(pvVar23,&local_480,(long)(int)(uVar38 << 1));
LAB_039ab0f0:
  uVar37 = uVar37 + 1;
  uVar43 = uVar43 + 1;
  if (uVar43 == uVar31) goto LAB_039ab080;
  goto LAB_039ab108;
}

