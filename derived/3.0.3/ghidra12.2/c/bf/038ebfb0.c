
void FUN_038ebfb0(long param_1,long param_2,int param_3,undefined4 param_4,undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  undefined *local_70;
  undefined *puStack_68;
  
  if (param_2 == 0) {
    return;
  }
  cVar5 = **(char **)(param_2 + 0x30);
  lVar1 = param_2 + 0x28;
  if (cVar5 != '\0') {
    if (0 < param_3) {
      iVar11 = param_3;
      do {
        (**(code **)(**(long **)(param_1 + 8) + 0x60))
                  (*(long **)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                   *(undefined4 *)(param_1 + 0x18),9);
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
    }
    (**(code **)(**(long **)(param_1 + 8) + 0x60))
              (*(long **)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
               *(undefined4 *)(param_1 + 0x18),0x3c);
    (**(code **)(*(long *)(param_2 + 0x28) + 0x18))(lVar1);
    lVar8 = 0;
    do {
      if (*(char *)(*(long *)(param_2 + 0x30) + lVar8) == '\0') goto LAB_038ec0a0;
      lVar10 = *(long *)(param_2 + 0x30) + lVar8;
      if (*(char *)(lVar10 + 1) == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_038ec0a0;
      }
      if (*(char *)(lVar10 + 2) == '\0') {
        lVar8 = lVar8 + 2;
        goto LAB_038ec0a0;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    lVar8 = 0;
LAB_038ec0a0:
    (**(code **)(**(long **)(param_1 + 8) + 0xb0))
              (*(long **)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),lVar1,lVar8);
    FUN_038f1480(param_1,param_2);
  }
  lVar8 = *(long *)(param_2 + 0x10);
  if (lVar8 == 0) {
    if (*(long *)(param_2 + 0x80) == 0) {
      if (cVar5 == '\0') {
        return;
      }
      local_70 = PTR_DAT_04bb2020 + 0x10;
      puStack_68 = &DAT_040b8082;
      (**(code **)(**(long **)(param_1 + 8) + 0xb0))
                (*(long **)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),&local_70,2);
      goto LAB_038ec624;
    }
    if (cVar5 == '\0') {
      if (0 < param_3) {
        do {
          (**(code **)(**(long **)(param_1 + 8) + 0x60))
                    (*(long **)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                     *(undefined4 *)(param_1 + 0x18),9);
          param_3 = param_3 + -1;
        } while (param_3 != 0);
      }
      FUN_038f0eb0(param_1,param_2,*(undefined4 *)(param_2 + 0x90),param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x038ec5e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(long **)(param_1 + 8) + 0x60))
                (*(long **)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                 *(undefined4 *)(param_1 + 0x18),10);
      return;
    }
    (**(code **)(**(long **)(param_1 + 8) + 0x60))
              (*(long **)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
               *(undefined4 *)(param_1 + 0x18),0x3e);
    FUN_038f0eb0(param_1,param_2,*(undefined4 *)(param_2 + 0x90),param_4,param_5);
    local_70 = PTR_DAT_04bb2020 + 0x10;
    puStack_68 = &DAT_040d1920;
    (**(code **)(**(long **)(param_1 + 8) + 0xb0))
              (*(long **)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),&local_70,2);
    (**(code **)(*(long *)(param_2 + 0x28) + 0x18))(lVar1);
    lVar8 = 0;
    do {
      if (*(char *)(*(long *)(param_2 + 0x30) + lVar8) == '\0') goto LAB_038ec5f8;
      lVar10 = *(long *)(param_2 + 0x30) + lVar8;
      if (*(char *)(lVar10 + 1) == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_038ec5f8;
      }
      if (*(char *)(lVar10 + 2) == '\0') {
        lVar8 = lVar8 + 2;
        goto LAB_038ec5f8;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    lVar8 = 0;
LAB_038ec5f8:
    plVar6 = *(long **)(param_1 + 8);
    uVar7 = *(undefined8 *)(param_1 + 0x10);
  }
  else {
    puVar2 = PTR_DAT_04bb2020 + 0x10;
    puStack_68 = &DAT_040d6eb8;
    local_70 = puVar2;
    (**(code **)(**(long **)(param_1 + 8) + 0xb0))
              (*(long **)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),&local_70,2);
    iVar11 = param_3 + 1;
    FUN_038ebfb0(param_1,lVar8 + -8,iVar11,param_4,param_5);
    for (lVar8 = *(long *)(lVar8 + 0x10); lVar8 != 0; lVar8 = *(long *)(lVar8 + 0x10)) {
      lVar10 = lVar8 + -8;
      if (*(long *)(lVar8 + 8) == 0) {
        if (**(char **)(lVar8 + 0x28) == '\0') {
          if (*(long *)(lVar8 + 0x78) == 0) goto LAB_038ec148;
          if (-1 < param_3) {
            iVar12 = iVar11;
            do {
              (**(code **)(**(long **)(param_1 + 8) + 0x60))
                        (*(long **)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                         *(undefined4 *)(param_1 + 0x18),9);
              iVar12 = iVar12 + -1;
            } while (iVar12 != 0);
          }
          FUN_038f0eb0(param_1,lVar10,*(undefined4 *)(lVar8 + 0x88),param_4,param_5);
        }
        else {
          if (-1 < param_3) {
            iVar12 = iVar11;
            do {
              (**(code **)(**(long **)(param_1 + 8) + 0x60))
                        (*(long **)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                         *(undefined4 *)(param_1 + 0x18),9);
              iVar12 = iVar12 + -1;
            } while (iVar12 != 0);
          }
          lVar3 = lVar8 + 0x20;
          (**(code **)(**(long **)(param_1 + 8) + 0x60))
                    (*(long **)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                     *(undefined4 *)(param_1 + 0x18),0x3c);
          (**(code **)(*(long *)(lVar8 + 0x20) + 0x18))(lVar3);
          lVar9 = 0;
          do {
            if (*(char *)(*(long *)(lVar8 + 0x28) + lVar9) == '\0') goto LAB_038ec24c;
            lVar4 = *(long *)(lVar8 + 0x28) + lVar9;
            if (*(char *)(lVar4 + 1) == '\0') {
              lVar9 = lVar9 + 1;
              goto LAB_038ec24c;
            }
            if (*(char *)(lVar4 + 2) == '\0') {
              lVar9 = lVar9 + 2;
              goto LAB_038ec24c;
            }
            lVar9 = lVar9 + 3;
          } while (lVar9 != 0x80001);
          lVar9 = 0;
LAB_038ec24c:
          (**(code **)(**(long **)(param_1 + 8) + 0xb0))
                    (*(long **)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),lVar3,lVar9);
          FUN_038f1480(param_1,lVar10);
          if (*(long *)(lVar8 + 0x78) == 0) {
            puStack_68 = &DAT_040b8082;
            local_70 = puVar2;
            (**(code **)(**(long **)(param_1 + 8) + 0xb0))
                      (*(long **)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),&local_70,2);
          }
          else {
            (**(code **)(**(long **)(param_1 + 8) + 0x60))
                      (*(long **)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                       *(undefined4 *)(param_1 + 0x18),0x3e);
            FUN_038f0eb0(param_1,lVar10,*(undefined4 *)(lVar8 + 0x88),param_4,param_5);
            local_70 = PTR_DAT_04bb2020 + 0x10;
            puStack_68 = &DAT_040d1920;
            (**(code **)(**(long **)(param_1 + 8) + 0xb0))
                      (*(long **)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),&local_70,2);
            (**(code **)(*(long *)(lVar8 + 0x20) + 0x18))(lVar3);
            lVar10 = 0;
            do {
              if (*(char *)(*(long *)(lVar8 + 0x28) + lVar10) == '\0') goto LAB_038ec358;
              lVar9 = *(long *)(lVar8 + 0x28) + lVar10;
              if (*(char *)(lVar9 + 1) == '\0') {
                lVar10 = lVar10 + 1;
                goto LAB_038ec358;
              }
              if (*(char *)(lVar9 + 2) == '\0') {
                lVar10 = lVar10 + 2;
                goto LAB_038ec358;
              }
              lVar10 = lVar10 + 3;
            } while (lVar10 != 0x80001);
            lVar10 = 0;
LAB_038ec358:
            (**(code **)(**(long **)(param_1 + 8) + 0xb0))
                      (*(long **)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),lVar3,lVar10);
            (**(code **)(**(long **)(param_1 + 8) + 0x60))
                      (*(long **)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                       *(undefined4 *)(param_1 + 0x18),0x3e);
          }
        }
        (**(code **)(**(long **)(param_1 + 8) + 0x60))
                  (*(long **)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                   *(undefined4 *)(param_1 + 0x18),10);
      }
      else {
        FUN_038ebfb0(param_1,lVar10,iVar11,param_4,param_5);
      }
