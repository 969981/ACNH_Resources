
undefined8 FUN_01242280(undefined4 *param_1,undefined1 *param_2)

{
  long lVar1;
  undefined *puVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  ushort *puVar7;
  undefined *puVar8;
  ushort uVar9;
  uint *puVar10;
  ulong uVar11;
  int *piVar12;
  uint *puVar13;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined8 local_80;
  undefined1 auStack_78 [8];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  ulong local_48;
  
  lVar1 = DAT_05150358;
  if (((DAT_05150358 != 0) && (*(long *)(DAT_05150358 + 0xb0) != 0)) &&
     (*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) != 0)) {
    uVar4 = FUN_0277d6c4();
    puVar2 = PTR_DAT_04bbbc78;
    puVar8 = PTR_DAT_04bbbc70;
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar1 + 0x1f8);
    if (((uVar4 < *(uint *)(lVar1 + 0x1d8)) &&
        (puVar13 = *(uint **)(*(long *)(lVar1 + 0x1e0) + (long)(int)uVar4 * 8),
        puVar13 != (uint *)0x0)) && (*puVar13 != 0)) {
      cVar3 = *PTR_DAT_04bbbc70;
      do {
        if (cVar3 == '\0') {
          cVar3 = '\x01';
          *(undefined8 *)puVar2 = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
          *puVar8 = 1;
          *(undefined4 *)(puVar2 + 0x60) = 0xffffffff;
          *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x58) = 0xffffffffffffffff;
        }
        else {
          uVar4 = *(uint *)(puVar2 + 0x28);
          if (-1 < (int)uVar4) {
            if ((short *)((ulong)uVar4 + (long)puVar13) == (short *)0x0) {
              return 0;
            }
            if (*(short *)((ulong)uVar4 + (long)puVar13) == -2) {
              return 0;
            }
            FUN_0124c030(auStack_78,param_1);
            if (param_2 == (undefined1 *)0x0) goto LAB_012425d0;
            *param_2 = 0;
            if (*puVar13 == 0) goto LAB_01242504;
            cVar3 = *puVar8;
            goto LAB_01242444;
          }
          if (uVar4 != 0xffffffff) {
            return 0;
          }
        }
        puVar10 = (uint *)(ulong)*puVar13;
        if (*puVar13 == 0) {
          return 0;
        }
        if (puVar13 == puVar10) {
          return 0;
        }
        lVar1 = 0xc;
        if (*(char *)((long)puVar13 + (10 - (long)puVar10)) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar13 + (lVar1 - (long)puVar10);
        if (lVar1 == 0) {
          return 0;
        }
        uVar11 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar10));
        *(undefined4 *)(puVar2 + 0x28) = 0xfffffffe;
        if (uVar11 == 0) {
          return 0;
        }
        piVar12 = (int *)(lVar1 + 4);
        while (piVar12[-1] != 0x6b7b63b2) {
          piVar12 = piVar12 + 2;
          uVar11 = uVar11 - 1;
          if (uVar11 == 0) {
            return 0;
          }
        }
        iVar5 = 0;
        if (*piVar12 != -1) {
          iVar5 = *piVar12;
        }
        *(int *)(puVar2 + 0x28) = iVar5;
        if (*puVar13 == 0) {
          return 0;
        }
      } while( true );
    }
  }
  return 0;
