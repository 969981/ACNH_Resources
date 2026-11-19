
void FUN_0387b7d0(uint *param_1,long *param_2)

{
  MutexType *pMVar1;
  MutexType *pMVar2;
  bool bVar3;
  long *plVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 uVar9;
  uint uVar10;
  int iVar11;
  undefined8 *puVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined **ppuVar16;
  undefined ***pppuVar17;
  undefined4 uVar18;
  long lVar19;
  code *pcVar20;
  bool bVar21;
  long lVar22;
  long *plVar23;
  long lVar24;
  undefined **ppuVar25;
  undefined **local_f8;
  undefined **local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined2 local_d8;
  undefined *local_d0;
  undefined2 *puStack_c8;
  undefined4 local_c0;
  undefined2 local_bc [20];
  undefined2 local_94;
  undefined **local_90;
  undefined1 local_88;
  char cStack_87;
  undefined6 uStack_86;
  undefined *local_80;
  undefined ***pppuStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar7 = PTR_DAT_04bcb7d8;
  lVar19 = *(long *)PTR_DAT_04bcb7d8;
  if (*param_1 == 10) {
    lVar19 = *(long *)(lVar19 + 0x30);
    if (*(char *)(lVar19 + 0x80) == '\0') {
      *(undefined1 *)(lVar19 + 0x80) = 1;
      *(undefined8 *)(lVar19 + 0x84) = 9;
      return;
    }
    return;
  }
  lVar24 = *(long *)(lVar19 + 8) + 0x210;
  lVar22 = *(long *)(*(long *)(lVar19 + 8) + 0x218);
  if (lVar22 != lVar24) {
    do {
      lVar19 = *(long *)(lVar22 + 8);
      puVar12 = (undefined8 *)(*(long *)(lVar22 + 0x10) + 0x40);
      (**(code **)*puVar12)(puVar12,param_1,param_2);
      lVar22 = lVar19;
    } while (lVar19 != lVar24);
    lVar19 = *(long *)puVar7;
  }
  puVar6 = PTR_DAT_04bc1510;
  plVar23 = *(long **)(lVar19 + 0x60);
  plVar4 = *(long **)(lVar19 + 0x68);
  local_88 = 0;
  cStack_87 = '\0';
  local_90 = (undefined **)*param_2;
  plVar13 = (long *)FUN_002ba790(*(undefined8 *)PTR_DAT_04bc1510);
  lVar19 = (**(code **)(*plVar13 + 0x38))(plVar13,*param_2);
  if (lVar19 == 0) {
LAB_0387b8b8:
    bVar5 = false;
    uVar10 = 1;
  }
  else {
    FUN_00273ce4(&local_70,lVar19,&local_f8);
    if ((int)local_70 != 0) goto LAB_0387b8b8;
    local_80 = PTR_DAT_04bb2020 + 0x10;
    pppuStack_78 = &local_f8;
    uVar10 = FUN_03877cd0(&local_80);
    bVar5 = true;
  }
  if ((*param_1 < 2) &&
     (((uVar10 & 0xff00) != 0 ||
      (lVar24 = *param_2, lVar19 = (**(code **)(**(long **)(*(long *)puVar7 + 0x68) + 0x230))(),
      lVar24 == lVar19)))) {
    bVar21 = true;
    local_88 = 0;
    cStack_87 = '\0';
    local_90 = (undefined **)0xf;
  }
  else {
    bVar21 = false;
  }
  pMVar1 = (MutexType *)(plVar4 + 0xd);
  nn::os::LockMutex(pMVar1);
  uVar14 = (**(code **)(*plVar4 + 200))(plVar4);
  if ((uVar14 & 1) == 0) {
    uVar14 = (**(code **)(*plVar4 + 0x100))(plVar4,&local_90);
    if ((uVar14 & 1) != 0) {
      uVar9 = (**(code **)(*plVar4 + 0x108))(plVar4,&local_90);
      local_f8 = (undefined **)CONCAT71(local_f8._1_7_,uVar9);
      pppuVar17 = &local_f8;
      pcVar20 = *(code **)(*plVar4 + 0x90);
      goto LAB_0387b998;
    }
  }
  else {
    pcVar20 = *(code **)(*plVar4 + 0x98);
    pppuVar17 = &local_90;
LAB_0387b998:
    uVar14 = (*pcVar20)(plVar4,pppuVar17);
    if ((uVar14 & 1) != 0) {
      cStack_87 = cStack_87 == '\0';
    }
  }
  nn::os::UnlockMutex(pMVar1);
  puVar8 = PTR_DAT_04bcb8b8;
  switch(*param_1) {
  case 0:
    lVar19 = FUN_002ba790(*(undefined8 *)puVar6);
    if ((uVar10 & 0xff00) != 0) {
      lVar24 = (**(code **)(*plVar23 + 0x78))(plVar23);
      lVar19 = *(long *)(*(long *)(lVar19 + 0x98) + 0x40);
      if ((lVar24 == lVar19) && (lVar19 == *param_2)) {
        lVar19 = *(long *)puVar7;
        lVar24 = *(long *)(lVar19 + 0x30);
        if (*(char *)(lVar24 + 0x80) == '\0') {
          *(undefined1 *)(lVar24 + 0x80) = 1;
          *(undefined8 *)(lVar24 + 0x84) = 9;
        }
        *(undefined1 *)(*(long *)(lVar19 + 0x60) + 0x10) = 1;
        return;
      }
    }
    if (bVar21) {
      (**(code **)(**(long **)(*(long *)puVar7 + 0x68) + 0x228))
                (*(long **)(*(long *)puVar7 + 0x68),param_2);
    }
    bVar21 = true;
    uVar18 = 1;
LAB_0387bda4:
    local_e0 = CONCAT44(0xffffffff,uVar18);
    local_e8 = CONCAT62(uStack_86,CONCAT11(cStack_87,local_88));
    local_d8 = 0;
    local_94 = 0;
    local_bc[0] = 0;
    local_c0 = 0x15;
    local_f8 = &PTR_LAB_04b60590;
    local_f0 = local_90;
    puStack_c8 = local_bc;
    local_d0 = PTR_DAT_04bc13e0 + 0x10;
    if (bVar21) {
      if (bVar5) {
        uVar15 = *(undefined8 *)(*(long *)puVar7 + 0x68);
        if ((uVar10 & 0xff00) != 0) goto LAB_0387bfe0;
        uVar10 = uVar10 & 0xff;
      }
      else {
        uVar15 = *(undefined8 *)(*(long *)puVar7 + 0x68);
        if ((uVar10 & 0xff00) != 0) {
LAB_0387bfe0:
          FUN_03889440(uVar15,&local_f8);
          return;
        }
        uVar10 = 1;
      }
    }
    else {
      uVar10 = uVar10 & 0xff;
      if (!bVar5) {
        uVar10 = 1;
      }
      uVar15 = *(undefined8 *)(*(long *)puVar7 + 0x68);
    }
    uStack_68 = local_e8;
    if (plVar4[5] == 0) {
      if (*param_1 == 0) {
        local_70 = local_90;
        FUN_038779a0(&local_d0,&local_70);
        FUN_03889a40(uVar15,&local_f8);
        if (1 < uVar10) {
          uVar14 = 1;
          do {
            local_e0 = CONCAT44(local_e0._4_4_,5);
            local_e8 = CONCAT62(local_e8._2_6_,(ushort)uVar14 | (ushort)local_e8._1_1_ << 8);
            local_70 = local_f0;
            uStack_68 = local_e8;
            FUN_038779a0(&local_d0,&local_70);
            FUN_03889a40(uVar15,&local_f8);
            uVar14 = uVar14 + 1;
          } while (uVar10 != uVar14);
        }
      }
      else {
        FUN_03889a40(uVar15,&local_f8);
        if (1 < uVar10) {
          uVar14 = 1;
          do {
            local_e0 = CONCAT44(local_e0._4_4_,5);
            local_e8 = CONCAT62(local_e8._2_6_,(ushort)uVar14 | (ushort)local_e8._1_1_ << 8);
            FUN_03889a40(uVar15,&local_f8);
            uVar14 = uVar14 + 1;
          } while (uVar10 != uVar14);
        }
      }
    }
    else if (*param_1 == 0) {
      local_70 = local_90;
      FUN_038779a0(&local_d0,&local_70);
      FUN_03889280(uVar15,&local_f8);
      if (1 < uVar10) {
        uVar14 = 1;
        do {
          local_e0 = CONCAT44(local_e0._4_4_,5);
          local_e8 = CONCAT62(local_e8._2_6_,(ushort)uVar14 | (ushort)local_e8._1_1_ << 8);
          local_70 = local_f0;
          uStack_68 = local_e8;
          FUN_038779a0(&local_d0,&local_70);
          FUN_03889280(uVar15,&local_f8);
          uVar14 = uVar14 + 1;
        } while (uVar10 != uVar14);
      }
    }
    else {
      FUN_03889280(uVar15,&local_f8);
      if (1 < uVar10) {
        uVar14 = 1;
        do {
          local_e0 = CONCAT44(local_e0._4_4_,5);
          local_e8 = CONCAT62(local_e8._2_6_,(ushort)uVar14 | (ushort)local_e8._1_1_ << 8);
          FUN_03889280(uVar15,&local_f8);
          uVar14 = uVar14 + 1;
        } while (uVar10 != uVar14);
      }
    }
    break;
  case 1:
    ppuVar25 = (undefined **)*param_2;
    if ((undefined **)plVar4[2] != ppuVar25) {
      bVar3 = false;
      if (ppuVar25 == local_90) {
        bVar3 = bVar21;
      }
      if (!bVar3) {
        ppuVar16 = (undefined **)(**(code **)(*plVar23 + 0x78))(plVar23);
        if ((ppuVar25 == ppuVar16) || (*param_2 == plVar4[5])) {
          uVar14 = (**(code **)(**(long **)(*(long *)puVar7 + 0x98) + 0x58))();
          lVar19 = *(long *)puVar7;
          if ((uVar14 & 1) != 0) {
            *(undefined1 *)(*(long *)(lVar19 + 0x68) + 0x26d) = 1;
            FUN_038709d8(*(undefined8 *)(lVar19 + 0x60),param_2);
            return;
          }
          lVar19 = *(long *)(lVar19 + 0x30);
          if (*(char *)(lVar19 + 0x80) == '\0') {
            *(undefined1 *)(lVar19 + 0x80) = 1;
            *(undefined8 *)(lVar19 + 0x84) = 6;
            return;
          }
          return;
        }
        nn::os::LockMutex(pMVar1);
        uVar14 = (**(code **)(*plVar4 + 0x220))(plVar4,&local_90);
        if (((uVar14 & 1) == 0) &&
           (uVar14 = (**(code **)(*plVar4 + 0x100))(plVar4,&local_90), (uVar14 & 1) == 0)) {
          local_f0 = (undefined **)
                     (CONCAT62(uStack_86,CONCAT11(cStack_87,local_88)) & 0xffffffffffff00ff |
                     (ulong)(cStack_87 == '\0') << 8);
          local_f8 = local_90;
          uVar14 = (**(code **)(*plVar4 + 0x100))(plVar4,&local_f8);
          if ((uVar14 & 1) != 0) {
            cStack_87 = cStack_87 == '\0';
          }
        }
        nn::os::UnlockMutex(pMVar1);
        if (bVar21) {
          (**(code **)(**(long **)(*(long *)puVar7 + 0x68) + 0x228))
                    (*(long **)(*(long *)puVar7 + 0x68),&DAT_041993d0);
        }
        bVar21 = false;
        uVar18 = 3;
        goto LAB_0387bda4;
      }
    }
    lVar19 = *(long *)puVar7;
    if (*(char *)(*(long *)(lVar19 + 0x60) + 0x58) == '\0') {
      if (*(long *)PTR_DAT_04bcb8b8 == 0) {
        uVar18 = 9;
      }
      else {
        FUN_00223668(&local_f8,*(undefined8 *)PTR_DAT_04bcb8c0);
        if ((int)local_f8 == 0) {
          uVar18 = 9;
        }
        else {
          local_80 = (undefined *)((ulong)local_80 & 0xffffffff00000000);
          local_70 = (undefined **)CONCAT44(local_70._4_4_,0x8c78);
          nn::err::ErrorResultVariant::ErrorResultVariant
                    ((ErrorResultVariant *)((long)&local_70 + 4),(Result *)&local_80);
          uVar18 = 9;
          if ((int)local_f8 == (int)local_70) {
            lVar24 = *param_2;
            lVar19 = (**(code **)(*plVar23 + 0x78))(plVar23);
            uVar18 = 9;
            if (lVar24 != lVar19) {
              uVar18 = 6;
            }
          }
        }
        lVar19 = *(long *)puVar7;
      }
      lVar19 = *(long *)(lVar19 + 0x30);
      if (*(char *)(lVar19 + 0x80) == '\0') {
        *(undefined4 *)(lVar19 + 0x84) = uVar18;
        *(undefined4 *)(lVar19 + 0x88) = 0;
        *(undefined1 *)(lVar19 + 0x80) = 1;
      }
    }
    break;
  case 2:
    pMVar2 = (MutexType *)(*(long *)(*(long *)puVar7 + 0x60) + 0x38);
    nn::os::LockMutex(pMVar2);
    lVar19 = *(long *)puVar7;
    bVar21 = false;
    if ((uVar10 & 0xff00) != 0) {
      bVar21 = bVar5;
    }
    if (bVar21) {
      lVar19 = *(long *)(lVar19 + 0x30);
      if (*(char *)(lVar19 + 0x80) == '\0') {
        *(undefined1 *)(lVar19 + 0x80) = 1;
        *(undefined8 *)(lVar19 + 0x84) = 9;
      }
    }
    else {
      *(undefined1 *)(*(long *)(lVar19 + 0x68) + 0x26d) = 0;
      lVar19 = *(long *)(lVar19 + 0x60);
      uVar15 = (**(code **)(*plVar23 + 0x78))(plVar23);
      *(undefined8 *)(lVar19 + 8) = uVar15;
    }
    nn::os::LockMutex(pMVar1);
    uVar10 = *(uint *)(*(long *)(*(long *)puVar7 + 0x68) + 0xa0);
    uVar14 = (ulong)uVar10;
    if (0 < (int)uVar10) {
      plVar23 = *(long **)(*(long *)(*(long *)puVar7 + 0x68) + 0xa8);
      do {
        if (*(char *)*plVar23 == -2) {
          if (*plVar23 != 0) {
            *(undefined4 *)(*plVar23 + 4) = 0;
          }
          break;
        }
        plVar23 = plVar23 + 1;
        uVar14 = uVar14 - 1;
      } while (uVar14 != 0);
    }
    nn::os::UnlockMutex(pMVar1);
    nn::os::UnlockMutex(pMVar2);
    break;
  case 3:
    lVar19 = *(long *)(*(long *)puVar7 + 0x30);
    if (*(char *)(lVar19 + 0x80) == '\0') {
      *(undefined1 *)(lVar19 + 0x80) = 1;
      *(undefined8 *)(lVar19 + 0x84) = 0xf;
    }
    break;
  case 4:
    FUN_0389f100(*(undefined8 *)(*(long *)puVar7 + 0x68));
    local_e8 = CONCAT62(uStack_86,CONCAT11(cStack_87,local_88));
    lVar19 = *(long *)puVar7;
    local_e0 = 0xffffffffffff0008;
    goto LAB_0387bd18;
  case 5:
    lVar19 = *(long *)(*(long *)PTR_DAT_04bcb8b8 + 0xf8);
    local_70 = (undefined **)lVar19;
    FUN_00223668(&local_f8,*(undefined8 *)PTR_DAT_04bcb8c0);
    if ((int)local_f8 == 0) {
      iVar11 = FUN_0029b330(*(undefined8 *)puVar8);
      if (iVar11 == 3) {
        lVar19 = FUN_0029bf00(*(undefined8 *)puVar8);
        local_70 = (undefined **)lVar19;
      }
    }
    uVar15 = *(undefined8 *)(*(long *)puVar7 + 0x68);
    local_e0 = 0xffffffff00000009;
    local_f0 = (undefined **)lVar19;
    goto LAB_0387bcc8;
  case 6:
    local_e8 = CONCAT62(uStack_86,CONCAT11(cStack_87,local_88));
    lVar19 = *(long *)puVar7;
    local_e0 = 0xffffffffffff000a;
LAB_0387bd18:
    local_f8 = &PTR_LAB_04b60590;
    local_e0 = local_e0 & 0xffffffff0000ffff;
    puStack_c8 = local_bc;
    local_d8 = 0;
    local_c0 = 0x15;
    local_94 = 0;
    local_bc[0] = 0;
    local_d0 = PTR_DAT_04bc13e0 + 0x10;
    local_f0 = local_90;
    FUN_03889280(*(undefined8 *)(lVar19 + 0x68),&local_f8);
    break;
  case 7:
    local_e0 = 0xffffffff0000000b;
    local_70 = *(undefined ***)(*(long *)PTR_DAT_04bcb8b8 + 0xf8);
    uVar15 = *(undefined8 *)(*(long *)puVar7 + 0x68);
    local_f0 = local_70;
LAB_0387bcc8:
    ppuVar25 = local_f0;
    local_94 = 0;
    local_bc[0] = 0;
    local_c0 = 0x15;
    local_d8 = 0;
    local_e8 = local_e8 & 0xffffffffffff0000;
    local_f8 = &PTR_LAB_04b60590;
    local_d0 = PTR_DAT_04bc13e0 + 0x10;
    puStack_c8 = local_bc;
    FUN_03889280(uVar15,&local_f8);
    if ((undefined **)*(long *)(*(long *)(*(long *)puVar7 + 0x68) + 0x28) != ppuVar25) {
      local_80 = (undefined *)CONCAT44(local_80._4_4_,2);
      FUN_0387b7d0(&local_80,&local_70);
    }
    break;
  case 8:
    lVar19 = *(long *)(*(long *)puVar7 + 0x30);
    if (*(char *)(lVar19 + 0x80) == '\0') {
      *(undefined1 *)(lVar19 + 0x80) = 1;
      *(undefined8 *)(lVar19 + 0x84) = 0x10;
    }
    break;
  case 9:
    lVar19 = *(long *)PTR_DAT_04bcb8b8;
    uVar14 = FUN_0029b264(lVar19);
    if ((lVar19 != 0) && ((uVar14 & 1) != 0)) {
      FUN_0029cb54(&local_f8,*(undefined8 *)puVar8,*param_2);
    }
  }
  return;
}

