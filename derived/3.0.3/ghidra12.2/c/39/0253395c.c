
void FUN_0253395c(undefined4 *param_1,byte *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  long *plVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long *local_58;
  char local_50;
  char local_4e;
  undefined4 local_44;
  undefined4 local_28;
  undefined4 local_24;
  
  puVar7 = (undefined4 *)PTR_DAT_04bb3238;
  if ((ulong)*param_2 < 8) {
    if (DAT_054f5738 != 0) {
      puVar7 = (undefined4 *)(DAT_054f5738 + (ulong)*param_2 * 4 + 0xde8);
    }
  }
  local_44 = *puVar7;
  local_28 = param_3;
  FUN_0071cb58(&local_58,&local_44,&local_28,0);
  plVar3 = local_58;
  puVar2 = PTR_DAT_04bb3778;
  if (local_58 != (long *)0x0) {
    if (((*PTR_DAT_04bb3778 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3778);
    }
    uVar6 = (**(code **)(*plVar3 + 0x20))(plVar3,PTR_DAT_04bb3770);
    if ((uVar6 & 1) == 0) {
      local_4e = '\0';
    }
  }
  plVar3 = local_58;
  puVar7 = (undefined4 *)PTR_DAT_04bb37e0;
  if (((local_58 == (long *)0x0) || (local_50 == '\0')) || (local_4e == '\0')) goto LAB_02533b1c;
  if (((*puVar2 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar5 != 0)) {
    *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3778);
  }
  uVar6 = (**(code **)(*plVar3 + 0x20))(plVar3,PTR_DAT_04bb3770);
  if ((uVar6 & 1) != 0) {
    puVar8 = (undefined8 *)local_58[0xc];
    if (puVar8 == (undefined8 *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar5 = __cxa_guard_acquire(&DAT_052461c0);
        puVar8 = &DAT_05240280;
        if (iVar5 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        puVar8 = &DAT_05240280;
      }
    }
    puVar2 = PTR_DAT_04bb43c0;
    local_24 = 4;
    if (((*(uint *)((long)puVar8 + 0x15f4) >> 4 & 1) == 0) && (local_58[0x53] != 0)) {
      lVar9 = *(long *)(local_58[0x53] + 0x1480);
      if (*(char *)(lVar9 + 0x1d5) != '\0') {
        puVar7 = (undefined4 *)(lVar9 + 0xcc);
        lVar10 = *(long *)PTR_DAT_04bb43c0;
        uVar4 = FUN_0277d6c4(puVar7);
        if (*(long *)puVar2 != 0) {
          lVar10 = *(long *)(lVar10 + 0x57e58);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
          if ((uVar4 < *(uint *)(lVar10 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) goto LAB_02533b1c;
        }
        iVar5 = FUN_0277d6c4(puVar7);
        if (iVar5 == 0xfffd) goto LAB_02533b14;
      }
      puVar7 = (undefined4 *)(lVar9 + 0xd4);
      goto LAB_02533b1c;
    }
  }
LAB_02533b14:
  puVar7 = (undefined4 *)PTR_DAT_04bb37e0;
LAB_02533b1c:
  uVar1 = puVar7[1];
  *param_1 = *puVar7;
  param_1[1] = uVar1;
  return;
}

