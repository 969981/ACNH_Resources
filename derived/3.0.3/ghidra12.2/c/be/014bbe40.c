
void FUN_014bbe40(undefined4 *param_1)

{
  uint *puVar1;
  short sVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  undefined **local_60;
  undefined4 *puStack_58;
  undefined4 local_28;
  undefined4 local_24;
  
  puVar4 = PTR_DAT_04bb3968;
  sVar2 = *(short *)PTR_DAT_04bb6298;
  if (sVar2 == -1) {
LAB_014bbebc:
    uVar6 = FUN_0180c600();
    if ((uVar6 & 1) == 0) goto LAB_014bbf0c;
  }
  else {
    local_60 = (undefined **)CONCAT44(local_60._4_4_,0x1a);
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
    if (0xff < (uint)(int)sVar2) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x1a & 1) == 0) goto LAB_014bbebc;
  }
  local_24 = *param_1;
  lVar9 = *(long *)puVar4;
  puStack_58 = &local_24;
  local_60 = &PTR_FUN_04a72fe0;
  iVar8 = *(int *)(lVar9 + 0xb88);
  if (iVar8 != 0) {
    lVar10 = (long)iVar8 << 3;
    puVar7 = *(undefined8 **)(lVar9 + 0xb90);
    do {
      (*(code *)*local_60)(&local_60,*puVar7);
      lVar10 = lVar10 + -8;
      puVar7 = puVar7 + 1;
    } while (lVar10 != 0);
  }
LAB_014bbf0c:
  puVar3 = PTR_DAT_04bb2720;
  lVar9 = *(long *)PTR_DAT_04bb2720;
  iVar8 = 0;
  if (lVar9 != 0) {
    if (*(long *)(lVar9 + 0x330) == 0) {
      iVar8 = 0;
    }
    else {
      puVar7 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar9 + 0x338));
      iVar5 = FUN_006bd550(*puVar7,0);
      iVar8 = 0;
      if (iVar5 == 0x758f7eaf) {
        iVar8 = 0;
        if (*(long *)puVar3 != 0) {
          lVar9 = *(long *)(*(long *)puVar3 + 0x330);
          iVar8 = 0;
          if (lVar9 != 0) {
            iVar8 = *(int *)(lVar9 + 0x244);
          }
        }
      }
    }
  }
  if (*(int *)(PTR_DAT_04bbe4b0 + 0xcc) == iVar8) {
    local_28 = *param_1;
    lVar9 = *(long *)puVar4;
    puStack_58 = &local_28;
    local_60 = &PTR_FUN_04a72fe0;
    iVar8 = *(int *)(lVar9 + 0xb88);
    if (iVar8 != 0) {
      lVar10 = (long)iVar8 << 3;
      puVar7 = *(undefined8 **)(lVar9 + 0xb90);
      do {
        (*(code *)*local_60)(&local_60,*puVar7);
        lVar10 = lVar10 + -8;
        puVar7 = puVar7 + 1;
      } while (lVar10 != 0);
    }
  }
  return;
}

