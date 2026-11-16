
/* WARNING: Removing unreachable block (ram,0x026818c4) */
/* WARNING: Removing unreachable block (ram,0x02681754) */
/* WARNING: Removing unreachable block (ram,0x026817cc) */
/* WARNING: Removing unreachable block (ram,0x02681aec) */

int FUN_02681590(byte *param_1,uint param_2)

{
  long *plVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  byte bVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  undefined *local_78;
  char *local_70;
  undefined8 uStack_68;
  
  local_78 = PTR_DAT_04bb2020 + 0x10;
  local_70 = "PokiRate";
  uVar5 = FUN_02757a80(param_1,&local_78);
  uVar14 = 100;
  if (uVar5 != 0) {
    uVar14 = uVar5;
  }
  bVar11 = *param_1;
  iVar12 = (int)(((ulong)uVar14 * (long)(int)param_2) / 100);
  if (0x31 < ((ulong)uVar14 * (long)(int)param_2) % 100) {
    iVar12 = iVar12 + 1;
  }
  if (7 < bVar11) {
    bVar11 = 0xff;
  }
  local_78 = (undefined *)CONCAT71(local_78._1_7_,bVar11);
  lVar6 = FUN_025830c0(DAT_055021a0,&local_78,1);
  if (lVar6 == 0) {
    uVar14 = 0;
  }
  else {
    lVar10 = lVar6 + 0x194b0;
    if (*(long *)(lVar6 + 0x194b8) == 0) {
      lVar10 = *(long *)(DAT_05574040 + 0x20);
    }
    if (*(long **)(lVar10 + 0x8640) == (long *)0x0) {
      uVar8 = 0;
    }
    else {
      puVar7 = (undefined8 *)**(long **)(lVar10 + 0x8640);
      uVar8 = 0;
      if (puVar7 != (undefined8 *)0x0) {
        uVar8 = (**(code **)*puVar7)();
      }
    }
    uVar14 = 0;
    puVar2 = (uint *)(*(long *)(lVar10 + 0x8628) + *(long *)(lVar10 + 0x8620));
    uVar5 = *puVar2;
    if ((*(byte *)((long)puVar2 + 7) != 0 ||
         (((ulong)uVar5 != 0 || (ushort)puVar2[1] != 0) || *(byte *)((long)puVar2 + 6) != 0)) &&
       ((uint)*(byte *)((long)puVar2 + 7) ==
        ((uVar5 + (uVar5 >> 0x10) + (uVar5 >> 0x18) + (uVar5 >> 8)) - 0x2d & 0xff))) {
      lVar6 = (ulong)uVar5 << ((ulong)(0x1d - *(byte *)((long)puVar2 + 6)) & 0x3f);
      uVar14 = ((int)lVar6 - (uint)(ushort)puVar2[1]) + -0x7f1cd4ef + (int)((ulong)lVar6 >> 0x20);
    }
    if ((((uVar8 & 1) != 0) && (*(long *)(lVar10 + 0x8640) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(lVar10 + 0x8640) + 8), puVar7 != (undefined8 *)0x0)) {
      (**(code **)*puVar7)();
    }
  }
  uVar5 = FUN_0267abf0(param_1);
  if (DAT_05574040 == 0) {
    iVar15 = 0;
    iVar13 = 0;
  }
  else {
    local_78 = (undefined *)CONCAT44(local_78._4_4_,1);
    if ((((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) == 0) &&
       (lVar6 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x38))(),
       lVar6 != 0)) {
      if (*(long **)(lVar6 + 0x5d3d80) == (long *)0x0) {
        uVar8 = 0;
      }
      else {
        puVar7 = (undefined8 *)**(long **)(lVar6 + 0x5d3d80);
        uVar8 = 0;
        if (puVar7 != (undefined8 *)0x0) {
          uVar8 = (**(code **)*puVar7)();
        }
      }
      iVar15 = 0;
      puVar2 = (uint *)(*(long *)(lVar6 + 0x5d3d68) + *(long *)(lVar6 + 0x5d3d60));
      uVar4 = *puVar2;
      if ((*(byte *)((long)puVar2 + 7) != 0 ||
           (((ulong)uVar4 != 0 || (ushort)puVar2[1] != 0) || *(byte *)((long)puVar2 + 6) != 0)) &&
         ((uint)*(byte *)((long)puVar2 + 7) ==
          ((uVar4 + (uVar4 >> 0x10) + (uVar4 >> 0x18) + (uVar4 >> 8)) - 0x2d & 0xff))) {
        lVar10 = (ulong)uVar4 << ((ulong)(0x1d - *(byte *)((long)puVar2 + 6)) & 0x3f);
        iVar15 = ((int)lVar10 - (uint)(ushort)puVar2[1]) + -0x7f1cd4ef +
                 (int)((ulong)lVar10 >> 0x20);
      }
      if ((((uVar8 & 1) != 0) && (*(long *)(lVar6 + 0x5d3d80) != 0)) &&
         (puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0x5d3d80) + 8), puVar7 != (undefined8 *)0x0))
      {
        (**(code **)*puVar7)();
      }
    }
    else {
      iVar15 = 0;
    }
    if (DAT_05574040 != 0) {
      local_78 = (undefined *)CONCAT44(local_78._4_4_,1);
      if ((((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) == 0) &&
         (lVar6 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x38))(),
         lVar6 != 0)) {
        if (*(long **)(&LAB_005d3d10 + lVar6) == (long *)0x0) {
          uVar8 = 0;
        }
        else {
          puVar7 = (undefined8 *)**(long **)(&LAB_005d3d10 + lVar6);
          uVar8 = 0;
          if (puVar7 != (undefined8 *)0x0) {
            uVar8 = (**(code **)*puVar7)();
          }
        }
        iVar13 = 0;
        puVar2 = (uint *)(*(long *)(&DAT_005d3cf8 + lVar6) + *(long *)(&LAB_005d3cf0 + lVar6));
        uVar4 = *puVar2;
        if ((*(byte *)((long)puVar2 + 7) != 0 ||
             (((ulong)uVar4 != 0 || (ushort)puVar2[1] != 0) || *(byte *)((long)puVar2 + 6) != 0)) &&
           ((uint)*(byte *)((long)puVar2 + 7) ==
            ((uVar4 + (uVar4 >> 0x10) + (uVar4 >> 0x18) + (uVar4 >> 8)) - 0x2d & 0xff))) {
          lVar10 = (ulong)uVar4 << ((ulong)(0x1d - *(byte *)((long)puVar2 + 6)) & 0x3f);
          iVar13 = ((int)lVar10 - (uint)(ushort)puVar2[1]) + -0x7f1cd4ef +
                   (int)((ulong)lVar10 >> 0x20);
        }
        if ((((uVar8 & 1) != 0) && (*(long *)(&LAB_005d3d10 + lVar6) != 0)) &&
           (puVar7 = *(undefined8 **)(*(long *)(&LAB_005d3d10 + lVar6) + 8),
           puVar7 != (undefined8 *)0x0)) {
          (**(code **)*puVar7)();
        }
        goto LAB_0268182c;
      }
    }
    iVar13 = 0;
  }
