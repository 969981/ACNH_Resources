
undefined4 FUN_0046e680(long *param_1,long *param_2)

{
  ushort uVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80 [16];
  
  lVar4 = FUN_004270a0(*(undefined8 *)(*param_2 + (long)(int)param_2[1] * 8 + -8));
  puVar2 = PTR_DAT_048607c0;
  uVar1 = *(ushort *)(lVar4 + 8);
  if ((ulong)uVar1 != 0) {
    plVar8 = (long *)(lVar4 + 0x10);
    do {
      if (*(char *)plVar8[1] == 't') {
        lVar7 = *plVar8;
        lVar5 = FUN_004270a0(lVar7);
        if (lVar5 != 0) {
          uVar6 = *(uint *)(param_2 + 1);
          if (0 < (int)uVar6) {
            lVar5 = 0;
            do {
              if (*(long *)(*param_2 + lVar5 * 8) == lVar7) {
                if (-1 < (int)lVar5) {
                  lVar4 = *(long *)(*param_1 + 0x28);
                  if ((lVar4 != 0) && (*(byte *)(*param_1 + 0x30) <= *(byte *)(lVar4 + 0x50))) {
                    FUN_00444bc0(local_80);
                    local_88 = FUN_00427270(*(undefined8 *)
                                             (*param_2 + (long)(int)param_2[1] * 8 + -8));
                    local_90 = FUN_00427270(lVar7);
                    lVar4 = FUN_004446b0(local_80,
                                         "Found loop in type \'{}\' with type template parameter \'{}\'."
                                         ,&DAT_048648f0,&local_88,&local_90);
                    *(char **)(lVar4 + 0x28) =
                         "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
                    ;
                    *(undefined8 *)(lVar4 + 0x30) = 0x3f2;
                    *(undefined4 *)(lVar4 + 0xc) = 0xa62e68e4;
                    FUN_00444c00(local_80);
                  }
                  local_80[0] = 0;
                  FUN_0046e670(local_80);
                  goto LAB_0046e780;
                }
                break;
              }
              lVar5 = lVar5 + 1;
            } while (lVar5 < (int)uVar6);
          }
          if (uVar6 == (*(uint *)((long)param_2 + 0xc) & 0x3fffffff)) {
            FUN_00426990(puVar2,param_2,8);
            uVar6 = *(uint *)(param_2 + 1);
          }
          *(long *)(*param_2 + (long)(int)uVar6 * 8) = lVar7;
          *(uint *)(param_2 + 1) = uVar6 + 1;
          iVar3 = FUN_0046e680(param_1,param_2);
          if (iVar3 < 0) {
            local_80[0] = 0x80040200;
            if (1 < *(byte *)(*(long *)(*param_1 + 0x28) + 0x50)) {
              FUN_00444bc0(local_80,*(long *)(*param_1 + 0x28),2);
              local_88 = FUN_00427270(*(undefined8 *)(*param_2 + (long)(int)param_2[1] * 8 + -8));
              local_90 = FUN_00427270(lVar7);
              lVar4 = FUN_004446b0(local_80,"Type \'{}\' has argument \'{}\'",&DAT_048648f0,
                                   &local_88,&local_90);
              *(char **)(lVar4 + 0x28) =
                   "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Util/hkReflectionCheckUtil.cpp"
              ;
              *(undefined8 *)(lVar4 + 0x30) = 0x3f7;
              FUN_00444c00(local_80);
            }
            goto LAB_0046e780;
          }
        }
      }
      plVar8 = plVar8 + 2;
    } while (plVar8 != (long *)(lVar4 + (ulong)uVar1 * 0x10 + 0x10));
  }
  local_80[0] = 0;
LAB_0046e780:
  *(int *)(param_2 + 1) = (int)param_2[1] + -1;
  return local_80[0];
}

