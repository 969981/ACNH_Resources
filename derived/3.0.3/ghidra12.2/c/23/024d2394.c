
/* WARNING: Restarted to delay deadcode elimination for space: stack */

bool FUN_024d2394(long param_1,ulong param_2,undefined8 *param_3)

{
  char cVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  undefined *local_78;
  int local_70;
  int iStack_6c;
  undefined **local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  long local_58;
  ulong local_50;
  undefined4 local_48;
  undefined4 local_44;
  
  puVar2 = PTR_DAT_04bb43c0;
  lVar7 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(param_3);
  if (*(long *)puVar2 != 0) {
    lVar7 = *(long *)(lVar7 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      lVar7 = FUN_024d2870(param_3);
      if (**(char **)(lVar7 + 8) == '\0') {
        return false;
      }
      if ((param_2 & 1) != 0) {
        return **(char **)(lVar7 + 8) != '\0';
      }
      lVar8 = *(long *)puVar2;
      uVar3 = FUN_0277d6c4(param_3);
      lVar7 = *(long *)puVar2;
      if (lVar7 != 0) {
        lVar8 = *(long *)(lVar8 + 0x57e58);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
        if ((uVar3 < *(uint *)(lVar8 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
          local_58 = 0;
          local_60 = *(undefined4 *)param_3;
          uStack_5c = *(undefined4 *)((long)param_3 + 4);
          local_68 = &PTR_FUN_04a36b50;
          uVar3 = FUN_0277d6c4(&local_60);
          if (*(long *)puVar2 != 0) {
            lVar7 = *(long *)(lVar7 + 0x57e58);
            uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
            if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
              lVar7 = *(long *)PTR_DAT_04bc0428;
              uVar3 = FUN_0277d6c4(param_3);
              uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
              if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
                 (lVar7 = *(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8), lVar7 != 0)) {
                local_58 = lVar7;
              }
            }
          }
          iVar4 = FUN_01ad78cc(&local_68);
          if (iVar4 == 0x4c) {
            if (*(int *)(PTR_DAT_04bc3a80 + 0x38) != -0x6efba09b) {
              return false;
            }
            lVar7 = *(long *)(param_1 + 0x68);
            local_50 = 0;
            local_78 = PTR_DAT_04bb2010 + 0x10;
            local_70 = (int)((float)(int)*(float *)(lVar7 + 0x278) / 5.0) -
                       (uint)(*(float *)(lVar7 + 0x278) < 0.0);
            iStack_6c = (int)((float)(int)*(float *)(lVar7 + 0x280) / 5.0) -
                        (uint)(*(float *)(lVar7 + 0x280) < 0.0);
            local_48 = 0;
            local_44 = 0x1d;
            local_50 = 0x20000000;
            local_44 = 0x1d;
            local_48 = 0;
            if (DAT_04cfae30 == 0) {
              return false;
            }
            if (*(long *)(DAT_04cfae30 + 0xa8) == 0) {
              return false;
            }
            uVar5 = FUN_00949898(DAT_04cfae30 + 0x28,&local_78,&local_50);
            if ((uVar5 & 1) == 0) {
              return false;
            }
            local_50 = local_50 & 0xffffffff00000000;
            FUN_016e026c(0,lVar7 + 0x278,&local_50,0);
            if ((int)local_50 == 0x16) {
              return false;
            }
          }
          lVar7 = *(long *)puVar2;
        }
      }
      *(undefined8 *)(param_1 + 0x1980) = 0;
      *(undefined8 *)(param_1 + 0x1988) = 0;
      *(undefined8 *)(param_1 + 0x1990) = 0;
      *(undefined8 *)(param_1 + 0x1998) = 0;
      *(undefined8 *)(param_1 + 0x19a0) = 0;
      *(undefined8 *)(param_1 + 0x19a8) = 0;
      *(undefined8 *)(param_1 + 0x19b0) = 0;
      *(undefined8 *)(param_1 + 0x19b8) = 0;
      *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
      *(undefined8 *)(param_1 + 0x19c0) = 0;
      *(undefined8 *)(param_1 + 0x19c8) = 0;
      *(undefined8 *)(param_1 + 0x19d0) = 0;
      *(undefined2 *)(param_1 + 0x19d8) = 0;
      *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
      *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
      *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
      uVar3 = FUN_0277d6c4(param_3);
      lVar8 = *(long *)puVar2;
      if (lVar8 != 0) {
        lVar7 = *(long *)(lVar7 + 0x57e58);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
        if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
          local_58 = 0;
          local_60 = *(undefined4 *)param_3;
          uStack_5c = *(undefined4 *)((long)param_3 + 4);
          local_68 = &PTR_FUN_04a36b50;
          uVar3 = FUN_0277d6c4(&local_60);
          if (*(long *)puVar2 != 0) {
            lVar7 = *(long *)(lVar8 + 0x57e58);
            uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
            if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
              lVar7 = *(long *)PTR_DAT_04bc0428;
              uVar3 = FUN_0277d6c4(param_3);
              uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
              if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
                 (lVar7 = *(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8), lVar7 != 0)) {
                local_58 = lVar7;
              }
            }
          }
          FUN_01ad78cc(&local_68);
          local_78 = (undefined *)((ulong)local_78 & 0xffffffff00000000);
        }
      }
      cVar1 = *PTR_DAT_04c4b988;
      *(undefined8 *)(param_1 + 0x1980) = *param_3;
      if (cVar1 == '\0') {
        uVar3 = 0x124;
      }
      else {
        uVar3 = 0x123;
      }
      local_78 = (undefined *)CONCAT44(local_78._4_4_,uVar3);
      lVar8 = *(long *)(param_1 + 0x70);
      uVar6 = 0;
      lVar7 = 0;
      if (lVar8 != 0) {
        uVar6 = 0;
        if (*(uint *)(lVar8 + 0x280) < 0x149) {
          uVar6 = *(uint *)(lVar8 + 0x280);
        }
        lVar7 = lVar8 + 0x278;
      }
      if (uVar6 != uVar3) {
        local_68 = (undefined **)CONCAT44(local_68._4_4_,uVar3);
        if (uVar3 < 0x149) {
          *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x19c0);
          *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x19c8);
          *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x19d0);
          *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x19d8);
          *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x19a0);
          *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x19a8);
          *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x19b0);
          *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x19b8);
          *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1980);
          *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1988);
          *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1990);
          *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1998);
          *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x1960);
          *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x1968);
          *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x1970);
          *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x1978);
          FUN_03ebb160(lVar7,uVar3);
          return uVar3 < 0x149;
        }
        return uVar3 < 0x149;
      }
    }
  }
  return false;
}

