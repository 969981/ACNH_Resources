
/* WARNING: Type propagation algorithm not settling */

void FUN_03501f5c(long param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  int local_140;
  undefined4 uStack_13c;
  undefined *local_138;
  undefined8 *puStack_130;
  undefined4 local_128;
  undefined1 local_124;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined *local_108;
  undefined1 *puStack_100;
  undefined4 local_f8;
  undefined1 local_f4 [63];
  undefined1 local_b5;
  undefined *local_b0;
  undefined1 *puStack_a8;
  undefined4 local_a0;
  undefined1 local_9c [63];
  undefined1 local_5d;
  undefined8 local_58;
  undefined6 uStack_50;
  undefined2 local_4a;
  undefined6 uStack_48;
  undefined1 auStack_42 [2];
  undefined8 local_40;
  undefined1 local_38;
  undefined2 local_36;
  
  uVar3 = *(uint *)(param_1 + 0x1ce14);
  if ((int)uVar3 < 0) goto LAB_03502118;
  iVar5 = *(int *)(param_1 + 0x1ce20);
  if (iVar5 - 3U < 2) {
    if (9 < (int)uVar3) goto LAB_03502118;
    goto LAB_03502028;
  }
  uVar7 = 0;
  local_140 = iVar5;
  if (DAT_0538adc8 == 0) goto joined_r0x0350217c;
  if (*(long *)(DAT_0538adc8 + 0x68) == 0) {
switchD_03501fd8_default:
    if (uVar3 < 0x80000000) goto LAB_03502118;
    goto LAB_03502028;
  }
  switch(iVar5) {
  case 0:
    uVar7 = *(uint *)(DAT_0538adc8 + 0x170);
    break;
  case 1:
    uVar7 = *(uint *)(DAT_0538adc8 + 0x180);
    break;
  case 2:
    lVar9 = *(long *)(DAT_0538adc8 + 0x1b8);
    uVar7 = *(uint *)(DAT_0538adc8 + 0x1b0);
    goto LAB_03502170;
  case 3:
    uVar7 = *(uint *)(DAT_0538adc8 + 0x610) &
            ((int)*(uint *)(DAT_0538adc8 + 0x610) >> 0x1f ^ 0xffffffffU);
    break;
  case 4:
    lVar9 = *(long *)(DAT_0538adc8 + 0x1e0);
    uVar7 = *(uint *)(DAT_0538adc8 + 0x1d8);
LAB_03502170:
    if (lVar9 == 0) {
      uVar7 = 0xffffffff;
    }
    break;
  default:
    goto switchD_03501fd8_default;
  }
joined_r0x0350217c:
  if ((int)uVar3 < (int)uVar7) {
LAB_03502028:
    lVar9 = param_1 + 0x1ce28 + (ulong)uVar3 * 0x18;
    if (0x20 < uVar3) {
      lVar9 = param_1 + 0x1ce28;
    }
    puVar1 = (undefined8 *)(lVar9 + 8);
    uVar6 = FUN_01d77c78(puVar1);
    if ((uVar6 & 1) != 0) {
      local_124 = 0;
      local_120 = 0xffffffff;
      uStack_118 = 0xffffffff00000000;
      local_128 = 0xb;
      puStack_130 = &local_58;
      local_110 = 0xffffffff;
      puStack_100 = local_f4;
      local_f8 = 0x40;
      local_b5 = 0;
      local_f4[0] = 0;
      local_108 = PTR_DAT_04bb2bc0 + 0x10;
      local_a0 = 0x40;
      local_5d = 0;
      local_9c[0] = 0;
      puStack_a8 = local_9c;
      uStack_48 = 0;
      local_138 = PTR_DAT_04bb5128 + 0x10;
      puVar2 = auStack_42;
      if (auStack_42 <= (undefined1 *)((long)&local_58 + 2U)) {
        puVar2 = (undefined1 *)((long)&local_58 + 2U);
      }
      local_58 = 0;
      uStack_50 = 0;
      local_4a = 0;
      local_b0 = local_108;
      memset(puStack_130,0,(ulong)(puVar2 + (-0xe1 - (long)&local_138)) & 0xfffffffffffffffc | 2);
      local_40 = 0;
      local_38 = 0;
      local_36 = *(undefined2 *)PTR_DAT_04bb3170;
      iVar5 = FUN_01d778dc(puVar1,&local_140);
      lVar4 = DAT_05370cd0;
      if (iVar5 == 0) {
        *(ulong *)(DAT_05370cd0 + 0x38) = CONCAT44(uStack_13c,local_140);
        uVar8 = *puVar1;
        *(undefined8 *)(lVar4 + 0x2b) = *(undefined8 *)(lVar9 + 0xf);
        *(undefined8 *)(lVar4 + 0x24) = uVar8;
        *(undefined1 *)(lVar4 + 0x32) = 1;
        return;
      }
    }
  }
LAB_03502118:
  *(undefined8 *)(DAT_05370cd0 + 0x38) = 0;
  return;
}

