
/* WARNING: Removing unreachable block (ram,0x03d4bd84) */

void FUN_03d4bcfc(long param_1,undefined4 *param_2)

{
  long lVar1;
  long local_40;
  uint local_38;
  undefined4 uStack_34;
  undefined8 local_30;
  undefined4 local_24;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    lVar1 = *(long *)(*(long *)(*(long *)(param_1 + 0x18) + 0x210) + 0x48);
    if (((lVar1 != 0) && (local_38 = *(uint *)(param_1 + 0x20), local_38 < *(uint *)(lVar1 + 0x18)))
       && (lVar1 = *(long *)(*(long *)(lVar1 + 0x20) + (long)(int)local_38 * 8), lVar1 != 0)) {
      local_40 = *(long *)(lVar1 + 0x10);
      if (local_40 != 0) {
        local_24 = 1;
        *(undefined4 *)(lVar1 + 4) = *(undefined4 *)(local_40 + 0x14a0);
        *(undefined4 *)(lVar1 + 8) = *(undefined4 *)(local_40 + 0x14a4);
        uStack_34 = 0;
        local_30 = 0;
        (*(code *)**(undefined8 **)(local_40 + 0x40))((undefined8 *)(local_40 + 0x40),1,&local_40);
        *(undefined8 *)(lVar1 + 0x10) = 0;
      }
      *(undefined4 *)(lVar1 + 4) = *param_2;
      *(undefined4 *)(lVar1 + 8) = param_2[1];
    }
  }
  return;
}

