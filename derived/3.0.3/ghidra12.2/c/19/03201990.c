
/* WARNING: Removing unreachable block (ram,0x03201a34) */

void FUN_03201990(long param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long local_58;
  uint local_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  
  puVar1 = PTR_DAT_04bb2230;
  lVar2 = *(long *)PTR_DAT_04bb2230;
  if (*(long *)(lVar2 + 0xd0) != 0) {
    *(undefined1 *)(*(long *)(lVar2 + 0xd0) + 0x26c) = 1;
  }
  if ((((param_1 != 0) &&
       (lVar3 = *(long *)(*(long *)(param_1 + 0x210) + 0x48), param_3 < *(uint *)(lVar3 + 0x18))) &&
      (lVar3 = *(long *)(*(long *)(lVar3 + 0x20) + (long)(int)param_3 * 8), lVar3 != 0)) &&
     (lVar4 = *(long *)(lVar3 + 0x10), lVar4 != 0)) {
    *(undefined4 *)(lVar3 + 4) = *(undefined4 *)(lVar4 + 0x14a0);
    *(undefined4 *)(lVar3 + 8) = *(undefined4 *)(lVar4 + 0x14a4);
    uStack_4c = 0;
    local_48 = 0;
    local_58 = lVar4;
    local_50 = param_3;
    (*(code *)**(undefined8 **)(lVar4 + 0x40))((undefined8 *)(lVar4 + 0x40),1,&local_58);
    lVar2 = *(long *)puVar1;
    *(undefined8 *)(lVar3 + 0x10) = 0;
  }
  if (*(long *)(lVar2 + 0xd0) != 0) {
    *(undefined4 *)(*(long *)(lVar2 + 0xd0) + 0x264) = 0;
  }
  FUN_03d48a00(*(undefined8 *)(*(long *)(param_1 + 0x210) + 0x48),param_3,param_2);
  return;
}

