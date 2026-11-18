
void FUN_032a6df0(long param_1,char *param_2,ulong param_3)

{
  undefined *puVar1;
  byte bVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 local_a4;
  undefined **local_a0;
  undefined ***local_98;
  undefined **local_90;
  long lStack_88;
  code *local_80;
  undefined8 uStack_78;
  int local_6c;
  int iStack_68;
  int iStack_64;
  undefined *local_60;
  char *pcStack_58;
  int local_38;
  int local_34;
  
  puVar1 = PTR_DAT_04bc8e68;
  if (*(char *)(param_1 + 0x113) != '\0') {
    local_a0 = (undefined **)(PTR_DAT_04bc8e68 + 0x10);
    *(undefined1 *)(param_1 + 0x114) = 1;
    local_60 = *(undefined **)(param_1 + 0x28);
    local_98 = (undefined ***)0x405ea35;
    lVar7 = FUN_032cb990(&local_60,&local_a0);
    if (lVar7 != 0) {
      *(undefined1 *)(param_1 + 0x113) = 0;
      *(byte *)(lVar7 + 0x58) = *(byte *)(lVar7 + 0x58) & 0xfe | *(byte *)(param_1 + 0x115);
    }
  }
  if (*param_2 == '\0') {
    FUN_032a5fc0(param_1,0);
    if (*(int *)(param_1 + 0xa8) == 0) {
      return;
    }
    if (*(int *)(param_1 + 0xa8) == 3) {
      return;
    }
    local_90 = &PTR_LAB_04b19af8;
    local_80 = (code *)&LAB_032a6740;
    uStack_78 = 0;
    local_98 = &local_90;
    local_a0 = &PTR_LAB_04b177d8;
    lStack_88 = param_1;
    FUN_032c7c30(*(undefined8 *)(param_1 + 0x40),1,0,&local_a0,0,0);
    if (local_98 != (undefined ***)0x0) {
      (*(code *)(*local_98)[1])();
    }
    uVar4 = 3;
    goto LAB_032a7730;
  }
  *(undefined1 *)(param_1 + 0x117) = 1;
  if (*param_2 == '\0') {
    FUN_032a5fc0(param_1,0);
    if ((*(int *)(param_1 + 0xa8) != 0) && (*(int *)(param_1 + 0xa8) != 3)) {
      local_90 = &PTR_LAB_04b19af8;
      local_80 = (code *)&LAB_032a6740;
      uStack_78 = 0;
      local_98 = &local_90;
      local_a0 = &PTR_LAB_04b177d8;
      lStack_88 = param_1;
      FUN_032c7c30(*(undefined8 *)(param_1 + 0x40),1,0,&local_a0,0,0);
      if (local_98 != (undefined ***)0x0) {
        (*(code *)(*local_98)[1])();
      }
      uVar4 = 3;
      goto LAB_032a7008;
    }
  }
  else if (((param_3 & 1) == 0) && (1 < *(int *)(param_1 + 0xa8) - 1U)) {
    local_90 = &PTR_LAB_04b19af8;
    local_80 = FUN_032a6710;
    uStack_78 = 0;
    local_98 = &local_90;
    local_a0 = &PTR_LAB_04b177d8;
    lStack_88 = param_1;
    FUN_032c7c30(*(undefined8 *)(param_1 + 0x40),0,0,&local_a0,0,0);
    if (local_98 != (undefined ***)0x0) {
      (*(code *)(*local_98)[1])();
    }
    uVar4 = 2;
LAB_032a7008:
    *(undefined4 *)(param_1 + 0xa8) = uVar4;
  }
  FUN_032ab3d0(*(undefined8 *)(param_1 + 0x70),param_2 + 8);
  FUN_032ab3d0(*(undefined8 *)(param_1 + 0x78),param_2 + 0x38);
  FUN_032ab3d0(*(undefined8 *)(param_1 + 0x80),param_2 + 0x68);
  FUN_032ab3d0(*(undefined8 *)(param_1 + 0x88),param_2 + 0x98);
  FUN_032ab3d0(*(undefined8 *)(param_1 + 0x90),param_2 + 200);
  FUN_032ab3d0(*(undefined8 *)(param_1 + 0x98),param_2 + 0xf8);
  FUN_032ab3d0(*(undefined8 *)(param_1 + 0xa0),param_2 + 0x128);
  FUN_032a6750(param_1);
  plVar8 = *(long **)(param_2 + 400);
  local_a0 = &PTR_LAB_04b17830;
  local_98 = (undefined ***)0x0;
  if (plVar8 != (long *)0x0) {
    local_98 = (undefined ***)(**(code **)(*plVar8 + 0x18))(plVar8,&local_90);
  }
  plVar8 = *(long **)(param_1 + 0xb8);
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 8))(plVar8);
  }
  if (local_98 == (undefined ***)0x0) {
    *(undefined8 *)(param_1 + 0xb8) = 0;
  }
  else {
    uVar9 = (**(code **)((long)*local_98 + 0x18))(local_98,param_1 + 0xc0);
    *(undefined8 *)(param_1 + 0xb8) = uVar9;
    if (local_98 != (undefined ***)0x0) {
      (**(code **)((long)*local_98 + 8))();
    }
  }
  lVar7 = *(long *)(param_2 + 0x1b8);
  lVar12 = *(long *)(param_2 + 0x1c0);
  plVar8 = *(long **)(param_1 + 0x30);
  if (lVar7 == 0) {
    FUN_032c1bf0();
    plVar8 = *(long **)(param_1 + 0x38);
    if (lVar12 == 0) goto LAB_032a7124;
LAB_032a71e4:
    lVar7 = *plVar8;
    if (lVar7 == 0) {
      lVar7 = plVar8[2];
      if (lVar7 != 0) {
        lVar10 = plVar8[3];
        goto LAB_032a7210;
      }
LAB_032a7214:
      if (plVar8[3] != 0) {
        *(long *)(plVar8[3] + 0x10) = plVar8[2];
      }
    }
    else {
      lVar10 = plVar8[3];
      if (*(long **)(lVar7 + 8) != plVar8) {
        lVar7 = plVar8[2];
LAB_032a7210:
        *(long *)(lVar7 + 0x18) = lVar10;
        goto LAB_032a7214;
      }
      if (lVar10 == 0) {
        *(undefined8 *)(lVar7 + 8) = 0;
      }
      else {
        *(long *)(lVar7 + 8) = lVar10;
        *(undefined8 *)(plVar8[3] + 0x10) = 0;
      }
    }
    plVar8[2] = 0;
    plVar8[3] = 0;
    *plVar8 = lVar12;
    lVar7 = *(long *)(lVar12 + 8);
    if (*(long *)(lVar12 + 8) == 0) {
      *(long **)(lVar12 + 8) = plVar8;
    }
    else {
      do {
        lVar12 = lVar7;
        lVar7 = *(long *)(lVar12 + 0x18);
      } while (*(long *)(lVar12 + 0x18) != 0);
      *(long **)(lVar12 + 0x18) = plVar8;
      plVar8[2] = lVar12;
    }
    local_60 = (undefined *)CONCAT44(local_60._4_4_,2);
    *(byte *)(*(long *)(param_1 + 0x38) + 0x1c8) = *(byte *)(*(long *)(param_1 + 0x38) + 0x1c8) | 4;
  }
  else {
    lVar10 = *plVar8;
    if (lVar10 == 0) {
      lVar10 = plVar8[2];
      if (lVar10 != 0) {
        lVar11 = plVar8[3];
        goto LAB_032a7138;
      }
LAB_032a713c:
      if (plVar8[3] != 0) {
        *(long *)(plVar8[3] + 0x10) = plVar8[2];
      }
    }
    else {
      lVar11 = plVar8[3];
      if (*(long **)(lVar10 + 8) != plVar8) {
        lVar10 = plVar8[2];
LAB_032a7138:
        *(long *)(lVar10 + 0x18) = lVar11;
        goto LAB_032a713c;
      }
      if (lVar11 == 0) {
        *(undefined8 *)(lVar10 + 8) = 0;
      }
      else {
        *(long *)(lVar10 + 8) = lVar11;
        *(undefined8 *)(plVar8[3] + 0x10) = 0;
      }
    }
    plVar8[2] = 0;
    plVar8[3] = 0;
    *plVar8 = lVar7;
    lVar10 = *(long *)(lVar7 + 8);
    if (*(long *)(lVar7 + 8) == 0) {
      *(long **)(lVar7 + 8) = plVar8;
    }
    else {
      do {
        lVar11 = lVar10;
        lVar10 = *(long *)(lVar11 + 0x18);
      } while (*(long *)(lVar11 + 0x18) != 0);
      *(long **)(lVar11 + 0x18) = plVar8;
      plVar8[2] = lVar11;
    }
    if ((*(ushort *)(plVar8 + 10) >> 6 & 1) != 0) {
      plVar8[5] = *(long *)(lVar7 + 0x28);
    }
    local_60 = (undefined *)((ulong)local_60 & 0xffffffff00000000);
    *(ushort *)(*(long *)(param_1 + 0x30) + 0x50) =
         *(ushort *)(*(long *)(param_1 + 0x30) + 0x50) | 1;
    plVar8 = *(long **)(param_1 + 0x38);
    if (lVar12 != 0) goto LAB_032a71e4;
LAB_032a7124:
    FUN_032ae1e0();
  }
  local_a4 = *(undefined4 *)(param_2 + 0x1c8);
  local_38 = 0;
  iStack_68 = 0;
  iStack_64 = 0;
  local_6c = 0;
  uVar4 = FUN_032a6cc4(&local_a4);
  switch(uVar4) {
  case 0:
    iVar5 = FUN_032862c0(0);
    iStack_64 = 0;
    local_38 = 0;
    if (iVar5 != -1) {
      local_38 = iVar5;
    }
    break;
  case 1:
    iVar5 = 1;
    uVar9 = 1;
    goto LAB_032a730c;
  case 2:
    iVar5 = 2;
    uVar9 = 2;
LAB_032a730c:
    iVar6 = FUN_032862c0(uVar9);
LAB_032a7350:
    local_38 = 0;
    if (iVar6 != -1) {
      local_38 = iVar6;
    }
    local_6c = iVar5;
    iStack_68 = iVar5;
    iStack_64 = iVar5;
    goto LAB_032a7360;
  case 3:
    iVar5 = FUN_032862c0(3);
    local_38 = 0;
    if (iVar5 != -1) {
      local_38 = iVar5;
    }
    iStack_64 = 2;
    break;
  case 4:
    iVar6 = FUN_032862c0(3);
    iVar5 = 2;
    goto LAB_032a7350;
  default:
    iVar5 = 0;
    goto LAB_032a7360;
  }
  iVar5 = 0;
  local_6c = 0;
  iStack_68 = 0;
