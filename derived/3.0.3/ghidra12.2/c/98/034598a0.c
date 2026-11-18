
/* WARNING: Removing unreachable block (ram,0x034598dc) */

void FUN_034598a0(byte *param_1,undefined4 *param_2)

{
  int iVar1;
  ulong uVar2;
  byte bVar3;
  undefined8 *puVar4;
  
  puVar4 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0x88);
  if (((*PTR_DAT_04bc8628 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc8628), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc8620 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc8628);
  }
  if ((puVar4 != (undefined8 *)0x0) &&
     (uVar2 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bc8620), (uVar2 & 1) != 0)) {
    *(undefined4 *)((long)puVar4 + 0x1c4fc) = *param_2;
    *(undefined1 *)((long)puVar4 + 0x1c51d) = *(undefined1 *)(param_2 + 1);
    bVar3 = *param_1;
    if (7 < bVar3) {
      bVar3 = 0xff;
    }
    *(byte *)(puVar4 + 0x3f) = bVar3;
    *(undefined1 *)((long)puVar4 + 0x165) = 1;
    if ((6 < *(uint *)(puVar4 + 0x15) ||
         (1 << (ulong)(*(uint *)(puVar4 + 0x15) & 0x1f) & 0x58U) == 0) && (puVar4[0x13] != 0)) {
      FUN_0386b090(puVar4[0x13],puVar4);
      return;
    }
  }
  return;
}

