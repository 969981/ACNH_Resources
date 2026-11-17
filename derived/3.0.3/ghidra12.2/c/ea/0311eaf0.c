
/* WARNING: Removing unreachable block (ram,0x0311f078) */
/* WARNING: Removing unreachable block (ram,0x0311f22c) */

void FUN_0311eaf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  char *pcVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined *local_60;
  char *pcStack_58;
  long local_38;
  
  plVar5 = *(long **)(param_1 + 0x58);
  local_38 = 0;
  if (((plVar5 == (long *)0x0) || ((**(code **)(*plVar5 + 0x28))(plVar5,&local_38), local_38 == 0))
     || (plVar5 = (long *)(local_38 + 0xb8), *plVar5 == 0)) {
    plVar5 = (long *)0x0;
    bVar2 = true;
  }
  else {
    pcVar6 = (char *)FUN_00364d70(plVar5,&DAT_041002ef);
    if (pcVar6 == (char *)0x0) {
      bVar2 = false;
    }
    else {
      local_60 = PTR_DAT_04bb2020 + 0x10;
      pcStack_58 = pcVar6;
      if (*pcVar6 == '\0') {
LAB_0311f10c:
        FUN_0386fd70(&local_60);
        uVar7 = FUN_03c688b0(param_2,&local_60);
      }
      else {
        if (*pcVar6 != '@') {
          lVar9 = 0;
          do {
            if ((lVar9 == 0x80000) || (lVar8 = lVar9 + 1, pcVar6[lVar8] == '\0')) goto LAB_0311f10c;
            lVar9 = lVar9 + 1;
          } while (pcVar6[lVar8] != '@');
        }
        uVar7 = FUN_03c68b00(param_2,&local_60);
      }
      bVar2 = false;
      *(undefined8 *)(param_1 + 0x1038) = uVar7;
    }
  }
  if (((DAT_056f4068 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_056f4068), iVar4 != 0)) {
    DAT_056f3ff8 = PTR_DAT_04bb2020 + 0x10;
    DAT_056f4000 = &DAT_0406e758;
    DAT_056f4030 = &DAT_040b1297;
    DAT_056f4010 = &DAT_040984ac;
    DAT_056f4060 = "Cheek";
    DAT_056f4020 = "Mouth";
    DAT_056f4040 = "Pupil";
    DAT_056f4050 = &DAT_0409c6a1;
    DAT_056f4008 = DAT_056f3ff8;
    DAT_056f4018 = DAT_056f3ff8;
    DAT_056f4028 = DAT_056f3ff8;
    DAT_056f4038 = DAT_056f3ff8;
    DAT_056f4048 = DAT_056f3ff8;
    DAT_056f4058 = DAT_056f3ff8;
    __cxa_guard_release(&DAT_056f4068);
  }
  (**(code **)(DAT_056f3ff8 + 0x18))(&DAT_056f3ff8);
  if (bVar2) {
    (**(code **)(DAT_056f4008 + 0x18))(&DAT_056f4008);
    (**(code **)(DAT_056f4018 + 0x18))(&DAT_056f4018);
  }
  else {
    pcVar6 = (char *)FUN_00364d70(plVar5,DAT_056f4000);
    if (pcVar6 != (char *)0x0) {
      local_60 = PTR_DAT_04bb2020 + 0x10;
      pcStack_58 = pcVar6;
      if (*pcVar6 == '\0') {
LAB_0311ec7c:
        FUN_0386fd70(&local_60);
        uVar7 = FUN_03c688b0(param_2,&local_60);
      }
      else {
        if (*pcVar6 != '@') {
          lVar9 = 0;
          do {
            if ((lVar9 == 0x80000) || (lVar8 = lVar9 + 1, pcVar6[lVar8] == '\0')) goto LAB_0311ec7c;
            lVar9 = lVar9 + 1;
          } while (pcVar6[lVar8] != '@');
        }
        uVar7 = FUN_03c68b00(param_2,&local_60);
      }
      *(undefined8 *)(param_1 + 600) = uVar7;
    }
    (**(code **)(DAT_056f4008 + 0x18))(&DAT_056f4008);
    pcVar6 = (char *)FUN_00364d70(plVar5,DAT_056f4010);
    if (pcVar6 != (char *)0x0) {
      local_60 = PTR_DAT_04bb2020 + 0x10;
      pcStack_58 = pcVar6;
      if (*pcVar6 == '\0') {
LAB_0311ed0c:
        FUN_0386fd70(&local_60);
        uVar7 = FUN_03c688b0(param_2,&local_60);
      }
      else {
        if (*pcVar6 != '@') {
          lVar9 = 0;
          do {
            if ((lVar9 == 0x80000) || (lVar8 = lVar9 + 1, pcVar6[lVar8] == '\0')) goto LAB_0311ed0c;
            lVar9 = lVar9 + 1;
          } while (pcVar6[lVar8] != '@');
        }
        uVar7 = FUN_03c68b00(param_2,&local_60);
      }
      *(undefined8 *)(param_1 + 0x450) = uVar7;
    }
    (**(code **)(DAT_056f4018 + 0x18))();
    if (!bVar2) {
      pcVar6 = (char *)FUN_00364d70(plVar5,DAT_056f4020);
      if (pcVar6 == (char *)0x0) {
        (**(code **)(DAT_056f4028 + 0x18))(&DAT_056f4028);
      }
      else {
        local_60 = PTR_DAT_04bb2020 + 0x10;
        pcStack_58 = pcVar6;
        if (*pcVar6 == '\0') {
LAB_0311f04c:
          FUN_0386fd70(&local_60);
          uVar7 = FUN_03c688b0(param_2,&local_60);
        }
        else {
          if (*pcVar6 != '@') {
            lVar9 = 0;
            do {
              if ((lVar9 == 0x80000) || (lVar8 = lVar9 + 1, pcVar6[lVar8] == '\0'))
              goto LAB_0311f04c;
              lVar9 = lVar9 + 1;
            } while (pcVar6[lVar8] != '@');
          }
          uVar7 = FUN_03c68b00(param_2,&local_60);
        }
        puVar3 = DAT_056f4028;
        *(undefined8 *)(param_1 + 0x648) = uVar7;
        (**(code **)(puVar3 + 0x18))(&DAT_056f4028);
      }
      pcVar6 = (char *)FUN_00364d70(plVar5,DAT_056f4030);
      if (pcVar6 == (char *)0x0) {
        (**(code **)(DAT_056f4038 + 0x18))();
      }
      else {
        local_60 = PTR_DAT_04bb2020 + 0x10;
        pcStack_58 = pcVar6;
        if (*pcVar6 == '\0') {
LAB_0311f144:
          FUN_0386fd70(&local_60);
          uVar7 = FUN_03c688b0(param_2,&local_60);
        }
        else {
          if (*pcVar6 != '@') {
            lVar9 = 0;
            do {
              if ((lVar9 == 0x80000) || (lVar8 = lVar9 + 1, pcVar6[lVar8] == '\0'))
              goto LAB_0311f144;
              lVar9 = lVar9 + 1;
            } while (pcVar6[lVar8] != '@');
          }
          uVar7 = FUN_03c68b00(param_2,&local_60);
        }
        *(undefined8 *)(param_1 + 0x840) = uVar7;
        (**(code **)(DAT_056f4038 + 0x18))(&DAT_056f4038);
      }
      pcVar6 = (char *)FUN_00364d70(plVar5,DAT_056f4040);
      if (pcVar6 == (char *)0x0) {
        (**(code **)(DAT_056f4048 + 0x18))(&DAT_056f4048);
      }
      else {
        local_60 = PTR_DAT_04bb2020 + 0x10;
        pcStack_58 = pcVar6;
        if (*pcVar6 == '\0') {
LAB_0311f200:
          FUN_0386fd70(&local_60);
          uVar7 = FUN_03c688b0(param_2,&local_60);
        }
        else {
          if (*pcVar6 != '@') {
            lVar9 = 0;
            do {
              if ((lVar9 == 0x80000) || (lVar8 = lVar9 + 1, pcVar6[lVar8] == '\0'))
              goto LAB_0311f200;
              lVar9 = lVar9 + 1;
            } while (pcVar6[lVar8] != '@');
          }
          uVar7 = FUN_03c68b00(param_2,&local_60);
        }
        puVar3 = DAT_056f4048;
        *(undefined8 *)(param_1 + 0xa38) = uVar7;
        (**(code **)(puVar3 + 0x18))(&DAT_056f4048);
      }
      pcVar6 = (char *)FUN_00364d70(plVar5,DAT_056f4050);
      if (pcVar6 == (char *)0x0) {
        (**(code **)(DAT_056f4058 + 0x18))();
      }
      else {
        local_60 = PTR_DAT_04bb2020 + 0x10;
        pcStack_58 = pcVar6;
        if (*pcVar6 == '\0') {
LAB_0311f2bc:
          FUN_0386fd70(&local_60);
          uVar7 = FUN_03c688b0(param_2,&local_60);
        }
        else {
          if (*pcVar6 != '@') {
            lVar9 = 0;
            do {
              if ((lVar9 == 0x80000) || (lVar8 = lVar9 + 1, pcVar6[lVar8] == '\0'))
              goto LAB_0311f2bc;
              lVar9 = lVar9 + 1;
            } while (pcVar6[lVar8] != '@');
          }
          uVar7 = FUN_03c68b00(param_2,&local_60);
        }
        *(undefined8 *)(param_1 + 0xc30) = uVar7;
        (**(code **)(DAT_056f4058 + 0x18))(&DAT_056f4058);
      }
      pcVar6 = (char *)FUN_00364d70(plVar5,DAT_056f4060);
      if (pcVar6 != (char *)0x0) {
        local_60 = PTR_DAT_04bb2020 + 0x10;
        pcStack_58 = pcVar6;
        if (*pcVar6 == '\0') {
LAB_0311f35c:
          FUN_0386fd70(&local_60);
          uVar7 = FUN_03c688b0(param_2,&local_60);
          *(undefined8 *)(param_1 + 0xe28) = uVar7;
        }
        else {
          if (*pcVar6 != '@') {
            lVar9 = 0;
            do {
              if ((lVar9 == 0x80000) || (lVar8 = lVar9 + 1, pcVar6[lVar8] == '\0'))
              goto LAB_0311f35c;
              lVar9 = lVar9 + 1;
            } while (pcVar6[lVar8] != '@');
          }
          uVar7 = FUN_03c68b00(param_2,&local_60);
          *(undefined8 *)(param_1 + 0xe28) = uVar7;
        }
      }
      goto LAB_0311ed84;
    }
  }
  (**(code **)(DAT_056f4028 + 0x18))(&DAT_056f4028);
  (**(code **)(DAT_056f4038 + 0x18))(&DAT_056f4038);
  (**(code **)(DAT_056f4048 + 0x18))(&DAT_056f4048);
  (**(code **)(DAT_056f4058 + 0x18))(&DAT_056f4058);
