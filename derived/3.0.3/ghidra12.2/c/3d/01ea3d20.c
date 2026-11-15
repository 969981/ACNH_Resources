
void FUN_01ea3d20(long *param_1)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  uint uVar4;
  byte bVar5;
  short sVar6;
  uint uVar7;
  byte bVar8;
  ushort uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  int iVar13;
  bool bVar14;
  int iVar15;
  long *plVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  char *pcVar20;
  long lVar21;
  undefined8 *puVar22;
  byte *pbVar23;
  char *pcVar24;
  float fVar25;
  float fVar26;
  undefined8 local_90;
  char *local_88;
  undefined *local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined2 local_6c;
  undefined8 local_68;
  int local_48;
  undefined4 local_44;
  
  param_1[0x15ab] = param_1[0x15ab] | 0x800000000000;
  iVar15 = FUN_021d68a0(param_1[1] + 0x3e0);
  local_90 = (undefined *)CONCAT44(local_90._4_4_,iVar15);
  if (iVar15 == 3) {
    local_44 = 2;
  }
  else if ((iVar15 == 2) || (iVar15 != 1)) {
    local_44 = 1;
  }
  else {
    local_44 = 0;
  }
  puVar22 = *(undefined8 **)(param_1[1] + 0x60);
  if (puVar22 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar15 = __cxa_guard_acquire(&DAT_052461c0);
      puVar22 = &DAT_05240280;
      if (iVar15 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar22 = &DAT_05240280;
    }
  }
  puVar10 = PTR_DAT_04bb2020;
  local_90 = PTR_DAT_04bb2020 + 0x10;
  local_88 = "NpcSocialType";
  if (((puVar22[0x227] != 0) && (lVar19 = *(long *)(puVar22[0x227] + 0x78), lVar19 != 0)) &&
     (plVar16 = *(long **)(lVar19 + 0x48), plVar16 != (long *)0x0)) {
    (**(code **)(*plVar16 + 0x28))(plVar16,&local_90,local_44);
  }
  param_1[0x15ab] = param_1[0x15ab] | 0x200;
  uVar17 = FUN_01186738(param_1 + 0xf26,&DAT_053b2188);
  if ((uVar17 & 1) != 0) {
    local_90 = puVar10 + 0x10;
    local_68 = 0;
    local_6c = 0xff;
    local_88 = (char *)param_1[0xf27];
    uStack_78 = DAT_053b2190;
    local_70 = (undefined4)param_1[0xf23];
    local_80 = local_90;
    FUN_01180700(*(undefined8 *)PTR_DAT_04bb3240,&local_90);
  }
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(uint *)(param_1 + 0xef7) = *(uint *)(param_1 + 0xef6);
  *(undefined4 *)((long)param_1 + 0x77bc) = *(undefined4 *)((long)param_1 + 0x77b4);
  uVar4 = *(uint *)(param_1 + 0xef8);
  *(undefined1 *)((long)param_1 + 0x77c9) = 1;
  *(uint *)(param_1 + 0xef6) = uVar4;
  *(undefined4 *)((long)param_1 + 0x77b4) = 0;
  if (uVar4 != 0xffffffff) {
    if (*(uint *)(param_1 + 0xefa) <= uVar4) {
      uVar4 = 0;
    }
    puVar22 = *(undefined8 **)(param_1[0xefb] + (long)(int)uVar4 * 0x40);
    if (puVar22 != (undefined8 *)0x0) {
      (*(code *)*puVar22)();
    }
  }
  FUN_01ea4530(param_1);
  iVar13 = DAT_0540578c;
  puVar12 = PTR_DAT_04bc3a80;
  puVar11 = PTR_DAT_04bb3968;
  iVar15 = *(int *)(param_1[1] + 0x508);
  if (iVar15 != -1) {
    if (DAT_0540578c == -1) {
      uVar17 = 0;
    }
    else {
      local_90 = puVar10 + 0x10;
      local_88 = "TkkFirstLiveReserved";
      uVar18 = FUN_0273f0a0(&local_90);
      uVar17 = uVar18 & 0xffffffff;
      if ((uVar18 & 1) != 0) {
        DAT_05405790 = 0;
        DAT_05405792 = 0x101;
        DAT_05405796 = 0;
        DAT_0540578c = -1;
      }
      plVar16 = *(long **)PTR_DAT_04bb27d0;
      if ((((plVar16[2] != 0) &&
           (local_90 = (undefined *)((ulong)local_90 & 0xffffffff00000000),
           (*(uint *)(PTR_DAT_04bc1240 + 8) & 1) != 0)) ||
          ((1 < *(byte *)(*plVar16 + 0x476) || (*(int *)(*(long *)PTR_DAT_04bb39b0 + 0x15c) != 0))))
         || ((plVar16[5] != 0 && ((int)plVar16[0x10] == 1)))) {
        DAT_05405790 = 0;
        DAT_05405792 = 0x101;
        uVar17 = 1;
        DAT_05405796 = 0;
        DAT_0540578c = -1;
      }
      sVar6 = *(short *)PTR_DAT_04bb6298;
      if (sVar6 != -1) {
        local_90 = (undefined *)CONCAT44(local_90._4_4_,0x19);
        puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar6 * 8);
        if (0xff < (uint)(int)sVar6) {
          puVar2 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((*puVar2 >> 0x19 & 1) != 0) {
          if (iVar13 == iVar15) {
            DAT_05405790 = 0;
            DAT_05405792 = 0x101;
            uVar17 = 1;
            DAT_05405796 = 0;
            DAT_0540578c = -1;
          }
          else {
            uVar17 = 1;
          }
        }
      }
    }
    plVar16 = *(long **)(param_1[1] + 0x80);
    if (plVar16 != (long *)0x0) {
      if (((*PTR_DAT_04bb40e0 & 1) == 0) &&
         (iVar15 = __cxa_guard_acquire(PTR_DAT_04bb40e0), iVar15 != 0)) {
        *(undefined **)PTR_DAT_04bb40d8 = PTR_DAT_04bb40e8 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb40e0);
      }
      uVar18 = (**(code **)(*plVar16 + 0x10))(plVar16,PTR_DAT_04bb40d8);
      if ((uVar18 & 1) != 0) {
        if ((uVar17 & 1) == 0) {
          if ((*(long *)(*(long *)puVar11 + 0x175a0) == 0) ||
             (sVar6 = *(short *)PTR_DAT_04bb6298, sVar6 == -1)) {
            if (*(int *)(puVar12 + 0x38) != 0x77130016) goto LAB_01ea4130;
            goto LAB_01ea4128;
          }
          local_90 = (undefined *)CONCAT44(local_90._4_4_,0x15);
          bVar14 = false;
          puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar6 * 8);
          if (0xff < (uint)(int)sVar6) {
            puVar2 = (uint *)PTR_DAT_04bc39f8;
          }
          if (((*puVar2 >> 0x15 & 1) == 0) && (*(int *)(puVar12 + 0x38) != 0x77130016)) {
LAB_01ea4130:
            bVar14 = *(int *)(param_1[1] + 0x508) == DAT_0540578c;
          }
        }
        else {
LAB_01ea4128:
          bVar14 = false;
        }
        *(bool *)((long)plVar16 + 0x3a4) = bVar14;
      }
    }
  }
  uVar17 = param_1[0x15ab];
  if (((uint)uVar17 >> 6 & 1) != 0) {
    uVar17 = (**(code **)(*(long *)param_1[1] + 0x180))();
    if ((uVar17 & 1) == 0) {
      lVar19 = *(long *)(param_1[1] + 0x690);
      if (lVar19 != 0) {
        local_90 = (undefined *)
                   (CONCAT44(local_90._4_4_,(uint)*(byte *)(lVar19 + 0xc)) & 0xffffffff00000003);
        *(undefined4 *)((long)param_1 + 0xae8c) = (undefined4)local_90;
        lVar19 = *(long *)(param_1[1] + 0x690);
        if (lVar19 != 0) {
          lVar21 = **(long **)PTR_DAT_04bb27d0;
          bVar5 = *(byte *)(lVar21 + 0x473);
          uVar17 = (ulong)(char)bVar5;
          pbVar23 = PTR_DAT_04bc1220;
          if (uVar17 != 0xffffffffffffffff) {
            puVar2 = (uint *)(lVar21 + 0x48) + (uVar17 & 0xffffffff) * 0x20;
            if (7 < bVar5) {
              puVar2 = (uint *)(lVar21 + 0x48);
            }
            if ((*puVar2 & 8) != 0) {
              pbVar23 = (byte *)(lVar21 + 0x473);
            }
          }
          bVar8 = *(byte *)(lVar19 + 7) >> 4 & 3;
          if (bVar8 != 1) {
            if (bVar8 != 2) {
              if (bVar8 == 3) goto LAB_01ea4220;
              uVar9 = *(ushort *)(lVar19 + 5) >> 2;
              if ((ushort)*pbVar23 != (uVar9 & 0xff)) {
                if ((bVar5 == 0xff) || ((ushort)(byte)*PTR_DAT_04bb5018 != (uVar9 & 0xff))) {
                  if ((ushort)(byte)*PTR_DAT_04bb5018 != (uVar9 & 0xff)) goto LAB_01ea4220;
                }
                else {
                  pbVar23 = (byte *)(lVar21 + 0x48) + (uVar17 & 0xffffffff) * 0x80;
                  if (7 < bVar5) {
                    pbVar23 = (byte *)(lVar21 + 0x48);
                  }
                  if ((*pbVar23 >> 3 & 1) != 0) {
                    lVar21 = (*(long **)PTR_DAT_04bb27d0)[2] + 0x108;
                    lVar3 = lVar21 + (uVar17 & 0xffffffff) * 0xc;
                    if (0xb < bVar5) {
                      lVar3 = lVar21;
                    }
                    if (*(char *)(lVar3 + 10) == '\0') goto LAB_01ea4220;
                  }
                }
              }
            }
            *(byte *)(lVar19 + 0xc) = *(byte *)(lVar19 + 0xc) & 0xfc | (byte)local_90;
          }
        }
      }
    }
LAB_01ea4220:
    FUN_01ea5c80(param_1,PTR_PTR_04bb2238,PTR_PTR_04bb2238,1,0,PTR_DAT_04bb32e0);
    uVar17 = param_1[0x15ab];
  }
  param_1[0x15ab] = uVar17 & 0xfffffffffffffdff;
  if (param_1[0x1549] != 0) {
    FUN_02155650();
    FUN_0215b800(param_1[0x1549]);
  }
  if (*(int *)(puVar12 + 0x38) == 0x2a789248) {
    FUN_02085a50(param_1[3],0,0);
  }
  lVar19 = *(long *)puVar11;
  if ((*(byte *)(lVar19 + 0xd60) >> 1 & 1) != 0) {
    lVar21 = param_1[1];
    (**(code **)(*(long *)(lVar19 + 0xd28) + 0x18))(lVar19 + 0xd28);
    (**(code **)(*(long *)(lVar19 + 0xd28) + 0x18))(lVar19 + 0xd28);
    pcVar24 = *(char **)(lVar19 + 0xd30);
    (**(code **)(*(long *)(lVar21 + 0x3e0) + 0x18))(lVar21 + 0x3e0);
    pcVar20 = *(char **)(lVar21 + 1000);
    if (pcVar24 != pcVar20) {
      pcVar24 = *(char **)(lVar19 + 0xd30);
      if (*pcVar24 != *pcVar20) goto LAB_01ea4354;
      if (*pcVar24 != '\0') {
        lVar19 = 0;
        do {
          if ((lVar19 == 0x80000) || (pcVar24[lVar19 + 1] != pcVar20[lVar19 + 1]))
          goto LAB_01ea4354;
          if (pcVar24[lVar19 + 1] == '\0') break;
          lVar21 = lVar19 + 2;
          if (pcVar24[lVar21] != pcVar20[lVar19 + 2]) goto LAB_01ea4354;
          lVar19 = lVar19 + 2;
        } while (pcVar24[lVar21] != '\0');
      }
    }
    *(uint *)(param_1[1] + 0x69c) = *(uint *)(param_1[1] + 0x69c) & 0xfffffbff;
    *(undefined1 *)(param_1[2] + 0x5a0) = 0;
  }
