
undefined8 FUN_03024f3c(long param_1)

{
  short *psVar1;
  undefined **ppuVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  code *pcVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  float fVar11;
  uint local_44;
  undefined **local_40;
  undefined4 local_38;
  
  uVar4 = 0;
  switch(*(undefined4 *)(param_1 + 0x23c)) {
  case 2:
    if ((*(long *)(param_1 + 0x2e8) == 0) ||
       ((*(byte *)(*(long *)(param_1 + 0x2e8) + 0x14) & 1) == 0)) {
      return 0;
    }
    plVar10 = (long *)(**(code **)(**(long **)(param_1 + 0x2d8) + 0xa0))();
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x30))();
    }
    if (*(long *)(param_1 + 0x230) != 0) {
      *(undefined2 *)(*(long *)(param_1 + 0x230) + 0x2ec) = 0x101;
    }
    lVar6 = *(long *)(param_1 + 0x2e8);
    if (lVar6 != 0) {
      plVar10 = (long *)(**(code **)(**(long **)(param_1 + 0x2d8) + 0x78))();
      uVar5 = (**(code **)(*plVar10 + 0x38))();
      uVar4 = 3;
      if ((uVar5 & 1) == 0) {
        uVar4 = 4;
      }
      FUN_02fe4720(lVar6,uVar4);
    }
    plVar10 = (long *)(**(code **)(**(long **)(param_1 + 0x2d8) + 0x78))();
    uVar5 = (**(code **)(*plVar10 + 0x38))();
    if ((uVar5 & 1) == 0) {
      lVar6 = *(long *)(param_1 + 0x880);
    }
    else {
      lVar6 = *(long *)(param_1 + 0x878);
    }
    if ((lVar6 != 0) && (*(long *)(lVar6 + 0x18) == 0 && *(long *)(lVar6 + 0x10) == 0)) {
      lVar9 = *(long *)(lVar6 + 0x38);
      plVar10 = (long *)(*(int *)(lVar9 + 0x54) + lVar6);
      plVar8 = (long *)(lVar9 + 0x40);
      lVar6 = *plVar8;
      *plVar8 = (long)plVar10;
      *plVar10 = lVar6;
      plVar10[1] = (long)plVar8;
      if (lVar6 != 0) {
        *(long **)(lVar6 + 8) = plVar10;
      }
      *(int *)(lVar9 + 0x50) = *(int *)(lVar9 + 0x50) + 1;
    }
    break;
  case 3:
    if (*(short *)(param_1 + 0x238) != DAT_04cb6038) {
      psVar1 = (short *)(param_1 + 0x238);
      uVar5 = FUN_007ef180(psVar1);
      if ((uVar5 & 1) != 0) {
        if (*psVar1 != DAT_04cb6038) {
          uVar5 = FUN_007ef180(psVar1);
          if ((uVar5 & 1) == 0) {
            return 1;
          }
          if (*(long *)(param_1 + 0x230) == 0) {
            return 1;
          }
          if (*(long **)(param_1 + 0x2e0) != (long *)0x0) {
            (**(code **)(**(long **)(param_1 + 0x2e0) + 0x58))();
          }
          FUN_03024b00(param_1);
        }
        break;
      }
    }
    if (*(long *)(param_1 + 0x7e8) != 0) {
      FUN_02fdf2e4();
      lVar6 = *(long *)(*(long *)(param_1 + 0x210) + 0x628);
      if ((lVar6 != 0) &&
         (plVar10 = *(long **)(*(long *)(lVar6 + 0x2f0) + (ulong)(1 < *(uint *)(lVar6 + 0x2e8)) * 8)
         , plVar10 != (long *)0x0)) {
        ppuVar2 = (undefined **)(PTR_DAT_04bc4f00 + 0x10);
        local_38 = 0xc;
        local_40 = ppuVar2;
        (**(code **)(*plVar10 + 0x20))(plVar10,&local_40);
        uVar5 = (**(code **)(plVar10[3] + 0xe0))(plVar10[1]);
        if ((uVar5 & 1) == 0) {
          local_38 = 7;
          local_40 = ppuVar2;
          (**(code **)(*plVar10 + 0x20))(plVar10,&local_40);
          fVar11 = (float)(**(code **)(plVar10[3] + 0x90))(plVar10[1]);
          local_44 = (int)fVar11 + 1;
          local_40 = ppuVar2;
          goto LAB_0302530c;
        }
        local_38 = 0x14;
        local_40 = ppuVar2;
        (**(code **)(*plVar10 + 0x18))(plVar10,&local_40);
        fVar11 = 0.0;
LAB_03025328:
        lVar6 = plVar10[1];
        pcVar7 = *(code **)(plVar10[3] + 0x158);
        goto LAB_03025338;
      }
    }
    break;
  default:
    goto switchD_03024f80_caseD_4;
  case 0xc:
    lVar6 = *(long *)(param_1 + 0x638);
    if ((lVar6 != 0) && (lVar9 = *(long *)(param_1 + 0x210), lVar9 != 0)) {
      FUN_03025360(lVar9,lVar6);
      plVar10 = (long *)(lVar6 + 0x998);
      plVar8 = plVar10 + *(uint *)(lVar6 + 0x8f8);
      if (0x12 < *(uint *)(lVar6 + 0x8f8)) {
        plVar8 = plVar10;
      }
      if (*plVar8 == 0) {
        local_44 = 0;
      }
      else {
        plVar8 = plVar10 + *(uint *)(lVar6 + 0x8f8);
        if (0x12 < *(uint *)(lVar6 + 0x8f8)) {
          plVar8 = plVar10;
        }
        local_44 = *(uint *)(*plVar8 + 0x10);
        if (local_44 != 2) {
          local_44 = (uint)(local_44 == 1);
        }
      }
      if ((*(long *)(lVar9 + 0x630) != 0) &&
         (plVar10 = (long *)**(undefined8 **)(*(long *)(lVar9 + 0x630) + 0x2f0),
         plVar10 != (long *)0x0)) {
        local_40 = &PTR_LAB_04aa7fe0;
LAB_0302530c:
        fVar11 = (float)(int)local_44;
        local_38 = 0x14;
        (**(code **)(*plVar10 + 0x18))(plVar10,&local_40);
        goto LAB_03025328;
      }
    }
    break;
  case 0xe:
    lVar6 = *(long *)(*(long *)(param_1 + 0x210) + 0x638);
    bVar3 = false;
    if (*(long *)(param_1 + 0x230) != 0) {
      bVar3 = *(char *)(*(long *)(param_1 + 0x230) + 0x410) != '\0';
    }
    if ((lVar6 != 0) &&
       (plVar10 = *(long **)(*(long *)(lVar6 + 0x2f0) + (ulong)(1 < *(uint *)(lVar6 + 0x2e8)) * 8),
       plVar10 != (long *)0x0)) {
      if (bVar3) {
        local_40 = &PTR_FUN_04aa77b8;
        local_38 = 1;
        (**(code **)(*plVar10 + 0x18))(plVar10,&local_40);
        fVar11 = 1.0;
      }
      else {
        local_40 = &PTR_FUN_04aa77b8;
        local_38 = 1;
        (**(code **)(*plVar10 + 0x18))(plVar10,&local_40);
        fVar11 = -1.0;
      }
      lVar6 = plVar10[1];
      pcVar7 = *(code **)(plVar10[3] + 400);
LAB_03025338:
      (*pcVar7)(fVar11,lVar6);
    }
  }
  uVar4 = 1;
switchD_03024f80_caseD_4:
  return uVar4;
}

