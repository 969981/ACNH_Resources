
void FUN_017e8150(long param_1,ulong param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  short sVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined2 local_60;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined4 local_5c;
  undefined1 auStack_58 [4];
  undefined4 local_54;
  undefined **local_50;
  undefined8 local_48;
  long local_40;
  
  if (((param_2 & 1) != 0) &&
     ((((uVar6 = FUN_0277d7b4(param_1 + 0xe8,param_1 + 0xdc), (uVar6 & 1) == 0 ||
        (*(short *)(param_1 + 0xf0) != *(short *)(param_1 + 0xe4))) ||
       (*(char *)(param_1 + 0xf2) != *(char *)(param_1 + 0xe6))) ||
      (*(int *)(param_1 + 0x1f8) != *(int *)(param_1 + 500))))) {
    *(undefined1 *)(param_1 + 0xf3) = 1;
  }
  *(undefined2 *)(param_1 + 0xf0) = *(undefined2 *)(param_1 + 0xe4);
  local_60 = *(undefined2 *)(param_1 + 0xdc);
  local_5e = *(undefined1 *)(param_1 + 0xde);
  local_5d = *(undefined1 *)(param_1 + 0xdf);
  local_5c = *(undefined4 *)(param_1 + 0xe0);
  *(undefined1 *)(param_1 + 0xf2) = *(undefined1 *)(param_1 + 0xe6);
  uVar1 = *(undefined4 *)(param_1 + 500);
  *(undefined2 *)(param_1 + 0xe8) = local_60;
  *(undefined1 *)(param_1 + 0xea) = local_5e;
  *(undefined1 *)(param_1 + 0xeb) = local_5d;
  *(undefined4 *)(param_1 + 0xec) = local_5c;
  *(undefined4 *)(param_1 + 0x1f8) = uVar1;
  if (*(char *)(param_1 + 0xf3) != '\0') {
    FUN_007ef010(auStack_58);
    local_54 = uVar1;
    FUN_0152427c();
    *(undefined4 *)(*(long *)PTR_DAT_04bb4e28 + 0x1228) = 0;
    FUN_016b6a80(*(undefined8 *)PTR_DAT_04bb9a68,0);
    local_50 = &PTR_FUN_04a72fb8;
    iVar2 = *(int *)(*(long *)PTR_DAT_04bb3968 + 0xb88);
    if (iVar2 != 0) {
      lVar8 = (long)iVar2 << 3;
      puVar7 = *(undefined8 **)(*(long *)PTR_DAT_04bb3968 + 0xb90);
      local_48 = &local_60;
      do {
        (*(code *)*local_50)(&local_50,*puVar7);
        lVar8 = lVar8 + -8;
        puVar7 = puVar7 + 1;
      } while (lVar8 != 0);
    }
    puVar3 = PTR_DAT_04bb43c0;
    sVar4 = *(short *)(param_1 + 0xd0);
    if (sVar4 != -2) {
      local_40 = 0;
      local_50 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
      local_48 = (undefined2 *)
                 CONCAT44(*(undefined4 *)(param_1 + 0xd4),
                          CONCAT22(*(undefined2 *)(param_1 + 0xd2),sVar4));
      lVar8 = *(long *)PTR_DAT_04bb43c0;
      uVar5 = FUN_0277d6c4(&local_48);
      if (*(long *)puVar3 != 0) {
        lVar8 = *(long *)(lVar8 + 0x57e58);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
        if ((uVar5 < *(uint *)(lVar8 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
          lVar8 = *(long *)PTR_DAT_04bc0428;
          uVar5 = FUN_0277d6c4((short *)(param_1 + 0xd0));
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if ((uVar5 < *(uint *)(lVar8 + 0x1d8)) &&
             (lVar8 = *(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar5 * 8), lVar8 != 0)) {
            local_40 = lVar8;
          }
        }
      }
      sVar4 = FUN_01b01f10(&local_50);
      if (sVar4 == 0xf8) {
        if (*(long *)PTR_DAT_04bbe480 != 0) {
          FUN_017b1950(*(long *)PTR_DAT_04bbe480,1);
        }
      }
    }
  }
  return;
}

