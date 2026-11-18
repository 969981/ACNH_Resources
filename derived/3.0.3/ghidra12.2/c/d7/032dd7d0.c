
uint FUN_032dd7d0(long *param_1,long param_2,long *param_3,int param_4,ulong param_5,ulong param_6)

{
  bool bVar1;
  uint uVar2;
  ushort *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  ushort *puVar8;
  ushort *puVar9;
  ushort *puVar10;
  ushort uVar11;
  ulong uVar12;
  long lVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  undefined **local_f0;
  ushort *local_e8;
  int local_e0;
  undefined *local_d8;
  undefined2 *local_d0;
  uint local_c4;
  int iStack_c0;
  undefined2 local_bc;
  undefined1 local_ba;
  ushort auStack_b8 [6];
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined8 local_90;
  float local_7c;
  undefined4 local_78;
  float fStack_74;
  undefined4 local_70;
  long local_60;
  
  fVar16 = *(float *)(param_2 + 0x50);
  FUN_00358b98(auStack_b8);
  local_90 = FUN_0038a89c(param_2);
  FUN_00350090(*(undefined4 *)(param_2 + 0xf8),*(undefined4 *)(param_2 + 0xfc),auStack_b8);
  fStack_74 = *(float *)(param_2 + 0x100);
  local_78 = *(undefined4 *)(param_2 + 0x104);
  local_ba = 0;
  local_bc = 0;
  local_60 = *(long *)(param_2 + 0x108);
  if (param_4 == -1) {
    fVar15 = *(float *)(param_2 + 0x54) - *(float *)(param_2 + 0xfc);
    if (0.0 <= fVar15) {
      fVar15 = fVar15 / (fStack_74 + *(float *)(param_2 + 0xfc));
      uVar4 = 0;
      if (fVar15 != (float)(int)fVar15) {
        uVar4 = (uint)(fVar15 < 0.0);
      }
      param_4 = ((int)fVar15 - uVar4) + 1;
    }
    else {
      param_4 = 1;
    }
  }
  local_c4 = 0;
  iStack_c0 = param_4;
  local_7c = fVar16;
  if ((param_6 & 1) == 0) {
    local_e8 = auStack_b8;
    local_f0 = &PTR_LAB_04b1bf50;
    *(undefined4 *)(local_60 + 0xc) = local_ac;
    *(undefined4 *)(local_60 + 0x10) = uStack_a8;
    *(undefined2 *)(local_60 + 8) = 0x101;
    *(undefined4 *)(local_60 + 0x14) = local_70;
    *(undefined1 *)(local_60 + 0x18) = 0;
    (**(code **)(*param_1 + 0x18))(param_1);
    lVar13 = param_1[1];
    uVar14 = (undefined4)param_1[2];
    (**(code **)(*param_3 + 0x18))(param_3);
    lVar7 = param_3[1];
    (**(code **)(*param_3 + 0x18))(param_3);
    puVar9 = (ushort *)param_3[1];
    uVar11 = *puVar9;
    if (uVar11 != 0) {
      iVar5 = 0;
      iVar6 = 0;
      do {
        puVar10 = puVar9;
        puVar8 = puVar9;
        while ((uVar11 & 0xfffe) != 0xe) {
          puVar10 = puVar10 + 1;
          uVar11 = *puVar10;
          iVar5 = iVar5 + 1;
          puVar8 = puVar8 + 1;
          if (uVar11 == 0) goto LAB_032ddaa8;
        }
        if (uVar11 == 0xe) {
          puVar9 = (ushort *)((long)puVar8 + (ulong)puVar10[3] + 8);
        }
        else {
          puVar3 = puVar10;
          puVar9 = puVar8 + 3;
          if (uVar11 != 0xf) {
            puVar3 = (ushort *)0x0;
            puVar9 = puVar10;
          }
          puVar10 = puVar3;
        }
        iVar6 = iVar6 + ((uint)((int)puVar9 - (int)puVar8) >> 1 & 0xffff);
        if ((puVar10[1] == 0) && (puVar10[2] == 0)) {
          iVar5 = (uint)(puVar10[5] >> 1) + iVar5;
          iVar6 = iVar6 - (uint)(puVar10[5] >> 1);
        }
        uVar11 = *puVar9;
      } while (uVar11 != 0);
      goto LAB_032ddaa8;
    }
  }
  else {
    local_e8 = auStack_b8;
    local_f0 = &PTR_LAB_04b1bf70;
    *(undefined4 *)(local_60 + 0xc) = local_ac;
    *(undefined4 *)(local_60 + 0x10) = uStack_a8;
    *(undefined2 *)(local_60 + 8) = 0x101;
    *(undefined4 *)(local_60 + 0x14) = local_70;
    (**(code **)(*param_1 + 0x18))(param_1);
    lVar13 = param_1[1];
    uVar14 = (undefined4)param_1[2];
    (**(code **)(*param_3 + 0x18))(param_3);
    lVar7 = param_3[1];
    (**(code **)(*param_3 + 0x18))(param_3);
    puVar9 = (ushort *)param_3[1];
    uVar11 = *puVar9;
    if (uVar11 != 0) {
      iVar5 = 0;
      iVar6 = 0;
      do {
        puVar10 = puVar9;
        puVar8 = puVar9;
        while ((uVar11 & 0xfffe) != 0xe) {
          puVar10 = puVar10 + 1;
          uVar11 = *puVar10;
          iVar5 = iVar5 + 1;
          puVar8 = puVar8 + 1;
          if (uVar11 == 0) goto LAB_032ddaa8;
        }
        if (uVar11 == 0xe) {
          puVar9 = (ushort *)((long)puVar8 + (ulong)puVar10[3] + 8);
        }
        else {
          puVar3 = puVar10;
          puVar9 = puVar8 + 3;
          if (uVar11 != 0xf) {
            puVar3 = (ushort *)0x0;
            puVar9 = puVar10;
          }
          puVar10 = puVar3;
        }
        iVar6 = iVar6 + ((uint)((int)puVar9 - (int)puVar8) >> 1 & 0xffff);
        if ((puVar10[1] == 0) && (puVar10[2] == 0)) {
          iVar5 = (uint)(puVar10[5] >> 1) + iVar5;
          iVar6 = iVar6 - (uint)(puVar10[5] >> 1);
        }
        uVar11 = *puVar9;
      } while (uVar11 != 0);
      goto LAB_032ddaa8;
    }
  }
  iVar6 = 0;
  iVar5 = 0;
LAB_032ddaa8:
  uVar4 = FUN_0035b250(&local_c4,lVar13,uVar14,lVar7,iVar5 + iVar6,&local_f0,&iStack_c0);
  if (((uVar4 & 1) == 0) && ((param_5 & 1) != 0)) {
    local_d8 = PTR_DAT_04bc8e78 + 0x10;
    local_d0 = &DAT_04169bca;
    (**(code **)(*param_1 + 0x18))(param_1);
    local_e8 = (ushort *)param_1[1];
    local_f0 = (undefined **)(PTR_DAT_04bb4ca0 + 0x10);
    local_e0 = local_c4 + 1;
    if (local_c4 < 0x7fffffff) {
      local_e8[local_c4] = 0;
    }
    else {
      local_e8 = (ushort *)0x0;
      local_e0 = 0;
    }
    uVar12 = (ulong)(local_c4 - 1);
    local_7c = 3.4028235e+38;
    if (2 < (int)(local_c4 - 1)) {
      do {
        (*(code *)local_f0[3])(&local_f0);
        puVar9 = local_e8;
        lVar7 = 0;
        do {
          if (local_e8[lVar7] == 0) {
LAB_032ddbb4:
            iVar6 = (int)lVar7;
joined_r0x032ddbb4:
            if ((iVar6 != 0) &&
               (puVar8 = (ushort *)((long)local_e8 + ((lVar7 << 0x20) + -0x100000000 >> 0x1f)),
               *puVar8 == 10)) goto LAB_032ddc7c;
            break;
          }
          if (local_e8[lVar7 + 1] == 0) {
            lVar7 = lVar7 + 1;
            goto LAB_032ddbb4;
          }
          if (local_e8[lVar7 + 2] == 0) {
            lVar7 = lVar7 + 2;
            iVar6 = (int)lVar7;
            goto joined_r0x032ddbb4;
          }
          lVar7 = lVar7 + 3;
        } while (lVar7 != 0x80001);
        (**(code **)(local_d8 + 0x18))(&local_d8);
        lVar7 = 0;
        do {
          if (local_d0[lVar7] == 0) goto LAB_032ddc30;
          if (local_d0[lVar7 + 1] == 0) {
            lVar7 = lVar7 + 1;
            goto LAB_032ddc30;
          }
          if (local_d0[lVar7 + 2] == 0) {
            lVar7 = lVar7 + 2;
            goto LAB_032ddc30;
          }
          lVar7 = lVar7 + 3;
        } while (lVar7 != 0x80001);
        lVar7 = 0;
LAB_032ddc30:
        uVar2 = (uint)lVar7;
        if ((int)(local_e0 - (uint)uVar12) <= (int)(uint)lVar7) {
          uVar2 = local_e0 + ~(uint)uVar12;
        }
        if (0 < (int)uVar2) {
          (**(code **)(local_d8 + 0x18))(&local_d8);
          memcpy(puVar9 + uVar12,local_d0,(ulong)uVar2 << 1);
          puVar8 = puVar9 + uVar12 + uVar2;
LAB_032ddc7c:
          *puVar8 = 0;
        }
        (*(code *)local_f0[3])(&local_f0);
        uVar11 = *local_e8;
        if (uVar11 == 0) {
          iVar6 = 0;
          iVar5 = 0;
        }
        else {
          iVar5 = 0;
          iVar6 = 0;
          puVar9 = local_e8;
          do {
            puVar10 = puVar9;
            puVar8 = puVar9;
            while ((uVar11 & 0xfffe) != 0xe) {
              puVar10 = puVar10 + 1;
              uVar11 = *puVar10;
              iVar5 = iVar5 + 1;
              puVar8 = puVar8 + 1;
              if (uVar11 == 0) goto LAB_032ddd38;
            }
            if (uVar11 == 0xe) {
              puVar9 = (ushort *)((long)puVar8 + (ulong)puVar10[3] + 8);
            }
            else {
              puVar3 = puVar10;
              puVar9 = puVar8 + 3;
              if (uVar11 != 0xf) {
                puVar3 = (ushort *)0x0;
                puVar9 = puVar10;
              }
              puVar10 = puVar3;
            }
            iVar6 = iVar6 + ((uint)((int)puVar9 - (int)puVar8) >> 1 & 0xffff);
            if ((puVar10[1] == 0) && (puVar10[2] == 0)) {
              iVar5 = (uint)(puVar10[5] >> 1) + iVar5;
              iVar6 = iVar6 - (uint)(puVar10[5] >> 1);
            }
            uVar11 = *puVar9;
          } while (uVar11 != 0);
        }
LAB_032ddd38:
        fVar15 = (float)FUN_00358c40(auStack_b8,local_e8,iVar5 + iVar6);
      } while ((fVar16 < fVar15) && (bVar1 = 3 < (long)uVar12, uVar12 = uVar12 - 1, bVar1));
    }
  }
  thunk_FUN_0035008c(auStack_b8);
  return uVar4 & 1;
}

