
/* WARNING: Removing unreachable block (ram,0x01367ca0) */
/* WARNING: Removing unreachable block (ram,0x01367c90) */
/* WARNING: Removing unreachable block (ram,0x01367cac) */
/* WARNING: Removing unreachable block (ram,0x01367d08) */

void FUN_01367c60(void)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined **local_70;
  long *plStack_68;
  long local_50;
  undefined4 local_44;
  
  local_70 = (undefined **)((ulong)local_70 & 0xffffffff00000000);
  lVar4 = *(long *)(DAT_0519d040 + 0x1f8);
  if (lVar4 != 0) {
    uVar3 = 1;
    FUN_013661b0(lVar4,1);
    plStack_68 = &local_50;
    local_70 = &PTR_FUN_04993488;
    if (((DAT_05574040 != 0) && (local_44 = 1, ((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) == 0))
       && (local_50 = lVar4,
          lVar4 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x30))(),
          lVar4 != 0)) {
      if ((*(long **)(&LAB_005d3fb0 + lVar4) != (long *)0x0) &&
         (puVar5 = (undefined8 *)**(long **)(&LAB_005d3fb0 + lVar4), puVar5 != (undefined8 *)0x0)) {
        uVar3 = (**(code **)*puVar5)();
        uVar3 = uVar3 ^ 1;
      }
      lVar1 = *(long *)(&LAB_005d3f90 + lVar4);
      lVar2 = *(long *)(&LAB_005d3f98 + lVar4);
      iVar6 = 0;
      do {
        if (*(short *)(lVar2 + lVar1 + (long)iVar6 * 6) == DAT_05585410) break;
        (*(code *)*local_70)(&local_70);
        iVar6 = iVar6 + 1;
      } while (iVar6 != 300);
      if ((((uVar3 & 1) == 0) && (*(long *)(&LAB_005d3fb0 + lVar4) != 0)) &&
         (puVar5 = *(undefined8 **)(*(long *)(&LAB_005d3fb0 + lVar4) + 8),
         puVar5 != (undefined8 *)0x0)) {
        (**(code **)*puVar5)();
      }
    }
  }
  return;
}

