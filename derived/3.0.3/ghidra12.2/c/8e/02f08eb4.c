
/* WARNING: Removing unreachable block (ram,0x02f08ef8) */

uint FUN_02f08eb4(undefined4 param_1,undefined4 param_2,byte *param_3)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  byte *pbVar6;
  long lVar7;
  undefined8 *puVar8;
  byte local_38 [4];
  undefined4 local_34;
  
  local_34 = 0xd;
  puVar8 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0xa8);
  if (((*PTR_DAT_04bc73c8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc73c8), iVar4 != 0))
  {
    *(undefined **)PTR_DAT_04bc73c0 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc73c8);
  }
  if ((puVar8 == (undefined8 *)0x0) ||
     (uVar5 = (**(code **)*puVar8)(puVar8,PTR_DAT_04bc73c0), (uVar5 & 1) == 0)) {
    uVar3 = 0;
    goto LAB_02f09050;
  }
  local_38[0] = *param_3;
  if (7 < local_38[0]) {
    lVar7 = *(long *)PTR_DAT_04bb39b0;
    pbVar6 = PTR_DAT_04bb32e0;
    if (lVar7 == 0) {
LAB_02f08fa4:
      if (*pbVar6 < 8) goto LAB_02f09010;
LAB_02f08fb0:
      if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_02f09008:
        pbVar6 = PTR_DAT_04bb5038;
        goto LAB_02f09010;
      }
      lVar7 = **(long **)PTR_DAT_04bb27d0;
      bVar2 = *(byte *)(lVar7 + 0x473);
      pbVar6 = PTR_DAT_04bb5038;
      if ((long)(char)bVar2 != 0xffffffffffffffff) {
        puVar1 = (uint *)(lVar7 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
        if (7 < bVar2) {
          puVar1 = (uint *)(lVar7 + 0x48);
        }
        if ((*puVar1 & 8) != 0) {
          pbVar6 = (byte *)(lVar7 + 0x471);
        }
      }
      local_38[0] = *pbVar6;
      if (7 < local_38[0]) goto LAB_02f09008;
    }
    else {
      if (*(int *)(lVar7 + 0x15c) != 0) {
        pbVar6 = (byte *)(lVar7 + 0x158);
      }
      if (7 < *pbVar6) {
        if ((*(int *)(lVar7 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
          pbVar6 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
          goto LAB_02f08fa4;
        }
        goto LAB_02f08fb0;
      }
LAB_02f09010:
      local_38[0] = *pbVar6;
      if (7 < local_38[0]) {
        local_38[0] = 0xff;
      }
    }
    if (7 < local_38[0]) {
      local_38[0] = 0xff;
    }
  }
  if (7 < local_38[0]) {
    local_38[0] = 0xff;
  }
  uVar3 = FUN_02f090a0(puVar8,local_38,param_1,param_2);
LAB_02f09050:
  return uVar3 & 1;
}

