
uint FUN_01c13270(long *param_1,undefined4 *param_2,undefined4 param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  ushort uVar6;
  uint *puVar7;
  long lVar8;
  uint *puVar9;
  undefined *local_e0;
  undefined8 uStack_d8;
  undefined *local_d0;
  undefined1 *puStack_c8;
  undefined4 local_c0;
  undefined1 local_bc [63];
  undefined1 local_7d;
  long local_78;
  undefined8 local_70;
  undefined *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  uint *local_58;
  
  uVar3 = FUN_0277d6c4(param_2);
  puVar2 = PTR_DAT_04bb43c0;
  lVar8 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(param_2);
  if (*(long *)puVar2 != 0) {
    lVar8 = *(long *)(lVar8 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar8 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      uVar5 = (**(code **)(*param_1 + 0x10))(param_1);
      local_60 = *param_2;
      uStack_5c = param_2[1];
      lVar8 = *(long *)puVar2;
      local_58 = (uint *)0x0;
      local_68 = PTR_DAT_04bc0510 + 0x10;
      uVar4 = FUN_0277d6c4(&local_60);
      if (*(long *)puVar2 == 0) {
LAB_01c133cc:
        puVar9 = (uint *)0x0;
      }
      else {
        lVar8 = *(long *)(lVar8 + 0x57e58);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
        if ((*(uint *)(lVar8 + 0x1d8) <= uVar4) ||
           (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_01c133cc;
        lVar8 = *(long *)PTR_DAT_04bc0428;
        uVar4 = FUN_0277d6c4(param_2);
        uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
        if (*(uint *)(lVar8 + 0x1d8) <= uVar4) goto LAB_01c133cc;
        puVar9 = *(uint **)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8);
        if (puVar9 != (uint *)0x0) {
          local_58 = puVar9;
        }
      }
      FUN_01ae1ef0(&local_78,&local_68);
      local_7d = 0;
      local_c0 = 0x40;
      puStack_c8 = local_bc;
      local_bc[0] = 0;
      local_d0 = PTR_DAT_04bb2bc0 + 0x10;
      local_e0 = (undefined *)CONCAT44(local_e0._4_4_,0x74);
      if (puVar9 == (uint *)0x0) {
        uVar6 = 0xbc;
      }
      else {
        uVar4 = *puVar9;
        uVar6 = 0;
        if ((uVar4 != 0) && (puVar9 != (uint *)(ulong)uVar4)) {
          puVar7 = (uint *)((long)puVar9 - (long)(ulong)uVar4);
          uVar6 = 0;
          if (*puVar7 != 0) {
            uVar4 = puVar7[1];
            if ((uVar4 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
              lVar8 = 0xc;
              if (*(char *)((long)puVar7 + 10) != '\0') {
                lVar8 = 0x1c;
              }
              lVar8 = (long)puVar7 + lVar8 + (ulong)(ushort)puVar7[2] * 8;
              if (lVar8 != 0) {
                uVar1 = 0;
                if ((ulong)uVar4 != 0) {
                  uVar1 = (uint)((ulong)((long)puVar9 - lVar8) / (ulong)uVar4);
                }
                if (*puVar7 <= uVar1) {
                  uVar1 = 0xffffffff;
                }
                if ((uVar1 < DAT_05326ec0) &&
                   (uVar6 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), uVar6 < 0xbd))
                goto LAB_01c134a4;
              }
            }
            uVar6 = 0;
          }
        }
      }
LAB_01c134a4:
      (**(code **)(local_78 + 0x18))(&local_78);
      if (uVar6 == 0x74) {
        local_e0 = (undefined *)0x191a;
        FUN_0277d4ac(&local_e0);
        uVar3 = FUN_0277d6c4(&local_e0);
      }
      FUN_038d1270(&local_d0,"%s_%05d_%d",local_70,uVar3,param_3);
      local_e0 = PTR_DAT_04bb2020 + 0x10;
      uStack_d8 = uVar5;
      uVar4 = FUN_006f50a0(param_1 + 1,&local_e0,&local_d0,0);
      goto LAB_01c133ac;
    }
  }
  uVar4 = 0;
LAB_01c133ac:
  return uVar4 & 1;
}

