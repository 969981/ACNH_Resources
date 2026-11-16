
undefined8 FUN_02779e74(void *param_1,undefined4 *param_2,ulong param_3)

{
  uint uVar1;
  ushort uVar2;
  undefined *puVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  long lVar7;
  long lVar8;
  undefined **local_7c0;
  undefined4 local_7b8;
  undefined4 uStack_7b4;
  undefined8 local_7b0;
  uint local_64;
  uint local_60;
  uint local_5c;
  int local_58;
  
  puVar3 = PTR_DAT_04bb43c0;
  lVar8 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(param_2);
  lVar7 = *(long *)puVar3;
  if (lVar7 == 0) {
    return 0;
  }
  lVar8 = *(long *)(lVar8 + 0x57e58);
  uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
  if (*(uint *)(lVar8 + 0x1d8) <= uVar4) {
    return 0;
  }
  if (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8) == 0) {
    return 0;
  }
  if ((param_3 & 1) != 0) goto LAB_0277a120;
  uVar4 = FUN_0277d6c4(param_2);
  lVar8 = *(long *)puVar3;
  if (lVar8 == 0) goto LAB_0277a120;
  lVar7 = *(long *)(lVar7 + 0x57e58);
  uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
  if ((*(uint *)(lVar7 + 0x1d8) <= uVar4) ||
     (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_0277a120;
  local_7b0 = 0;
  local_7b8 = *param_2;
  uStack_7b4 = param_2[1];
  local_7c0 = &PTR_FUN_04a36b50;
  uVar4 = FUN_0277d6c4(&local_7b8);
  if (*(long *)puVar3 == 0) {
LAB_0277a0cc:
    uVar4 = 0xbc;
  }
  else {
    lVar7 = *(long *)(lVar8 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((*(uint *)(lVar7 + 0x1d8) <= uVar4) ||
       (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_0277a0cc;
    lVar7 = *(long *)PTR_DAT_04bc0428;
    uVar4 = FUN_0277d6c4(param_2);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((*(uint *)(lVar7 + 0x1d8) <= uVar4) ||
       (puVar5 = *(uint **)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8), puVar5 == (uint *)0x0)
       ) goto LAB_0277a0cc;
    uVar4 = *puVar5;
    if ((uVar4 == 0) || (puVar5 == (uint *)(ulong)uVar4)) {
LAB_0277a0c4:
      uVar4 = 0;
    }
    else {
      puVar6 = (uint *)((long)puVar5 - (long)(ulong)uVar4);
      if ((*puVar6 != 0) && ((uVar4 = puVar6[1], uVar4 != 0 && ((ulong)(ushort)puVar6[2] != 0)))) {
        lVar7 = 0xc;
        if (*(char *)((long)puVar6 + 10) != '\0') {
          lVar7 = 0x1c;
        }
        lVar7 = (long)puVar6 + lVar7 + (ulong)(ushort)puVar6[2] * 8;
        if (lVar7 != 0) {
          uVar1 = 0;
          if ((ulong)uVar4 != 0) {
            uVar1 = (uint)((ulong)((long)puVar5 - lVar7) / (ulong)uVar4);
          }
          if (*puVar6 <= uVar1) {
            uVar1 = 0xffffffff;
          }
          if (((uVar1 < DAT_05326ec0) &&
              (uVar2 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar2 < 0xbd)) &&
             ((uVar2 & 0xfffe) == 0x9a)) goto LAB_0277a120;
        }
      }
      if (((*puVar6 == 0) || (uVar4 = puVar6[1], uVar4 == 0)) || ((ulong)(ushort)puVar6[2] == 0))
      goto LAB_0277a0c4;
      lVar7 = 0xc;
      if (*(char *)((long)puVar6 + 10) != '\0') {
        lVar7 = 0x1c;
      }
      lVar7 = (long)puVar6 + lVar7 + (ulong)(ushort)puVar6[2] * 8;
      if (lVar7 == 0) goto LAB_0277a0c4;
      uVar1 = 0;
      if ((ulong)uVar4 != 0) {
        uVar1 = (uint)((ulong)((long)puVar5 - lVar7) / (ulong)uVar4);
      }
      if (*puVar6 <= uVar1) {
        uVar1 = 0xffffffff;
      }
      if ((*(uint *)PTR_DAT_04bc00c8 <= uVar1) ||
         (uVar2 = *(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2),
         uVar4 = (uint)uVar2, 0xbc < uVar2)) goto LAB_0277a0c4;
    }
  }
  if ((uVar4 - 100 < 0x38) && ((1L << ((ulong)(uVar4 - 100) & 0x3f) & 0xc00020000002e7U) != 0)) {
    return 0;
  }
LAB_0277a120:
  local_7c0 = &PTR_LAB_049ff3a8;
  uVar4 = nn::os::GetSystemTick();
  local_64 = (uVar4 ^ uVar4 >> 0x1e) * 0x6c078965 + 1;
  local_60 = (local_64 ^ local_64 >> 0x1e) * 0x6c078965 + 2;
  local_5c = (local_60 ^ local_60 >> 0x1e) * 0x6c078965 + 3;
  local_58 = (local_5c ^ local_5c >> 0x1e) * 0x6c078965 + 4;
  memcpy(&local_7b8,param_1,0x754);
  FUN_0277dedc(param_2);
  lVar7 = FUN_01a451fc(&local_7c0);
  uVar4 = FUN_0277d6c4(param_2);
  if ((uVar4 >> 3 & 0x1fff) < 0x753) {
    lVar8 = (ulong)((uVar4 & 0xffff) >> 5) * 4;
    *(uint *)(lVar7 + lVar8) = *(uint *)(lVar7 + lVar8) | 1 << (ulong)(uVar4 & 0x1f);
  }
  memcpy(param_1,&local_7b8,0x754);
  return 1;
}

