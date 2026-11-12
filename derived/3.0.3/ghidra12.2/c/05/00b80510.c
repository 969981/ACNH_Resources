
void FUN_00b80510(long param_1,undefined4 param_2,byte *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  byte bVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *local_1b0;
  undefined8 *puStack_1a8;
  undefined4 local_1a0;
  undefined1 local_19c;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  undefined *local_180;
  undefined1 *puStack_178;
  undefined4 local_170;
  undefined1 local_16c [63];
  undefined1 local_12d;
  undefined *local_128;
  undefined1 *puStack_120;
  undefined4 local_118;
  undefined1 local_114 [63];
  undefined1 local_d5;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90 [2];
  long local_88;
  undefined *local_80;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  undefined4 local_54;
  
  bVar8 = *param_3;
  if (7 < bVar8) {
    bVar8 = 0xff;
  }
  local_1b0 = (undefined *)CONCAT71(local_1b0._1_7_,bVar8);
  lVar4 = FUN_025830c0(DAT_055021a0,&local_1b0,1);
  if (lVar4 != 0) {
    if ((*(long **)(lVar4 + 0x28) == (long *)0x0) ||
       (puVar5 = (undefined8 *)**(long **)(lVar4 + 0x28), puVar5 == (undefined8 *)0x0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = (**(code **)*puVar5)();
      uVar2 = uVar2 ^ 1;
    }
    lVar6 = FUN_0265c8a0(param_2,*(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 8) + 0xc154);
    if ((((uVar2 & 1) == 0) && (*(long *)(lVar4 + 0x28) != 0)) &&
       (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x28) + 8), puVar5 != (undefined8 *)0x0)) {
      (**(code **)*puVar5)();
    }
    if (lVar6 != 0) {
      local_19c = 0;
      local_1a0 = 0x20;
      local_198 = 0xffffffff;
      uStack_190 = 0xffffffff00000000;
      puStack_1a8 = &local_d0;
      local_188 = 0xffffffff;
      puStack_178 = local_16c;
      local_170 = 0x40;
      local_12d = 0;
      local_16c[0] = 0;
      local_180 = PTR_DAT_04bb2bc0 + 0x10;
      local_118 = 0x40;
      local_d5 = 0;
      local_114[0] = 0;
      puStack_120 = local_114;
      puVar10 = PTR_DAT_04bb4e10 + 0x10;
      local_a0 = 0;
      uStack_98 = 0;
      puVar1 = local_90;
      if (local_90 <= (undefined4 *)((long)&local_d0 + 2U)) {
        puVar1 = (undefined4 *)((long)&local_d0 + 2U);
      }
      local_b0 = 0;
      uStack_a8 = 0;
      local_c0 = 0;
      uStack_b8 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      local_1b0 = puVar10;
      local_128 = local_180;
      memset(puStack_1a8,0,(long)puVar1 + (-0xe0 - (long)&local_1b0));
      if ((*(long **)(lVar6 + 0x98) == (long *)0x0) ||
         (puVar5 = (undefined8 *)**(long **)(lVar6 + 0x98), puVar5 == (undefined8 *)0x0)) {
        uVar2 = 1;
      }
      else {
        uVar2 = (**(code **)*puVar5)();
        uVar2 = uVar2 ^ 1;
        puVar10 = local_1b0;
      }
      local_90[0] = 10;
      local_88 = *(long *)(lVar6 + 0x80) + *(long *)(lVar6 + 0x78);
      (**(code **)(puVar10 + 0x38))(&local_1b0);
      local_68 = 0;
      uStack_60 = 0;
      local_70 = 0;
      local_58 = 1;
      local_54 = 0;
      local_80 = PTR_DAT_04bc0cd8 + 0x10;
      local_78 = 0;
      FUN_02906b00(&local_80,&local_1b0,local_90);
      if ((((uVar2 & 1) == 0) && (*(long *)(lVar6 + 0x98) != 0)) &&
         (puVar5 = *(undefined8 **)(*(long *)(lVar6 + 0x98) + 8), puVar5 != (undefined8 *)0x0)) {
        (**(code **)*puVar5)();
      }
      local_80 = (undefined *)CONCAT44(local_80._4_4_,10);
      local_78 = *(long *)(*(long *)(param_1 + 8) + 0x288) + 0xa4;
      FUN_02906c90(&local_80,&local_1b0);
      uVar9 = *(undefined8 *)(**(long **)(*(long *)(*(long *)(param_1 + 8) + 0x290) + 0x20) + 8);
      if (((DAT_0533a3c0 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_0533a3c0), iVar3 != 0)) {
        FUN_01bb25c8(&DAT_0533a3b0);
        __cxa_guard_release(&DAT_0533a3c0);
      }
      if (0 < (int)DAT_0533a3b0) {
        uVar7 = 0;
        do {
          if (*(int *)(DAT_0533a3b8 + uVar7 * 4) == 0x73) goto LAB_00b80790;
          uVar7 = uVar7 + 1;
        } while (DAT_0533a3b0 != uVar7);
      }
      uVar7 = 0;
LAB_00b80790:
      local_80 = (undefined *)CONCAT44(local_80._4_4_,(int)uVar7);
      FUN_01bae480(uVar9,&local_1b0,0,&local_80,0);
    }
  }
  return;
}

