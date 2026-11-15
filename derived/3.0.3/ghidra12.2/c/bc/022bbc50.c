
bool FUN_022bbc50(long param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  long local_68;
  undefined4 local_48;
  undefined4 local_44;
  
  puVar4 = PTR_DAT_04bb43c0;
  iVar1 = *(int *)(param_1 + 0x54);
  if (iVar1 == 1) {
    uVar3 = *param_2;
    local_48 = *param_2;
    uVar2 = param_2[1];
    lVar9 = *(long *)PTR_DAT_04bb43c0;
    local_44 = uVar2;
    uVar5 = FUN_0277d6c4(&local_48);
    lVar8 = *(long *)puVar4;
    if (lVar8 != 0) {
      lVar9 = *(long *)(lVar9 + 0x57e58);
      uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((uVar5 < *(uint *)(lVar9 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
        local_78 = PTR_DAT_04bc0510 + 0x10;
        local_68 = 0;
        local_70 = uVar3;
        local_6c = uVar2;
        uVar5 = FUN_0277d6c4(&local_70);
        if (*(long *)puVar4 != 0) {
          lVar8 = *(long *)(lVar8 + 0x57e58);
          uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if ((uVar5 < *(uint *)(lVar8 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
            lVar8 = *(long *)PTR_DAT_04bc0428;
            uVar5 = FUN_0277d6c4(&local_48);
            uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
            if ((uVar5 < *(uint *)(lVar8 + 0x1d8)) &&
               (lVar8 = *(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar5 * 8), lVar8 != 0)) {
              local_68 = lVar8;
            }
          }
        }
        uVar6 = FUN_01ae59b0(&local_78);
        if ((uVar6 & 1) != 0) {
          FUN_01afc110(&local_78,1);
          FUN_01afa2dc(&local_78,0);
          local_48 = local_70;
          local_44 = local_6c;
        }
      }
    }
    uVar5 = DAT_0514cb58 ^ DAT_0514cb58 << 0xb;
    uVar5 = uVar5 >> 8 ^ DAT_0514cb64 >> 0x13 ^ uVar5 ^ DAT_0514cb64;
    if (uVar5 == 0) {
      uVar5 = DAT_0514cb5c ^ DAT_0514cb5c << 0xb;
      uVar5 = uVar5 ^ uVar5 >> 8;
      if (uVar5 == 0) {
        uVar5 = DAT_0514cb60 ^ DAT_0514cb60 << 0xb;
        uVar5 = uVar5 ^ uVar5 >> 8;
        if (uVar5 == 0) {
          uVar5 = DAT_0514cb64 ^ DAT_0514cb64 << 0xb;
          DAT_0514cb64 = uVar5 ^ uVar5 >> 8;
          if (DAT_0514cb64 == 0) {
            do {
                    /* WARNING: Do nothing block with infinite loop */
            } while( true );
          }
          uVar7 = 0;
          DAT_0514cb60 = 0;
          DAT_0514cb5c = 0;
        }
        else {
          uVar7 = 0;
          DAT_0514cb60 = 0;
          DAT_0514cb5c = DAT_0514cb64;
          DAT_0514cb64 = uVar5;
        }
      }
      else {
        uVar7 = 0;
        DAT_0514cb5c = DAT_0514cb60;
        DAT_0514cb60 = DAT_0514cb64;
        DAT_0514cb64 = uVar5;
      }
    }
    else {
      uVar7 = DAT_0514cb64;
      DAT_0514cb64 = uVar5;
    }
    DAT_0514cb58 = DAT_0514cb5c;
    DAT_0514cb5c = DAT_0514cb60;
    DAT_0514cb60 = uVar7;
    FUN_022ca650(param_1 + 0x10,DAT_0514cb64,&local_48,param_1 + 0x40,param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x14) = 0xfffe;
    FUN_0277d4ac();
    *(undefined8 *)(param_1 + 0x1c) = 0xfffe;
    FUN_0277d4ac((undefined8 *)(param_1 + 0x1c));
    *(undefined8 *)(param_1 + 0x2c) = 0;
    *(undefined8 *)(param_1 + 0x34) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0x2400000000;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  return iVar1 == 1;
}

