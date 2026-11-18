
void FUN_03520080(long param_1,long param_2,int *param_3)

{
  undefined8 *puVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  undefined4 uVar9;
  int local_c0 [2];
  char *local_b8;
  int local_64;
  int local_48;
  int local_44;
  
  local_48 = 0;
  piVar2 = &local_48;
  if (param_3 != (int *)0x0) {
    piVar2 = param_3;
  }
  local_64 = -1;
  if (param_2 != 0) {
    piVar3 = &local_64;
    if (param_3 != (int *)0x0) {
      piVar3 = param_3 + 1;
    }
    if (*piVar3 == -1) {
      if (*(int *)(param_2 + 0x4c) != -1) {
        *(int *)(param_2 + 0x48) = *piVar2;
        iVar4 = *piVar3;
        *(undefined4 *)(param_2 + 0x4c) = 0xffffffff;
        *(int *)(param_2 + 0x50) = iVar4;
        uVar9 = 4;
LAB_0352015c:
        *(undefined4 *)(param_2 + 0x54) = uVar9;
      }
    }
    else if (*piVar2 == 2) {
      puVar1 = (undefined8 *)(param_1 + 0x1c420);
      local_c0[0] = *piVar3;
      iVar4 = (**(code **)(*(long *)*puVar1 + 0x50))();
      if (0 < iVar4) {
        iVar4 = 0;
        do {
          plVar6 = (long *)(**(code **)(*(long *)*puVar1 + 0x40))((long *)*puVar1,iVar4);
          iVar5 = local_c0[0];
          if ((plVar6 != (long *)0x0) &&
             (local_44 = (**(code **)(*plVar6 + 0x98))(), iVar5 == local_44)) {
            uVar7 = (**(code **)(*plVar6 + 0xe0))(plVar6);
            if ((uVar7 & 1) == 0) {
              return;
            }
            local_c0[0] = -1;
            local_44 = (**(code **)(*plVar6 + 0x98))(plVar6);
            FUN_0082fad0(local_c0,&local_44,1);
            iVar4 = FUN_03465f00(param_1 + 0x1c428,local_c0);
            if (iVar4 == -1) goto LAB_03520128;
            if (*(int *)(param_2 + 0x4c) == iVar4) {
              return;
            }
            *(int *)(param_2 + 0x48) = *piVar2;
            iVar5 = *piVar3;
            *(int *)(param_2 + 0x4c) = iVar4;
            *(int *)(param_2 + 0x50) = iVar5;
            goto LAB_035202f8;
          }
          iVar4 = iVar4 + 1;
          iVar5 = (**(code **)(*(long *)*puVar1 + 0x50))();
        } while (iVar4 < iVar5);
      }
    }
    else if (*piVar2 == 1) {
      FUN_0071b954(local_c0,"WherearenIslandsMap_%03d");
      if ((*local_b8 != '\0') || (*(short *)PTR_DAT_04bb37e0 != -2)) {
        iVar5 = 0;
        iVar4 = 0;
LAB_03520280:
        if ((*(int *)(param_1 + 0x228 + (long)iVar4 * 0x1a8 + 0x1a0) != 0) ||
           (lVar8 = param_1 + 0x228 + (long)iVar4 * 0x1a8, (*(byte *)(lVar8 + 0x18) >> 1 & 1) != 0))
        goto LAB_03520270;
        FUN_03412d40(lVar8,local_c0,PTR_DAT_04bb37e0,0x23);
        if (iVar5 != 1) {
          if (*(int *)(param_2 + 0x4c) + iVar5 == 0) {
            return;
          }
          *(int *)(param_2 + 0x48) = *piVar2;
          iVar4 = *piVar3;
          *(int *)(param_2 + 0x4c) = -iVar5;
          *(int *)(param_2 + 0x50) = iVar4;
LAB_035202f8:
          uVar9 = 2;
          goto LAB_0352015c;
        }
      }
LAB_03520128:
      FUN_03520080(param_1,param_2,0);
    }
  }
  return;
LAB_03520270:
  iVar4 = iVar4 + 1;
  iVar5 = iVar5 + -1;
  if (iVar4 == 0x10e) goto LAB_03520128;
  goto LAB_03520280;
}

