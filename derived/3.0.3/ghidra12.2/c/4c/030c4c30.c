
void FUN_030c4c30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  void *__src;
  long lVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  char *pcVar7;
  long lVar8;
  void *__dest;
  undefined *local_58;
  char *pcStack_50;
  long local_48;
  
  plVar5 = *(long **)(param_1 + 0x58);
  local_48 = 0;
  if ((plVar5 == (long *)0x0) || ((**(code **)(*plVar5 + 0x28))(plVar5,&local_48), local_48 == 0)) {
    plVar5 = (long *)0x0;
  }
  else {
    plVar5 = (long *)0x0;
    if (*(long *)(local_48 + 0xb8) != 0) {
      plVar5 = (long *)(local_48 + 0xb8);
    }
  }
  puVar1 = PTR_DAT_04bb2020;
  lVar8 = 0;
  local_58 = PTR_DAT_04bb2020 + 0x10;
  pcStack_50 = "*Fade";
  do {
    if ((lVar8 == 0x80000) || (pcVar7 = &DAT_040a7e35 + lVar8, *pcVar7 == '\0')) {
      FUN_0386fd70(&local_58);
      uVar6 = FUN_03c688b0(param_2,&local_58);
      goto LAB_030c4cf4;
    }
    lVar8 = lVar8 + 1;
  } while (*pcVar7 != '@');
  uVar6 = FUN_03c68b00(param_2,&local_58);
