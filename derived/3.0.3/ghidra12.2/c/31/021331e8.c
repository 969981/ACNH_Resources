
void FUN_021331e8(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined4 uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  undefined4 *puVar9;
  long lVar10;
  long lVar11;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_34;
  
  plVar6 = *(long **)(*(long *)(param_1 + 8) + 0x3b8);
  lVar7 = *(long *)(*(long *)(param_1 + 8) + 0x3b0);
  (**(code **)(*plVar6 + 0x328))(plVar6,1);
  iVar3 = *(int *)(param_1 + 0x10);
  if (1 < iVar3 - 1U) {
    if (iVar3 != 3) {
      if (iVar3 == 0) {
        local_58 = 0;
        local_34 = 0;
        FUN_01e5a930(0x40000000,lVar7,0,PTR_DAT_04bb2150,&local_58,&local_34,PTR_DAT_04bc1600,6);
      }
      goto LAB_021333ac;
    }
    *(undefined4 *)(param_1 + 0x38) = 5;
    plVar8 = *(long **)(*(long *)(param_1 + 8) + 0x60);
    if (plVar8 == (long *)0x0) {
LAB_02133338:
      uVar5 = 0xe;
    }
    else {
      if (((*PTR_DAT_04bb37c8 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb37c8), iVar3 != 0)) {
        *(undefined **)PTR_DAT_04bb37c0 = PTR_DAT_04bb37a8 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb37c8);
      }
      uVar4 = (**(code **)(*plVar8 + 0x10))(plVar8,PTR_DAT_04bb37c0);
      puVar1 = PTR_DAT_04bb43c0;
      if ((uVar4 & 1) == 0) goto LAB_02133338;
      lVar10 = plVar8[0x290];
      if (*(char *)(lVar10 + 0x1d5) == '\0') {
LAB_02133340:
        puVar9 = (undefined4 *)(lVar10 + 0xd4);
      }
      else {
        puVar9 = (undefined4 *)(lVar10 + 0xcc);
        lVar11 = *(long *)PTR_DAT_04bb43c0;
        uVar2 = FUN_0277d6c4(puVar9);
        if (*(long *)puVar1 == 0) {
LAB_02133318:
          iVar3 = FUN_0277d6c4(puVar9);
          if (iVar3 != 0xfffd) goto LAB_02133340;
          puVar9 = (undefined4 *)PTR_DAT_04bb37e0;
        }
        else {
          lVar11 = *(long *)(lVar11 + 0x57e58);
          uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
          if ((*(uint *)(lVar11 + 0x1d8) <= uVar2) ||
             (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar2 * 8) == 0)) goto LAB_02133318;
        }
      }
      local_58 = *puVar9;
      uStack_54 = puVar9[1];
      uVar4 = FUN_01713020(&local_58);
      uVar5 = 0xd;
      if ((uVar4 & 1) == 0) {
        uVar5 = 0xe;
      }
    }
    *(undefined4 *)(lVar7 + 0x56c) = uVar5;
    local_58 = 0;
    local_34 = 0;
    FUN_01e5a930(0x40000000,lVar7,0,PTR_DAT_04bb2150,&local_58,&local_34,PTR_DAT_04bc1600,6);
  }
  uVar2 = *(uint *)(*(long *)(param_1 + 8) + 0x69c);
  if ((uVar2 >> 0x10 & 1) != 0) {
    *(uint *)(*(long *)(param_1 + 8) + 0x69c) = uVar2 & 0xfffeffff;
  }
LAB_021333ac:
  local_58 = 4;
  *(uint *)(*(long *)(param_1 + 8) + 0x69c) = *(uint *)(*(long *)(param_1 + 8) + 0x69c) | 0x10;
  FUN_0212eca8(plVar6 + 0x154a,1,0);
  plVar6[0x15ab] = plVar6[0x15ab] | 0x400000000000;
  return;
}

