
undefined8 FUN_02524650(byte *param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  uint *puVar7;
  long *plVar8;
  uint uVar9;
  undefined1 auStack_190 [8];
  char *local_188;
  int local_180;
  char *local_130;
  int local_128;
  undefined1 auStack_e0 [88];
  undefined1 local_88;
  undefined1 local_64;
  undefined4 local_60;
  undefined1 local_5b;
  
  puVar2 = PTR_DAT_04bb27c0;
  puVar7 = (uint *)PTR_DAT_04bb3238;
  if ((ulong)*param_1 < 8) {
    if (DAT_054f5738 != 0) {
      puVar7 = (uint *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
    }
  }
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  if (lVar6 == 0) {
    return 0;
  }
  uVar9 = *puVar7;
  if ((((uVar9 == 0) ||
       (plVar8 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                           ((ulong)(uVar9 >> 0x11) & 0x7ff8)), plVar8 == (long *)0x0)) ||
      ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar8 + 0x46) != uVar9)) {
    plVar8 = (long *)0x0;
  }
  if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar5 + 0x60))();
    if (iVar3 < 0x11) {
      uVar9 = 1;
      goto joined_r0x02524860;
    }
    if (*(uint *)(lVar6 + 0x5e8) < 5) {
      uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x02524860;
    }
  }
  uVar9 = 0;
joined_r0x02524860:
  if (plVar8 == (long *)0x0) {
    return 0;
  }
  lVar6 = plVar8[0x2a];
  uVar1 = *(uint *)(plVar8 + 0x49);
  if (((*PTR_DAT_04bb3778 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar3 != 0))
  {
    *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3778);
  }
  uVar4 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb3770);
  if ((int)lVar6 != 1) {
    return 0;
  }
  if ((uVar4 & uVar9) == 0) {
    return 0;
  }
  if ((uVar1 >> 4 & 1) == 0) {
    return 0;
  }
  FUN_0257a010(auStack_190);
  FUN_023ea384(plVar8,auStack_e0);
  if (local_188 != "Obj_Bed_Dream") {
    iVar3 = 0xd;
    if (local_180 < 0xe) {
      iVar3 = local_180 + -1;
    }
    memcpy(local_188,"Obj_Bed_Dream",(long)iVar3);
    local_188[iVar3] = '\0';
  }
  if (local_130 != "Bed_MyHome") {
    iVar3 = 10;
    if (local_128 < 0xb) {
      iVar3 = local_128 + -1;
    }
    memcpy(local_130,"Bed_MyHome",(long)iVar3);
    local_130[iVar3] = '\0';
  }
  local_64 = 0;
  local_88 = 0;
  local_60 = 0x6f;
  local_5b = 1;
  FUN_024480f0(plVar8,auStack_190);
  return 1;
}

