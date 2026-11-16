
/* WARNING: Removing unreachable block (ram,0x02642fa4) */
/* WARNING: Removing unreachable block (ram,0x02642f0c) */
/* WARNING: Removing unreachable block (ram,0x02642f58) */

long FUN_02642ea0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int local_28;
  char local_24;
  
  if (DAT_05574040 == 0) {
    return 0;
  }
  FUN_02703058(&local_28);
  if (local_24 != '\0') {
    if (local_28 == 2) {
      if (DAT_05574040 != 0) {
        if (((*(byte *)(DAT_05574040 + 0x510) ^ 0xff) & 6) == 0) {
          lVar2 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x1a0) + 0x30))();
        }
        else {
          lVar2 = 0;
        }
        lVar3 = lVar2 + 0xc0138;
        goto LAB_02643000;
      }
    }
    else if (local_28 == 1) {
      if (DAT_05574040 != 0) {
        if (((*(byte *)(DAT_05574040 + 0x50f) ^ 0xff) & 6) == 0) {
          lVar2 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x198) + 0x30))();
        }
        else {
          lVar2 = 0;
        }
        lVar3 = lVar2 + 0xa8d58;
        goto LAB_02643000;
      }
    }
    else if ((local_28 == 0) && (DAT_05574040 != 0)) {
      if (((*(byte *)(DAT_05574040 + 0x50e) ^ 0xff) & 6) == 0) {
        lVar2 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 400) + 0x30))();
      }
      else {
        lVar2 = 0;
      }
      lVar3 = lVar2 + 0xa28b8;
LAB_02643000:
      lVar1 = 0;
      if (lVar2 != 0) {
        lVar1 = lVar3;
      }
      return lVar1;
    }
  }
  return 0;
}

