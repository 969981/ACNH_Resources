
/* WARNING: Removing unreachable block (ram,0x02fe431c) */
/* WARNING: Removing unreachable block (ram,0x02fe4378) */

void FUN_02fe42e0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  
  *(undefined1 *)(param_1 + 0x15) = 0;
  puVar2 = PTR_DAT_04bc7280;
  puVar1 = PTR_DAT_04bb2230;
  puVar5 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0x58);
  if (((*PTR_DAT_04bc7280 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc7280), iVar3 != 0))
  {
    *(undefined **)PTR_DAT_04bc7278 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc7280);
  }
  if ((puVar5 != (undefined8 *)0x0) &&
     (uVar4 = (**(code **)*puVar5)(puVar5,PTR_DAT_04bc7278), (uVar4 & 1) != 0)) {
    *(byte *)((long)puVar5 + 0x239) = *(byte *)((long)puVar5 + 0x239) | 4;
  }
  puVar5 = *(undefined8 **)(*(long *)puVar1 + 0x58);
  if (((*puVar2 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc7280), iVar3 != 0)) {
    *(undefined **)PTR_DAT_04bc7278 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc7280);
  }
  if ((puVar5 != (undefined8 *)0x0) &&
     (uVar4 = (**(code **)*puVar5)(puVar5,PTR_DAT_04bc7278), (uVar4 & 1) != 0)) {
    *(byte *)((long)puVar5 + 0x239) = *(byte *)((long)puVar5 + 0x239) | 6;
  }
  return;
}

