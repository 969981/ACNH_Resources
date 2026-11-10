
/* WARNING: Type propagation algorithm not settling */

void FUN_002c7bb0(undefined8 param_1,long param_2,ulong *param_3)

{
  long lVar1;
  int *piVar2;
  char cVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  undefined4 local_110 [6];
  short local_f8;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [16];
  
  if (*(char *)(param_2 + 0x4c) != '\0') goto LAB_002c7fc4;
  if ((*(ulong *)(param_2 + 0x17c0) < *param_3) && (*(char *)(param_2 + 0x17ca) != '\0')) {
    lVar8 = FUN_002ca2c0(param_2 + 0x180,*(undefined4 *)(param_2 + 0x17d0));
    lVar12 = *(long *)(param_2 + 0x230);
    lVar1 = param_2 + 0x228;
    if (lVar12 != lVar1) {
      iVar6 = *(int *)(param_2 + 0x17d0);
      do {
        iVar5 = FUN_002b43fc(lVar12 + 0x18);
        if (iVar5 == iVar6) {
          plVar13 = (long *)(lVar12 + 0x10);
          cVar3 = *(char *)(param_2 + 0x17c9);
          goto joined_r0x002c7c54;
        }
        lVar12 = *(long *)(lVar12 + 8);
      } while (lVar12 != lVar1);
    }
    plVar13 = (long *)0x0;
    cVar3 = *(char *)(param_2 + 0x17c9);
joined_r0x002c7c54:
    if (cVar3 != '\0') {
      lVar8 = FUN_002ca2c0(param_2 + 0x180,*(undefined4 *)(param_2 + 0x17d0));
      lVar12 = *(long *)(param_2 + 0x230);
      if (lVar12 != lVar1) {
        iVar6 = *(int *)(param_2 + 0x17d0);
        do {
          iVar5 = FUN_002b43fc(lVar12 + 0x18);
          if (iVar5 == iVar6) {
            plVar13 = (long *)(lVar12 + 0x10);
            iVar6 = *(int *)(param_2 + 0x150);
            goto joined_r0x002c7cf8;
          }
          lVar12 = *(long *)(lVar12 + 8);
        } while (lVar12 != lVar1);
      }
      plVar13 = (long *)0x0;
    }
    iVar6 = *(int *)(param_2 + 0x150);
joined_r0x002c7cf8:
    if (iVar6 == 1) {
      if ((*(long *)(param_2 + 0x1868) != 0) && (lVar12 = FUN_002c3abc(), lVar12 != 0)) {
        plVar9 = (long *)FUN_002c3abc(*(undefined8 *)(param_2 + 0x1868));
        (**(code **)(*plVar9 + 0x58))();
      }
      if (*(int *)(param_2 + 0x150) == 1) {
        FUN_00221064((int *)(param_2 + 0x150));
      }
    }
    if (lVar8 != 0) {
      local_e8 = 0;
      local_f0 = 0x40000;
      (**(code **)(*(long *)(lVar8 + 8) + 0x20))((long *)(lVar8 + 8),&local_f0);
      FUN_00228380();
      local_f0 = 0;
      FUN_002282f0(&local_f0);
      *(ulong *)(lVar8 + 0x90) = local_f0;
    }
    if (plVar13 != (long *)0x0) {
      local_e8 = 0;
      local_f0 = 0x40000;
      (**(code **)(*plVar13 + 0x10))(plVar13,&local_f0);
      lVar8 = plVar13[0x13];
      if (lVar8 != 0) {
        local_110[0] = 0;
        local_f0 = CONCAT44(local_f0._4_4_,0x644a);
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((long)&local_f0 + 4),(Result *)local_110);
        FUN_002296c4(auStack_60,&local_f0);
        FUN_00220ff8(lVar8,auStack_60);
      }
      (**(code **)*plVar13)(plVar13);
      FUN_00223704(lVar1,plVar13 + -2);
      FUN_002236e0(param_2 + 0x240,param_2 + 0x240,
                   (long)(plVar13 + -2) + (long)*(int *)(param_2 + 0x254));
    }
    *(undefined4 *)(param_2 + 0x17d0) = 0;
    *(undefined2 *)(param_2 + 0x17c8) = 0;
    *(undefined1 *)(param_2 + 0x17ca) = 0;
  }
  piVar2 = (int *)(param_2 + 0x150);
  if (*(int *)(param_2 + 0x150) - 2U < 3) {
    FUN_002296c4(&local_f0,param_2 + 0x154);
    if ((int)local_f0 == 0) {
      if (*piVar2 - 2U < 3) {
        FUN_002296c4(&local_f0,param_2 + 0x154);
        if ((int)local_f0 == 0) {
          if (*(char *)(param_2 + 0x17cb) != '\0') {
            lVar1 = param_2 + 0x17d8;
            sVar4 = FUN_002c8090(param_2,lVar1);
            if (sVar4 != 0) {
              FUN_002b4018(&local_f0,lVar1);
              FUN_0021f4e0(local_110);
              uVar11 = FUN_002b44d4(&local_f0);
              local_f8 = sVar4;
              if ((uVar11 & 1) == 0) {
                uVar10 = FUN_002b4368(&local_f0);
                FUN_0021f54c(local_110,uVar10);
                FUN_002b44e4(&local_f0,local_110);
              }
              else {
                uVar10 = FUN_002b4370(&local_f0);
                FUN_0021f54c(local_110,uVar10);
                FUN_002b44ec(&local_f0,local_110);
              }
              FUN_002c7a50(param_2,&local_f0,4,5);
              FUN_0021f584(local_110);
              FUN_002b4104(&local_f0);
            }
            *(undefined1 *)(param_2 + 0x17cb) = 0;
            if (*(char *)(param_2 + 0x17cc) != '\0') {
              *(undefined1 *)(param_2 + 0x17cc) = 0;
              FUN_002b3fa8(&local_f0);
              FUN_002b415c(lVar1,&local_f0);
              FUN_002b4104(&local_f0);
              FUN_00220f24(piVar2);
              *(undefined8 *)(param_2 + 0x17b8) = 0;
              goto LAB_002c7fc4;
            }
          }
          goto LAB_002c7f7c;
        }
      }
    }
    else {
      lVar1 = param_2 + 0x17d8;
      iVar6 = FUN_002b43fc(lVar1);
      for (lVar8 = *(long *)(param_2 + 0x230); lVar8 != param_2 + 0x228;
          lVar8 = *(long *)(lVar8 + 8)) {
        iVar5 = FUN_002b43fc(lVar8 + 0x18);
        if (iVar5 == iVar6) {
          lVar8 = *(long *)(lVar8 + 0xa8);
          if (lVar8 != 0) {
            local_110[0] = 0;
            local_f0 = CONCAT44(local_f0._4_4_,0x6434);
            nn::err::ErrorResultVariant::ErrorResultVariant
                      ((ErrorResultVariant *)((long)&local_f0 + 4),(Result *)local_110);
            FUN_002296c4(auStack_70,&local_f0);
            FUN_00220ff8(lVar8,auStack_70);
          }
          uVar7 = FUN_002b43fc(lVar1);
          FUN_002c72e0(param_2,uVar7);
          break;
        }
      }
      uVar7 = FUN_002b43fc(lVar1);
      lVar8 = FUN_002ca2c0(param_2 + 0x180,uVar7);
      if (lVar8 != 0) {
        FUN_00228380();
        local_f0 = 0;
        FUN_002282f0(&local_f0);
        *(ulong *)(lVar8 + 0x90) = local_f0;
      }
      FUN_002b3fa8(&local_f0);
      FUN_002b415c(lVar1,&local_f0);
      FUN_002b4104(&local_f0);
LAB_002c7f7c:
      FUN_00220f24(piVar2);
    }
  }
  do {
    uVar11 = FUN_002c8430(param_2);
  } while ((uVar11 & 1) != 0);
  if (*piVar2 != 1) {
    FUN_002c86a0(param_2);
  }
  if (*(long **)(param_2 + 0x1868) != (long *)0x0) {
    (**(code **)(**(long **)(param_2 + 0x1868) + 0x30))();
  }
LAB_002c7fc4:
  local_f0 = local_f0 & 0xffffffff00000000;
  local_110[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((long)&local_f0 + 4),(Result *)local_110);
  FUN_002296c4(param_1,&local_f0);
  return;
}

