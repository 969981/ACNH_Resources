
undefined4 FUN_038ced70(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  ushort uVar8;
  uint uVar9;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_18 = nn::oe::GetDesiredLanguage();
  uVar3 = (uint)local_18;
  if ((uVar3 & 0xff) - 100 < 0x17) {
    uVar1 = uVar3 >> 8 & 0xff;
    uVar2 = uVar3 >> 0x10 & 0xff;
    uVar6 = (uint)(local_18 >> 0x18) & 0xff;
    uVar9 = (uint)(local_18 >> 0x20);
    uVar7 = uVar9 & 0xff;
    uVar9 = uVar9 >> 8 & 0xff;
    uVar8 = (ushort)(local_18 >> 0x30) & 0xff;
    switch(uVar3 & 0xff) {
    case 100:
      if ((uVar1 == 0x65) && (uVar2 == 0)) {
        return 4;
      }
      break;
    case 0x65:
      if (((uVar9 != 0) || (uVar6 != 0x55)) || ((uVar7 != 0x53 || (uVar1 != 0x6e || uVar2 != 0x2d)))
         ) {
        if ((uVar9 != 0) || ((uVar6 != 0x47 || uVar7 != 0x42) || (uVar1 != 0x6e || uVar2 != 0x2d)))
        {
          if (((uVar1 == 0x73) && (uVar2 == 0)) ||
             ((((uVar2 == 0x2d && (uVar6 == 0x34)) && (uVar7 == 0x31)) &&
              (((uVar9 == 0x39 && ((local_18 & 0xff000000000000) == 0)) && (uVar1 == 0x73)))))) {
            return 2;
          }
          break;
        }
      }
      return 1;
    case 0x66:
      if (((uVar1 == 0x72) && (uVar2 == 0)) ||
         (((uVar1 == 0x72 && (((uVar9 == 0 && (uVar7 == 0x41)) && (uVar2 == 0x2d)))) &&
          (uVar6 == 0x43)))) {
        return 3;
      }
      break;
    case 0x69:
      if ((uVar1 == 0x74) && (uVar2 == 0)) {
        return 5;
      }
      break;
    case 0x6a:
      if ((uVar1 == 0x61) && (uVar2 == 0)) {
        return 0;
      }
      break;
    case 0x7a:
      if (((((((uVar1 == 0x68 && uVar2 == 0x2d) && uVar6 == 0x48) && uVar7 == 0x61) && uVar9 == 0x6e
            ) && (uVar8 == 0x73)) && (local_18 >> 0x38 == 0)) ||
         ((uVar8 == 0x74 &&
           ((((uVar1 == 0x68 && uVar2 == 0x2d) && uVar6 == 0x48) && uVar7 == 0x61) && uVar9 == 0x6e)
          && (local_18 >> 0x38 == 0)))) {
        return 10;
      }
    }
  }
  local_20 = 0x6f6b;
  uVar4 = FUN_032c54b0(&local_18,&local_20);
  if ((uVar4 & 1) == 0) {
    local_20 = 0x6c6e;
    uVar4 = FUN_032c54b0(&local_18,&local_20);
    if ((uVar4 & 1) == 0) {
      local_20 = 0x7470;
      uVar4 = FUN_032c54b0(&local_18,&local_20);
      if ((uVar4 & 1) == 0) {
        local_28 = 0x52422d7470;
        uVar4 = FUN_032c54b0(&local_18,&local_28);
        if ((uVar4 & 1) == 0) {
          local_20 = 0x7572;
          uVar4 = FUN_032c54b0(&local_18,&local_20);
          uVar5 = 8;
          if ((uVar4 & 1) == 0) {
            uVar5 = 0;
          }
          return uVar5;
        }
      }
      uVar5 = 6;
    }
    else {
      uVar5 = 7;
    }
  }
  else {
    uVar5 = 9;
  }
  return uVar5;
}