LAB_01ea4354:
  (**(code **)(*param_1 + 0xd8))(param_1);
  if ((((*(byte *)((long)param_1 + 0xad5f) >> 1 & 1) != 0) &&
      (pbVar23 = *(byte **)(param_1[1] + 0x690), pbVar23 != (byte *)0x0)) &&
     (uVar17 = FUN_0290d828(), (uVar17 & 1) != 0)) {
    bVar5 = pbVar23[1];
    uVar4 = (uint)*pbVar23 | (bVar5 & 0xf) << 8;
    if ((bVar5 & 8) != 0) {
      uVar4 = uVar4 | 0xfffff000;
    }
    uVar7 = (uint)(bVar5 >> 4) | (uint)pbVar23[2] << 4;
    uVar1 = uVar7 | 0xfffff000;
    if (-1 < (char)pbVar23[2]) {
      uVar1 = uVar7;
    }
    local_90 = (undefined *)(ulong)(uint)(float)(int)uVar4;
    lVar19 = *(long *)(param_1[1] + 0x68);
    fVar25 = *(float *)(lVar19 + 0x278) - (float)(int)uVar4;
    local_88 = (char *)CONCAT44(local_88._4_4_,(float)(int)uVar1);
    fVar26 = *(float *)(lVar19 + 0x280) - (float)(int)uVar1;
    if (5.0 < SQRT(fVar26 * fVar26 + fVar25 * fVar25)) {
      local_48 = (uint)pbVar23[3] << 0x18;
      FUN_01e39778(param_1[1],&local_90,&local_48,0);
    }
  }
  param_1[0x15ab] = param_1[0x15ab] & 0xffff7fffffffffff;
  return;
}

