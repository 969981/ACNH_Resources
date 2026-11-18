
/* WARNING: Removing unreachable block (ram,0x03459ec0) */
/* WARNING: Removing unreachable block (ram,0x03459f18) */

undefined8 FUN_03459e80(undefined4 param_1,byte *param_2)

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
  if (((puVar8 == (undefined8 *)0x0) ||
      (uVar3 = (**(code **)*puVar8)(puVar8,PTR_DAT_04bc6928), (uVar3 & 1) == 0)) ||
     (*(int *)((long)puVar8 + 0x21c) != -1)) {
    uVar4 = 0;
  }
  else {
    *(undefined4 *)((long)puVar8 + 0x21c) = param_1;
    uVar4 = 1;
    bVar7 = *param_2;
    *(undefined4 *)((long)puVar8 + 0x224) = 0;
    if (7 < bVar7) {
      bVar7 = 0xff;
    }
    *(byte *)(puVar8 + 0x44) = bVar7;
  }
  return uVar4;
}

