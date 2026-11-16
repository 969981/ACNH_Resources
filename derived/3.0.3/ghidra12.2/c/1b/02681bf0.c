
/* WARNING: Removing unreachable block (ram,0x02681edc) */
/* WARNING: Removing unreachable block (ram,0x02681d80) */
/* WARNING: Removing unreachable block (ram,0x02681df8) */
/* WARNING: Removing unreachable block (ram,0x026820fc) */

int FUN_02681bf0(byte *param_1,uint param_2)

{
  long *plVar1;
  uint *puVar2;
  uint uVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  byte bVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined *local_78;
  char *local_70;
  undefined8 uStack_68;
  
  local_78 = PTR_DAT_04bb2020 + 0x10;
  local_70 = "PokiRate";
  uVar5 = FUN_02757a80(param_1,&local_78);
  puVar4 = PTR_DAT_04bb4f78;
  bVar12 = *param_1;
  uVar6 = 100;
  if (uVar5 != 0) {
    uVar6 = uVar5;
  }
  if (7 < bVar12) {
    bVar12 = 0xff;
  }
  local_78 = (undefined *)CONCAT71(local_78._1_7_,bVar12);
  lVar7 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,&local_78,1);
  if (lVar7 == 0) {
    iVar14 = 0;
  }
  else {
    lVar11 = lVar7 + 0x194b0;
    if (*(long *)(lVar7 + 0x194b8) == 0) {
      lVar11 = *(long *)(DAT_05574040 + 0x20);
    }
    if (*(long **)(lVar11 + 0x8640) == (long *)0x0) {
      uVar9 = 0;
    }
    else {
      puVar8 = (undefined8 *)**(long **)(lVar11 + 0x8640);
      uVar9 = 0;
      if (puVar8 != (undefined8 *)0x0) {
        uVar9 = (**(code **)*puVar8)();
      }
    }
    iVar14 = 0;
    puVar2 = (uint *)(*(long *)(lVar11 + 0x8628) + *(long *)(lVar11 + 0x8620));
    uVar5 = *puVar2;
    if ((*(byte *)((long)puVar2 + 7) != 0 ||
         (((ulong)uVar5 != 0 || (ushort)puVar2[1] != 0) || *(byte *)((long)puVar2 + 6) != 0)) &&
       ((uint)*(byte *)((long)puVar2 + 7) ==
        ((uVar5 + (uVar5 >> 0x10) + (uVar5 >> 0x18) + (uVar5 >> 8)) - 0x2d & 0xff))) {
      lVar7 = (ulong)uVar5 << ((ulong)(0x1d - *(byte *)((long)puVar2 + 6)) & 0x3f);
      iVar14 = ((int)lVar7 - (uint)(ushort)puVar2[1]) + -0x7f1cd4ef + (int)((ulong)lVar7 >> 0x20);
    }
    if ((((uVar9 & 1) != 0) && (*(long *)(lVar11 + 0x8640) != 0)) &&
       (puVar8 = *(undefined8 **)(*(long *)(lVar11 + 0x8640) + 8), puVar8 != (undefined8 *)0x0)) {
      (**(code **)*puVar8)();
    }
  }
  FUN_0267abf0(param_1);
  if (DAT_05574040 == 0) {
    uVar5 = 0;
    iVar15 = 0;
  }
  else {
    local_78 = (undefined *)CONCAT44(local_78._4_4_,1);
    if ((((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) == 0) &&
       (lVar7 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x38))(),
       lVar7 != 0)) {
      if (*(long **)(lVar7 + 0x5d3d80) == (long *)0x0) {
        uVar9 = 0;
      }
      else {
        puVar8 = (undefined8 *)**(long **)(lVar7 + 0x5d3d80);
        uVar9 = 0;
        if (puVar8 != (undefined8 *)0x0) {
          uVar9 = (**(code **)*puVar8)();
        }
      }
      uVar5 = 0;
      puVar2 = (uint *)(*(long *)(lVar7 + 0x5d3d68) + *(long *)(lVar7 + 0x5d3d60));
      uVar3 = *puVar2;
      if ((*(byte *)((long)puVar2 + 7) != 0 ||
           (((ulong)uVar3 != 0 || (ushort)puVar2[1] != 0) || *(byte *)((long)puVar2 + 6) != 0)) &&
         ((uint)*(byte *)((long)puVar2 + 7) ==
          ((uVar3 + (uVar3 >> 0x10) + (uVar3 >> 0x18) + (uVar3 >> 8)) - 0x2d & 0xff))) {
        lVar11 = (ulong)uVar3 << ((ulong)(0x1d - *(byte *)((long)puVar2 + 6)) & 0x3f);
        uVar5 = ((int)lVar11 - (uint)(ushort)puVar2[1]) + -0x7f1cd4ef + (int)((ulong)lVar11 >> 0x20)
        ;
      }
      if ((((uVar9 & 1) != 0) && (*(long *)(lVar7 + 0x5d3d80) != 0)) &&
         (puVar8 = *(undefined8 **)(*(long *)(lVar7 + 0x5d3d80) + 8), puVar8 != (undefined8 *)0x0))
      {
        (**(code **)*puVar8)();
      }
    }
    else {
      uVar5 = 0;
    }
    if (DAT_05574040 != 0) {
      local_78 = (undefined *)CONCAT44(local_78._4_4_,1);
      if ((((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) == 0) &&
         (lVar7 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x38))(),
         lVar7 != 0)) {
        if (*(long **)(&LAB_005d3d10 + lVar7) == (long *)0x0) {
          uVar9 = 0;
        }
        else {
          puVar8 = (undefined8 *)**(long **)(&LAB_005d3d10 + lVar7);
          uVar9 = 0;
          if (puVar8 != (undefined8 *)0x0) {
            uVar9 = (**(code **)*puVar8)();
          }
        }
        iVar15 = 0;
        puVar2 = (uint *)(*(long *)(&DAT_005d3cf8 + lVar7) + *(long *)(&LAB_005d3cf0 + lVar7));
        uVar3 = *puVar2;
        if ((*(byte *)((long)puVar2 + 7) != 0 ||
             (((ulong)uVar3 != 0 || (ushort)puVar2[1] != 0) || *(byte *)((long)puVar2 + 6) != 0)) &&
           ((uint)*(byte *)((long)puVar2 + 7) ==
            ((uVar3 + (uVar3 >> 0x10) + (uVar3 >> 0x18) + (uVar3 >> 8)) - 0x2d & 0xff))) {
          lVar11 = (ulong)uVar3 << ((ulong)(0x1d - *(byte *)((long)puVar2 + 6)) & 0x3f);
          iVar15 = ((int)lVar11 - (uint)(ushort)puVar2[1]) + -0x7f1cd4ef +
                   (int)((ulong)lVar11 >> 0x20);
        }
        if ((((uVar9 & 1) != 0) && (*(long *)(&LAB_005d3d10 + lVar7) != 0)) &&
           (puVar8 = *(undefined8 **)(*(long *)(&LAB_005d3d10 + lVar7) + 8),
           puVar8 != (undefined8 *)0x0)) {
          (**(code **)*puVar8)();
        }
        goto LAB_02681e58;
      }
    }
    iVar15 = 0;
  }
