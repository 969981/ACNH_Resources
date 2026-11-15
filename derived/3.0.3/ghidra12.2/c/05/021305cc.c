
undefined8 FUN_021305cc(long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  long *plVar6;
  undefined4 *puVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  uint uVar11;
  long local_70;
  undefined8 local_68;
  ulong local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined8 local_50;
  ulong uStack_48;
  undefined4 local_24;
  
  lVar8 = ((long *)param_1[1])[0x77];
  if (*(int *)(lVar8 + 0x77b0) - 3U < 5) {
    return 0;
  }
  uVar5 = (**(code **)(*(long *)param_1[1] + 0x180))();
  puVar2 = PTR_DAT_04bb27c0;
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  local_58 = 7;
  if ((*(ushort *)(lVar8 + 0xad28) >> 7 & 1) != 0) {
    return 0;
  }
  if ((*(ushort *)(lVar8 + 0xad2a) >> 7 & 1) != 0) {
    return 0;
  }
  uVar11 = *(uint *)((long)param_1 + 0x1c);
  if (uVar11 == 0) goto LAB_021307c0;
  lVar8 = *(long *)PTR_DAT_04bb27c0;
  if (lVar8 != 0) {
    plVar9 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) + ((ulong)(uVar11 >> 0x11) & 0x7ff8)
                       );
    if (((plVar9 == (long *)0x0) || ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) ||
       (*(uint *)(plVar9 + 0x46) != uVar11)) {
      plVar9 = (long *)0x0;
    }
    if ((*(int *)(lVar8 + 0x288) == 1) || (*(int *)(lVar8 + 0x288) == -1)) {
      plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar8 = *(long *)puVar2;
      iVar3 = (**(code **)(*plVar6 + 0x60))();
      if (iVar3 < 0x11) {
        uVar11 = 1;
      }
      else {
        if (4 < *(uint *)(lVar8 + 0x5e8)) goto LAB_02130704;
        uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_02130704:
      uVar11 = 0;
    }
    if (plVar9 != (long *)0x0) {
      lVar8 = plVar9[0x2a];
      if (((*PTR_DAT_04bb3fe0 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb3fe0), iVar3 != 0)) {
        *(undefined **)PTR_DAT_04bb3fd8 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb3fe0);
      }
      uVar5 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb3fd8);
      uVar1 = 0;
      if ((int)lVar8 == 1) {
        uVar1 = uVar11;
      }
      if (((uVar5 & 1) != 0) && (uVar1 != 0)) {
        return 0;
      }
    }
  }
  lVar8 = *(long *)(param_1[1] + 0x3b0);
  *(undefined4 *)(*(long *)(param_1[1] + 0x3c0) + 0x29c) = 0x41f00000;
  (**(code **)(**(long **)(param_1[1] + 0x3b8) + 0x328))(*(long **)(param_1[1] + 0x3b8),0);
  *(undefined4 *)(lVar8 + 0x56c) = 0;
  FUN_01e5aacc(lVar8,6);
  *(undefined2 *)((long)param_1 + 0x24) = 0;
  *(undefined4 *)((long)param_1 + 0x1c) = 0;
  FUN_01ea5c80(*(undefined8 *)(param_1[1] + 0x3b8),PTR_PTR_04bb2238,PTR_PTR_04bb2238,1,0,
               PTR_DAT_04bb32e0);
LAB_021307c0:
  if (*(char *)(*(long *)PTR_DAT_04bb3968 + 0x3428) != '\0') {
    FUN_0194a710(&local_58,0);
    puVar2 = PTR_DAT_04bb3238;
    local_70 = CONCAT44(uStack_54,local_58);
    local_68 = local_50;
    local_60 = uStack_48;
    iVar3 = (int)uStack_48;
    while (iVar3 != 5) {
      lVar8 = FUN_0194b7fc(&local_70);
      if (lVar8 != 0) {
        iVar3 = *(int *)(lVar8 + 0x2b8);
        if (iVar3 == 0x286) {
LAB_02130814:
          if ((*(uint *)(param_1[1] + 0x750) | 2) != 3) {
            switch(local_60 & 0xffffffff) {
            case 0:
              uVar11 = (uint)local_68;
              if (*(uint *)(local_70 + 0x288) <= (uint)local_68) {
                uVar11 = 0;
              }
              lVar8 = *(long *)(local_70 + 0x290) + (long)(int)uVar11 * 0x30;
              uVar11 = local_68._4_4_;
              if (*(uint *)(lVar8 + 0x10) <= local_68._4_4_) {
                uVar11 = 0;
              }
              puVar7 = (undefined4 *)(*(long *)(lVar8 + 0x18) + (long)(int)uVar11 * 4);
              break;
            case 1:
              puVar7 = (undefined4 *)(local_70 + 2000);
              break;
            case 2:
              puVar7 = (undefined4 *)(local_70 + 0x860);
              break;
            case 3:
              puVar7 = (undefined4 *)(local_70 + 0x8c4);
              break;
            case 4:
              puVar7 = (undefined4 *)(local_70 + 0x8c8);
              break;
            default:
              puVar7 = (undefined4 *)puVar2;
            }
            local_24 = *puVar7;
            uVar5 = FUN_02087ce0(*(undefined8 *)(param_1[1] + 0x3c0),&local_24,0);
            if ((uVar5 & 1) != 0) {
              uVar4 = FUN_0194b74c(&local_70);
              *(undefined4 *)((long)param_1 + 0x1c) = uVar4;
              *(int *)(param_1 + 4) = iVar3;
              *(undefined1 *)((long)param_1 + 0x24) = 1;
LAB_021309b4:
              *(undefined1 *)((long)param_1 + 0x27) = 0;
              return 1;
            }
          }
        }
        else if (iVar3 == 0x283) {
          if ((*(uint *)(param_1[1] + 0x750) | 2) != 3) {
            uVar5 = (**(code **)(*param_1 + 0x50))(param_1);
            if ((uVar5 & 1) != 0) {
              uVar4 = FUN_0194b74c(&local_70);
              *(undefined4 *)((long)param_1 + 0x1c) = uVar4;
              *(undefined4 *)(param_1 + 4) = 0x283;
              *(undefined2 *)((long)param_1 + 0x24) = 0x100;
              (**(code **)(*param_1 + 0x58))(param_1);
              goto LAB_021309b4;
            }
            uVar10 = *(undefined8 *)(param_1[1] + 0x3c0);
            local_24 = FUN_0194b74c(&local_70);
            uVar5 = FUN_02087ce0(uVar10,&local_24,0);
            if ((uVar5 & 1) != 0) {
              uVar4 = FUN_0194b74c(&local_70);
              *(undefined1 *)((long)param_1 + 0x24) = 0;
              *(undefined4 *)((long)param_1 + 0x1c) = uVar4;
              *(undefined4 *)(param_1 + 4) = 0x283;
              goto LAB_021309b4;
            }
          }
        }
        else if (iVar3 == 0x280) goto LAB_02130814;
      }
      FUN_0194afc0(&local_70);
      iVar3 = (int)local_60;
    }
  }
  return 0;
}

