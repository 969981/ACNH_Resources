
int FUN_01c281f0(undefined8 param_1,long *param_2,int param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  void *__s;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  int iVar8;
  undefined4 uVar9;
  long lVar10;
  int iVar11;
  undefined4 local_68 [2];
  
  if (param_2 == (long *)0x0) {
    return 0;
  }
  __s = (void *)(**(code **)(*param_2 + 0x18))(param_2);
  memset(__s,0,0x754);
  lVar10 = *(long *)PTR_DAT_04bb4810;
  if (param_3 < -0x169521c) {
    if (param_3 == -0xe632453) goto LAB_01c282e0;
    if (param_3 == -0x83ceb3d) goto LAB_01c282f0;
  }
  else {
    if (param_3 == -0x169521c) {
LAB_01c2829c:
      FUN_013db2a0(lVar10 + 0x8a8,param_2);
    }
    else if (param_3 != 0x3fce6459) {
      if (param_3 != 0x6148bcad) goto LAB_01c28300;
      FUN_013db2a0(lVar10 + 8,param_2);
      goto LAB_01c2829c;
    }
    FUN_013db2a0(lVar10 + 0x1148,param_2);
LAB_01c282e0:
    FUN_013db2a0(lVar10 + 0x19e8,param_2);
LAB_01c282f0:
    FUN_013db2a0(lVar10 + 0x2288,param_2);
  }
LAB_01c28300:
  lVar10 = *(long *)PTR_DAT_04bb47b0;
  if (param_3 == -0x169521c) {
LAB_01c28338:
    FUN_02939270(lVar10 + 0x8a8,param_2);
LAB_01c28344:
    FUN_02939270(lVar10 + 0x1148,param_2);
  }
  else {
    if (param_3 == 0x3fce6459) goto LAB_01c28344;
    if (param_3 == 0x6148bcad) {
      FUN_02939270(lVar10 + 8,param_2);
      goto LAB_01c28338;
    }
  }
  lVar10 = *(long *)PTR_DAT_04bb4800;
  if (param_3 == -0x477aafe0) {
    FUN_01923eb0(lVar10 + 0x388,param_2);
    lVar10 = lVar10 + 0x6e8;
LAB_01c283c0:
    FUN_01923eb0(lVar10,param_2);
  }
  else {
    if (param_3 == -0x83ceb3d) {
      FUN_01923eb0(lVar10 + 0x268,param_2);
      lVar10 = lVar10 + 0x5c8;
      goto LAB_01c283c0;
    }
    if (param_3 == -0xe632453) {
      FUN_01923eb0(lVar10 + 0x148,param_2);
      lVar10 = lVar10 + 0x4a8;
      goto LAB_01c283c0;
    }
  }
  if (param_3 < -0x83ceb3d) {
    if (-0x15fdefdc < param_3) {
      if (param_3 == -0x15fdefdb) {
        uVar9 = 7;
      }
      else {
        if (param_3 != -0xe632453) goto LAB_01c28574;
        uVar9 = 3;
      }
      goto LAB_01c284b8;
    }
    if (param_3 == -0x477aafe0) {
      uVar9 = 5;
      goto LAB_01c284b8;
    }
    if (param_3 == -0x2099c902) {
      uVar9 = 9;
      goto LAB_01c284b8;
    }
LAB_01c28574:
    local_68[0] = 0;
    FUN_01c1df30(DAT_0534b0c0,param_2,local_68);
    uVar9 = 0;
  }
  else {
    if (param_3 < 0x17f77b87) {
      if (param_3 == -0x83ceb3d) {
        uVar9 = 4;
      }
      else {
        if (param_3 != -0x169521c) goto LAB_01c28574;
        uVar9 = 1;
      }
    }
    else if (param_3 == 0x17f77b87) {
      uVar9 = 8;
    }
    else if (param_3 == 0x3b3bf38a) {
      uVar9 = 6;
    }
    else {
      if (param_3 != 0x3fce6459) goto LAB_01c28574;
      uVar9 = 2;
    }
LAB_01c284b8:
    local_68[0] = uVar9;
    FUN_01c1df30(DAT_0534b0c0,param_2,local_68);
  }
  local_68[0] = uVar9;
  FUN_01c17de0(*(undefined8 *)PTR_DAT_04bb4838,param_2,local_68);
  if (((param_4 & 1) != 0) && (DAT_05574040 != 0)) {
    puVar6 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar10 = (**(code **)(*(long *)*puVar6 + 0x38))();
      if (lVar10 == 0) goto LAB_01c286e0;
      lVar10 = lVar10 + 0x70;
    }
    else if (((puVar6 == (undefined8 *)0x0) || ((long *)puVar6[0x26] == (long *)0x0)) ||
            (lVar10 = (**(code **)(*(long *)puVar6[0x26] + 0x38))(), lVar10 == 0))
    goto LAB_01c286e0;
    if ((*(long **)(lVar10 + 0x1bf1b8) == (long *)0x0) ||
       (puVar6 = (undefined8 *)**(long **)(lVar10 + 0x1bf1b8), puVar6 == (undefined8 *)0x0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = (**(code **)*puVar6)();
      uVar2 = uVar2 ^ 1;
    }
    lVar4 = (**(code **)(*param_2 + 0x20))(param_2);
    lVar7 = 0;
    iVar8 = 0;
    do {
      iVar11 = iVar8;
      puVar1 = (uint *)(lVar4 + lVar7);
      lVar7 = lVar7 + 4;
      uVar3 = *puVar1 - (*puVar1 >> 1 & 0x55555555);
      uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
      uVar3 = uVar3 + (uVar3 >> 4) & 0xf0f0f0f;
      uVar3 = uVar3 + (uVar3 >> 8);
      uVar3 = uVar3 + (uVar3 >> 0x10);
      iVar8 = (uVar3 & 0x3f) + iVar11;
    } while (lVar7 != 0x754);
    if (iVar8 != 0) {
      iVar8 = 1;
      iVar11 = iVar11 + (uVar3 & 0x3f);
      do {
        FUN_00889f80(local_68,param_2,iVar8);
        lVar7 = (**(code **)(*param_2 + 0x20))(param_2);
        uVar3 = FUN_0277d6c4(local_68);
        if (((uVar3 >> 3 & 0x1fff) < 0x753) &&
           ((*(uint *)(lVar7 + (ulong)((uVar3 & 0xffff) >> 5) * 4) >> (ulong)(uVar3 & 0x1f) & 1) !=
            0)) {
          uVar5 = FUN_027bf130(*(long *)(lVar10 + 0x1bf1a0) + *(long *)(lVar10 + 0x1bf198),local_68)
          ;
          if ((uVar5 & 1) == 0) {
            lVar7 = (**(code **)(*param_2 + 0x18))(param_2);
            uVar3 = FUN_0277d6c4(local_68);
            if ((uVar3 >> 3 & 0x1fff) < 0x753) {
              lVar4 = (ulong)((uVar3 & 0xffff) >> 5) * 4;
              *(uint *)(lVar7 + lVar4) =
                   *(uint *)(lVar7 + lVar4) & (1 << (ulong)(uVar3 & 0x1f) ^ 0xffffffffU);
            }
          }
          else {
            iVar8 = iVar8 + 1;
          }
        }
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
    if ((((uVar2 & 1) == 0) && (*(long *)(lVar10 + 0x1bf1b8) != 0)) &&
       (puVar6 = *(undefined8 **)(*(long *)(lVar10 + 0x1bf1b8) + 8), puVar6 != (undefined8 *)0x0)) {
      (**(code **)*puVar6)();
    }
  }
LAB_01c286e0:
  lVar7 = (**(code **)(*param_2 + 0x20))(param_2);
  lVar10 = 0;
  iVar8 = 0;
  do {
    puVar1 = (uint *)(lVar7 + lVar10);
    lVar10 = lVar10 + 4;
    uVar2 = *puVar1 - (*puVar1 >> 1 & 0x55555555);
    uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
    uVar2 = uVar2 + (uVar2 >> 4) & 0xf0f0f0f;
    uVar2 = uVar2 + (uVar2 >> 8);
    iVar8 = (uVar2 + (uVar2 >> 0x10) & 0x3f) + iVar8;
  } while (lVar10 != 0x754);
  return iVar8;
}

