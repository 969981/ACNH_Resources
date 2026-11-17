
/* WARNING: Removing unreachable block (ram,0x02f09628) */

void FUN_02f095f0(byte *param_1)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  byte *pbVar5;
  long lVar6;
  undefined8 *puVar7;
  byte local_28 [4];
  undefined4 local_24;
  
  local_24 = 0xd;
  puVar7 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0xa8);
  if (((*PTR_DAT_04bc73c8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc73c8), iVar3 != 0))
  {
    *(undefined **)PTR_DAT_04bc73c0 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc73c8);
  }
  if (puVar7 == (undefined8 *)0x0) {
    return;
  }
  uVar4 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc73c0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  local_28[0] = *param_1;
  if (local_28[0] < 8) goto LAB_02f09754;
  lVar6 = *(long *)PTR_DAT_04bb39b0;
  pbVar5 = PTR_DAT_04bb32e0;
  if (lVar6 == 0) {
LAB_02f096cc:
    if (*pbVar5 < 8) goto LAB_02f09738;
LAB_02f096d8:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_02f09730:
      pbVar5 = PTR_DAT_04bb5038;
      goto LAB_02f09738;
    }
    lVar6 = **(long **)PTR_DAT_04bb27d0;
    bVar2 = *(byte *)(lVar6 + 0x473);
    pbVar5 = PTR_DAT_04bb5038;
    if ((long)(char)bVar2 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar6 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
      if (7 < bVar2) {
        puVar1 = (uint *)(lVar6 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar5 = (byte *)(lVar6 + 0x471);
      }
    }
    local_28[0] = *pbVar5;
    if (7 < local_28[0]) goto LAB_02f09730;
  }
  else {
    if (*(int *)(lVar6 + 0x15c) != 0) {
      pbVar5 = (byte *)(lVar6 + 0x158);
    }
    if (7 < *pbVar5) {
      if ((*(int *)(lVar6 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar5 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_02f096cc;
      }
      goto LAB_02f096d8;
    }
LAB_02f09738:
    local_28[0] = *pbVar5;
    if (7 < local_28[0]) {
      local_28[0] = 0xff;
    }
  }
  if (7 < local_28[0]) {
    local_28[0] = 0xff;
  }
LAB_02f09754:
  if (7 < local_28[0]) {
    local_28[0] = 0xff;
  }
  FUN_02f090a0(puVar7,local_28,2,0);
  return;
}