LAB_032a7360:
  lVar7 = **(long **)(*(long *)(param_1 + 0x48) + 0x38);
  iVar6 = FUN_032a6cc4(&local_38);
  do {
    lVar12 = lVar7;
    plVar8 = *(long **)(lVar12 + 0x28);
    lVar7 = *(long *)(lVar12 + 0x18);
  } while (*(long *)(lVar12 + 0x18) != 0 && plVar8 == (long *)0x0);
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0xd0))((float)iVar6,plVar8);
  }
  *(undefined4 *)(lVar12 + 0x6c) = 1;
  puVar3 = PTR_DAT_04bb2120;
  puVar1 = puVar1 + 0x10;
  pcStack_58 = PTR_DAT_04bb2120;
  if (PTR_s_TextColor_04c4a048 != (undefined *)0x0) {
    pcStack_58 = PTR_s_TextColor_04c4a048;
  }
  local_60 = puVar1;
  local_34 = iVar5;
  FUN_032c8270((float)iVar5,*(undefined8 *)(*(long *)(param_1 + 0x70) + 8),&local_60,0);
  pcStack_58 = puVar3;
  if (PTR_s_TextColor_04c4a048 != (undefined *)0x0) {
    pcStack_58 = PTR_s_TextColor_04c4a048;
  }
  local_60 = puVar1;
  local_34 = iVar5;
  FUN_032c8270((float)iVar5,*(undefined8 *)(*(long *)(param_1 + 0x78) + 8),&local_60,0);
  pcStack_58 = puVar3;
  if (PTR_s_TextColor_04c4a048 != (undefined *)0x0) {
    pcStack_58 = PTR_s_TextColor_04c4a048;
  }
  local_60 = puVar1;
  local_34 = iVar5;
  FUN_032c8270((float)iVar5,*(undefined8 *)(*(long *)(param_1 + 0x80) + 8),&local_60,0);
  pcStack_58 = puVar3;
  if (PTR_s_TextColor_04c4a048 != (undefined *)0x0) {
    pcStack_58 = PTR_s_TextColor_04c4a048;
  }
  local_60 = puVar1;
  local_34 = iVar5;
  FUN_032c8270((float)iVar5,*(undefined8 *)(*(long *)(param_1 + 0x88) + 8),&local_60,0);
  pcStack_58 = puVar3;
  if (PTR_s_TextColor_04c4a048 != (undefined *)0x0) {
    pcStack_58 = PTR_s_TextColor_04c4a048;
  }
  local_60 = puVar1;
  local_34 = iVar5;
  FUN_032c8270((float)iVar5,*(undefined8 *)(*(long *)(param_1 + 0x90) + 8),&local_60,0);
  pcStack_58 = puVar3;
  if (PTR_s_TextColor_04c4a048 != (undefined *)0x0) {
    pcStack_58 = PTR_s_TextColor_04c4a048;
  }
  local_60 = puVar1;
  local_34 = iVar5;
  FUN_032c8270((float)iVar5,*(undefined8 *)(*(long *)(param_1 + 0x98) + 8),&local_60,0);
  pcStack_58 = puVar3;
  if (PTR_s_TextColor_04c4a048 != (undefined *)0x0) {
    pcStack_58 = PTR_s_TextColor_04c4a048;
  }
  local_60 = puVar1;
  local_34 = iVar5;
  FUN_032c8270((float)iVar5,*(undefined8 *)(*(long *)(param_1 + 0xa0) + 8),&local_60,0);
  pcStack_58 = "Color";
  local_60 = puVar1;
  FUN_032c8270((float)iStack_64,*(undefined8 *)(param_1 + 0x50),&local_60,0);
  FUN_032c8150((float)iStack_68,*(undefined8 *)(param_1 + 0x60),0,0);
  FUN_032c8150((float)local_6c,*(undefined8 *)(param_1 + 0x68),1,1);
  *(undefined4 *)(param_1 + 0xe0) = local_a4;
  lVar7 = *(long *)(param_1 + 0x108);
  lVar12 = *(long *)(param_2 + 0x1d0);
  if (lVar12 == 0) {
    if (*(long *)(lVar7 + 0xd8) != 0) {
      FUN_0037d044(*(undefined8 *)(lVar7 + 0x18),lVar7);
      *(undefined8 *)(lVar7 + 0xd8) = 0;
    }
    FUN_032a4dc0(*(undefined4 *)(*(long *)PTR_DAT_04bc8ed0 + 0xe4),0,lVar7,0xff);
  }
  else {
    if (*(long *)(lVar7 + 0xd8) != 0) {
      FUN_0037d044(*(undefined8 *)(lVar7 + 0x18),lVar7);
    }
    *(long *)(lVar7 + 0xd8) = lVar12;
    FUN_0037cfe0(lVar12,lVar7);
  }
  lVar7 = *(long *)(*(long *)(param_1 + 0x108) + 0xd8);
  if (lVar7 != 0) {
    fVar13 = *(float *)(lVar7 + 0x30);
    if (*(long *)(lVar7 + 0x18) == 0) {
      fVar14 = 0.0;
    }
    else {
      fVar14 = 0.0;
      lVar12 = lVar7;
      lVar10 = *(long *)(lVar7 + 0x18);
      do {
        bVar2 = *(byte *)(lVar12 + 0x5b) >> 4 & 3;
        if (bVar2 == 1) {
          fVar15 = *(float *)(lVar10 + 0x48) * *(float *)(lVar10 + 0x50) * -0.5;
LAB_032a7610:
          fVar13 = fVar13 + fVar15;
        }
        else if (bVar2 == 2) {
          fVar15 = *(float *)(lVar10 + 0x48) * *(float *)(lVar10 + 0x50) * 0.5;
          goto LAB_032a7610;
        }
        fVar14 = fVar14 + fVar13;
        fVar13 = *(float *)(lVar10 + 0x30);
        plVar8 = (long *)(lVar10 + 0x18);
        lVar12 = lVar10;
        lVar10 = *plVar8;
      } while (*plVar8 != 0);
    }
    FUN_032a4dc0(*(undefined4 *)(lVar7 + 0x50),fVar14 + fVar13,*(long *)(param_1 + 0x108),
                 *(undefined1 *)(lVar7 + 0x5a));
  }
  FUN_032d1820(*(undefined8 *)(param_1 + 0x20),*(undefined4 *)(param_2 + 0x1d8));
  puVar1 = PTR_DAT_04bc9298;
  *(undefined4 *)(*(long *)(param_1 + 0x20) + 0x104) = *(undefined4 *)(param_2 + 0x1dc);
  plVar8 = *(long **)(*(long *)(*(long *)puVar1 + 0x210) + 8);
  local_60 = (undefined *)
             CONCAT44(local_60._4_4_,*(undefined4 *)(*(long *)(*(long *)puVar1 + 0x210) + 0x60));
  if (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x20))(plVar8,&local_60);
  }
  iVar5 = *(int *)(param_1 + 0xa8);
  if ((((iVar5 == 3) || (iVar5 == 0)) && ((param_3 & 1) == 0)) && (1 < iVar5 - 1U)) {
    local_90 = &PTR_LAB_04b19af8;
    local_80 = FUN_032a6710;
    uStack_78 = 0;
    local_98 = &local_90;
    local_a0 = &PTR_LAB_04b177d8;
    lStack_88 = param_1;
    FUN_032c7c30(*(undefined8 *)(param_1 + 0x40),0,0,&local_a0,0,0);
    if (local_98 != (undefined ***)0x0) {
      (*(code *)(*local_98)[1])();
    }
    uVar4 = 2;
LAB_032a7730:
    *(undefined4 *)(param_1 + 0xa8) = uVar4;
  }
  return;
}

