
/* WARNING: Removing unreachable block (ram,0x03d864b4) */
/* WARNING: Removing unreachable block (ram,0x03d861cc) */
/* WARNING: Removing unreachable block (ram,0x03d86418) */
/* WARNING: Removing unreachable block (ram,0x03d86260) */

void FUN_03d85da0(long *param_1,undefined4 param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  int iVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined4 *puVar11;
  long lVar12;
  undefined1 *puVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  float *pfVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  long *plStack_68;
  
  lVar14 = *param_3;
  uVar1 = *(uint *)(lVar14 + 0x20);
  switch(param_2) {
  case 0:
    uVar8 = (**(code **)(*param_1 + 0xf8))(param_1);
    if ((uVar8 & 1) != 0) {
      return;
    }
    lVar12 = *param_3;
    lVar14 = 0;
    if (*(long *)(lVar12 + 0x18) != 0) {
      lVar15 = *(long *)(*(long *)(*(long *)(lVar12 + 0x18) + 0x210) + 0x48);
      lVar14 = 0;
      if (lVar15 != 0) {
        if (*(uint *)(lVar12 + 0x20) < *(uint *)(lVar15 + 0x18)) {
          lVar15 = *(long *)(*(long *)(lVar15 + 0x20) + (long)(int)*(uint *)(lVar12 + 0x20) * 8);
          lVar14 = 0;
          if (lVar15 != 0) {
            lVar14 = *(long *)(lVar15 + 0x10);
          }
        }
        else {
          lVar14 = 0;
        }
      }
    }
    lVar15 = param_1[0x43];
    if (lVar14 == lVar15) {
      *(byte *)((long)param_1 + 0x2c2) = *(byte *)((long)param_1 + 0x2c2) | 4;
      lVar12 = *param_3;
    }
    if (*(long *)(lVar15 + 0x18) == 0) {
      if ((((*(long *)(lVar12 + 0x18) != 0) &&
           (lVar14 = *(long *)(*(long *)(*(long *)(lVar12 + 0x18) + 0x210) + 0x48), lVar14 != 0)) &&
          (uVar2 = *(uint *)(lVar12 + 0x20), uVar2 < *(uint *)(lVar14 + 0x18))) &&
         ((lVar14 = *(long *)(*(long *)(lVar14 + 0x20) + (long)(int)uVar2 * 8), lVar14 != 0 &&
          (local_80 = *(undefined **)(lVar14 + 0x10), local_80 != (undefined *)0x0)))) {
        local_88 = 1;
        *(undefined4 *)(lVar14 + 4) = *(undefined4 *)((long)local_80 + 0x14a0);
        *(undefined4 *)(lVar14 + 8) = *(undefined4 *)((long)local_80 + 0x14a4);
        local_78 = (char *)(ulong)uVar2;
        local_70 = 0;
        (*(code *)**(undefined8 **)((long)local_80 + 0x40))
                  ((undefined8 *)((long)local_80 + 0x40),1,&local_80);
        *(undefined8 *)(lVar14 + 0x10) = 0;
      }
    }
    else if (((*(long *)(lVar12 + 0x18) != 0) &&
             (lVar14 = *(long *)(*(long *)(*(long *)(lVar12 + 0x18) + 0x210) + 0x48), lVar14 != 0))
            && ((uVar2 = *(uint *)(lVar12 + 0x20), uVar2 < *(uint *)(lVar14 + 0x18) &&
                (lVar14 = *(long *)(*(long *)(lVar14 + 0x20) + (long)(int)uVar2 * 8), lVar14 != 0)))
            ) {
      local_80 = *(undefined **)(lVar14 + 0x10);
      if (local_80 != (undefined *)0x0) {
        local_88 = 1;
        *(undefined4 *)(lVar14 + 4) = *(undefined4 *)((long)local_80 + 0x14a0);
        *(undefined4 *)(lVar14 + 8) = *(undefined4 *)((long)local_80 + 0x14a4);
        local_78 = (char *)(ulong)uVar2;
        local_70 = 0;
        (*(code *)**(undefined8 **)((long)local_80 + 0x40))
                  ((undefined8 *)((long)local_80 + 0x40),1,&local_80);
        *(undefined8 *)(lVar14 + 0x10) = 0;
      }
      *(undefined4 *)(lVar14 + 4) = *(undefined4 *)(lVar15 + 0x14a0);
      *(undefined4 *)(lVar14 + 8) = *(undefined4 *)(lVar15 + 0x14a4);
    }
    if (param_1[0x48] != 0) {
      plVar16 = *(long **)(*(long *)param_1[0x45] + 0x178);
      local_80 = PTR_DAT_04bc0cb8 + 0x10;
      local_78 = (char *)CONCAT44(local_78._4_4_,0x29);
      (**(code **)(*plVar16 + 0x20))(plVar16,&local_80);
      (**(code **)(plVar16[3] + 0x2b0))(&local_80,plVar16[1]);
      pfVar18 = (float *)param_1[0x48];
      fVar4 = (float)local_80;
      fVar5 = local_80._4_4_;
      lVar14 = (**(code **)(**(long **)PTR_DAT_04bb2158 + 0x40))();
      fVar19 = *(float *)(lVar14 + 4) * 0.5;
      fVar20 = *(float *)(param_3 + 3);
      fVar21 = *(float *)((long)param_3 + 0x14) / fVar19;
      *pfVar18 = *(float *)((long)param_3 + 0x14);
      pfVar18[1] = *(float *)(param_3 + 3);
      pfVar18[2] = fVar21;
      fVar20 = fVar20 / fVar19;
      pfVar18[3] = fVar20;
      pfVar18[10] = *(float *)((long)param_3 + 0x14);
      fVar19 = *(float *)(param_3 + 3);
      pfVar18[4] = 0.0;
      pfVar18[5] = 0.0;
      pfVar18[6] = 0.0;
      pfVar18[7] = 0.0;
      pfVar18[8] = 0.0;
      pfVar18[9] = 0.0;
      pfVar18[0xd] = fVar20;
      pfVar18[0xe] = fVar4;
      pfVar18[0xf] = fVar5;
      pfVar18[0x10] = 1.0;
      pfVar18[0x13] = 0.0;
      pfVar18[0x14] = 0.0;
      pfVar18[0x11] = 0.0;
      pfVar18[0x12] = 0.0;
      pfVar18[0xb] = fVar19;
      pfVar18[0xc] = fVar21;
      *(undefined1 *)(*(long *)param_1[0x45] + 0x3b) = 1;
    }
    puVar9 = (undefined8 *)param_1[0x4c];
    *(undefined4 *)(param_1 + 0x57) = 1;
    local_70 = 0;
    local_80 = &DAT_100000003;
    local_78 = (char *)CONCAT44(0xffffffff,uVar1);
    plStack_68 = param_1;
    if (puVar9 != (undefined8 *)0x0) {
      (**(code **)*puVar9)(puVar9,&local_80);
    }
    puVar9 = (undefined8 *)param_1[0x4d];
    if (puVar9 != (undefined8 *)0x0) {
      (**(code **)*puVar9)(puVar9,&local_80);
    }
    plVar16 = (long *)param_1[0x50];
    uVar6 = 0xb;
    if ((*(byte *)((long)param_1 + 0x2c3) & 1) != 0) {
      uVar6 = 8;
    }
    *(undefined4 *)((long)plVar16 + 0x2c) = uVar6;
    uVar8 = FUN_03c83810(plVar16);
    if ((uVar8 & 1) != 0) {
      uVar6 = *(undefined4 *)((long)plVar16 + 0x24);
      *(int *)((long)plVar16 + 0x24) = (int)plVar16[5];
      *(undefined4 *)(plVar16 + 5) = uVar6;
      *(byte *)((long)plVar16 + 0x21) = *(byte *)((long)plVar16 + 0x21) ^ 1;
      (**(code **)(*plVar16 + 0x48))(plVar16);
      if ((long *)plVar16[10] != plVar16 + 9) {
        lVar14 = (long)*(int *)((long)plVar16 + 0x5c);
        plVar17 = (long *)(plVar16[10] - lVar14);
        do {
          (**(code **)(*plVar17 + 0x18))
                    (plVar17,(int)plVar16[5],*(undefined4 *)((long)plVar16 + 0x24));
          plVar17 = (long *)(*(long *)((long)plVar17 + lVar14 + 8) - lVar14);
        } while (plVar17 != (long *)((long)(plVar16 + 9) - lVar14));
      }
    }
    FUN_03c835a0(plVar16);
    bVar3 = *(byte *)((long)param_1 + 0x2c4);
    goto joined_r0x03d8631c;
  case 1:
    if (((char)param_3[4] != '\0') && ((*(byte *)((long)param_1 + 0x2c3) >> 2 & 1) == 0)) {
      if ((*(byte *)(param_1 + 0x58) >> 2 & 1) == 0) {
        uVar8 = FUN_03d85d1c(param_1);
        if (((uVar8 & 1) == 0) && (uVar8 = FUN_03d86f28(param_1), (uVar8 & 1) == 0)) {
          uVar8 = (**(code **)(*param_1 + 0xf8))(param_1);
          if ((uVar8 & 1) == 0) goto LAB_03d86348;
        }
        else {
          FUN_03d86f90(param_1,uVar1);
        }
      }
      else {
        uVar8 = (**(code **)(*param_1 + 0xf8))(param_1);
        if ((uVar8 & 1) == 0) {
          *(undefined4 *)(param_1 + 0x57) = 1;
LAB_03d86348:
          FUN_03c83760(param_1[0x50],((uint)*(byte *)((long)param_1 + 0x2c3) << 2 ^ 0xffffffff) & 4)
          ;
          FUN_03d85b40(param_1);
        }
      }
    }
    if (*(char *)(*(long *)param_1[0x45] + 0x3c) != '\0') {
      *(undefined1 *)(*(long *)param_1[0x45] + 0x3b) = 0;
    }
    break;
  case 2:
    if (((*(byte *)(param_1 + 0x58) >> 2 & 1) != 0) &&
       (uVar8 = (**(code **)(*param_1 + 0xf0))(param_1), (uVar8 & 1) != 0)) {
      puVar9 = (undefined8 *)param_1[0x4c];
      *(undefined4 *)(param_1 + 0x57) = 1;
      local_70 = 0;
      local_80 = &DAT_100000005;
      local_78 = (char *)CONCAT44(0xffffffff,uVar1);
      plStack_68 = param_1;
      if (puVar9 != (undefined8 *)0x0) {
        (**(code **)*puVar9)(puVar9,&local_80);
      }
      puVar9 = (undefined8 *)param_1[0x4d];
      if (puVar9 != (undefined8 *)0x0) {
        (**(code **)*puVar9)(puVar9,&local_80);
      }
      if ((*(byte *)((long)param_1 + 0x2c2) >> 1 & 1) != 0) {
        FUN_03c839f0(param_1[0x50],0xb);
        *(byte *)((long)param_1 + 0x2c3) = *(byte *)((long)param_1 + 0x2c3) & 0xfe;
        *(byte *)((long)param_1 + 0x2c2) = *(byte *)((long)param_1 + 0x2c2) & 0xfd;
      }
    }
    break;
  case 3:
    if ((param_1[0x48] != 0) && (*(char *)(*(long *)param_1[0x45] + 0x3c) != '\0')) {
      puVar11 = (undefined4 *)param_1[0x49];
      if (puVar11 != (undefined4 *)0x0) {
        FUN_03d4ac08(*puVar11,puVar11[1],param_1[0x48],(long)param_3 + 0x14);
      }
      puVar9 = (undefined8 *)param_1[0x4f];
      if (puVar9 != (undefined8 *)0x0) {
        iVar7 = (**(code **)*puVar9)(puVar9,param_1[0x48],param_1);
        if (iVar7 == 2) {
          uVar10 = 0x11;
          *(undefined4 *)(param_1 + 0x57) = 1;
        }
        else {
          if (iVar7 != 1) {
            return;
          }
          *(undefined4 *)(param_1 + 0x57) = 1;
          uVar10 = 0xf;
        }
        FUN_03d5e304(param_1,uVar10,1,uVar1,0xffffffff,0);
        return;
      }
    }
    break;
  case 4:
    if ((*(byte *)((long)param_1 + 0x2c3) >> 2 & 1) == 0) {
      if ((*(byte *)((long)param_1 + 0x2c1) & 1) == 0) {
        return;
      }
      uVar8 = (**(code **)(*param_1 + 0xf8))(param_1);
      if ((uVar8 & 1) != 0) {
        return;
      }
      lVar14 = FUN_03d4bdb8(*param_3);
      lVar12 = param_1[0x43];
      if (lVar14 == lVar12) {
        *(byte *)((long)param_1 + 0x2c2) = *(byte *)((long)param_1 + 0x2c2) | 4;
      }
      if (*(long *)(lVar12 + 0x18) == 0) {
        FUN_03d4bc54(*param_3);
      }
      else {
        FUN_03d4bcfc(*param_3,lVar12 + 0x14a0);
      }
      if (param_1[0x48] != 0) {
        plVar16 = *(long **)(*(long *)param_1[0x45] + 0x178);
        local_80 = PTR_DAT_04bc0cb8 + 0x10;
        local_78 = (char *)CONCAT44(local_78._4_4_,0x29);
        (**(code **)(*plVar16 + 0x20))(plVar16,&local_80);
        (**(code **)(plVar16[3] + 0x2b0))(&local_80,plVar16[1]);
        local_88 = (float)local_80;
        uStack_84 = local_80._4_4_;
        FUN_03d4ab60(param_1[0x48],(long)param_3 + 0x14,&local_88);
        *(undefined1 *)(*(long *)param_1[0x45] + 0x3b) = 1;
      }
      *(undefined4 *)(param_1 + 0x57) = 1;
      FUN_03d5e304(param_1,3,1,uVar1,0xffffffff,0);
      uVar6 = 0xb;
      if ((*(byte *)((long)param_1 + 0x2c3) & 1) != 0) {
        uVar6 = 8;
      }
      FUN_03c83760(param_1[0x50],uVar6);
      FUN_03d85aa4(param_1);
      return;
    }
    lVar12 = param_1[0x43];
    if (*(long *)(lVar12 + 0x18) == 0) {
      if ((((*(long *)(lVar14 + 0x18) != 0) &&
           (lVar14 = *(long *)(*(long *)(*(long *)(lVar14 + 0x18) + 0x210) + 0x48), lVar14 != 0)) &&
          (uVar1 < *(uint *)(lVar14 + 0x18))) &&
         ((lVar14 = *(long *)(*(long *)(lVar14 + 0x20) + (long)(int)uVar1 * 8), lVar14 != 0 &&
          (puVar13 = *(undefined1 **)(lVar14 + 0x10), puVar13 != (undefined1 *)0x0)))) {
        local_88 = 1;
        *(undefined4 *)(lVar14 + 4) = *(undefined4 *)(puVar13 + 0x14a0);
        *(undefined4 *)(lVar14 + 8) = *(undefined4 *)(puVar13 + 0x14a4);
        local_78 = (char *)(ulong)uVar1;
        local_70 = 0;
        local_80 = puVar13;
        (*(code *)**(undefined8 **)(puVar13 + 0x40))(puVar13 + 0x40,1,&local_80);
        *(undefined8 *)(lVar14 + 0x10) = 0;
      }
    }
    else if (((*(long *)(lVar14 + 0x18) != 0) &&
             (lVar14 = *(long *)(*(long *)(*(long *)(lVar14 + 0x18) + 0x210) + 0x48), lVar14 != 0))
            && ((uVar1 < *(uint *)(lVar14 + 0x18) &&
                (lVar14 = *(long *)(*(long *)(lVar14 + 0x20) + (long)(int)uVar1 * 8), lVar14 != 0)))
            ) {
      puVar13 = *(undefined1 **)(lVar14 + 0x10);
      if (puVar13 != (undefined1 *)0x0) {
        local_88 = 1;
        *(undefined4 *)(lVar14 + 4) = *(undefined4 *)(puVar13 + 0x14a0);
        *(undefined4 *)(lVar14 + 8) = *(undefined4 *)(puVar13 + 0x14a4);
        local_78 = (char *)(ulong)uVar1;
        local_70 = 0;
        local_80 = puVar13;
        (*(code *)**(undefined8 **)(puVar13 + 0x40))(puVar13 + 0x40,1,&local_80);
        *(undefined8 *)(lVar14 + 0x10) = 0;
      }
      *(undefined4 *)(lVar14 + 4) = *(undefined4 *)(lVar12 + 0x14a0);
      *(undefined4 *)(lVar14 + 8) = *(undefined4 *)(lVar12 + 0x14a4);
    }
    *(undefined4 *)(param_1 + 0x57) = 1;
    plVar16 = (long *)param_1[0x50];
    uVar6 = 5;
    if ((*(byte *)((long)param_1 + 0x2c3) & 1) != 0) {
      uVar6 = 1;
    }
    *(undefined4 *)((long)plVar16 + 0x2c) = uVar6;
    uVar8 = FUN_03c83810(plVar16);
    if ((uVar8 & 1) != 0) {
      uVar6 = *(undefined4 *)((long)plVar16 + 0x24);
      *(int *)((long)plVar16 + 0x24) = (int)plVar16[5];
      *(undefined4 *)(plVar16 + 5) = uVar6;
      *(byte *)((long)plVar16 + 0x21) = *(byte *)((long)plVar16 + 0x21) ^ 1;
      (**(code **)(*plVar16 + 0x48))(plVar16);
      if ((long *)plVar16[10] != plVar16 + 9) {
        lVar14 = (long)*(int *)((long)plVar16 + 0x5c);
        plVar17 = (long *)(plVar16[10] - lVar14);
        do {
          (**(code **)(*plVar17 + 0x18))
                    (plVar17,(int)plVar16[5],*(undefined4 *)((long)plVar16 + 0x24));
          plVar17 = (long *)(*(long *)((long)plVar17 + lVar14 + 8) - lVar14);
        } while (plVar17 != (long *)((long)(plVar16 + 9) - lVar14));
      }
    }
    FUN_03c835a0(plVar16);
    bVar3 = *(byte *)((long)param_1 + 0x2c4);
joined_r0x03d8631c:
    if ((bVar3 & 1) == 0) {
      local_88 = 1;
      lVar14 = param_1[0x54];
      if (lVar14 != 0) {
        uVar6 = (**(code **)(*param_1 + 0x148))(param_1);
        *(undefined4 *)(lVar14 + 0x40) = uVar6;
      }
      if (param_1[0x55] != 0) {
        *(undefined4 *)(param_1[0x55] + 0x40) = local_88;
      }
      local_78 = "Select";
      lVar14 = param_1[0x51];
LAB_03d866e8:
      local_80 = PTR_DAT_04bb2020 + 0x10;
      FUN_03d66950(param_1,&local_80,lVar14);
    }
    else {
      *(byte *)((long)param_1 + 0x2c4) = bVar3 & 0xfe;
    }
    break;
  case 5:
  case 8:
    uVar8 = (**(code **)(*param_1 + 0xf8))(param_1);
    if ((uVar8 & 1) != 0) {
      return;
    }
    if (*(char *)(*(long *)param_1[0x45] + 0x3c) != '\0') {
      return;
    }
    puVar9 = (undefined8 *)param_1[0x4c];
    *(undefined4 *)(param_1 + 0x57) = 1;
    local_70 = 0;
    local_80 = (undefined *)0x100000004;
    local_78 = (char *)CONCAT44(0xffffffff,uVar1);
    plStack_68 = param_1;
    if (puVar9 != (undefined8 *)0x0) {
      (**(code **)*puVar9)(puVar9,&local_80);
    }
    puVar9 = (undefined8 *)param_1[0x4d];
    if (puVar9 != (undefined8 *)0x0) {
      (**(code **)*puVar9)(puVar9,&local_80);
    }
    plVar16 = (long *)param_1[0x50];
    *(uint *)((long)plVar16 + 0x2c) = ((uint)*(byte *)((long)param_1 + 0x2c3) << 2 ^ 0xffffffff) & 4
    ;
    uVar8 = FUN_03c83810(plVar16);
    if ((uVar8 & 1) != 0) {
      uVar6 = *(undefined4 *)((long)plVar16 + 0x24);
      *(int *)((long)plVar16 + 0x24) = (int)plVar16[5];
      *(undefined4 *)(plVar16 + 5) = uVar6;
      *(byte *)((long)plVar16 + 0x21) = *(byte *)((long)plVar16 + 0x21) ^ 1;
      (**(code **)(*plVar16 + 0x48))(plVar16);
      if ((long *)plVar16[10] != plVar16 + 9) {
        lVar14 = (long)*(int *)((long)plVar16 + 0x5c);
        plVar17 = (long *)(plVar16[10] - lVar14);
        do {
          (**(code **)(*plVar17 + 0x18))
                    (plVar17,(int)plVar16[5],*(undefined4 *)((long)plVar16 + 0x24));
          plVar17 = (long *)(*(long *)((long)plVar17 + lVar14 + 8) - lVar14);
        } while (plVar17 != (long *)((long)(plVar16 + 9) - lVar14));
      }
    }
    FUN_03c835a0(plVar16);
    lVar14 = param_1[0x54];
    local_88 = 1;
    if (lVar14 != 0) {
      uVar6 = (**(code **)(*param_1 + 0x148))(param_1);
      *(undefined4 *)(lVar14 + 0x40) = uVar6;
    }
    if (param_1[0x55] != 0) {
      *(undefined4 *)(param_1[0x55] + 0x40) = local_88;
    }
    local_78 = "Unselect";
    lVar14 = param_1[0x52];
    goto LAB_03d866e8;
  }
  return;
}

