
uint FUN_022b4bac(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  short *psVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined *local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined **local_c0;
  undefined **local_b8;
  undefined *local_b0;
  uint local_a8;
  uint local_a4;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  byte local_90;
  undefined *local_88;
  undefined *puStack_80;
  uint local_78;
  uint uStack_74;
  undefined *local_70;
  int local_68;
  int iStack_64;
  
  lVar8 = *(long *)PTR_DAT_04bbbc68;
  if (((((lVar8 != 0) && (*(long *)(lVar8 + 0xb0) != 0)) &&
       (*(long *)(*(long *)(lVar8 + 0xb0) + 8) != 0)) &&
      ((*(long *)(lVar8 + 0x488) != 0 && (*(long *)(*(long *)(lVar8 + 0x488) + 8) != 0)))) &&
     ((*(long *)(lVar8 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar8 + 0x2b0) + 8) != 0)))) {
    uVar4 = FUN_0277d6c4();
    puVar3 = PTR_DAT_04bb2010;
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((((uVar4 < *(uint *)(lVar8 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) &&
        (uVar4 = *(uint *)(param_2 + 8), (uVar4 & 1) == 0)) &&
       (uVar2 = *(uint *)(param_2 + 0xc), (uVar2 & 1) == 0)) {
      iStack_64 = uVar2 + 1;
      local_88 = PTR_DAT_04bbc1a0 + 0x10;
      puVar1 = PTR_DAT_04bb2010 + 0x10;
      local_68 = uVar4 + 1;
      local_98 = 0;
      lVar8 = *(long *)PTR_DAT_04bb2720;
      puStack_80 = puVar1;
      local_78 = uVar4;
      uStack_74 = uVar2;
      local_70 = puVar1;
      if (lVar8 == 0) {
        puVar9 = &DAT_055c04a0;
      }
      else {
        puVar9 = &DAT_055c04a0;
        if (*(long *)(lVar8 + 0x330) != 0) {
          puVar9 = (undefined8 *)
                   (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                             (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar8 + 0x338));
          iVar5 = FUN_006bd550(*puVar9,0);
          puVar9 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar5 != 0x758f7eaf) {
            puVar9 = &DAT_055c04a0;
          }
        }
      }
      local_94 = *(undefined4 *)(puVar9 + 7);
      local_90 = FUN_017baf44();
      local_90 = local_90 & 1;
      local_a0 = PTR_DAT_04bb6268 + 0x10;
      local_c0 = &puStack_80;
      local_b8 = &local_70;
      local_b0 = puVar1;
      local_a8 = uVar4;
      local_a4 = uVar2;
      do {
        psVar6 = (short *)FUN_01a5010c(&local_a0,0,&local_b0);
        if (*psVar6 != -2) goto LAB_022b4eec;
        if ((int)local_a8 < *(int *)(local_b8 + 1)) {
          local_a8 = local_a8 + 1;
        }
        else {
          local_a4 = local_a4 + 1;
          local_a8 = *(uint *)(local_c0 + 1);
        }
      } while (uVar4 != local_a8 || uVar2 + 2 != local_a4);
      FUN_0124c030(&local_c0,param_1);
      iVar5 = FUN_0123db50(&local_b8,local_b0);
      if (iVar5 == 0x2e) {
        local_c8 = *(undefined4 *)(param_2 + 8);
        uStack_c4 = *(undefined4 *)(param_2 + 0xc);
        local_d0 = puVar3 + 0x10;
        uVar7 = FUN_022a8c58(&local_d0);
        if ((uVar7 & 1) == 0) goto LAB_022b4eec;
      }
      iVar5 = FUN_0123db50(&local_b8,local_b0);
      if ((iVar5 == 0x21) || (iVar5 = FUN_0123db50(&local_b8,local_b0), iVar5 == 0x22)) {
        uVar4 = FUN_022b1170(&local_c0,param_2,1);
        goto LAB_022b4ef0;
      }
      uVar7 = FUN_022af310(&local_88);
      if ((uVar7 & 1) != 0) {
        iVar5 = FUN_0123db50(&local_b8,local_b0);
        if ((((8 < iVar5 - 0x23U) && (iVar5 = FUN_0123db50(&local_b8,local_b0), 6 < iVar5 - 0xbU))
            && (iVar5 = FUN_0123db50(&local_b8,local_b0), 5 < iVar5 - 0x12U)) &&
           (((iVar5 = FUN_0123db50(&local_b8,local_b0), 6 < iVar5 - 0x18U &&
             (iVar5 = FUN_0123db50(&local_b8,local_b0), iVar5 != 0x1f)) &&
            ((uVar7 = FUN_0124dcb0(&local_c0), (uVar7 & 1) == 0 &&
             (iVar5 = FUN_0123db50(&local_b8,local_b0), iVar5 != 0x2e)))))) {
          uVar7 = FUN_0123d890(local_b0,4);
          if ((((uVar7 & 1) == 0) && (uVar7 = FUN_01250974(&local_c0), (uVar7 & 1) == 0)) &&
             (iVar5 = FUN_0123db50(&local_b8,local_b0), (iVar5 - 2U & 0xfffffff9) != 0))
          goto LAB_022b4eec;
          uVar7 = FUN_022a7140(param_2,0,0);
          if ((uVar7 & 1) == 0) {
            uVar4 = FUN_022a7140(param_2,1,0);
            goto LAB_022b4ef0;
          }
        }
        uVar4 = 1;
        goto LAB_022b4ef0;
      }
    }
  }
LAB_022b4eec:
  uVar4 = 0;
LAB_022b4ef0:
  return uVar4 & 1;
}