LAB_02681e58:
  iVar13 = param_2 - uVar5;
  if (param_2 < uVar5 || iVar13 == 0) {
    iVar13 = 0;
    uVar5 = param_2;
  }
  else if (iVar15 + uVar5 < param_2) {
    return 0;
  }
  uVar3 = 0;
  if ((ulong)uVar6 != 0) {
    uVar3 = (uint)(((ulong)param_2 * 100) / (ulong)uVar6);
  }
  uVar6 = FUN_0267b6f0(param_1,0);
  if (uVar3 <= uVar6) {
    uVar6 = uVar3;
  }
  iVar15 = 999999999 - iVar14;
  if ((uVar3 - uVar6) + iVar14 < 1000000000) {
    iVar15 = uVar3 - uVar6;
  }
  if ((uVar5 != 0) && (DAT_05574040 != 0)) {
    local_78 = (undefined *)CONCAT44(local_78._4_4_,1);
    if ((((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) == 0) &&
       (lVar7 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x30))(),
       lVar7 != 0)) {
      plVar1 = (long *)(lVar7 + 0x5d3d60);
      lVar11 = *(long *)(lVar7 + 0x5d3d80);
      if (lVar11 == 0) {
        FUN_0285dd6c(*(long *)(lVar7 + 0x5d3d68) + *plVar1,uVar5);
      }
      else {
        if (*(undefined8 **)(lVar11 + 0x10) == (undefined8 *)0x0) {
          uVar9 = 0;
LAB_02682078:
          plVar10 = *(long **)(lVar11 + 0x20);
          if (plVar10 != (long *)0x0) {
            local_78 = (undefined *)*plVar1;
            local_70 = *(char **)(lVar7 + 0x5d3d68);
            uStack_68 = 8;
            (**(code **)(*plVar10 + 0x20))(plVar10,&local_78);
          }
        }
        else {
          uVar9 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
          lVar11 = *(long *)(lVar7 + 0x5d3d80);
          uVar9 = uVar9 & 0xffffffff;
          if (lVar11 != 0) goto LAB_02682078;
        }
        FUN_0285dd6c(*(long *)(lVar7 + 0x5d3d68) + *plVar1,uVar5);
        if ((((uVar9 & 1) != 0) && (*(long *)(lVar7 + 0x5d3d80) != 0)) &&
           (puVar8 = *(undefined8 **)(*(long *)(lVar7 + 0x5d3d80) + 0x18),
           puVar8 != (undefined8 *)0x0)) {
          (**(code **)*puVar8)();
        }
      }
    }
  }
  if ((iVar13 == 0) || (DAT_05574040 == 0)) goto LAB_026821cc;
  local_78 = (undefined *)CONCAT44(local_78._4_4_,1);
  if ((((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) != 0) ||
     (lVar7 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x30))(),
     lVar7 == 0)) goto LAB_026821cc;
  plVar1 = (long *)(&LAB_005d3cf0 + lVar7);
  lVar11 = *(long *)(&LAB_005d3d10 + lVar7);
  if (lVar11 == 0) {
    FUN_0285dd6c(*(long *)(&DAT_005d3cf8 + lVar7) + *plVar1,iVar13);
    goto LAB_026821cc;
  }
  if (*(undefined8 **)(lVar11 + 0x10) == (undefined8 *)0x0) {
    uVar9 = 0;
LAB_02682170:
    plVar10 = *(long **)(lVar11 + 0x20);
    if (plVar10 != (long *)0x0) {
      local_78 = (undefined *)*plVar1;
      local_70 = *(char **)(&DAT_005d3cf8 + lVar7);
      uStack_68 = 8;
      (**(code **)(*plVar10 + 0x20))(plVar10,&local_78);
    }
  }
  else {
    uVar9 = (**(code **)**(undefined8 **)(lVar11 + 0x10))();
    lVar11 = *(long *)(&LAB_005d3d10 + lVar7);
    uVar9 = uVar9 & 0xffffffff;
    if (lVar11 != 0) goto LAB_02682170;
  }
  FUN_0285dd6c(*(long *)(&DAT_005d3cf8 + lVar7) + *plVar1,iVar13);
  if ((((uVar9 & 1) != 0) && (*(long *)(&LAB_005d3d10 + lVar7) != 0)) &&
     (puVar8 = *(undefined8 **)(*(long *)(&LAB_005d3d10 + lVar7) + 0x18),
     puVar8 != (undefined8 *)0x0)) {
    (**(code **)*puVar8)();
  }
