
undefined8 FUN_01186110(long *param_1,long *param_2,long param_3,uint *param_4,undefined8 param_5)

{
  undefined *puVar1;
  short *psVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  undefined8 uVar7;
  uint uVar8;
  uint *puVar9;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  long lStack_78;
  short *local_70;
  uint *puStack_68;
  
  (**(code **)(*param_1 + 0x18))();
  local_80 = (short *)((ulong)local_80._5_3_ << 0x28);
  uVar4 = FUN_03ea9450(&DAT_050cc5d0,&local_80,param_1[1]);
  psVar2 = DAT_050cc5d0;
  if ((uVar4 & 1) != 0) {
    if (local_80._4_1_ - 0xc0 < 2) {
      puStack_68 = (uint *)((long)DAT_050cc5d0 + ((ulong)local_80 & 0xffffffff));
    }
    else {
      if (local_80._4_1_ != 0xff) {
        return 1;
      }
      puStack_68 = (uint *)0x0;
    }
    if (DAT_050cc5d0 != (short *)0x0) {
      local_70 = DAT_050cc5d0;
      (**(code **)(*param_2 + 0x18))(param_2);
      local_80 = (short *)((ulong)local_80 & 0xffffff0000000000);
      uVar4 = FUN_03ea9450(&local_70,&local_80,param_2[1]);
      if ((uVar4 & 1) != 0) {
        if (local_80._4_1_ - 0xc0 < 2) {
          lStack_78 = (long)psVar2 + ((ulong)local_80 & 0xffffffff);
        }
        else {
          if (local_80._4_1_ != 0xff) {
            return 1;
          }
          lStack_78 = 0;
        }
        local_98 = (undefined *)((ulong)local_98._5_3_ << 0x28);
        local_80 = psVar2;
        uVar4 = FUN_03ea9450(&local_80,&local_98,"subfile");
        if ((uVar4 & 1) != 0) {
          if (local_98._4_1_ - 0xc0 < 2) {
            puVar9 = (uint *)((long)psVar2 + ((ulong)local_98 & 0xffffffff));
          }
          else {
            if (local_98._4_1_ != 0xff) {
              return 1;
            }
            puVar9 = (uint *)0x0;
          }
          uVar8 = 0;
          puVar1 = PTR_DAT_04bb2020 + 0x10;
          local_70 = psVar2;
          puStack_68 = puVar9;
          if (puVar9 == (uint *)0x0) goto LAB_011862d4;
          while ((*puVar9 & 0xfe) == 0xc0) {
            uVar6 = *puVar9 >> 8;
            if (*psVar2 != 0x5942) goto LAB_011862d8;
            if ((uVar6 & 0xff00 | *puVar9 >> 0x18 | (uVar6 & 0xff) << 0x10) <= uVar8) {
              return 1;
            }
            while( true ) {
              uVar4 = FUN_03eaa1d8(&local_70,&local_88,uVar8);
              uVar3 = local_88;
              if ((uVar4 & 1) == 0) {
                return 0;
              }
              uStack_90 = local_88;
              lVar5 = param_3 + (ulong)*param_4 * 0x58;
              if (99 < *param_4) {
                lVar5 = param_3;
              }
              local_98 = puVar1;
              lVar5 = FUN_01185f80(lVar5 + 0x10,&local_98,param_5);
              if (lVar5 == 0) {
                return 0;
              }
              uVar8 = uVar8 + 1;
              uVar7 = **(undefined8 **)(lVar5 + 0x28);
              lVar5 = param_3 + (ulong)*param_4 * 0x58;
              if (99 < *param_4) {
                lVar5 = param_3;
              }
              *(undefined8 *)(lVar5 + 8) = uVar3;
              lVar5 = param_3 + (ulong)*param_4 * 0x58;
              if (99 < *param_4) {
                lVar5 = param_3;
              }
              *(undefined8 *)(lVar5 + 0x48) = uVar7;
              lVar5 = param_3 + (ulong)*param_4 * 0x58;
              if (99 < *param_4) {
                lVar5 = param_3;
              }
              *(undefined1 *)(lVar5 + 0x50) = 1;
              *param_4 = *param_4 + 1;
              if (puVar9 != (uint *)0x0) break;
LAB_011862d4:
              uVar6 = 0;
LAB_011862d8:
              if (uVar6 <= uVar8) {
                return 1;
              }
            }
          }
        }
      }
    }
  }
  return 1;
}

