
undefined4 FUN_038ceb30(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_18 = nn::oe::GetDesiredLanguage();
  uVar3 = (uint)local_18;
  uVar1 = uVar3 & 0xff;
  uVar2 = uVar3 >> 8 & 0xff;
  uVar3 = uVar3 >> 0x10 & 0xff;
  if (0xb < uVar1 - 0x65) {
switchD_038ceb7c_caseD_67:
    if (uVar1 == 0x6e) {
      if (uVar2 != 0x6c) goto LAB_038ceca8;
    }
    else if (uVar1 == 0x69) {
      if (uVar2 != 0x74) goto LAB_038ceca8;
    }
    else if ((uVar1 != 100) || (uVar2 != 0x65)) goto LAB_038ceca8;
    goto LAB_038ceca4;
  }
  uVar6 = (uint)(local_18 >> 0x18) & 0xff;
  uVar8 = (uint)(local_18 >> 0x20);
  uVar7 = uVar8 & 0xff;
  uVar8 = uVar8 >> 8 & 0xff;
  switch(uVar1) {
  case 0x65:
    if ((((uVar8 == 0) && (uVar6 == 0x55)) && ((uVar7 == 0x53 && (uVar2 == 0x6e && uVar3 == 0x2d))))
       || (((uVar3 == 0x2d && ((local_18 & 0xff000000000000) == 0)) &&
           ((uVar8 == 0x39 && (((uVar7 == 0x31 && (uVar2 == 0x73)) && (uVar6 == 0x34)))))))) {
      return 1;
    }
    if ((uVar8 == 0) && ((uVar6 == 0x47 && uVar7 == 0x42) && (uVar2 == 0x6e && uVar3 == 0x2d))) {
      return 2;
    }
    if (uVar2 != 0x73) goto LAB_038ceca8;
    break;
  case 0x66:
    if ((uVar8 == 0) &&
       ((((uVar7 == 0x41 && (uVar6 == 0x43)) && (uVar2 == 0x72)) && (uVar3 == 0x2d)))) {
      return 1;
    }
    if (uVar2 != 0x72) goto LAB_038ceca8;
    break;
  default:
    goto switchD_038ceb7c_caseD_67;
  case 0x6a:
    if ((uVar2 == 0x61) && (uVar3 == 0)) {
      return 0;
    }
    goto LAB_038ceca8;
  case 0x70:
    if ((((uVar8 == 0) && (uVar7 == 0x52)) && (uVar6 == 0x42)) &&
       ((uVar2 == 0x74 && (uVar3 == 0x2d)))) {
      return 1;
    }
    goto LAB_038ceca8;
  }
LAB_038ceca4:
  if (uVar3 == 0) {
    return 2;
  }
LAB_038ceca8:
  local_20 = 0x7470;
  uVar4 = FUN_032c54b0(&local_18,&local_20);
  if ((uVar4 & 1) == 0) {
    local_28 = 0x7572;
    uVar4 = FUN_032c54b0(&local_18,&local_28);
    if ((uVar4 & 1) == 0) {
      local_20 = 0x6f6b;
      uVar4 = FUN_032c54b0(&local_18,&local_20);
      if ((uVar4 & 1) != 0) {
        return 3;
      }
      local_20 = 0x736e61482d687a;
      uVar4 = FUN_032c54b0(&local_18,&local_20);
      if ((uVar4 & 1) != 0) {
        return 4;
      }
      local_20 = 0x746e61482d687a;
      uVar4 = FUN_032c54b0(&local_18,&local_20);
      uVar5 = 5;
      if ((uVar4 & 1) == 0) {
        uVar5 = 0;
      }
      return uVar5;
    }
  }
  return 2;
}

