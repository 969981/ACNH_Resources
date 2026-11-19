
void FUN_03bbecb0(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  char cVar3;
  undefined *puVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  char *pcVar10;
  long lVar11;
  undefined **local_78;
  char *local_70;
  undefined4 local_64;
  
  puVar4 = PTR_DAT_04bc3ee8;
  lVar6 = *param_2;
  if (lVar6 != 0) {
    local_64 = 0;
    pcVar10 = (char *)((ulong)(uint)(*(int *)(lVar6 + 8) + *(int *)(lVar6 + 0xc)) + lVar6);
    local_70 = PTR_DAT_04c4b988;
    if (pcVar10 != (char *)0x0) {
      local_70 = pcVar10;
    }
    local_78 = &PTR_LAB_048f9770;
    if (*local_70 != '\0') {
      lVar6 = *(long *)(*(long *)PTR_DAT_04bc3ee8 + 0x28);
      if (*(long *)(lVar6 + 0x30) != lVar6 + 0x28) {
        lVar11 = (long)*(int *)(lVar6 + 0x3c);
        lVar8 = *(long *)(lVar6 + 0x30) - lVar11;
        do {
          plVar9 = (long *)(lVar8 + 8);
          (**(code **)(*plVar9 + 0x18))(plVar9);
          (**(code **)(*plVar9 + 0x18))(plVar9);
          pcVar10 = *(char **)(lVar8 + 0x10);
          (*(code *)local_78[3])(&local_78);
          if (pcVar10 == local_70) goto LAB_03bbed70;
          uVar7 = 0;
          bVar5 = true;
          lVar1 = *(long *)(lVar8 + 0x10) + 1;
          do {
            lVar2 = lVar1 + uVar7;
            cVar3 = *(char *)(lVar2 + -1);
            if (cVar3 != local_70[uVar7]) break;
            if (cVar3 == '\0') {
              if (bVar5) goto LAB_03bbed70;
              break;
            }
            cVar3 = *(char *)(lVar1 + uVar7);
            if (cVar3 != local_70[uVar7 + 1]) break;
            if (cVar3 == '\0') goto LAB_03bbed70;
            cVar3 = *(char *)(lVar2 + 1);
            if (cVar3 != local_70[uVar7 + 2]) break;
            if (cVar3 == '\0') goto LAB_03bbed70;
            bVar5 = uVar7 < 0x7fffe;
            uVar7 = uVar7 + 3;
          } while (uVar7 != 0x80001);
          lVar8 = *(long *)(lVar8 + lVar11 + 8) - lVar11;
        } while (lVar8 != (lVar6 + 0x28) - lVar11);
      }
    }
    lVar8 = 0;
LAB_03bbed70:
    FUN_03bbe6f0(param_1,0,lVar8);
    local_64 = 1;
    lVar6 = *param_2;
    if ((lVar6 == 0) ||
       (local_70 = (char *)((ulong)(uint)(*(int *)(lVar6 + 8) + *(int *)(lVar6 + 0x14)) + lVar6),
       local_70 == (char *)0x0)) {
      local_70 = PTR_DAT_04c4b988;
    }
    local_78 = &PTR_LAB_048f9770;
    if (*local_70 != '\0') {
      lVar6 = *(long *)(*(long *)puVar4 + 0x28);
      if (*(long *)(lVar6 + 0x30) != lVar6 + 0x28) {
        lVar11 = (long)*(int *)(lVar6 + 0x3c);
        lVar8 = *(long *)(lVar6 + 0x30) - lVar11;
        do {
          plVar9 = (long *)(lVar8 + 8);
          (**(code **)(*plVar9 + 0x18))(plVar9);
          (**(code **)(*plVar9 + 0x18))(plVar9);
          pcVar10 = *(char **)(lVar8 + 0x10);
          (*(code *)local_78[3])(&local_78);
          if (pcVar10 == local_70) goto LAB_03bbefc0;
          uVar7 = 0;
          bVar5 = true;
          lVar1 = *(long *)(lVar8 + 0x10) + 1;
          do {
            lVar2 = lVar1 + uVar7;
            cVar3 = *(char *)(lVar2 + -1);
            if (cVar3 != local_70[uVar7]) break;
            if (cVar3 == '\0') {
              if (bVar5) goto LAB_03bbefc0;
              break;
            }
            cVar3 = *(char *)(lVar1 + uVar7);
            if (cVar3 != local_70[uVar7 + 1]) break;
            if (cVar3 == '\0') goto LAB_03bbefc0;
            cVar3 = *(char *)(lVar2 + 1);
            if (cVar3 != local_70[uVar7 + 2]) break;
            if (cVar3 == '\0') goto LAB_03bbefc0;
            bVar5 = uVar7 < 0x7fffe;
            uVar7 = uVar7 + 3;
          } while (uVar7 != 0x80001);
          lVar8 = *(long *)(lVar8 + lVar11 + 8) - lVar11;
        } while (lVar8 != (lVar6 + 0x28) - lVar11);
      }
    }
    lVar8 = 0;
LAB_03bbefc0:
    FUN_03bbe6f0(param_1,1,lVar8);
    local_64 = 2;
    lVar6 = *param_2;
    if ((lVar6 == 0) ||
       (local_70 = (char *)((ulong)(uint)(*(int *)(lVar6 + 8) + *(int *)(lVar6 + 0x1c)) + lVar6),
       local_70 == (char *)0x0)) {
      local_70 = PTR_DAT_04c4b988;
    }
    local_78 = &PTR_LAB_048f9770;
    if (*local_70 != '\0') {
      lVar6 = *(long *)(*(long *)puVar4 + 0x28);
      if (*(long *)(lVar6 + 0x30) != lVar6 + 0x28) {
        lVar11 = (long)*(int *)(lVar6 + 0x3c);
        lVar8 = *(long *)(lVar6 + 0x30) - lVar11;
        do {
          plVar9 = (long *)(lVar8 + 8);
          (**(code **)(*plVar9 + 0x18))(plVar9);
          (**(code **)(*plVar9 + 0x18))(plVar9);
          pcVar10 = *(char **)(lVar8 + 0x10);
          (*(code *)local_78[3])(&local_78);
          if (pcVar10 == local_70) goto LAB_03bbf140;
          uVar7 = 0;
          bVar5 = true;
          lVar1 = *(long *)(lVar8 + 0x10) + 1;
          do {
            lVar2 = lVar1 + uVar7;
            cVar3 = *(char *)(lVar2 + -1);
            if (cVar3 != local_70[uVar7]) break;
            if (cVar3 == '\0') {
              if (bVar5) goto LAB_03bbf140;
              break;
            }
            cVar3 = *(char *)(lVar1 + uVar7);
            if (cVar3 != local_70[uVar7 + 1]) break;
            if (cVar3 == '\0') goto LAB_03bbf140;
            cVar3 = *(char *)(lVar2 + 1);
            if (cVar3 != local_70[uVar7 + 2]) break;
            if (cVar3 == '\0') goto LAB_03bbf140;
            bVar5 = uVar7 < 0x7fffe;
            uVar7 = uVar7 + 3;
          } while (uVar7 != 0x80001);
          lVar8 = *(long *)(lVar8 + lVar11 + 8) - lVar11;
        } while (lVar8 != (lVar6 + 0x28) - lVar11);
      }
    }
    lVar8 = 0;
LAB_03bbf140:
    FUN_03bbe6f0(param_1,2,lVar8);
    local_64 = 3;
    lVar6 = *param_2;
    if ((lVar6 == 0) ||
       (local_70 = (char *)((ulong)(uint)(*(int *)(lVar6 + 8) + *(int *)(lVar6 + 0x24)) + lVar6),
       local_70 == (char *)0x0)) {
      local_70 = PTR_DAT_04c4b988;
    }
    local_78 = &PTR_LAB_048f9770;
    if (*local_70 != '\0') {
      lVar6 = *(long *)(*(long *)puVar4 + 0x28);
      if (*(long *)(lVar6 + 0x30) != lVar6 + 0x28) {
        lVar11 = (long)*(int *)(lVar6 + 0x3c);
        lVar8 = *(long *)(lVar6 + 0x30) - lVar11;
        do {
          plVar9 = (long *)(lVar8 + 8);
          (**(code **)(*plVar9 + 0x18))(plVar9);
          (**(code **)(*plVar9 + 0x18))(plVar9);
          pcVar10 = *(char **)(lVar8 + 0x10);
          (*(code *)local_78[3])(&local_78);
          if (pcVar10 == local_70) goto LAB_03bbf2c0;
          uVar7 = 0;
          bVar5 = true;
          lVar1 = *(long *)(lVar8 + 0x10) + 1;
          do {
            lVar2 = lVar1 + uVar7;
            cVar3 = *(char *)(lVar2 + -1);
            if (cVar3 != local_70[uVar7]) break;
            if (cVar3 == '\0') {
              if (bVar5) goto LAB_03bbf2c0;
              break;
            }
            cVar3 = *(char *)(lVar1 + uVar7);
            if (cVar3 != local_70[uVar7 + 1]) break;
            if (cVar3 == '\0') goto LAB_03bbf2c0;
            cVar3 = *(char *)(lVar2 + 1);
            if (cVar3 != local_70[uVar7 + 2]) break;
            if (cVar3 == '\0') goto LAB_03bbf2c0;
            bVar5 = uVar7 < 0x7fffe;
            uVar7 = uVar7 + 3;
          } while (uVar7 != 0x80001);
          lVar8 = *(long *)(lVar8 + lVar11 + 8) - lVar11;
        } while (lVar8 != (lVar6 + 0x28) - lVar11);
      }
    }
    lVar8 = 0;
LAB_03bbf2c0:
    FUN_03bbe6f0(param_1,3,lVar8);
    local_64 = 4;
    lVar6 = *param_2;
    if ((lVar6 == 0) ||
       (local_70 = (char *)((ulong)(uint)(*(int *)(lVar6 + 8) + *(int *)(lVar6 + 0x2c)) + lVar6),
       local_70 == (char *)0x0)) {
      local_70 = PTR_DAT_04c4b988;
    }
    local_78 = &PTR_LAB_048f9770;
    if (*local_70 != '\0') {
      lVar6 = *(long *)(*(long *)puVar4 + 0x28);
      if (*(long *)(lVar6 + 0x30) != lVar6 + 0x28) {
        lVar11 = (long)*(int *)(lVar6 + 0x3c);
        lVar8 = *(long *)(lVar6 + 0x30) - lVar11;
        do {
          plVar9 = (long *)(lVar8 + 8);
          (**(code **)(*plVar9 + 0x18))(plVar9);
          (**(code **)(*plVar9 + 0x18))(plVar9);
          pcVar10 = *(char **)(lVar8 + 0x10);
          (*(code *)local_78[3])(&local_78);
          if (pcVar10 == local_70) goto LAB_03bbf440;
          uVar7 = 0;
          bVar5 = true;
          lVar1 = *(long *)(lVar8 + 0x10) + 1;
          do {
            lVar2 = lVar1 + uVar7;
            cVar3 = *(char *)(lVar2 + -1);
            if (cVar3 != local_70[uVar7]) break;
            if (cVar3 == '\0') {
              if (bVar5) goto LAB_03bbf440;
              break;
            }
            cVar3 = *(char *)(lVar1 + uVar7);
            if (cVar3 != local_70[uVar7 + 1]) break;
            if (cVar3 == '\0') goto LAB_03bbf440;
            cVar3 = *(char *)(lVar2 + 1);
            if (cVar3 != local_70[uVar7 + 2]) break;
            if (cVar3 == '\0') goto LAB_03bbf440;
            bVar5 = uVar7 < 0x7fffe;
            uVar7 = uVar7 + 3;
          } while (uVar7 != 0x80001);
          lVar8 = *(long *)(lVar8 + lVar11 + 8) - lVar11;
        } while (lVar8 != (lVar6 + 0x28) - lVar11);
      }
    }
    lVar8 = 0;
LAB_03bbf440:
    FUN_03bbe6f0(param_1,4,lVar8);
    lVar6 = *param_2;
    if ((lVar6 == 0) ||
       (local_70 = (char *)((ulong)(uint)(*(int *)(lVar6 + 8) + *(int *)(lVar6 + 0x34)) + lVar6),
       local_70 == (char *)0x0)) {
      local_70 = PTR_DAT_04c4b988;
    }
    local_78 = &PTR_LAB_048f9770;
    if (*local_70 != '\0') {
      lVar6 = *(long *)(*(long *)puVar4 + 0x28);
      if (*(long *)(lVar6 + 0x50) != lVar6 + 0x48) {
        lVar11 = (long)*(int *)(lVar6 + 0x5c);
        lVar8 = *(long *)(lVar6 + 0x50) - lVar11;
        do {
          plVar9 = (long *)(lVar8 + 8);
          (**(code **)(*plVar9 + 0x18))(plVar9);
          (**(code **)(*plVar9 + 0x18))(plVar9);
          pcVar10 = *(char **)(lVar8 + 0x10);
          (*(code *)local_78[3])(&local_78);
          if (pcVar10 == local_70) goto LAB_03bbf5a0;
          uVar7 = 0;
          bVar5 = true;
          lVar1 = *(long *)(lVar8 + 0x10) + 1;
          do {
            lVar2 = lVar1 + uVar7;
            cVar3 = *(char *)(lVar2 + -1);
            if (cVar3 != local_70[uVar7]) break;
            if (cVar3 == '\0') {
              if (bVar5) goto LAB_03bbf5a0;
              break;
            }
            cVar3 = *(char *)(lVar1 + uVar7);
            if (cVar3 != local_70[uVar7 + 1]) break;
            if (cVar3 == '\0') goto LAB_03bbf5a0;
            cVar3 = *(char *)(lVar2 + 1);
            if (cVar3 != local_70[uVar7 + 2]) break;
            if (cVar3 == '\0') goto LAB_03bbf5a0;
            bVar5 = uVar7 < 0x7fffe;
            uVar7 = uVar7 + 3;
          } while (uVar7 != 0x80001);
          lVar8 = *(long *)(lVar8 + lVar11 + 8) - lVar11;
        } while (lVar8 != (lVar6 + 0x48) - lVar11);
      }
    }
    lVar8 = 0;
LAB_03bbf5a0:
    FUN_03bbe910(param_1,lVar8);
    lVar6 = *param_2;
    if ((lVar6 == 0) ||
       (local_70 = (char *)((ulong)(uint)(*(int *)(lVar6 + 8) + *(int *)(lVar6 + 0x38)) + lVar6),
       local_70 == (char *)0x0)) {
      local_70 = PTR_DAT_04c4b988;
    }
    local_78 = &PTR_LAB_048f9770;
    if (*local_70 != '\0') {
      lVar6 = *(long *)(*(long *)puVar4 + 0x28);
      if (*(long *)(lVar6 + 0x70) != lVar6 + 0x68) {
        lVar11 = (long)*(int *)(lVar6 + 0x7c);
        lVar8 = *(long *)(lVar6 + 0x70) - lVar11;
        do {
          plVar9 = (long *)(lVar8 + 8);
          (**(code **)(*plVar9 + 0x18))(plVar9);
          (**(code **)(*plVar9 + 0x18))(plVar9);
          pcVar10 = *(char **)(lVar8 + 0x10);
          (*(code *)local_78[3])(&local_78);
          if (pcVar10 == local_70) goto LAB_03bbf700;
          uVar7 = 0;
          bVar5 = true;
          lVar1 = *(long *)(lVar8 + 0x10) + 1;
          do {
            lVar2 = lVar1 + uVar7;
            cVar3 = *(char *)(lVar2 + -1);
            if (cVar3 != local_70[uVar7]) break;
            if (cVar3 == '\0') {
              if (bVar5) goto LAB_03bbf700;
              break;
            }
            cVar3 = *(char *)(lVar1 + uVar7);
            if (cVar3 != local_70[uVar7 + 1]) break;
            if (cVar3 == '\0') goto LAB_03bbf700;
            cVar3 = *(char *)(lVar2 + 1);
            if (cVar3 != local_70[uVar7 + 2]) break;
            if (cVar3 == '\0') goto LAB_03bbf700;
            bVar5 = uVar7 < 0x7fffe;
            uVar7 = uVar7 + 3;
          } while (uVar7 != 0x80001);
          lVar8 = *(long *)(lVar8 + lVar11 + 8) - lVar11;
        } while (lVar8 != (lVar6 + 0x68) - lVar11);
      }
    }
    lVar8 = 0;
LAB_03bbf700:
    FUN_03bbeae0(param_1,lVar8);
    bVar5 = false;
    if (*param_2 != 0) {
      bVar5 = *(int *)(*param_2 + 0x3c) != 0;
    }
    *(bool *)(param_1 + 0x98) = bVar5;
    bVar5 = false;
    if (*param_2 != 0) {
      bVar5 = *(int *)(*param_2 + 0x40) != 0;
    }
    *(bool *)(param_1 + 0x99) = bVar5;
  }
  return;
}

