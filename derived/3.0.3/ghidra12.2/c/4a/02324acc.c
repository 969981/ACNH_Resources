
undefined8 FUN_02324acc(long param_1)

{
  uint *puVar1;
  byte bVar2;
  long *plVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  ulong uVar7;
  byte *pbVar8;
  long lVar9;
  undefined4 local_2c;
  long *local_28;
  char local_20;
  char local_1e;
  undefined4 local_14;
  
  lVar9 = *(long *)PTR_DAT_04bb39b0;
  if (lVar9 == 0) {
    uVar7 = (ulong)(byte)*PTR_DAT_04bb32e0;
    if (7 < (byte)*PTR_DAT_04bb32e0) goto LAB_02324b40;
LAB_02324bac:
    if (*(long *)PTR_DAT_04bb4718 != 0) {
      puVar6 = (undefined4 *)(*(long *)PTR_DAT_04bb4718 + uVar7 * 4 + 0xde8);
      goto LAB_02324bc8;
    }
  }
  else {
    pbVar8 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar9 + 0x15c) != 0) {
      pbVar8 = (byte *)(lVar9 + 0x158);
    }
    uVar7 = (ulong)*pbVar8;
    if ((*pbVar8 < 8) ||
       (((*(int *)(lVar9 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
        (bVar2 = *(byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), uVar7 = (ulong)bVar2, bVar2 < 8))))
    goto LAB_02324bac;
LAB_02324b40:
    if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
      lVar9 = **(long **)PTR_DAT_04bb27d0;
      bVar2 = *(byte *)(lVar9 + 0x473);
      pbVar8 = PTR_DAT_04bb5038;
      if ((long)(char)bVar2 != 0xffffffffffffffff) {
        puVar1 = (uint *)(lVar9 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
        if (7 < bVar2) {
          puVar1 = (uint *)(lVar9 + 0x48);
        }
        if ((*puVar1 & 8) != 0) {
          pbVar8 = (byte *)(lVar9 + 0x471);
        }
      }
      uVar7 = (ulong)*pbVar8;
      if (*pbVar8 < 8) goto LAB_02324bac;
    }
    uVar7 = (ulong)(byte)*PTR_DAT_04bb5038;
    if ((byte)*PTR_DAT_04bb5038 < 8) goto LAB_02324bac;
  }
  puVar6 = (undefined4 *)PTR_DAT_04bb3238;
LAB_02324bc8:
  local_14 = *puVar6;
  local_2c = *(undefined4 *)(param_1 + 0x230);
  FUN_0071cb58(&local_28,&local_14,&local_2c,0);
  plVar3 = local_28;
  if (local_28 != (long *)0x0) {
    if (((*PTR_DAT_04bb3778 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3778);
    }
    uVar7 = (**(code **)(*plVar3 + 0x20))(plVar3,PTR_DAT_04bb3770);
    if ((uVar7 & 1) == 0) {
      local_1e = '\0';
    }
  }
  if (((local_28 == (long *)0x0) || (local_20 == '\0')) ||
     ((local_1e == '\0' || ((*(byte *)((long)local_28 + 0x17cf) >> 4 & 1) == 0)))) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}

