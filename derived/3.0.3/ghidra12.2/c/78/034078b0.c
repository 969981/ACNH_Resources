
/* WARNING: Removing unreachable block (ram,0x03407950) */

void FUN_034078b0(void)

{
  undefined *puVar1;
  short sVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  
  puVar3 = PTR_DAT_04bb2230;
  sVar2 = *(short *)PTR_DAT_04bb6298;
  if (sVar2 != -1) {
    puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8;
    if (0xff < (uint)(int)sVar2) {
      puVar1 = PTR_DAT_04bc39f8;
    }
    if ((*(uint *)(puVar1 + 4) & 1) != 0) {
      if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x24a26848) {
        puVar6 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0xf0);
        if (((*PTR_DAT_04bc6118 & 1) == 0) &&
           (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc6118), iVar4 != 0)) {
          *(undefined **)PTR_DAT_04bc6110 = PTR_DAT_04bb7c30 + 0x10;
          __cxa_guard_release(PTR_DAT_04bc6118);
        }
        if ((puVar6 != (undefined8 *)0x0) &&
           (uVar5 = (**(code **)*puVar6)(puVar6,PTR_DAT_04bc6110), (uVar5 & 1) != 0)) {
          *(undefined1 *)(puVar6 + 0x43) = 1;
        }
      }
      if (*(long *)puVar3 != 0) {
        *(undefined1 *)(*(long *)puVar3 + 0x50f) = 1;
      }
    }
  }
  return;
}

