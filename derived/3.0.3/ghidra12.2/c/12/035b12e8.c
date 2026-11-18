
ulong FUN_035b12e8(long param_1,long *param_2,undefined4 param_3,undefined4 param_4)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  ulong local_1080;
  undefined *local_1078;
  undefined4 local_1070;
  undefined1 local_106c;
  undefined4 local_1068;
  undefined **local_1060;
  undefined8 uStack_1058;
  ulong local_1050;
  undefined *local_1048 [512];
  uint local_44;
  ulong local_28;
  
  uVar3 = FUN_04002180(param_2,2,2,&local_44);
  if ((uVar3 & 1) == 0) {
    uVar2 = 0;
    goto LAB_035b171c;
  }
  if ((int)param_2[1] == 0) {
    local_1048[0] = (undefined *)((ulong)local_1048[0]._1_7_ << 8);
    (**(code **)(*param_2 + 0x28))(param_2,local_1048);
    if ((bool)*(char *)(param_1 + 8) != ((char)local_1048[0] != '\0')) {
      *(bool *)(param_1 + 8) = (char)local_1048[0] != '\0';
    }
    local_1048[0] = (undefined *)((ulong)local_1048[0] & 0xffffffffffffff00);
    (**(code **)(*param_2 + 0x28))(param_2,local_1048);
    if ((bool)*(char *)(param_1 + 9) != ((char)local_1048[0] != '\0')) {
      *(bool *)(param_1 + 9) = (char)local_1048[0] != '\0';
    }
    local_1048[0] = (undefined *)((ulong)local_1048[0] & 0xffffffffffffff00);
    (**(code **)(*param_2 + 0x28))(param_2,local_1048);
    if (*(long *)(param_1 + 0x28) == 0) {
      if ((char)local_1048[0] != '\0') {
        if (*(char *)((long)param_2 + 0xc) != '\0') {
          local_1048[0] = (undefined *)CONCAT71(local_1048[0]._1_7_,8);
          (**(code **)(*param_2 + 0x20))(param_2,local_1048,1);
        }
        if ((int)param_2[1] == 0) {
          local_1048[0] = (undefined *)0x0;
          (**(code **)(*param_2 + 0x20))(param_2,local_1048,8);
          uVar3 = ((ulong)local_1048[0] & 0xff00ff00ff00ff00) >> 8 |
                  ((ulong)local_1048[0] & 0xff00ff00ff00ff) << 8;
          uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
          local_1078 = (undefined *)(uVar3 >> 0x20 | uVar3 << 0x20);
          if ((int)param_2[2] != 0xff00) {
            local_1078 = local_1048[0];
          }
        }
        else {
          if ((int)param_2[1] != 2) {
            (**(code **)(*param_2 + 0x40))(param_2,local_1048);
            DAT_05aa8930 = 4;
            nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)&DAT_05aa8934);
            DAT_05aa8940 = 0x8004ef;
            DAT_05aa8948 = nn::os::GetSystemTick();
            DAT_05aa8950 = 0;
            return DAT_05aa8948;
          }
          (**(code **)(*param_2 + 0x20))(param_2,&local_1078,8);
        }
        (**(code **)(*param_2 + 0x20))(param_2,local_1048,local_1078);
        uVar2 = 1;
        goto LAB_035b171c;
      }
    }
    else if ((char)local_1048[0] != '\0') {
      if (*(char *)((long)param_2 + 0xc) != '\0') {
        local_1048[0] = (undefined *)CONCAT71(local_1048[0]._1_7_,8);
        (**(code **)(*param_2 + 0x20))(param_2,local_1048,1);
      }
      if ((int)param_2[1] == 2) {
        (**(code **)(*param_2 + 0x20))(param_2,&local_1078,8);
      }
      else if ((int)param_2[1] == 1) {
        (**(code **)(*param_2 + 0x40))(param_2,local_1048);
      }
      else {
        local_1048[0] = (undefined *)0x0;
        (**(code **)(*param_2 + 0x20))(param_2,local_1048,8);
        uVar3 = ((ulong)local_1048[0] & 0xff00ff00ff00ff00) >> 8 |
                ((ulong)local_1048[0] & 0xff00ff00ff00ff) << 8;
        uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
        local_1078 = (undefined *)(uVar3 >> 0x20 | uVar3 << 0x20);
        if ((int)param_2[2] != 0xff00) {
          local_1078 = local_1048[0];
        }
      }
      goto LAB_035b1648;
    }
  }
  else {
    local_1048[0]._0_1_ = *(char *)(param_1 + 8);
    (**(code **)(*param_2 + 0x28))(param_2,local_1048);
    *(bool *)(param_1 + 8) = (char)local_1048[0] != '\0';
    local_1048[0]._0_1_ = *(char *)(param_1 + 9);
    (**(code **)(*param_2 + 0x28))(param_2,local_1048);
    *(bool *)(param_1 + 9) = (char)local_1048[0] != '\0';
    local_1048[0] = (undefined *)CONCAT71(local_1048[0]._1_7_,*(long *)(param_1 + 0x28) != 0);
    (**(code **)(*param_2 + 0x28))(param_2,local_1048);
    if ((char)local_1048[0] != '\0') {
      if (1 < local_44) {
        local_106c = 0;
        local_1070 = 1;
        local_1068 = 0xff;
        local_1050 = 0;
        local_1078 = PTR_DAT_04bdf318 + 0x10;
        local_1060 = local_1048;
        uStack_1058 = 0x1000;
        uVar2 = (**(code **)(**(long **)(param_1 + 0x28) + 0x18))
                          (*(long **)(param_1 + 0x28),&local_1078,param_3,param_4);
        uVar3 = local_1050;
        if ((uVar2 & 1) != 0) {
          local_1080 = local_1050;
          if (*(char *)((long)param_2 + 0xc) != '\0') {
            local_28 = CONCAT71(local_28._1_7_,8);
            (**(code **)(*param_2 + 0x20))(param_2,&local_28,1);
          }
          if ((int)param_2[1] == 2) {
            (**(code **)(*param_2 + 0x20))(param_2,&local_1080,8);
            uVar3 = local_1080;
          }
          else if ((int)param_2[1] == 1) {
            uVar1 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
            uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
            local_28 = uVar1 >> 0x20 | uVar1 << 0x20;
            if ((int)param_2[2] != 0xff00) {
              local_28 = uVar3;
            }
            (**(code **)(*param_2 + 0x40))(param_2,&local_28);
          }
          else {
            local_28 = 0;
            (**(code **)(*param_2 + 0x20))(param_2,&local_28,8);
            uVar3 = (local_28 & 0xff00ff00ff00ff00) >> 8 | (local_28 & 0xff00ff00ff00ff) << 8;
            uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
            local_1080 = uVar3 >> 0x20 | uVar3 << 0x20;
            if ((int)param_2[2] != 0xff00) {
              local_1080 = local_28;
            }
            uVar3 = local_1080;
          }
          (**(code **)(*param_2 + 0x20))(param_2,local_1048,uVar3);
        }
        goto LAB_035b171c;
      }
LAB_035b1648:
      uVar2 = (**(code **)(**(long **)(param_1 + 0x28) + 0x18))
                        (*(long **)(param_1 + 0x28),param_2,param_3,param_4);
      goto LAB_035b171c;
    }
  }
  uVar2 = 1;
LAB_035b171c:
  return (ulong)(uVar2 & 1);
}

