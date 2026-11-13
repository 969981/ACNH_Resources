
/* WARNING: Type propagation algorithm not settling */

void FUN_0147d8f0(long param_1,int param_2,uint param_3,uint param_4)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  undefined8 *******pppppppuVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  long *plVar10;
  undefined8 *******local_100;
  undefined8 *******local_f8;
  uint local_f0;
  undefined8 ****local_e8;
  undefined8 ****ppppuStack_e0;
  undefined4 local_d8;
  undefined8 ***local_d0 [3];
  undefined8 **local_b8 [3];
  undefined8 *local_a0 [3];
  undefined8 local_88 [3];
  int local_6c;
  
  lVar5 = *(long *)(param_1 + 0x68);
  *(undefined4 *)(param_1 + 0x948) = *(undefined4 *)(lVar5 + 0x278);
  *(undefined4 *)(param_1 + 0x94c) = *(undefined4 *)(lVar5 + 0x27c);
  *(undefined4 *)(param_1 + 0x950) = *(undefined4 *)(lVar5 + 0x280);
  *(undefined4 *)(param_1 + 0x954) = *(undefined4 *)(lVar5 + 0x2b0);
  *(undefined4 *)(param_1 + 0x958) = *(undefined4 *)(lVar5 + 0x2b4);
  *(undefined4 *)(param_1 + 0x95c) = *(undefined4 *)(lVar5 + 0x2b8);
  *(undefined4 *)(param_1 + 0x960) = *(undefined4 *)(param_1 + 0x2d0);
  local_6c = param_2;
  if (*(int *)(param_1 + 0x300) != 0) {
    uVar9 = 0;
    uVar8 = 1;
    puVar1 = PTR_DAT_04bb3290 + 0x10;
    while( true ) {
      uVar7 = uVar8 & 7;
      local_f0 = 0;
      uVar3 = uVar8 & 0xfffffff8;
      local_88[0] = 0;
      local_d8 = 4;
      local_100 = &local_100;
      local_f8 = &local_100;
      local_e8 = local_d0;
      ppppuStack_e0 = local_d0;
      local_d0[0] = local_b8;
      local_b8[0] = local_a0;
      local_a0[0] = local_88;
      FUN_0147a740(&local_100,param_1 + 0x2f0);
      pppppppuVar6 = &local_100;
      do {
        pppppppuVar6 = (undefined8 *******)pppppppuVar6[1];
      } while ((undefined8 ********)pppppppuVar6 != &local_100);
      if (local_f0 <= uVar9) break;
      local_100 = &local_100;
      local_f0 = 0;
      local_88[0] = 0;
      local_d8 = 4;
      local_f8 = &local_100;
      local_e8 = local_d0;
      ppppuStack_e0 = local_d0;
      local_d0[0] = local_b8;
      local_b8[0] = local_a0;
      local_a0[0] = local_88;
      FUN_0147a740(&local_100,param_1 + 0x2f0);
      pppppppuVar6 = (undefined8 *******)0x0;
      if (uVar9 < local_f0) {
        pppppppuVar6 = &local_100;
        if (6 < uVar9) {
          do {
            uVar3 = uVar3 - 8;
            pppppppuVar6 = *(undefined8 ********)(pppppppuVar6[1][1][1][1][1][1][1] + 8);
          } while (uVar3 != 0);
        }
        uVar3 = uVar9 + 1 & 7;
        while (uVar3 != 0) {
          pppppppuVar6 = (undefined8 *******)pppppppuVar6[1];
          uVar7 = uVar7 - 1;
          uVar3 = uVar7;
        }
      }
      uVar7 = *(uint *)(pppppppuVar6 + -1);
      pppppppuVar6 = &local_100;
      do {
        pppppppuVar6 = (undefined8 *******)pppppppuVar6[1];
      } while ((undefined8 ********)pppppppuVar6 != &local_100);
      lVar5 = *(long *)PTR_DAT_04bb27c0;
      if (lVar5 != 0) {
        if ((((uVar7 == 0) ||
             (plVar10 = *(long **)(*(long *)(*(long *)(lVar5 + 0x1c0) + 8) +
                                  ((ulong)(uVar7 >> 0x11) & 0x7ff8)), plVar10 == (long *)0x0)) ||
            ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar10 + 0x46) != uVar7)) {
          plVar10 = (long *)0x0;
        }
        if (*(int *)(lVar5 + 0x288) == 1 || *(int *)(lVar5 + 0x288) == -1) {
          plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          lVar5 = *(long *)PTR_DAT_04bb27c0;
          iVar2 = (**(code **)(*plVar4 + 0x60))();
          if (iVar2 < 0x11) {
            uVar7 = 1;
          }
          else {
            if (4 < *(uint *)(lVar5 + 0x5e8)) goto LAB_0147dba0;
            uVar7 = 0x1aU >> (ulong)(*(uint *)(lVar5 + 0x5e8) & 0x1f) & 1;
          }
        }
        else {
LAB_0147dba0:
          uVar7 = 0;
        }
        if (plVar10 != (long *)0x0) {
          if (((*PTR_DAT_04bb5928 & 1) == 0) &&
             (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar2 != 0)) {
            *(undefined **)PTR_DAT_04bb5920 = puVar1;
            __cxa_guard_release(PTR_DAT_04bb5928);
          }
          uVar3 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb5920);
          if ((uVar7 & uVar3) == 1) {
            if (local_6c == 5) {
              if ((*(int *)(param_1 + 0x900) == 1) || ((param_3 & 1) == 0)) goto LAB_0147d9c0;
              iVar2 = 5;
            }
            else {
              iVar2 = 6;
            }
            lVar5 = plVar10[0xd];
            *(undefined4 *)(plVar10 + 0x129) = *(undefined4 *)(lVar5 + 0x278);
            *(undefined4 *)((long)plVar10 + 0x94c) = *(undefined4 *)(lVar5 + 0x27c);
            *(undefined4 *)(plVar10 + 0x12a) = *(undefined4 *)(lVar5 + 0x280);
            *(undefined4 *)((long)plVar10 + 0x954) = *(undefined4 *)(lVar5 + 0x2b0);
            *(undefined4 *)(plVar10 + 299) = *(undefined4 *)(lVar5 + 0x2b4);
            *(undefined4 *)((long)plVar10 + 0x95c) = *(undefined4 *)(lVar5 + 0x2b8);
            *(int *)(plVar10 + 300) = (int)plVar10[0x5a];
            FUN_01472270(plVar10,PTR_DAT_04bb2150,PTR_DAT_04bb2ce8,1);
            if ((int)plVar10[0x120] != iVar2) {
              FUN_03ebb160(plVar10 + 0x11f);
            }
          }
        }
      }
