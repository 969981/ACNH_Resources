
void FUN_01956430(undefined8 param_1,long *param_2,undefined8 param_3,ulong *param_4,long param_5,
                 undefined8 param_6,uint param_7)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  void *__s;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int local_8c;
  undefined8 local_88;
  undefined **local_80;
  undefined8 *puStack_78;
  int local_48;
  undefined4 local_44;
  
  if (param_2 != (long *)0x0) {
    if ((param_7 & 1) == 0) {
      __s = (void *)(**(code **)(*param_2 + 0x18))(param_2);
      memset(__s,0,0x754);
    }
    else {
      puStack_78 = &local_88;
      local_88 = CONCAT44(local_88._4_4_,0x69);
      local_80 = &PTR_FUN_049ff448;
      FUN_008a1ba0(param_2,&local_80);
    }
    local_88 = *param_4;
    if (((DAT_052cba38 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_052cba38), iVar3 != 0)) {
      DAT_052cba30 = 0x2238;
      if (((local_88 & 3) == 0) &&
         (DAT_052cba30 = 0x2250,
         (local_88 & 0xf) != 0 &&
         ((uint)(ushort)local_88 * -0x3d70a3d7 >> 2 | (uint)(ushort)local_88 * 0x40000000) <
         0x28f5c29)) {
        DAT_052cba30 = 0x2238;
      }
      __cxa_guard_release(&DAT_052cba38);
    }
    bVar2 = local_88._2_1_;
    if ((local_88._4_1_ & 0xfc) == 4) {
      local_8c = 1;
    }
    else if ((local_88._4_1_ & 0xf8) == 8) {
      local_8c = 2;
    }
    else {
      uVar8 = (uint)local_88._4_1_;
      if (uVar8 == 0x10) {
        local_8c = 3;
      }
      else if (uVar8 - 0x11 < 2) {
        local_8c = 4;
      }
      else {
        local_8c = 5;
        if (3 < uVar8 - 0x13) {
          local_8c = 0;
        }
      }
    }
    uVar4 = FUN_01950d30(param_1,param_3);
    local_80 = (undefined **)CONCAT44(local_80._4_4_,local_88._2_1_ - 1);
    if ((local_88._4_1_ & 0xfc) == 4) {
      local_44 = 1;
    }
    else if ((local_88._4_1_ & 0xf8) == 8) {
      local_44 = 2;
    }
    else {
      uVar8 = (uint)local_88._4_1_;
      if (uVar8 == 0x10) {
        local_44 = 3;
      }
      else if (uVar8 - 0x11 < 2) {
        local_44 = 4;
      }
      else {
        local_44 = 5;
        if (3 < uVar8 - 0x13) {
          local_44 = 0;
        }
      }
    }
    FUN_01956920(param_1,param_2,uVar4,&local_80,&local_44,param_6,&local_88,param_7 & 1);
    uVar7 = (ulong)local_88._4_1_;
    if (((local_88._4_1_ != *(byte *)(param_5 + 4)) || (local_88._3_1_ != *(char *)(param_5 + 3)))
       || (local_88._2_1_ != *(char *)(param_5 + 2))) {
      local_48 = bVar2 - 1;
      uVar8 = (uint)(ushort)local_88;
      if ((ushort)local_88 != 0) {
        lVar5 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_88);
        local_80 = (undefined **)(lVar5 + 0xe10);
        local_88 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_80);
        uVar8 = (uint)local_88 & 0xffff;
        uVar7 = local_88 >> 0x20 & 0xff;
      }
      if (DAT_052cba30 != 0) {
        uVar9 = 0;
        do {
          iVar3 = local_88._2_1_ - 1;
          uVar6 = (uint)uVar7;
          if ((uVar6 & 0xfc) == 4) {
            iVar10 = 1;
          }
          else if ((uVar6 & 0xf8) == 8) {
            iVar10 = 2;
          }
          else if (uVar6 == 0x10) {
            iVar10 = 3;
          }
          else if (uVar6 - 0x11 < 2) {
            iVar10 = 4;
          }
          else {
            iVar10 = 5;
            if (3 < uVar6 - 0x13) {
              iVar10 = 0;
            }
          }
          if ((iVar3 == local_48) && (iVar10 == local_8c)) {
            if (uVar6 == *(byte *)(param_5 + 4)) {
              if (local_88._3_1_ == *(char *)(param_5 + 3)) {
                if ((uint)local_88._2_1_ == (uint)*(byte *)(param_5 + 2)) break;
              }
            }
          }
          else {
            uVar4 = FUN_01950d30(param_1,param_3);
            local_80 = (undefined **)CONCAT44(local_80._4_4_,local_88._2_1_ - 1);
            if ((local_88._4_1_ & 0xfc) == 4) {
              local_44 = 1;
            }
            else if ((local_88._4_1_ & 0xf8) == 8) {
              local_44 = 2;
            }
            else {
              uVar8 = (uint)local_88._4_1_;
              if (uVar8 == 0x10) {
                local_44 = 3;
              }
              else if (uVar8 - 0x11 < 2) {
                local_44 = 4;
              }
              else {
                local_44 = 5;
                if (3 < uVar8 - 0x13) {
                  local_44 = 0;
                }
              }
            }
            FUN_01956920(param_1,param_2,uVar4,&local_80,&local_44,param_6,&local_88,param_7 & 1);
            uVar7 = (ulong)local_88._4_1_;
            if (((local_88._4_1_ == *(byte *)(param_5 + 4)) &&
                (local_88._3_1_ == *(char *)(param_5 + 3))) &&
               (local_88._2_1_ == *(char *)(param_5 + 2))) break;
            uVar8 = (uint)(ushort)local_88;
            local_8c = iVar10;
            local_48 = iVar3;
          }
          if (uVar8 != 0) {
            lVar5 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_88);
            local_80 = (undefined **)(lVar5 + 0xe10);
            local_88 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_80);
            uVar7 = local_88 >> 0x20 & 0xff;
            uVar8 = (uint)local_88 & 0xffff;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < DAT_052cba30);
      }
    }
    local_80 = (undefined **)0x26e;
    FUN_0277d4ac(&local_80);
    FUN_0277dedc(&local_80);
    lVar5 = (**(code **)(*param_2 + 0x18))(param_2);
    uVar8 = FUN_0277d6c4(&local_80);
    if ((uVar8 >> 3 & 0x1fff) < 0x753) {
      lVar1 = (ulong)((uVar8 & 0xffff) >> 5) * 4;
      *(uint *)(lVar5 + lVar1) = *(uint *)(lVar5 + lVar1) | 1 << (ulong)(uVar8 & 0x1f);
    }
  }
  return;
}

