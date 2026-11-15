
void FUN_01ea3730(long *param_1)

{
  long lVar1;
  undefined2 *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined2 *puVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  long lVar12;
  undefined2 local_60;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined4 local_5c;
  undefined8 local_58;
  undefined2 local_50;
  undefined1 auStack_4e [10];
  undefined1 local_44;
  undefined4 local_28;
  undefined2 uStack_24;
  undefined1 uStack_22;
  undefined1 uStack_21;
  
  local_58 = CONCAT44(local_58._4_4_,*(undefined4 *)(param_1[1] + 0x230));
  FUN_01c000c8(param_1 + 0xfec,&local_58);
  puVar3 = PTR_DAT_04bb46e8;
  lVar8 = param_1[1];
  if ((*(int *)(lVar8 + 0x500) == 0) && (uVar7 = *(uint *)(lVar8 + 0x508), -1 < (int)uVar7)) {
    if ((9 < uVar7) || ((&DAT_053fee41)[(ulong)uVar7 * 0xba0] == '\0')) goto LAB_01ea3b24;
    plVar10 = *(long **)(lVar8 + 0x60);
    if (plVar10 == (long *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar4 = __cxa_guard_acquire(&DAT_052461c0);
        plVar10 = &DAT_05240280;
        if (iVar4 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        plVar10 = &DAT_05240280;
      }
    }
    (**(code **)(*plVar10 + 0x250))(&local_58,plVar10);
    uVar6 = FUN_0277d7b4(&DAT_053fe840 + (ulong)uVar7 * 0x5d0,&local_58);
    if ((uVar6 & 1) != 0) goto LAB_01ea3b24;
    uVar6 = (**(code **)(*(long *)param_1[1] + 0x180))();
    if ((uVar6 & 1) != 0) {
      plVar10 = *(long **)(param_1[1] + 0x60);
      if (plVar10 == (long *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar4 = __cxa_guard_acquire(&DAT_052461c0);
          plVar10 = &DAT_05240280;
          if (iVar4 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          plVar10 = &DAT_05240280;
        }
      }
      (**(code **)(*plVar10 + 0x250))(&local_58,plVar10);
      (&DAT_053fe840)[(ulong)uVar7 * 0x5d0] = (undefined2)local_58;
      *(undefined2 *)(&DAT_053fe842 + (ulong)uVar7 * 0xba0) = local_58._2_2_;
      (&DAT_053fe844)[(ulong)uVar7 * 0x2e8] = local_58._4_4_;
    }
    uVar6 = FUN_01e3e21c(param_1[1]);
    if ((uVar6 & 1) == 0) goto LAB_01ea3b24;
    plVar10 = *(long **)(param_1[1] + 0x60);
    if (plVar10 == (long *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar4 = __cxa_guard_acquire(&DAT_052461c0);
        plVar10 = &DAT_05240280;
        if (iVar4 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        plVar10 = &DAT_05240280;
      }
    }
    (**(code **)(*plVar10 + 0x250))(&local_28,plVar10);
    lVar12 = param_1[1];
    local_44 = 0;
    lVar8 = lVar12 + 0x3e0;
    local_50 = (undefined2)*(undefined4 *)(lVar12 + 0x508);
    local_58 = CONCAT17(uStack_21,CONCAT16(uStack_22,CONCAT24(uStack_24,local_28)));
    (**(code **)(*(long *)(lVar12 + 0x3e0) + 0x18))(lVar8);
    lVar9 = 0;
    do {
      if (*(char *)(*(long *)(lVar12 + 1000) + lVar9) == '\0') goto LAB_01ea3aac;
      lVar1 = *(long *)(lVar12 + 1000) + lVar9;
      if (*(char *)(lVar1 + 1) == '\0') goto LAB_01ea3aa0;
      if (*(char *)(lVar1 + 2) == '\0') goto LAB_01ea3aa8;
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
  }
  else {
    puVar5 = (undefined2 *)FUN_0218a600(*(undefined8 *)PTR_DAT_04bb46e8,lVar8 + 0x3e0);
    puVar2 = (undefined2 *)PTR_DAT_04bb37e0;
    if (puVar5 != (undefined2 *)0x0) {
      puVar2 = puVar5;
    }
    local_60 = *puVar2;
    local_5e = *(undefined1 *)(puVar2 + 1);
    local_5d = *(undefined1 *)((long)puVar2 + 3);
    local_5c = *(undefined4 *)(puVar2 + 2);
    plVar10 = *(long **)(param_1[1] + 0x60);
    if (plVar10 == (long *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar4 = __cxa_guard_acquire(&DAT_052461c0);
        plVar10 = &DAT_05240280;
        if (iVar4 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        plVar10 = &DAT_05240280;
      }
    }
    (**(code **)(*plVar10 + 0x250))(&local_58,plVar10);
    uVar6 = FUN_0277d7b4(&local_60,&local_58);
    if ((uVar6 & 1) == 0) goto LAB_01ea3b24;
    uVar6 = (**(code **)(*(long *)param_1[1] + 0x180))();
    if ((uVar6 & 1) != 0) {
      lVar8 = param_1[1];
      uVar11 = *(undefined8 *)puVar3;
      plVar10 = *(long **)(lVar8 + 0x60);
      if (plVar10 == (long *)0x0) {
        if (((DAT_052461c0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_052461c0), iVar4 != 0)) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
          plVar10 = &DAT_05240280;
        }
        else {
          plVar10 = &DAT_05240280;
        }
      }
      (**(code **)(*plVar10 + 0x250))(&local_58);
      FUN_02189da0(uVar11,lVar8 + 0x3e0,&local_58);
    }
    uVar6 = FUN_01e3e21c(param_1[1]);
    if ((uVar6 & 1) == 0) goto LAB_01ea3b24;
    plVar10 = *(long **)(param_1[1] + 0x60);
    if (plVar10 == (long *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar4 = __cxa_guard_acquire(&DAT_052461c0);
        plVar10 = &DAT_05240280;
        if (iVar4 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        plVar10 = &DAT_05240280;
      }
    }
    (**(code **)(*plVar10 + 0x250))(&local_28,plVar10);
    lVar12 = param_1[1];
    local_44 = 0;
    lVar8 = lVar12 + 0x3e0;
    local_50 = (undefined2)*(undefined4 *)(lVar12 + 0x508);
    local_58 = CONCAT17(uStack_21,CONCAT16(uStack_22,CONCAT24(uStack_24,local_28)));
    (**(code **)(*(long *)(lVar12 + 0x3e0) + 0x18))(lVar8);
    lVar9 = 0;
    do {
      if (*(char *)(*(long *)(lVar12 + 1000) + lVar9) == '\0') goto LAB_01ea3aac;
      lVar1 = *(long *)(lVar12 + 1000) + lVar9;
      if (*(char *)(lVar1 + 1) == '\0') goto LAB_01ea3aa0;
      if (*(char *)(lVar1 + 2) == '\0') goto LAB_01ea3aa8;
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
  }
  lVar9 = 0;
LAB_01ea3aac:
  uVar7 = (uint)lVar9;
  if (9 < uVar7) {
    uVar7 = 10;
  }
  (**(code **)(*(long *)(lVar12 + 0x3e0) + 0x18))(lVar8);
  memcpy(auStack_4e,*(void **)(lVar12 + 1000),(ulong)uVar7);
  local_28 = 0;
  uStack_22 = 0;
  uStack_24 = 0xff00;
  if (-1 < DAT_053d0920) {
    FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d0920,&local_28,&local_58,0x16,0);
  }
LAB_01ea3b24:
  if ((undefined4 *)param_1[0x10f6] != (undefined4 *)0x0) {
    local_58 = CONCAT44(local_58._4_4_,*(undefined4 *)(param_1[1] + 0x698));
    *(undefined4 *)param_1[0x10f6] = *(undefined4 *)(param_1[1] + 0x698);
  }
  (**(code **)(*param_1 + 0xd0))(param_1);
  return;
LAB_01ea3aa0:
  lVar9 = lVar9 + 1;
  goto LAB_01ea3aac;
LAB_01ea3aa8:
  lVar9 = lVar9 + 2;
  goto LAB_01ea3aac;
}