LAB_01242444:
  if (cVar3 == '\0') {
    cVar3 = '\x01';
    *(undefined8 *)puVar2 = 0xffffffffffffffff;
    *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
    *puVar8 = 1;
    *(undefined4 *)(puVar2 + 0x60) = 0xffffffff;
    *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
    *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
    *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
    *(undefined8 *)(puVar2 + 0x30) = 0xffffffffffffffff;
    *(undefined8 *)(puVar2 + 0x38) = 0xffffffffffffffff;
    *(undefined8 *)(puVar2 + 0x40) = 0xffffffffffffffff;
    *(undefined8 *)(puVar2 + 0x48) = 0xffffffffffffffff;
    *(undefined8 *)(puVar2 + 0x50) = 0xffffffffffffffff;
    *(undefined8 *)(puVar2 + 0x58) = 0xffffffffffffffff;
LAB_01242480:
    puVar10 = (uint *)(ulong)*puVar13;
    uVar9 = 0xfffe;
    if ((*puVar13 == 0) || (puVar13 == puVar10)) goto LAB_01242508;
    lVar1 = 0xc;
    if (*(char *)((long)puVar13 + (10 - (long)puVar10)) != '\0') {
      lVar1 = 0x1c;
    }
    lVar1 = (long)puVar13 + (lVar1 - (long)puVar10);
    if (lVar1 == 0) goto LAB_01242504;
    uVar11 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar10));
    *(undefined4 *)(puVar2 + 0x28) = 0xfffffffe;
    if (uVar11 == 0) goto LAB_01242504;
    piVar12 = (int *)(lVar1 + 4);
    while (piVar12[-1] != 0x6b7b63b2) {
      piVar12 = piVar12 + 2;
      uVar11 = uVar11 - 1;
      if (uVar11 == 0) goto LAB_01242504;
    }
    iVar5 = 0;
    if (*piVar12 != -1) {
      iVar5 = *piVar12;
    }
    *(int *)(puVar2 + 0x28) = iVar5;
    if (*puVar13 == 0) goto LAB_01242504;
    goto LAB_01242444;
  }
  uVar4 = *(uint *)(puVar2 + 0x28);
  if ((int)uVar4 < 0) {
    if (uVar4 != 0xffffffff) goto LAB_01242504;
    goto LAB_01242480;
  }
  if ((ushort *)((ulong)uVar4 + (long)puVar13) != (ushort *)0x0) {
    uVar9 = *(ushort *)((ulong)uVar4 + (long)puVar13);
    goto LAB_01242508;
  }
LAB_01242504:
  uVar9 = 0xfffe;
LAB_01242508:
  local_48 = (ulong)uVar9;
  FUN_0277d4ac(&local_48);
  lVar1 = DAT_05150358;
  if (((((DAT_05150358 != 0) && (*(long *)(DAT_05150358 + 0xb0) != 0)) &&
       (*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) != 0)) &&
      ((*(long *)(DAT_05150358 + 0x488) != 0 &&
       (*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) != 0)))) &&
     ((*(long *)(DAT_05150358 + 0x2b0) != 0 && (*(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) != 0)
      ))) {
    uVar4 = FUN_0277d6c4(&local_48);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar1 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar1 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar1 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      FUN_0124c030(&local_90,&local_48);
      uVar11 = FUN_0123d890(local_80,4);
      if ((((uVar11 & 1) != 0) && (cVar3 = FUN_0124dff0(&local_90), cVar3 == '\x04')) ||
         (uVar11 = FUN_0124d940(&local_90,1,0,0), (uVar11 & 1) == 0)) {
        *param_2 = 1;
      }
    }
  }
