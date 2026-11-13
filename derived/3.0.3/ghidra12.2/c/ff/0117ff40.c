
void FUN_0117ff40(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  char cVar3;
  bool bVar4;
  char *pcVar5;
  char *pcVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  long *plVar12;
  undefined *local_a0;
  char *local_98;
  undefined *local_90;
  long local_88;
  undefined *local_80;
  char *local_78;
  undefined *local_70;
  long local_68;
  
  if (((*(byte *)(param_1 + 0xe060) & 1) == 0) &&
     (plVar12 = *(long **)(param_1 + 0x168), plVar12 != (long *)(param_1 + 0x160))) {
    plVar8 = plVar12 + -0x1a;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    do {
      plVar11 = (long *)plVar12[1];
      (**(code **)(plVar8[1] + 0x18))();
      local_68 = plVar8[2];
      local_70 = puVar1;
      (**(code **)(plVar8[0xc] + 0x18))(plVar8 + 0xc);
      local_78 = (char *)plVar8[0xd];
      lVar9 = *(long *)(param_1 + 0x1d90);
      local_80 = puVar1;
      if (lVar9 == 0) {
LAB_011801fc:
        uVar10 = *(undefined8 *)(param_1 + 0x1d98);
        FUN_01181be0(uVar10,*(undefined8 *)(param_1 + 8),param_1 + 0x10,plVar8);
        *(undefined8 *)(param_1 + 0x1d90) = uVar10;
        if (plVar8[0x19] != 0) {
          *(undefined4 *)(plVar8[0x19] + 8) = 3;
        }
        if ((int)plVar8[0x17] != 1) {
          *(undefined8 *)(param_1 + 0x1da0) = *(undefined8 *)(param_1 + 0x1d90);
        }
      }
      else {
        (**(code **)(*(long *)(lVar9 + 0x2df0) + 0x18))(lVar9 + 0x2df0);
        local_88 = *(long *)(lVar9 + 0x2df8);
        puVar2 = PTR_DAT_04bb2020 + 0x10;
        local_90 = puVar2;
        (**(code **)(local_70 + 0x18))(&local_70);
        (**(code **)(local_70 + 0x18))(&local_70);
        lVar9 = local_68;
        (**(code **)(local_90 + 0x18))(&local_90);
        if (lVar9 == local_88) {
LAB_01180104:
          lVar9 = *(long *)(param_1 + 0x1d90);
          (**(code **)(*(long *)(lVar9 + 0x2e48) + 0x18))(lVar9 + 0x2e48);
          local_98 = *(char **)(lVar9 + 0x2e50);
          local_a0 = puVar2;
          (**(code **)(local_80 + 0x18))(&local_80);
          (**(code **)(local_80 + 0x18))(&local_80);
          pcVar5 = local_78;
          (**(code **)(local_a0 + 0x18))(&local_a0);
          if (pcVar5 != local_98) {
            if (*local_78 != *local_98) goto LAB_011801f4;
            if (*local_78 != '\0') {
              lVar9 = 0x7fffe;
              pcVar5 = local_98;
              pcVar6 = local_78;
              do {
                if (pcVar6[1] != pcVar5[1]) goto LAB_011801f4;
                if (pcVar6[1] == '\0') break;
                if (pcVar6[2] != pcVar5[2]) goto LAB_011801f4;
                if (pcVar6[2] == '\0') break;
                if ((lVar9 == 0) || (cVar3 = pcVar6[3], cVar3 != pcVar5[3])) goto LAB_011801f4;
                lVar9 = lVar9 + -3;
                pcVar5 = pcVar5 + 3;
                pcVar6 = pcVar6 + 3;
              } while (cVar3 != '\0');
            }
          }
          if (plVar8[0x19] != 0) {
            *(undefined4 *)(plVar8[0x19] + 8) = 2;
          }
        }
        else {
          uVar7 = 0;
          bVar4 = true;
          do {
            lVar9 = local_68 + 2 + uVar7;
            cVar3 = *(char *)(lVar9 + -2);
            if (cVar3 != *(char *)(local_88 + uVar7)) break;
            if (cVar3 == '\0') {
              if (bVar4) goto LAB_01180104;
              break;
            }
            cVar3 = *(char *)(lVar9 + -1);
            if (cVar3 != *(char *)(local_88 + uVar7 + 1)) break;
            if (cVar3 == '\0') goto LAB_01180104;
            cVar3 = *(char *)(local_68 + 2 + uVar7);
            if (cVar3 != *(char *)(local_88 + uVar7 + 2)) break;
            if (cVar3 == '\0') goto LAB_01180104;
            bVar4 = uVar7 < 0x7fffe;
            uVar7 = uVar7 + 3;
          } while (uVar7 != 0x80001);
LAB_011801f4:
          if (*(long *)(param_1 + 0x1d90) == 0) goto LAB_011801fc;
        }
      }
      if (*plVar12 != 0) {
        *(long *)(*plVar12 + 8) = plVar12[1];
      }
      if ((long *)plVar12[1] != (long *)0x0) {
        *(long *)plVar12[1] = *plVar12;
      }
      *plVar12 = 0;
      plVar12[1] = 0;
      *(int *)(param_1 + 0x170) = *(int *)(param_1 + 0x170) + -1;
      (**(code **)*plVar8)(plVar8);
      *plVar8 = *(long *)(param_1 + 0x178);
      *(long **)(param_1 + 0x178) = plVar8;
      plVar8 = plVar11 + -0x1a;
      plVar12 = plVar11;
    } while (plVar8 != (long *)(param_1 + 0x90));
  }
  return;
}

