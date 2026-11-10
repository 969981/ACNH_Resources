
void FUN_002b1f74(undefined8 param_1,long *param_2,uint *param_3,undefined8 param_4,
                 undefined4 *param_5,uint param_6,uint param_7)

{
  size_t __n;
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  bool bVar8;
  long lVar9;
  undefined8 local_bb0;
  undefined8 local_ba8;
  undefined8 local_ba0;
  undefined *local_b98;
  undefined8 local_b90;
  byte local_b88;
  uint local_b84;
  undefined1 auStack_b80 [9];
  undefined1 auStack_b77 [1431];
  int local_5e0 [4];
  undefined4 local_5d0 [2];
  byte local_5c8;
  byte local_5c7;
  undefined1 auStack_31a [674];
  undefined8 local_78;
  undefined4 local_64;
  
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = 0;
  }
  if ((char)param_2[199] != '\0') {
    if (*param_3 != 0) {
      FUN_002a6530(local_5d0);
      if ((param_7 & 1) != 0) {
        local_5c8 = local_5c8 | 1;
      }
      (**(code **)(*param_2 + 0x60))(local_5e0,param_2,local_5d0,auStack_31a);
      if (local_5e0[0] == 0) {
        local_b98 = PTR_DAT_04bce080 + 0x10;
        memset(&local_b84,0,4);
        local_b90 = 0;
        local_b88 = 0;
        memset(&local_b84,0,4);
        local_bb0 = local_bb0 & 0xffffffffffff0000;
        local_ba8 = 0;
        local_ba0 = 0;
        local_b90 = 0;
        local_b88 = 0;
        memset(&local_b84,0,4);
        puVar1 = PTR_DAT_04bc1510;
        lVar9 = 0;
        bVar8 = true;
        local_b90._4_4_ =
             (undefined4)(CONCAT26((short)((ulong)local_b90 >> 0x30),0xffff00000000) >> 0x20);
        local_b90 = (ulong)CONCAT43(local_b90._4_4_,
                                    CONCAT21((ushort)local_5c7 * 0x15 + 2,
                                             *(undefined1 *)((long)param_2 + 0x36))) << 8;
        do {
          if (param_2[lVar9 + 0xa7] != 0) {
            lVar2 = FUN_002ba7a0(*(undefined8 *)puVar1);
            plVar7 = *(long **)(lVar2 + 0x10);
            uVar3 = (**(code **)(*plVar7 + 0x48))(plVar7);
            if (((uVar3 & 1) == 0) ||
               (uVar3 = (**(code **)(*plVar7 + 0x58))(plVar7), (uVar3 & 1) == 0)) {
              uVar5 = 1 << (ulong)((uint)lVar9 & 0x1f);
              if ((*param_3 & uVar5) == 0) {
                bVar8 = false;
                goto LAB_002b212c;
              }
            }
            else {
              uVar5 = 1 << (ulong)((uint)lVar9 & 0x1f);
            }
            local_b84 = local_b84 | uVar5;
          }
LAB_002b212c:
          lVar9 = lVar9 + 1;
        } while (lVar9 != 0x20);
        if (local_b84 == 0) {
          *(undefined1 *)(param_2 + 199) = 0;
          local_78 = 0;
          FUN_002282f0(&local_78);
          uVar3 = local_78;
          local_78 = local_78 & 0xffffffff00000000;
          param_2[200] = uVar3;
        }
        else {
          local_b88 = (**(code **)(*param_2 + 0x38))(param_2);
          local_64 = 0;
          local_b90 = CONCAT26((short)param_2[6],(undefined6)local_b90);
          FUN_002a6b90(&local_78,&local_b98,auStack_b80,&local_64,0x5a0);
          uVar3 = (ulong)local_5c7;
          __n = uVar3 * 0x15 + 2;
          uVar6 = (ulong)(local_b88 + 0x1f >> 3) & 0x3c;
          if ((uint)__n <= 0x597U - (int)uVar6) {
            memcpy(auStack_b77 + uVar6,auStack_31a,__n);
            uVar3 = (ulong)local_5c7;
            uVar6 = (ulong)(local_b88 + 0x1f >> 3 & 0x3c);
          }
          local_ba0 = CONCAT44(local_ba0._4_4_,
                               (int)uVar3 + (uint)local_5c7 * 0x14 + (int)uVar6 + 0xb);
          if (*(char *)((long)param_2 + 0x6ac) != '\0') {
            FUN_002aa4a8(&local_78,param_2[0xca],auStack_b80);
            FUN_00229780(local_5e0,&local_78);
            if (local_5e0[0] == 0) {
              uVar5 = *(uint *)(param_2[0xca] + 0x968);
              local_ba0 = CONCAT44(local_ba0._4_4_,uVar5);
              memcpy(auStack_b80,*(void **)(param_2[0xca] + 0x960),(ulong)uVar5);
              local_bb0._0_2_ = CONCAT11(1,(undefined1)local_bb0);
            }
          }
          if (param_6 < (uint)local_ba0) {
            local_78 = CONCAT44(local_78._4_4_,0x4c0d);
          }
          else {
            memset(&local_78,0,4);
            memset(&local_78,0xff,4);
            uVar3 = (**(code **)(*param_2 + 0x50))(param_2,&local_78,param_4,&local_bb0);
            if ((uVar3 & 1) == 0) {
              local_78 = CONCAT44(local_78._4_4_,0x4c0d);
            }
            else {
              if (param_5 != (undefined4 *)0x0) {
                *param_5 = (uint)local_ba0;
              }
              if (bVar8) {
                *(undefined1 *)(param_2 + 199) = 0;
                local_78 = 0;
                FUN_002282f0(&local_78);
                param_2[200] = local_78;
              }
              local_78 = local_78 & 0xffffffff00000000;
            }
          }
        }
        local_64 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((long)&local_78 + 4),(Result *)&local_64);
        piVar4 = (int *)&local_78;
      }
      else {
        piVar4 = local_5e0;
      }
      goto LAB_002b204c;
    }
    *(undefined1 *)(param_2 + 199) = 0;
    local_bb0 = 0;
    FUN_002282f0(&local_bb0);
    param_2[200] = local_bb0;
  }
  local_bb0 = local_bb0 & 0xffffffff00000000;
  local_5d0[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((long)&local_bb0 + 4),(Result *)local_5d0);
  piVar4 = (int *)&local_bb0;
LAB_002b204c:
  FUN_002296c4(param_1,piVar4);
  return;
}

