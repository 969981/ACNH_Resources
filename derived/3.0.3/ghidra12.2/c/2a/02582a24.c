
undefined8 * FUN_02582a24(byte *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  ulong uVar7;
  
  if (1 < *(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476)) {
    if (((DAT_05502188 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_05502188), iVar6 != 0)) {
      DAT_05502180 = 0xffffffffffffffff;
      __cxa_guard_release(&DAT_05502188);
    }
    uVar7 = (ulong)*param_1;
    if (uVar7 < 8) {
      cVar3 = *(char *)(**(long **)PTR_DAT_04bb27d0 + uVar7 * 4 + 0x44e);
      cVar2 = *PTR_DAT_04bb5018;
      if (cVar3 != -1) {
        cVar2 = cVar3;
      }
      *(char *)((long)&DAT_05502180 + uVar7) = cVar2;
      bVar4 = *param_1;
      bVar5 = 7 < bVar4;
      if (bVar5) {
        bVar4 = 0xff;
      }
      puVar1 = (undefined8 *)((long)&DAT_05502180 + ((long)(char)bVar4 & 0xffffffffU));
      if (bVar5) {
        puVar1 = &DAT_05502180;
      }
      return puVar1;
    }
  }
  if (((DAT_05502198 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_05502198), iVar6 != 0)) {
    DAT_05502190 = 0;
    __cxa_guard_release(&DAT_05502198);
  }
  return (undefined8 *)&DAT_05502190;
}

