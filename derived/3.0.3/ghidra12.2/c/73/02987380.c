
void FUN_02987380(uint *param_1)

{
  ulong *puVar1;
  long lVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 uVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  uint local_60;
  uint local_5c;
  undefined *local_58;
  long local_50;
  ulong local_48;
  int local_28;
  uint local_24;
  
  puVar5 = PTR_DAT_04bbde00;
  if (((*PTR_DAT_04bbde00 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_0523c4c0), iVar8 != 0)) {
    FUN_016cb6ac(&DAT_0523c4b0);
    __cxa_guard_release(&DAT_0523c4c0);
  }
  puVar4 = PTR_DAT_04bbddf8;
  uVar7 = *param_1;
  if (*(uint *)PTR_DAT_04bbddf8 <= uVar7) {
    uVar7 = 0;
  }
  uVar9 = *(undefined4 *)(*(long *)(PTR_DAT_04bbddf8 + 8) + (long)(int)uVar7 * 4);
  uVar10 = FUN_01810f30();
  uVar6 = (undefined1)uVar9;
  if ((uVar10 & 1) == 0) {
    if (DAT_05aed670 == 0) {
      puVar14 = &DAT_055c04a0;
    }
    else {
      puVar14 = &DAT_055c04a0;
      if (*(long *)(DAT_05aed670 + 0x330) != 0) {
        puVar14 = (undefined8 *)
                  (**(code **)(*DAT_05aed668 + 0x18))
                            (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar8 = FUN_006bd550(*puVar14,0);
        puVar14 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar8 != 0x758f7eaf) {
          puVar14 = &DAT_055c04a0;
        }
      }
    }
    iVar8 = *(int *)(puVar14 + 7);
    local_28 = iVar8;
    uVar10 = FUN_017f37d0(iVar8);
    if ((uVar10 & 1) == 0) {
      if (iVar8 < 0x6168e44d) {
        if (((iVar8 == -0x11ea17dc) || (iVar8 == -0x917edf9)) || (iVar8 == -0x8fb780d))
        goto LAB_02987568;
      }
      else if (((iVar8 == 0x6168e44d) || (iVar8 == 0x6c9ebc71)) || (iVar8 == 0x65b7732d)) {
LAB_02987568:
        if (DAT_05574040 == 0) {
          return;
        }
        lVar11 = FUN_026f480c();
        if (lVar11 == 0) {
          return;
        }
        uVar7 = FUN_017f4660(&local_28);
        lVar13 = lVar11 + 0x118 + (ulong)uVar7 * 0x2488;
        if (5 < uVar7) {
          lVar13 = lVar11 + 0x118;
        }
        lVar11 = *(long *)(lVar13 + 0x28);
        if (lVar11 == 0) goto LAB_029876fc;
        puVar14 = *(undefined8 **)(lVar11 + 0x10);
        goto joined_r0x029875ac;
      }
      uVar10 = FUN_016cf9f0();
      if ((uVar10 & 1) != 0) {
        local_5c = *param_1;
        FUN_016cb384(&local_5c);
        return;
      }
      if (iVar8 < 0x2922957e) {
        if ((iVar8 == 0x80e20d8) || (iVar8 == 0xb6a5301)) goto LAB_029877ac;
        iVar3 = 0x1490248c;
      }
      else {
        if ((iVar8 == 0x2922957e) || (iVar8 == 0x7a616e2f)) goto LAB_029877ac;
        iVar3 = 0x51b9e069;
      }
      if (iVar8 != iVar3) {
        local_60 = *param_1;
        FUN_03784770(&local_60);
        return;
      }
LAB_029877ac:
      uVar9 = FUN_017f4660(&local_28);
      local_58 = (undefined *)CONCAT44(local_58._4_4_,uVar9);
      lVar11 = FUN_02643020();
      if (lVar11 == 0) {
        return;
      }
      local_48 = local_48 & 0xffffffffffffff00;
      lVar13 = lVar11 + 0xe0 + ((ulong)local_58 & 0xffffffff) * 0x2488;
      if (5 < (uint)local_58) {
        lVar13 = lVar11 + 0xe0;
      }
      local_50 = lVar13;
      if (*(long *)(lVar13 + 0x28) == 0) {
        uVar6 = 0;
      }
      else {
        puVar14 = *(undefined8 **)(*(long *)(lVar13 + 0x28) + 0x10);
        uVar6 = 0;
        if (puVar14 != (undefined8 *)0x0) {
          uVar6 = (**(code **)*puVar14)();
        }
      }
      local_48 = CONCAT62(local_48._2_6_,CONCAT11(uVar6,(undefined1)local_48)) & 0xffffffffffff01ff;
      local_58 = PTR_DAT_04bbc590 + 0x10;
      FUN_02640280(lVar13,0x6c24);
      lVar11 = *(long *)(lVar13 + 8);
      lVar13 = *(long *)(lVar13 + 0x10);
      if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_0523c4c0), iVar8 != 0)) {
        FUN_016cb6ac(&DAT_0523c4b0);
        __cxa_guard_release(&DAT_0523c4c0);
      }
      uVar7 = *param_1;
      if (*(uint *)puVar4 <= uVar7) {
        uVar7 = 0;
      }
      *(char *)(lVar13 + lVar11 + 0x6c0c) =
           (char)*(undefined4 *)(*(long *)(puVar4 + 8) + (long)(int)uVar7 * 4);
      FUN_02640184(&local_58);
      return;
    }
    uVar9 = FUN_017f6cc8(iVar8);
    local_24 = FUN_017f4660(&local_28);
    local_58 = (undefined *)CONCAT44(local_58._4_4_,uVar9);
    lVar11 = *(long *)PTR_DAT_04bb46b0;
    if (lVar11 == 0) {
      return;
    }
    puVar14 = *(undefined8 **)(lVar11 + 0x10);
    if ((*(byte *)(lVar11 + 0x453) & 1) == 0) {
      lVar11 = (**(code **)(*(long *)*puVar14 + 0x38))();
      if (lVar11 == 0) {
        return;
      }
      lVar11 = lVar11 + 0x70;
    }
    else {
      if (puVar14 == (undefined8 *)0x0) {
        return;
      }
      if ((long *)puVar14[0x26] == (long *)0x0) {
        return;
      }
      lVar11 = (**(code **)(*(long *)puVar14[0x26] + 0x38))();
      if (lVar11 == 0) {
        return;
      }
    }
    if (7 < (uint)local_58) {
      return;
    }
    lVar2 = lVar11 + 0x119228 + ((ulong)local_58 & 0xffffffff) * 0xfa08;
    if (7 < (uint)local_58) {
      lVar2 = lVar11 + 0x119228;
    }
    lVar13 = lVar2 + 0x1df8 + (ulong)local_24 * 0x2488;
    if (5 < local_24) {
      lVar13 = lVar2 + 0x1df8;
    }
    lVar11 = *(long *)(lVar13 + 0x28);
    if (lVar11 == 0) {
LAB_029876fc:
      uVar10 = *(ulong *)(lVar13 + 8);
      lVar11 = *(long *)(lVar13 + 0x10);
LAB_02987700:
      *(undefined1 *)(lVar11 + uVar10 + 0x6c0c) = uVar6;
      return;
    }
    puVar14 = *(undefined8 **)(lVar11 + 0x10);