LAB_0147d9c0:
      uVar9 = uVar9 + 1;
      uVar8 = uVar8 + 1;
    }
  }
  iVar2 = local_6c;
  if ((local_6c != 5 || (param_3 & 1) != 0) && ((param_4 & 1) == 0)) {
    FUN_01479074(param_1);
  }
  if (*(int *)(param_1 + 0x900) == 1) {
    if ((iVar2 != 5) && ((param_4 & 1) == 0)) goto LAB_0147dd40;
LAB_0147dd5c:
    if (*(int *)(param_1 + 0x2d4) == 0) goto LAB_0147dd94;
    FUN_014786e0(param_1);
    puVar1 = PTR_DAT_04bb3238;
    *(undefined8 *)(param_1 + 0x2d8) = 0;
    *(undefined8 *)(param_1 + 0x2e0) = 0;
    *(undefined4 *)(param_1 + 0x2d4) = *(undefined4 *)puVar1;
    if ((param_4 & 1) == 0) goto LAB_0147dd94;
  }
  else {
    if ((param_4 & 1) == 0) {
LAB_0147dd40:
      FUN_01472270(param_1,PTR_DAT_04bb2150,PTR_DAT_04bb2ce8,1);
      goto LAB_0147dd5c;
    }
    if (*(int *)(param_1 + 0x2d4) == 0) goto LAB_0147dd94;
    FUN_014786e0(param_1);
    puVar1 = PTR_DAT_04bb3238;
    *(undefined8 *)(param_1 + 0x2d8) = 0;
    *(undefined8 *)(param_1 + 0x2e0) = 0;
    *(undefined4 *)(param_1 + 0x2d4) = *(undefined4 *)puVar1;
  }
  FUN_01478ae0(param_1,0);
LAB_0147dd94:
  if (*(int *)(param_1 + 0x900) != local_6c) {
    FUN_03ebb160(param_1 + 0x8f8);
  }
  return;
}

