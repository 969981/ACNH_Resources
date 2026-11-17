
undefined4 FUN_0313ba90(long param_1,short param_2)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  short *psVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  
  if ((param_2 != -1) && (uVar2 = *(uint *)(param_1 + 0xe2b0), 0 < (int)uVar2)) {
    lVar7 = 0;
    lVar8 = -0x300;
    do {
      psVar4 = (short *)(**(code **)(**(long **)(*(long *)(param_1 + 0xe2b8) + lVar7 * 8) + 0xf0))()
      ;
      if (*psVar4 == param_2) {
        if (0x30 < (int)(uint)lVar7) {
          return 6;
        }
        plVar1 = (long *)(*(long *)(param_1 + 0x210) - lVar8);
        if (0x30 < (uint)lVar7) {
          plVar1 = (long *)(*(long *)(param_1 + 0x210) + 0x300);
        }
        puVar6 = (undefined8 *)*plVar1;
        goto joined_r0x0313bb80;
      }
      lVar8 = lVar8 + -8;
      lVar7 = lVar7 + 1;
    } while ((ulong)uVar2 * 8 + lVar8 != -0x300);
  }
  puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x210) + 0x300);
joined_r0x0313bb80:
  if (puVar6 != (undefined8 *)0x0) {
    if (((*PTR_DAT_04bc4db0 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc4db0), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bc4da8 = PTR_DAT_04bc4db8 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4db0);
    }
    uVar5 = (**(code **)*puVar6)(puVar6,PTR_DAT_04bc4da8);
    if ((uVar5 & 1) != 0) {
      return *(undefined4 *)(puVar6 + 0x56);
    }
  }
  return 6;
}

