
uint FUN_02433418(long param_1,undefined4 *param_2,float *param_3)

{
  long lVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  undefined8 local_6c;
  undefined4 local_64;
  float fStack_60;
  float local_5c;
  float fStack_58;
  undefined4 local_54;
  undefined2 local_50;
  undefined1 local_4e;
  float local_4c;
  float local_48;
  float local_44;
  undefined *local_40;
  undefined8 local_38;
  
  uVar3 = 0;
  if ((param_2 != (undefined4 *)0x0) && (param_3 != (float *)0x0)) {
    uVar4 = FUN_024335dc(param_1,1);
    if ((uVar4 & 1) != 0) {
      local_6c = 0x3332;
      FUN_0277d4ac(&local_6c);
      puVar2 = PTR_DAT_04bb4f78;
      *param_2 = (undefined4)local_6c;
      param_2[1] = local_6c._4_4_;
      lVar1 = *(long *)puVar2 + 0x20 + (ulong)(uint)*(byte *)(param_1 + 0x1ee8) * 0x740;
      if (7 < *(byte *)(param_1 + 0x1ee8)) {
        lVar1 = *(long *)puVar2 + 0x20;
      }
      local_40 = PTR_DAT_04bb2010 + 0x10;
      local_38 = 0;
      uVar4 = FUN_022ab398(0x40a00000,lVar1 + 0xb0,&local_40);
      if (((uVar4 & 1) != 0) ||
         (uVar4 = FUN_022ab398(0x40d00000,lVar1 + 0xb0,&local_40), (uVar4 & 1) != 0)) {
        local_48 = 0.0;
        fVar6 = (float)(int)local_38 * 0.5;
        uVar3 = 0;
        if (fVar6 != (float)(int)fVar6) {
          uVar3 = (uint)(fVar6 < 0.0);
        }
        fVar7 = (float)local_38._4_4_ * 0.5;
        uVar5 = 0;
        if (fVar7 != (float)(int)fVar7) {
          uVar5 = (uint)(fVar7 < 0.0);
        }
        local_4c = (float)(int)((int)fVar6 - uVar3) * 10.0 + 5.0;
        local_44 = (float)(int)((int)fVar7 - uVar5) * 10.0 + 5.0;
        local_5c = (float)FUN_016e026c(0,&local_4c,0,0);
        param_3[1] = local_5c;
        local_54 = 0x1010001;
        local_4e = 0;
        local_50 = 1;
        *param_3 = local_4c;
        param_3[2] = local_44;
        local_64 = *(undefined4 *)(*(long *)(param_1 + 0x68) + 0x280);
        local_6c = *(undefined8 *)(*(long *)(param_1 + 0x68) + 0x278);
        fStack_58 = local_44;
        fStack_60 = local_4c;
        local_48 = local_5c;
        uVar3 = FUN_016f0c64(&local_6c,0);
        goto LAB_024335c0;
      }
    }
    uVar3 = 0;
  }
LAB_024335c0:
  return uVar3 & 1;
}

