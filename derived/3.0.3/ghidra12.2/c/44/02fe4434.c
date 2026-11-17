
/* WARNING: Removing unreachable block (ram,0x02fe4494) */
/* WARNING: Removing unreachable block (ram,0x02fe4538) */

void FUN_02fe4434(long param_1,byte *param_2)

{
  int iVar1;
  ulong uVar2;
  byte bVar3;
  undefined8 *puVar4;
  
  if (*(char *)(param_1 + 0x15) != '\0') {
    bVar3 = *param_2;
    if (7 < bVar3) {
      bVar3 = 0xff;
    }
    *(byte *)(param_1 + 0x10) = bVar3;
    if (*(char *)(param_1 + 0x13) == '\0') {
      if (*(char *)(param_1 + 0x11) != '\0') {
        FUN_02fe45f0(param_1);
        FUN_03440390(param_1,(byte *)(param_1 + 0x10));
        if (*(char *)(param_1 + 0x12) != '\0') {
          puVar4 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0x58);
          if (((*PTR_DAT_04bc7280 & 1) == 0) &&
             (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc7280), iVar1 != 0)) {
            *(undefined **)PTR_DAT_04bc7278 = PTR_DAT_04bb7c30 + 0x10;
            __cxa_guard_release(PTR_DAT_04bc7280);
          }
          if ((puVar4 != (undefined8 *)0x0) &&
             (uVar2 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bc7278), (uVar2 & 1) != 0)) {
            *(byte *)((long)puVar4 + 0x239) = *(byte *)((long)puVar4 + 0x239) | 1;
          }
        }
      }
    }
    else {
      puVar4 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0x58);
      if (((*PTR_DAT_04bc7280 & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc7280), iVar1 != 0)) {
        *(undefined **)PTR_DAT_04bc7278 = PTR_DAT_04bb7c30 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc7280);
      }
      if ((puVar4 != (undefined8 *)0x0) &&
         (uVar2 = (**(code **)*puVar4)(puVar4,PTR_DAT_04bc7278), (uVar2 & 1) != 0)) {
        *(byte *)((long)puVar4 + 0x239) = *(byte *)((long)puVar4 + 0x239) | 4;
      }
      *(undefined1 *)(param_1 + 0x13) = 0;
    }
    *(undefined2 *)(param_1 + 0x11) = 0;
  }
  return;
}

