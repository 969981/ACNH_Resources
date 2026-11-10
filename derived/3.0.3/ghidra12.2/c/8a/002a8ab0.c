
void FUN_002a8ab0(undefined8 param_1,long param_2,long param_3,uint param_4,uint param_5,
                 uint param_6,uint param_7)

{
  MutexType *pMVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  undefined4 uVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  int iVar11;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  byte local_b8;
  ushort local_b6;
  uint local_b4;
  undefined4 local_64;
  
  if (*(char *)(param_2 + 0xd68) == '\0') {
    uVar7 = 0x10c08;
  }
  else {
    if (*(char *)(param_3 + 0x658) != '\0') {
      uVar5 = FUN_0022b868(param_3);
      if ((uVar5 & 1) == 0) {
        local_d8 = 0;
        local_e0 = 0x400000000;
        FUN_0022bd98(param_3,&local_e0,0);
        local_e0 = CONCAT44(local_e0._4_4_,0x10c07);
        goto LAB_002a8e68;
      }
      pMVar1 = (MutexType *)(param_2 + 0xd40);
      nn::os::LockMutex(pMVar1);
      FUN_002aba30(&local_e0);
      uVar8 = *(uint *)(param_3 + 0x5f8);
      if ((*(byte *)(param_3 + 0x1a) + 0x20 <= uVar8) &&
         (uVar8 - 0x20 != (uint)*(byte *)(param_3 + 0x1a))) {
        uVar10 = 0;
        uVar2 = param_4 & 0xffff;
        while( true ) {
          FUN_002abaa0(&local_e0,param_3,uVar10);
          uVar8 = local_b4;
          if (local_e0 == 0) break;
          if ((param_7 & 1) == 0) {
            if ((local_b4 & 0xff0000) == 0) {
              uVar3 = 0;
            }
            else {
              uVar5 = FUN_002abe4c(&local_e0);
              if (0xff < uVar5) {
                local_e8 = 0;
                local_f0 = 1;
                FUN_0022bd98(param_3,&local_f0,0);
                local_e8 = 0;
                local_f0 = 1;
                FUN_002abee8(&local_e0,&local_f0);
                local_64 = 0;
                local_f0 = CONCAT44(local_f0._4_4_,0x10c07);
                nn::err::ErrorResultVariant::ErrorResultVariant
                          ((ErrorResultVariant *)((long)&local_f0 + 4),(Result *)&local_64);
                FUN_002296c4(param_1,&local_f0);
                FUN_002aba88(&local_e0);
                nn::os::UnlockMutex(pMVar1);
                return;
              }
              uVar3 = FUN_002abe4c(&local_e0);
            }
          }
          else {
            uVar3 = local_b4 >> 0x10;
          }
          iVar11 = 1;
          if ((local_b8 & 1) != 0) {
            iVar11 = 2;
          }
          if ((local_b8 & 2) != 0) {
            iVar11 = iVar11 + 2;
          }
          if ((local_b8 & 4) != 0) {
            iVar11 = iVar11 + 4;
          }
          if ((local_b8 & 8) != 0) {
            iVar11 = iVar11 + 8;
          }
          iVar11 = (((uint)local_b6 + iVar11) - 1 & 0xfffffffc) + 4;
          uVar8 = (uVar3 & 0xff) << 0x10 | uVar8 & 0xff00ffff;
          iVar4 = FUN_002a7450(param_2,uVar8);
          if ((iVar4 != -1) || (iVar4 = FUN_002a74a0(param_2,uVar8), iVar4 != -1)) {
            lVar9 = param_2 + (long)iVar4 * 0x18;
            uVar8 = iVar11 * uVar2;
            *(uint *)(lVar9 + 8) = *(int *)(lVar9 + 8) + uVar8;
            *(uint *)(lVar9 + 0xc) = *(int *)(lVar9 + 0xc) + uVar2;
            *(uint *)(lVar9 + 4) = *(int *)(lVar9 + 4) + uVar2;
            *(ulong *)(lVar9 + 0x10) = *(long *)(lVar9 + 0x10) + (ulong)uVar8;
          }
          uVar8 = *(uint *)(param_3 + 0x5f8);
          if ((uVar8 < *(byte *)(param_3 + 0x1a) + 0x20) ||
             (uVar10 = iVar11 + uVar10, (uVar8 - *(byte *)(param_3 + 0x1a)) - 0x20 <= uVar10))
          goto LAB_002a8ce8;
        }
        uVar8 = *(uint *)(param_3 + 0x5f8);
      }
LAB_002a8ce8:
      param_4 = param_4 & 0xffff;
      iVar11 = *(int *)(*(long *)PTR_DAT_04bccf08 + 8);
      *(uint *)(param_2 + 0xc28) = *(int *)(param_2 + 0xc28) + param_4;
      iVar11 = uVar8 + (param_6 & 0xffff) + iVar11;
      *(uint *)(param_2 + 0xd30) = *(int *)(param_2 + 0xd30) + param_4;
      if ((param_7 & 1) == 0) {
        uVar10 = *(uint *)(param_3 + 0x5fc);
        uVar8 = (uVar10 >> 1 & 0x55555555) + (uVar10 & 0x55555555);
        uVar8 = (uVar8 >> 2 & 0x33333333) + (uVar8 & 0x33333333);
        uVar8 = (uVar8 >> 4 & 0x7070707) + (uVar8 & 0x7070707);
        uVar8 = (uVar8 >> 8 & 0xf000f) + (uVar8 & 0xf000f);
        if (((uVar8 & 0x1f) + (uVar8 >> 0x10) == 1 && uVar10 != 0) &&
           (uVar8 = uVar10 - 1 & (uVar10 ^ 0xffffffff),
           uVar8 = (uVar8 >> 1 & 0x55555555) + (uVar8 & 0x55555555),
           uVar8 = (uVar8 >> 2 & 0x33333333) + (uVar8 & 0x33333333),
           uVar8 = (uVar8 >> 4 & 0x7070707) + (uVar8 & 0x7070707),
           uVar8 = (uVar8 >> 8 & 0xf000f) + (uVar8 & 0xf000f),
           uVar8 = uVar8 + (uVar8 >> 0x10) & 0xff, uVar8 < 0x20)) goto LAB_002a8e00;
      }
      else {
        plVar6 = (long *)FUN_002ba790(DAT_04c61168);
        lVar9 = (**(code **)(*plVar6 + 0x60))(plVar6,param_3 + 0x630);
        if ((lVar9 != 0) && (uVar8 = (uint)*(byte *)(lVar9 + 0x38), *(byte *)(lVar9 + 0x38) < 0x20))
        {
LAB_002a8e00:
          lVar9 = param_2 + (ulong)uVar8 * 4;
          *(uint *)(lVar9 + 0xc30) = *(int *)(lVar9 + 0xc30) + param_4;
          *(uint *)(lVar9 + 0xcb0) =
               *(int *)(lVar9 + 0xcb0) + (iVar11 + *(int *)(param_2 + 0xd6c)) * param_4;
        }
      }
      param_4 = (iVar11 + (param_5 & 0xffff) + *(int *)(param_2 + 0xd6c)) * param_4;
      *(uint *)(param_2 + 0xc2c) = param_4 + *(int *)(param_2 + 0xc2c);
      *(ulong *)(param_2 + 0xd38) = *(long *)(param_2 + 0xd38) + (ulong)param_4;
      FUN_002aba88(&local_e0);
      nn::os::UnlockMutex(pMVar1);
      local_e0 = (ulong)local_e0._4_4_ << 0x20;
      goto LAB_002a8e68;
    }
    uVar7 = 0x10c07;
  }
  local_e0 = CONCAT44(local_e0._4_4_,uVar7);
LAB_002a8e68:
  local_f0 = (ulong)local_f0._4_4_ << 0x20;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((long)&local_e0 + 4),(Result *)&local_f0);
  FUN_002296c4(param_1,&local_e0);
  return;
}

