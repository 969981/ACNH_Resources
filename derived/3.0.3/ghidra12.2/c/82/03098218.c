
void FUN_03098218(long param_1,short *param_2)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 ***local_100;
  undefined8 ***pppuStack_f8;
  undefined8 ***local_f0;
  undefined8 ***local_e8;
  undefined8 ***local_e0;
  undefined8 ***local_d8;
  undefined8 ***local_d0;
  undefined8 **local_c8;
  undefined8 *local_c0;
  undefined8 local_b8;
  undefined1 auStack_b0 [64];
  undefined *local_70;
  short local_68;
  undefined1 local_66;
  undefined1 local_65;
  undefined4 local_64;
  long local_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined *local_50;
  char *pcStack_48;
  
  puVar1 = PTR_DAT_04bb43c0;
  local_68 = *param_2;
  if (local_68 == -2) {
    if (*(char *)(param_1 + 0x574fc) != '\0') {
      FUN_033ba890(*(undefined8 *)(*(long *)PTR_DAT_04bb2230 + 0x30),1);
      *(undefined1 *)(param_1 + 0x574fc) = 0;
    }
  }
  else {
    local_66 = (undefined1)param_2[1];
    local_65 = *(undefined1 *)((long)param_2 + 3);
    local_64 = *(undefined4 *)(param_2 + 2);
    local_58 = CONCAT13(local_65,CONCAT12(local_66,local_68));
    local_70 = PTR_DAT_04bc0510 + 0x10;
    lVar4 = *(long *)PTR_DAT_04bb43c0;
    local_60 = 0;
    local_54 = local_64;
    uVar2 = FUN_0277d6c4(&local_68);
    if (*(long *)puVar1 != 0) {
      lVar4 = *(long *)(lVar4 + 0x57e58);
      uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
      if ((uVar2 < *(uint *)(lVar4 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
        lVar4 = *(long *)PTR_DAT_04bc0428;
        uVar2 = FUN_0277d6c4(param_2);
        uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
        if ((uVar2 < *(uint *)(lVar4 + 0x1d8)) &&
           (lVar4 = *(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar2 * 8), lVar4 != 0)) {
          local_60 = lVar4;
        }
      }
    }
    iVar3 = FUN_01ad7260(&local_70);
    if (iVar3 != 0) {
      local_110 = 0;
      local_108 = (undefined1 *)0x0;
      local_f0 = &local_e8;
      local_e8 = &local_e0;
      local_100 = &local_f0;
      local_e0 = &local_d8;
      local_d8 = &local_d0;
      local_d0 = &local_c8;
      local_c8 = &local_c0;
      local_c0 = &local_b8;
      local_b8 = 0;
      if (auStack_b0 != (undefined1 *)0x0) {
        local_110 = 0x800000000;
        local_108 = auStack_b0;
      }
      pppuStack_f8 = local_100;
      FUN_0264cdf0(&local_110,&local_58);
      local_58 = **(undefined4 **)(local_108 + (long)*(int *)(param_1 + 0x574f8) * 8);
      local_54 = (*(undefined4 **)(local_108 + (long)*(int *)(param_1 + 0x574f8) * 8))[1];
    }
    if (*(char *)(param_1 + 0x574fc) == '\0') {
      local_108 = (undefined1 *)((ulong)local_108 & 0xffffffff00000000);
      local_110 = 0xfffe00000000;
      FUN_0277d4ac((ulong)&local_110 | 4);
      local_100 = (undefined8 ***)0x0;
      local_110 = CONCAT44(local_58,(undefined4)local_110);
      local_108 = (undefined1 *)
                  CONCAT44(CONCAT22(local_108._6_2_,*(undefined2 *)PTR_DAT_04bb3170),local_54);
      local_50 = PTR_DAT_04bb2020 + 0x10;
      pcStack_48 = "/L_LoadingIcon_00";
      local_100 = (undefined8 ***)
                  FUN_02bcb9a0(**(long **)(*(long *)(param_1 + 0x220) + 0x3f8) + 0x38,&local_50);
      FUN_033bd990(*(undefined8 *)(*(long *)PTR_DAT_04bb2230 + 0x30),&local_110);
      *(undefined1 *)(param_1 + 0x574fc) = 1;
    }
    else {
      local_110 = 0xfffe;
      FUN_0277d4ac(&local_110);
      local_108 = (undefined1 *)CONCAT62(local_108._2_6_,*(undefined2 *)PTR_DAT_04bb3170);
      local_110 = CONCAT44(local_54,local_58);
      FUN_033ba168(*(undefined8 *)(*(long *)PTR_DAT_04bb2230 + 0x30),&local_110);
    }
  }
  return;
}

