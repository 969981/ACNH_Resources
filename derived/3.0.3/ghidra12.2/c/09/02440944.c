
void FUN_02440944(long param_1)

{
  uint *puVar1;
  byte bVar2;
  long *plVar3;
  int iVar4;
  undefined4 *puVar5;
  ulong uVar6;
  byte *pbVar7;
  long lVar8;
  long *local_30;
  char local_28;
  char local_26;
  undefined4 local_8;
  undefined4 uStack_4;
  
  lVar8 = *(long *)PTR_DAT_04bb39b0;
  if (lVar8 == 0) {
    uVar6 = (ulong)(byte)*PTR_DAT_04bb32e0;
    if (7 < (byte)*PTR_DAT_04bb32e0) goto LAB_024409cc;
LAB_02440a38:
    if (*(long *)PTR_DAT_04bb4718 != 0) {
      puVar5 = (undefined4 *)(*(long *)PTR_DAT_04bb4718 + uVar6 * 4 + 0xde8);
      goto LAB_02440a54;
    }
  }
  else {
    pbVar7 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar8 + 0x15c) != 0) {
      pbVar7 = (byte *)(lVar8 + 0x158);
    }
    uVar6 = (ulong)*pbVar7;
    if ((*pbVar7 < 8) ||
       (((*(int *)(lVar8 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
        (bVar2 = *(byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), uVar6 = (ulong)bVar2, bVar2 < 8))))
    goto LAB_02440a38;
LAB_024409cc:
    if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
      lVar8 = **(long **)PTR_DAT_04bb27d0;
      bVar2 = *(byte *)(lVar8 + 0x473);
      pbVar7 = PTR_DAT_04bb5038;
      if ((long)(char)bVar2 != 0xffffffffffffffff) {
        puVar1 = (uint *)(lVar8 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
        if (7 < bVar2) {
          puVar1 = (uint *)(lVar8 + 0x48);
        }
        if ((*puVar1 & 8) != 0) {
          pbVar7 = (byte *)(lVar8 + 0x471);
        }
      }
      uVar6 = (ulong)*pbVar7;
      if (*pbVar7 < 8) goto LAB_02440a38;
    }
    uVar6 = (ulong)(byte)*PTR_DAT_04bb5038;
    if ((byte)*PTR_DAT_04bb5038 < 8) goto LAB_02440a38;
  }
  puVar5 = (undefined4 *)PTR_DAT_04bb3238;
LAB_02440a54:
  uStack_4 = *puVar5;
  local_8 = *(undefined4 *)(param_1 + 0x230);
  FUN_0071cb58(&local_30,&uStack_4,&local_8,0);
  plVar3 = local_30;
  if (local_30 != (long *)0x0) {
    if (((*PTR_DAT_04bb3778 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3778);
    }
    uVar6 = (**(code **)(*plVar3 + 0x20))(plVar3,PTR_DAT_04bb3770);
    if ((uVar6 & 1) == 0) {
      local_26 = '\0';
    }
  }
  if (((local_30 != (long *)0x0) && (local_28 != '\0')) &&
     ((local_26 != '\0' && ((*(byte *)((long)local_30 + 0x17cf) >> 4 & 1) != 0)))) {
    if (DAT_04d6e24c == 2) {
      FUN_0243e27c(param_1,*(long *)(param_1 + 0x68) + 0x278);
      return;
    }
    if (DAT_04d6e24c == 0) {
      FUN_0243dc40(param_1);
      return;
    }
  }
  return;
}

