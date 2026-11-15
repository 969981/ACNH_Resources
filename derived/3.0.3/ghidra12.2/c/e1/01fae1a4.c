
void FUN_01fae1a4(long param_1)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  byte bVar4;
  short sVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  short sVar11;
  long lVar12;
  float fVar13;
  undefined4 local_94;
  undefined2 local_90 [2];
  ulong local_8c;
  float local_84;
  undefined *local_80;
  undefined *puStack_78;
  undefined8 local_70;
  undefined *local_68;
  undefined8 local_60;
  int local_54;
  
  puVar3 = PTR_DAT_04bb2720;
  local_70 = 0;
  local_80 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_78 = PTR_DAT_04bb2010 + 0x10;
  local_60 = 0;
  local_68 = puStack_78;
  if (((*(long *)PTR_DAT_04bb5ce0 == 0) || (lVar9 = *(long *)PTR_DAT_04bb2720, lVar9 == 0)) ||
     (*(long *)(lVar9 + 0x330) == 0)) {
LAB_01fae26c:
    local_70 = *(undefined8 *)(*(long *)PTR_DAT_04bb59d8 + 0x50);
    local_60 = *(undefined8 *)(*(long *)PTR_DAT_04bb59d8 + 0x60);
  }
  else {
    puVar7 = (undefined8 *)
             (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                       (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar9 + 0x338));
    iVar6 = FUN_006bd550(*puVar7,0);
    if (((iVar6 != 0x758f7eaf) || (*(long *)puVar3 == 0)) ||
       ((lVar9 = *(long *)(*(long *)puVar3 + 0x330), lVar9 == 0 || (*(int *)(lVar9 + 0x244) == 0))))
    goto LAB_01fae26c;
    FUN_01811430(&local_80);
  }
  puVar3 = PTR_DAT_04bb27f8;
  local_8c = (ulong)(uint)local_8c;
  lVar9 = *(long *)PTR_DAT_04bb27f8;
  if (lVar9 == 0) {
    return;
  }
  lVar12 = *(long *)(param_1 + 8);
  lVar1 = lVar12 + 0x3e0;
  local_90[0] = FUN_0376baa0(lVar1);
  lVar10 = *(long *)PTR_DAT_04bb4130;
  bVar4 = 0;
  if (lVar10 != 0) {
    (**(code **)(*(long *)(lVar12 + 0x3e0) + 0x18))(lVar1);
    local_54 = FUN_006bd550(*(undefined8 *)(lVar12 + 1000),0);
    lVar10 = FUN_0079e4d0(lVar10,&local_54);
    if (lVar10 == 0) {
      bVar4 = 0;
    }
    else {
      bVar4 = FUN_03770770(local_90,0);
    }
  }
  uVar8 = FUN_01fae650(param_1);
  if ((uVar8 & 1) == 0) {
    lVar9 = *(long *)puVar3;
    if (lVar9 == 0) {
LAB_01fae4c8:
      if (((bVar4 & 1) != 0) &&
         (uVar8 = FUN_037385c0(*(undefined8 *)PTR_DAT_04bb4e28,&local_54,lVar1), (uVar8 & 1) != 0))
      {
        if (local_54 == 3) {
          local_84 = (float)local_60._4_4_ * 5.0;
          local_8c = CONCAT44(local_8c._4_4_,(float)(int)local_70 * 5.0 + 5.0);
          goto LAB_01fae560;
        }
        if (local_54 == 2) {
          local_84 = (float)local_60._4_4_ * 5.0;
          fVar13 = (float)(int)local_60 * 5.0;
          goto LAB_01fae558;
        }
        if (local_54 == 1) goto LAB_01fae4a4;
      }
      lVar9 = *(long *)(*(long *)(param_1 + 8) + 0x68);
      local_84 = *(float *)(lVar9 + 0x280);
      local_8c = *(ulong *)(lVar9 + 0x278);
      goto LAB_01fae560;
    }
    sVar5 = FUN_0376baa0(*(long *)(param_1 + 8) + 0x3e0);
    if (((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
        ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)) || (*(long *)PTR_DAT_04bc1530 == 0)) {
      sVar11 = *(short *)(lVar9 + 0x2c);
      if ((*(ushort *)(lVar9 + 0x28) & 0x80) != 0) {
        sVar11 = -1;
      }
    }
    else {
      lVar9 = *(long *)(*(long *)PTR_DAT_04bc1530 + 0x10);
      if ((*(long **)(lVar9 + 0x11b0) == (long *)0x0) ||
         (puVar7 = (undefined8 *)**(long **)(lVar9 + 0x11b0), puVar7 == (undefined8 *)0x0)) {
        sVar11 = *(short *)(*(long *)(lVar9 + 0x1198) + *(long *)(lVar9 + 0x1190) + 2);
      }
      else {
        uVar8 = (**(code **)*puVar7)();
        sVar11 = *(short *)(*(long *)(lVar9 + 0x1198) + *(long *)(lVar9 + 0x1190) + 2);
        if ((((uVar8 & 1) != 0) && (*(long *)(lVar9 + 0x11b0) != 0)) &&
           (puVar7 = *(undefined8 **)(*(long *)(lVar9 + 0x11b0) + 8), puVar7 != (undefined8 *)0x0))
        {
          (**(code **)*puVar7)();
        }
      }
    }
    if ((sVar11 == -1) || (sVar11 != sVar5)) goto LAB_01fae4c8;
LAB_01fae4a4:
    fVar13 = (float)(int)local_60 * 5.0;
    local_84 = (float)local_70._4_4_ * 5.0 + 5.0;
  }
  else {
    if (((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
        ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)) || (*(long *)PTR_DAT_04bc1530 == 0)) {
      sVar5 = *(short *)(lVar9 + 0x2c);
      if ((*(ushort *)(lVar9 + 0x28) & 0x80) != 0) {
        sVar5 = -1;
      }
    }
    else {
      lVar9 = *(long *)(*(long *)PTR_DAT_04bc1530 + 0x10);
      if ((*(long **)(lVar9 + 0x11b0) == (long *)0x0) ||
         (puVar7 = (undefined8 *)**(long **)(lVar9 + 0x11b0), puVar7 == (undefined8 *)0x0)) {
        sVar5 = *(short *)(*(long *)(lVar9 + 0x1198) + *(long *)(lVar9 + 0x1190) + 2);
      }
      else {
        uVar8 = (**(code **)*puVar7)();
        sVar5 = *(short *)(*(long *)(lVar9 + 0x1198) + *(long *)(lVar9 + 0x1190) + 2);
        if ((((uVar8 & 1) != 0) && (*(long *)(lVar9 + 0x11b0) != 0)) &&
           (puVar7 = *(undefined8 **)(*(long *)(lVar9 + 0x11b0) + 8), puVar7 != (undefined8 *)0x0))
        {
          (**(code **)*puVar7)();
        }
      }
    }
    if ((sVar5 == -1 & (bVar4 ^ 0xff)) == 0) {
      fVar13 = (float)(int)local_70 * 5.0 + 5.0;
    }
    else {
      iVar2 = (int)local_70 + (int)local_60;
      iVar6 = iVar2 + 2;
      if (-1 < iVar2 + 1) {
        iVar6 = iVar2 + 1;
      }
      fVar13 = (float)(iVar6 >> 1) * 5.0;
    }
    local_84 = (float)local_70._4_4_ * 5.0 + 5.0;
  }
LAB_01fae558:
  local_8c = CONCAT44(local_8c._4_4_,fVar13);
LAB_01fae560:
  FUN_01e57c78(*(undefined8 *)(param_1 + 0x10),PTR_DAT_04bb37e0,0,1);
  *(uint *)(param_1 + 0xafb0) = *(uint *)(param_1 + 0xafb0) & 0xf7ffffff;
  *(ulong *)(param_1 + 0xad58) = *(ulong *)(param_1 + 0xad58) | 0x1000;
  local_94 = 0x80000000;
  FUN_01e39778(*(undefined8 *)(param_1 + 8),&local_8c,&local_94,0);
  *(undefined4 *)(param_1 + 0x12048) = 0;
  **(undefined1 **)(param_1 + 0x12010) = 0;
  *(undefined4 *)(param_1 + 0xaf8c) = 0;
  return;
}