LAB_012425d0:
  iVar5 = FUN_0123db50(&local_70,local_68);
  if (((iVar5 - 0x12U < 6) && (cVar3 = FUN_0124dff0(auStack_78), cVar3 == '\x03')) &&
     (iVar5 = FUN_0124ffb0(auStack_78), iVar5 < 3)) {
    FUN_0124fff0(auStack_78,iVar5 + 1);
    local_90._0_4_ = local_70;
    local_90._4_4_ = uStack_6c;
    goto LAB_01242790;
  }
  iVar5 = FUN_0123db50(&local_70,local_68);
  if (iVar5 - 0x18U < 7) {
    cVar3 = FUN_0124dff0(auStack_78);
    if (cVar3 == '\x03') {
      FUN_012501bc();
      FUN_01202740(&local_90);
LAB_0124264c:
      goto LAB_01242790;
    }
    cVar3 = FUN_0124dff0(auStack_78);
    if (cVar3 != '\x02') goto LAB_012426a4;
    local_98 = *param_1;
    uStack_94 = param_1[1];
    uVar4 = FUN_012021b0(&local_98);
    uVar4 = ((uVar4 & 0xff) + 1) % 3;
    FUN_01202740(&local_48,6);
LAB_01242760:
    FUN_0124c030(&local_90,&local_48);
    FUN_012502a4(&local_90,uVar4);
  }
  else {
LAB_012426a4:
    iVar5 = FUN_0277d6c4(param_1);
    if (iVar5 == 0xea9f) {
      uVar4 = FUN_012501bc(auStack_78);
      local_90 = (ulong)(ushort)*(undefined4 *)(&DAT_04101660 + (ulong)uVar4 * 4);
      FUN_0277d4ac(&local_90);
      *param_1 = (uint)local_90;
      param_1[1] = local_90._4_4_;
      if (uVar4 == 1) {
        FUN_0124c030(&local_90,param_1);
        *param_1 = local_88;
        param_1[1] = uStack_84 & 0xffff001f | 0x20085f;
        return 1;
      }
      return 1;
    }
    iVar5 = FUN_0277d6c4(param_1);
    if (iVar5 == 60000) {
      uVar4 = 0;
LAB_01242750:
      local_48 = 0xea9f;
LAB_01242758:
      FUN_0277d4ac(&local_48);
      goto LAB_01242760;
    }
    iVar5 = FUN_0277d6c4(param_1);
    if (iVar5 == 0xec9c) {
      uVar4 = 1;
      goto LAB_01242750;
    }
    iVar5 = FUN_0277d6c4(param_1);
    if (((iVar5 != 0xec9f) && (iVar5 = FUN_0277d6c4(param_1), iVar5 != 0xeca0)) &&
       ((iVar5 = FUN_0277d6c4(param_1), iVar5 != 0xec9e &&
        (iVar5 = FUN_0277d6c4(param_1), iVar5 != 0xec9d)))) {
      iVar5 = FUN_0277d6c4(param_1);
      if (iVar5 == 0xecbf) {
        uVar11 = FUN_012501bc(auStack_78);
        puVar8 = &DAT_041748e8;
LAB_01242834:
        local_90._0_4_ = *(uint *)(puVar8 + (uVar11 & 0xffffffff) * 4);
LAB_01242838:
        local_90._0_4_ = (uint)local_90 & 0xffff;
        local_90 = (ulong)(uint)local_90;
LAB_01242844:
        FUN_0277d4ac(&local_90);
        goto LAB_0124264c;
      }
      iVar5 = FUN_0277d6c4(param_1);
      if (iVar5 == 0xea61) {
        uVar4 = 0;
        local_48 = 0xecbf;
      }
      else {
        iVar5 = FUN_0277d6c4(param_1);
        if (iVar5 == 0xea62) {
          uVar4 = 1;
          local_48 = 0xecbf;
        }
        else {
          iVar5 = FUN_0277d6c4(param_1);
          if (iVar5 == 0xeac8) {
            uVar4 = 2;
            local_48 = 0xecbf;
          }
          else {
            iVar5 = FUN_0277d6c4(param_1);
            if (iVar5 == 0xeaca) {
              uVar4 = 3;
              local_48 = 0xecbf;
            }
            else {
              iVar5 = FUN_0277d6c4(param_1);
              if (iVar5 == 0xeac9) {
                uVar4 = 4;
                local_48 = 0xecbf;
              }
              else {
                iVar5 = FUN_0277d6c4(param_1);
                if (iVar5 == 0xeab8) {
                  uVar11 = FUN_012501bc(auStack_78);
                  puVar8 = &DAT_041748fc;
                  goto LAB_01242834;
                }
                iVar5 = FUN_0277d6c4(param_1);
                if (iVar5 == 0xea69) {
                  uVar4 = 0;
                  local_48 = 0xeab4;
                }
                else {
                  iVar5 = FUN_0277d6c4(param_1);
                  if (iVar5 == 0xec9a) {
                    uVar4 = 1;
                    local_48 = 0xeab4;
                  }
                  else {
                    iVar5 = FUN_0277d6c4(param_1);
                    if (iVar5 == 0xec97) {
                      uVar4 = 2;
                      local_48 = 0xeab4;
                    }
                    else {
                      iVar5 = FUN_0277d6c4(param_1);
                      if (((iVar5 != 0xeab4) && (iVar5 = FUN_0277d6c4(param_1), iVar5 != 0xeab5)) &&
                         ((iVar5 = FUN_0277d6c4(param_1), iVar5 != 0xeab7 &&
                          ((iVar5 = FUN_0277d6c4(param_1), iVar5 != 0xeab6 &&
                           (iVar5 = FUN_0277d6c4(param_1), iVar5 != 0xeab8)))))) {
                        iVar5 = FUN_0123db50(&local_70,local_68);
                        if (iVar5 == 0x21) {
                          uVar6 = FUN_0124fd04(auStack_78);
                          puVar7 = (ushort *)FUN_01246470(puVar13,10,0x6b7b63b2,0);
                          if (puVar7 == (ushort *)0x0) {
                            uVar9 = 0xfffe;
                          }
                          else {
                            uVar9 = *puVar7;
                          }
                          local_90 = (ulong)uVar9;
                          FUN_0277d4ac(&local_90);
                          *param_1 = (uint)local_90;
                          param_1[1] = local_90._4_4_;
                          FUN_0124c030(&local_90,param_1);
                          FUN_0124c44c(&local_90,uVar6);
                          goto LAB_01242778;
                        }
                        iVar5 = FUN_0277d6c4(param_1);
                        if (iVar5 == 0xeac2) {
                          puVar7 = (ushort *)FUN_01246470(puVar13,10,0x6b7b63b2,0);
                          if (puVar7 == (ushort *)0x0) {
                            uVar9 = 0xfffe;
                          }
                          else {
                            uVar9 = *puVar7;
                          }
                          local_90 = (ulong)uVar9;
                          FUN_0277d4ac(&local_90);
                          *param_1 = (uint)local_90;
                          param_1[1] = local_90._4_4_;
                          FUN_0124c030(&local_90,param_1);
                          FUN_0124e4d0(&local_90);
                          *param_1 = local_88;
                          param_1[1] = uStack_84;
                          if (param_2 == (undefined1 *)0x0) {
                            return 1;
                          }
                          *param_2 = 0;
                          return 1;
                        }
                        iVar5 = FUN_0277d6c4(param_1);
                        if ((iVar5 != 0xea77) ||
                           (((uStack_6c._2_1_ & 0x18) == 0 &&
                            (uVar11 = FUN_0123b5b0(local_68), (uVar11 & 1) != 0)))) {
                          puVar7 = (ushort *)FUN_01246470(puVar13,10,0x6b7b63b2,0);
                          if (puVar7 == (ushort *)0x0) {
                            local_90._0_4_ = 0xfffe;
                          }
                          else {
                            local_90._0_4_ = (uint)*puVar7;
                          }
                          goto LAB_01242838;
                        }
                        local_90 = 0xea77;
                        goto LAB_01242844;
                      }
                      uVar4 = FUN_012501bc(auStack_78);
                      puVar7 = (ushort *)FUN_01246470(puVar13,10,0x6b7b63b2,0);
                      if (puVar7 == (ushort *)0x0) {
                        uVar9 = 0xfffe;
                      }
                      else {
                        uVar9 = *puVar7;
                      }
                      local_48 = (ulong)uVar9;
                    }
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_01242758;
    }
    FUN_0124c030(&local_90,param_1);
    FUN_0124d940(&local_90,1,0,0);
  }
LAB_01242778:
  local_90._0_4_ = local_88;
  local_90._4_4_ = uStack_84;
LAB_01242790:
  *param_1 = (uint)local_90;
  param_1[1] = local_90._4_4_;
  return 1;
}

