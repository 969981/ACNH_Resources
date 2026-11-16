
void FUN_027b6c14(long *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined4 uVar7;
  long lVar8;
  short *psVar9;
  undefined *local_148;
  undefined4 local_140;
  undefined *local_138;
  undefined *puStack_130;
  undefined4 local_128;
  undefined1 local_124;
  undefined4 local_123;
  undefined8 local_11c;
  undefined8 local_114;
  undefined8 local_10c;
  undefined8 local_104;
  undefined8 local_fc;
  undefined8 local_f4;
  undefined8 local_ec;
  undefined4 local_e4;
  undefined *local_e0;
  undefined1 *local_d8;
  long lStack_d0;
  undefined *local_c8;
  undefined1 *local_c0;
  undefined4 local_b8;
  undefined1 local_b4 [127];
  undefined1 local_35;
  
  if (*(int *)((long)param_1 + 0x2c) != 0) {
    return;
  }
  param_1[3] = *param_2;
  *(int *)(param_1 + 4) = (int)param_2[1];
  *(undefined4 *)((long)param_1 + 0x24) = *(undefined4 *)((long)param_2 + 0xc);
  *(int *)(param_1 + 5) = (int)param_2[2];
  puVar3 = PTR_DAT_04bb49b8;
  if (*(long *)PTR_DAT_04bb49b8 == 0) {
LAB_027b6dc4:
    if (*param_1 != 0) {
      uVar7 = 1;
      goto LAB_027b6dd8;
    }
  }
  else {
    if (*param_1 != 0) {
      psVar9 = *(short **)(*param_1 + 8);
      if (psVar9 == (short *)0x0) {
LAB_027b6db4:
        lVar8 = 0;
      }
      else {
LAB_027b6c78:
        uVar5 = FUN_03eaa5e0(psVar9);
        if ((uVar5 & 1) == 0) {
          psVar9 = (short *)0x0;
          goto LAB_027b6db4;
        }
        uVar1 = *(uint *)(psVar9 + 6);
        uVar2 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
        uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
        if (*psVar9 != 0x5942) {
          uVar2 = uVar1;
        }
        if (uVar2 == 0) goto LAB_027b6db4;
        lVar8 = (long)psVar9 + (ulong)uVar2;
      }
      param_1[1] = (long)psVar9;
      param_1[2] = lVar8;
      FUN_027b7320(param_1);
      goto LAB_027b6dc4;
    }
    local_c0 = local_b4;
    local_35 = 0;
    local_b4[0] = 0;
    local_b8 = 0x80;
    local_c8 = PTR_DAT_04bb2d88 + 0x10;
    FUN_027b6e30(param_1,&local_c8,(int)param_2[1],*(undefined4 *)((long)param_2 + 0xc),
                 (int)param_2[2]);
    local_140 = 1;
    local_128 = 0x1010100;
    local_123 = 0x1010101;
    local_124 = 0;
    local_11c = 0;
    local_114 = 0;
    local_138 = PTR_DAT_04bb2020 + 0x10;
    local_10c = 0;
    local_104 = 0;
    local_fc = 0;
    local_f4 = 0;
    local_ec = 0;
    local_e4 = 0;
    puStack_130 = PTR_DAT_04bb2120;
    local_148 = PTR_DAT_04bdf0b0 + 0x10;
    lStack_d0 = param_1[3];
    local_d8 = local_c0;
    local_e0 = local_138;
    puVar6 = (undefined8 *)FUN_03f35730(*(undefined8 *)puVar3,&local_148);
    if (((*PTR_DAT_04bb2828 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb2828), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb2820 = PTR_DAT_04bb2830 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb2828);
    }
    if ((puVar6 != (undefined8 *)0x0) &&
       (uVar5 = (**(code **)*puVar6)(puVar6,PTR_DAT_04bb2820), (uVar5 & 1) != 0)) {
      *param_1 = (long)puVar6;
      psVar9 = (short *)puVar6[1];
      if (psVar9 != (short *)0x0) goto LAB_027b6c78;
      goto LAB_027b6db4;
    }
    *param_1 = 0;
  }
  uVar7 = 2;
LAB_027b6dd8:
  *(undefined4 *)((long)param_1 + 0x2c) = uVar7;
  return;
}

