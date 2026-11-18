
void FUN_0329abe0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  byte bVar4;
  byte bVar5;
  undefined8 uVar6;
  long *plVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  long *plVar15;
  undefined8 local_68;
  undefined ***local_60;
  undefined **local_58;
  long *plStack_50;
  undefined1 *local_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  plStack_50 = param_1;
  switch((int)param_1[6]) {
  case 1:
    if (*(long *)PTR_DAT_04bc8ed0 != 0) {
      FUN_032a6a10(*(long *)PTR_DAT_04bc8ed0,*(undefined8 *)(param_1[0x163] + 0x10));
    }
    *(undefined1 *)(param_1[0x163] + 0x18) = 1;
    FUN_032d1220(param_1[5]);
    *(long **)(*param_1 + 8) = param_1;
    if (param_1[2] != 0) {
      *(long **)(param_1[2] + 8) = param_1;
    }
    (**(code **)(*(long *)*param_1 + 0x28))();
    if ((long *)param_1[2] != (long *)0x0) {
      (**(code **)(*(long *)param_1[2] + 0x28))();
    }
    lVar11 = param_1[5];
    uVar6 = (**(code **)(*(long *)*param_1 + 0x20))();
    puVar1 = PTR_PTR_04bb2238;
    if (**(char **)(PTR_PTR_04bb2238 + 8) == '\0') {
      plVar7 = *(long **)(*(long *)(lVar11 + 0xf0) + 0x18);
    }
    else {
      local_68 = PTR_DAT_04bc8e68 + 0x10;
      local_60 = (undefined ***)*(char **)(PTR_PTR_04bb2238 + 8);
      plVar7 = (long *)FUN_032cb8e0(auStack_38,&local_68,*(undefined8 *)(lVar11 + 0xf0));
    }
    uVar9 = (**(code **)(*plVar7 + 0x60))(plVar7,"N_Content",1);
    FUN_032d1c90(lVar11,uVar6,uVar9);
    if ((long *)param_1[2] != (long *)0x0) {
      lVar11 = param_1[5];
      uVar6 = (**(code **)(*(long *)param_1[2] + 0x20))();
      if (**(char **)(puVar1 + 8) == '\0') {
        plVar7 = *(long **)(*(long *)(lVar11 + 0xf0) + 0x18);
      }
      else {
        local_68 = PTR_DAT_04bc8e68 + 0x10;
        local_60 = (undefined ***)*(char **)(puVar1 + 8);
        plVar7 = (long *)FUN_032cb8e0(auStack_38,&local_68,*(undefined8 *)(lVar11 + 0xf0));
      }
      uVar9 = (**(code **)(*plVar7 + 0x60))(plVar7,"N_ContentU",1);
      FUN_032d1c90(lVar11,uVar6,uVar9);
    }
    puVar2 = PTR_DAT_04bc8e60;
    local_58 = &PTR_LAB_04b188d0;
    plVar7 = param_1 + 7;
    local_48 = &LAB_0329b8d4;
    uStack_40 = 0;
    local_60 = &local_58;
    puVar1 = PTR_DAT_04bc8e60 + 0x10;
    local_68 = puVar1;
    FUN_032c7c30(plVar7,0,0,&local_68,1,0);
    if (local_60 != (undefined ***)0x0) {
      (*(code *)(*local_60)[1])();
    }
    local_60 = (undefined ***)0x0;
    local_68 = puVar1;
    FUN_032c7c30(plVar7,3,1,&local_68,0,0);
    if (local_60 != (undefined ***)0x0) {
      (**(code **)((long)*local_60 + 8))();
    }
    if (param_1[2] != 0) {
      local_68 = puVar2 + 0x10;
      local_60 = (undefined ***)0x0;
      FUN_032c7c30(plVar7,5,2,&local_68,0,0);
      if (local_60 != (undefined ***)0x0) {
        (**(code **)((long)*local_60 + 8))();
      }
    }
    uVar10 = 2;
    break;
  case 2:
    FUN_0329b8e0(param_1);
    bVar4 = (**(code **)(*(long *)*param_1 + 0x30))();
    plVar7 = (long *)param_1[2];
    bVar5 = bVar4 & plVar7 == (long *)0x0;
    if ((plVar7 != (long *)0x0) && ((bVar4 & 1) != 0)) {
      bVar5 = (**(code **)(*plVar7 + 0x30))();
    }
    if ((bVar5 & 1) == 0) {
      return;
    }
    if ((char)param_1[0x162] == '\0') {
      return;
    }
    *(undefined1 *)(param_1 + 0x162) = 0;
    uVar10 = 3;
    break;
  case 3:
    lVar11 = param_1[3];
    if (lVar11 != 0) {
      lVar12 = param_1[0xde];
      plVar7 = param_1 + 0xde;
      if (lVar12 == 0) {
        lVar12 = param_1[0xe0];
        if (lVar12 != 0) {
          lVar14 = param_1[0xe1];
          goto LAB_0329b3c4;
        }
LAB_0329b3c8:
        if (param_1[0xe1] != 0) {
          *(long *)(param_1[0xe1] + 0x10) = param_1[0xe0];
        }
      }
      else {
        lVar14 = param_1[0xe1];
        if (*(long **)(lVar12 + 8) != plVar7) {
          lVar12 = param_1[0xe0];
LAB_0329b3c4:
          *(long *)(lVar12 + 0x18) = lVar14;
          goto LAB_0329b3c8;
        }
        if (lVar14 == 0) {
          *(undefined8 *)(lVar12 + 8) = 0;
        }
        else {
          *(long *)(lVar12 + 8) = lVar14;
          *(undefined8 *)(param_1[0xe1] + 0x10) = 0;
        }
      }
      param_1[0xe1] = 0;
      param_1[0xe0] = 0;
      param_1[0xde] = lVar11;
      if (*(long *)(lVar11 + 8) == 0) {
        *(long **)(lVar11 + 8) = plVar7;
      }
      else {
        lVar12 = *(long *)(lVar11 + 8);
        do {
          lVar14 = lVar12;
          lVar12 = *(long *)(lVar14 + 0x18);
        } while (*(long *)(lVar14 + 0x18) != 0);
        *(long **)(lVar14 + 0x18) = plVar7;
        param_1[0xe0] = lVar14;
      }
      local_68 = (undefined *)CONCAT44(local_68._4_4_,6);
      if ((*(ushort *)(param_1 + 0xe8) >> 6 & 1) != 0) {
        param_1[0xe3] = *(long *)(lVar11 + 0x28);
      }
    }
    lVar11 = param_1[4];
    if (lVar11 != 0) {
      lVar12 = param_1[0x122];
      plVar7 = param_1 + 0x122;
      if (lVar12 == 0) {
        lVar12 = param_1[0x124];
        if (lVar12 != 0) {
          lVar14 = param_1[0x125];
          goto LAB_0329b6f4;
        }
LAB_0329b6f8:
        if (param_1[0x125] != 0) {
          *(long *)(param_1[0x125] + 0x10) = param_1[0x124];
        }
      }
      else {
        lVar14 = param_1[0x125];
        if (*(long **)(lVar12 + 8) != plVar7) {
          lVar12 = param_1[0x124];
LAB_0329b6f4:
          *(long *)(lVar12 + 0x18) = lVar14;
          goto LAB_0329b6f8;
        }
        if (lVar14 == 0) {
          *(undefined8 *)(lVar12 + 8) = 0;
        }
        else {
          *(long *)(lVar12 + 8) = lVar14;
          *(undefined8 *)(param_1[0x125] + 0x10) = 0;
        }
      }
      param_1[0x125] = 0;
      param_1[0x124] = 0;
      param_1[0x122] = lVar11;
      if (*(long *)(lVar11 + 8) == 0) {
        *(long **)(lVar11 + 8) = plVar7;
      }
      else {
        lVar11 = *(long *)(lVar11 + 8);
        do {
          lVar12 = lVar11;
          lVar11 = *(long *)(lVar12 + 0x18);
        } while (*(long *)(lVar12 + 0x18) != 0);
        *(long **)(lVar12 + 0x18) = plVar7;
        param_1[0x124] = lVar12;
      }
    }
    if (param_1[2] != 0) {
      local_68 = (undefined *)((ulong)local_68 & 0xffffffff00000000);
      *(ushort *)(param_1 + 0x60) = *(ushort *)(param_1 + 0x60) | 1;
    }
    plVar7 = param_1 + 0x122;
    lVar11 = *(long *)PTR_DAT_04bc8ee8;
    if (*(long **)(lVar11 + 0x3a8) != plVar7) {
      plVar15 = plVar7;
      do {
        if ((plVar15 == (long *)(lVar11 + 0x1d8)) || (plVar15 == (long *)(lVar11 + 8))) {
          plVar15 = plVar7;
          goto LAB_0329b7d0;
        }
        plVar15 = (long *)*plVar15;
      } while (plVar15 != (long *)0x0);
    }
    goto LAB_0329b7fc;
  case 4:
    FUN_0329b8e0(param_1);
    (**(code **)(*(long *)*param_1 + 0x40))();
    if ((long *)param_1[2] == (long *)0x0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0329ad98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1[2] + 0x40))();
    return;
  case 5:
    if ((long *)param_1[2] != (long *)0x0) {
      (**(code **)(*(long *)param_1[2] + 0x58))();
    }
    (**(code **)(*(long *)*param_1 + 0x48))();
    FUN_03292228(param_1 + 0x15c);
    puVar1 = PTR_DAT_04bc8ee8;
    plVar7 = param_1 + 0x122;
    lVar11 = *(long *)PTR_DAT_04bc8ee8;
    if (*(long **)(lVar11 + 0x3b0) == plVar7) {
      FUN_032af260(lVar11,1);
      lVar11 = *(long *)puVar1;
    }
    if (*(long **)(lVar11 + 0x3a8) == plVar7) {
      FUN_032af260(lVar11,0);
    }
    local_68 = (undefined *)((ulong)local_68._4_4_ << 0x20);
    *(ushort *)(param_1 + 0x60) = *(ushort *)(param_1 + 0x60) & 0xfffe;
    FUN_032c2100(param_1 + 0x56);
    FUN_032ae1e0(plVar7);
    FUN_032c1bf0(param_1 + 0xde);
    puVar2 = PTR_DAT_04bc8e60;
    local_58 = &PTR_LAB_04b188d0;
    plVar7 = param_1 + 7;
    local_48 = &LAB_0329bce4;
    uStack_40 = 0;
    local_60 = &local_58;
    puVar1 = PTR_DAT_04bc8e60 + 0x10;
    local_68 = puVar1;
    FUN_032c7c30(plVar7,1,0,&local_68,1,0);
    if (local_60 != (undefined ***)0x0) {
      (*(code *)(*local_60)[1])();
    }
    local_60 = (undefined ***)0x0;
    local_68 = puVar1;
    FUN_032c7c30(plVar7,4,1,&local_68,0,0);
    if (local_60 != (undefined ***)0x0) {
      (**(code **)((long)*local_60 + 8))();
    }
    if (param_1[2] != 0) {
      local_68 = puVar2 + 0x10;
      local_60 = (undefined ***)0x0;
      FUN_032c7c30(plVar7,6,2,&local_68,0,0);
      if (local_60 != (undefined ***)0x0) {
        (**(code **)((long)*local_60 + 8))();
      }
    }
    uVar10 = 6;
    break;
  case 6:
    FUN_0329b8e0(param_1);
    if (((long *)param_1[2] != (long *)0x0) &&
       (uVar8 = (**(code **)(*(long *)param_1[2] + 0x50))(), (uVar8 & 1) == 0)) {
      return;
    }
    uVar8 = (**(code **)(*(long *)*param_1 + 0x50))();
    if ((uVar8 & 1) == 0) {
      return;
    }
    if (*(char *)((long)param_1 + 0xb11) == '\0') {
      return;
    }
    *(undefined1 *)((long)param_1 + 0xb11) = 0;
    uVar10 = 7;
    break;
  case 7:
    if ((long *)param_1[2] != (long *)0x0) {
      (**(code **)(*(long *)param_1[2] + 0x58))();
    }
    (**(code **)(*(long *)*param_1 + 0x58))();
    if (param_1[2] != 0) {
      *(undefined8 *)(param_1[2] + 8) = 0;
    }
    *(undefined8 *)(*param_1 + 8) = 0;
    if ((long *)param_1[2] != (long *)0x0) {
      lVar11 = param_1[5];
      uVar6 = (**(code **)(*(long *)param_1[2] + 0x20))();
      FUN_032d15b0(lVar11,uVar6);
    }
    lVar11 = param_1[5];
    uVar6 = (**(code **)(*(long *)*param_1 + 0x20))();
    FUN_032d15b0(lVar11,uVar6);
    plVar7 = (long *)param_1[5];
    if (*plVar7 != 0) {
      lVar14 = *(long *)PTR_DAT_04bc6338;
      lVar11 = plVar7[1];
      lVar12 = plVar7[2];
      plVar7[2] = 0;
      *plVar7 = 0;
      plVar7[1] = 0;
      if (*(long **)(lVar14 + 0x560) == plVar7) {
        *(long *)(lVar14 + 0x560) = lVar12;
      }
      if (lVar12 != 0) {
        *(long *)(lVar12 + 8) = lVar11;
      }
      if (lVar11 != 0) {
        *(long *)(lVar11 + 0x10) = lVar12;
      }
    }
    if (param_1[2] != 0) {
      param_1[2] = 0;
    }
    *param_1 = 0;
    *(undefined4 *)(param_1 + 6) = 0;
    *(undefined1 *)(param_1[0x163] + 0x18) = 0;
    if ((char)param_1[0x164] == '\0') {
      return;
    }
    FUN_032a6df0(*(undefined8 *)PTR_DAT_04bc8ed0,*(undefined8 *)(param_1[0x163] + 0x10),0);
    return;
  case 8:
    (**(code **)(*(long *)*param_1 + 0x48))();
    FUN_03292228(param_1 + 0x15c);
    puVar1 = PTR_DAT_04bc8ee8;
    plVar7 = param_1 + 0x122;
    lVar11 = *(long *)PTR_DAT_04bc8ee8;
    if (*(long **)(lVar11 + 0x3b0) == plVar7) {
      FUN_032af260(lVar11,1);
      lVar11 = *(long *)puVar1;
    }
    if (*(long **)(lVar11 + 0x3a8) == plVar7) {
      FUN_032af260(lVar11,0);
    }
    FUN_032ae1e0(plVar7);
    FUN_032c1bf0(param_1 + 0xde);
    local_58 = &PTR_LAB_04b188d0;
    local_48 = &LAB_0329bcf0;
    uStack_40 = 0;
    local_60 = &local_58;
    local_68 = PTR_DAT_04bc8e60 + 0x10;
    FUN_032c7c30(param_1 + 7,4,1,&local_68,1,0);
    if (local_60 != (undefined ***)0x0) {
      (*(code *)(*local_60)[1])();
    }
    uVar10 = 9;
    break;
  case 9:
    FUN_0329b8e0(param_1);
    uVar8 = (**(code **)(*(long *)*param_1 + 0x50))();
    if ((uVar8 & 1) == 0) {
      return;
    }
    if (*(char *)((long)param_1 + 0xb11) == '\0') {
      return;
    }
    *(undefined1 *)((long)param_1 + 0xb11) = 0;
    uVar10 = 10;
    break;
  case 10:
    (**(code **)(*(long *)*param_1 + 0x58))();
    *(undefined8 *)(*param_1 + 8) = 0;
    lVar11 = param_1[5];
    uVar6 = (**(code **)(*(long *)*param_1 + 0x20))();
    FUN_032d15b0(lVar11,uVar6);
    *param_1 = 0;
    uVar10 = 0xb;
    break;
  case 0xb:
    lVar11 = param_1[1];
    *param_1 = lVar11;
    param_1[1] = 0;
    *(long **)(lVar11 + 8) = param_1;
    (**(code **)(*(long *)*param_1 + 0x28))();
    lVar11 = param_1[5];
    uVar6 = (**(code **)(*(long *)*param_1 + 0x20))();
    if (**(char **)(PTR_PTR_04bb2238 + 8) == '\0') {
      plVar7 = *(long **)(*(long *)(lVar11 + 0xf0) + 0x18);
    }
    else {
      local_68 = PTR_DAT_04bc8e68 + 0x10;
      local_60 = (undefined ***)*(char **)(PTR_PTR_04bb2238 + 8);
      plVar7 = (long *)FUN_032cb8e0(auStack_38,&local_68,*(undefined8 *)(lVar11 + 0xf0));
    }
    uVar9 = (**(code **)(*plVar7 + 0x60))(plVar7,"N_Content",1);
    FUN_032d1c90(lVar11,uVar6,uVar9);
    local_58 = &PTR_LAB_04b188d0;
    local_48 = &LAB_0329bcfc;
    uStack_40 = 0;
    local_60 = &local_58;
    local_68 = PTR_DAT_04bc8e60 + 0x10;
    FUN_032c7c30(param_1 + 7,3,1,&local_68,1,0);
    if (local_60 != (undefined ***)0x0) {
      (*(code *)(*local_60)[1])();
    }
    uVar10 = 0xc;
    break;
  case 0xc:
    FUN_0329b8e0(param_1);
    uVar8 = (**(code **)(*(long *)*param_1 + 0x30))();
    if ((uVar8 & 1) == 0) {
      return;
    }
    if ((char)param_1[0x162] == '\0') {
      return;
    }
    *(undefined1 *)(param_1 + 0x162) = 0;
    uVar10 = 0xd;
    break;
  case 0xd:
    FUN_032c32a0(param_1 + 0xde,param_1[3]);
    lVar11 = param_1[4];
    plVar7 = param_1 + 0x122;
    lVar12 = param_1[0x122];
    if (lVar12 == 0) {
      lVar12 = param_1[0x124];
      if (lVar12 != 0) {
        lVar14 = param_1[0x125];
        goto LAB_0329b3a0;
      }
LAB_0329b3a4:
      if (param_1[0x125] != 0) {
        *(long *)(param_1[0x125] + 0x10) = param_1[0x124];
      }
    }
    else {
      lVar14 = param_1[0x125];
      if (*(long **)(lVar12 + 8) != plVar7) {
        lVar12 = param_1[0x124];
LAB_0329b3a0:
        *(long *)(lVar12 + 0x18) = lVar14;
        goto LAB_0329b3a4;
      }
      if (lVar14 == 0) {
        *(undefined8 *)(lVar12 + 8) = 0;
      }
      else {
        *(long *)(lVar12 + 8) = lVar14;
        *(undefined8 *)(param_1[0x125] + 0x10) = 0;
      }
    }
    param_1[0x122] = 0;
    param_1[0x124] = 0;
    param_1[0x125] = 0;
    if (lVar11 != 0) {
      *plVar7 = lVar11;
      if (*(long *)(lVar11 + 8) == 0) {
        *(long **)(lVar11 + 8) = plVar7;
      }
      else {
        lVar11 = *(long *)(lVar11 + 8);
        do {
          lVar12 = lVar11;
          lVar11 = *(long *)(lVar12 + 0x18);
        } while (*(long *)(lVar12 + 0x18) != 0);
        *(long **)(lVar12 + 0x18) = plVar7;
        param_1[0x124] = lVar12;
      }
    }
    lVar11 = *(long *)PTR_DAT_04bc8ee8;
    if (*(long **)(lVar11 + 0x3a8) != plVar7) {
      plVar15 = plVar7;
      do {
        if ((plVar15 == (long *)(lVar11 + 0x1d8)) || (plVar15 == (long *)(lVar11 + 8))) {
          plVar15 = plVar7;
          goto LAB_0329b5a0;
        }
        plVar15 = (long *)*plVar15;
      } while (plVar15 != (long *)0x0);
    }
    goto LAB_0329b5cc;
  default:
    goto switchD_0329ac1c_default;
  }
  goto LAB_0329b8bc;
  while (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0) {
LAB_0329b5a0:
    local_68 = (undefined *)CONCAT44(local_68._4_4_,1);
    if ((*(byte *)(plVar15 + 0x39) >> 1 & 1) != 0) {
      FUN_032af0b0(lVar11,plVar15,0);
      break;
    }
  }
