
void FUN_01af1d20(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  ushort *puVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  undefined **local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_58;
  
  puVar3 = PTR_DAT_04bb43c0;
  lVar11 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4();
  lVar9 = *(long *)puVar3;
  if (lVar9 != 0) {
    lVar11 = *(long *)(lVar11 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar11 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      local_58 = 0;
      local_68 = &PTR_FUN_04a36b50;
      local_60 = *param_1;
      uStack_5c = param_1[1];
      uVar4 = FUN_0277d6c4(&local_60);
      lVar11 = DAT_0532a768;
      if (*(long *)puVar3 != 0) {
        lVar9 = *(long *)(lVar9 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if ((uVar4 < *(uint *)(lVar9 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
          uVar4 = FUN_0277d6c4(param_1);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
          if (uVar4 < *(uint *)(lVar11 + 0x1d8)) {
            lVar9 = *(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar4 * 8);
            if (lVar9 != 0) {
              local_58 = lVar9;
            }
          }
        }
      }
      uVar4 = FUN_01ad7260(&local_68);
      puVar3 = PTR_DAT_04bb39d8;
      if (1 < (uVar4 & 0xff)) {
        uVar10 = 0;
        uVar8 = 0;
        uVar12 = 0;
        do {
          if (param_2 != uVar10) {
            uVar12 = uVar12 + 1;
            puVar6 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar3);
            uVar1 = *puVar6 ^ *puVar6 << 0xb;
            uVar2 = puVar6[3];
            *puVar6 = puVar6[1];
            puVar6[1] = puVar6[2];
            uVar1 = uVar1 >> 8 ^ uVar2 >> 0x13 ^ uVar1 ^ uVar2;
            puVar6[2] = uVar2;
            puVar6[3] = uVar1;
            if (((ulong)uVar1 * (ulong)uVar12 & 0xffffffff00000000) == 0) {
              uVar8 = uVar10;
            }
          }
          uVar10 = uVar10 + 1;
        } while ((uVar4 & 0xff) != uVar10);
        iVar5 = FUN_01ad7260(&local_68);
        if ((iVar5 != 0) &&
           (((uVar8 == 0 || (iVar5 = FUN_01ad7260(&local_68), (int)uVar8 < iVar5)) &&
            (puVar7 = (ushort *)FUN_01afd600(&local_68), puVar7 != (ushort *)0x0)))) {
          *puVar7 = *puVar7 & 0xfff8 | (ushort)uVar8 & 7;
        }
        *param_1 = local_60;
        param_1[1] = uStack_5c;
      }
    }
  }
  return;
}

