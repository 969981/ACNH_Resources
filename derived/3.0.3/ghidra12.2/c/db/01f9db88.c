
undefined8 FUN_01f9db88(long *param_1,undefined4 *param_2,long param_3,ulong param_4)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  code *pcVar7;
  long lVar8;
  undefined *local_218;
  long *local_210;
  undefined8 local_208;
  long *local_200;
  undefined8 local_1f8;
  undefined4 local_1b4;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 local_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined1 local_140;
  undefined8 local_6c;
  undefined4 local_64;
  undefined1 local_48 [4];
  undefined1 local_44 [4];
  
  if (*(int *)(param_1[1] + 0x750) == 1) {
    FUN_01fa09e0(param_1);
LAB_01f9dbc4:
    uVar5 = 1;
  }
  else {
    uVar6 = (**(code **)(*param_1 + 0x608))(param_1);
    if ((uVar6 & 1) != 0) goto LAB_01f9ddd4;
    lVar2 = *(long *)(param_1[1] + 0x68) + 0x278;
    local_218 = (undefined *)CONCAT44(local_218._4_4_,*(undefined4 *)(param_1[1] + 0x230));
    FUN_021e8490(&local_218,lVar2,param_1 + 0x31,1,0);
    puVar3 = PTR_DAT_04bb43c0;
    local_6c = 0;
    local_64 = 0;
    local_44[0] = 0;
    lVar8 = *(long *)PTR_DAT_04bb43c0;
    uVar4 = FUN_0277d6c4(param_2);
    if (*(long *)puVar3 == 0) {
LAB_01f9dd04:
      uVar6 = FUN_016d948c(param_2);
      if ((uVar6 & 1) != 0) {
LAB_01f9dd10:
        uVar6 = FUN_021f2630(param_2,param_3,lVar2,param_1 + 0x31,&local_6c,local_44,0);
        if ((uVar6 & 1) == 0) {
          return 0;
        }
LAB_01f9dd3c:
        FUN_01e63f1c(&local_218);
        local_218 = (undefined *)CONCAT44(local_218._4_4_,0x14);
        local_168 = *param_2;
        uStack_164 = param_2[1];
        local_180 = *(undefined4 *)(param_3 + 0x20);
        uStack_17c = *(undefined4 *)(param_3 + 0x24);
        local_190 = *(undefined4 *)(param_3 + 0x10);
        uStack_18c = *(undefined4 *)(param_3 + 0x14);
        local_178 = (undefined4)local_6c;
        uStack_174 = local_6c._4_4_;
        param_1[0x243e] = 0;
        local_208 = param_1 + 0x243b;
        local_170 = local_64;
        local_140 = local_44[0];
        local_1b4 = 1;
        param_1[0x243c] = (long)param_1;
        param_1[0x243d] = (long)&LAB_01fc3cf8;
        if ((param_4 & 1) == 0) {
          pcVar7 = FUN_01fa09e0;
        }
        else {
          local_210 = param_1 + 0x2443;
          param_1[0x2444] = (long)param_1;
          pcVar7 = (code *)&LAB_01fc4080;
          param_1[0x2445] = (long)&LAB_01fc3dd8;
          param_1[0x2446] = 0;
        }
        param_1[0x2440] = (long)param_1;
        param_1[0x2441] = (long)pcVar7;
        local_1f8 = param_1 + 0x243f;
        param_1[0x2442] = 0;
        FUN_01fb1020(param_1,&local_218,0x1e);
        goto LAB_01f9dbc4;
      }
    }
    else {
      lVar8 = *(long *)(lVar8 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if ((*(uint *)(lVar8 + 0x1d8) <= uVar4) ||
         (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8) == 0)) goto LAB_01f9dd04;
      local_208 = (long *)0x0;
      local_48[0] = 0;
      local_218 = PTR_DAT_04bbc1a0 + 0x10;
      local_210 = (long *)(PTR_DAT_04bb2010 + 0x10);
      local_1f8 = (long *)0x0;
      local_200 = local_210;
      uVar6 = FUN_01517328(&local_218,local_48,param_3 + 8,param_2);
      if ((uVar6 & 1) != 0) {
        iVar1 = ((int)local_1f8 - (int)local_208) + 1;
        if (iVar1 + iVar1 * (local_1f8._4_4_ - local_208._4_4_) != 8) goto LAB_01f9dd10;
        uVar6 = FUN_01fab12c(param_1,*(long *)(param_1[1] + 0x68) + 0x278,param_2,local_48,
                             &local_218,&local_6c,local_44);
        if ((uVar6 & 1) == 0) goto LAB_01f9ddd4;
        goto LAB_01f9dd3c;
      }
    }
LAB_01f9ddd4:
    uVar5 = 0;
  }
  return uVar5;
}