LAB_0311ed84:
  if (((DAT_056f40b0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_056f40b0), iVar4 != 0)) {
    DAT_056f4070 = PTR_DAT_04bb2020 + 0x10;
    DAT_056f4078 = "HairColor";
    DAT_056f40a8 = "PupilColor";
    DAT_056f4088 = "SkinColor";
    DAT_056f4098 = "CheekColor";
    DAT_056f4080 = DAT_056f4070;
    DAT_056f4090 = DAT_056f4070;
    DAT_056f40a0 = DAT_056f4070;
    __cxa_guard_release(&DAT_056f40b0);
  }
  (**(code **)(DAT_056f4070 + 0x18))(&DAT_056f4070);
  if (bVar2) {
    (**(code **)(DAT_056f4080 + 0x18))(&DAT_056f4080);
    (**(code **)(DAT_056f4090 + 0x18))();
    (**(code **)(DAT_056f40a0 + 0x18))(&DAT_056f40a0);
  }
  else {
    pcVar6 = (char *)FUN_00364e30(plVar5,DAT_056f4078);
    if (pcVar6 != (char *)0x0) {
      local_60 = PTR_DAT_04bb2020 + 0x10;
      pcStack_58 = pcVar6;
      uVar7 = FUN_03c68d44(param_2,&local_60,PTR_PTR_04bb2238);
      *(undefined8 *)(param_1 + 0x1018) = uVar7;
    }
    (**(code **)(DAT_056f4080 + 0x18))(&DAT_056f4080);
    pcVar6 = (char *)FUN_00364e30(plVar5,DAT_056f4088);
    if (pcVar6 != (char *)0x0) {
      local_60 = PTR_DAT_04bb2020 + 0x10;
      pcStack_58 = pcVar6;
      uVar7 = FUN_03c68d44(param_2,&local_60,PTR_PTR_04bb2238);
      *(undefined8 *)(param_1 + 0x1020) = uVar7;
    }
    (**(code **)(DAT_056f4090 + 0x18))(&DAT_056f4090);
    pcVar6 = (char *)FUN_00364e30(plVar5,DAT_056f4098);
    if (pcVar6 != (char *)0x0) {
      local_60 = PTR_DAT_04bb2020 + 0x10;
      pcStack_58 = pcVar6;
      uVar7 = FUN_03c68d44(param_2,&local_60,PTR_PTR_04bb2238);
      *(undefined8 *)(param_1 + 0x1028) = uVar7;
    }
    (**(code **)(DAT_056f40a0 + 0x18))(&DAT_056f40a0);
    pcVar6 = (char *)FUN_00364e30(plVar5,DAT_056f40a8);
    if (pcVar6 != (char *)0x0) {
      local_60 = PTR_DAT_04bb2020 + 0x10;
      pcStack_58 = pcVar6;
      uVar7 = FUN_03c68d44(param_2,&local_60,PTR_PTR_04bb2238);
      *(undefined8 *)(param_1 + 0x1030) = uVar7;
    }
  }
  if (*(long *)(param_1 + 0x1070) == 0) {
    lVar9 = *(long *)PTR_DAT_04bb2698;
    if (lVar9 == 0) {
      plVar5 = malloc(0x20);
    }
    else {
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar1 = (undefined8 *)(lVar9 + 8);
      if (lVar8 != 0) {
        puVar1 = (undefined8 *)(lVar8 + 0xa8);
      }
      plVar5 = (long *)(**(code **)(*(long *)*puVar1 + 0x30))((long *)*puVar1,0x20,8);
    }
    plVar5[2] = (long)(plVar5 + 1);
    plVar5[3] = 0x20800000000;
    *plVar5 = (long)(PTR_DAT_04bc9cb0 + 0x10);
    plVar5[1] = (long)(plVar5 + 1);
    *(long **)(param_1 + 0x1070) = plVar5;
  }
  FUN_030bc030(param_1,param_2,param_3);
  return;
}

