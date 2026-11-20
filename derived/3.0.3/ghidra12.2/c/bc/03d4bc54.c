
/* WARNING: Removing unreachable block (ram,0x03d4bcd8) */

void FUN_03d4bc54(long param_1)

{
  long lVar1;
  long local_38;
  uint local_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  if ((((*(long *)(param_1 + 0x18) != 0) &&
       (lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x210) + 0x48), lVar1 != 0)) &&
      (local_30 = *(uint *)(param_1 + 0x20), local_30 < *(uint *)(lVar1 + 0x18))) &&
     ((lVar1 = *(long *)(*(long *)(lVar1 + 0x20) + (long)(int)local_30 * 8), lVar1 != 0 &&
      (local_38 = *(long *)(lVar1 + 0x10), local_38 != 0)))) {
    *(undefined4 *)(lVar1 + 4) = *(undefined4 *)(local_38 + 0x14a0);
    *(undefined4 *)(lVar1 + 8) = *(undefined4 *)(local_38 + 0x14a4);
    uStack_2c = 0;
    local_28 = 0;
    (*(code *)**(undefined8 **)(local_38 + 0x40))((undefined8 *)(local_38 + 0x40),1,&local_38);
    *(undefined8 *)(lVar1 + 0x10) = 0;
  }
  return;
}

