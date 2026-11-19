
void FUN_03ba3a2c(long param_1,int *param_2,undefined8 param_3)

{
  uint uVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  uint *puVar7;
  long lVar8;
  long *plVar9;
  undefined *local_80;
  char *pcStack_78;
  int *local_70;
  long local_68;
  long lStack_60;
  long local_58;
  long local_50;
  long lStack_48;
  
  if (*(char *)(param_1 + 9) != '\0') {
    FUN_03ba3d70(param_1);
    *(undefined1 *)(param_1 + 9) = 0;
  }
  if (param_2 != (int *)0x0) {
    local_50 = 0;
    lStack_48 = 0;
    if ((*param_2 == 0x54534741) &&
       (((char)(*(ushort *)(param_2 + 1) >> 8) != -1 || ((*(ushort *)(param_2 + 1) & 0xff) != 0xfe))
       )) {
      uVar3 = *(ushort *)((long)param_2 + 6);
      if (0xfffffff9 < uVar3 - 8) {
        uVar1 = param_2[3];
        lStack_60 = (ulong)(uint)param_2[4] + (long)param_2;
        if (uVar3 < 5) {
          local_58 = (ulong)(uint)param_2[5] + (long)param_2;
          if (uVar3 == 4) {
            puVar7 = (uint *)(param_2 + 6);
            goto LAB_03ba3af4;
          }
        }
        else {
          lStack_48 = (ulong)(uint)param_2[6] + (long)param_2;
          puVar7 = (uint *)(param_2 + 7);
LAB_03ba3af4:
          local_58 = (ulong)*puVar7 + (long)param_2;
          local_50 = (ulong)(uint)param_2[5] + (long)param_2;
        }
        lVar8 = local_58;
        local_70 = param_2;
        local_68 = (ulong)uVar1 + (long)param_2;
        uVar5 = FUN_03ba4c10(param_1,&local_70,0,0,0,param_3);
        if ((uVar5 & 1) != 0) {
          FUN_03ba4fb0(param_1,&local_70,0,0,param_3);
          local_80 = PTR_DAT_04bb2020 + 0x10;
          pcStack_78 = (char *)0x0;
          if (lVar8 != 0) {
            pcStack_78 = (char *)(lVar8 + *(int *)((ulong)uVar1 + (long)param_2 + 8) + 8);
          }
          if (((*(char *)(param_1 + 8) != '\0') && (*pcStack_78 != '\0')) &&
             (plVar6 = (long *)FUN_03ba4630(param_1,&local_80), plVar6 != (long *)0x0)) {
            if (((*PTR_DAT_04bc3d48 & 1) == 0) &&
               (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc3d48), iVar4 != 0)) {
              *(undefined **)PTR_DAT_04bc3d40 = PTR_DAT_04bc3d50 + 0x10;
              __cxa_guard_release(PTR_DAT_04bc3d48);
            }
            uVar5 = (**(code **)(*plVar6 + 0x18))(plVar6,PTR_DAT_04bc3d40);
            if ((uVar5 & 1) != 0) {
              *(long **)(param_1 + 0x18) = plVar6;
              goto LAB_03ba3d14;
            }
          }
        }
      }
    }
  }
  FUN_03ba3d70(param_1);
  if (*(char *)(param_1 + 9) != '\0') goto LAB_03ba3d14;
  if (*(long *)(param_1 + 0x10) == 0) {
    if ((*PTR_DAT_04c4be08 != '\0') &&
       (plVar6 = (long *)(**(code **)(**(long **)(param_1 + 0x38) + 0x18))
                                   (*(long **)(param_1 + 0x38),&PTR_PTR_04c4be00,param_3),
       plVar6 != (long *)0x0)) {
      (**(code **)(*plVar6 + 0xa8))(plVar6,&PTR_PTR_04c4be00,param_3);
      plVar9 = (long *)(param_1 + 0x20);
      lVar8 = *plVar9;
      *(long **)(param_1 + 0x10) = plVar6;
      plVar6 = (long *)((long)*(int *)(param_1 + 0x34) + (long)plVar6);
      *plVar9 = (long)plVar6;
      *plVar6 = lVar8;
      plVar6[1] = (long)plVar9;
      if (lVar8 != 0) {
        *(long **)(lVar8 + 8) = plVar6;
      }
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
      goto LAB_03ba3c4c;
    }
    *(undefined8 *)(param_1 + 0x10) = 0;
    cVar2 = *(char *)(param_1 + 9);
  }
  else {
LAB_03ba3c4c:
    cVar2 = *(char *)(param_1 + 9);
  }
  if ((cVar2 == '\0') && (*(long *)(param_1 + 0x18) == 0)) {
    if ((*PTR_s_Default_04c4be18 == '\0') ||
       (plVar6 = (long *)(**(code **)(**(long **)(param_1 + 0x38) + 0x10))
                                   (*(long **)(param_1 + 0x38),&PTR_PTR_04c4be10,param_3),
       plVar6 == (long *)0x0)) {
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
    else {
      (**(code **)(*plVar6 + 0xa8))(plVar6,&PTR_PTR_04c4be10,param_3);
      plVar9 = *(long **)(param_1 + 0x10);
      *(long **)(param_1 + 0x18) = plVar6;
      if (plVar9 != (long *)0x0) {
        (**(code **)(*plVar9 + 0xc0))(plVar9,plVar6);
        plVar9 = (long *)(param_1 + 0x20);
        lVar8 = *plVar9;
        plVar6 = (long *)((long)*(int *)(param_1 + 0x34) + *(long *)(param_1 + 0x18));
        *plVar9 = (long)plVar6;
        *plVar6 = lVar8;
        plVar6[1] = (long)plVar9;
        if (lVar8 != 0) {
          *(long **)(lVar8 + 8) = plVar6;
        }
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
        FUN_03ba44e0(param_1);
      }
    }
  }
LAB_03ba3d14:
  *(undefined1 *)(param_1 + 9) = 1;
  return;
}

