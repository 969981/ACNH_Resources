
/* WARNING: Removing unreachable block (ram,0x0203cabc) */
/* WARNING: Removing unreachable block (ram,0x0203c98c) */
/* WARNING: Removing unreachable block (ram,0x0203caac) */
/* WARNING: Removing unreachable block (ram,0x0203cac8) */
/* WARNING: Removing unreachable block (ram,0x0203cb14) */

undefined4 FUN_0203c800(long param_1,int param_2)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  byte *pbVar4;
  uint *puVar5;
  long lVar6;
  byte bVar7;
  byte bVar8;
  ushort uVar9;
  uint uVar10;
  ulong uVar11;
  char *pcVar12;
  undefined2 *puVar13;
  undefined4 uVar14;
  long lVar15;
  ushort uVar16;
  undefined8 *puVar17;
  undefined4 local_90 [6];
  long local_78;
  long lStack_70;
  undefined8 *local_68;
  int local_60;
  int iStack_5c;
  undefined *local_58;
  char *pcStack_50;
  undefined4 local_48;
  char local_44 [8];
  char local_3c [8];
  undefined4 local_34;
  undefined1 local_30;
  undefined1 local_25;
  
  local_58 = PTR_DAT_04bb2020 + 0x10;
  pcStack_50 = "HotelOpend";
  uVar11 = FUN_0273f0a0(&local_58);
  if ((uVar11 & 1) == 0) {
    return 0;
  }
  pcVar12 = (char *)FUN_021c9770(param_2,1);
  if (pcVar12 == (char *)0x0) {
    return 0;
  }
  if (*pcVar12 == '\0') {
    return 0;
  }
  local_48 = 0x20;
  local_34 = 0x6c6d4e2e;
  local_44[0] = s_Hotel_Npc_Create_Nml_040fa367[0];
  local_44[1] = s_Hotel_Npc_Create_Nml_040fa367[1];
  local_44[2] = s_Hotel_Npc_Create_Nml_040fa367[2];
  local_44[3] = s_Hotel_Npc_Create_Nml_040fa367[3];
  local_44[4] = s_Hotel_Npc_Create_Nml_040fa367[4];
  local_44[5] = s_Hotel_Npc_Create_Nml_040fa367[5];
  local_44[6] = s_Hotel_Npc_Create_Nml_040fa367[6];
  local_44[7] = s_Hotel_Npc_Create_Nml_040fa367[7];
  local_3c[0] = s_Hotel_Npc_Create_Nml_040fa367[8];
  local_3c[1] = s_Hotel_Npc_Create_Nml_040fa367[9];
  local_3c[2] = s_Hotel_Npc_Create_Nml_040fa367[10];
  local_3c[3] = s_Hotel_Npc_Create_Nml_040fa367[0xb];
  local_3c[4] = s_Hotel_Npc_Create_Nml_040fa367[0xc];
  local_3c[5] = s_Hotel_Npc_Create_Nml_040fa367[0xd];
  local_3c[6] = s_Hotel_Npc_Create_Nml_040fa367[0xe];
  local_3c[7] = s_Hotel_Npc_Create_Nml_040fa367[0xf];
  pcStack_50 = local_44;
  local_25 = 0;
  local_30 = 0;
  local_58 = PTR_DAT_04bb2028 + 0x10;
  FUN_021c9770(param_2,1);
  uVar9 = *(ushort *)(param_1 + 0x2b4);
  pbVar4 = *(byte **)PTR_DAT_04bb4760 + (ulong)(param_2 + 0x51U) * 0x15;
  if (0x6c < param_2 + 0x51U) {
    pbVar4 = *(byte **)PTR_DAT_04bb4760;
  }
  if (uVar9 != 0xffff) {
    puVar5 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar9 * 8);
    if (0xff < uVar9) {
      puVar5 = (uint *)PTR_DAT_04bc39f8;
    }
    uVar16 = uVar9;
    if ((*puVar5 >> 3 & 1) == 0) goto LAB_0203c990;
    if (DAT_055c1b60 != &DAT_055c1b58) {
      uVar16 = 0;
      puVar17 = DAT_055c1b60;
      do {
        if (*(int *)(puVar17 + -1) == 0x6622bd46) goto LAB_0203c990;
        puVar17 = (undefined8 *)puVar17[1];
        uVar16 = uVar16 + 1;
      } while (puVar17 != &DAT_055c1b58);
    }
  }
  uVar16 = 0xffff;
LAB_0203c990:
  uVar2 = (ushort)pbVar4[4] | (pbVar4[5] & 3) << 8;
  if (0x1ff < uVar2) {
    uVar2 = uVar2 | 0xfc00;
  }
  if (uVar2 != uVar16) {
    lVar15 = *(long *)PTR_DAT_04bbaed0 + (long)param_2 * 6;
    uVar16 = *(ushort *)(lVar15 + 0x74) & 0x3ff;
    if (0x1ff < uVar16) {
      uVar16 = uVar16 | 0xfc00;
    }
    uVar14 = 0;
    if (uVar16 == uVar9 && (*(byte *)(lVar15 + 0x75) & 0xc) != 4) {
      uVar14 = 5;
    }
    return uVar14;
  }
  if ((pbVar4[7] >> 2 & 3) != 1) {
    bVar7 = pbVar4[1];
    uVar1 = (uint)*pbVar4 | (bVar7 & 0xf) << 8;
    bVar8 = pbVar4[2];
    uVar3 = uVar1 | 0xfffff000;
    if ((bVar7 & 8) == 0) {
      uVar3 = uVar1;
    }
    uVar10 = (uint)(bVar7 >> 4) | (uint)bVar8 << 4;
    uVar1 = uVar10 | 0xfffff000;
    if (-1 < (char)bVar8) {
      uVar1 = uVar10;
    }
    local_68 = &DAT_048f9750;
    local_60 = (int)((float)(int)(float)(int)uVar3 / 5.0) - (uint)(7 < (bVar7 & 0xf));
    iStack_5c = (int)((float)(int)(float)(int)uVar1 / 5.0) + ((int)(char)bVar8 >> 7);
    local_90[0] = 0;
    lVar15 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
    if (lVar15 != 0) {
      lStack_70 = *(long *)PTR_DAT_04bb27c8 + 0x28;
      local_78 = lVar15;
      uVar11 = FUN_035aa210(local_60,iStack_5c,&local_78);
      if ((uVar11 & 1) != 0) {
        return 4;
      }
      local_90[0] = 0;
      lVar15 = *(long *)(lVar15 + 0xd0);
      if (lVar15 == 0) {
        puVar13 = &DAT_05586008;
      }
      else {
        lVar6 = lVar15 + 0x130 + (ulong)*(uint *)(lVar15 + 0x198) * 0x30;
        if (1 < *(uint *)(lVar15 + 0x198)) {
          lVar6 = lVar15 + 0x130;
        }
        puVar13 = (undefined2 *)FUN_012eb21c(lVar6,&local_68,0);
      }
      uVar11 = FUN_0277d9a8(puVar13);
      if (((uVar11 & 1) != 0) && (uVar11 = FUN_0277e158(puVar13), (uVar11 & 1) == 0)) {
        FUN_01ad5d04(local_90,puVar13);
        uVar11 = FUN_01ae9e0c(local_90);
        if ((uVar11 & 1) != 0) {
          return 4;
        }
        uVar11 = FUN_01ae91b0(local_90);
        if ((uVar11 & 1) != 0) {
          return 4;
        }
      }
    }
  }
  return 6;
}