LAB_0268182c:
  uVar4 = param_2 - uVar14;
  if (uVar5 <= param_2 - uVar14) {
    uVar4 = uVar5;
  }
  uVar5 = 0;
  if (uVar14 <= param_2) {
    uVar5 = uVar4;
  }
  if (param_2 <= uVar14) {
    uVar14 = param_2;
  }
  iVar3 = 999999 - iVar13;
  if ((uint)(iVar13 + iVar12) < 1000000) {
    iVar3 = iVar12;
  }
  iVar13 = 999999 - iVar15;
  if ((uint)((iVar12 - iVar3) + iVar15) < 1000000000) {
    iVar13 = iVar12 - iVar3;
  }
  if (uVar14 != 0) {
    FUN_0267fb30(param_1);
  }
  if (uVar5 != 0) {
    FUN_0267b340(param_1,uVar5);
  }
  if ((iVar13 != 0) && (DAT_05574040 != 0)) {
    local_78 = (undefined *)CONCAT44(local_78._4_4_,1);
    if ((((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) == 0) &&
       (lVar6 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x30))(),
       lVar6 != 0)) {
      plVar1 = (long *)(lVar6 + 0x5d3d60);
      lVar10 = *(long *)(lVar6 + 0x5d3d80);
      if (lVar10 == 0) {
        FUN_0285dc20(*(long *)(lVar6 + 0x5d3d68) + *plVar1,iVar13,999999999);
      }
      else {
        if (*(undefined8 **)(lVar10 + 0x10) == (undefined8 *)0x0) {
          uVar8 = 0;
LAB_02681a64:
          plVar9 = *(long **)(lVar10 + 0x20);
          if (plVar9 != (long *)0x0) {
            local_78 = (undefined *)*plVar1;
            local_70 = *(char **)(lVar6 + 0x5d3d68);
            uStack_68 = 8;
            (**(code **)(*plVar9 + 0x20))(plVar9,&local_78);
          }
        }
        else {
          uVar8 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
          lVar10 = *(long *)(lVar6 + 0x5d3d80);
          uVar8 = uVar8 & 0xffffffff;
          if (lVar10 != 0) goto LAB_02681a64;
        }
        FUN_0285dc20(*(long *)(lVar6 + 0x5d3d68) + *plVar1,iVar13,999999999);
        if ((((uVar8 & 1) != 0) && (*(long *)(lVar6 + 0x5d3d80) != 0)) &&
           (puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0x5d3d80) + 0x18),
           puVar7 != (undefined8 *)0x0)) {
          (**(code **)*puVar7)();
        }
      }
    }
  }
  if ((iVar3 == 0) || (DAT_05574040 == 0)) goto LAB_02681bc4;
  local_78 = (undefined *)CONCAT44(local_78._4_4_,1);
  if ((((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) != 0) ||
     (lVar6 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x30))(),
     lVar6 == 0)) goto LAB_02681bc4;
  plVar1 = (long *)(&LAB_005d3cf0 + lVar6);
  lVar10 = *(long *)(&LAB_005d3d10 + lVar6);
  if (lVar10 == 0) {
    FUN_0285dc20(*(long *)(&DAT_005d3cf8 + lVar6) + *plVar1,iVar3,999999);
    goto LAB_02681bc4;
  }
  if (*(undefined8 **)(lVar10 + 0x10) == (undefined8 *)0x0) {
    uVar8 = 0;
LAB_02681b64:
    plVar9 = *(long **)(lVar10 + 0x20);
    if (plVar9 != (long *)0x0) {
      local_78 = (undefined *)*plVar1;
      local_70 = *(char **)(&DAT_005d3cf8 + lVar6);
      uStack_68 = 8;
      (**(code **)(*plVar9 + 0x20))(plVar9,&local_78);
    }
  }
  else {
    uVar8 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
    lVar10 = *(long *)(&LAB_005d3d10 + lVar6);
    uVar8 = uVar8 & 0xffffffff;
    if (lVar10 != 0) goto LAB_02681b64;
  }
  FUN_0285dc20(*(long *)(&DAT_005d3cf8 + lVar6) + *plVar1,iVar3,999999);
  if ((((uVar8 & 1) != 0) && (*(long *)(&LAB_005d3d10 + lVar6) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(&LAB_005d3d10 + lVar6) + 0x18),
     puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
LAB_02681bc4:
  return iVar13 + iVar3;
}

