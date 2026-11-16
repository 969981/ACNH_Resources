
void FUN_02645cc0(byte *param_1,long *param_2,long *param_3,long *param_4,undefined1 *param_5,
                 uint param_6)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  byte *pbVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined1 uVar10;
  undefined *puVar11;
  char *pcVar12;
  byte bVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  byte *pbVar17;
  int iVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  undefined *local_78;
  char *pcStack_70;
  undefined8 local_68;
  
  if (*param_2 == 0) {
    return;
  }
  lVar20 = *(long *)(param_1 + 8);
  if (lVar20 == 0) {
    return;
  }
  lVar8 = *(long *)(lVar20 + 0x28);
  if (lVar8 == 0) {
    uVar16 = 0;
    pbVar4 = param_1;
    goto LAB_02645d70;
  }
  if (*(undefined8 **)(lVar8 + 0x10) == (undefined8 *)0x0) {
    uVar16 = 0;
    plVar5 = *(long **)(lVar8 + 0x20);
    pbVar4 = (byte *)0x0;
    if (plVar5 == (long *)0x0) goto LAB_02645d70;
  }
  else {
    pbVar4 = (byte *)(**(code **)**(undefined8 **)(lVar8 + 0x10))();
    uVar16 = (ulong)pbVar4 & 0xffffffff;
    if (*(long *)(lVar20 + 0x28) == 0) goto LAB_02645d70;
    plVar5 = *(long **)(*(long *)(lVar20 + 0x28) + 0x20);
    if (plVar5 == (long *)0x0) {
      pbVar4 = (byte *)0x0;
      goto LAB_02645d70;
    }
  }
  local_78 = *(undefined **)(lVar20 + 8);
  pcStack_70 = *(char **)(lVar20 + 0x10);
  local_68 = 0xb548;
  pbVar4 = (byte *)(**(code **)(*plVar5 + 0x20))(plVar5,&local_78);
LAB_02645d70:
  puVar11 = *(undefined **)(lVar20 + 8);
  pcVar12 = *(char **)(lVar20 + 0x10);
  lVar8 = 0;
  plVar5 = (long *)(pcVar12 + (long)puVar11);
  do {
    uVar3 = *(uint *)((long)plVar5 + lVar8 * 4 + 0xaf00);
    plVar6 = plVar5 + (ulong)uVar3 * 0xe;
    if (399 < uVar3) {
      plVar6 = plVar5;
    }
    if ((*plVar6 != 0) &&
       ((*(int *)((long)plVar6 + 0x2c) != 0 && (int)plVar6[2] != 0) && *plVar6 == *param_2)) {
      lVar14 = *(long *)(lVar20 + 0x28);
      if ((int)(uint)lVar8 < 0) goto LAB_02645ed8;
      if (lVar14 != 0) {
        plVar6 = *(long **)(lVar14 + 0x20);
        pbVar4 = (byte *)0x0;
        if (plVar6 != (long *)0x0) {
          local_68 = 0xb548;
          local_78 = puVar11;
          pcStack_70 = pcVar12;
          pbVar4 = (byte *)(**(code **)(*plVar6 + 0x20))(plVar6,&local_78);
          plVar5 = (long *)(*(long *)(lVar20 + 0x10) + *(long *)(lVar20 + 8));
        }
      }
      lVar14 = *(long *)PTR_DAT_04bb32e8;
      plVar6 = plVar5;
      if (((uint)lVar8 < 400) &&
         (uVar3 = *(uint *)((long)plVar5 + lVar8 * 4 + 0xaf00), plVar6 = plVar5 + (ulong)uVar3 * 0xe
         , 399 < uVar3)) {
        plVar6 = plVar5;
      }
      plVar6[1] = *param_3;
      lVar8 = *param_4;
      lVar15 = param_4[2];
      plVar6[3] = param_4[1];
      plVar6[4] = lVar15;
      plVar6[2] = lVar8;
      lVar8 = param_4[3];
      lVar15 = param_4[4];
      lVar2 = param_4[6];
      plVar6[7] = param_4[5];
      plVar6[8] = lVar2;
      plVar6[5] = lVar8;
      plVar6[6] = lVar15;
      bVar13 = 0x10;
      if ((param_6 & 1) == 0) {
        bVar13 = 0;
      }
      *(undefined1 *)(plVar6 + 0xc) = *param_5;
      *(undefined1 *)((long)plVar6 + 0x61) = param_5[1];
      *(undefined1 *)((long)plVar6 + 0x62) = param_5[2];
      *(undefined1 *)((long)plVar6 + 99) = param_5[3];
      *(undefined1 *)((long)plVar6 + 100) = param_5[4];
      *(undefined1 *)((long)plVar6 + 0x65) = param_5[5];
      *(undefined1 *)((long)plVar6 + 0x66) = param_5[6];
      *(undefined1 *)((long)plVar6 + 0x67) = param_5[7];
      *(undefined1 *)(plVar6 + 0xd) = param_5[8];
      *(undefined2 *)((long)plVar6 + 0x6a) = *(undefined2 *)(param_5 + 10);
      *(byte *)((long)plVar6 + 0x6e) = *(byte *)((long)plVar6 + 0x6e) & 0xef | bVar13;
      plVar6[9] = *(long *)(lVar14 + 0x4060);
      goto LAB_0264631c;
    }
    lVar8 = lVar8 + 1;
  } while (lVar8 != 400);
  lVar14 = *(long *)(lVar20 + 0x28);
