
/* WARNING: Removing unreachable block (ram,0x033db418) */

void FUN_033db3e4(uint param_1)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  
  puVar7 = *(undefined8 **)(*(long *)PTR_DAT_04bb2230 + 0x60);
  if (((*PTR_DAT_04bc99f0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(PTR_DAT_04bc99f0), iVar2 != 0))
  {
    *(undefined **)PTR_DAT_04bc99e8 = PTR_DAT_04bb7c30 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc99f0);
  }
  if ((puVar7 != (undefined8 *)0x0) &&
     (uVar3 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bc99e8), (uVar3 & 1) != 0)) {
    plVar1 = puVar7 + 0x66 + param_1;
    if (3 < param_1) {
      plVar1 = puVar7 + 0x66;
    }
    lVar5 = *plVar1;
    if (*(long *)(lVar5 + 0x18) == 0 && *(long *)(lVar5 + 0x10) == 0) {
      lVar4 = *(long *)(lVar5 + 0x38);
      plVar1 = (long *)(*(int *)(lVar4 + 0x54) + lVar5);
      plVar6 = (long *)(lVar4 + 0x40);
      lVar5 = *plVar6;
      *plVar6 = (long)plVar1;
      *plVar1 = lVar5;
      plVar1[1] = (long)plVar6;
      if (lVar5 != 0) {
        *(long **)(lVar5 + 8) = plVar1;
      }
      *(int *)(lVar4 + 0x50) = *(int *)(lVar4 + 0x50) + 1;
    }
  }
  return;
}

