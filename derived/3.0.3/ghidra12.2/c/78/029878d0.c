
/* WARNING: Removing unreachable block (ram,0x0298790c) */

void FUN_029878d0(void)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined4 local_28;
  undefined4 local_24;
  
  if (((DAT_05574040 != 0) && (local_24 = 1, ((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) == 0))
     && (lVar4 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x30))(),
        lVar4 != 0)) {
    if ((*(long **)(&LAB_005d3f08 + lVar4) == (long *)0x0) ||
       (puVar5 = (undefined8 *)**(long **)(&LAB_005d3f08 + lVar4), puVar5 == (undefined8 *)0x0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = (**(code **)*puVar5)();
      uVar2 = uVar2 ^ 1;
    }
    bVar1 = *(byte *)(*(long *)(&LAB_005d3ef0 + lVar4) + *(long *)(&LAB_005d3ee8 + lVar4) + 0x153e);
    if ((((uVar2 & 1) == 0) && (*(long *)(&LAB_005d3f08 + lVar4) != 0)) &&
       (puVar5 = *(undefined8 **)(*(long *)(&LAB_005d3f08 + lVar4) + 8), puVar5 != (undefined8 *)0x0
       )) {
      (**(code **)*puVar5)();
    }
    if (((DAT_0523c4c0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0523c4c0), iVar3 != 0)) {
      FUN_016cb6ac(&DAT_0523c4b0);
      __cxa_guard_release(&DAT_0523c4c0);
    }
    if (0 < (int)DAT_0523c4b0) {
      uVar6 = 0;
      do {
        if (*(uint *)(DAT_0523c4b8 + uVar6 * 4) == (uint)bVar1) goto LAB_029879dc;
        uVar6 = uVar6 + 1;
      } while (DAT_0523c4b0 != uVar6);
    }
    uVar6 = 0;
LAB_029879dc:
    local_28 = (undefined4)uVar6;
    FUN_03784770(&local_28);
  }
  return;
}

