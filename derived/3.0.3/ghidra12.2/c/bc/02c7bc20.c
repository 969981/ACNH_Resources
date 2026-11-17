
void FUN_02c7bc20(int param_1,undefined4 param_2,long *param_3)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  void *__s;
  long lVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  undefined **local_88 [4];
  undefined4 local_68;
  int local_64;
  undefined1 auStack_48 [8];
  
  puVar2 = PTR_DAT_04bb43c0;
  local_68 = param_2;
  if (param_1 == 3) {
    switch(param_2) {
    case 0:
      local_88[0] = &PTR_FUN_04b2a5e8;
      uVar7 = 0;
      local_64 = 3;
      do {
        (**(code **)(*param_3 + 0x10))(auStack_48,param_3,uVar7);
        lVar4 = (**(code **)(*param_3 + 0x20))(param_3);
        uVar1 = 1 << (ulong)(uVar7 & 0x1f);
        if ((*(uint *)(lVar4 + (ulong)(uVar7 >> 5) * 4) & uVar1) != 0) {
          lVar4 = *(long *)puVar2;
          uVar3 = FUN_0277d6c4(auStack_48);
          if (*(long *)puVar2 != 0) {
            lVar4 = *(long *)(lVar4 + 0x57e58);
            uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
            if (((uVar3 < *(uint *)(lVar4 + 0x1d8)) &&
                (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) &&
               (uVar5 = (*(code *)*local_88[0])(local_88,auStack_48), (uVar5 & 1) != 0))
            goto LAB_02c7bde4;
          }
          lVar4 = (**(code **)(*param_3 + 0x18))(param_3);
          lVar6 = (ulong)(uVar7 >> 5) * 4;
          *(uint *)(lVar4 + lVar6) = *(uint *)(lVar4 + lVar6) & (uVar1 ^ 0xffffffff);
        }
LAB_02c7bde4:
        uVar7 = uVar7 + 1;
      } while (uVar7 != 15000);
      break;
    default:
switchD_02c7bc84_caseD_1:
      local_64 = param_1;
      __s = (void *)(**(code **)(*param_3 + 0x18))(param_3);
      memset(__s,0,0x754);
      return;
    case 7:
      local_88[0] = &PTR_FUN_04b2a0e8;
      uVar7 = 0;
      local_64 = 3;
      do {
        (**(code **)(*param_3 + 0x10))(auStack_48,param_3,uVar7);
        lVar4 = (**(code **)(*param_3 + 0x20))(param_3);
        uVar1 = 1 << (ulong)(uVar7 & 0x1f);
        if ((*(uint *)(lVar4 + (ulong)(uVar7 >> 5) * 4) & uVar1) != 0) {
          lVar4 = *(long *)puVar2;
          uVar3 = FUN_0277d6c4(auStack_48);
          if (*(long *)puVar2 != 0) {
            lVar4 = *(long *)(lVar4 + 0x57e58);
            uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
            if (((uVar3 < *(uint *)(lVar4 + 0x1d8)) &&
                (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) &&
               (uVar5 = (*(code *)*local_88[0])(local_88,auStack_48), (uVar5 & 1) != 0))
            goto LAB_02c7c3e0;
          }
          lVar4 = (**(code **)(*param_3 + 0x18))(param_3);
          lVar6 = (ulong)(uVar7 >> 5) * 4;
          *(uint *)(lVar4 + lVar6) = *(uint *)(lVar4 + lVar6) & (uVar1 ^ 0xffffffff);
        }
LAB_02c7c3e0:
        uVar7 = uVar7 + 1;
      } while (uVar7 != 15000);
      break;
    case 8:
      local_88[0] = &PTR_FUN_04b2a110;
      uVar7 = 0;
      local_64 = 3;
      do {
        (**(code **)(*param_3 + 0x10))(auStack_48,param_3,uVar7);
        lVar4 = (**(code **)(*param_3 + 0x20))(param_3);
        uVar1 = 1 << (ulong)(uVar7 & 0x1f);
        if ((*(uint *)(lVar4 + (ulong)(uVar7 >> 5) * 4) & uVar1) != 0) {
          lVar4 = *(long *)puVar2;
          uVar3 = FUN_0277d6c4(auStack_48);
          if (*(long *)puVar2 != 0) {
            lVar4 = *(long *)(lVar4 + 0x57e58);
            uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
            if (((uVar3 < *(uint *)(lVar4 + 0x1d8)) &&
                (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) &&
               (uVar5 = (*(code *)*local_88[0])(local_88,auStack_48), (uVar5 & 1) != 0))
            goto LAB_02c7c4d0;
          }
          lVar4 = (**(code **)(*param_3 + 0x18))(param_3);
          lVar6 = (ulong)(uVar7 >> 5) * 4;
          *(uint *)(lVar4 + lVar6) = *(uint *)(lVar4 + lVar6) & (uVar1 ^ 0xffffffff);
        }
LAB_02c7c4d0:
        uVar7 = uVar7 + 1;
      } while (uVar7 != 15000);
      break;
    case 9:
      local_88[0] = &PTR_FUN_04b2a138;
      uVar7 = 0;
      local_64 = 3;
      do {
        (**(code **)(*param_3 + 0x10))(auStack_48,param_3,uVar7);
        lVar4 = (**(code **)(*param_3 + 0x20))(param_3);
        uVar1 = 1 << (ulong)(uVar7 & 0x1f);
        if ((*(uint *)(lVar4 + (ulong)(uVar7 >> 5) * 4) & uVar1) != 0) {
          lVar4 = *(long *)puVar2;
          uVar3 = FUN_0277d6c4(auStack_48);
          if (*(long *)puVar2 != 0) {
            lVar4 = *(long *)(lVar4 + 0x57e58);
            uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
            if (((uVar3 < *(uint *)(lVar4 + 0x1d8)) &&
                (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) &&
               (uVar5 = (*(code *)*local_88[0])(local_88,auStack_48), (uVar5 & 1) != 0))
            goto LAB_02c7c5c0;
          }
          lVar4 = (**(code **)(*param_3 + 0x18))(param_3);
          lVar6 = (ulong)(uVar7 >> 5) * 4;
          *(uint *)(lVar4 + lVar6) = *(uint *)(lVar4 + lVar6) & (uVar1 ^ 0xffffffff);
        }
LAB_02c7c5c0:
        uVar7 = uVar7 + 1;
      } while (uVar7 != 15000);
      break;
    case 0x10:
      local_88[0] = &PTR_FUN_04b2a610;
      uVar7 = 0;
      local_64 = 3;
      do {
        (**(code **)(*param_3 + 0x10))(auStack_48,param_3,uVar7);
        lVar4 = (**(code **)(*param_3 + 0x20))(param_3);
        uVar1 = 1 << (ulong)(uVar7 & 0x1f);
        if ((*(uint *)(lVar4 + (ulong)(uVar7 >> 5) * 4) & uVar1) != 0) {
          lVar4 = *(long *)puVar2;
          uVar3 = FUN_0277d6c4(auStack_48);
          if (*(long *)puVar2 != 0) {
            lVar4 = *(long *)(lVar4 + 0x57e58);
            uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
            if (((uVar3 < *(uint *)(lVar4 + 0x1d8)) &&
                (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) &&
               (uVar5 = (*(code *)*local_88[0])(local_88,auStack_48), (uVar5 & 1) != 0))
            goto LAB_02c7c6b0;
          }
          lVar4 = (**(code **)(*param_3 + 0x18))(param_3);
          lVar6 = (ulong)(uVar7 >> 5) * 4;
          *(uint *)(lVar4 + lVar6) = *(uint *)(lVar4 + lVar6) & (uVar1 ^ 0xffffffff);
        }
LAB_02c7c6b0:
        uVar7 = uVar7 + 1;
      } while (uVar7 != 15000);
      break;
    case 0x11:
      local_88[0] = &PTR_FUN_04b2a638;
      uVar7 = 0;
      local_64 = 3;
      do {
        (**(code **)(*param_3 + 0x10))(auStack_48,param_3,uVar7);
        lVar4 = (**(code **)(*param_3 + 0x20))(param_3);
        uVar1 = 1 << (ulong)(uVar7 & 0x1f);
        if ((*(uint *)(lVar4 + (ulong)(uVar7 >> 5) * 4) & uVar1) != 0) {
          lVar4 = *(long *)puVar2;
          uVar3 = FUN_0277d6c4(auStack_48);
          if (*(long *)puVar2 != 0) {
            lVar4 = *(long *)(lVar4 + 0x57e58);
            uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
            if (((uVar3 < *(uint *)(lVar4 + 0x1d8)) &&
                (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) &&
               (uVar5 = (*(code *)*local_88[0])(local_88,auStack_48), (uVar5 & 1) != 0))
            goto LAB_02c7c7a0;
          }
          lVar4 = (**(code **)(*param_3 + 0x18))(param_3);
          lVar6 = (ulong)(uVar7 >> 5) * 4;
          *(uint *)(lVar4 + lVar6) = *(uint *)(lVar4 + lVar6) & (uVar1 ^ 0xffffffff);
        }
LAB_02c7c7a0:
        uVar7 = uVar7 + 1;
      } while (uVar7 != 15000);
      break;
    case 0x12:
      local_88[0] = &PTR_FUN_04b2a660;
      uVar7 = 0;
      local_64 = 3;
      do {
        (**(code **)(*param_3 + 0x10))(auStack_48,param_3,uVar7);
        lVar4 = (**(code **)(*param_3 + 0x20))(param_3);
        uVar1 = 1 << (ulong)(uVar7 & 0x1f);
        if ((*(uint *)(lVar4 + (ulong)(uVar7 >> 5) * 4) & uVar1) != 0) {
          lVar4 = *(long *)puVar2;
          uVar3 = FUN_0277d6c4(auStack_48);
          if (*(long *)puVar2 != 0) {
            lVar4 = *(long *)(lVar4 + 0x57e58);
            uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
            if (((uVar3 < *(uint *)(lVar4 + 0x1d8)) &&
                (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) &&
               (uVar5 = (*(code *)*local_88[0])(local_88,auStack_48), (uVar5 & 1) != 0))
            goto LAB_02c7c890;
          }
          lVar4 = (**(code **)(*param_3 + 0x18))(param_3);
          lVar6 = (ulong)(uVar7 >> 5) * 4;
          *(uint *)(lVar4 + lVar6) = *(uint *)(lVar4 + lVar6) & (uVar1 ^ 0xffffffff);
        }
LAB_02c7c890:
        uVar7 = uVar7 + 1;
      } while (uVar7 != 15000);
      break;
    case 0x13:
      local_88[0] = &PTR_FUN_04b2a6b0;
      uVar7 = 0;
      local_64 = 3;
      do {
        (**(code **)(*param_3 + 0x10))(auStack_48,param_3,uVar7);
        lVar4 = (**(code **)(*param_3 + 0x20))(param_3);
        uVar1 = 1 << (ulong)(uVar7 & 0x1f);
        if ((*(uint *)(lVar4 + (ulong)(uVar7 >> 5) * 4) & uVar1) != 0) {
          lVar4 = *(long *)puVar2;
          uVar3 = FUN_0277d6c4(auStack_48);
          if (*(long *)puVar2 != 0) {
            lVar4 = *(long *)(lVar4 + 0x57e58);
            uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
            if (((uVar3 < *(uint *)(lVar4 + 0x1d8)) &&
                (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) &&
               (uVar5 = (*(code *)*local_88[0])(local_88,auStack_48), (uVar5 & 1) != 0))
            goto LAB_02c7c980;
          }
          lVar4 = (**(code **)(*param_3 + 0x18))(param_3);
          lVar6 = (ulong)(uVar7 >> 5) * 4;
          *(uint *)(lVar4 + lVar6) = *(uint *)(lVar4 + lVar6) & (uVar1 ^ 0xffffffff);
        }
LAB_02c7c980:
        uVar7 = uVar7 + 1;
      } while (uVar7 != 15000);
      break;
    case 0x14:
      local_88[0] = &PTR_FUN_04b2a688;
      uVar7 = 0;
      local_64 = 3;
      do {
        (**(code **)(*param_3 + 0x10))(auStack_48,param_3,uVar7);
        lVar4 = (**(code **)(*param_3 + 0x20))(param_3);
        uVar1 = 1 << (ulong)(uVar7 & 0x1f);
        if ((*(uint *)(lVar4 + (ulong)(uVar7 >> 5) * 4) & uVar1) != 0) {
          lVar4 = *(long *)puVar2;
          uVar3 = FUN_0277d6c4(auStack_48);
          if (*(long *)puVar2 != 0) {
            lVar4 = *(long *)(lVar4 + 0x57e58);
            uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
            if (((uVar3 < *(uint *)(lVar4 + 0x1d8)) &&
                (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) &&
               (uVar5 = (*(code *)*local_88[0])(local_88,auStack_48), (uVar5 & 1) != 0))
            goto LAB_02c7ca70;
          }
          lVar4 = (**(code **)(*param_3 + 0x18))(param_3);
          lVar6 = (ulong)(uVar7 >> 5) * 4;
          *(uint *)(lVar4 + lVar6) = *(uint *)(lVar4 + lVar6) & (uVar1 ^ 0xffffffff);
        }
LAB_02c7ca70:
        uVar7 = uVar7 + 1;
      } while (uVar7 != 15000);
    }
  }
  else if (param_1 == 2) {
    switch(param_2) {
    case 0:
      local_88[0] = &PTR_FUN_04b2a1d8;
      uVar7 = 0;
      local_64 = 2;
      do {
        (**(code **)(*param_3 + 0x10))(auStack_48,param_3,uVar7);
        lVar4 = (**(code **)(*param_3 + 0x20))(param_3);
        uVar1 = 1 << (ulong)(uVar7 & 0x1f);
        if ((*(uint *)(lVar4 + (ulong)(uVar7 >> 5) * 4) & uVar1) != 0) {
          lVar4 = *(long *)puVar2;
          uVar3 = FUN_0277d6c4(auStack_48);
          if (*(long *)puVar2 != 0) {
            lVar4 = *(long *)(lVar4 + 0x57e58);
            uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
            if (((uVar3 < *(uint *)(lVar4 + 0x1d8)) &&
                (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) &&
               (uVar5 = (*(code *)*local_88[0])(local_88,auStack_48), (uVar5 & 1) != 0))
            goto LAB_02c7bef4;
          }
          lVar4 = (**(code **)(*param_3 + 0x18))(param_3);
          lVar6 = (ulong)(uVar7 >> 5) * 4;
          *(uint *)(lVar4 + lVar6) = *(uint *)(lVar4 + lVar6) & (uVar1 ^ 0xffffffff);
        }
LAB_02c7bef4:
        uVar7 = uVar7 + 1;
      } while (uVar7 != 15000);
      break;
    default:
      goto switchD_02c7bc84_caseD_1;
    case 3:
      local_88[0] = &PTR_FUN_04b2a5c0;
      uVar7 = 0;
      local_64 = 2;
      do {
        (**(code **)(*param_3 + 0x10))(auStack_48,param_3,uVar7);
        lVar4 = (**(code **)(*param_3 + 0x20))(param_3);
        uVar1 = 1 << (ulong)(uVar7 & 0x1f);
        if ((*(uint *)(lVar4 + (ulong)(uVar7 >> 5) * 4) & uVar1) != 0) {
          lVar4 = *(long *)puVar2;
          uVar3 = FUN_0277d6c4(auStack_48);
          if (*(long *)puVar2 != 0) {
            lVar4 = *(long *)(lVar4 + 0x57e58);
            uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
            if (((uVar3 < *(uint *)(lVar4 + 0x1d8)) &&
                (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) &&
               (uVar5 = (*(code *)*local_88[0])(local_88,auStack_48), (uVar5 & 1) != 0))
            goto LAB_02c7cb60;
          }
          lVar4 = (**(code **)(*param_3 + 0x18))(param_3);
          lVar6 = (ulong)(uVar7 >> 5) * 4;
          *(uint *)(lVar4 + lVar6) = *(uint *)(lVar4 + lVar6) & (uVar1 ^ 0xffffffff);
        }
LAB_02c7cb60:
        uVar7 = uVar7 + 1;
      } while (uVar7 != 15000);
      break;
    case 0x1d:
      local_88[0] = &PTR_FUN_04b2a250;
      uVar7 = 0;
      local_64 = 2;
      do {
        (**(code **)(*param_3 + 0x10))(auStack_48,param_3,uVar7);
        lVar4 = (**(code **)(*param_3 + 0x20))(param_3);
        uVar1 = 1 << (ulong)(uVar7 & 0x1f);
        if ((*(uint *)(lVar4 + (ulong)(uVar7 >> 5) * 4) & uVar1) != 0) {
          lVar4 = *(long *)puVar2;
          uVar3 = FUN_0277d6c4(auStack_48);
          if (*(long *)puVar2 != 0) {
            lVar4 = *(long *)(lVar4 + 0x57e58);
            uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
            if (((uVar3 < *(uint *)(lVar4 + 0x1d8)) &&
                (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) &&
               (uVar5 = (*(code *)*local_88[0])(local_88,auStack_48), (uVar5 & 1) != 0))
            goto LAB_02c7cc50;
          }
          lVar4 = (**(code **)(*param_3 + 0x18))(param_3);
          lVar6 = (ulong)(uVar7 >> 5) * 4;
          *(uint *)(lVar4 + lVar6) = *(uint *)(lVar4 + lVar6) & (uVar1 ^ 0xffffffff);
        }
LAB_02c7cc50:
        uVar7 = uVar7 + 1;
      } while (uVar7 != 15000);
      break;
    case 0x1e:
      local_88[0] = &PTR_FUN_04b2a278;
      uVar7 = 0;
      local_64 = 2;
      do {
        (**(code **)(*param_3 + 0x10))(auStack_48,param_3,uVar7);
        lVar4 = (**(code **)(*param_3 + 0x20))(param_3);
        uVar1 = 1 << (ulong)(uVar7 & 0x1f);
        if ((*(uint *)(lVar4 + (ulong)(uVar7 >> 5) * 4) & uVar1) != 0) {
          lVar4 = *(long *)puVar2;
          uVar3 = FUN_0277d6c4(auStack_48);
          if (*(long *)puVar2 != 0) {
            lVar4 = *(long *)(lVar4 + 0x57e58);
            uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
            if (((uVar3 < *(uint *)(lVar4 + 0x1d8)) &&
                (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) &&
               (uVar5 = (*(code *)*local_88[0])(local_88,auStack_48), (uVar5 & 1) != 0))
            goto LAB_02c7cd40;
          }
          lVar4 = (**(code **)(*param_3 + 0x18))(param_3);
          lVar6 = (ulong)(uVar7 >> 5) * 4;
          *(uint *)(lVar4 + lVar6) = *(uint *)(lVar4 + lVar6) & (uVar1 ^ 0xffffffff);
        }
LAB_02c7cd40:
        uVar7 = uVar7 + 1;
      } while (uVar7 != 15000);
      break;
    case 0x1f:
      local_88[0] = &PTR_FUN_04b2a2a0;
      uVar7 = 0;
      local_64 = 2;
      do {
        (**(code **)(*param_3 + 0x10))(auStack_48,param_3,uVar7);
        lVar4 = (**(code **)(*param_3 + 0x20))(param_3);
        uVar1 = 1 << (ulong)(uVar7 & 0x1f);
        if ((*(uint *)(lVar4 + (ulong)(uVar7 >> 5) * 4) & uVar1) != 0) {
          lVar4 = *(long *)puVar2;
          uVar3 = FUN_0277d6c4(auStack_48);
          if (*(long *)puVar2 != 0) {
            lVar4 = *(long *)(lVar4 + 0x57e58);
            uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
            if (((uVar3 < *(uint *)(lVar4 + 0x1d8)) &&
                (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) &&
               (uVar5 = (*(code *)*local_88[0])(local_88,auStack_48), (uVar5 & 1) != 0))
            goto LAB_02c7ce30;
          }
          lVar4 = (**(code **)(*param_3 + 0x18))(param_3);
          lVar6 = (ulong)(uVar7 >> 5) * 4;
          *(uint *)(lVar4 + lVar6) = *(uint *)(lVar4 + lVar6) & (uVar1 ^ 0xffffffff);
        }
LAB_02c7ce30:
        uVar7 = uVar7 + 1;
      } while (uVar7 != 15000);
      break;
    case 0x20:
      local_88[0] = &PTR_FUN_04b2a2c8;
      uVar7 = 0;
      local_64 = 2;
      do {
        (**(code **)(*param_3 + 0x10))(auStack_48,param_3,uVar7);
        lVar4 = (**(code **)(*param_3 + 0x20))(param_3);
        uVar1 = 1 << (ulong)(uVar7 & 0x1f);
        if ((*(uint *)(lVar4 + (ulong)(uVar7 >> 5) * 4) & uVar1) != 0) {
          lVar4 = *(long *)puVar2;
          uVar3 = FUN_0277d6c4(auStack_48);
          if (*(long *)puVar2 != 0) {
            lVar4 = *(long *)(lVar4 + 0x57e58);
            uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
            if (((uVar3 < *(uint *)(lVar4 + 0x1d8)) &&
                (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) &&
               (uVar5 = (*(code *)*local_88[0])(local_88,auStack_48), (uVar5 & 1) != 0))
            goto LAB_02c7cf20;
          }
          lVar4 = (**(code **)(*param_3 + 0x18))(param_3);
          lVar6 = (ulong)(uVar7 >> 5) * 4;
          *(uint *)(lVar4 + lVar6) = *(uint *)(lVar4 + lVar6) & (uVar1 ^ 0xffffffff);
        }
LAB_02c7cf20:
        uVar7 = uVar7 + 1;
      } while (uVar7 != 15000);
      break;
    case 0x21:
      local_88[0] = &PTR_FUN_04b2a2f0;
      uVar7 = 0;
      local_64 = 2;
      do {
        (**(code **)(*param_3 + 0x10))(auStack_48,param_3,uVar7);
        lVar4 = (**(code **)(*param_3 + 0x20))(param_3);
        uVar1 = 1 << (ulong)(uVar7 & 0x1f);
        if ((*(uint *)(lVar4 + (ulong)(uVar7 >> 5) * 4) & uVar1) != 0) {
          lVar4 = *(long *)puVar2;
          uVar3 = FUN_0277d6c4(auStack_48);
          if (*(long *)puVar2 != 0) {
            lVar4 = *(long *)(lVar4 + 0x57e58);
            uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
            if (((uVar3 < *(uint *)(lVar4 + 0x1d8)) &&
                (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) &&
               (uVar5 = (*(code *)*local_88[0])(local_88,auStack_48), (uVar5 & 1) != 0))
            goto LAB_02c7d010;
          }
          lVar4 = (**(code **)(*param_3 + 0x18))(param_3);
          lVar6 = (ulong)(uVar7 >> 5) * 4;
          *(uint *)(lVar4 + lVar6) = *(uint *)(lVar4 + lVar6) & (uVar1 ^ 0xffffffff);
        }
LAB_02c7d010:
        uVar7 = uVar7 + 1;
      } while (uVar7 != 15000);
      break;
    case 0x22:
      local_88[0] = &PTR_FUN_04b2a318;
      uVar7 = 0;
      local_64 = 2;
      do {
        (**(code **)(*param_3 + 0x10))(auStack_48,param_3,uVar7);
        lVar4 = (**(code **)(*param_3 + 0x20))(param_3);
        uVar1 = 1 << (ulong)(uVar7 & 0x1f);
        if ((*(uint *)(lVar4 + (ulong)(uVar7 >> 5) * 4) & uVar1) != 0) {
          lVar4 = *(long *)puVar2;
          uVar3 = FUN_0277d6c4(auStack_48);
          if (*(long *)puVar2 != 0) {
            lVar4 = *(long *)(lVar4 + 0x57e58);
            uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
            if (((uVar3 < *(uint *)(lVar4 + 0x1d8)) &&
                (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) &&
               (uVar5 = (*(code *)*local_88[0])(local_88,auStack_48), (uVar5 & 1) != 0))
            goto LAB_02c7d100;
          }
          lVar4 = (**(code **)(*param_3 + 0x18))(param_3);
          lVar6 = (ulong)(uVar7 >> 5) * 4;
          *(uint *)(lVar4 + lVar6) = *(uint *)(lVar4 + lVar6) & (uVar1 ^ 0xffffffff);
        }
LAB_02c7d100:
        uVar7 = uVar7 + 1;
      } while (uVar7 != 15000);
      break;
    case 0x23:
      local_88[0] = &PTR_FUN_04b2a340;
      uVar7 = 0;
      local_64 = 2;
      do {
        (**(code **)(*param_3 + 0x10))(auStack_48,param_3,uVar7);
        lVar4 = (**(code **)(*param_3 + 0x20))(param_3);
        uVar1 = 1 << (ulong)(uVar7 & 0x1f);
        if ((*(uint *)(lVar4 + (ulong)(uVar7 >> 5) * 4) & uVar1) != 0) {
          lVar4 = *(long *)puVar2;
          uVar3 = FUN_0277d6c4(auStack_48);
          if (*(long *)puVar2 != 0) {
            lVar4 = *(long *)(lVar4 + 0x57e58);
            uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
            if (((uVar3 < *(uint *)(lVar4 + 0x1d8)) &&
                (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) &&
               (uVar5 = (*(code *)*local_88[0])(local_88,auStack_48), (uVar5 & 1) != 0))
            goto LAB_02c7d1f0;
          }
          lVar4 = (**(code **)(*param_3 + 0x18))(param_3);
          lVar6 = (ulong)(uVar7 >> 5) * 4;
          *(uint *)(lVar4 + lVar6) = *(uint *)(lVar4 + lVar6) & (uVar1 ^ 0xffffffff);
        }
LAB_02c7d1f0:
        uVar7 = uVar7 + 1;
      } while (uVar7 != 15000);
      break;
    case 0x24:
      local_88[0] = &PTR_FUN_04b2a570;
      uVar7 = 0;
      local_64 = 2;
      do {
        (**(code **)(*param_3 + 0x10))(auStack_48,param_3,uVar7);
        lVar4 = (**(code **)(*param_3 + 0x20))(param_3);
        uVar1 = 1 << (ulong)(uVar7 & 0x1f);
        if ((*(uint *)(lVar4 + (ulong)(uVar7 >> 5) * 4) & uVar1) != 0) {
          lVar4 = *(long *)puVar2;
          uVar3 = FUN_0277d6c4(auStack_48);
          if (*(long *)puVar2 != 0) {
            lVar4 = *(long *)(lVar4 + 0x57e58);
            uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
            if (((uVar3 < *(uint *)(lVar4 + 0x1d8)) &&
                (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) &&
               (uVar5 = (*(code *)*local_88[0])(local_88,auStack_48), (uVar5 & 1) != 0))
            goto LAB_02c7d2e0;
          }
          lVar4 = (**(code **)(*param_3 + 0x18))(param_3);
          lVar6 = (ulong)(uVar7 >> 5) * 4;
          *(uint *)(lVar4 + lVar6) = *(uint *)(lVar4 + lVar6) & (uVar1 ^ 0xffffffff);
        }
LAB_02c7d2e0:
        uVar7 = uVar7 + 1;
      } while (uVar7 != 15000);
      break;
    case 0x25:
      local_88[0] = &PTR_FUN_04b2a598;
      uVar7 = 0;
      local_64 = 2;
      do {
        (**(code **)(*param_3 + 0x10))(auStack_48,param_3,uVar7);
        lVar4 = (**(code **)(*param_3 + 0x20))(param_3);
        uVar1 = 1 << (ulong)(uVar7 & 0x1f);
        if ((*(uint *)(lVar4 + (ulong)(uVar7 >> 5) * 4) & uVar1) != 0) {
          lVar4 = *(long *)puVar2;
          uVar3 = FUN_0277d6c4(auStack_48);
          if (*(long *)puVar2 != 0) {
            lVar4 = *(long *)(lVar4 + 0x57e58);
            uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
            if (((uVar3 < *(uint *)(lVar4 + 0x1d8)) &&
                (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) &&
               (uVar5 = (*(code *)*local_88[0])(local_88,auStack_48), (uVar5 & 1) != 0))
            goto LAB_02c7d3d0;
          }
          lVar4 = (**(code **)(*param_3 + 0x18))(param_3);
          lVar6 = (ulong)(uVar7 >> 5) * 4;
          *(uint *)(lVar4 + lVar6) = *(uint *)(lVar4 + lVar6) & (uVar1 ^ 0xffffffff);
        }
LAB_02c7d3d0:
        uVar7 = uVar7 + 1;
      } while (uVar7 != 15000);
    }
  }
  else if (param_1 == 1) {
    switch(param_2) {
    case 0:
      local_88[0] = &PTR_FUN_04b2a520;
      uVar7 = 0;
      local_64 = 1;
      do {
        (**(code **)(*param_3 + 0x10))(auStack_48,param_3,uVar7);
        lVar4 = (**(code **)(*param_3 + 0x20))(param_3);
        uVar1 = 1 << (ulong)(uVar7 & 0x1f);
        if ((*(uint *)(lVar4 + (ulong)(uVar7 >> 5) * 4) & uVar1) != 0) {
          lVar4 = *(long *)puVar2;
          uVar3 = FUN_0277d6c4(auStack_48);
          if (*(long *)puVar2 != 0) {
            lVar4 = *(long *)(lVar4 + 0x57e58);
            uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
            if (((uVar3 < *(uint *)(lVar4 + 0x1d8)) &&
                (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) &&
               (uVar5 = (*(code *)*local_88[0])(local_88,auStack_48), (uVar5 & 1) != 0))
            goto LAB_02c7bcd4;
          }
          lVar4 = (**(code **)(*param_3 + 0x18))(param_3);
          lVar6 = (ulong)(uVar7 >> 5) * 4;
          *(uint *)(lVar4 + lVar6) = *(uint *)(lVar4 + lVar6) & (uVar1 ^ 0xffffffff);
        }
LAB_02c7bcd4:
        uVar7 = uVar7 + 1;
      } while (uVar7 != 15000);
      break;
    default:
      goto switchD_02c7bc84_caseD_1;
    case 4:
      local_88[0] = &PTR_FUN_04b2a070;
      uVar7 = 0;
      local_64 = 1;
      do {
        (**(code **)(*param_3 + 0x10))(auStack_48,param_3,uVar7);
        lVar4 = (**(code **)(*param_3 + 0x20))(param_3);
        uVar1 = 1 << (ulong)(uVar7 & 0x1f);
        if ((*(uint *)(lVar4 + (ulong)(uVar7 >> 5) * 4) & uVar1) != 0) {
          lVar4 = *(long *)puVar2;
          uVar3 = FUN_0277d6c4(auStack_48);
          if (*(long *)puVar2 != 0) {
            lVar4 = *(long *)(lVar4 + 0x57e58);
            uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
            if (((uVar3 < *(uint *)(lVar4 + 0x1d8)) &&
                (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) &&
               (uVar5 = (*(code *)*local_88[0])(local_88,auStack_48), (uVar5 & 1) != 0))
            goto LAB_02c7c110;
          }
          lVar4 = (**(code **)(*param_3 + 0x18))(param_3);
          lVar6 = (ulong)(uVar7 >> 5) * 4;
          *(uint *)(lVar4 + lVar6) = *(uint *)(lVar4 + lVar6) & (uVar1 ^ 0xffffffff);
        }
LAB_02c7c110:
        uVar7 = uVar7 + 1;
      } while (uVar7 != 15000);
      break;
    case 5:
      local_88[0] = &PTR_FUN_04b2a098;
      uVar7 = 0;
      local_64 = 1;
      do {
        (**(code **)(*param_3 + 0x10))(auStack_48,param_3,uVar7);
        lVar4 = (**(code **)(*param_3 + 0x20))(param_3);
        uVar1 = 1 << (ulong)(uVar7 & 0x1f);
        if ((*(uint *)(lVar4 + (ulong)(uVar7 >> 5) * 4) & uVar1) != 0) {
          lVar4 = *(long *)puVar2;
          uVar3 = FUN_0277d6c4(auStack_48);
          if (*(long *)puVar2 != 0) {
            lVar4 = *(long *)(lVar4 + 0x57e58);
            uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
            if (((uVar3 < *(uint *)(lVar4 + 0x1d8)) &&
                (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) &&
               (uVar5 = (*(code *)*local_88[0])(local_88,auStack_48), (uVar5 & 1) != 0))
            goto LAB_02c7c020;
          }
          lVar4 = (**(code **)(*param_3 + 0x18))(param_3);
          lVar6 = (ulong)(uVar7 >> 5) * 4;
          *(uint *)(lVar4 + lVar6) = *(uint *)(lVar4 + lVar6) & (uVar1 ^ 0xffffffff);
        }
LAB_02c7c020:
        uVar7 = uVar7 + 1;
      } while (uVar7 != 15000);
      break;
    case 6:
      local_88[0] = &PTR_FUN_04b2a548;
      uVar7 = 0;
      local_64 = 1;
      do {
        (**(code **)(*param_3 + 0x10))(auStack_48,param_3,uVar7);
        lVar4 = (**(code **)(*param_3 + 0x20))(param_3);
        uVar1 = 1 << (ulong)(uVar7 & 0x1f);
        if ((*(uint *)(lVar4 + (ulong)(uVar7 >> 5) * 4) & uVar1) != 0) {
          lVar4 = *(long *)puVar2;
          uVar3 = FUN_0277d6c4(auStack_48);
          if (*(long *)puVar2 != 0) {
            lVar4 = *(long *)(lVar4 + 0x57e58);
            uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
            if (((uVar3 < *(uint *)(lVar4 + 0x1d8)) &&
                (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) &&
               (uVar5 = (*(code *)*local_88[0])(local_88,auStack_48), (uVar5 & 1) != 0))
            goto LAB_02c7c200;
          }
          lVar4 = (**(code **)(*param_3 + 0x18))(param_3);
          lVar6 = (ulong)(uVar7 >> 5) * 4;
          *(uint *)(lVar4 + lVar6) = *(uint *)(lVar4 + lVar6) & (uVar1 ^ 0xffffffff);
        }
LAB_02c7c200:
        uVar7 = uVar7 + 1;
      } while (uVar7 != 15000);
      break;
    case 0xe:
      local_88[0] = &PTR_FUN_04b2a1b0;
      uVar7 = 0;
      local_64 = 1;
      do {
        (**(code **)(*param_3 + 0x10))(auStack_48,param_3,uVar7);
        lVar4 = (**(code **)(*param_3 + 0x20))(param_3);
        uVar1 = 1 << (ulong)(uVar7 & 0x1f);
        if ((*(uint *)(lVar4 + (ulong)(uVar7 >> 5) * 4) & uVar1) != 0) {
          lVar4 = *(long *)puVar2;
          uVar3 = FUN_0277d6c4(auStack_48);
          if (*(long *)puVar2 != 0) {
            lVar4 = *(long *)(lVar4 + 0x57e58);
            uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar4 + 0x1f8);
            if (((uVar3 < *(uint *)(lVar4 + 0x1d8)) &&
                (*(long *)(*(long *)(lVar4 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) &&
               (uVar5 = (*(code *)*local_88[0])(local_88,auStack_48), (uVar5 & 1) != 0))
            goto LAB_02c7c2f0;
          }
          lVar4 = (**(code **)(*param_3 + 0x18))(param_3);
          lVar6 = (ulong)(uVar7 >> 5) * 4;
          *(uint *)(lVar4 + lVar6) = *(uint *)(lVar4 + lVar6) & (uVar1 ^ 0xffffffff);
        }
LAB_02c7c2f0:
        uVar7 = uVar7 + 1;
      } while (uVar7 != 15000);
    }
  }
  return;
}

