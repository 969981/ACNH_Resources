
void FUN_03451360(long param_1,byte *param_2)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined *local_c8;
  long lStack_c0;
  undefined *local_b8;
  char *pcStack_b0;
  undefined *local_a8;
  undefined1 *puStack_a0;
  undefined4 local_98;
  undefined1 local_94 [63];
  undefined1 local_55;
  undefined8 local_50;
  undefined *local_48;
  long local_40;
  undefined8 local_38;
  undefined1 local_30;
  undefined1 local_25;
  
  if ((param_1 != 0) && (*param_2 != 0)) {
    puVar6 = (undefined8 *)**(undefined8 **)(param_1 + 0x3f8);
    if (((*PTR_DAT_04bc4e60 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc4e60), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bc4e58 = PTR_DAT_04bc4d38 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4e60);
    }
    if ((puVar6 != (undefined8 *)0x0) &&
       (uVar4 = (**(code **)*puVar6)(puVar6,PTR_DAT_04bc4e58), (uVar4 & 1) != 0)) {
      local_25 = 0;
      local_30 = 0;
      local_40 = (long)&local_38 + 4;
      local_38 = 0x3030303000000010;
      bVar2 = *param_2;
      uVar5 = (uint)bVar2;
      local_48 = PTR_DAT_04bb2ab0 + 0x10;
      if ((bVar2 != 0) && (bVar2 < 100)) {
        if (bVar2 < 5) {
          uVar5 = *(uint *)(&DAT_041029d0 + (long)(char)(bVar2 - 1) * 4);
        }
        else {
          uVar5 = 0;
        }
      }
      FUN_038d1270(&local_48,&DAT_04069380,uVar5);
      local_50 = *(undefined8 *)(puVar6[0x43] + (ulong)(2 < *(uint *)(puVar6 + 0x42)) * 0x10);
      local_98 = 0x40;
      local_55 = 0;
      local_94[0] = 0;
      puStack_a0 = local_94;
      local_a8 = PTR_DAT_04bb2bc0 + 0x10;
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      pcStack_b0 = "STR_MyDesignExchangeUsage";
      local_b8 = puVar1;
      (**(code **)(local_48 + 0x18))(&local_48);
      lStack_c0 = local_40;
      local_c8 = puVar1;
      FUN_03462ecc(&local_a8,&local_b8,&local_c8);
    }
  }
  return;
}

