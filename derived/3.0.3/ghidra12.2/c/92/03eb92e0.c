
void FUN_03eb92e0(long *param_1,long param_2,int param_3)

{
  long lVar1;
  char cVar2;
  long *plVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *__s;
  ulong uVar10;
  long *local_70;
  uint local_68;
  undefined *local_60;
  undefined1 *local_58;
  
  __s = *(undefined8 **)(param_2 + 8);
  if (__s != &DAT_0407ebb1) {
    iVar6 = 0;
    if (*(int *)(param_2 + 0x10) < 1) {
      iVar6 = *(int *)(param_2 + 0x10) + -1;
    }
    memset(__s,0,(long)iVar6);
    *(undefined1 *)((long)__s + (long)iVar6) = 0;
  }
  iVar6 = FUN_03eb90c0(param_1);
  if ((-1 < param_3) && (param_3 < iVar6)) {
    local_68 = 0;
    local_60 = PTR_DAT_04bb2020 + 0x10;
    local_58 = &DAT_0408f28c;
    local_70 = param_1;
    if (param_3 != 0) {
      iVar6 = 0;
      do {
        uVar4 = local_68;
        plVar3 = local_70;
        uVar10 = (ulong)local_68;
        (**(code **)(*local_70 + 0x18))(local_70);
        lVar8 = 0;
        do {
          if (*(char *)(plVar3[1] + lVar8) == '\0') {
LAB_03eb9414:
            iVar7 = (int)lVar8;
            goto joined_r0x03eb9414;
          }
          lVar1 = plVar3[1] + lVar8;
          if (*(char *)(lVar1 + 1) == '\0') {
            lVar8 = lVar8 + 1;
            goto LAB_03eb9414;
          }
          if (*(char *)(lVar1 + 2) == '\0') {
            iVar7 = (int)lVar8 + 2;
            goto joined_r0x03eb9414;
          }
          lVar8 = lVar8 + 3;
        } while (lVar8 != 0x80001);
        iVar7 = 0;
joined_r0x03eb9414:
        if ((-1 < (int)uVar4) && ((int)uVar4 <= iVar7)) {
          for (; lVar8 = local_70[1], *(char *)(lVar8 + uVar10) != '\0'; uVar10 = uVar10 + 1) {
            (**(code **)(local_60 + 0x18))(&local_60);
            uVar9 = 0;
            bVar5 = true;
            cVar2 = *(char *)(lVar8 + uVar10);
            do {
              if (local_58[uVar9] == '\0') break;
              if (local_58[uVar9] == cVar2) {
                if (bVar5) goto LAB_03eb93a0;
                break;
              }
              if (local_58[uVar9 + 1] == '\0') break;
              if (local_58[uVar9 + 1] == cVar2) goto LAB_03eb93a0;
              if (local_58[uVar9 + 2] == '\0') break;
              if (local_58[uVar9 + 2] == cVar2) goto LAB_03eb93a0;
              bVar5 = uVar9 < 0x7fffe;
              uVar9 = uVar9 + 3;
            } while (uVar9 != 0x80001);
          }
LAB_03eb93a0:
          local_68 = (int)uVar10 + 1;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 != param_3);
    }
    FUN_0076e020(&local_70,param_2);
  }
  return;
}