LAB_030c4cf4:
  *(undefined8 *)(param_1 + 0x210) = uVar6;
  if (((DAT_056eb2d0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_056eb2d0), iVar4 != 0)) {
    DAT_056eb260 = puVar1 + 0x10;
    DAT_056eb268 = &DAT_0406e758;
    DAT_056eb278 = &DAT_040984ac;
    DAT_056eb288 = &DAT_040b1297;
    DAT_056eb298 = "Pupil";
    DAT_056eb2a8 = &DAT_0409c6a1;
    DAT_056eb2b8 = "Mouth";
    DAT_056eb2c8 = "Cheek";
    DAT_056eb270 = DAT_056eb260;
    DAT_056eb280 = DAT_056eb260;
    DAT_056eb290 = DAT_056eb260;
    DAT_056eb2a0 = DAT_056eb260;
    DAT_056eb2b0 = DAT_056eb260;
    DAT_056eb2c0 = DAT_056eb260;
    __cxa_guard_release(&DAT_056eb2d0);
  }
  (**(code **)(DAT_056eb260 + 0x18))(&DAT_056eb260);
  if (plVar5 == (long *)0x0) {
    (**(code **)(DAT_056eb270 + 0x18))(&DAT_056eb270);
    (**(code **)(DAT_056eb280 + 0x18))();
    (**(code **)(DAT_056eb290 + 0x18))();
    (**(code **)(DAT_056eb2a0 + 0x18))();
    (**(code **)(DAT_056eb2b0 + 0x18))();
    (**(code **)(DAT_056eb2c0 + 0x18))(&DAT_056eb2c0);
  }
  else {
    pcVar7 = (char *)FUN_00364d70(plVar5,DAT_056eb268);
    if (pcVar7 != (char *)0x0) {
      local_58 = puVar1 + 0x10;
      pcStack_50 = pcVar7;
      if (*pcVar7 != '\0') {
        if (*pcVar7 != '@') {
          lVar8 = 0;
          do {
            if ((lVar8 == 0x80000) || (lVar2 = lVar8 + 1, pcVar7[lVar2] == '\0')) {
              FUN_0386fd70(&local_58);
              uVar6 = FUN_03c688b0(param_2,&local_58);
              goto LAB_030c4e04;
            }
            lVar8 = lVar8 + 1;
          } while (pcVar7[lVar2] != '@');
        }
        uVar6 = FUN_03c68b00(param_2,&local_58);
LAB_030c4e04:
        *(undefined8 *)(param_1 + 0x228) = uVar6;
      }
    }
    (**(code **)(DAT_056eb270 + 0x18))(&DAT_056eb270);
    pcVar7 = (char *)FUN_00364d70(plVar5,DAT_056eb278);
    if (pcVar7 != (char *)0x0) {
      local_58 = puVar1 + 0x10;
      pcStack_50 = pcVar7;
      if (*pcVar7 != '\0') {
        if (*pcVar7 != '@') {
          lVar8 = 0;
          do {
            if ((lVar8 == 0x80000) || (lVar2 = lVar8 + 1, pcVar7[lVar2] == '\0')) {
              FUN_0386fd70(&local_58);
              uVar6 = FUN_03c688b0(param_2,&local_58);
              goto LAB_030c4e90;
            }
            lVar8 = lVar8 + 1;
          } while (pcVar7[lVar2] != '@');
        }
        uVar6 = FUN_03c68b00(param_2,&local_58);
LAB_030c4e90:
        *(undefined8 *)(param_1 + 0x278) = uVar6;
      }
    }
    (**(code **)(DAT_056eb280 + 0x18))(&DAT_056eb280);
    pcVar7 = (char *)FUN_00364d70(plVar5,DAT_056eb288);
    if (pcVar7 != (char *)0x0) {
      local_58 = puVar1 + 0x10;
      pcStack_50 = pcVar7;
      if (*pcVar7 != '\0') {
        if (*pcVar7 != '@') {
          lVar8 = 0;
          do {
            if ((lVar8 == 0x80000) || (lVar2 = lVar8 + 1, pcVar7[lVar2] == '\0')) {
              FUN_0386fd70(&local_58);
              uVar6 = FUN_03c688b0(param_2,&local_58);
              goto LAB_030c4f20;
            }
            lVar8 = lVar8 + 1;
          } while (pcVar7[lVar2] != '@');
        }
        uVar6 = FUN_03c68b00(param_2,&local_58);
LAB_030c4f20:
        *(undefined8 *)(param_1 + 0x2c8) = uVar6;
      }
    }
    (**(code **)(DAT_056eb290 + 0x18))(&DAT_056eb290);
    pcVar7 = (char *)FUN_00364d70(plVar5,DAT_056eb298);
    if (pcVar7 != (char *)0x0) {
      local_58 = puVar1 + 0x10;
      pcStack_50 = pcVar7;
      if (*pcVar7 != '\0') {
        if (*pcVar7 != '@') {
          lVar8 = 0;
          do {
            if ((lVar8 == 0x80000) || (lVar2 = lVar8 + 1, pcVar7[lVar2] == '\0')) {
              FUN_0386fd70(&local_58);
              uVar6 = FUN_03c688b0(param_2,&local_58);
              goto LAB_030c4fb0;
            }
            lVar8 = lVar8 + 1;
          } while (pcVar7[lVar2] != '@');
        }
        uVar6 = FUN_03c68b00(param_2,&local_58);
LAB_030c4fb0:
        *(undefined8 *)(param_1 + 0x318) = uVar6;
      }
    }
    (**(code **)(DAT_056eb2a0 + 0x18))(&DAT_056eb2a0);
    pcVar7 = (char *)FUN_00364d70(plVar5,DAT_056eb2a8);
    if (pcVar7 != (char *)0x0) {
      local_58 = puVar1 + 0x10;
      pcStack_50 = pcVar7;
      if (*pcVar7 != '\0') {
        if (*pcVar7 != '@') {
          lVar8 = 0;
          do {
            if ((lVar8 == 0x80000) || (lVar2 = lVar8 + 1, pcVar7[lVar2] == '\0')) {
              FUN_0386fd70(&local_58);
              uVar6 = FUN_03c688b0(param_2,&local_58);
              goto LAB_030c5040;
            }
            lVar8 = lVar8 + 1;
          } while (pcVar7[lVar2] != '@');
        }
        uVar6 = FUN_03c68b00(param_2,&local_58);
LAB_030c5040:
        *(undefined8 *)(param_1 + 0x368) = uVar6;
      }
    }
    (**(code **)(DAT_056eb2b0 + 0x18))(&DAT_056eb2b0);
    pcVar7 = (char *)FUN_00364d70(plVar5,DAT_056eb2b8);
    if (pcVar7 != (char *)0x0) {
      local_58 = puVar1 + 0x10;
      pcStack_50 = pcVar7;
      if (*pcVar7 != '\0') {
        if (*pcVar7 != '@') {
          lVar8 = 0;
          do {
            if ((lVar8 == 0x80000) || (lVar2 = lVar8 + 1, pcVar7[lVar2] == '\0')) {
              FUN_0386fd70(&local_58);
              uVar6 = FUN_03c688b0(param_2,&local_58);
              goto LAB_030c50d0;
            }
            lVar8 = lVar8 + 1;
          } while (pcVar7[lVar2] != '@');
        }
        uVar6 = FUN_03c68b00(param_2,&local_58);
LAB_030c50d0:
        *(undefined8 *)(param_1 + 0x3b8) = uVar6;
      }
    }
    (**(code **)(DAT_056eb2c0 + 0x18))(&DAT_056eb2c0);
    pcStack_50 = (char *)FUN_00364d70(plVar5,DAT_056eb2c8);
    if (pcStack_50 != (char *)0x0) {
      local_58 = puVar1 + 0x10;
      if (*pcStack_50 != '\0') {
        if (*pcStack_50 != '@') {
          lVar8 = 0;
          do {
            if ((lVar8 == 0x80000) || (lVar2 = lVar8 + 1, pcStack_50[lVar2] == '\0')) {
              FUN_0386fd70(&local_58);
              uVar6 = FUN_03c688b0(param_2,&local_58);
              goto LAB_030c5160;
            }
            lVar8 = lVar8 + 1;
          } while (pcStack_50[lVar2] != '@');
        }
        uVar6 = FUN_03c68b00(param_2,&local_58);
LAB_030c5160:
        *(undefined8 *)(param_1 + 0x408) = uVar6;
      }
    }
  }
  puVar1 = puVar1 + 0x10;
  pcStack_50 = "*HairColor";
  local_58 = puVar1;
  uVar6 = FUN_03c68d44(param_2,&local_58,&PTR_PTR_04c4b980);
  *(undefined8 *)(param_1 + 0x458) = uVar6;
  pcStack_50 = "*SkinColor";
  local_58 = puVar1;
  uVar6 = FUN_03c68d44(param_2,&local_58,&PTR_PTR_04c4b980);
  *(undefined8 *)(param_1 + 0x460) = uVar6;
  pcStack_50 = "*PupilColor";
  local_58 = puVar1;
  uVar6 = FUN_03c68d44(param_2,&local_58,&PTR_PTR_04c4b980);
  *(undefined8 *)(param_1 + 0x468) = uVar6;
  pcStack_50 = "*CheekColor";
  local_58 = puVar1;
  uVar6 = FUN_03c68d44(param_2,&local_58,&PTR_PTR_04c4b980);
  *(undefined8 *)(param_1 + 0x470) = uVar6;
  pcStack_50 = "*FaceType";
  local_58 = puVar1;
  uVar6 = FUN_03c68d44(param_2,&local_58,&PTR_PTR_04c4b980);
  *(undefined8 *)(param_1 + 0x478) = uVar6;
  if (plVar5 == (long *)0x0) {
    bVar3 = false;
    *(undefined1 *)(param_1 + 0x255) = 0;
    *(undefined1 *)(param_1 + 0x2a5) = 0;
    *(undefined1 *)(param_1 + 0x2f5) = 0;
    *(undefined1 *)(param_1 + 0x345) = 0;
    *(undefined1 *)(param_1 + 0x395) = 0;
    *(undefined1 *)(param_1 + 0x3e5) = 0;
  }
  else {
    lVar8 = FUN_00364ec0(plVar5,"FaceTextureName");
    if (lVar8 != 0) {
      __src = (void *)(lVar8 + (ulong)*(uint *)(lVar8 + 4));
      __dest = *(void **)(param_1 + 0x488);
      if (__dest != __src) {
        lVar8 = 0;
        do {
          if (*(char *)((long)__src + lVar8) == '\0') goto LAB_030c52ac;
          if (*(char *)((long)__src + lVar8 + 1) == '\0') {
            lVar8 = lVar8 + 1;
            goto LAB_030c52ac;
          }
          if (*(char *)((long)__src + lVar8 + 2) == '\0') {
            lVar8 = lVar8 + 2;
            goto LAB_030c52ac;
          }
          lVar8 = lVar8 + 3;
        } while (lVar8 != 0x80001);
        lVar8 = 0;
LAB_030c52ac:
        iVar4 = (int)lVar8;
        if (*(int *)(param_1 + 0x490) <= (int)lVar8) {
          iVar4 = *(int *)(param_1 + 0x490) + -1;
        }
        memcpy(__dest,__src,(long)iVar4);
        *(undefined1 *)((long)__dest + (long)iVar4) = 0;
      }
    }
    lVar8 = FUN_00364ec0(plVar5,"UsePlayerIconFace");
    *(bool *)(param_1 + 0x255) = lVar8 != 0;
    lVar8 = FUN_00364ec0(plVar5,"UsePlayerIconHair");
    *(bool *)(param_1 + 0x2a5) = lVar8 != 0;
    lVar8 = FUN_00364ec0(plVar5,"UsePlayerIconEye");
    *(bool *)(param_1 + 0x2f5) = lVar8 != 0;
    lVar8 = FUN_00364ec0(plVar5,"UsePlayerIconPupil");
    *(bool *)(param_1 + 0x345) = lVar8 != 0;
    lVar8 = FUN_00364ec0(plVar5,"UsePlayerIconNose");
    *(bool *)(param_1 + 0x395) = lVar8 != 0;
    lVar8 = FUN_00364ec0(plVar5,"UsePlayerIconMouth");
    *(bool *)(param_1 + 0x3e5) = lVar8 != 0;
    lVar8 = FUN_00364ec0(plVar5,"UsePlayerIconCheek");
    bVar3 = lVar8 != 0;
  }
  *(bool *)(param_1 + 0x435) = bVar3;
  FUN_030bc030(param_1,param_2,param_3);
  return;
}

