
void FUN_009007f4(long param_1,byte *param_2)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  undefined4 *puVar4;
  long *plVar5;
  byte local_38 [4];
  byte local_34 [4];
  undefined8 local_30;
  undefined4 local_28;
  
  if ((((*(long *)PTR_DAT_04bb27c0 != 0) && (uVar1 = *(uint *)(param_1 + 0x274), uVar1 != 0)) &&
      (plVar5 = *(long **)(*(long *)(*(long *)(*(long *)PTR_DAT_04bb27c0 + 0x1c0) + 8) +
                          ((ulong)(uVar1 >> 0x11) & 0x7ff8)), plVar5 != (long *)0x0)) &&
     (((*(uint *)(plVar5 + 0x49) >> 1 & 1) == 0 && (*(uint *)(plVar5 + 0x46) == uVar1)))) {
    if (((*PTR_DAT_04bb32c0 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb32c0), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bb32b8 = PTR_DAT_04bb32c8 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb32c0);
    }
    uVar3 = (**(code **)(*plVar5 + 0x20))(plVar5,PTR_DAT_04bb32b8);
    if ((uVar3 & 1) != 0) {
      local_38[0] = *param_2;
      local_30 = plVar5[0x55];
      if (7 < local_38[0]) {
        local_38[0] = 0xff;
      }
      local_28 = (undefined4)plVar5[0x56];
      puVar4 = (undefined4 *)FUN_0251b3b0(local_38,0);
      if (puVar4 != (undefined4 *)0x0) {
        local_28 = puVar4[2];
        local_30 = CONCAT44((float)puVar4[1] + 0.1,*puVar4);
      }
      FUN_008ceab0(plVar5,&local_30);
      local_34[0] = local_38[0];
      if (7 < local_38[0]) {
        local_34[0] = 0xff;
      }
      FUN_008e57a4(plVar5,local_34);
    }
  }
  return;
}

