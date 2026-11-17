
void FUN_02ce2510(long param_1,uint param_2)

{
  undefined4 *puVar1;
  long *plVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined *puVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  long lVar9;
  int iVar10;
  undefined8 *puVar11;
  int iVar12;
  ulong uVar13;
  undefined4 *puVar14;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined8 local_6c;
  uint local_64;
  
  if (param_2 == 0xffffffff) {
    return;
  }
  puVar1 = (undefined4 *)(param_1 + 0x68a64);
  puVar14 = puVar1 + (ulong)param_2 * 4;
  if (9 < param_2) {
    puVar14 = puVar1;
  }
  switch(*puVar14) {
  case 0:
    puVar14 = puVar1 + (ulong)param_2 * 4;
    if (9 < param_2) {
      puVar14 = puVar1;
    }
    if (((-1 < (int)puVar14[1]) && (iVar10 = *(int *)(param_1 + 0x68a5c), -1 < iVar10)) &&
       (*(int *)(param_1 + 0x20dc0) != 0)) {
      puVar11 = *(undefined8 **)(param_1 + 0x20dc8);
      lVar9 = (long)*(int *)(param_1 + 0x20dc0) << 3;
      iVar12 = -1;
      do {
        if (*(int *)*puVar11 == puVar14[1]) {
          iVar12 = iVar10;
          break;
        }
        puVar11 = puVar11 + 1;
        iVar10 = iVar10 + 1;
        lVar9 = lVar9 + -8;
      } while (lVar9 != 0);
      goto LAB_02ce2758;
    }
    break;
  case 1:
    puVar14 = puVar1 + (ulong)param_2 * 4;
    if (9 < param_2) {
      puVar14 = puVar1;
    }
    iVar10 = puVar14[1];
    puVar14 = puVar1 + (ulong)param_2 * 4;
    if (9 < param_2) {
      puVar14 = puVar1;
    }
    if ((-1 < iVar10) && (-1 < *(int *)(param_1 + 0x68a58))) {
      plVar2 = (long *)(param_1 + 0x150);
      local_6c = CONCAT44(local_6c._4_4_,(uint)*(byte *)(puVar14 + 3));
      puVar8 = (uint *)(**(code **)(*(long *)(param_1 + 0x150) + 0x40))(plVar2);
      uVar4 = *puVar8;
      if (0 < (int)uVar4) {
        uVar13 = 0;
        do {
          lVar9 = (**(code **)(*plVar2 + 0x40))(plVar2);
          if (**(int **)(*(long *)(lVar9 + 8) + uVar13 * 8) == iVar10) {
            uVar6 = (uint)local_6c;
            lVar9 = (**(code **)(*plVar2 + 0x40))(plVar2);
            if (uVar6 == *(byte *)(*(long *)(*(long *)(lVar9 + 8) + uVar13 * 8) + 0xc)) {
              if ((int)uVar13 < 0) goto switchD_02ce257c_default;
              iVar12 = *(int *)(param_1 + 0x68a58) + (int)uVar13;
              break;
            }
          }
          uVar13 = uVar13 + 1;
          iVar12 = -1;
        } while (uVar4 != uVar13);
        goto LAB_02ce2758;
      }
    }
    break;
  case 2:
    if ((param_2 != 0xffffffff) && (-1 < *(int *)(param_1 + 0x68a54))) {
      local_6c = 0xfffe;
      local_64 = param_2;
      FUN_0277d4ac(&local_6c);
      puVar5 = PTR_DAT_04bb37e0;
      uVar4 = *(uint *)(param_1 + 0x148);
      if (0 < (int)uVar4) {
        uVar13 = 0;
        iVar12 = -1;
        puVar14 = (undefined4 *)(param_1 + 0xf8);
        do {
          uVar6 = local_64;
          puVar3 = puVar14;
          if (9 < uVar13) {
            puVar3 = (undefined4 *)(param_1 + 0xf8);
          }
          if ((long)*(int *)(param_1 + 0x148) <= (long)uVar13) {
            puVar3 = (undefined4 *)puVar5;
          }
          local_74 = *puVar3;
          uStack_70 = puVar3[1];
          uVar7 = FUN_02cd9040(&local_74);
          if (uVar6 == uVar7) {
            iVar12 = *(int *)(param_1 + 0x68a54) + (int)uVar13;
            break;
          }
          uVar13 = uVar13 + 1;
          puVar14 = puVar14 + 2;
        } while (uVar4 != uVar13);
        goto LAB_02ce2758;
      }
    }
    break;
  case 3:
    iVar12 = *(int *)(param_1 + 0x68a50);
    goto LAB_02ce2758;
  }
switchD_02ce257c_default:
  iVar12 = -1;
LAB_02ce2758:
  puVar14 = puVar1 + (ulong)param_2 * 4;
  if (9 < param_2) {
    puVar14 = puVar1;
  }
  puVar14[2] = iVar12;
  return;
}

