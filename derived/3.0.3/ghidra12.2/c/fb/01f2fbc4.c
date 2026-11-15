
undefined8 FUN_01f2fbc4(long param_1,undefined2 *param_2,byte param_3,undefined8 param_4)

{
  undefined *puVar1;
  uint *puVar2;
  uint *puVar3;
  undefined4 uVar4;
  char cVar5;
  short sVar6;
  uint uVar7;
  undefined1 uVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  char *pcVar12;
  undefined **ppuVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  undefined *local_2600;
  char *pcStack_25f8;
  undefined *local_25f0;
  char *local_25e8;
  undefined8 *local_25e0;
  
  puVar1 = PTR_DAT_04bb43c0;
  ppuVar13 = &local_2600;
  lVar16 = *(long *)PTR_DAT_04bb43c0;
  uVar9 = FUN_0277d6c4(param_2);
  if (*(long *)puVar1 == 0) {
    return 0;
  }
  lVar16 = *(long *)(lVar16 + 0x57e58);
  uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
  if (*(uint *)(lVar16 + 0x1d8) <= uVar9) {
    return 0;
  }
  if (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar9 * 8) == 0) {
    return 0;
  }
  puVar2 = (uint *)(param_1 + 0x77b0);
  if ((*(byte *)(param_1 + 0xad5a) >> 1 & 1) != 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x77f4) == 6) {
    return 0;
  }
  if (*(int *)(param_1 + 0x77f4) == 7) {
    return 0;
  }
  if ((*puVar2 & 0xfffffffe) == 6) {
    return 0;
  }
  uVar11 = FUN_02532764(param_4,PTR_DAT_04bb3238);
  if ((uVar11 & 1) == 0) {
    return 0;
  }
  lVar16 = *(long *)PTR_DAT_04bb46b0;
  if (lVar16 != 0) {
    puVar14 = *(undefined8 **)(lVar16 + 0x10);
    if ((*(byte *)(lVar16 + 0x453) & 1) == 0) {
      lVar16 = (**(code **)(*(long *)*puVar14 + 0x38))();
      if (lVar16 != 0) {
        lVar16 = lVar16 + 0x70;
LAB_01f2fce8:
        local_25e8 = (char *)(lVar16 + 0xe6e40);
        local_25e0 = (undefined8 *)CONCAT71(local_25e0._1_7_,1);
        if (*(long **)(lVar16 + 0xe6e68) == (long *)0x0) {
          uVar8 = 0;
        }
        else {
          puVar14 = (undefined8 *)**(long **)(lVar16 + 0xe6e68);
          uVar8 = 0;
          if (puVar14 != (undefined8 *)0x0) {
            uVar8 = (**(code **)*puVar14)();
          }
        }
        local_25e0 = (undefined8 *)
                     (CONCAT62(local_25e0._2_6_,CONCAT11(uVar8,local_25e0._0_1_)) &
                     0xffffffffffff01ff);
        local_25f0 = PTR_DAT_04bb6ba0 + 0x10;
        cVar5 = *(char *)(*(long *)(lVar16 + 0xe6e50) + *(long *)(lVar16 + 0xe6e48) + 0x2f);
        FUN_02640184(&local_25f0);
        if (((cVar5 == '\x02') && (uVar9 = *(uint *)(*(long *)(param_1 + 8) + 0x508), uVar9 < 10))
           && ((&DAT_053fee41)[(ulong)uVar9 * 0xba0] != '\0')) {
          puVar1 = PTR_DAT_04bb2020 + 0x10;
          local_25e8 = "VisitQuestFurnitureTrade";
          local_25f0 = puVar1;
          iVar10 = FUN_021991a0(&DAT_053fe348 + (ulong)uVar9 * 0xba0,&local_25f0);
          if (iVar10 != 0) {
            ppuVar13 = &local_25f0;
            lVar16 = *(long *)PTR_DAT_04bb3968;
            *(undefined2 *)(lVar16 + 0xd90) = *param_2;
            *(undefined1 *)(lVar16 + 0xd92) = *(undefined1 *)(param_2 + 1);
            *(undefined1 *)(lVar16 + 0xd93) = *(undefined1 *)((long)param_2 + 3);
            *(undefined4 *)(lVar16 + 0xd94) = *(undefined4 *)(param_2 + 2);
            local_25e8 = "VisitNFurniture";
            DAT_05405f20 = param_3 & 1;
            *(uint *)(param_1 + 0x77f0) = *puVar2;
            local_25f0 = puVar1;
            goto LAB_01f300a4;
          }
        }
      }
    }
    else if (((puVar14 != (undefined8 *)0x0) && ((long *)puVar14[0x26] != (long *)0x0)) &&
            (lVar16 = (**(code **)(*(long *)puVar14[0x26] + 0x38))(), lVar16 != 0))
    goto LAB_01f2fce8;
  }
  sVar6 = *(short *)PTR_DAT_04bb6298;
  if (sVar6 != -1) {
    local_25f0 = (undefined *)CONCAT44(local_25f0._4_4_,7);
    puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar6 * 8);
    if (0xff < (uint)(int)sVar6) {
      puVar3 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar3 >> 7 & 1) != 0) {
      uVar4 = *(undefined4 *)(*(long *)(param_1 + 8) + 0x508);
      uVar11 = FUN_02917058(uVar4);
      if ((uVar11 & 1) == 0) {
        return 0;
      }
      local_2600 = (undefined *)((ulong)local_2600 & 0xffffffff00000000);
      uVar11 = FUN_02b67a30(&local_2600,uVar4);
      if ((uVar11 & 1) == 0) {
        return 0;
      }
      uVar11 = FUN_02664300((ulong)local_2600 & 0xffffffff);
      if ((uVar11 & 1) != 0) {
        return 0;
      }
      pcVar12 = (char *)FUN_0265c2a0(uVar4);
      if (pcVar12 == (char *)0x0) {
        return 0;
      }
      local_25e0 = (undefined8 *)CONCAT71(local_25e0._1_7_,1);
      local_25e8 = pcVar12;
      if (*(long **)(pcVar12 + 0x28) == (long *)0x0) {
        uVar8 = 0;
      }
      else {
        puVar14 = (undefined8 *)**(long **)(pcVar12 + 0x28);
        uVar8 = 0;
        if (puVar14 != (undefined8 *)0x0) {
          uVar8 = (**(code **)*puVar14)();
        }
      }
      local_25e0 = (undefined8 *)
                   (CONCAT62(local_25e0._2_6_,CONCAT11(uVar8,local_25e0._0_1_)) & 0xffffffffffff01ff
                   );
      local_25f0 = PTR_DAT_04bb67a0 + 0x10;
      cVar5 = *(char *)(*(long *)(pcVar12 + 0x10) + *(long *)(pcVar12 + 8) + 0x1267a);
      FUN_02640184(&local_25f0);
      if (cVar5 != '\0') {
        return 0;
      }
    }
  }
  if ((int)*puVar2 < 0x54) {
    if (*(int *)(*(long *)(param_1 + 8) + 0x750) != 0) {
      return 0;
    }
  }
  else {
    uVar9 = *puVar2 - 0x58;
    if (0xb < uVar9) {
      return 0;
    }
    if ((1 << (ulong)(uVar9 & 0x1f) & 0x805U) == 0) {
      return 0;
    }
  }
  iVar10 = FUN_0277d6c4(param_2);
  if (iVar10 == 0x33c0) {
    FUN_01ad5d04(&local_25f0,param_2);
    uVar11 = FUN_01aeaed0(&local_25f0);
    if ((uVar11 & 1) != 0) {
      return 0;
    }
  }
  FUN_01f300d0(&local_25f0);
  if (0 < (int)local_25f0) {
    lVar16 = 0;
    puVar14 = local_25e0;
    do {
      local_25e0 = *(undefined8 **)(local_25e8 + lVar16 * 8);
      lVar16 = lVar16 + 1;
      *local_25e0 = puVar14;
      puVar14 = local_25e0;
    } while (lVar16 < (int)local_25f0);
  }
  local_25f0 = (undefined *)((ulong)local_25f0 & 0xffffffff00000000);
  FUN_01521078(&local_25f0);
  if ((int)local_25f0 != 0) {
    uVar11 = 0;
    lVar16 = (long)(int)local_25f0 << 3;
    do {
      if (*(int *)(*(long *)(local_25e8 + uVar11 * 8) + 0x20) == DAT_05405f34._4_4_) {
        if ((uint)uVar11 < 200) {
          uVar15 = uVar11 >> 5 & 0x7ffffff;
          uVar9 = *(uint *)((long)&DAT_05454058 + uVar15 * 4);
          uVar7 = 1 << (ulong)((uint)uVar11 & 0x1f);
          if ((uVar9 & uVar7) != 0) {
            return 0;
          }
          *(uint *)((long)&DAT_05454058 + uVar15 * 4) = uVar9 | uVar7;
        }
        break;
      }
      uVar11 = uVar11 + 1;
      lVar16 = lVar16 + -8;
    } while (lVar16 != 0);
  }
  local_2600 = PTR_DAT_04bb2020 + 0x10;
  DAT_05405f20 = param_3 & 1;
  *(uint *)(param_1 + 0x77f0) = *puVar2;
  pcStack_25f8 = "TouchedFurniture";
LAB_01f300a4:
  FUN_01ea5c80(param_1,PTR_PTR_04bb2238,ppuVar13,0,0,PTR_DAT_04bb32e0);
  return 1;
}

