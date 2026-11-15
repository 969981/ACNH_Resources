
void FUN_0207e760(long *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  ulong uVar7;
  uint *puVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  undefined2 local_128 [2];
  undefined8 local_124;
  undefined8 local_11c;
  undefined4 local_114;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined8 local_b4;
  undefined1 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined4 local_58;
  
  lVar10 = *param_1;
  local_124 = 0xffffffffffffffff;
  local_11c = 0xffffffffffffffff;
  local_114 = 0xffffffff;
  local_110 = 0xbf800000;
  uStack_108 = 0;
  local_100 = 0xffffffffffffffff;
  uStack_f8 = 0xffffffff00000000;
  local_c0 = 0;
  local_bc = 0xffffffffffffffff;
  local_b4 = 0xffffffffffffffff;
  local_ac = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0xffffffff;
  local_128[0] = 0;
  local_f0 = 0xffffffff00000000;
  uStack_e8 = 0xffffffffffffffff;
  local_e0 = 0;
  uStack_d8 = 0xffffffff;
  local_d0 = 0xffffffff00000000;
  uStack_c8 = 0xffffffff00000000;
  local_a8 = 0xffffffffffffffff;
  uStack_a0 = 0xffffffffbf800000;
  lVar9 = *(long *)(*(long *)(lVar10 + 8) + 0x68);
  iVar11 = -1;
  if (lVar9 != 0) {
    FUN_029a7b28(*(long *)PTR_DAT_04bb26a8 + 0x6d8,local_128,lVar9 + 0x278);
    iVar11 = local_124._4_4_;
  }
  if ((undefined8 *)param_1[0x18] != (undefined8 *)0x0) {
    iVar2 = *(int *)(lVar10 + 0x7884);
    uVar7 = (*(code *)**(undefined8 **)param_1[0x18])();
    puVar6 = PTR_DAT_04bb3968;
    if (((uVar7 & 1) != 0) && (iVar11 < iVar2)) {
      *(undefined1 *)(lVar10 + 0x789f) = 1;
      lVar9 = *(long *)puVar6;
      puVar8 = (uint *)(**(code **)(*(long *)(lVar9 + 0x2628) + 0xf0))(lVar9 + 0x2628);
      lVar9 = *(long *)puVar6;
      uVar3 = *puVar8;
      puVar8 = (uint *)(**(code **)(*(long *)(lVar9 + 0x2658) + 0xf0))(lVar9 + 0x2658);
      uVar1 = *puVar8 & ((int)*puVar8 >> 0x1f ^ 0xffffffffU);
      lVar9 = *(long *)(*param_1 + 8);
      if ((int)uVar3 <= (int)uVar1) {
        uVar3 = uVar1;
      }
      uVar4 = *(uint *)(lVar9 + 0x288);
      *(undefined4 *)(lVar9 + 0x288) = *(undefined4 *)(lVar9 + 0x28c);
      uVar4 = uVar4 ^ uVar4 << 0xb;
      *(undefined4 *)(lVar9 + 0x28c) = *(undefined4 *)(lVar9 + 0x290);
      uVar5 = *(uint *)(lVar9 + 0x294);
      *(uint *)(lVar9 + 0x290) = uVar5;
      uVar4 = uVar4 >> 8 ^ uVar5 >> 0x13 ^ uVar4 ^ uVar5;
      *(uint *)(lVar9 + 0x294) = uVar4;
      *(uint *)(lVar10 + 0x7888) = uVar1 + (int)((ulong)uVar4 * (ulong)(uVar3 - uVar1) >> 0x20);
    }
  }
  *(int *)(lVar10 + 0x7884) = iVar11;
  if ((*(char *)(lVar10 + 0x789f) != '\0') && (*(int *)(lVar10 + 0x7888) < iVar11)) {
    *(undefined1 *)(lVar10 + 0x7878) = 1;
  }
  return;
}