LAB_02645ed8:
  if (lVar14 != 0) {
    plVar6 = *(long **)(lVar14 + 0x20);
    pbVar4 = (byte *)0x0;
    if (plVar6 != (long *)0x0) {
      local_68 = 0xb548;
      local_78 = puVar11;
      pcStack_70 = pcVar12;
      pbVar4 = (byte *)(**(code **)(*plVar6 + 0x20))(plVar6,&local_78);
      puVar11 = *(undefined **)(lVar20 + 8);
      pcVar12 = *(char **)(lVar20 + 0x10);
      plVar5 = (long *)(pcVar12 + (long)puVar11);
    }
  }
  uVar21 = 0;
  do {
    uVar3 = *(uint *)((long)plVar5 + uVar21 * 4 + 0xaf00);
    plVar6 = plVar5 + (ulong)uVar3 * 0xe;
    if (399 < uVar3) {
      plVar6 = plVar5;
    }
    if ((*plVar6 == 0) || (*(int *)((long)plVar6 + 0x2c) == 0 || (int)plVar6[2] == 0)) {
      if (-1 < (int)uVar21) {
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
        lVar8 = *(long *)(lVar20 + 0x28);
        goto joined_r0x02645f70;
      }
      break;
    }
    uVar21 = uVar21 + 1;
  } while (uVar21 != 400);
  if (*(long *)(lVar20 + 0x28) != 0) {
    plVar6 = *(long **)(*(long *)(lVar20 + 0x28) + 0x20);
    pbVar4 = (byte *)0x0;
    if (plVar6 != (long *)0x0) {
      local_68 = 0xb548;
      local_78 = puVar11;
      pcStack_70 = pcVar12;
      pbVar4 = (byte *)(**(code **)(*plVar6 + 0x20))(plVar6,&local_78);
      puVar11 = *(undefined **)(lVar20 + 8);
      pcVar12 = *(char **)(lVar20 + 0x10);
      plVar5 = (long *)(pcVar12 + (long)puVar11);
    }
  }
  plVar6 = plVar5 + (ulong)*(uint *)((long)plVar5 + 0xb53c) * 0xe;
  if (399 < *(uint *)((long)plVar5 + 0xb53c)) {
    plVar6 = plVar5;
  }
  if ((*plVar6 != 0) && (*(int *)((long)plVar6 + 0x2c) != 0 && (int)plVar6[2] != 0)) {
    if (*(long *)(lVar20 + 0x28) != 0) {
      plVar6 = *(long **)(*(long *)(lVar20 + 0x28) + 0x20);
      pbVar4 = (byte *)0x0;
      if (plVar6 != (long *)0x0) {
        local_68 = 0xb548;
        local_78 = puVar11;
        pcStack_70 = pcVar12;
        pbVar4 = (byte *)(**(code **)(*plVar6 + 0x20))(plVar6,&local_78);
        plVar5 = (long *)(*(long *)(lVar20 + 0x10) + *(long *)(lVar20 + 8));
      }
    }
    plVar6 = plVar5 + (ulong)*(uint *)((long)plVar5 + 0xb53c) * 0xe;
    if (399 < *(uint *)((long)plVar5 + 0xb53c)) {
      plVar6 = plVar5;
    }
    if ((*(byte *)((long)plVar6 + 0x6e) & 1) != 0) {
      local_78 = PTR_DAT_04bb2020 + 0x10;
      pcStack_70 = "FriendListNotifyLook";
      FUN_0274bfe8(param_1,&local_78,1);
      bVar13 = *param_1;
      if (7 < bVar13) {
        bVar13 = 0xff;
      }
      local_78 = (undefined *)CONCAT71(local_78._1_7_,bVar13);
      pbVar4 = (byte *)FUN_02f095f0(&local_78);
    }
  }
  uVar21 = 399;
  lVar8 = *(long *)(lVar20 + 0x28);
