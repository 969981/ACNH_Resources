
undefined8 FUN_026d1bc0(undefined8 param_1,long *param_2,int *param_3,long *param_4,long *param_5)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  undefined1 *__src;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined *puVar10;
  int iVar11;
  int local_2e4;
  int local_2e0 [2];
  undefined *local_2d8;
  undefined1 *local_2d0;
  int local_2c8;
  undefined1 local_2c4 [255];
  undefined1 local_1c5;
  undefined *local_1c0;
  undefined1 *local_1b8;
  undefined4 local_1b0;
  undefined1 local_1ac [255];
  undefined1 local_ad;
  char local_a8;
  undefined *local_a0;
  long local_98;
  long *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  puVar10 = PTR_DAT_04bb2818;
  local_78 = 0;
  uStack_70 = 0;
  local_90 = (long *)0x0;
  local_88 = 0;
  uStack_80 = 0;
  local_a0 = PTR_DAT_04bb2818 + 0x10;
  local_98 = 0;
  if (((char)param_5[0xf] == '\0') ||
     (local_98 = (**(code **)(*param_5 + 0xd0))(param_5,&local_a0,param_4), local_98 == 0)) {
    iVar11 = 0;
  }
  else {
    local_1b0 = 0x100;
    local_1b8 = local_1ac;
    local_ad = 0;
    local_1c0 = PTR_DAT_04bb21f8 + 0x10;
    local_1ac[0] = 0;
    local_a8 = '\0';
    if ((char)param_5[0xf] == '\0') {
      iVar11 = 0;
      cVar4 = (char)param_5[0xf];
    }
    else {
      iVar11 = 0;
      local_90 = param_5;
LAB_026d1cc8:
      do {
        uVar6 = (**(code **)(*param_5 + 0x48))(param_5,&local_a0);
        if ((uVar6 & 1) == 0) break;
        local_2e0[0] = 0;
        (**(code **)(*param_5 + 0xe0))(param_5,local_2e0,&local_a0,&local_1c0,1);
        if (local_2e0[0] == 0) break;
        local_2e0[0] = 0;
        local_1c5 = 0;
        local_2c8 = 0x100;
        local_2c4[0] = 0;
        local_2d8 = PTR_DAT_04bb21f8 + 0x10;
        local_2d0 = local_2c4;
        if (*(char *)param_4[1] != '\0') {
          (**(code **)(*param_4 + 0x18))(param_4);
          FUN_038d13f0(&local_2d8,&DAT_040ed07f,param_4[1]);
        }
        puVar1 = local_2d0;
        iVar11 = iVar11 + 1;
        (**(code **)(local_2d8 + 0x18))(&local_2d8);
        lVar7 = 0;
        do {
          if (local_2d0[lVar7] == '\0') goto LAB_026d1dd4;
          if (local_2d0[lVar7 + 1] == '\0') {
            lVar7 = lVar7 + 1;
            goto LAB_026d1dd4;
          }
          if (local_2d0[lVar7 + 2] == '\0') {
            lVar7 = lVar7 + 2;
            goto LAB_026d1dd4;
          }
          lVar7 = lVar7 + 3;
        } while (lVar7 != 0x80001);
        lVar7 = 0;
LAB_026d1dd4:
        uVar2 = (uint)lVar7 & ((int)(uint)lVar7 >> 0x1f ^ 0xffffffffU);
        (**(code **)(local_1c0 + 0x18))(&local_1c0);
        lVar7 = 0;
        do {
          if (local_1b8[lVar7] == '\0') goto LAB_026d1e34;
          if (local_1b8[lVar7 + 1] == '\0') {
            lVar7 = lVar7 + 1;
            goto LAB_026d1e34;
          }
          if (local_1b8[lVar7 + 2] == '\0') {
            lVar7 = lVar7 + 2;
            goto LAB_026d1e34;
          }
          lVar7 = lVar7 + 3;
        } while (lVar7 != 0x80001);
        lVar7 = 0;
LAB_026d1e34:
        uVar3 = (uint)lVar7;
        if ((int)(local_2c8 - uVar2) <= (int)(uint)lVar7) {
          uVar3 = local_2c8 + ~uVar2;
        }
        if (0 < (int)uVar3) {
          (**(code **)(local_1c0 + 0x18))(&local_1c0);
          memcpy(puVar1 + uVar2,local_1b8,(ulong)uVar3);
          puVar1[(int)(uVar3 + uVar2)] = 0;
        }
        if (local_a8 != '\0') {
          iVar5 = FUN_026d1bc0(param_1,param_2,&local_2e4,&local_2d8,param_5);
          if (iVar5 != 1) {
LAB_026d20e4:
            plVar8 = local_90;
            if ((((local_90 != (long *)0x0) && ((char)local_90[0xf] != '\0')) &&
                (uVar6 = (**(code **)(*local_90 + 0x48))(local_90,&local_a0), (uVar6 & 1) != 0)) &&
               (uVar6 = (**(code **)(*plVar8 + 0xd8))(plVar8,&local_a0), (uVar6 & 1) != 0)) {
              local_98 = 0;
              local_90 = (long *)0x0;
            }
            uVar9 = 7;
            puVar10 = PTR_DAT_04bb2818;
            goto LAB_026d2014;
          }
          iVar11 = local_2e4 + iVar11;
          if ((char)param_5[0xf] == '\0') break;
          goto LAB_026d1cc8;
        }
        if (((char)param_5[0xf] == '\0') ||
           (uVar6 = (**(code **)(*param_5 + 0xb0))(param_5,local_2e0,&local_2d8), (uVar6 & 1) == 0))
        {
          local_2e0[0] = 0;
        }
        if ((int)param_2[5] <= (int)param_2[2]) goto LAB_026d20e4;
        plVar8 = (long *)param_2[3];
        if (plVar8 != (long *)0x0) {
          param_2[3] = *plVar8;
        }
        puVar1 = (undefined1 *)((long)plVar8 + 0x1c);
        *(undefined1 *)((long)plVar8 + 0x11b) = 0;
        *(int *)plVar8 = local_2e0[0];
        *(undefined4 *)(plVar8 + 3) = 0x100;
        plVar8[1] = (long)&PTR_LAB_04914140;
        plVar8[2] = (long)puVar1;
        (**(code **)(local_2d8 + 0x18))(&local_2d8);
        __src = local_2d0;
        if (puVar1 != local_2d0) {
          (**(code **)(local_2d8 + 0x18))(&local_2d8);
          lVar7 = 0;
          do {
            if (local_2d0[lVar7] == '\0') goto LAB_026d1fac;
            if (local_2d0[lVar7 + 1] == '\0') {
              lVar7 = lVar7 + 1;
              goto LAB_026d1fac;
            }
            if (local_2d0[lVar7 + 2] == '\0') {
              lVar7 = lVar7 + 2;
              goto LAB_026d1fac;
            }
            lVar7 = lVar7 + 3;
          } while (lVar7 != 0x80001);
          lVar7 = 0;
LAB_026d1fac:
          iVar5 = (int)lVar7;
          if ((int)plVar8[3] <= (int)lVar7) {
            iVar5 = (int)plVar8[3] + -1;
          }
          memcpy(puVar1,__src,(long)iVar5);
          puVar1[iVar5] = 0;
        }
        plVar8[0x24] = 0;
        plVar8[0x25] = 0;
        plVar8[1] = (long)&PTR_LAB_048f9a70;
        lVar7 = *param_2;
        *param_2 = (long)(plVar8 + 0x24);
        plVar8[0x24] = lVar7;
        plVar8[0x25] = (long)param_2;
        if (lVar7 != 0) {
          *(long **)(lVar7 + 8) = plVar8 + 0x24;
        }
        *(int *)(param_2 + 2) = (int)param_2[2] + 1;
      } while ((char)param_5[0xf] != '\0');
      puVar10 = PTR_DAT_04bb2818;
      if (local_90 == (long *)0x0) goto LAB_026d2008;
      cVar4 = (char)local_90[0xf];
      param_5 = local_90;
    }
    local_90 = param_5;
    if (((cVar4 != '\0') &&
        (uVar6 = (**(code **)(*param_5 + 0x48))(param_5,&local_a0), (uVar6 & 1) != 0)) &&
       (uVar6 = (**(code **)(*param_5 + 0xd8))(param_5,&local_a0), (uVar6 & 1) != 0)) {
      local_98 = 0;
      local_90 = (long *)0x0;
    }
  }
LAB_026d2008:
  if (param_3 != (int *)0x0) {
    *param_3 = iVar11;
  }
  uVar9 = 1;
LAB_026d2014:
  plVar8 = local_90;
  local_a0 = puVar10 + 0x10;
  if (((local_90 != (long *)0x0) && ((char)local_90[0xf] != '\0')) &&
     (uVar6 = (**(code **)(*local_90 + 0x48))(local_90,&local_a0), (uVar6 & 1) != 0)) {
    (**(code **)(*plVar8 + 0xd8))(plVar8,&local_a0);
  }
  return uVar9;
}

