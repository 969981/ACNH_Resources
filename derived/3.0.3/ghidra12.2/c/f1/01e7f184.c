
void FUN_01e7f184(long param_1)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  char *pcVar10;
  undefined *puVar11;
  char *pcVar12;
  char *pcVar13;
  undefined8 *puVar14;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  byte local_48;
  
  plVar5 = *(long **)(*(long *)(param_1 + 8) + 0x68);
  plVar1 = plVar5 + 0x4f;
  lVar6 = (**(code **)(*plVar5 + 0x148))();
  if (*(int *)(param_1 + 0xb01c) == 1) {
    lVar9 = *(long *)PTR_DAT_04bb2720;
    if (lVar9 == 0) {
      puVar14 = &DAT_055c04a0;
    }
    else {
      puVar14 = &DAT_055c04a0;
      if (*(long *)(lVar9 + 0x330) != 0) {
        puVar14 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar9 + 0x338));
        iVar4 = FUN_006bd550(*puVar14,0);
        puVar14 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar4 != 0x758f7eaf) {
          puVar14 = &DAT_055c04a0;
        }
      }
    }
    FUN_017baf44(*(undefined4 *)(puVar14 + 7));
    uVar8 = FUN_021f2ed0(param_1 + 0xafcc,0);
    uVar3 = FUN_021f4f90(param_1 + 0xafcc,0,0);
    lVar9 = *(long *)(param_1 + 8);
    if ((((uVar8 & 1) == 0) && (*(int *)(lVar9 + 0x750) == 1)) ||
       ((uVar3 & 1) == 0 && *(int *)(lVar9 + 0x750) == 3)) {
      uVar3 = *(uint *)(lVar9 + 0x69c);
      *(uint *)(lVar9 + 0x69c) = uVar3 | 0x400;
      local_58 = (undefined *)CONCAT44(local_58._4_4_,*(undefined4 *)(lVar6 + 4));
      FUN_01e39778(*(undefined8 *)(param_1 + 8),plVar1,&local_58,0);
      uVar2 = *(uint *)(*(long *)(param_1 + 8) + 0x69c);
      *(uint *)(*(long *)(param_1 + 8) + 0x69c) =
           uVar2 & 0xfffff800 | uVar2 & 0x3ff | (uVar3 >> 10 & 1) << 10;
      *(undefined4 *)(param_1 + 0xb0b0) = 2;
      return;
    }
    return;
  }
  if (*(int *)(param_1 + 0xb01c) != 0) {
    return;
  }
  lVar9 = *(long *)(param_1 + 8);
  pcVar13 = PTR_DAT_04bc2b20;
  if (1 < *(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476)) goto LAB_01e7f378;
  if (lVar9 == 0) {
LAB_01e7f368:
    pcVar10 = (char *)0x0;
  }
  else {
    uVar3 = *(uint *)(lVar9 + 0x508);
    if (uVar3 != 0xffffffff) {
      puVar11 = &DAT_053fe348 + (ulong)uVar3 * 0xba0;
      if (9 < uVar3) {
        puVar11 = &DAT_053fe348;
      }
      pcVar13 = puVar11 + 0x658;
      goto LAB_01e7f378;
    }
    uVar3 = *(uint *)(lVar9 + 0x50c);
    if (uVar3 == 0xffffffff) goto LAB_01e7f368;
    pcVar12 = &DAT_05454358 + (ulong)uVar3 * 0x2d8;
    if (0x10 < uVar3) {
      pcVar12 = &DAT_05454358;
    }
    pcVar10 = (char *)0x0;
    if (*pcVar12 != '\0') {
      pcVar10 = pcVar12;
    }
  }
  if (pcVar10 != (char *)0x0) {
    pcVar13 = pcVar10 + 0x90;
  }
LAB_01e7f378:
  if (*(int *)(lVar9 + 0x750) == 1) {
    local_50 = 0;
    lVar9 = *(long *)PTR_DAT_04bb2720;
    if (lVar9 == 0) {
      puVar14 = &DAT_055c04a0;
    }
    else {
      puVar14 = &DAT_055c04a0;
      if (*(long *)(lVar9 + 0x330) != 0) {
        puVar14 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar9 + 0x338));
        iVar4 = FUN_006bd550(*puVar14,0);
        puVar14 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar4 != 0x758f7eaf) {
          puVar14 = &DAT_055c04a0;
        }
      }
    }
    local_4c = *(undefined4 *)(puVar14 + 7);
    local_48 = FUN_017baf44();
    local_48 = local_48 & 1;
    local_58 = PTR_DAT_04bb3140 + 0x10;
    uVar7 = FUN_01a5190c(&local_58,1,pcVar13 + 0x60,0);
    uVar8 = FUN_0277d7b4(uVar7,pcVar13 + 0x50);
    if ((uVar8 & 1) == 0) {
      uVar7 = FUN_01a5190c(&local_58,0,pcVar13 + 0x60,0);
      uVar8 = FUN_0277d7b4(uVar7,pcVar13 + 0x50);
      if ((uVar8 & 1) == 0) {
        uVar3 = *(uint *)(*(long *)(param_1 + 8) + 0x69c);
        *(uint *)(*(long *)(param_1 + 8) + 0x69c) = uVar3 | 0x400;
        local_58 = (undefined *)CONCAT44(local_58._4_4_,*(undefined4 *)(lVar6 + 4));
        FUN_01e39778(*(undefined8 *)(param_1 + 8),plVar1,&local_58,0);
        uVar2 = *(uint *)(*(long *)(param_1 + 8) + 0x69c);
        *(uint *)(*(long *)(param_1 + 8) + 0x69c) =
             uVar2 & 0xfffff800 | uVar2 & 0x3ff | (uVar3 >> 10 & 1) << 10;
        *(undefined1 *)(param_1 + 0x7878) = 1;
        FUN_01e76e90(param_1);
        *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x56c) = 0;
      }
    }
  }
  return;
}

