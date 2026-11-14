
void FUN_01d535c0(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  char *pcVar4;
  
  if (*(char *)(param_1 + 0xa5c) == '\0') goto LAB_01d536d4;
  if (*(int *)(param_1 + 0xa38) == DAT_04cd27a8) {
    (**(code **)(*(long *)(param_1 + 0xa40) + 0x18))(param_1 + 0xa40);
    (**(code **)(*(long *)(param_1 + 0xa40) + 0x18))(param_1 + 0xa40);
    pcVar4 = *(char **)(param_1 + 0xa48);
    (**(code **)(DAT_04cd27b0 + 0x18))(&DAT_04cd27b0);
    if (pcVar4 != DAT_04cd27b8) {
      pcVar4 = *(char **)(param_1 + 0xa48);
      if (*pcVar4 != *DAT_04cd27b8) goto LAB_01d536a8;
      if (*pcVar4 != '\0') {
        uVar2 = 0;
        do {
          uVar3 = uVar2;
          if ((uVar3 == 0x80000) || (pcVar4[uVar3 + 1] != DAT_04cd27b8[uVar3 + 1]))
          goto LAB_01d536a8;
          if (pcVar4[uVar3 + 1] == '\0') goto LAB_01d536a0;
          if (pcVar4[uVar3 + 2] != DAT_04cd27b8[uVar3 + 2]) goto LAB_01d536a8;
          uVar2 = uVar3 + 2;
        } while (pcVar4[uVar3 + 2] != '\0');
        uVar3 = uVar3 + 1;
LAB_01d536a0:
        if (0x7ffff < uVar3) goto LAB_01d536a8;
      }
    }
  }
  else {
LAB_01d536a8:
    puVar1 = PTR_DAT_04bb4860;
    FUN_00829a90(*(undefined8 *)PTR_DAT_04bb4860,param_1 + 0xa30);
    if (*(char *)(param_1 + 0xa90) != '\0') {
      FUN_00829a90(*(undefined8 *)puVar1,param_1 + 0xa60);
    }
  }
  *(undefined1 *)(param_1 + 0xa5c) = 0;
LAB_01d536d4:
  if (*(char *)(param_1 + 0xa90) != '\0') {
    *(undefined1 *)(param_1 + 0xa90) = 0;
  }
  return;
}

