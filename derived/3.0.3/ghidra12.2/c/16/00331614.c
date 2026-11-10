
void FUN_00331614(long *param_1,undefined8 param_2,long param_3)

{
  ushort uVar1;
  byte bVar2;
  byte bVar3;
  ulong uVar4;
  uint6 uVar5;
  undefined8 uVar6;
  undefined2 uVar7;
  undefined3 uVar8;
  undefined8 uVar9;
  undefined1 uVar10;
  ulong uVar11;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  *param_1 = param_3;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  local_78 = (undefined8 *)0x0;
  local_90 = 0;
  uStack_88 = 0;
  FUN_0034fc84(&local_90);
  local_40 = 0;
  uStack_38 = 0;
  local_50 = 0;
  uStack_48 = 0;
  FUN_0034fc5c(&local_50);
  uVar9 = local_50;
  bVar2 = ((char *)*param_1)[6];
  bVar3 = (byte)local_50 & 0xfe | *(char *)*param_1 != '\0';
  local_50 = CONCAT71(local_50._1_7_,bVar3);
  if (bVar2 < 6) {
    uVar4 = (ulong)bVar2 << 3;
    uVar11 = 0x10500060606 >> (uVar4 & 0x38);
    local_50._0_2_ = CONCAT11((char)uVar11,bVar3);
    uVar7 = (undefined2)local_50;
    local_50 = (uVar11 & 0xff) << 0x20;
    uVar10 = (undefined1)(0x70102010107 >> (uVar4 & 0x38));
    local_50._0_3_ = CONCAT12(uVar10,uVar7);
    uVar8 = (undefined3)local_50;
    local_50._0_6_ = CONCAT15(uVar10,(undefined5)local_50);
    uVar10 = (undefined1)(0x20000L >> (uVar4 & 0x38));
    uVar5 = (uint6)(undefined6)local_50 >> 0x20;
    local_50._0_4_ = CONCAT13(uVar10,uVar8);
    local_50._7_1_ = SUB81(uVar9,7);
    local_50._0_7_ = CONCAT16(uVar10,CONCAT24((short)uVar5,(undefined4)local_50));
  }
  local_90._1_7_ = (uint7)(local_90 >> 8) & 0xfffffffffffbff;
  local_90 = CONCAT71(local_90._1_7_,1);
  local_78 = &local_50;
  uVar9 = FUN_0034eba4(&local_90);
  FUN_0034ebc4(param_1 + 1,param_1 + 0x10,uVar9);
  FUN_0034ebe0(param_1 + 1,param_2,&local_90);
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  local_78 = (undefined8 *)0x0;
  local_90 = 0;
  uStack_88 = 0;
  FUN_0034fcbc(&local_90);
  uVar1 = local_90._4_2_ & 0xfffc;
  local_90._0_6_ =
       CONCAT24(uVar1 | *(char *)(param_3 + 1) != '\0' |
                (ushort)(*(char *)(param_3 + 3) != '\0') << 1,(undefined4)local_90);
  switch(*(undefined1 *)(*param_1 + 2)) {
  case 0:
    local_90 = (ulong)local_90._1_7_ << 8;
    goto switchD_0033177c_default;
  case 1:
    uVar10 = 1;
    break;
  case 2:
    uVar10 = 2;
    break;
  case 3:
    uVar10 = 3;
    break;
  case 4:
    uVar10 = 4;
    break;
  case 5:
    uVar10 = 5;
    break;
  case 6:
    uVar10 = 6;
    break;
  case 7:
    uVar10 = 7;
    break;
  default:
    goto switchD_0033177c_default;
  }
  local_90 = CONCAT71(local_90._1_7_,uVar10);
switchD_0033177c_default:
  FUN_0034ee0c(param_1 + 6,param_2,&local_90);
  local_60 = 0;
  uStack_58 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_80 = 0;
  local_78 = (undefined8 *)0x0;
  local_90 = 0;
  uStack_88 = 0;
  FUN_0034fc18(&local_90);
  uVar9 = local_90;
  uVar1 = (ushort)local_90;
  local_90._0_3_ = (uint3)(ushort)local_90;
  if (*(char *)(*param_1 + 7) == '\x01') {
    uVar10 = 2;
  }
  else {
    if (*(char *)(*param_1 + 7) != '\x02') goto LAB_00331814;
    uVar10 = 1;
  }
  local_90._0_3_ = CONCAT12(uVar10,uVar1);
LAB_00331814:
  uVar6 = local_90;
  local_90._6_2_ = SUB82(uVar9,6);
  local_90 = CONCAT26(local_90._6_2_,(int6)uVar6) & 0xfffffff3ffffffff | 0x800000000;
  FUN_0034e9f0((long)param_1 + 0x4c,param_2,&local_90);
  return;
}

