
void FUN_0340dcd0(byte *param_1,long *param_2,int param_3,int param_4,uint param_5)

{
  bool bVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  uint uVar7;
  undefined ***pppuVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined **local_d8;
  undefined **local_d0;
  undefined **local_c8;
  undefined **ppuStack_c0;
  int local_b8;
  int local_b4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined ***pppuStack_a0;
  undefined **local_98;
  undefined8 *local_90;
  byte *local_88;
  undefined8 local_80;
  uint local_78;
  float local_74;
  undefined8 local_68;
  
  local_68 = 0;
  local_b0 = 0;
  FUN_030b0e48(param_2,&local_68,&local_b0);
  puVar6 = PTR_DAT_04bb2020;
  if ((char)param_2[1] == '\0') {
    bVar1 = false;
  }
  else {
    bVar1 = 0.0 < SQRT((local_68._4_4_ - *(float *)(param_1 + 0x54)) *
                       (local_68._4_4_ - *(float *)(param_1 + 0x54)) +
                       ((float)local_68 - *(float *)(param_1 + 0x50)) *
                       ((float)local_68 - *(float *)(param_1 + 0x50)));
  }
  local_d8 = &PTR_FUN_04b29c70;
  local_d0 = &PTR_FUN_04b29c98;
  local_c8 = &PTR_FUN_04b29cc0;
  ppuStack_c0 = &PTR_FUN_04b29ce8;
  local_b8 = param_3;
  local_b4 = param_4;
  if ((param_3 == 4) || ((param_5 & 1) != 0)) {
    if (*(char *)((long)param_2 + 0x5c) != '\0') {
      pppuVar8 = &ppuStack_c0;
      if (param_3 != 4) {
        if (param_4 == 2) {
          pppuVar8 = &local_c8;
        }
        else if (param_4 == 1) {
          pppuVar8 = &local_d0;
        }
        else {
          pppuVar8 = &local_d8;
        }
      }
      uVar7 = (*(code *)**pppuVar8)();
      if ((*param_1 & 1) == 0) {
        lVar9 = 0;
      }
      else {
        lVar10 = *(long *)(param_1 + 8);
        lVar9 = 0;
        if ((lVar10 != 0) && (lVar9 = *(long *)(lVar10 + 0x18), (*(byte *)(lVar10 + 8) & 10) != 2))
        {
          lVar9 = 0;
        }
      }
      if (uVar7 < 0xc) {
        local_90 = (undefined8 *)(&PTR_s_Pen_S_04b29c00)[uVar7];
      }
      else {
        local_90 = &DAT_0407ebb1;
      }
      local_98 = (undefined **)(puVar6 + 0x10);
      local_78 = 0;
      local_88 = param_1 + 0x30;
      iVar4 = *(int *)(lVar9 + 0x1c0);
      local_74 = (float)CONCAT31(local_74._1_3_,1);
      local_80 = 0;
      iVar5 = *(int *)(lVar9 + 0x1b8);
      if (iVar4 < iVar5) {
        *(int *)(lVar9 + 0x1c0) = iVar4 + 1;
        if (*(long *)(lVar9 + 0x1b0) != 0) {
          iVar4 = *(int *)(lVar9 + 0x1bc) + iVar4;
          iVar3 = 0;
          if (iVar5 <= iVar4) {
            iVar3 = iVar5;
          }
          puVar12 = (undefined1 *)(*(long *)(lVar9 + 0x1b0) + (long)(iVar4 - iVar3) * 0xb0);
          *puVar12 = 1;
          *(byte **)(puVar12 + 8) = local_88;
          *(undefined4 *)(puVar12 + 0x10) = 0;
          *(undefined4 *)(puVar12 + 0x14) = 0;
          *(undefined4 *)(puVar12 + 0x18) = 0;
          (**(code **)(puVar6 + 0x28))(&local_98);
          puVar11 = *(undefined8 **)(puVar12 + 0x20);
          if (puVar11 != local_90) {
            lVar9 = 0;
            do {
              pcVar2 = (char *)((long)local_90 + lVar9);
              lVar9 = lVar9 + 1;
            } while (*pcVar2 != '\0');
            uVar7 = (int)lVar9 - 1;
            if (*(int *)(puVar12 + 0x2c) <= (int)uVar7) {
              uVar7 = *(int *)(puVar12 + 0x2c) - 1;
            }
            if ((int)uVar7 < 1) {
              uVar7 = 0;
            }
            else {
              memcpy(puVar11,local_90,(ulong)uVar7);
              puVar11 = (undefined8 *)((long)puVar11 + (ulong)uVar7);
            }
            *(undefined1 *)puVar11 = 0;
            *(uint *)(puVar12 + 0x28) = uVar7;
          }
        }
      }
    }
    if (bVar1) {
      pppuVar8 = &ppuStack_c0;
      if (local_b8 != 4) {
        if (local_b4 == 2) {
          pppuVar8 = &local_c8;
        }
        else if (local_b4 == 1) {
          pppuVar8 = &local_d0;
        }
        else {
          pppuVar8 = &local_d8;
        }
      }
      uVar7 = (*(code *)(*pppuVar8)[1])();
      if ((*param_1 & 1) == 0) {
        lVar9 = 0;
      }
      else {
        lVar10 = *(long *)(param_1 + 8);
        lVar9 = 0;
        if ((lVar10 != 0) && (lVar9 = *(long *)(lVar10 + 0x18), (*(byte *)(lVar10 + 8) & 10) != 2))
        {
          lVar9 = 0;
        }
      }
      if (uVar7 < 0xc) {
        local_90 = (undefined8 *)(&PTR_s_Pen_S_04b29c00)[uVar7];
      }
      else {
        local_90 = &DAT_0407ebb1;
      }
      local_98 = (undefined **)(puVar6 + 0x10);
      local_78 = 0;
      local_88 = param_1 + 0x30;
      iVar4 = *(int *)(lVar9 + 0x1c0);
      local_74 = (float)CONCAT31(local_74._1_3_,1);
      local_80 = 0;
      iVar5 = *(int *)(lVar9 + 0x1b8);
      if (iVar4 < iVar5) {
        *(int *)(lVar9 + 0x1c0) = iVar4 + 1;
        if (*(long *)(lVar9 + 0x1b0) != 0) {
          iVar4 = *(int *)(lVar9 + 0x1bc) + iVar4;
          iVar3 = 0;
          if (iVar5 <= iVar4) {
            iVar3 = iVar5;
          }
          puVar12 = (undefined1 *)(*(long *)(lVar9 + 0x1b0) + (long)(iVar4 - iVar3) * 0xb0);
          *puVar12 = 1;
          *(byte **)(puVar12 + 8) = local_88;
          *(undefined4 *)(puVar12 + 0x10) = 0;
          *(undefined4 *)(puVar12 + 0x14) = 0;
          *(undefined4 *)(puVar12 + 0x18) = 0;
          (**(code **)(puVar6 + 0x28))(&local_98);
          puVar11 = *(undefined8 **)(puVar12 + 0x20);
          if (puVar11 != local_90) {
            lVar9 = 0;
            do {
              pcVar2 = (char *)((long)local_90 + lVar9);
              lVar9 = lVar9 + 1;
            } while (*pcVar2 != '\0');
            uVar7 = (int)lVar9 - 1;
            if (*(int *)(puVar12 + 0x2c) <= (int)uVar7) {
              uVar7 = *(int *)(puVar12 + 0x2c) - 1;
            }
            if ((int)uVar7 < 1) {
              uVar7 = 0;
            }
            else {
              memcpy(puVar11,local_90,(ulong)uVar7);
              puVar11 = (undefined8 *)((long)puVar11 + (ulong)uVar7);
            }
            *(undefined1 *)puVar11 = 0;
            *(uint *)(puVar12 + 0x28) = uVar7;
          }
        }
      }
    }
    if (*(char *)((long)param_2 + 0x5d) != '\0') {
      pppuVar8 = &ppuStack_c0;
      if (local_b8 != 4) {
        if (local_b4 == 2) {
          pppuVar8 = &local_c8;
        }
        else if (local_b4 == 1) {
          pppuVar8 = &local_d0;
        }
        else {
          pppuVar8 = &local_d8;
        }
      }
      uVar7 = (*(code *)(*pppuVar8)[2])(pppuVar8);
      if ((*param_1 & 1) == 0) {
        lVar9 = 0;
      }
      else {
        lVar10 = *(long *)(param_1 + 8);
        lVar9 = 0;
        if ((lVar10 != 0) && (lVar9 = *(long *)(lVar10 + 0x18), (*(byte *)(lVar10 + 8) & 10) != 2))
        {
          lVar9 = 0;
        }
      }
      if (uVar7 < 0xc) {
        local_90 = (undefined8 *)(&PTR_s_Pen_S_04b29c00)[uVar7];
      }
      else {
        local_90 = &DAT_0407ebb1;
      }
      local_98 = (undefined **)(puVar6 + 0x10);
      local_78 = 0;
      local_88 = param_1 + 0x30;
      iVar4 = *(int *)(lVar9 + 0x1c0);
      local_74 = (float)CONCAT31(local_74._1_3_,1);
      local_80 = 0;
      iVar5 = *(int *)(lVar9 + 0x1b8);
      if (iVar4 < iVar5) {
        *(int *)(lVar9 + 0x1c0) = iVar4 + 1;
        if (*(long *)(lVar9 + 0x1b0) != 0) {
          iVar4 = *(int *)(lVar9 + 0x1bc) + iVar4;
          iVar3 = 0;
          if (iVar5 <= iVar4) {
            iVar3 = iVar5;
          }
          puVar12 = (undefined1 *)(*(long *)(lVar9 + 0x1b0) + (long)(iVar4 - iVar3) * 0xb0);
          *puVar12 = 1;
          *(byte **)(puVar12 + 8) = local_88;
          *(undefined4 *)(puVar12 + 0x10) = 0;
          *(undefined4 *)(puVar12 + 0x14) = 0;
          *(undefined4 *)(puVar12 + 0x18) = 0;
          (**(code **)(puVar6 + 0x28))(&local_98);
          puVar11 = *(undefined8 **)(puVar12 + 0x20);
          if (puVar11 != local_90) {
            lVar9 = 0;
            do {
              pcVar2 = (char *)((long)local_90 + lVar9);
              lVar9 = lVar9 + 1;
            } while (*pcVar2 != '\0');
            uVar7 = (int)lVar9 - 1;
            if (*(int *)(puVar12 + 0x2c) <= (int)uVar7) {
              uVar7 = *(int *)(puVar12 + 0x2c) - 1;
            }
            if ((int)uVar7 < 1) {
              uVar7 = 0;
            }
            else {
              memcpy(puVar11,local_90,(ulong)uVar7);
              puVar11 = (undefined8 *)((long)puVar11 + (ulong)uVar7);
            }
            *(undefined1 *)puVar11 = 0;
            *(uint *)(puVar12 + 0x28) = uVar7;
          }
        }
      }
    }
  }
  fVar15 = *(float *)((long)param_2 + 0x2c);
  uVar7 = (uint)*(byte *)(param_2 + 10);
  if (*(byte *)(param_2 + 10) != 0) {
    uVar7 = (**(code **)(*param_2 + 8))(param_2);
    uVar7 = uVar7 & 1;
  }
  lVar9 = *(long *)(param_1 + 0x40);
  fVar13 = *(float *)(param_1 + 0x50);
  fVar14 = *(float *)(param_1 + 0x54);
  if ((lVar9 != 0) && (*(int *)(lVar9 + 0x20) == *(int *)(param_1 + 0x48))) {
    fVar15 = fVar15 + -0.5;
    *(ushort *)(lVar9 + 0x98) = *(ushort *)(lVar9 + 0x98) | 0x10;
    *(ushort *)(lVar9 + 0x9a) = *(ushort *)(lVar9 + 0x9a) | 0x10;
    *(float *)(lVar9 + 0xac) = (fVar15 + fVar15) * 0.2;
  }
  fVar14 = local_68._4_4_ - fVar14;
  fVar13 = (float)local_68 - fVar13;
  local_80 = CONCAT71(local_80._1_7_,1);
  local_90 = (undefined8 *)((ulong)local_90 & 0xffffffffffffff00);
  local_88 = (byte *)0x0;
  local_98 = &PTR_FUN_04b29d10;
  local_80 = CONCAT44(SQRT(fVar14 * fVar14 + fVar13 * fVar13),(undefined4)local_80);
  local_78 = uVar7;
  local_74 = atan2f(fVar14,fVar13);
  pppuStack_a0 = &local_98;
  local_a8 = 0;
  FUN_03838950(param_1,&local_a8);
  *(float *)(param_1 + 0x54) = local_68._4_4_;
  *(float *)(param_1 + 0x50) = (float)local_68;
  return;
}

