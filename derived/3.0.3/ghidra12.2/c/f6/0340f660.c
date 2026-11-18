
void FUN_0340f660(long param_1,long param_2,long *param_3)

{
  undefined8 *puVar1;
  ushort uVar2;
  undefined4 uVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  uint uVar8;
  int *piVar9;
  ulong uVar10;
  int iVar11;
  undefined *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined **local_a0;
  long *plStack_98;
  undefined *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  uint local_4c;
  undefined4 uStack_48;
  
  uVar3 = (**(code **)(*param_3 + 0x30))(param_3);
  local_d8 = CONCAT62(local_d8._2_6_,(short)uVar3);
  local_e0 = PTR_DAT_04bc06f8 + 0x10;
  plStack_98 = (long *)FUN_01b87300(&local_e0);
  local_a0 = &PTR_LAB_048f9770;
  if ((param_2 == 0) || (((char)*plStack_98 == '\0' && (*(short *)PTR_DAT_04bb37e0 == -2)))) {
    iVar11 = -1;
  }
  else {
    iVar11 = 0;
    iVar5 = 0;
    do {
      if ((*(int *)(param_2 + 8 + (long)iVar5 * 0x1a8 + 0x1a0) == 0) &&
         (lVar4 = param_2 + 8 + (long)iVar5 * 0x1a8, (*(byte *)(lVar4 + 0x18) >> 1 & 1) == 0)) {
        FUN_03412d40(lVar4,&local_a0,PTR_DAT_04bb37e0,7);
        goto LAB_0340f758;
      }
      iVar5 = iVar5 + 1;
      iVar11 = iVar11 + 1;
    } while (iVar5 != 0x10e);
    iVar11 = -1;
  }
LAB_0340f758:
  if ((*(int *)(param_1 + 0x18) != iVar11) && (*(int *)(param_1 + 0x18) = iVar11, iVar11 != -1)) {
    *(undefined4 *)(param_1 + 0x1c) = 1;
  }
  local_e0 = (undefined *)0x0;
  local_d8 = 0x3f80000000000000;
  local_d0 = 0;
  uStack_c8 = 0x3f80000000000000;
  local_c0 = 0;
  uStack_b8 = 0x3f80000000000000;
  local_b0 = 0;
  uStack_a8 = 0x3f80000000000000;
  FUN_0344aea0(&local_e0,uVar3);
  plVar7 = *(long **)(param_1 + 0x28);
  uVar6 = *(uint *)(plVar7 + 1);
  if ((int)uVar6 < 1) {
    uVar8 = 0xffffffff;
  }
  else {
    uVar10 = 0;
    uVar8 = 0xffffffff;
    piVar9 = (int *)(plVar7[2] + 0xc);
    do {
      if (*piVar9 == 0) {
        uVar8 = (uint)uVar10;
        if (*plVar7 != 0) {
          if (uVar6 <= uVar8) {
            uVar10 = 0;
          }
          puVar1 = (undefined8 *)(plVar7[2] + uVar10 * 0x10);
          local_a0 = (undefined **)*puVar1;
          local_70 = local_c0;
          uStack_68 = uStack_b8;
          local_60 = local_b0;
          uStack_58 = uStack_a8;
          local_90 = local_e0;
          uStack_88 = local_d8;
          local_80 = local_d0;
          uStack_78 = uStack_c8;
          local_50 = (undefined1)plVar7[3];
          uStack_48 = 1;
          plStack_98 = param_3;
          local_4c = uVar8;
          FUN_030af4a0(*plVar7,&local_a0);
          *(uint *)(puVar1 + 1) = uVar8;
          *(undefined4 *)((long)puVar1 + 0xc) = 1;
        }
        break;
      }
      uVar10 = uVar10 + 1;
      piVar9 = piVar9 + 4;
    } while (uVar6 != uVar10);
  }
  uVar2 = *(ushort *)(param_1 + 0x8c);
  *(uint *)(param_1 + 0x20) = uVar8;
  *(undefined1 *)(param_1 + 0x24) = 0;
  uVar6 = uVar2 | 1;
  *(short *)(param_1 + 0x8c) = (short)uVar6;
  if (*(int *)(param_1 + 0x38) == 1) {
    *(ushort *)(param_1 + 0x8c) = uVar2 | 3;
  }
  else {
    uVar6 = 0xffffffffU >> (ulong)(~*(uint *)(param_1 + 0x88) & 0x1f) & uVar6;
    uVar6 = uVar6 - (uVar6 >> 1 & 0x55555555);
    uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
    uVar6 = uVar6 + (uVar6 >> 4) & 0xf0f0f0f;
    uVar6 = uVar6 + (uVar6 >> 8);
    if ((uVar6 + (uVar6 >> 0x10) & 0x3f) == 0) {
      uVar6 = uVar2 | 3;
      *(short *)(param_1 + 0x8c) = (short)uVar6;
    }
    else {
      FUN_03ebb160(param_1 + 0x30,1);
      uVar6 = *(ushort *)(param_1 + 0x8c) | 2;
      *(short *)(param_1 + 0x8c) = (short)uVar6;
      if (*(int *)(param_1 + 0x38) == 1) {
        return;
      }
    }
    uVar6 = uVar6 & 0xffffffffU >> (ulong)(~*(uint *)(param_1 + 0x88) & 0x1f);
    uVar6 = uVar6 - (uVar6 >> 1 & 0x5555);
    uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
    uVar6 = uVar6 + (uVar6 >> 4) & 0xf0f0f0f;
    uVar6 = uVar6 + (uVar6 >> 8);
    if ((uVar6 + (uVar6 >> 0x10) & 0x3f) != 0) {
      FUN_03ebb160(param_1 + 0x30,1);
    }
  }
  return;
}

