
int FUN_02123550(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  bool bVar5;
  ulong uVar6;
  char *pcVar7;
  long lVar8;
  int iVar9;
  long *plVar10;
  char *pcVar11;
  undefined1 *puVar12;
  long *plVar13;
  long lVar14;
  undefined *local_80;
  char *local_78;
  undefined *local_70;
  undefined1 *local_68;
  
  if (*(int *)(param_1 + 0x1e8) == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = 0;
    plVar13 = *(long **)(param_1 + 0x1f0);
    plVar2 = plVar13 + *(int *)(param_1 + 0x1e8);
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    do {
      lVar14 = *plVar13;
      local_68 = &DAT_040aaf55;
      plVar10 = (long *)(lVar14 + 0xf8);
      local_70 = puVar1;
      (**(code **)(*plVar10 + 0x18))(plVar10);
      (**(code **)(*plVar10 + 0x18))(plVar10);
      puVar12 = *(undefined1 **)(lVar14 + 0x100);
      (**(code **)(local_70 + 0x18))(&local_70);
      if (puVar12 != local_68) {
        uVar6 = 0;
        bVar5 = true;
        lVar8 = *(long *)(lVar14 + 0x100) + 2;
        do {
          lVar3 = lVar8 + uVar6;
          cVar4 = *(char *)(lVar3 + -2);
          if (cVar4 != local_68[uVar6]) break;
          if (cVar4 == '\0') {
            if (bVar5) goto LAB_021235b0;
            break;
          }
          cVar4 = *(char *)(lVar3 + -1);
          if (cVar4 != local_68[uVar6 + 1]) break;
          if (cVar4 == '\0') goto LAB_021235b0;
          cVar4 = *(char *)(lVar8 + uVar6);
          if (cVar4 != local_68[uVar6 + 2]) break;
          if (cVar4 == '\0') goto LAB_021235b0;
          bVar5 = uVar6 < 0x7fffe;
          uVar6 = uVar6 + 3;
        } while (uVar6 != 0x80001);
        local_80 = PTR_DAT_04bb2020 + 0x10;
        local_78 = "alp";
        (**(code **)(*(long *)(lVar14 + 0xf8) + 0x18))(plVar10);
        (**(code **)(*(long *)(lVar14 + 0xf8) + 0x18))(plVar10);
        pcVar11 = *(char **)(lVar14 + 0x100);
        (**(code **)(local_80 + 0x18))(&local_80);
        if (pcVar11 != local_78) {
          cVar4 = **(char **)(lVar14 + 0x100);
          if (cVar4 == *local_78) {
            if (cVar4 != '\0') {
              lVar8 = 0x7fffe;
              pcVar11 = local_78;
              pcVar7 = *(char **)(lVar14 + 0x100);
              do {
                if (pcVar7[1] != pcVar11[1]) goto LAB_021235a8;
                if (pcVar7[1] == '\0') break;
                if (pcVar7[2] != pcVar11[2]) goto LAB_021235a8;
                if (pcVar7[2] == '\0') break;
                if ((lVar8 == 0) || (cVar4 = pcVar7[3], cVar4 != pcVar11[3])) goto LAB_021235a8;
                lVar8 = lVar8 + -3;
                pcVar11 = pcVar11 + 3;
                pcVar7 = pcVar7 + 3;
              } while (cVar4 != '\0');
            }
          }
          else {
LAB_021235a8:
            iVar9 = iVar9 + 1;
          }
        }
      }
LAB_021235b0:
      plVar13 = plVar13 + 1;
    } while (plVar13 != plVar2);
  }
  return iVar9;
}