LAB_026821cc:
  if (iVar15 != 0) {
    FUN_0267f9f0(param_1,iVar15);
  }
  if (((uVar6 != 0) && (*param_1 < 8)) &&
     (((uVar5 = FUN_02582d8c(param_1,1), uVar5 < 8 &&
       ((*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar5 * 0x13f0 + 0x13d4) != '\0' &&
        (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar5 * 0x13f0 + 0x13d6) != '\0')))) ||
      ((*param_1 < 8 &&
       ((((uVar5 = FUN_02582d8c(param_1,1), uVar5 < 8 &&
          (lVar7 = *(long *)PTR_DAT_04bb4fb8,
          *(char *)(lVar7 + (ulong)uVar5 * 0x13f0 + 0x13d4) != '\0')) &&
         (*(char *)(lVar7 + (ulong)uVar5 * 0x13f0 + 0x13d6) != '\0')) &&
        (*(int *)(lVar7 + (ulong)uVar5 * 0x13f0 + 0x13d0) == 1)))))))) {
    bVar12 = *param_1;
    if (7 < bVar12) {
      bVar12 = 0xff;
    }
    local_78 = (undefined *)CONCAT71(local_78._1_7_,bVar12);
    lVar7 = FUN_02583354(*(undefined8 *)puVar4,&local_78,1);
    if (lVar7 != 0) {
      FUN_0267b0b0(lVar7,uVar6);
    }
  }
  return iVar15 + uVar6;
}

