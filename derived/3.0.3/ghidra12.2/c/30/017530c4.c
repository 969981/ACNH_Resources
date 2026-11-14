
undefined8 FUN_017530c4(long *param_1)

{
  undefined *puVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  long local_70;
  char *local_68;
  undefined **local_60;
  undefined2 local_58;
  undefined2 local_56;
  undefined4 local_54;
  long local_50;
  undefined8 local_48;
  undefined8 local_28;
  
  puVar1 = PTR_DAT_04bb43c0;
  lVar7 = *(long *)PTR_DAT_04bb43c0;
  uVar3 = FUN_0277d6c4(param_1 + 0x250);
  lVar8 = *(long *)puVar1;
  if (lVar8 != 0) {
    lVar7 = *(long *)(lVar7 + 0x57e58);
    uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
      local_58 = (undefined2)param_1[0x250];
      local_50 = 0;
      local_54 = *(undefined4 *)((long)param_1 + 0x1284);
      local_60 = &PTR_FUN_04a36b50;
      local_56 = *(undefined2 *)((long)param_1 + 0x1282);
      uVar3 = FUN_0277d6c4(&local_58);
      if (*(long *)puVar1 != 0) {
        lVar7 = *(long *)(lVar8 + 0x57e58);
        uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
        if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
          lVar7 = *(long *)PTR_DAT_04bc0428;
          uVar3 = FUN_0277d6c4(param_1 + 0x250);
          uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
          if ((uVar3 < *(uint *)(lVar7 + 0x1d8)) &&
             (lVar7 = *(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar3 * 8), lVar7 != 0)) {
            local_50 = lVar7;
          }
        }
      }
      if (*(char *)((long)param_1 + 0x12a4) == '\0') {
        FUN_01ad8440(&local_70,&local_60);
        if ((*local_68 != '\0') && (param_1[0x227] != 0)) {
          lVar7 = *(long *)(param_1[0x227] + 0x88);
          plVar5 = (long *)(lVar7 + 0x60);
          (**(code **)(*plVar5 + 0x18))(plVar5);
          (**(code **)(*plVar5 + 0x18))(plVar5);
          pcVar6 = *(char **)(lVar7 + 0x68);
          (**(code **)(local_70 + 0x18))(&local_70);
          if (pcVar6 != local_68) {
            pcVar6 = *(char **)(lVar7 + 0x68);
            if (*pcVar6 == *local_68) {
              if (*pcVar6 == '\0') goto LAB_01753378;
              uVar2 = 0;
              do {
                uVar4 = uVar2;
                if ((uVar4 == 0x80000) || (pcVar6[uVar4 + 1] != local_68[uVar4 + 1]))
                goto LAB_017532e0;
                if (pcVar6[uVar4 + 1] == '\0') goto LAB_017532d8;
                if (pcVar6[uVar4 + 2] != local_68[uVar4 + 2]) goto LAB_017532e0;
                uVar2 = uVar4 + 2;
              } while (pcVar6[uVar4 + 2] != '\0');
              uVar4 = uVar4 + 1;
LAB_017532d8:
              if (uVar4 < 0x80000) goto LAB_01753378;
            }
LAB_017532e0:
            if ((param_1[0x227] != 0) && (lVar7 = *(long *)(param_1[0x227] + 0x78), lVar7 != 0)) {
              plVar5 = *(long **)(lVar7 + 0x50);
              local_28 = 0;
              local_48 = 0;
              lVar7 = (**(code **)(*plVar5 + 0x178))(plVar5,&local_70,&local_28,&local_48);
              if ((lVar7 != 0) && (param_1[0x227] != 0)) {
                FUN_038501b0(0x41200000,param_1[0x227],0);
                lVar7 = param_1[0x227];
                if (*(char *)(lVar7 + 0x2c0) != '\0') {
                  *(undefined1 *)(lVar7 + 0x2c0) = 0;
                  FUN_03855b20(lVar7 + 0xc0,0);
                }
                FUN_0384f8c0(lVar7,&local_70,0,0);
                (**(code **)(*param_1 + 0x120))(param_1,&local_70,10,0);
              }
            }
          }
        }
LAB_01753378:
        *(undefined1 *)((long)param_1 + 0x12a4) = 1;
        return 1;
      }
    }
  }
  return 0;
}

