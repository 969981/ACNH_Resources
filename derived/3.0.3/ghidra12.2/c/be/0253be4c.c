
bool FUN_0253be4c(byte *param_1)

{
  long lVar1;
  long *plVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  undefined4 *puVar7;
  uint *puVar8;
  undefined8 local_44;
  undefined4 local_3c;
  long *local_38;
  char local_30;
  char local_2f;
  char local_2e;
  undefined4 local_24;
  
  puVar7 = (undefined4 *)PTR_DAT_04bb3238;
  if ((ulong)*param_1 < 8) {
    if (DAT_054f5738 != 0) {
      puVar7 = (undefined4 *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
    }
  }
  local_24 = *puVar7;
  FUN_0071c8d0(&local_38,&local_24,PTR_DAT_04bb3238,0);
  plVar2 = local_38;
  if (local_38 != (long *)0x0) {
    if (((*PTR_DAT_04bb3778 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3778);
    }
    uVar6 = (**(code **)(*plVar2 + 0x20))(plVar2,PTR_DAT_04bb3770);
    if ((uVar6 & 1) == 0) {
      local_2f = '\0';
    }
  }
  bVar3 = local_38 != (long *)0x0;
  bVar4 = local_2f != '\0';
  if (((bVar3 && local_30 != '\0') && bVar4) && local_2e != '\0') {
    local_44 = 0x430e0000;
    local_3c = 0x42c80000;
    (**(code **)(*(long *)local_38[0xd] + 0x100))((long *)local_38[0xd],&local_44);
    (**(code **)(*(long *)local_38[0xd] + 0x160))((long *)local_38[0xd],PTR_DAT_04bb2cf8);
    local_44 = CONCAT44(local_44._4_4_,0x3d);
    local_38[0x318] = local_38[0x328];
    local_38[0x318] = 0;
    local_38[0x319] = local_38[0x329];
    local_38[0x319] = 0;
    local_38[0x31a] = local_38[0x32a];
    local_38[0x31a] = 0;
    *(short *)(local_38 + 0x31b) = (short)local_38[0x32b];
    local_38[0x314] = local_38[0x324];
    local_38[0x314] = 0;
    local_38[0x315] = local_38[0x325];
    local_38[0x315] = 0;
    local_38[0x316] = local_38[0x326];
    local_38[0x316] = 0;
    local_38[0x317] = local_38[0x327];
    local_38[0x317] = 0;
    local_38[0x310] = local_38[800];
    local_38[0x310] = 0;
    local_38[0x311] = local_38[0x321];
    local_38[0x311] = 0;
    local_38[0x312] = local_38[0x322];
    local_38[0x312] = 0;
    local_38[0x313] = local_38[0x323];
    local_38[0x313] = 0;
    local_38[0x30c] = local_38[0x31c];
    local_38[0x30d] = local_38[0x31d];
    local_38[0x30e] = local_38[0x31e];
    local_38[0x30f] = local_38[799];
    lVar1 = 0;
    if (local_38[0xe] != 0) {
      lVar1 = local_38[0xe] + 0x278;
    }
    FUN_03ebb160(lVar1,0x3d);
    *(undefined4 *)((long)local_38 + 0x17ec) = 0xffffffff;
    if (DAT_054f5738 == 0) {
      if ((DAT_054f08d8 & 1) == 0) {
        iVar5 = __cxa_guard_acquire(&DAT_054f08d8);
        puVar8 = &DAT_054f08d0;
        if (iVar5 != 0) {
          DAT_054f08d0 = 0;
          __cxa_guard_release(&DAT_054f08d8);
        }
      }
      else {
        puVar8 = &DAT_054f08d0;
      }
    }
    else {
      puVar8 = (uint *)(DAT_054f5738 + 0x200);
    }
    *puVar8 = *puVar8 & 0xfffffffd;
  }
  return ((bVar3 && local_30 != '\0') && bVar4) && local_2e != '\0';
}

