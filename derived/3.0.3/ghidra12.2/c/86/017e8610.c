
void FUN_017e8610(long param_1,ulong param_2)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined2 local_60;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined4 local_5c;
  undefined1 auStack_58 [4];
  undefined4 local_54;
  undefined **local_50;
  undefined1 *puStack_48;
  
  if ((param_2 & 1) != 0) {
    uVar3 = FUN_0277d7b4(param_1 + 0xc0,param_1 + 0xb4);
    if ((uVar3 & 1) != 0) {
      if ((((*(byte *)(param_1 + 200) == (*(byte *)(param_1 + 0x13c) >> 6 & 1)) &&
           (*(short *)(param_1 + 0xca) == *(short *)(param_1 + 0xbc))) &&
          (*(byte *)(param_1 + 0xcc) == (*(byte *)(param_1 + 0x13c) >> 5 & 1))) &&
         (*(int *)(param_1 + 0x20c) == *(int *)(param_1 + 0x208))) goto LAB_017e8688;
    }
    *(undefined1 *)(param_1 + 0xcd) = 1;
  }
LAB_017e8688:
  *(undefined2 *)(param_1 + 0xca) = *(undefined2 *)(param_1 + 0xbc);
  local_60 = *(undefined2 *)(param_1 + 0xb4);
  local_5e = *(undefined1 *)(param_1 + 0xb6);
  local_5d = *(undefined1 *)(param_1 + 0xb7);
  uVar1 = *(undefined4 *)(param_1 + 0x208);
  *(undefined2 *)(param_1 + 0xc0) = local_60;
  *(undefined1 *)(param_1 + 0xc2) = local_5e;
  *(undefined1 *)(param_1 + 0xc3) = local_5d;
  *(byte *)(param_1 + 0xcc) = *(byte *)(param_1 + 0x13c) >> 5 & 1;
  *(byte *)(param_1 + 200) = *(byte *)(param_1 + 0x13c) >> 6 & 1;
  local_5c = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)(param_1 + 0x20c) = uVar1;
  *(undefined4 *)(param_1 + 0xc4) = local_5c;
  if (*(char *)(param_1 + 0xcd) != '\0') {
    FUN_007ef010(auStack_58,(undefined2 *)(param_1 + 0xca));
    *(undefined4 *)(*(long *)PTR_DAT_04bb4e28 + 0x1228) = 2;
    local_54 = uVar1;
    FUN_016b6a80(*(undefined8 *)PTR_DAT_04bb9a68,2);
    local_50 = &PTR_FUN_04a72fb8;
    iVar2 = *(int *)(*(long *)PTR_DAT_04bb3968 + 0xb88);
    if (iVar2 != 0) {
      lVar5 = (long)iVar2 << 3;
      puVar4 = *(undefined8 **)(*(long *)PTR_DAT_04bb3968 + 0xb90);
      puStack_48 = (undefined1 *)&local_60;
      do {
        (*(code *)*local_50)(&local_50,*puVar4);
        lVar5 = lVar5 + -8;
        puVar4 = puVar4 + 1;
      } while (lVar5 != 0);
    }
  }
  return;
}

