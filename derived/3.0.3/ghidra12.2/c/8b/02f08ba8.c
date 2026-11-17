
/* WARNING: Removing unreachable block (ram,0x02f08be0) */

void FUN_02f08ba8(byte *param_1)

{
  int iVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  undefined8 *puVar5;
  long *plVar6;
  byte local_18 [4];
  undefined4 local_14;
  
  local_14 = 0xd;
  puVar5 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0xa8);
  if (((*PTR_DAT_04bc73c8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc73c8), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc73c0 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc73c8);
  }
  if ((puVar5 != (undefined8 *)0x0) &&
     (uVar2 = (**(code **)*puVar5)(puVar5,PTR_DAT_04bc73c0), (uVar2 & 1) != 0)) {
    *(undefined4 *)((long)puVar5 + 700) = 1;
    bVar3 = *(byte *)(puVar5 + 0x3f);
    bVar4 = *param_1;
    if (7 < bVar3) {
      bVar3 = 0xff;
    }
    if (7 < bVar4) {
      bVar4 = 0xff;
    }
    if (((bVar3 == bVar4) && (puVar5[0x4a] != 0)) &&
       (local_18[0] = bVar3, uVar2 = FUN_03130c90(puVar5[0x4a],local_18), (uVar2 & 1) != 0)) {
      plVar6 = (long *)puVar5[0x4a];
      if ((int)plVar6[0x15] == 5 || (int)plVar6[0x15] == 2) {
        FUN_03869260(puVar5,plVar6);
        *(undefined1 *)((long)plVar6 + 0x165) = 1;
      }
      else if (*(uint *)(plVar6 + 0x15) < 7 &&
               (1 << (ulong)(*(uint *)(plVar6 + 0x15) & 0x1f) & 0x58U) != 0) {
        (**(code **)(*plVar6 + 0xa8))(plVar6);
      }
    }
    if (*(long *)PTR_DAT_04bc5c78 != 0) {
      FUN_02cb15b0(*(long *)PTR_DAT_04bc5c78,param_1);
    }
  }
  return;
}