joined_r0x029875ac:
    if (puVar14 == (undefined8 *)0x0) {
      uVar7 = 1;
      plVar12 = *(long **)(lVar11 + 0x20);
joined_r0x029875cc:
      if (plVar12 != (long *)0x0) {
        local_58 = *(undefined **)(lVar13 + 8);
        local_50 = *(undefined8 *)(lVar13 + 0x10);
        local_48 = 0x6c24;
        (**(code **)(*plVar12 + 0x20))(plVar12,&local_58);
      }
    }
    else {
      uVar7 = (**(code **)*puVar14)();
      uVar7 = uVar7 ^ 1;
      if (*(long *)(lVar13 + 0x28) != 0) {
        plVar12 = *(long **)(*(long *)(lVar13 + 0x28) + 0x20);
        goto joined_r0x029875cc;
      }
    }
    *(undefined1 *)(*(long *)(lVar13 + 0x10) + *(long *)(lVar13 + 8) + 0x6c0c) = uVar6;
    if ((uVar7 & 1) != 0) {
      return;
    }
    lVar11 = *(long *)(lVar13 + 0x28);
    goto joined_r0x02987608;
  }
  if (DAT_05574040 == 0) {
    return;
  }
  lVar11 = FUN_026f480c();
  if (lVar11 == 0) {
    return;
  }
  puVar1 = (ulong *)(lVar11 + 0xdc50);
  lVar13 = *(long *)(lVar11 + 0xdc70);
  if (lVar13 == 0) {
    uVar10 = *puVar1;
    lVar11 = *(long *)(lVar11 + 0xdc58);
    goto LAB_02987700;
  }
  if (*(undefined8 **)(lVar13 + 0x10) == (undefined8 *)0x0) {
    uVar7 = 1;
LAB_0298769c:
    plVar12 = *(long **)(lVar13 + 0x20);
    if (plVar12 != (long *)0x0) {
      local_58 = (undefined *)*puVar1;
      local_50 = *(undefined8 *)(lVar11 + 0xdc58);
      local_48 = 0x6c24;
      (**(code **)(*plVar12 + 0x20))(plVar12,&local_58);
    }
  }
  else {
    uVar7 = (**(code **)**(undefined8 **)(lVar13 + 0x10))();
    lVar13 = *(long *)(lVar11 + 0xdc70);
    uVar7 = uVar7 ^ 1;
    if (lVar13 != 0) goto LAB_0298769c;
  }
  *(undefined1 *)(*(long *)(lVar11 + 0xdc58) + *puVar1 + 0x6c0c) = uVar6;
  if ((uVar7 & 1) != 0) {
    return;
  }
  lVar11 = *(long *)(lVar11 + 0xdc70);
joined_r0x02987608:
  if ((lVar11 != 0) && (*(undefined8 **)(lVar11 + 0x18) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(lVar11 + 0x18))();
  }
  return;
}

