
/* WARNING: Removing unreachable block (ram,0x0203cde0) */

undefined8 FUN_0203cba0(long param_1,float *param_2,int *param_3,int param_4)

{
  uint uVar1;
  ushort uVar2;
  uint *puVar3;
  long lVar4;
  byte bVar5;
  ushort uVar6;
  uint uVar7;
  bool bVar8;
  undefined *puVar9;
  ulong uVar10;
  byte *pbVar11;
  long lVar12;
  int iVar13;
  long *plVar14;
  ushort uVar15;
  undefined8 *puVar16;
  float fVar17;
  undefined8 local_a8;
  char *pcStack_a0;
  undefined8 local_98;
  char *local_90;
  undefined8 local_88;
  uint local_7c;
  undefined *local_78;
  char *pcStack_70;
  undefined4 local_68;
  char local_64 [8];
  char local_5c [8];
  undefined4 local_54;
  undefined1 local_50;
  undefined1 local_45;
  
  param_2[0] = 10.0;
  param_2[1] = 0.0;
  param_2[2] = 10.0;
  *param_3 = 0;
  puVar9 = PTR_DAT_04bb27d0;
  if ((*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2) &&
     (((*(long **)PTR_DAT_04bb27d0)[2] == 0 || ((*(uint *)(PTR_DAT_04bc1240 + 8) & 1) == 0)))) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  local_45 = 0;
  local_68 = 0x20;
  local_54 = 0x6c6d4e2e;
  local_64[0] = s_Hotel_Npc_Create_Nml_040fa367[0];
  local_64[1] = s_Hotel_Npc_Create_Nml_040fa367[1];
  local_64[2] = s_Hotel_Npc_Create_Nml_040fa367[2];
  local_64[3] = s_Hotel_Npc_Create_Nml_040fa367[3];
  local_64[4] = s_Hotel_Npc_Create_Nml_040fa367[4];
  local_64[5] = s_Hotel_Npc_Create_Nml_040fa367[5];
  local_64[6] = s_Hotel_Npc_Create_Nml_040fa367[6];
  local_64[7] = s_Hotel_Npc_Create_Nml_040fa367[7];
  local_78 = PTR_DAT_04bb2028 + 0x10;
  local_5c[0] = s_Hotel_Npc_Create_Nml_040fa367[8];
  local_5c[1] = s_Hotel_Npc_Create_Nml_040fa367[9];
  local_5c[2] = s_Hotel_Npc_Create_Nml_040fa367[10];
  local_5c[3] = s_Hotel_Npc_Create_Nml_040fa367[0xb];
  local_5c[4] = s_Hotel_Npc_Create_Nml_040fa367[0xc];
  local_5c[5] = s_Hotel_Npc_Create_Nml_040fa367[0xd];
  local_5c[6] = s_Hotel_Npc_Create_Nml_040fa367[0xe];
  local_5c[7] = s_Hotel_Npc_Create_Nml_040fa367[0xf];
  local_50 = 0;
  pcStack_70 = local_64;
  local_a8 = PTR_DAT_04bb2020 + 0x10;
  pcStack_a0 = "HotelOpend";
  uVar10 = FUN_0273f0a0(&local_a8);
  local_7c = 0;
  if ((uVar10 & 1) != 0) {
    pbVar11 = (byte *)FUN_021c9770(param_4,1);
    if (pbVar11 == (byte *)0x0) {
LAB_0203cdd8:
      local_7c = 0;
    }
    else {
      local_7c = (uint)*pbVar11;
      if (*pbVar11 != 0) {
        plVar14 = *(long **)puVar9;
        if ((*(byte *)(*plVar14 + 0x476) < 2) &&
           ((plVar14[2] == 0 ||
            (local_a8 = (undefined *)((ulong)local_a8 & 0xffffffff00000000),
            (*(uint *)(PTR_DAT_04bc1240 + 8) & 1) == 0)))) {
          lVar12 = FUN_021c9770(param_4,1);
          if (lVar12 == 0) goto LAB_0203cdd8;
          if (NAN(*(float *)(lVar12 + 0x218))) {
            local_7c = 6;
          }
          else {
            local_7c = 4;
          }
        }
        else {
          uVar1 = param_4 + 0x51;
          local_a8 = (undefined *)CONCAT44(local_a8._4_4_,uVar1);
          uVar6 = *(ushort *)(param_1 + 0x2b4);
          lVar12 = *(long *)PTR_DAT_04bb4760 + (ulong)uVar1 * 0x15;
          if (0x6c < uVar1) {
            lVar12 = *(long *)PTR_DAT_04bb4760;
          }
          if (uVar6 == 0xffff) {
LAB_0203cd74:
            uVar15 = 0xffff;
          }
          else {
            local_a8 = (undefined *)CONCAT44(local_a8._4_4_,3);
            puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar6 * 8);
            if (0xff < uVar6) {
              puVar3 = (uint *)PTR_DAT_04bc39f8;
            }
            uVar15 = uVar6;
            if ((*puVar3 >> 3 & 1) != 0) {
              if (DAT_055c1b60 != &DAT_055c1b58) {
                uVar15 = 0;
                puVar16 = DAT_055c1b60;
                do {
                  if (*(int *)(puVar16 + -1) == 0x6622bd46) goto LAB_0203cde4;
                  puVar16 = (undefined8 *)puVar16[1];
                  uVar15 = uVar15 + 1;
                } while (puVar16 != &DAT_055c1b58);
              }
              goto LAB_0203cd74;
            }
          }
LAB_0203cde4:
          uVar2 = (ushort)*(byte *)(lVar12 + 4) | (*(byte *)(lVar12 + 5) & 3) << 8;
          if (0x1ff < uVar2) {
            uVar2 = uVar2 | 0xfc00;
          }
          if (uVar2 == uVar15) {
            local_a8 = (undefined *)
                       (CONCAT44(local_a8._4_4_,(uint)(*(byte *)(lVar12 + 7) >> 2)) &
                       0xffffffff00000003);
            local_7c = 6;
            if ((int)local_a8 != 1) {
              local_7c = 4;
            }
          }
          else {
            lVar12 = *(long *)PTR_DAT_04bbaed0 + (long)param_4 * 6;
            uVar15 = *(ushort *)(lVar12 + 0x74) & 0x3ff;
            if (0x1ff < uVar15) {
              uVar15 = uVar15 | 0xfc00;
            }
            local_7c = 0;
            if (uVar15 == uVar6 && (*(byte *)(lVar12 + 0x75) & 0xc) != 4) {
              local_7c = 5;
            }
          }
        }
      }
    }
  }
  if (local_7c == 6) {
    plVar14 = *(long **)puVar9;
    lVar12 = *plVar14;
    if (1 < *(byte *)(lVar12 + 0x476)) {
      bVar5 = *(byte *)(lVar12 + 0x473);
      if ((long)(char)bVar5 != 0xffffffffffffffff) {
        uVar10 = (long)(char)bVar5 & 0xffffffff;
        pbVar11 = (byte *)(lVar12 + 0x48) + uVar10 * 0x80;
        if (7 < bVar5) {
          pbVar11 = (byte *)(lVar12 + 0x48);
        }
        if ((*pbVar11 >> 3 & 1) != 0) {
          lVar12 = plVar14[2] + 0x108;
          lVar4 = lVar12 + uVar10 * 0xc;
          if (0xb < bVar5) {
            lVar4 = lVar12;
          }
          if (*(char *)(lVar4 + 10) == '\0') {
            return 0;
          }
        }
      }
    }
LAB_0203d0b8:
    FUN_0203d130(param_1,param_2);
  }
  else {
    if (local_7c == 5) {
      lVar12 = *(long *)PTR_DAT_04bbaed0 + (long)param_4 * 6;
      uVar1 = (uint)*(byte *)(lVar12 + 0x70) | (*(byte *)(lVar12 + 0x71) & 0xf) << 8;
      if ((*(byte *)(lVar12 + 0x71) & 8) != 0) {
        uVar1 = uVar1 | 0xfffff000;
      }
      *param_2 = (float)(int)uVar1;
      uVar7 = (uint)(*(byte *)(lVar12 + 0x71) >> 4) | (uint)*(byte *)(lVar12 + 0x72) << 4;
      uVar1 = uVar7 | 0xfffff000;
      if (-1 < (char)*(byte *)(lVar12 + 0x72)) {
        uVar1 = uVar7;
      }
      param_2[2] = (float)(int)uVar1;
      bVar5 = *(byte *)(lVar12 + 0x73);
    }
    else {
      if (local_7c != 4) {
        return 0;
      }
      if (!bVar8) {
        lVar12 = FUN_021c9770(param_4,1);
        fVar17 = *(float *)(lVar12 + 0x218);
        if (NAN(fVar17)) {
          fVar17 = 0.0;
          *(undefined8 *)(lVar12 + 0x218) = 0;
          *(undefined4 *)(lVar12 + 0x220) = 0;
        }
        *param_2 = fVar17;
        if (NAN(*(float *)(lVar12 + 0x218))) {
          fVar17 = 0.0;
          *(undefined8 *)(lVar12 + 0x218) = 0;
          *(undefined4 *)(lVar12 + 0x220) = 0;
        }
        else {
          fVar17 = *(float *)(lVar12 + 0x220);
        }
        param_2[2] = fVar17;
        if (*(char *)(lVar12 + 0x228) == '\0') {
          *(undefined4 *)(lVar12 + 0x224) = 0;
          iVar13 = 0;
        }
        else {
          iVar13 = *(int *)(lVar12 + 0x224);
        }
        *param_3 = iVar13;
        local_98 = 0;
        local_a8 = PTR_DAT_04bbc1a0 + 0x10;
        pcStack_a0 = PTR_DAT_04bb2010 + 0x10;
        local_88 = 0;
        local_90 = pcStack_a0;
        FUN_01811430(&local_a8);
        local_98._4_4_ = local_98._4_4_ + 4;
        iVar13 = local_88._4_4_ + 4;
        local_88 = CONCAT44(iVar13,(int)local_88);
        if (*param_2 < (float)(int)local_98 * 5.0) {
          return 1;
        }
        if ((float)(int)local_88 * 5.0 + 5.0 <= *param_2) {
          return 1;
        }
        if (param_2[2] < (float)local_98._4_4_ * 5.0) {
          return 1;
        }
        if ((float)iVar13 * 5.0 + 5.0 <= param_2[2]) {
          return 1;
        }
        goto LAB_0203d0b8;
      }
      pbVar11 = *(byte **)PTR_DAT_04bb4760 + (ulong)(param_4 + 0x51U) * 0x15;
      if (0x6c < param_4 + 0x51U) {
        pbVar11 = *(byte **)PTR_DAT_04bb4760;
      }
      uVar1 = (uint)*pbVar11 | (pbVar11[1] & 0xf) << 8;
      if ((pbVar11[1] & 8) != 0) {
        uVar1 = uVar1 | 0xfffff000;
      }
      *param_2 = (float)(int)uVar1;
      uVar7 = (uint)(pbVar11[1] >> 4) | (uint)pbVar11[2] << 4;
      uVar1 = uVar7 | 0xfffff000;
      if (-1 < (char)pbVar11[2]) {
        uVar1 = uVar7;
      }
      param_2[2] = (float)(int)uVar1;
      bVar5 = pbVar11[3];
    }
    *param_3 = (uint)bVar5 << 0x18;
  }
  return 1;
}

