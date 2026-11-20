
int FUN_03eb90c0(long *param_1)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  uint local_68;
  undefined **local_60;
  undefined1 *local_58;
  
  if (*(char *)param_1[1] == '\0') {
    iVar8 = 0;
  }
  else {
    local_68 = 0;
    iVar8 = 0;
    local_60 = &PTR_LAB_048f9770;
    local_58 = &DAT_0408f28c;
LAB_03eb9138:
    (**(code **)(*param_1 + 0x18))(param_1);
    lVar6 = 0;
    do {
      if (*(char *)(param_1[1] + lVar6) == '\0') {
LAB_03eb9194:
        uVar4 = (int)lVar6 + 1;
        goto LAB_03eb9198;
      }
      lVar1 = param_1[1] + lVar6;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_03eb9194;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_03eb9194;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    uVar4 = 1;
LAB_03eb9198:
    uVar9 = (ulong)local_68;
    if (local_68 != uVar4) {
      iVar8 = iVar8 + 1;
      (**(code **)(*param_1 + 0x18))(param_1);
      lVar6 = 0;
      do {
        if (*(char *)(param_1[1] + lVar6) == '\0') {
LAB_03eb9208:
          iVar5 = (int)lVar6;
          goto joined_r0x03eb9224;
        }
        lVar1 = param_1[1] + lVar6;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar6 = lVar6 + 1;
          goto LAB_03eb9208;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          iVar5 = (int)lVar6 + 2;
          goto joined_r0x03eb9224;
        }
        lVar6 = lVar6 + 3;
      } while (lVar6 != 0x80001);
      iVar5 = 0;
joined_r0x03eb9224:
      if ((-1 < (int)local_68) && ((int)local_68 <= iVar5)) {
        for (; lVar6 = param_1[1], *(char *)(lVar6 + uVar9) != '\0'; uVar9 = uVar9 + 1) {
          (*(code *)local_60[3])(&local_60);
          uVar7 = 0;
          bVar3 = true;
          cVar2 = *(char *)(lVar6 + uVar9);
          do {
            if (local_58[uVar7] == '\0') break;
            if (local_58[uVar7] == cVar2) {
              if (bVar3) goto LAB_03eb9130;
              break;
            }
            if (local_58[uVar7 + 1] == '\0') break;
            if (local_58[uVar7 + 1] == cVar2) goto LAB_03eb9130;
            if (local_58[uVar7 + 2] == '\0') break;
            if (local_58[uVar7 + 2] == cVar2) goto LAB_03eb9130;
            bVar3 = uVar7 < 0x7fffe;
            uVar7 = uVar7 + 3;
          } while (uVar7 != 0x80001);
        }
LAB_03eb9130:
        local_68 = (int)uVar9 + 1;
      }
      goto LAB_03eb9138;
    }
  }
  return iVar8;
}

