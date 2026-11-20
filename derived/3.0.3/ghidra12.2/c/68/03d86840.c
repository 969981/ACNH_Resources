
/* WARNING: Removing unreachable block (ram,0x03d86ad8) */
/* WARNING: Removing unreachable block (ram,0x03d86d0c) */

void FUN_03d86840(long *param_1,undefined4 param_2,long *param_3)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  long lVar10;
  float *pfVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  long *plStack_58;
  
  uVar5 = *(undefined4 *)(*param_3 + 0x20);
  plStack_58 = param_1;
  switch(param_2) {
  case 0:
    if (param_1[0x48] == 0) {
      if ((*(byte *)(param_1 + 0x58) >> 2 & 1) == 0) goto LAB_03d86c6c;
    }
    else {
      plVar12 = *(long **)(*(long *)param_1[0x45] + 0x178);
      local_70 = PTR_DAT_04bc0cb8 + 0x10;
      local_68 = (char *)CONCAT44(local_68._4_4_,0x29);
      (**(code **)(*plVar12 + 0x20))(plVar12,&local_70);
      (**(code **)(plVar12[3] + 0x2b0))(&local_70,plVar12[1]);
      pfVar11 = (float *)param_1[0x48];
      fVar2 = (float)local_70;
      fVar3 = local_70._4_4_;
      lVar15 = (**(code **)(**(long **)PTR_DAT_04bb2158 + 0x40))();
      fVar16 = *(float *)(lVar15 + 4) * 0.5;
      fVar17 = *(float *)(param_3 + 3);
      fVar18 = *(float *)((long)param_3 + 0x14) / fVar16;
      *pfVar11 = *(float *)((long)param_3 + 0x14);
      pfVar11[1] = *(float *)(param_3 + 3);
      pfVar11[2] = fVar18;
      fVar17 = fVar17 / fVar16;
      pfVar11[3] = fVar17;
      pfVar11[10] = *(float *)((long)param_3 + 0x14);
      fVar16 = *(float *)(param_3 + 3);
      pfVar11[4] = 0.0;
      pfVar11[5] = 0.0;
      pfVar11[6] = 0.0;
      pfVar11[7] = 0.0;
      pfVar11[8] = 0.0;
      pfVar11[9] = 0.0;
      pfVar11[0xd] = fVar17;
      pfVar11[0xe] = fVar2;
      pfVar11[0xf] = fVar3;
      pfVar11[0x10] = 1.0;
      pfVar11[0x13] = 0.0;
      pfVar11[0x14] = 0.0;
      pfVar11[0x11] = 0.0;
      pfVar11[0x12] = 0.0;
      pfVar11[0xb] = fVar16;
      pfVar11[0xc] = fVar18;
      *(undefined1 *)(*(long *)param_1[0x45] + 0x3b) = 1;
    }
    break;
  case 1:
    if (param_1[0x48] != 0) {
      if (((char)param_3[4] != '\0') && ((*(byte *)((long)param_1 + 0x2c3) >> 2 & 1) == 0)) {
        if ((*(byte *)(param_1 + 0x58) >> 2 & 1) == 0) {
          FUN_03d831c0(param_1,2,uVar5,0xffffffff);
        }
        else {
          uVar6 = (**(code **)(*param_1 + 0xf8))(param_1);
          if ((uVar6 & 1) == 0) {
            if ((*(byte *)((long)param_1 + 0x2c3) & 1) == 0) {
              uVar8 = 4;
            }
            else {
              uVar8 = 0;
            }
            FUN_03c83760(param_1[0x50],uVar8);
          }
        }
      }
      if (*(char *)(*(long *)param_1[0x45] + 0x3c) != '\0') {
        *(undefined1 *)(*(long *)param_1[0x45] + 0x3b) = 0;
      }
    }
    break;
  case 2:
    if ((param_1[0x48] == 0) && ((*(byte *)(param_1 + 0x58) >> 2 & 1) != 0)) {
LAB_03d86c6c:
      FUN_03d831c0(param_1,2,uVar5,0xffffffff);
      return;
    }
    break;
  case 3:
    if (((param_1[0x48] != 0) && ((*(byte *)((long)param_1 + 0x2c3) >> 2 & 1) == 0)) &&
       (*(char *)(*(long *)param_1[0x45] + 0x3c) != '\0')) {
      puVar9 = (undefined4 *)param_1[0x49];
      if (puVar9 != (undefined4 *)0x0) {
        FUN_03d4ac08(*puVar9,puVar9[1],param_1[0x48],(long)param_3 + 0x14);
      }
      puVar7 = (undefined8 *)param_1[0x4f];
      if (puVar7 != (undefined8 *)0x0) {
        iVar4 = (**(code **)*puVar7)(puVar7,param_1[0x48],param_1);
        if (iVar4 == 2) {
          uVar8 = 0x11;
          *(undefined4 *)(param_1 + 0x57) = 2;
        }
        else {
          if (iVar4 != 1) {
            return;
          }
          *(undefined4 *)(param_1 + 0x57) = 2;
          uVar8 = 0xf;
        }
        FUN_03d5e304(param_1,uVar8,2,uVar5,0xffffffff,0);
        return;
      }
    }
    break;
  case 4:
    uVar6 = (**(code **)(*param_1 + 0xf8))(param_1);
    if (((uVar6 & 1) != 0) && ((*(byte *)((long)param_1 + 0x2c3) >> 2 & 1) == 0)) {
      return;
    }
    lVar14 = param_1[0x43];
    lVar15 = *param_3;
    if (*(long *)(lVar14 + 0x18) == 0) {
      if ((((*(long *)(lVar15 + 0x18) != 0) &&
           (lVar14 = *(long *)(*(long *)(*(long *)(lVar15 + 0x18) + 0x210) + 0x48), lVar14 != 0)) &&
          (uVar1 = *(uint *)(lVar15 + 0x20), uVar1 < *(uint *)(lVar14 + 0x18))) &&
         ((lVar15 = *(long *)(*(long *)(lVar14 + 0x20) + (long)(int)uVar1 * 8), lVar15 != 0 &&
          (local_70 = *(undefined **)(lVar15 + 0x10), local_70 != (undefined *)0x0)))) {
        *(undefined4 *)(lVar15 + 4) = *(undefined4 *)((long)local_70 + 0x14a0);
        *(undefined4 *)(lVar15 + 8) = *(undefined4 *)((long)local_70 + 0x14a4);
        local_68 = (char *)(ulong)uVar1;
        local_60 = 0;
        (*(code *)**(undefined8 **)((long)local_70 + 0x40))
                  ((undefined8 *)((long)local_70 + 0x40),1,&local_70);
        *(undefined8 *)(lVar15 + 0x10) = 0;
      }
    }
    else if (((*(long *)(lVar15 + 0x18) != 0) &&
             (lVar10 = *(long *)(*(long *)(*(long *)(lVar15 + 0x18) + 0x210) + 0x48), lVar10 != 0))
            && ((uVar1 = *(uint *)(lVar15 + 0x20), uVar1 < *(uint *)(lVar10 + 0x18) &&
                (lVar15 = *(long *)(*(long *)(lVar10 + 0x20) + (long)(int)uVar1 * 8), lVar15 != 0)))
            ) {
      local_70 = *(undefined **)(lVar15 + 0x10);
      if (local_70 != (undefined *)0x0) {
        *(undefined4 *)(lVar15 + 4) = *(undefined4 *)((long)local_70 + 0x14a0);
        *(undefined4 *)(lVar15 + 8) = *(undefined4 *)((long)local_70 + 0x14a4);
        local_68 = (char *)(ulong)uVar1;
        local_60 = 0;
        (*(code *)**(undefined8 **)((long)local_70 + 0x40))
                  ((undefined8 *)((long)local_70 + 0x40),1,&local_70);
        *(undefined8 *)(lVar15 + 0x10) = 0;
      }
      *(undefined4 *)(lVar15 + 4) = *(undefined4 *)(lVar14 + 0x14a0);
      *(undefined4 *)(lVar15 + 8) = *(undefined4 *)(lVar14 + 0x14a4);
    }
    puVar7 = (undefined8 *)param_1[0x4c];
    *(undefined4 *)(param_1 + 0x57) = 2;
    local_60 = 0;
    local_70 = (undefined *)0x200000003;
    local_68 = (char *)CONCAT44(0xffffffff,uVar5);
    if (puVar7 != (undefined8 *)0x0) {
      (**(code **)*puVar7)(puVar7,&local_70);
    }
    puVar7 = (undefined8 *)param_1[0x4d];
    if (puVar7 != (undefined8 *)0x0) {
      (**(code **)*puVar7)(puVar7,&local_70);
    }
    plVar12 = (long *)param_1[0x50];
    uVar5 = 5;
    if ((*(byte *)((long)param_1 + 0x2c3) & 1) != 0) {
      uVar5 = 1;
    }
    *(undefined4 *)((long)plVar12 + 0x2c) = uVar5;
    uVar6 = FUN_03c83810(plVar12);
    if ((uVar6 & 1) != 0) {
      uVar5 = *(undefined4 *)((long)plVar12 + 0x24);
      *(int *)((long)plVar12 + 0x24) = (int)plVar12[5];
      *(undefined4 *)(plVar12 + 5) = uVar5;
      *(byte *)((long)plVar12 + 0x21) = *(byte *)((long)plVar12 + 0x21) ^ 1;
      (**(code **)(*plVar12 + 0x48))(plVar12);
      if ((long *)plVar12[10] != plVar12 + 9) {
        lVar15 = (long)*(int *)((long)plVar12 + 0x5c);
        plVar13 = (long *)(plVar12[10] - lVar15);
        do {
          (**(code **)(*plVar13 + 0x18))
                    (plVar13,(int)plVar12[5],*(undefined4 *)((long)plVar12 + 0x24));
          plVar13 = (long *)(*(long *)((long)plVar13 + lVar15 + 8) - lVar15);
        } while (plVar13 != (long *)((long)(plVar12 + 9) - lVar15));
      }
    }
    FUN_03c835a0(plVar12);
    if ((*(byte *)((long)param_1 + 0x2c4) & 1) != 0) {
      *(byte *)((long)param_1 + 0x2c4) = *(byte *)((long)param_1 + 0x2c4) & 0xfe;
      return;
    }
    lVar15 = param_1[0x54];
    if (lVar15 != 0) {
      uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
      *(undefined4 *)(lVar15 + 0x40) = uVar5;
    }
    if (param_1[0x55] != 0) {
      *(undefined4 *)(param_1[0x55] + 0x40) = 2;
    }
    local_68 = "Select";
    lVar15 = param_1[0x51];
    goto LAB_03d86e68;
  case 5:
    uVar6 = (**(code **)(*param_1 + 0xf8))(param_1);
    if ((uVar6 & 1) != 0) {
      return;
    }
    if (*(char *)(*(long *)param_1[0x45] + 0x3c) != '\0') {
      return;
    }
    puVar7 = (undefined8 *)param_1[0x4c];
    *(undefined4 *)(param_1 + 0x57) = 2;
    local_60 = 0;
    local_70 = (undefined *)0x200000004;
    local_68 = (char *)CONCAT44(0xffffffff,uVar5);
    if (puVar7 != (undefined8 *)0x0) {
      (**(code **)*puVar7)(puVar7,&local_70);
    }
    puVar7 = (undefined8 *)param_1[0x4d];
    if (puVar7 != (undefined8 *)0x0) {
      (**(code **)*puVar7)(puVar7,&local_70);
    }
    plVar12 = (long *)param_1[0x50];
    *(uint *)((long)plVar12 + 0x2c) = ((uint)*(byte *)((long)param_1 + 0x2c3) << 2 ^ 0xffffffff) & 4
    ;
    uVar6 = FUN_03c83810(plVar12);
    if ((uVar6 & 1) != 0) {
      uVar5 = *(undefined4 *)((long)plVar12 + 0x24);
      *(int *)((long)plVar12 + 0x24) = (int)plVar12[5];
      *(undefined4 *)(plVar12 + 5) = uVar5;
      *(byte *)((long)plVar12 + 0x21) = *(byte *)((long)plVar12 + 0x21) ^ 1;
      (**(code **)(*plVar12 + 0x48))(plVar12);
      if ((long *)plVar12[10] != plVar12 + 9) {
        lVar15 = (long)*(int *)((long)plVar12 + 0x5c);
        plVar13 = (long *)(plVar12[10] - lVar15);
        do {
          (**(code **)(*plVar13 + 0x18))
                    (plVar13,(int)plVar12[5],*(undefined4 *)((long)plVar12 + 0x24));
          plVar13 = (long *)(*(long *)((long)plVar13 + lVar15 + 8) - lVar15);
        } while (plVar13 != (long *)((long)(plVar12 + 9) - lVar15));
      }
    }
    FUN_03c835a0(plVar12);
    lVar15 = param_1[0x54];
    if (lVar15 != 0) {
      uVar5 = (**(code **)(*param_1 + 0x148))(param_1);
      *(undefined4 *)(lVar15 + 0x40) = uVar5;
    }
    if (param_1[0x55] != 0) {
      *(undefined4 *)(param_1[0x55] + 0x40) = 2;
    }
    local_68 = "Unselect";
    lVar15 = param_1[0x52];
LAB_03d86e68:
    local_70 = PTR_DAT_04bb2020 + 0x10;
    FUN_03d66950(param_1,&local_70,lVar15);
  }
  return;
}

