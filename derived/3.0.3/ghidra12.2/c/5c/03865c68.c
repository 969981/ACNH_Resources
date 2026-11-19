
/* WARNING: Removing unreachable block (ram,0x03865cd4) */

void FUN_03865c68(long param_1,uint param_2)

{
  long lVar1;
  long local_38;
  uint local_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  if (((param_2 < *(uint *)(*(long *)(param_1 + 0x2d8) + 0x18)) &&
      (lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x2d8) + 0x20) + (long)(int)param_2 * 8),
      lVar1 != 0)) && (local_38 = *(long *)(lVar1 + 0x10), local_38 != 0)) {
    *(undefined4 *)(lVar1 + 4) = *(undefined4 *)(local_38 + 0x14a0);
    *(undefined4 *)(lVar1 + 8) = *(undefined4 *)(local_38 + 0x14a4);
    uStack_2c = 0;
    local_28 = 0;
    local_30 = param_2;
    (*(code *)**(undefined8 **)(local_38 + 0x40))((undefined8 *)(local_38 + 0x40),1,&local_38);
    *(undefined8 *)(lVar1 + 0x10) = 0;
  }
  return;
}

