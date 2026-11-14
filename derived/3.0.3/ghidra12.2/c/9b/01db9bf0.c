
void FUN_01db9bf0(long param_1,undefined8 *param_2)

{
  long *plVar1;
  uint uVar2;
  uint *puVar3;
  undefined1 uVar4;
  bool bVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  byte *pbVar13;
  byte bVar14;
  long lVar15;
  uint uVar16;
  uint uVar17;
  undefined *local_68;
  char *local_60;
  undefined1 local_58;
  byte local_57;
  byte local_38 [4];
  byte local_34 [4];
  
  puVar8 = PTR_DAT_04bb39b0;
  plVar1 = (long *)(param_1 + 0x84c8);
  lVar15 = *(long *)PTR_DAT_04bb39b0;
  pbVar13 = PTR_DAT_04bb32e0;
  if (lVar15 == 0) {
LAB_01db9c70:
    if (7 < *pbVar13) {
LAB_01db9c7c:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar15 = **(long **)PTR_DAT_04bb27d0;
        bVar14 = *(byte *)(lVar15 + 0x473);
        pbVar13 = PTR_DAT_04bb5038;
        if ((long)(char)bVar14 != 0xffffffffffffffff) {
          puVar3 = (uint *)(lVar15 + 0x48) + ((long)(char)bVar14 & 0xffffffffU) * 0x20;
          if (7 < bVar14) {
            puVar3 = (uint *)(lVar15 + 0x48);
          }
          if ((*puVar3 & 8) != 0) {
            pbVar13 = (byte *)(lVar15 + 0x471);
          }
        }
        local_34[0] = *pbVar13;
        if (local_34[0] < 8) goto LAB_01db9cfc;
      }
      pbVar13 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar15 + 0x15c) != 0) {
      pbVar13 = (byte *)(lVar15 + 0x158);
    }
    if (7 < *pbVar13) {
      if ((*(int *)(lVar15 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar13 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_01db9c70;
      }
      goto LAB_01db9c7c;
    }
  }
  local_34[0] = *pbVar13;
  if (7 < local_34[0]) {
    local_34[0] = 0xff;
  }
LAB_01db9cfc:
  if (*(char *)(param_1 + 0x8501) != '\0') {
    uVar10 = FUN_01db9aa8(param_1,local_34,0);
    puVar7 = PTR_DAT_04bb2020;
    if (((uVar10 & 1) != 0) && (*(int *)(*(long *)puVar8 + 0x15c) == 0)) {
      local_68 = PTR_DAT_04bb2020 + 0x10;
      local_60 = "GrowupNsoServerOptimization";
      iVar9 = FUN_02753180(local_34,&local_68);
      if (iVar9 == 0) {
        if (*(int *)(param_1 + 0x84f4) == -1) {
          *(undefined8 *)(param_1 + 0x84f4) = 0xc00000002;
          bVar14 = local_34[0];
          if (7 < local_34[0]) {
            bVar14 = 0xff;
          }
          *(byte *)(param_1 + 0x84f1) = bVar14;
          *(undefined1 *)(param_1 + 0x8500) = 1;
          DAT_0537c938 = 0;
          if (param_2 == (undefined8 *)0x0) {
            if ((undefined8 *)*plVar1 != (undefined8 *)0x0) {
              *(undefined8 *)*plVar1 = 0;
              *plVar1 = 0;
            }
          }
          else {
            uVar4 = *(undefined1 *)(param_2 + 3);
            *plVar1 = (long)param_2;
            *(undefined1 *)(param_1 + 0x84e8) = uVar4;
            *param_2 = plVar1;
            lVar15 = *plVar1;
            *(undefined8 *)(lVar15 + 8) = 0;
            *(undefined8 *)(lVar15 + 0x10) = 0;
          }
          *(undefined2 *)(param_1 + 0x8506) = 0x101;
          FUN_01dba640(param_1);
          return;
        }
        *(undefined4 *)(param_1 + 0x84f8) = 0xc;
        *(undefined1 *)(param_1 + 0x8500) = 1;
        DAT_0537c938 = 0;
        if (param_2 == (undefined8 *)0x0) {
          DAT_0537c938 = 0;
          return;
        }
        uVar4 = *(undefined1 *)(param_2 + 3);
        *plVar1 = (long)param_2;
        *(undefined1 *)(param_1 + 0x84e8) = uVar4;
        *param_2 = plVar1;
        lVar15 = *plVar1;
        *(undefined8 *)(lVar15 + 8) = 0;
        *(undefined8 *)(lVar15 + 0x10) = 0;
        return;
      }
      if ((*(char *)(*(long *)PTR_DAT_04bc10b0 + 0xa8) == '\0') &&
         (*(char *)(*(long *)PTR_DAT_04bc10e0 + 0x38) == '\0')) {
        uVar11 = FUN_026585a0(local_34);
        local_68 = puVar7 + 0x10;
        local_60 = "VillageDaysCount";
        iVar9 = FUN_0273ea30(&local_68);
        local_38[0] = local_34[0];
        if (7 < local_34[0]) {
          local_38[0] = 0xff;
        }
        lVar15 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,local_38,1);
        if (lVar15 == 0) {
          uVar17 = 0;
        }
        else {
          local_58 = 1;
          local_60 = (char *)(lVar15 + 0x17f40);
          if (*(long **)(lVar15 + 0x17f68) == (long *)0x0) {
            local_57 = 0;
          }
          else {
            puVar12 = (undefined8 *)**(long **)(lVar15 + 0x17f68);
            local_57 = 0;
            if (puVar12 != (undefined8 *)0x0) {
              local_57 = (**(code **)*puVar12)();
            }
          }
          local_57 = local_57 & 1;
          local_68 = PTR_DAT_04bb6c08 + 0x10;
          uVar17 = *(uint *)(*(long *)(lVar15 + 0x17f50) + *(long *)(lVar15 + 0x17f48));
          FUN_02640184(&local_68);
        }
        uVar16 = (uint)uVar11;
        *(undefined1 *)(param_1 + 0x8502) = 1;
        bVar6 = uVar16 != 0;
        bVar5 = (int)((ulong)uVar11 >> 0x20) != 0;
        if (((iVar9 == 0 && !bVar6) && !bVar5) && uVar17 == 0) {
          uVar16 = 1;
        }
        uVar2 = 0x48077044;
        if (((iVar9 != 0 || bVar6) || bVar5) || uVar17 != 0) {
          uVar2 = uVar17;
        }
        uVar16 = uVar16 ^ uVar16 << 0xb;
        *(short *)(param_1 + 0x84fc) =
             (short)((ulong)(uVar2 >> 0x13 ^ uVar16 >> 8 ^ uVar2 ^ uVar16) * 0x3f48 >> 0x20) + 0x708
        ;
      }
    }
  }
  if (param_2 != (undefined8 *)0x0) {
    param_2[1] = 1;
    param_2[2] = 0;
  }
  return;
}

