
bool FUN_02806344(long param_1,undefined4 *param_2)

{
  undefined *puVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined *local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  long local_38;
  
  uVar6 = FUN_02805b60();
  if (((uVar6 & 1) == 0) ||
     ((((((((uVar6 = FUN_0277d7b4(param_1,param_2), (uVar6 & 1) == 0 &&
            (uVar6 = FUN_0277d7b4(param_1 + 8,param_2), (uVar6 & 1) == 0)) &&
           (uVar6 = FUN_0277d7b4(param_1 + 0x10,param_2), (uVar6 & 1) == 0)) &&
          ((uVar6 = FUN_0277d7b4(param_1 + 0x18,param_2), (uVar6 & 1) == 0 &&
           (uVar6 = FUN_0277d7b4(param_1 + 0x20,param_2), (uVar6 & 1) == 0)))) &&
         ((uVar6 = FUN_0277d7b4(param_1 + 0x28,param_2), (uVar6 & 1) == 0 &&
          ((uVar6 = FUN_0277d7b4(param_1 + 0x30,param_2), (uVar6 & 1) == 0 &&
           (uVar6 = FUN_0277d7b4(param_1 + 0x38,param_2), (uVar6 & 1) == 0)))))) &&
        (uVar6 = FUN_0277d7b4(param_1 + 0x40,param_2), (uVar6 & 1) == 0)) &&
       (((((uVar6 = FUN_0277d7b4(param_1 + 0x48,param_2), (uVar6 & 1) == 0 &&
           (uVar6 = FUN_0277d7b4(param_1 + 0x50,param_2), (uVar6 & 1) == 0)) &&
          (uVar6 = FUN_0277d7b4(param_1 + 0x58,param_2), (uVar6 & 1) == 0)) &&
         (((uVar6 = FUN_0277d7b4(param_1 + 0x60,param_2), (uVar6 & 1) == 0 &&
           (uVar6 = FUN_0277d7b4(param_1 + 0x68,param_2), (uVar6 & 1) == 0)) &&
          ((uVar6 = FUN_0277d7b4(param_1 + 0x70,param_2), (uVar6 & 1) == 0 &&
           ((uVar6 = FUN_0277d7b4(param_1 + 0x78,param_2), (uVar6 & 1) == 0 &&
            (uVar6 = FUN_0277d7b4(param_1 + 0x80,param_2), (uVar6 & 1) == 0)))))))) &&
        ((uVar6 = FUN_0277d7b4(param_1 + 0x88,param_2), (uVar6 & 1) == 0 &&
         (((uVar6 = FUN_0277d7b4(param_1 + 0x90,param_2), (uVar6 & 1) == 0 &&
           (uVar6 = FUN_0277d7b4(param_1 + 0x98,param_2), (uVar6 & 1) == 0)) &&
          (uVar6 = FUN_0277d7b4(param_1 + 0xa0,param_2), (uVar6 & 1) == 0)))))))) &&
      ((((uVar6 = FUN_0277d7b4(param_1 + 0xa8,param_2), (uVar6 & 1) == 0 &&
         (uVar6 = FUN_0277d7b4(param_1 + 0xb0,param_2), (uVar6 & 1) == 0)) &&
        (((uVar6 = FUN_0277d7b4(param_1 + 0xb8,param_2), (uVar6 & 1) == 0 &&
          ((uVar6 = FUN_0277d7b4(param_1 + 0xc0,param_2), (uVar6 & 1) == 0 &&
           (uVar6 = FUN_0277d7b4(param_1 + 200,param_2), (uVar6 & 1) == 0)))) &&
         (uVar6 = FUN_0277d7b4(param_1 + 0xd0,param_2), (uVar6 & 1) == 0)))) &&
       ((((uVar6 = FUN_0277d7b4(param_1 + 0xd8,param_2), (uVar6 & 1) == 0 &&
          (uVar6 = FUN_0277d7b4(param_1 + 0xe0,param_2), (uVar6 & 1) == 0)) &&
         (uVar6 = FUN_0277d7b4(param_1 + 0xe8,param_2), (uVar6 & 1) == 0)) &&
        ((uVar6 = FUN_0277d7b4(param_1 + 0xf0,param_2), (uVar6 & 1) == 0 &&
         (uVar6 = FUN_0277d7b4(param_1 + 0xf8,param_2), (uVar6 & 1) == 0)))))))))) {
    bVar2 = false;
  }
  else {
    puVar1 = PTR_DAT_04bb43c0;
    local_38 = 0;
    local_48 = PTR_DAT_04bc0510 + 0x10;
    local_40 = *param_2;
    uStack_3c = param_2[1];
    lVar7 = *(long *)PTR_DAT_04bb43c0;
    uVar3 = FUN_0277d6c4(&local_40);
    if (*(long *)puVar1 != 0) {
      lVar7 = *(long *)(lVar7 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
        lVar7 = *(long *)PTR_DAT_04bc0428;
        uVar3 = FUN_0277d6c4(param_2);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
        if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
           (lVar7 = *(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8), lVar7 != 0)) {
          local_38 = lVar7;
        }
      }
    }
    iVar4 = FUN_01af2e60(&local_48);
    uVar3 = FUN_02806010(param_1,param_2);
    iVar5 = FUN_01af02d0(&local_48);
    bVar2 = iVar5 <= (int)(iVar4 - (uVar3 & 0xffff));
  }
  return bVar2;
}

