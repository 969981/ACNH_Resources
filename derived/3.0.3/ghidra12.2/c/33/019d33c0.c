
ulong FUN_019d33c0(uint *param_1,undefined8 param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined1 *__src;
  long lVar11;
  uint uVar12;
  int iVar13;
  undefined1 *puVar14;
  undefined *local_88;
  undefined1 *local_80;
  int local_78;
  undefined1 auStack_74 [31];
  undefined1 local_55;
  
  uVar6 = FUN_0277d6c4(param_2);
  puVar5 = PTR_DAT_04bb4008;
  uVar7 = FUN_01a1159c(*(undefined8 *)PTR_DAT_04bb4008,uVar6);
  local_88 = (undefined *)CONCAT44(local_88._4_4_,uVar7);
  if (uVar7 < 0x20) {
    puVar9 = *(undefined8 **)(PTR_DAT_04bbf050 + (ulong)uVar7 * 8 + 0x110);
  }
  else {
    puVar9 = &DAT_0407ebb1;
  }
  uVar8 = FUN_006bd550(puVar9,0);
  puVar4 = PTR_PTR_04bb2238;
  uVar7 = *param_1;
  if (uVar7 != 0) {
    lVar11 = *(long *)(param_1 + 2);
    if ((int)uVar7 < 2) {
      uVar12 = 0;
    }
    else {
      uVar12 = 0;
      iVar13 = uVar7 - 1;
      do {
        uVar1 = iVar13 + uVar12;
        if ((int)uVar1 < 0 != SCARRY4(iVar13,uVar12)) {
          uVar1 = uVar1 + 1;
        }
        uVar3 = (int)uVar1 >> 1;
        uVar1 = *(uint *)(lVar11 + ((long)((ulong)uVar1 << 0x20) >> 0x21) * 0x20 + 0x18);
        if (uVar1 == uVar8) goto joined_r0x019d34d8;
        if (uVar1 < uVar8) {
          uVar12 = uVar3 + 1;
        }
        else {
          iVar13 = uVar3 - 1;
        }
      } while ((int)uVar12 < iVar13);
    }
    uVar3 = uVar12;
    if (*(uint *)(lVar11 + (long)(int)uVar12 * 0x20 + 0x18) == uVar8) {
joined_r0x019d34d8:
      if (-1 < (int)uVar3) {
        if (uVar7 <= uVar3) {
          uVar3 = 0;
        }
                    /* WARNING: Could not recover jumptable at 0x019d34d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar10 = (**(code **)(lVar11 + (ulong)uVar3 * 0x20))();
        return uVar10;
      }
    }
  }
  local_55 = 0;
  local_78 = 0x20;
  local_88 = PTR_DAT_04bb2a08 + 0x10;
  local_80 = auStack_74;
  (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
  puVar14 = *(undefined1 **)(puVar4 + 8);
  if (auStack_74 != puVar14) {
    (**(code **)(*(long *)puVar4 + 0x18))(puVar4);
    lVar11 = 0;
    do {
      if (*(char *)(*(long *)(puVar4 + 8) + lVar11) == '\0') goto LAB_019d3580;
      lVar2 = *(long *)(puVar4 + 8) + lVar11;
      if (*(char *)(lVar2 + 1) == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_019d3580;
      }
      if (*(char *)(lVar2 + 2) == '\0') {
        lVar11 = lVar11 + 2;
        goto LAB_019d3580;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_019d3580:
    iVar13 = (int)lVar11;
    if (local_78 <= (int)lVar11) {
      iVar13 = local_78 + -1;
    }
    memcpy(auStack_74,puVar14,(long)iVar13);
    auStack_74[iVar13] = 0;
  }
  local_88 = PTR_DAT_04bb2028 + 0x10;
  __src = (undefined1 *)FUN_01a113c0(*(undefined8 *)puVar5,uVar6);
  puVar14 = local_80;
  if ((__src != (undefined1 *)0x0) && (local_80 != __src)) {
    lVar11 = 0;
    do {
      if (__src[lVar11] == '\0') goto LAB_019d361c;
      if (__src[lVar11 + 1] == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_019d361c;
      }
      if (__src[lVar11 + 2] == '\0') {
        lVar11 = lVar11 + 2;
        goto LAB_019d361c;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_019d361c:
    iVar13 = (int)lVar11;
    if (local_78 <= (int)lVar11) {
      iVar13 = local_78 + -1;
    }
    memcpy(local_80,__src,(long)iVar13);
    puVar14[iVar13] = 0;
  }
  (**(code **)(local_88 + 0x18))(&local_88);
  uVar8 = FUN_006bd550(local_80,0);
  uVar7 = param_1[4];
  if (uVar7 != 0) {
    lVar11 = *(long *)(param_1 + 6);
    if ((int)uVar7 < 2) {
      uVar12 = 0;
    }
    else {
      uVar12 = 0;
      iVar13 = uVar7 - 1;
      do {
        uVar1 = iVar13 + uVar12;
        if ((int)uVar1 < 0 != SCARRY4(iVar13,uVar12)) {
          uVar1 = uVar1 + 1;
        }
        uVar3 = (int)uVar1 >> 1;
        uVar1 = *(uint *)(lVar11 + ((long)((ulong)uVar1 << 0x20) >> 0x21) * 0x20 + 0x18);
        if (uVar1 == uVar8) goto joined_r0x019d36f8;
        if (uVar1 < uVar8) {
          uVar12 = uVar3 + 1;
        }
        else {
          iVar13 = uVar3 - 1;
        }
      } while ((int)uVar12 < iVar13);
    }
    uVar3 = uVar12;
    if (*(uint *)(lVar11 + (long)(int)uVar12 * 0x20 + 0x18) == uVar8) {
joined_r0x019d36f8:
      if (-1 < (int)uVar3) {
        if (uVar7 <= uVar3) {
          uVar3 = 0;
        }
        uVar8 = (**(code **)(lVar11 + (ulong)uVar3 * 0x20))();
        uVar7 = 0;
        goto LAB_019d3700;
      }
    }
  }
  uVar7 = 1;
LAB_019d3700:
  return (ulong)(uVar7 | uVar8 & 1);
}

