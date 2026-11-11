
undefined8 FUN_0053b740(long param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  byte bVar2;
  byte bVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  ulong local_68;
  undefined8 local_60;
  undefined8 local_58;
  byte local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  uVar7 = 0;
  if ((*(float *)((long)param_2 + 0x14) <= DAT_04102ec4) &&
     (0.0 <= *(float *)((long)param_2 + 0x14))) {
    puVar11 = *(undefined8 **)(param_1 + 600);
    if (puVar11 == (undefined8 *)0x0) {
      lVar8 = *(long *)(param_1 + 0x18);
      local_48 = *(undefined8 *)(lVar8 + 0x140);
      local_40 = *(undefined8 *)(lVar8 + 0x148);
      uStack_38 = *(undefined8 *)(lVar8 + 0x150);
      puVar11 = (undefined8 *)FUN_00438810(0x18);
      FUN_0053c920();
      *(undefined8 **)(param_1 + 600) = puVar11;
    }
    else {
      local_48 = *puVar11;
      local_40 = puVar11[1];
      uStack_38 = puVar11[2];
    }
    uVar7 = *param_2;
    uVar10 = param_2[2];
    puVar11[1] = param_2[1];
    puVar11[2] = uVar10;
    *puVar11 = uVar7;
    uVar1 = 0;
    if (*(char *)(*(long *)(param_1 + 0x18) + 0x180) != '\0') {
      uVar1 = *(undefined1 *)((long)param_2 + 0xc);
    }
    *(undefined1 *)(*(long *)(param_1 + 600) + 0xc) = uVar1;
    if (*(long *)(param_1 + 0x198) != 0) {
      *(undefined1 *)(*(long *)(param_1 + 0x198) + 0x9d) =
           *(undefined1 *)(*(long *)(param_1 + 600) + 0xc);
      if (*(char *)(*(long *)(param_1 + 0x198) + 0x9d) != '\0') {
        *(undefined1 *)(*(long *)(param_1 + 0x198) + 0x9c) =
             *(undefined1 *)(*(long *)(param_1 + 600) + 0xd);
        *(undefined4 *)(*(long *)(param_1 + 0x198) + 0x98) =
             *(undefined4 *)(*(long *)(param_1 + 600) + 0x10);
      }
    }
    puVar9 = *(ulong **)(param_1 + 600);
    local_78 = local_40;
    uVar10 = local_78;
    local_70 = uStack_38;
    uVar6 = local_70;
    local_80 = local_48;
    uVar7 = local_80;
    local_68 = *puVar9;
    local_80._0_4_ = (float)local_48;
    uVar4 = puVar9[1];
    uVar5 = puVar9[2];
    local_58._0_4_ = (float)uVar5;
    local_58._4_4_ = (float)(uVar5 >> 0x20);
    local_80._4_1_ = (char)((ulong)local_48 >> 0x20);
    local_78._0_4_ = (float)local_40;
    local_60._0_4_ = (float)uVar4;
    bVar2 = (float)local_80 != (float)local_68 | 2;
    if (((local_68 >> 0x20 & 0xff) != 0) == (local_80._4_1_ != '\0')) {
      bVar2 = (float)local_80 != (float)local_68;
    }
    local_78._4_1_ = (char)((ulong)local_40 >> 0x20);
    local_70._0_4_ = (float)uStack_38;
    local_70._4_4_ = (float)((ulong)uStack_38 >> 0x20);
    bVar3 = bVar2 | 4;
    if ((float)local_78 == (float)local_60) {
      bVar3 = bVar2;
    }
    local_60._4_1_ = (char)(uVar4 >> 0x20);
    local_78._5_1_ = (char)((ulong)local_40 >> 0x28);
    bVar2 = bVar3 | 8;
    if ((local_60._4_1_ != '\0') == (local_78._4_1_ != '\0')) {
      bVar2 = bVar3;
    }
    local_60._5_1_ = (char)(uVar4 >> 0x28);
    if (local_78._5_1_ != local_60._5_1_) {
      bVar2 = bVar2 | 0x10;
    }
    bVar3 = bVar2 | 0x20;
    if ((float)local_70 == (float)local_58) {
      bVar3 = bVar2;
    }
    local_50 = bVar3 | 0x40;
    if (local_70._4_4_ == local_58._4_4_) {
      local_50 = bVar3;
    }
    local_80 = uVar7;
    local_78 = uVar10;
    local_70 = uVar6;
    local_60 = uVar4;
    local_58 = uVar5;
    FUN_0053b930(*(long *)(param_1 + 0x270) + 0xf8,param_1,&local_80);
    uVar7 = 1;
  }
  return uVar7;
}

