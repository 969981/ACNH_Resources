
void FUN_03d59090(long param_1,long param_2,long param_3)

{
  ushort uVar1;
  long *plVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  char *pcVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined *local_68;
  char *local_60;
  int local_58;
  ushort local_54;
  char local_52;
  
  lVar4 = param_1 + 0x1e0;
  if (**(char **)(param_3 + 8) == '\0') {
    if (*(long *)(param_1 + 0x1e8) != lVar4) {
      lVar12 = (long)*(int *)(param_1 + 500);
      lVar11 = *(long *)(param_1 + 0x1e8) - lVar12;
      do {
        if (*(long *)(lVar11 + 0x68) != lVar11 + 0x60) {
          lVar6 = (long)*(int *)(lVar11 + 0x74);
          lVar5 = *(long *)(lVar11 + 0x68) - lVar6;
          do {
            lVar8 = *(long *)(lVar5 + 0x10);
            plVar7 = (long *)(lVar8 + 0xe8);
            lVar9 = *plVar7;
            plVar2 = (long *)(*(int *)(lVar8 + 0xfc) + param_2);
            *plVar7 = (long)plVar2;
            *plVar2 = lVar9;
            plVar2[1] = (long)plVar7;
            if (lVar9 != 0) {
              *(long **)(lVar9 + 8) = plVar2;
            }
            *(int *)(lVar8 + 0xf8) = *(int *)(lVar8 + 0xf8) + 1;
            lVar5 = *(long *)(lVar5 + lVar6 + 8) - lVar6;
          } while (lVar5 != (lVar11 + 0x60) - lVar6);
        }
        lVar11 = *(long *)(lVar11 + lVar12 + 8) - lVar12;
      } while (lVar11 != lVar4 - lVar12);
    }
  }
  else {
    local_52 = '\0';
    local_68 = PTR_DAT_04bb2020 + 0x10;
    local_60 = PTR_DAT_04bb2120;
    FUN_03c5a110(&local_68,param_3,0xffffffff,0);
    if (*(long *)(param_1 + 0x1e8) != lVar4) {
      lVar12 = (long)*(int *)(param_1 + 500);
      lVar11 = *(long *)(param_1 + 0x1e8) - lVar12;
      do {
        if (*(int *)(lVar11 + 0x20) == local_58) {
          uVar1 = *(ushort *)(lVar11 + 0x24);
          uVar13 = (ulong)uVar1;
          if (uVar1 == local_54) {
            (**(code **)(*(long *)(lVar11 + 0x10) + 0x18))(lVar11 + 0x10);
            (**(code **)(*(long *)(lVar11 + 0x10) + 0x18))(lVar11 + 0x10);
            pcVar10 = *(char **)(lVar11 + 0x18);
            (**(code **)(local_68 + 0x18))(&local_68);
            if ((uVar1 == 0) || (pcVar10 == local_60)) goto LAB_03d5927c;
            pcVar10 = local_60;
            pcVar3 = *(char **)(lVar11 + 0x18);
            while( true ) {
              uVar13 = uVar13 - 1;
              if (*pcVar3 != *pcVar10) break;
              if ((*pcVar3 == '\0') || (pcVar10 = pcVar10 + 1, pcVar3 = pcVar3 + 1, uVar13 == 0))
              goto LAB_03d5927c;
            }
          }
        }
        lVar11 = *(long *)(lVar11 + lVar12 + 8) - lVar12;
      } while (lVar11 != lVar4 - lVar12);
    }
    lVar11 = 0;
LAB_03d5927c:
    if ((local_52 != '\0') &&
       ((**(code **)(local_68 + 0x18))(&local_68), pcVar10 = local_60, local_60 != (char *)0x0)) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(local_60);
      }
      else {
        plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,local_60);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,pcVar10);
        }
      }
    }
    if (lVar11 != 0) {
      if (*(long *)(lVar11 + 0x68) != lVar11 + 0x60) {
        lVar12 = (long)*(int *)(lVar11 + 0x74);
        lVar4 = *(long *)(lVar11 + 0x68) - lVar12;
        do {
          lVar5 = *(long *)(lVar4 + 0x10);
          plVar7 = (long *)(lVar5 + 0xe8);
          lVar6 = *plVar7;
          plVar2 = (long *)(*(int *)(lVar5 + 0xfc) + param_2);
          *plVar7 = (long)plVar2;
          *plVar2 = lVar6;
          plVar2[1] = (long)plVar7;
          if (lVar6 != 0) {
            *(long **)(lVar6 + 8) = plVar2;
          }
          *(int *)(lVar5 + 0xf8) = *(int *)(lVar5 + 0xf8) + 1;
          lVar4 = *(long *)(lVar4 + lVar12 + 8) - lVar12;
        } while (lVar4 != (lVar11 + 0x60) - lVar12);
      }
    }
  }
  return;
}

