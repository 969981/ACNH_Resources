
undefined8 FUN_00694b3c(long param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  uint6 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 local_50;
  ulong local_48 [3];
  byte local_14 [4];
  
  local_14[0] = 0;
  uVar6 = (**(code **)(*param_2 + 0x10))(param_2,local_14,1);
  if ((uVar6 & 1) == 0) {
    return 0;
  }
  local_48[0] = (ulong)(char)local_14[0];
  if (-1 < (long)local_48[0]) {
switchD_00694cec_default:
    lVar1 = param_1 + 8;
    local_50 = 2;
    local_48[2] = 0;
    local_48[1] = 1;
    uVar6 = FUN_0069414c(lVar1);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    if ((*(code **)(param_1 + 0x220) == (code *)0x0) ||
       (uVar6 = (**(code **)(param_1 + 0x220))(lVar1,&local_50,*(undefined8 *)(param_1 + 0x228)),
       (uVar6 & 1) != 0)) {
      FUN_00694588(lVar1);
      return 1;
    }
    return 0;
  }
  if (local_14[0] < 0x90) {
    uVar6 = FUN_00695ab0(param_1,param_2,local_14[0] & 0xf);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    return 1;
  }
  if (local_14[0] < 0xa0) {
    uVar6 = FUN_00695d00(param_1,param_2,local_14[0] & 0xf);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    return 1;
  }
  if (local_14[0] < 0xc0) {
    local_48[1] = 0;
    local_48[2] = 0;
    local_50 = 4;
    local_48[0] = 0;
    uVar6 = FUN_00695884(param_1,local_48,param_2,local_14[0] & 0x1f);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    uVar6 = FUN_00695810(param_1,&local_50);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    return 1;
  }
  uVar2 = local_50._4_4_;
  uVar5 = local_50._2_6_;
  switch(local_14[0]) {
  case 0xc0:
    local_48[1] = 0;
    local_48[2] = 0;
    local_50 = 0;
    local_48[0] = 0;
    uVar6 = FUN_00695810(param_1,&local_50);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    break;
  case 0xc1:
    goto switchD_00694cec_caseD_c1;
  case 0xc2:
    local_50 = 1;
    local_48[0] = 0;
    goto LAB_00695224;
  case 0xc3:
    local_48[1] = 0;
    local_48[2] = 0;
    local_50 = 1;
    local_48[0] = 1;
    uVar6 = FUN_00695810(param_1,&local_50);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    break;
  case 0xc4:
    local_50 = local_50 & 0xffffffffffffff00;
    uVar6 = (**(code **)(*param_2 + 0x10))(param_2,&local_50,1);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    uVar6 = local_50 & 0xff;
    local_48[1] = 0;
    local_48[2] = 0;
    local_50 = 5;
    local_48[0] = 0;
    uVar6 = FUN_00695940(param_1,local_48,param_2,uVar6);
    if (((uVar6 & 1) == 0) || (uVar6 = FUN_00695810(param_1,&local_50), (uVar6 & 1) == 0)) {
      return 0;
    }
    break;
  case 0xc5:
    local_50 = (ulong)uVar5 << 0x10;
    uVar6 = (**(code **)(*param_2 + 0x10))(param_2,&local_50,2);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    uVar4 = (ushort)local_50 >> 8;
    uVar3 = (ushort)local_50 << 8;
    local_48[1] = 0;
    local_48[2] = 0;
    local_50 = 5;
    local_48[0] = 0;
    uVar6 = FUN_00695940(param_1,local_48,param_2,uVar4 | uVar3);
    if (((uVar6 & 1) == 0) || (uVar6 = FUN_00695810(param_1,&local_50), (uVar6 & 1) == 0)) {
      return 0;
    }
    break;
  case 0xc6:
    local_50 = (ulong)uVar2 << 0x20;
    uVar6 = (**(code **)(*param_2 + 0x10))(param_2,&local_50,4);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    uVar2 = ((uint)local_50 & 0xff00ff00) >> 8 | ((uint)local_50 & 0xff00ff) << 8;
    local_48[1] = 0;
    local_48[2] = 0;
    local_50 = 5;
    local_48[0] = 0;
    uVar6 = FUN_00695940(param_1,local_48,param_2,uVar2 >> 0x10 | uVar2 << 0x10);
    if (((uVar6 & 1) == 0) || (uVar6 = FUN_00695810(param_1,&local_50), (uVar6 & 1) == 0)) {
      return 0;
    }
    break;
  case 199:
    local_50 = (ulong)local_50._1_7_ << 8;
    uVar6 = (**(code **)(*param_2 + 0x10))(param_2,&local_50,1);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    uVar6 = local_50 & 0xff;
    local_48[1] = 0;
    local_48[2] = 0;
    local_50 = 6;
    local_48[0] = 0;
    uVar6 = FUN_006959dc(param_1,local_48,param_2,uVar6);
    if (((uVar6 & 1) == 0) || (uVar6 = FUN_00695810(param_1,&local_50), (uVar6 & 1) == 0)) {
      return 0;
    }
    break;
  case 200:
    local_50 = (ulong)uVar5 << 0x10;
    uVar6 = (**(code **)(*param_2 + 0x10))(param_2,&local_50,2);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    uVar4 = (ushort)local_50 >> 8;
    uVar3 = (ushort)local_50 << 8;
    local_48[1] = 0;
    local_48[2] = 0;
    local_50 = 6;
    local_48[0] = 0;
    uVar6 = FUN_006959dc(param_1,local_48,param_2,uVar4 | uVar3);
    if (((uVar6 & 1) == 0) || (uVar6 = FUN_00695810(param_1,&local_50), (uVar6 & 1) == 0)) {
      return 0;
    }
    break;
  case 0xc9:
    local_50 = (ulong)uVar2 << 0x20;
    uVar6 = (**(code **)(*param_2 + 0x10))(param_2,&local_50,4);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    uVar2 = ((uint)local_50 & 0xff00ff00) >> 8 | ((uint)local_50 & 0xff00ff) << 8;
    local_48[1] = 0;
    local_48[2] = 0;
    local_50 = 6;
    local_48[0] = 0;
    uVar6 = FUN_006959dc(param_1,local_48,param_2,uVar2 >> 0x10 | uVar2 << 0x10);
    if (((uVar6 & 1) == 0) || (uVar6 = FUN_00695810(param_1,&local_50), (uVar6 & 1) == 0)) {
      return 0;
    }
    break;
  case 0xca:
    local_50 = (ulong)uVar2 << 0x20;
    uVar6 = (**(code **)(*param_2 + 0x10))(param_2,&local_50,4);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    uVar2 = (uint)local_50;
    local_50 = 3;
    local_48[2] = 0;
    uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    local_48[0] = (ulong)(uVar2 >> 0x10 | uVar2 << 0x10);
    local_48[1] = 1;
    uVar6 = FUN_00695810(param_1,&local_50);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    break;
  case 0xcb:
    local_50 = 0;
    uVar6 = (**(code **)(*param_2 + 0x10))(param_2,&local_50,8);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    uVar7 = 3;
    uVar6 = (local_50 & 0xff00ff00ff00ff00) >> 8 | (local_50 & 0xff00ff00ff00ff) << 8;
    uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
    local_48[0] = uVar6 >> 0x20 | uVar6 << 0x20;
    goto LAB_0069521c;
  case 0xcc:
    local_50 = (ulong)local_50._1_7_ << 8;
    uVar6 = (**(code **)(*param_2 + 0x10))(param_2,&local_50,1);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    local_48[0] = local_50 & 0xff;
    local_48[2] = 0;
    local_48[1] = 1;
    local_50 = 2;
    uVar6 = FUN_00695810(param_1,&local_50);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    break;
  case 0xcd:
    local_50 = (ulong)uVar5 << 0x10;
    uVar6 = (**(code **)(*param_2 + 0x10))(param_2,&local_50,2);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    local_48[2] = 0;
    local_48[0] = (ulong)((uint)((ushort)local_50 >> 8) | ((ushort)local_50 & 0xff00ff) << 8);
    local_50 = 2;
    local_48[1] = 1;
    uVar6 = FUN_00695810(param_1,&local_50);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    break;
  case 0xce:
    local_50 = (ulong)uVar2 << 0x20;
    uVar6 = (**(code **)(*param_2 + 0x10))(param_2,&local_50,4);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    local_48[2] = 0;
    uVar2 = ((uint)local_50 & 0xff00ff00) >> 8 | ((uint)local_50 & 0xff00ff) << 8;
    local_48[0] = (ulong)(uVar2 >> 0x10 | uVar2 << 0x10);
    local_50 = 2;
    local_48[1] = 1;
    uVar6 = FUN_00695810(param_1,&local_50);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    break;
  case 0xcf:
    local_50 = 0;
    uVar6 = (**(code **)(*param_2 + 0x10))(param_2,&local_50,8);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    uVar7 = 2;
    uVar6 = (local_50 & 0xff00ff00ff00ff00) >> 8 | (local_50 & 0xff00ff00ff00ff) << 8;
    uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
    local_48[0] = uVar6 >> 0x20 | uVar6 << 0x20;
LAB_0069521c:
    local_50 = uVar7;
LAB_00695224:
    local_48[2] = 0;
    local_48[1] = 0;
    uVar6 = FUN_00695810(param_1,&local_50);
    if ((uVar6 & 1) == 0) {
switchD_00694cec_caseD_c1:
      return 0;
    }
    break;
  case 0xd0:
    local_50 = (ulong)local_50._1_7_ << 8;
    uVar6 = (**(code **)(*param_2 + 0x10))(param_2,&local_50,1);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    local_48[0] = (ulong)(char)local_50;
    local_48[2] = 0;
    local_48[1] = 1;
    local_50 = 2;
    uVar6 = FUN_00695810(param_1,&local_50);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    break;
  case 0xd1:
    local_50 = (ulong)uVar5 << 0x10;
    uVar6 = (**(code **)(*param_2 + 0x10))(param_2,&local_50,2);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    local_48[2] = 0;
    local_48[0] = (ulong)(short)((ushort)local_50 >> 8 | (ushort)local_50 << 8);
    local_50 = 2;
    local_48[1] = 1;
    uVar6 = FUN_00695810(param_1,&local_50);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    break;
  case 0xd2:
    local_50 = (ulong)uVar2 << 0x20;
    uVar6 = (**(code **)(*param_2 + 0x10))(param_2,&local_50,4);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    local_48[2] = 0;
    uVar2 = ((uint)local_50 & 0xff00ff00) >> 8 | ((uint)local_50 & 0xff00ff) << 8;
    local_48[0] = (ulong)(int)(uVar2 >> 0x10 | uVar2 << 0x10);
    local_50 = 2;
    local_48[1] = 1;
    uVar6 = FUN_00695810(param_1,&local_50);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    break;
  case 0xd3:
    local_50 = 0;
    uVar6 = (**(code **)(*param_2 + 0x10))(param_2,&local_50,8);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    local_48[2] = 0;
    uVar6 = (local_50 & 0xff00ff00ff00ff00) >> 8 | (local_50 & 0xff00ff00ff00ff) << 8;
    uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
    local_48[0] = uVar6 >> 0x20 | uVar6 << 0x20;
    local_50 = 2;
    local_48[1] = 1;
    uVar6 = FUN_00695810(param_1,&local_50);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    break;
  case 0xd4:
    local_48[1] = 0;
    local_48[2] = 0;
    local_50 = 6;
    local_48[0] = 0;
    uVar6 = FUN_006959dc(param_1,local_48,param_2,1);
    if (((uVar6 & 1) == 0) || (uVar6 = FUN_00695810(param_1,&local_50), (uVar6 & 1) == 0)) {
      return 0;
    }
    break;
  case 0xd5:
    local_48[1] = 0;
    local_48[2] = 0;
    local_50 = 6;
    local_48[0] = 0;
    uVar6 = FUN_006959dc(param_1,local_48,param_2,2);
    if (((uVar6 & 1) == 0) || (uVar6 = FUN_00695810(param_1,&local_50), (uVar6 & 1) == 0)) {
      return 0;
    }
    break;
  case 0xd6:
    local_48[1] = 0;
    local_48[2] = 0;
    local_50 = 6;
    local_48[0] = 0;
    uVar6 = FUN_006959dc(param_1,local_48,param_2,4);
    if (((uVar6 & 1) == 0) || (uVar6 = FUN_00695810(param_1,&local_50), (uVar6 & 1) == 0)) {
      return 0;
    }
    break;
  case 0xd7:
    local_48[1] = 0;
    local_48[2] = 0;
    local_50 = 6;
    local_48[0] = 0;
    uVar6 = FUN_006959dc(param_1,local_48,param_2,8);
    if (((uVar6 & 1) == 0) || (uVar6 = FUN_00695810(param_1,&local_50), (uVar6 & 1) == 0)) {
      return 0;
    }
    break;
  case 0xd8:
    local_48[1] = 0;
    local_48[2] = 0;
    local_50 = 6;
    local_48[0] = 0;
    uVar6 = FUN_006959dc(param_1,local_48,param_2,0x10);
    if (((uVar6 & 1) == 0) || (uVar6 = FUN_00695810(param_1,&local_50), (uVar6 & 1) == 0)) {
      return 0;
    }
    break;
  case 0xd9:
    local_50 = (ulong)local_50._1_7_ << 8;
    uVar6 = (**(code **)(*param_2 + 0x10))(param_2,&local_50,1);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    uVar6 = local_50 & 0xff;
    local_48[1] = 0;
    local_48[2] = 0;
    local_50 = 4;
    local_48[0] = 0;
    uVar6 = FUN_00695884(param_1,local_48,param_2,uVar6);
    if (((uVar6 & 1) == 0) || (uVar6 = FUN_00695810(param_1,&local_50), (uVar6 & 1) == 0)) {
      return 0;
    }
    break;
  case 0xda:
    local_50 = (ulong)uVar5 << 0x10;
    uVar6 = (**(code **)(*param_2 + 0x10))(param_2,&local_50,2);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    uVar4 = (ushort)local_50 >> 8;
    uVar3 = (ushort)local_50 << 8;
    local_48[1] = 0;
    local_48[2] = 0;
    local_50 = 4;
    local_48[0] = 0;
    uVar6 = FUN_00695884(param_1,local_48,param_2,uVar4 | uVar3);
    if (((uVar6 & 1) == 0) || (uVar6 = FUN_00695810(param_1,&local_50), (uVar6 & 1) == 0)) {
      return 0;
    }
    break;
  case 0xdb:
    local_50 = (ulong)uVar2 << 0x20;
    uVar6 = (**(code **)(*param_2 + 0x10))(param_2,&local_50,4);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    uVar2 = ((uint)local_50 & 0xff00ff00) >> 8 | ((uint)local_50 & 0xff00ff) << 8;
    local_48[1] = 0;
    local_48[2] = 0;
    local_50 = 4;
    local_48[0] = 0;
    uVar6 = FUN_00695884(param_1,local_48,param_2,uVar2 >> 0x10 | uVar2 << 0x10);
    if (((uVar6 & 1) == 0) || (uVar6 = FUN_00695810(param_1,&local_50), (uVar6 & 1) == 0)) {
      return 0;
    }
    break;
  case 0xdc:
    local_50 = (ulong)uVar5 << 0x10;
    uVar6 = (**(code **)(*param_2 + 0x10))(param_2,&local_50,2);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    uVar6 = FUN_00695d00(param_1,param_2,(ushort)local_50 >> 8 | (ushort)local_50 << 8);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    break;
  case 0xdd:
    local_50 = (ulong)uVar2 << 0x20;
    uVar6 = (**(code **)(*param_2 + 0x10))(param_2,&local_50,4);
    if ((uVar6 & 1) != 0) {
      uVar2 = ((uint)local_50 & 0xff00ff00) >> 8 | ((uint)local_50 & 0xff00ff) << 8;
      uVar6 = FUN_00695d00(param_1,param_2,uVar2 >> 0x10 | uVar2 << 0x10);
      if ((uVar6 & 1) != 0) {
        return 1;
      }
    }
    return 0;
  case 0xde:
    local_50 = (ulong)uVar5 << 0x10;
    uVar6 = (**(code **)(*param_2 + 0x10))(param_2,&local_50,2);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    uVar6 = FUN_00695ab0(param_1,param_2,(ushort)local_50 >> 8 | (ushort)local_50 << 8);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    break;
  case 0xdf:
    local_50 = (ulong)uVar2 << 0x20;
    uVar6 = (**(code **)(*param_2 + 0x10))(param_2,&local_50,4);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    uVar2 = ((uint)local_50 & 0xff00ff00) >> 8 | ((uint)local_50 & 0xff00ff) << 8;
    uVar6 = FUN_00695ab0(param_1,param_2,uVar2 >> 0x10 | uVar2 << 0x10);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    break;
  default:
    goto switchD_00694cec_default;
  }
  return 1;
}

