
void FUN_021326c8(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined4 uVar5;
  long lVar6;
  long *plVar7;
  undefined4 *puVar8;
  long lVar9;
  long lVar10;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  
  lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x3b0);
  *(undefined4 *)(param_1 + 0x10) = 3;
  plVar7 = *(long **)(*(long *)(param_1 + 8) + 0x60);
  if (plVar7 != (long *)0x0) {
    if (((*PTR_DAT_04bb37c8 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb37c8), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb37c0 = PTR_DAT_04bb37a8 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37c8);
    }
    uVar4 = (**(code **)(*plVar7 + 0x10))(plVar7,PTR_DAT_04bb37c0);
    puVar1 = PTR_DAT_04bb43c0;
    if ((uVar4 & 1) != 0) {
      lVar9 = plVar7[0x290];
      if (*(char *)(lVar9 + 0x1d5) == '\0') {
LAB_021327ac:
        puVar8 = (undefined4 *)(lVar9 + 0xd4);
      }
      else {
        puVar8 = (undefined4 *)(lVar9 + 0xcc);
        lVar10 = *(long *)PTR_DAT_04bb43c0;
        uVar2 = FUN_0277d6c4(puVar8);
        if (*(long *)puVar1 == 0) {
LAB_02132784:
          iVar3 = FUN_0277d6c4(puVar8);
          if (iVar3 != 0xfffd) goto LAB_021327ac;
          puVar8 = (undefined4 *)PTR_DAT_04bb37e0;
        }
        else {
          lVar10 = *(long *)(lVar10 + 0x57e58);
          uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
          if ((*(uint *)(lVar10 + 0x1d8) <= uVar2) ||
             (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar2 * 8) == 0)) goto LAB_02132784;
        }
      }
      local_4c = *puVar8;
      uStack_48 = puVar8[1];
      uVar4 = FUN_01713020(&local_4c);
      uVar5 = 0xd;
      if ((uVar4 & 1) == 0) {
        uVar5 = 0xe;
      }
      goto LAB_021327cc;
    }
  }
  uVar5 = 0xe;
LAB_021327cc:
  *(undefined4 *)(lVar6 + 0x56c) = uVar5;
  local_4c = 0;
  local_44 = 0;
  FUN_01e5a930(0x40000000,lVar6,0,PTR_DAT_04bb2150,&local_4c,&local_44,PTR_DAT_04bc1600,6);
  *(undefined4 *)(param_1 + 0x38) = 0x78;
  return;
}

