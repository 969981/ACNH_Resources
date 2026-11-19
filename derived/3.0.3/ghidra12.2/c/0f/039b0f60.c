
undefined8 FUN_039b0f60(long *param_1,undefined4 *param_2,long param_3)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  undefined *puVar4;
  bool bVar5;
  void *__src;
  undefined4 uVar6;
  ulong uVar7;
  void *__dest;
  ulong uVar8;
  int iVar9;
  long lVar10;
  undefined *local_70;
  undefined *puStack_68;
  undefined *local_60;
  undefined1 *local_58;
  
  (**(code **)(*param_1 + 0x18))();
  lVar10 = 0;
  while (*(char *)(param_1[1] + lVar10) != '\0') {
    lVar1 = param_1[1] + lVar10;
    if (*(char *)(lVar1 + 1) == '\0') {
      lVar10 = lVar10 + 1;
      break;
    }
    if (*(char *)(lVar1 + 2) == '\0') {
      iVar9 = (int)lVar10 + 2;
      uVar3 = (int)lVar10 - 1;
      goto joined_r0x039b0fd8;
    }
    lVar10 = lVar10 + 3;
    if (lVar10 == 0x80001) {
      return 0;
    }
  }
  iVar9 = (int)lVar10;
  uVar3 = iVar9 - 3;
joined_r0x039b0fd8:
  if (iVar9 < 3) {
    return 0;
  }
  uVar8 = (ulong)uVar3;
  (**(code **)(*param_1 + 0x18))(param_1);
  puVar4 = PTR_DAT_04bb2020;
  local_58 = (undefined1 *)(param_1[1] + uVar8);
  local_60 = PTR_DAT_04bb2020 + 0x10;
  if (local_58 == &DAT_040b8293) {
LAB_039b1064:
    uVar6 = 0;
  }
  else {
    uVar7 = 0;
    bVar5 = true;
    do {
      if (local_58[uVar7] != (&DAT_040b8293)[uVar7]) break;
      if (local_58[uVar7] == '\0') {
        if (bVar5) goto LAB_039b1064;
        break;
      }
      bVar5 = uVar7 < 0x80000;
      uVar7 = uVar7 + 1;
    } while (uVar7 != 0x80001);
    if (local_58 == &DAT_040f6ed4) {
LAB_039b10b4:
      uVar6 = 1;
    }
    else {
      uVar7 = 0;
      bVar5 = true;
      do {
        if (local_58[uVar7] != (&DAT_040f6ed4)[uVar7]) break;
        if (local_58[uVar7] == '\0') {
          if (bVar5) goto LAB_039b10b4;
          break;
        }
        bVar5 = uVar7 < 0x80000;
        uVar7 = uVar7 + 1;
      } while (uVar7 != 0x80001);
      if (local_58 == &DAT_04083f62) {
LAB_039b1104:
        uVar6 = 2;
      }
      else {
        uVar7 = 0;
        bVar5 = true;
        do {
          if (local_58[uVar7] != (&DAT_04083f62)[uVar7]) break;
          if (local_58[uVar7] == '\0') {
            if (bVar5) goto LAB_039b1104;
            break;
          }
          bVar5 = uVar7 < 0x80000;
          uVar7 = uVar7 + 1;
        } while (uVar7 != 0x80001);
        FUN_006bd3a4(&local_60);
        if (local_58 == &DAT_0406f824) {
LAB_039b1160:
          uVar6 = 3;
        }
        else {
          uVar7 = 0;
          bVar5 = true;
          do {
            if (local_58[uVar7] != (&DAT_0406f824)[uVar7]) break;
            if (local_58[uVar7] == '\0') {
              if (bVar5) goto LAB_039b1160;
              break;
            }
            bVar5 = uVar7 < 0x80000;
            uVar7 = uVar7 + 1;
          } while (uVar7 != 0x80001);
          (**(code **)(local_60 + 0x18))(&local_60);
          (**(code **)(local_60 + 0x18))(&local_60);
          if (local_58 == &DAT_040d70be) {
LAB_039b11d4:
            uVar6 = 4;
          }
          else {
            uVar7 = 0;
            bVar5 = true;
            do {
              if (local_58[uVar7] != (&DAT_040d70be)[uVar7]) break;
              if (local_58[uVar7] == '\0') {
                if (bVar5) goto LAB_039b11d4;
                break;
              }
              bVar5 = uVar7 < 0x80000;
              uVar7 = uVar7 + 1;
            } while (uVar7 != 0x80001);
            local_70 = puVar4 + 0x10;
            puStack_68 = &DAT_040b8297;
            uVar7 = FUN_00710cb0(&local_60,&local_70);
            if ((uVar7 & 1) == 0) {
              return 0;
            }
            uVar6 = 5;
          }
        }
      }
    }
  }
  *param_2 = uVar6;
  (**(code **)(*param_1 + 0x18))(param_1);
  cVar2 = *(char *)(param_1[1] + ((long)iVar9 - 4U));
  if ((cVar2 == '_') || (cVar2 == '.')) {
    uVar8 = (long)iVar9 - 4U & 0xffffffff;
  }
  if (param_3 != 0) {
    (**(code **)(*param_1 + 0x18))(param_1);
    __src = (void *)param_1[1];
    __dest = *(void **)(param_3 + 8);
    if (__dest != __src) {
      if ((int)uVar8 < 0) {
        uVar8 = 0;
        do {
          if (*(char *)((long)__src + uVar8) == '\0') goto LAB_039b1260;
          if (*(char *)((long)__src + uVar8 + 1) == '\0') {
            uVar8 = uVar8 + 1;
            goto LAB_039b1260;
          }
          if (*(char *)((long)__src + uVar8 + 2) == '\0') {
            uVar8 = uVar8 + 2;
            goto LAB_039b1260;
          }
          uVar8 = uVar8 + 3;
        } while (uVar8 != 0x80001);
        uVar8 = 0;
      }
LAB_039b1260:
      iVar9 = (int)uVar8;
      if (*(int *)(param_3 + 0x10) <= (int)uVar8) {
        iVar9 = *(int *)(param_3 + 0x10) + -1;
      }
      memcpy(__dest,__src,(long)iVar9);
      *(undefined1 *)((long)__dest + (long)iVar9) = 0;
    }
  }
  return 1;
}

