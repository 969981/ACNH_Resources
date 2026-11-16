
void FUN_029a50c8(long param_1,undefined8 param_2)

{
  MutexType *pMVar1;
  uint *puVar2;
  undefined4 *puVar3;
  ushort uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  int iVar12;
  ulong local_80;
  undefined4 local_78;
  undefined4 local_48;
  int local_24;
  
  if (*(char *)(param_1 + 8) == '\0' || *(char *)(param_1 + 9) == '\0') goto LAB_029a50f8;
  uVar4 = *(ushort *)PTR_DAT_04bb6298;
  uVar11 = (ulong)(short)uVar4;
  if (uVar11 != 0xffffffffffffffff) {
    local_80 = CONCAT44(local_80._4_4_,3);
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar4 * 8);
    if (0xff < (uint)(int)(short)uVar4) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar2 >> 3 & 1) != 0) {
      if (*(long *)(*(long *)(DAT_055f6860 + 0xb4510) + 0x50) == 0) {
        local_78 = 0;
        local_80 = 0;
      }
      else {
        local_80 = *(ulong *)(DAT_055f6860 + 0xb44c8);
        local_78 = *(undefined4 *)(DAT_055f6860 + 0xb44d0);
      }
      pMVar1 = (MutexType *)(param_1 + 0x118);
      nn::os::LockMutex(pMVar1);
      lVar8 = FUN_02999570(param_1 + 0xf0,param_2,&local_80,2);
      if (lVar8 == 0) {
        uVar6 = 0xffffffff;
      }
      else {
        uVar6 = *(undefined4 *)(*(long *)(lVar8 + 0x18) + 4);
      }
      nn::os::UnlockMutex(pMVar1);
      nn::os::LockMutex(pMVar1);
      lVar8 = FUN_02999570(param_1 + 0xf0,param_2,&local_80,4);
      if (lVar8 == 0) {
        uVar7 = 0xffffffff;
      }
      else {
        uVar7 = *(undefined4 *)(*(long *)(lVar8 + 0x18) + 4);
      }
      nn::os::UnlockMutex(pMVar1);
      *(undefined4 *)(param_1 + 0xe8) = 0;
      *(undefined4 *)(param_1 + 0x50) = uVar6;
      *(undefined4 *)(param_1 + 0x54) = uVar7;
      return;
    }
  }
  iVar5 = *(int *)(param_1 + 0x48);
  if (iVar5 == -0x17df00c3) {
    *(undefined8 *)(param_1 + 0x50) = 0x10a00000109;
    iVar5 = 0x43;
    goto LAB_029a5498;
  }
  if (iVar5 == -0x7975b8e8) {
    iVar5 = 0;
LAB_029a51e8:
    iVar5 = iVar5 * 2;
    iVar10 = iVar5 + 0x10b;
    iVar12 = iVar5 + 0x10c;
    iVar5 = iVar5 + 0x86;
LAB_029a548c:
    *(int *)(param_1 + 0x50) = iVar10;
    *(int *)(param_1 + 0x54) = iVar12;
  }
  else {
    if (iVar5 == -0x3e092032) {
      iVar5 = 1;
      goto LAB_029a51e8;
    }
    if (DAT_05ac0a90 == iVar5) {
      lVar8 = 0;
      local_80 = (ulong)DAT_05ac0a94;
LAB_029a5460:
      iVar5 = ((int)local_80 * 3 + (&DAT_05ac0a98)[lVar8 * 4]) * 2;
      iVar10 = iVar5 + 0x10f;
      iVar12 = iVar5 + 0x110;
      iVar5 = iVar5 + 0x8a;
      goto LAB_029a548c;
    }
    if (DAT_05ac0aa0 == iVar5) {
      local_80 = (ulong)DAT_05ac0aa4;
      lVar8 = 1;
      goto LAB_029a5460;
    }
    if (DAT_05ac0ab0 == iVar5) {
      lVar8 = 2;
LAB_029a539c:
      local_80 = CONCAT44(local_80._4_4_,(&DAT_05ac0a94)[lVar8 * 4]);
      if (DAT_05ac0ab0 == iVar5) {
        lVar8 = 2;
      }
      else if (DAT_05ac0ac0 == iVar5) {
        lVar8 = 3;
      }
      else if (DAT_05ac0ad0 == iVar5) {
        lVar8 = 4;
      }
      else if (DAT_05ac0ae0 == iVar5) {
        lVar8 = 5;
      }
      else if (DAT_05ac0af0 == iVar5) {
        lVar8 = 6;
      }
      else if (DAT_05ac0b00 == iVar5) {
        lVar8 = 7;
      }
      else if (DAT_05ac0b10 == iVar5) {
        lVar8 = 8;
      }
      else {
        if (DAT_05ac0b20 != iVar5) goto LAB_029a54b4;
        lVar8 = 9;
      }
      goto LAB_029a5460;
    }
    if (DAT_05ac0ac0 == iVar5) {
      lVar8 = 3;
      goto LAB_029a539c;
    }
    if (DAT_05ac0ad0 == iVar5) {
      lVar8 = 4;
      goto LAB_029a539c;
    }
    if (DAT_05ac0ae0 == iVar5) {
      lVar8 = 5;
      goto LAB_029a539c;
    }
    if (DAT_05ac0af0 == iVar5) {
      lVar8 = 6;
      goto LAB_029a539c;
    }
    if (DAT_05ac0b00 == iVar5) {
      lVar8 = 7;
      goto LAB_029a539c;
    }
    if (DAT_05ac0b10 == iVar5) {
      lVar8 = 8;
      goto LAB_029a539c;
    }
    if (DAT_05ac0b20 == iVar5) {
      lVar8 = 9;
      goto LAB_029a539c;
    }
LAB_029a54b4:
    if (0x25b43b88 < iVar5) {
      if (iVar5 < 0x340da5a5) {
        if (iVar5 < 0x2aefed47) {
          if (iVar5 == 0x25b43b89) {
            lVar8 = 0xe;
          }
          else {
            if (iVar5 != 0x2633946a) goto LAB_029a56d8;
            lVar8 = 9;
          }
        }
        else if (iVar5 == 0x2aefed47) {
          lVar8 = 4;
        }
        else {
          if (iVar5 != 0x302056e3) goto LAB_029a56d8;
          lVar8 = 0xb;
        }
      }
      else if (iVar5 < 0x6043fd87) {
        if (iVar5 == 0x340da5a5) {
          lVar8 = 1;
        }
        else {
          if (iVar5 != 0x356323a8) goto LAB_029a56d8;
          lVar8 = 2;
        }
      }
      else if (iVar5 == 0x6043fd87) {
        lVar8 = 8;
      }
      else {
        if (iVar5 != 0x7dfa9ed2) goto LAB_029a56d8;
        lVar8 = 0xd;
      }
LAB_029a56a4:
      iVar5 = (&DAT_04176a10)[lVar8 * 3] * 2;
      if ((&DAT_04176a0c)[lVar8 * 3] != 0) {
        iVar5 = (&DAT_04176a10)[lVar8 * 3] * 2 + 0x10;
      }
      iVar10 = iVar5 + 0x133;
      iVar12 = iVar5 + 0x134;
      iVar5 = iVar5 + 0xae;
      goto LAB_029a548c;
    }
    if (-0x63176d4 < iVar5) {
      if (iVar5 < 0x91dc718) {
        if (iVar5 == -0x63176d3) {
          lVar8 = 0xc;
        }
        else {
          if (iVar5 != 0x68001ae) goto LAB_029a56d8;
          lVar8 = 10;
        }
      }
      else if (iVar5 == 0x91dc718) {
        lVar8 = 6;
      }
      else {
        if (iVar5 != 0x1a13a2ea) goto LAB_029a56d8;
        lVar8 = 5;
      }
      goto LAB_029a56a4;
    }
    if (-0x214773fa < iVar5) {
      if (iVar5 == -0x214773f9) {
        lVar8 = 3;
      }
      else {
        if (iVar5 != -0xe5efd5a) goto LAB_029a56d8;
        lVar8 = 0;
      }
      goto LAB_029a56a4;
    }
    if (iVar5 == -0x7a4d7ddc) {
      lVar8 = 7;
      goto LAB_029a56a4;
    }
    if (iVar5 == -0x3e25491c) {
      lVar8 = 0xf;
      goto LAB_029a56a4;
    }
LAB_029a56d8:
    if (uVar4 != 0xffff) {
      local_80 = CONCAT44(local_80._4_4_,0x20);
      puVar3 = &DAT_055c11c8 + (uVar11 & 0xffffffff) * 2;
      if (0xff < uVar4) {
        puVar3 = &DAT_055c11c8;
      }
      if ((puVar3[1] & 1) == 0) goto LAB_029a57cc;
      if (iVar5 < 0x1490248c) {
        if (iVar5 == -0x24a26848) {
          if (*(long *)(*(long *)(DAT_055f6860 + 0xb4510) + 0x50) == 0) {
            local_78 = 0;
            local_80 = 0;
          }
          else {
            local_80 = *(ulong *)(DAT_055f6860 + 0xb44c8);
            local_78 = *(undefined4 *)(DAT_055f6860 + 0xb44d0);
          }
          uVar6 = FUN_029994ec(param_1 + 0xf0,param_2,&local_80,2);
          uVar7 = FUN_029994ec(param_1 + 0xf0,param_2,&local_80,4);
          *(undefined4 *)(param_1 + 0xe8) = 0;
          *(undefined4 *)(param_1 + 0x50) = uVar6;
          *(undefined4 *)(param_1 + 0x54) = uVar7;
          return;
        }
        if (iVar5 != 0x80e20d8) {
          iVar10 = 0xb6a5301;
          goto LAB_029a57a4;
        }
      }
      else if (iVar5 < 0x51b9e069) {
        if (iVar5 != 0x1490248c) {
          iVar10 = 0x2922957e;
          goto LAB_029a57a4;
        }
      }
      else if (iVar5 != 0x51b9e069) {
        iVar10 = 0x7a616e2f;
LAB_029a57a4:
        if (iVar5 != iVar10) goto LAB_029a57cc;
      }
      iVar5 = FUN_0180da90();
      iVar5 = iVar5 * 2;
      iVar10 = iVar5 + 0x153;
      iVar12 = iVar5 + 0x154;
      iVar5 = iVar5 + 0xce;
      goto LAB_029a548c;
    }
LAB_029a57cc:
    local_80._0_4_ = 6;
    uVar9 = FUN_02911fc0(uVar11,&local_80);
    if ((uVar9 & 1) != 0) {
      local_24 = 0;
      FUN_00cf79a0(&local_80,param_1 + 0x10);
      uVar11 = FUN_02b5f400(&local_24,local_48);
      if ((uVar11 & 1) == 0) {
        iVar10 = -1;
        iVar12 = -1;
        iVar5 = -1;
      }
      else {
        iVar5 = FUN_0180da90();
        iVar5 = iVar5 + local_24 * 6;
        iVar12 = iVar5 * 2;
        iVar5 = iVar5 + 1;
        iVar10 = iVar12 + 0x85;
        iVar12 = iVar12 + 0x86;
      }
      *(int *)(param_1 + 0x50) = iVar10;
      *(int *)(param_1 + 0x54) = iVar12;
      *(int *)(param_1 + 0xe8) = iVar5;
      return;
    }
    local_80._0_4_ = 7;
    uVar11 = FUN_02911fc0(uVar11,&local_80);
    if (((uVar11 & 1) != 0) && (DAT_05292338 != 0)) {
      iVar5 = *(int *)(DAT_05292338 + 0xed8) * 2;
      iVar10 = iVar5 + 0xe5;
      iVar12 = iVar5 + 0xe6;
      iVar5 = iVar5 + 0x60;
      goto LAB_029a548c;
    }
    local_80 = CONCAT44(local_80._4_4_,3);
    uVar11 = FUN_02b66300(&local_80,iVar5);
    if ((uVar11 & 1) == 0) {
      if ((iVar5 != -0x78a1579c) && (iVar5 != 0x1ca0c3e6)) {
        if (iVar5 < -0x10e0fba8) {
          if (iVar5 < -0x34cc18dd) {
            if (iVar5 != -0x7a8de531) {
              iVar10 = -0x6d41fcf3;
              goto LAB_029a59e8;
            }
          }
          else if (iVar5 != -0x34cc18dd) {
            iVar10 = -0x280cede1;
            goto LAB_029a59e8;
          }
        }
        else if (iVar5 < 0x565b4aba) {
          if (iVar5 != -0x10e0fba8) {
            iVar10 = 0x526b4f86;
            goto LAB_029a59e8;
          }
        }
        else if (iVar5 != 0x565b4aba) {
          iVar10 = 0x756a8ab7;
LAB_029a59e8:
          if (iVar5 != iVar10) {
LAB_029a50f8:
            *(undefined4 *)(param_1 + 0xe8) = 0xffffffff;
            *(undefined8 *)(param_1 + 0x50) = 0xffffffffffffffff;
            return;
          }
        }
      }
LAB_029a59f0:
      *(undefined8 *)(param_1 + 0x50) = 0x10800000107;
      iVar5 = 0x42;
      goto LAB_029a5498;
    }
    if ((int)local_80 != 7) goto LAB_029a59f0;
    if ((DAT_05292338 == 0) || (*(char *)(DAT_05292338 + 0xf5c) == '\0')) {
      iVar5 = FUN_0180d8d0();
      iVar10 = iVar5 * 2 + 0xf9;
    }
    else {
      iVar10 = 0x105;
    }
    *(int *)(param_1 + 0x50) = iVar10;
    *(int *)(param_1 + 0x54) = iVar10 + 1;
    iVar5 = iVar10 + -0x84;
    if (0x84 < iVar10) {
      iVar5 = iVar10 + -0x85;
    }
  }
  iVar5 = (iVar5 >> 1) + 1;
LAB_029a5498:
  *(int *)(param_1 + 0xe8) = iVar5;
  return;
}

