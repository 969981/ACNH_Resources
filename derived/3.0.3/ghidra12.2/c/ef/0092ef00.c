
void FUN_0092ef00(undefined **param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined *local_78;
  undefined *local_70;
  long local_68;
  short local_60 [4];
  undefined *local_58;
  undefined8 local_50;
  undefined *local_48;
  undefined4 local_40;
  undefined4 local_3c;
  byte local_38;
  
  puVar2 = PTR_DAT_04bb2720;
  lVar7 = *(long *)PTR_DAT_04bb2720;
  if (lVar7 == 0) {
    puVar10 = &DAT_055c04a0;
  }
  else {
    puVar10 = &DAT_055c04a0;
    if (*(long *)(lVar7 + 0x330) != 0) {
      puVar10 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar7 + 0x338));
      iVar3 = FUN_006bd550(*puVar10,0);
      puVar10 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar3 != 0x758f7eaf) {
        puVar10 = &DAT_055c04a0;
      }
    }
  }
  uVar8 = 0;
  do {
    uVar4 = (uint)uVar8;
    piVar1 = (int *)((long)(PTR_DAT_04bbbf90 + 8) + uVar8 * 4);
    if (0x38 < uVar4) {
      piVar1 = (int *)(PTR_DAT_04bbbf90 + 8);
    }
    if (*piVar1 == *(int *)(puVar10 + 7)) {
      if (uVar4 == 0x32) {
        lVar7 = *(long *)puVar2;
        local_40 = 0;
        if (lVar7 == 0) {
          puVar10 = &DAT_055c04a0;
        }
        else {
          puVar10 = &DAT_055c04a0;
          if (*(long *)(lVar7 + 0x330) != 0) {
            puVar10 = (undefined8 *)
                      (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar7 + 0x338));
            iVar3 = FUN_006bd550(*puVar10,0);
            puVar10 = (undefined8 *)PTR_DAT_04bc3a80;
            if (iVar3 != 0x758f7eaf) {
              puVar10 = &DAT_055c04a0;
            }
          }
        }
        local_3c = *(undefined4 *)(puVar10 + 7);
        local_38 = FUN_017baf44();
        puVar2 = PTR_DAT_04bb2010;
        local_38 = local_38 & 1;
        local_48 = PTR_DAT_04bb3140 + 0x10;
        local_58 = PTR_DAT_04bb2010 + 0x10;
        local_50 = 0;
        FUN_01a5033c(local_60,&local_48,*param_2,param_1,&local_58);
        if (local_60[0] == -2) {
          return;
        }
        uVar8 = FUN_0277e294(local_60);
        if ((uVar8 & 1) != 0) {
          FUN_01513b9c(param_1,*param_2,1);
          puVar2 = PTR_DAT_04bb43c0;
          local_68 = 0;
          local_78 = PTR_DAT_04bc0510 + 0x10;
          lVar7 = *(long *)PTR_DAT_04bb43c0;
          uVar4 = FUN_0277d6c4(&local_70);
          if (*(long *)puVar2 != 0) {
            lVar7 = *(long *)(lVar7 + 0x57e58);
            uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
            if ((uVar4 < *(uint *)(lVar7 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
              lVar7 = *(long *)PTR_DAT_04bc0428;
              uVar4 = FUN_0277d6c4(local_60);
              uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
              if (uVar4 < *(uint *)(lVar7 + 0x1d8)) {
                lVar7 = *(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8);
                if (lVar7 != 0) {
                  local_68 = lVar7;
                }
              }
            }
          }
          uVar8 = FUN_01b0140c(&local_78);
          if ((uVar8 & 1) == 0) {
            return;
          }
          FUN_014b470c(*(long *)PTR_DAT_04bb4c80 + 0x2868,param_1);
          return;
        }
        lVar7 = *(long *)PTR_DAT_04bbbc68;
        if (((((lVar7 == 0) || (*(long *)(lVar7 + 0xb0) == 0)) ||
             (*(long *)(*(long *)(lVar7 + 0xb0) + 8) == 0)) ||
            ((*(long *)(lVar7 + 0x488) == 0 || (*(long *)(*(long *)(lVar7 + 0x488) + 8) == 0)))) ||
           ((*(long *)(lVar7 + 0x2b0) == 0 || (*(long *)(*(long *)(lVar7 + 0x2b0) + 8) == 0)))) {
LAB_0092f398:
          FUN_01a50cb0(&local_48,*param_2,&local_58);
        }
        else {
          uVar4 = FUN_0277d6c4(local_60);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
          if ((*(uint *)(lVar7 + 0x1d8) <= uVar4) ||
             (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_0092f398;
          FUN_0124c030(&local_78,local_60);
          iVar3 = FUN_0123db50(&local_70,local_68);
          if ((*(long *)PTR_DAT_04bb3728 == 0) || (*(int *)(*(long *)PTR_DAT_04bb3728 + 0xb0) != 1))
          {
            local_70 = puVar2 + 0x10;
            local_68 = local_50;
            FUN_011eeb10(*(undefined8 *)PTR_DAT_04bb4780,&local_78);
          }
          FUN_01a50cb0(&local_48,*param_2,&local_58);
          if (iVar3 == 0x2d) {
            uVar5 = *(undefined8 *)PTR_DAT_04bb4778;
            goto LAB_0092f140;
          }
        }
        uVar5 = *(undefined8 *)PTR_DAT_04bb4778;
        goto LAB_0092f3b4;
      }
      break;
    }
    uVar9 = 0x39;
    if ((int)uVar4 < 0x39) {
      uVar9 = uVar4 + 1;
    }
    uVar8 = (ulong)uVar9;
  } while (uVar9 != 0x39);
  local_3c = *(undefined4 *)(PTR_DAT_04bbbf90 + 0xd0);
  local_40 = 0x32;
  local_38 = FUN_017baf44();
  local_38 = local_38 & 1;
  local_48 = PTR_DAT_04bb5438 + 0x10;
  local_58 = PTR_DAT_04bb2010 + 0x10;
  local_50 = 0;
  FUN_01a5033c(local_60,&local_48,*param_2,param_1,&local_58);
  if (local_60[0] != -2) {
    FUN_01a50cb0(&local_48,*param_2,&local_58);
    lVar7 = *(long *)PTR_DAT_04bbbc68;
    if ((((lVar7 != 0) && (*(long *)(lVar7 + 0xb0) != 0)) &&
        (*(long *)(*(long *)(lVar7 + 0xb0) + 8) != 0)) &&
       (((*(long *)(lVar7 + 0x488) != 0 && (*(long *)(*(long *)(lVar7 + 0x488) + 8) != 0)) &&
        ((*(long *)(lVar7 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar7 + 0x2b0) + 8) != 0)))))) {
      uVar4 = FUN_0277d6c4(local_60);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar7 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
        FUN_0124c030(&local_78,local_60);
        iVar3 = FUN_0123db50(&local_70,local_68);
        uVar5 = *(undefined8 *)PTR_DAT_04bb4778;
        if (iVar3 == 0x2d) {
LAB_0092f140:
          param_1 = &local_58;
          uVar6 = 2;
        }
        else {
LAB_0092f3b4:
          uVar6 = 6;
        }
        FUN_01225ba0(uVar5,param_1,uVar6);
      }
    }
  }
  return;
}

