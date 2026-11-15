
void FUN_021687f4(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *local_68;
  char *pcStack_60;
  undefined4 local_58;
  undefined1 local_54 [15];
  undefined1 local_45;
  uint local_3c;
  int *local_38;
  int local_18;
  undefined1 uStack_12;
  undefined1 uStack_11;
  
  if (((((*(long *)PTR_DAT_04bb7ff8 == 0) || (*(int *)(*(long *)PTR_DAT_04bb7ff8 + 0x588) == 0)) &&
       (local_68._0_4_ = FUN_021d5df0(param_1[1] + 0x3e0), (int)local_68 == 0)) &&
      (*(int *)(param_1[1] + 0x750) != 3)) &&
     ((*(int *)(*(long *)PTR_DAT_04bb27f8 + 0x14) == 0 ||
      ((*(ushort **)PTR_DAT_04bc3a48 != (ushort *)0x0 && ((**(ushort **)PTR_DAT_04bc3a48 & 1) != 0))
      )))) {
    if (((*PTR_DAT_04bb7480 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb7480), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb7478 = PTR_DAT_04bb6d20 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb7480);
    }
    uVar4 = (**(code **)*param_1)(param_1,PTR_DAT_04bb7478);
    if ((((uVar4 & 1) == 0) || (*(int *)((long)param_1 + 0x123bc) != 0x3c)) &&
       (((lVar5 = *(long *)(param_1[1] + 0x3b0), *(int *)(lVar5 + 0x4b8) != 0 &&
         (*(int *)(lVar5 + 0x378) == 0x23)) ||
        ((0x19 < *(uint *)(lVar5 + 0x360) ||
         ((1 << (ulong)(*(uint *)(lVar5 + 0x360) & 0x1f) & 0x3304000U) == 0)))))) {
      FUN_025196e4(&uStack_11);
      iVar3 = FUN_00a74b78(&uStack_11);
      local_68 = (undefined *)CONCAT44(local_68._4_4_,iVar3);
      if ((iVar3 == 0x13) &&
         ((lVar5 = FUN_0251b3b0(&uStack_11,0), lVar5 != 0 &&
          (iVar3 = FUN_02917c70(lVar5,1), puVar2 = PTR_DAT_04bb4e28, iVar3 == 0)))) {
        lVar5 = param_1[1];
        if (*(int *)(lVar5 + 0x548) == 1) {
          *(undefined1 *)(lVar5 + 0x68d) = 1;
        }
        else {
          iVar3 = *(int *)(*(long *)PTR_DAT_04bb4e28 + 0xe0);
          if (iVar3 != 0) {
            lVar6 = 0;
            lVar8 = (long)iVar3 << 3;
            lVar7 = *(long *)(*(long *)PTR_DAT_04bb4e28 + 0xe8);
            do {
              if (*(int *)(lVar5 + 0x230) == *(int *)(*(long *)(lVar7 + lVar6 * 8) + 8)) {
                local_18 = *(int *)(*(long *)(lVar7 + lVar6 * 8) + 0xd8);
                goto LAB_021689b4;
              }
              lVar6 = lVar6 + 1;
              lVar8 = lVar8 + -8;
            } while (lVar8 != 0);
          }
          local_18 = 0;
LAB_021689b4:
          local_38 = &local_18;
          local_3c = FUN_02168bfc(&local_38);
          lVar5 = *(long *)puVar2;
          iVar3 = FUN_03722560(lVar5,param_1[1] + 0x3e0);
          if ((((iVar3 == -1) ||
               (*(int *)(*(long *)(*(long *)(lVar5 + 0xe8) + (long)iVar3 * 8) + 0xdc) != 0)) ||
              ((DAT_0545c40b >> (ulong)(local_3c & 0x1f) & 1) != 0)) ||
             ((local_18 == 5 || (local_18 == 8)))) {
            lVar5 = *(long *)puVar2;
            iVar3 = FUN_03722560(lVar5,param_1[1] + 0x3e0);
            if ((((iVar3 != -1) &&
                 (*(int *)(*(long *)(*(long *)(lVar5 + 0xe8) + (long)iVar3 * 8) + 0xdc) == 0 &&
                  local_18 != 8)) || ((DAT_0545c40b >> (ulong)(local_3c & 0x1f) & 1) != 0)) &&
               (DAT_0545c40c._1_1_ == '\0')) {
              local_68 = PTR_DAT_04bb2020 + 0x10;
              pcStack_60 = "ExitBalloon";
              FUN_01ea5c80(param_1,PTR_PTR_04bb2238,&local_68,0,0,PTR_DAT_04bb32e0);
            }
          }
          else {
            DAT_0545c40b = DAT_0545c40b | (byte)(1 << (ulong)(local_3c & 0x1f));
            FUN_025196e4(&uStack_12);
            lVar5 = FUN_02168c40(param_1);
            if (lVar5 != 0) {
              uVar1 = *(undefined4 *)PTR_DAT_04bb3238;
              *(undefined8 *)(lVar5 + 0x122c0) = 0;
              *(undefined4 *)(lVar5 + 0x122c8) = 0;
              *(undefined4 *)(lVar5 + 0x122bc) = uVar1;
              puVar2 = PTR_DAT_04bb37e0;
              *(undefined2 *)(lVar5 + 0x122cc) = *(undefined2 *)PTR_DAT_04bb37e0;
              *(undefined *)(lVar5 + 0x122ce) = puVar2[2];
              *(undefined *)(lVar5 + 0x122cf) = puVar2[3];
              *(undefined4 *)(lVar5 + 0x122d0) = *(undefined4 *)(puVar2 + 4);
              *(byte *)(param_1[1] + 0x286) = *(byte *)(param_1[1] + 0x286) & 0xf7;
              param_1[0x15ab] = param_1[0x15ab] | 4;
            }
            local_45 = 0;
            local_58 = 0x10;
            pcStack_60 = local_54;
            local_54[0] = 0;
            local_68 = PTR_DAT_04bb2ab0 + 0x10;
            FUN_038d1270(&local_68,"ExitFacility");
            FUN_01ea5c80(param_1,PTR_PTR_04bb2238,&local_68,0,1,&uStack_12);
            DAT_0545c40c._1_1_ = '\x01';
          }
        }
      }
    }
  }
  return;
}

