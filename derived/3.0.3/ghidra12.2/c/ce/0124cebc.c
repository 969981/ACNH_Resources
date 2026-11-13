
uint FUN_0124cebc(undefined4 *param_1,uint param_2,char param_3)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  uint *puVar7;
  uint *puVar8;
  long lVar9;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  
  if (((param_2 ^ 0xffffffff) & 0xff) == 0) {
    local_38 = *param_1;
    local_34 = param_1[1];
    uVar4 = FUN_01239cf0(param_1,&local_38,0,1);
    puVar6 = PTR_DAT_04bb43c0;
    if ((uVar4 & 1) != 0) {
      local_40 = 0;
      local_50 = PTR_DAT_04bc0510 + 0x10;
      local_48 = local_38;
      uStack_44 = local_34;
      lVar9 = *(long *)PTR_DAT_04bb43c0;
      uVar5 = FUN_0277d6c4(&local_48);
      if (*(long *)puVar6 != 0) {
        lVar9 = *(long *)(lVar9 + 0x57e58);
        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if ((uVar5 < *(uint *)(lVar9 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
          lVar9 = *(long *)PTR_DAT_04bc0428;
          uVar5 = FUN_0277d6c4(&local_38);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
          if ((uVar5 < *(uint *)(lVar9 + 0x1d8)) &&
             (((puVar7 = *(uint **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8),
               puVar7 != (uint *)0x0 && (uVar5 = *puVar7, uVar5 != 0)) &&
              (puVar7 != (uint *)(ulong)uVar5)))) {
            puVar8 = (uint *)((long)puVar7 - (long)(ulong)uVar5);
            if (((*puVar8 != 0) && (uVar5 = puVar8[1], uVar5 != 0)) &&
               ((ulong)(ushort)puVar8[2] != 0)) {
              lVar9 = 0xc;
              if (*(char *)((long)puVar8 + 10) != '\0') {
                lVar9 = 0x1c;
              }
              lVar9 = (long)puVar8 + lVar9 + (ulong)(ushort)puVar8[2] * 8;
              if (lVar9 != 0) {
                uVar1 = 0;
                if ((ulong)uVar5 != 0) {
                  uVar1 = (uint)((ulong)((long)puVar7 - lVar9) / (ulong)uVar5);
                }
                if (*puVar8 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if (((uVar1 < DAT_05326ec0) &&
                    (uVar2 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar2 < 0xbd)) &&
                   (uVar5 = uVar2 - 0x4c, uVar5 < 10 && (1 << (ulong)(uVar5 & 0x1f) & 0x215U) != 0))
                {
                  param_1[1] = local_34;
                }
              }
            }
          }
        }
      }
    }
    goto LAB_0124d104;
  }
  iVar3 = FUN_0277d6c4(param_1);
  if (iVar3 == 0x3106) {
    if (DAT_04c487d4 != -1) {
      local_50 = (undefined *)CONCAT44(local_50._4_4_,3);
      puVar7 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
      if (0xff < (uint)(int)DAT_04c487d4) {
        puVar7 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar7 >> 3 & 1) != 0) {
        if (param_3 == '\x01') {
          puVar6 = &DAT_04174a40;
LAB_0124d124:
          local_50 = (undefined *)(ulong)(ushort)*(undefined4 *)(puVar6 + (long)(char)param_2 * 4);
        }
        else {
          if (param_3 == '\0') {
            puVar6 = &DAT_04174a34;
            goto LAB_0124d124;
          }
          local_50 = (undefined *)0xed0f;
        }
        FUN_0277d4ac(&local_50);
        goto LAB_0124d0f8;
      }
    }
    FUN_01201740(&local_50);
  }
  else {
    FUN_01201ab0(&local_50,param_2);
  }
LAB_0124d0f8:
  uVar4 = 1;
  *param_1 = (undefined4)local_50;
  param_1[1] = local_50._4_4_;
LAB_0124d104:
  return uVar4 & 1;
}