LAB_0329b5cc:
  plVar15 = param_1 + 0x15c;
  FUN_032923e0(plVar15,plVar7);
  if (param_1[0x15c] == 0) {
    lVar11 = *(long *)PTR_DAT_04bc8fe0;
    puVar13 = (undefined8 *)(lVar11 + 8);
    puVar3 = (undefined8 *)*puVar13;
    if ((undefined8 *)*puVar13 == (undefined8 *)0x0) {
      *puVar13 = plVar15;
    }
    else {
      do {
        puVar13 = puVar3;
        puVar3 = (undefined8 *)puVar13[2];
      } while ((undefined8 *)puVar13[2] != (undefined8 *)0x0);
      puVar13[2] = plVar15;
      param_1[0x15d] = (long)puVar13;
      puVar13 = (undefined8 *)*puVar13;
    }
    param_1[0x15c] = (long)puVar13;
    FUN_0328fad0(lVar11);
    uVar8 = (ulong)local_68 >> 0x20;
    local_68 = (undefined *)((ulong)local_68 & 0xffffffff00000000);
    if ((*(uint *)((long)param_1 + 0xb0c) & 1) == 0) {
      *(undefined8 *)(lVar11 + 0xa8) = 0;
      local_68 = (undefined *)CONCAT44((int)uVar8,1);
      *(byte *)(lVar11 + 0xd4) = *(byte *)(lVar11 + 0xd4) & 0xfd;
    }
  }