joined_r0x02645f70:
  if (lVar8 != 0) {
    plVar5 = *(long **)(lVar8 + 0x20);
    pbVar4 = (byte *)0x0;
    if (plVar5 != (long *)0x0) {
      local_78 = *(undefined **)(lVar20 + 8);
      pcStack_70 = *(char **)(lVar20 + 0x10);
      local_68 = 0xb548;
      pbVar4 = (byte *)(**(code **)(*plVar5 + 0x20))(plVar5,&local_78);
    }
  }
  plVar5 = (long *)(*(long *)(lVar20 + 0x10) + *(long *)(lVar20 + 8));
  lVar8 = *(long *)PTR_DAT_04bb32e8;
  plVar6 = plVar5;
  if (((uint)uVar21 < 400) &&
     (uVar3 = *(uint *)((long)plVar5 + (uVar21 & 0xffffffff) * 4 + 0xaf00),
     plVar6 = plVar5 + (ulong)uVar3 * 0xe, 399 < uVar3)) {
    plVar6 = plVar5;
  }
  *plVar6 = *param_2;
  plVar6[1] = *param_3;
  lVar15 = param_4[2];
  lVar14 = param_4[1];
  plVar6[2] = *param_4;
  plVar6[3] = lVar14;
  plVar6[4] = lVar15;
  lVar14 = param_4[3];
  lVar15 = param_4[4];
  lVar2 = param_4[6];
  plVar6[7] = param_4[5];
  plVar6[8] = lVar2;
  plVar6[5] = lVar14;
  plVar6[6] = lVar15;
  *(undefined1 *)(plVar6 + 0xc) = *param_5;
  *(undefined1 *)((long)plVar6 + 0x61) = param_5[1];
  *(undefined1 *)((long)plVar6 + 0x62) = param_5[2];
  *(undefined1 *)((long)plVar6 + 99) = param_5[3];
  *(undefined1 *)((long)plVar6 + 100) = param_5[4];
  *(undefined1 *)((long)plVar6 + 0x65) = param_5[5];
  *(undefined1 *)((long)plVar6 + 0x66) = param_5[6];
  *(undefined1 *)((long)plVar6 + 0x67) = param_5[7];
  *(undefined1 *)(plVar6 + 0xd) = param_5[8];
  *(undefined2 *)((long)plVar6 + 0x6a) = *(undefined2 *)(param_5 + 10);
  lVar8 = *(long *)(lVar8 + 0x4060);
  *(undefined2 *)(plVar6 + 10) = 0;
  *(undefined1 *)((long)plVar6 + 0x56) = 0;
  plVar6[0xb] = 0;
  *(undefined2 *)((long)plVar6 + 0x6c) = 0;
  plVar6[9] = lVar8;
  *(undefined4 *)((long)plVar6 + 0x52) = 0x101;
  uVar10 = 0x10;
  if ((param_6 & 1) == 0) {
    uVar10 = 0;
  }
  *(undefined1 *)((long)plVar6 + 0x6e) = uVar10;
  pbVar17 = (byte *)*param_3;
  if (pbVar17 != (byte *)0x0) {
    lVar8 = *(long *)PTR_DAT_04bb49f8;
    uVar3 = *(uint *)(lVar8 + 0x28);
    if (uVar3 != 0xffffffff) {
      if (*(uint *)(lVar8 + 8) <= uVar3) {
        uVar3 = 0;
      }
      lVar8 = *(long *)(lVar8 + 0x10) + (long)(int)uVar3 * 0x40;
      if ((*(char *)(lVar8 + 0x39) != '\0') && (0 < (int)*(uint *)(lVar8 + 0x20))) {
        uVar9 = 0;
        uVar19 = (ulong)*(uint *)(lVar8 + 0x20);
        do {
          if (*(uint *)(lVar8 + 0x10) <= (uint)uVar9 || *(long *)(lVar8 + 0x18) == 0) break;
          pbVar4 = (byte *)nn::friends::Friend::GetAccountId();
          if (pbVar4 == pbVar17) {
            if ((*(long *)(lVar20 + 0x28) != 0) &&
               (plVar5 = *(long **)(*(long *)(lVar20 + 0x28) + 0x20), plVar5 != (long *)0x0)) {
              local_78 = *(undefined **)(lVar20 + 8);
              pcStack_70 = *(char **)(lVar20 + 0x10);
              local_68 = 0xb548;
              (**(code **)(*plVar5 + 0x20))(plVar5,&local_78);
            }
            lVar8 = *(long *)(lVar20 + 0x10) + *(long *)(lVar20 + 8);
            lVar14 = lVar8;
            if (((uint)uVar21 < 400) &&
               (uVar3 = *(uint *)(lVar8 + (uVar21 & 0xffffffff) * 4 + 0xaf00),
               lVar14 = lVar8 + (ulong)uVar3 * 0x70, 399 < uVar3)) {
              lVar14 = lVar8;
            }
            lVar8 = *(long *)PTR_DAT_04bb8930;
            *(byte *)(lVar14 + 0x6e) = *(byte *)(lVar14 + 0x6e) | 1;
            local_78 = PTR_DAT_04bb2020;
            uVar3 = 0;
            if (*(uint *)(lVar8 + 0x18) != 0xffffffff) {
              uVar3 = *(uint *)(lVar8 + 0x18);
            }
            if (*(uint *)(lVar8 + 8) <= uVar3) {
              uVar3 = 0;
            }
            *(undefined4 *)(*(long *)(lVar8 + 0x10) + (long)(int)uVar3 * 0x58 + 0x50) = 0x1e;
            local_78 = local_78 + 0x10;
            pcStack_70 = "FriendListNotifyLook";
            FUN_0274bfe8(param_1,&local_78,1);
            bVar13 = *param_1;
            if (7 < bVar13) {
              bVar13 = 0xff;
            }
            local_78 = (undefined *)CONCAT71(local_78._1_7_,bVar13);
            pbVar4 = (byte *)FUN_02f095f0(&local_78);
            break;
          }
          uVar1 = (uVar19 & 0xffffffff00000000) + 0x100000000;
          uVar9 = uVar1 >> 0x20;
          iVar18 = (int)uVar19;
          uVar19 = uVar1 | uVar19 & 0xffffffff;
        } while ((int)(uVar1 >> 0x20) < iVar18);
      }
    }
  }
LAB_0264631c:
  if (*(long *)(lVar20 + 0x28) != 0) {
    plVar5 = *(long **)(*(long *)(lVar20 + 0x28) + 0x20);
    pbVar4 = (byte *)0x0;
    if (plVar5 != (long *)0x0) {
      local_78 = *(undefined **)(lVar20 + 8);
      pcStack_70 = *(char **)(lVar20 + 0x10);
      local_68 = 0xb548;
      pbVar4 = (byte *)(**(code **)(*plVar5 + 0x20))(plVar5,&local_78);
    }
  }
  FUN_026463a0(pbVar4,*(long *)(lVar20 + 0x10) + *(long *)(lVar20 + 8));
  if ((((uVar16 & 1) != 0) && (*(long *)(lVar20 + 0x28) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(lVar20 + 0x28) + 0x18), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
  return;
}

