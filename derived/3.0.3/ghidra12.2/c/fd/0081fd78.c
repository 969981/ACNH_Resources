
/* WARNING: Removing unreachable block (ram,0x0081ff30) */
/* WARNING: Removing unreachable block (ram,0x00820328) */
/* WARNING: Type propagation algorithm not settling */

void FUN_0081fd78(long param_1)

{
  byte *pbVar1;
  long *plVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long local_b0;
  ulong local_a8;
  undefined1 *local_a0;
  undefined1 *local_80;
  undefined8 local_60;
  byte local_54 [4];
  byte local_38 [4];
  byte local_34 [4];
  
  if (DAT_05aed670 == 0) {
    return;
  }
  if (*(long *)(DAT_05aed670 + 0x330) != 0) {
    puVar6 = (undefined8 *)
             (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338))
    ;
    iVar4 = FUN_006bd550(*puVar6,0);
    plVar2 = DAT_05aed668;
    if (iVar4 == 0x758f7eaf && *(int *)(PTR_DAT_04bc3a80 + 0x38) == 0x41f3ce7) {
      if ((DAT_04da4ab8 != 0) && ((*(byte *)(DAT_04da4ab8 + 0x780) & 1) != 0)) {
        lVar11 = *(long *)PTR_DAT_04bb4848;
        *(undefined8 *)(lVar11 + 0x24) = 0x900000000;
        *(undefined8 *)(lVar11 + 0x10) = 0;
        *(undefined4 *)(lVar11 + 0x18) = 0;
        *(undefined4 *)(lVar11 + 0x2c) = 0;
        *(undefined8 *)(lVar11 + 0xe8) = 0;
        *(undefined4 *)(lVar11 + 0xf0) = 0;
        *(undefined4 *)(lVar11 + 0x104) = 0;
        *(undefined8 *)(lVar11 + 0xfc) = 0x900000001;
        return;
      }
      iVar4 = *(int *)(DAT_05aed670 + 0x340);
      if (iVar4 != -1) {
        (**(code **)(*DAT_05aed668 + 0x10))(DAT_05aed668);
        puVar6 = (undefined8 *)(**(code **)(*plVar2 + 0x18))(plVar2,iVar4);
        iVar4 = FUN_006bd550(*puVar6,0);
        plVar2 = DAT_05aed668;
        puVar3 = PTR_DAT_04bc3a78;
        if ((iVar4 == 0x758f7eaf) && (*(int *)(PTR_DAT_04bc3a78 + 0x38) == -0x2f1ac06c)) {
          return;
        }
        iVar4 = *(int *)(DAT_05aed670 + 0x340);
        if (iVar4 != -1) {
          (**(code **)(*DAT_05aed668 + 0x10))(DAT_05aed668);
          puVar6 = (undefined8 *)(**(code **)(*plVar2 + 0x18))(plVar2,iVar4);
          iVar4 = FUN_006bd550(*puVar6,0);
          if ((iVar4 == 0x758f7eaf) && (*(int *)(puVar3 + 0x38) == 0x55b5d9de)) {
            return;
          }
        }
      }
      if (*(int *)(param_1 + 4) == 2) {
        FUN_00820cec(param_1);
        return;
      }
      if (*(int *)(param_1 + 4) == 3) {
        FUN_00820588();
        return;
      }
      uVar7 = FUN_00820478();
      if ((uVar7 & 1) == 0) {
        FUN_0082103c();
        return;
      }
      FUN_00820f90();
      return;
    }
    if (DAT_05aed670 == 0) {
      return;
    }
  }
  if (*(long *)(DAT_05aed670 + 0x330) != 0) {
    puVar6 = (undefined8 *)
             (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338))
    ;
    iVar4 = FUN_006bd550(*puVar6,0);
    if (iVar4 == 0x758f7eaf && *(int *)(PTR_DAT_04bc3a80 + 0x38) == 0x43080996) {
      if (DAT_054ee400 != 0) {
        FUN_02509b80();
      }
      FUN_00821968();
      return;
    }
    if (DAT_05aed670 == 0) {
      return;
    }
  }
  if (*(long *)(DAT_05aed670 + 0x330) != 0) {
    puVar6 = (undefined8 *)
             (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338))
    ;
    iVar4 = FUN_006bd550(*puVar6,0);
    if (iVar4 == 0x758f7eaf && *(int *)(PTR_DAT_04bc3a80 + 0x38) == 0x30e4fc6) {
      if (*(int *)(param_1 + 4) != 2) {
        return;
      }
      if (*(int *)(param_1 + 0xc) == 2) {
        FUN_00821350();
        return;
      }
      if (*(int *)(param_1 + 0xc) == 1) {
        FUN_008210f0();
        return;
      }
      return;
    }
    if (DAT_05aed670 == 0) {
      return;
    }
  }
  if (*(long *)(DAT_05aed670 + 0x330) == 0) {
    return;
  }
  puVar6 = (undefined8 *)
           (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
  iVar4 = FUN_006bd550(*puVar6,0);
  lVar11 = DAT_05574040;
  if (iVar4 != 0x758f7eaf || *(int *)(PTR_DAT_04bc3a80 + 0x38) != 0x4e32b7a) {
    return;
  }
  if (DAT_05574040 == 0) {
    return;
  }
  pbVar1 = (byte *)(DAT_05574040 + 0x50c);
  local_b0 = CONCAT44(local_b0._4_4_,1);
  if ((((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) != 0) &&
     (uVar7 = FUN_02703140(DAT_05574040), (uVar7 & 1) != 0)) {
    *(undefined4 *)(lVar11 + 0x508) = 2;
    FUN_02703290(lVar11);
    uVar5 = *(uint *)(lVar11 + 0x508);
    if ((uVar5 & 1) != 0) {
      *pbVar1 = *pbVar1 | 4;
    }
    if ((uVar5 >> 1 & 1) != 0) {
      *(byte *)(lVar11 + 0x50d) = *(byte *)(lVar11 + 0x50d) | 4;
    }
    if ((uVar5 >> 2 & 1) != 0) {
      *(byte *)(lVar11 + 0x50e) = *(byte *)(lVar11 + 0x50e) | 4;
    }
    if ((uVar5 >> 3 & 1) != 0) {
      *(byte *)(lVar11 + 0x50f) = *(byte *)(lVar11 + 0x50f) | 4;
    }
    if ((uVar5 >> 4 & 1) != 0) {
      *(byte *)(lVar11 + 0x510) = *(byte *)(lVar11 + 0x510) | 4;
    }
    *(undefined4 *)(lVar11 + 0x508) = 0;
  }
  FUN_0252d11c(local_34);
  local_38[0] = local_34[0];
  if (7 < local_34[0]) {
    local_38[0] = 0xff;
  }
  lVar8 = FUN_02583354(DAT_055021a0,local_38,1);
  if (lVar8 == 0) {
    return;
  }
  local_54[0] = local_34[0];
  if (7 < local_34[0]) {
    local_54[0] = 0xff;
  }
  uVar5 = FUN_02582fe0(local_54);
  lVar12 = lVar8 + 0x194b0;
  if (*(long *)(lVar8 + 0x194b8) == 0) {
    lVar12 = *(long *)(DAT_05574040 + 0x20);
  }
  plVar2 = (long *)(lVar12 + 0x2c538);
  lVar8 = *(long *)(lVar12 + 0x2c558);
  if (lVar8 == 0) {
    uVar7 = 0;
  }
  else {
    if (*(undefined8 **)(lVar8 + 0x10) == (undefined8 *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
      lVar8 = *(long *)(lVar12 + 0x2c558);
      uVar7 = uVar7 & 0xffffffff;
      if (lVar8 == 0) goto LAB_008202b0;
    }
    plVar9 = *(long **)(lVar8 + 0x20);
    if (plVar9 != (long *)0x0) {
      local_b0 = *plVar2;
      local_a8 = *(ulong *)(lVar12 + 0x2c540);
      local_a0 = &DAT_00000004;
      (**(code **)(*plVar9 + 0x20))(plVar9,&local_b0);
    }
  }
LAB_008202b0:
  if ((*(byte *)(*(long *)(lVar12 + 0x2c540) + *plVar2) & 1) == 0) {
    FUN_026f27c0(lVar11,uVar5,1);
    if ((*(long *)(lVar12 + 0x2c558) != 0) &&
       (plVar9 = *(long **)(*(long *)(lVar12 + 0x2c558) + 0x20), plVar9 != (long *)0x0)) {
      local_b0 = *plVar2;
      local_a8 = *(ulong *)(lVar12 + 0x2c540);
      local_a0 = &DAT_00000004;
      (**(code **)(*plVar9 + 0x20))(plVar9,&local_b0);
    }
    *(uint *)(*(long *)(lVar12 + 0x2c540) + *plVar2) =
         *(uint *)(*(long *)(lVar12 + 0x2c540) + *plVar2) | 1;
  }
  else {
    local_b0 = CONCAT44(local_b0._4_4_,1);
    if ((((((*(byte *)(lVar11 + 0x50d) ^ 0xff) & 6) != 0) || (*(int *)(lVar11 + 0x124) != 1)) ||
        (*(uint *)(lVar11 + 0x120) != uVar5)) &&
       (FUN_026f27c0(lVar11,uVar5,0), lVar8 = DAT_055a1b78, lVar11 = DAT_05574040, DAT_055a1b78 != 0
       )) {
      local_b0 = 0;
      local_a8 = local_a8 & 0xffffffff00000000;
      local_a0 = PTR_DAT_04bc3880 + 0x10;
      local_60 = 0xffffffff;
      local_80 = local_a0;
      if ((((uVar5 < 8) && (DAT_05574040 != 0)) &&
          ((lVar10 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x18))(),
           lVar10 != 0 &&
           ((lVar10 = lVar10 + (ulong)uVar5 * 0x48,
            *(long *)(lVar10 + 0x1e34c0) != 0 || *(long *)(lVar10 + 0x1e34c8) != 0 &&
            (lVar11 = FUN_026ef080(lVar11,uVar5), lVar11 != 0)))))) &&
         ((*(byte *)(lVar11 + 0x70464) & 1) != 0)) {
        local_60 = CONCAT44(local_60._4_4_,uVar5);
        local_b0 = 7;
      }
      FUN_0283d404(lVar8,&local_b0);
    }
  }
  if ((((uVar7 & 1) != 0) && (*(long *)(lVar12 + 0x2c558) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(lVar12 + 0x2c558) + 0x18), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
  return;
}