LAB_0329b8a8:
  (**(code **)(*(long *)*param_1 + 0x38))();
  goto LAB_0329b8b8;
  while (plVar15 = (long *)*plVar15, plVar15 != (long *)0x0) {
LAB_0329b7d0:
    local_68 = (undefined *)CONCAT44(local_68._4_4_,1);
    if ((*(byte *)(plVar15 + 0x39) >> 1 & 1) != 0) {
      FUN_032af0b0(lVar11,plVar15,0);
      break;
    }
  }
LAB_0329b7fc:
  plVar15 = param_1 + 0x15c;
  FUN_032923e0(plVar15,plVar7);
  if (param_1[0x15c] == 0) {
    lVar11 = *(long *)PTR_DAT_04bc8fe0;
    puVar13 = (undefined8 *)(lVar11 + 8);
    puVar3 = (undefined8 *)*puVar13;
    if ((undefined8 *)*puVar13 == (undefined8 *)0x0) {
      *puVar13 = plVar15;
    }
    else {
      do {
        puVar13 = puVar3;
        puVar3 = (undefined8 *)puVar13[2];
      } while ((undefined8 *)puVar13[2] != (undefined8 *)0x0);
      puVar13[2] = plVar15;
      param_1[0x15d] = (long)puVar13;
      puVar13 = (undefined8 *)*puVar13;
    }
    param_1[0x15c] = (long)puVar13;
    FUN_0328fad0(lVar11);
    uVar8 = (ulong)local_68 >> 0x20;
    local_68 = (undefined *)((ulong)local_68 & 0xffffffff00000000);
    if ((*(uint *)((long)param_1 + 0xb0c) & 1) == 0) {
      *(undefined8 *)(lVar11 + 0xa8) = 0;
      local_68 = (undefined *)CONCAT44((int)uVar8,1);
      *(byte *)(lVar11 + 0xd4) = *(byte *)(lVar11 + 0xd4) & 0xfd;
    }
  }
  (**(code **)(*(long *)*param_1 + 0x38))();
  if (param_1[2] != 0) goto LAB_0329b8a8;
LAB_0329b8b8:
  uVar10 = 4;
LAB_0329b8bc:
  *(undefined4 *)(param_1 + 6) = uVar10;
switchD_0329ac1c_default:
  return;
}