LAB_038ec148:
    }
    if (cVar5 == '\0') {
      return;
    }
    if (0 < param_3) {
      do {
        (**(code **)(**(long **)(param_1 + 8) + 0x60))
                  (*(long **)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                   *(undefined4 *)(param_1 + 0x18),9);
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
    local_70 = PTR_DAT_04bb2020 + 0x10;
    puStack_68 = &DAT_040d1920;
    (**(code **)(**(long **)(param_1 + 8) + 0xb0))
              (*(long **)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),&local_70,2);
    (**(code **)(*(long *)(param_2 + 0x28) + 0x18))(lVar1);
    lVar8 = 0;
    do {
      if (*(char *)(*(long *)(param_2 + 0x30) + lVar8) == '\0') goto LAB_038ec568;
      lVar10 = *(long *)(param_2 + 0x30) + lVar8;
      if (*(char *)(lVar10 + 1) == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_038ec568;
      }
      if (*(char *)(lVar10 + 2) == '\0') {
        lVar8 = lVar8 + 2;
        goto LAB_038ec568;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    lVar8 = 0;
LAB_038ec568:
    plVar6 = *(long **)(param_1 + 8);
    uVar7 = *(undefined8 *)(param_1 + 0x10);
  }
  (**(code **)(*plVar6 + 0xb0))(plVar6,uVar7,lVar1,lVar8);
  (**(code **)(**(long **)(param_1 + 8) + 0x60))
            (*(long **)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18)
             ,0x3e);
LAB_038ec624:
  (**(code **)(**(long **)(param_1 + 8) + 0x60))
            (*(long **)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18)
             ,10);
  return;
}

