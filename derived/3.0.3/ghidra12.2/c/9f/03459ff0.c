
/* WARNING: Removing unreachable block (ram,0x0345a030) */
/* WARNING: Removing unreachable block (ram,0x0345a088) */

undefined8 FUN_03459ff0(undefined4 param_1,byte *param_2)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  byte bVar7;
  undefined8 *puVar8;
  
  puVar1 = PTR_DAT_04bb2230;
  lVar6 = *(long *)PTR_DAT_04bb2230;
  lVar5 = *(long *)(lVar6 + 0x80);
  if (lVar5 != 0) {
    bVar7 = *param_2;
    if (7 < bVar7) {
      bVar7 = 0xff;
    }
    *(byte *)(lVar5 + 0x1f8) = bVar7;
    *(undefined1 *)(lVar5 + 0x165) = 1;
    if ((6 < *(uint *)(lVar5 + 0xa8) || (1 << (ulong)(*(uint *)(lVar5 + 0xa8) & 0x1f) & 0x58U) == 0)
       && (*(long *)(lVar5 + 0x98) != 0)) {
      FUN_0386b090();
      lVar6 = *(long *)puVar1;
    }
  }
  puVar8 = *(undefined8 **)(lVar6 + 0x80);
  if (((*PTR_DAT_04bc6930 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc6930), iVar2 != 0))
  {
    *(undefined **)PTR_DAT_04bc6928 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc6930);
  }
  if ((puVar8 == (undefined8 *)0x0) ||
     (uVar3 = (**(code **)*puVar8)(puVar8,PTR_DAT_04bc6928), (uVar3 & 1) == 0)) {
    return 0;
  }
  uVar4 = FUN_02e1d8ec(puVar8,param_1,param_2);
  return uVar4;
}

