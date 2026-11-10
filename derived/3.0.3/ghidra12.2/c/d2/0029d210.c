
void FUN_0029d210(undefined8 param_1,long param_2,int param_3,long param_4)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  Result *pRVar7;
  int *piVar8;
  code *pcVar9;
  int local_4a8;
  ErrorResultVariant aEStack_4a4 [12];
  int local_498;
  ErrorResultVariant aEStack_494 [1068];
  int local_68;
  ErrorResultVariant aEStack_64 [12];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_44;
  
  uVar6 = DAT_04c603c8;
  local_68 = 0;
  local_498 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_64,(Result *)&local_498);
  if ((*(long *)(param_2 + 0x30) == 0) || (uVar2 = FUN_002212e4(), (uVar2 & 1) == 0)) {
    if ((*(long *)(param_2 + 0x20) != 0) && (uVar2 = FUN_002212e4(), (uVar2 & 1) != 0)) {
      plVar3 = *(long **)(param_2 + 0x20);
      pcVar9 = *(code **)(*plVar3 + 0x40);
      goto LAB_0029d294;
    }
    if ((*(long *)(param_2 + 0x38) != 0) && (uVar2 = FUN_002212e4(), (uVar2 & 1) != 0)) {
LAB_0029d3b8:
      local_498 = 0x2c18;
      goto LAB_0029d3c0;
    }
    FUN_0026c858(uVar6);
    uVar2 = FUN_002212e4();
    if (((uVar2 & 1) != 0) ||
       ((((*(int *)(param_2 + 0xd4) != 3 && (uVar2 = FUN_0026b3b4(uVar6), (uVar2 & 1) != 0)) ||
         (*(int *)(param_2 + 0xd8) != 1)) ||
        ((*(int *)(param_2 + (ulong)*(byte *)(param_2 + 0x162) * 4 + 0x180) != param_3 &&
         (*(int *)(param_2 + (ulong)(*(byte *)(param_2 + 0x162) == 0) * 4 + 0x180) != param_3))))))
    goto LAB_0029d3b8;
    uVar4 = FUN_0026c89c(uVar6);
    FUN_002610a0(&local_498,uVar4,&local_58,param_4);
    FUN_00229780(&local_68,&local_498);
    if (local_68 != 0) {
      FUN_00232ac4(&local_498);
      uVar4 = FUN_0026c8a4(uVar6);
      FUN_002627b0(&local_4a8,uVar4,param_4,&local_498);
      FUN_00229780(&local_68,&local_4a8);
      if (local_68 == 0) {
        local_4a8 = 0x2c18;
LAB_0029d404:
        local_44 = 0;
        nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4a4,(Result *)&local_44);
        piVar8 = &local_4a8;
        goto LAB_0029d3d8;
      }
      lVar5 = FUN_0026c850(uVar6);
      if (*(char *)(lVar5 + 0x84) == '\0') {
        if (*(int *)(param_2 + (ulong)*(byte *)(param_2 + 0x162) * 4 + 0x180) == param_3) {
          lVar5 = *(long *)(param_2 + 0x70);
          if ((lVar5 == 0) || (*(int *)(lVar5 + 0x90) == 0)) {
            FUN_0029d938(param_2);
            local_4a8 = 0;
            goto LAB_0029d404;
          }
          local_44 = 0;
          local_4a8 = 0x6c59;
          nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4a4,(Result *)&local_44);
          *(undefined1 *)(lVar5 + 0xfb) = 1;
          FUN_00229780(lVar5 + 0x100,&local_4a8);
        }
      }
      else {
        lVar5 = FUN_0026c850(uVar6);
        if (*(char *)(lVar5 + 0xb2) != '\0') {
          plVar3 = (long *)FUN_0026c850(uVar6);
          (**(code **)(*plVar3 + 0x48))(plVar3,param_4);
        }
      }
    }
    if (*(int *)(param_2 + (ulong)*(byte *)(param_2 + 0x162) * 4 + 0x180) == param_3) {
      iVar1 = *(int *)(param_2 + 0xd4);
      if (iVar1 == 2) {
        uVar2 = FUN_0029b264(param_2);
        lVar5 = *(long *)(param_2 + 0xf8);
        if ((uVar2 & 1) == 0) {
          if ((lVar5 != param_4) && (lVar5 == *(long *)(param_2 + 0xf0))) goto LAB_0029d87c;
        }
        else {
LAB_0029d79c:
          FUN_0029c5b4(param_2,2,lVar5);
LAB_0029d7a8:
          if (*(char *)(param_2 + 0x15d) != '\0') {
            *(undefined1 *)(param_2 + 0x15d) = 0;
            FUN_00292340(*(undefined8 *)(param_2 + 0xb8));
            FUN_002920d0(*(undefined8 *)(param_2 + 0xb8));
          }
        }
      }
      else if (iVar1 == 3) {
        if ((*(long *)(param_2 + 0x70) != 0) && (uVar2 = FUN_002212e4(), (uVar2 & 1) != 0)) {
          lVar5 = *(long *)(param_2 + 0x70);
          if ((*(long *)(param_2 + 0xf8) != param_4) &&
             (*(long *)(param_2 + 0xf0) == *(long *)(param_2 + 0xf8))) goto LAB_0029d824;
          if (*(int *)(lVar5 + 0x90) == 9) {
            uVar2 = FUN_00292560(*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(param_2 + 0x100),
                                 &local_4a8);
            if ((uVar2 & 1) == 0) {
              local_4a8 = 0;
            }
            if (local_4a8 != param_3) {
              uVar6 = FUN_0026c89c(uVar6);
              FUN_002610a0(&local_498,uVar6,&local_58,*(undefined8 *)(param_2 + 0xf8));
              FUN_00229780(&local_68,&local_498);
              if ((local_68 != 0) ||
                 (uVar2 = FUN_00291da0(*(undefined8 *)(param_2 + 0xb8),
                                       *(undefined8 *)(param_2 + 0xf8)), (uVar2 & 1) == 0)) {
                if (*(long *)(param_2 + 0xf0) == param_4) {
                  plVar3 = *(long **)(param_2 + (ulong)*(byte *)(param_2 + 0x162) * 8 + 0x168);
                  (**(code **)(*plVar3 + 0xd8))(&local_498,plVar3,param_3);
                  FUN_00229780(&local_68,&local_498);
                }
                (**(code **)(**(long **)(param_2 + 0x70) + 0xa0))
                          (*(long **)(param_2 + 0x70),param_4);
              }
            }
          }
          goto LAB_0029d854;
        }
      }
      else if (iVar1 == 4) {
        if (*(int *)(param_2 + 0x1e0) == param_3) {
          uVar2 = FUN_0029b71c(param_2);
          if ((uVar2 & 1) == 0) {
            uVar2 = FUN_0029b264(param_2);
            if ((uVar2 & 1) == 0) goto LAB_0029d890;
          }
          else {
            if (*(code **)(param_2 + 0xa0) != (code *)0x0) {
              uVar6 = 0;
              if (*(long *)(param_2 + 0x70) != 0) {
                uVar6 = *(undefined8 *)(param_2 + 0x100);
              }
              (**(code **)(param_2 + 0xa0))(4,uVar6,*(undefined8 *)(param_2 + 0xa8));
            }
            uVar2 = FUN_0029b264(param_2);
            if ((uVar2 & 1) == 0) goto LAB_0029d7a8;
          }
          lVar5 = *(long *)(param_2 + 0xf8);
          goto LAB_0029d79c;
        }
        if (*(long *)(param_2 + 0xf8) == param_4) goto LAB_0029d87c;
        uVar4 = FUN_0026c89c(uVar6);
        FUN_002610a0(&local_498,uVar4,&local_58,*(undefined8 *)(param_2 + 0xf8));
        FUN_00229780(&local_68,&local_498);
        if (local_68 == 0) {
          if (*(long *)(param_2 + 0xf0) == *(long *)(param_2 + 0xf8)) goto LAB_0029d87c;
        }
        else {
          lVar5 = FUN_0026c850(uVar6);
          if ((*(char *)(lVar5 + 0x84) == '\0') ||
             ((lVar5 = FUN_0026c850(uVar6), *(char *)(lVar5 + 0x84) != '\0' &&
              (lVar5 = FUN_0026c850(uVar6), *(char *)(lVar5 + 0xc0) != '\0')))) {
            *(long *)(param_2 + 0xf8) = param_4;
            if (*(long *)(param_2 + 0xf0) == param_4) {
              plVar3 = *(long **)(param_2 + (ulong)*(byte *)(param_2 + 0x162) * 8 + 0x168);
              (**(code **)(*plVar3 + 0xd8))(&local_498,plVar3,param_3);
              FUN_00229780(&local_68,&local_498);
              param_4 = *(long *)(param_2 + 0xf8);
            }
            FUN_0029c5b4(param_2,2,param_4);
          }
        }
      }
    }
    else if (*(int *)(param_2 + (ulong)(*(byte *)(param_2 + 0x162) == 0) * 4 + 0x180) == param_3) {
      if (*(int *)(param_2 + 0xd4) == 3) {
        if ((*(long *)(param_2 + 0x100) != param_4) &&
           (*(long *)(param_2 + 0x100) == *(long *)(param_2 + 0xf0))) {
          lVar5 = *(long *)(param_2 + 0x70);
          if (lVar5 == 0) {
LAB_0029d87c:
            FUN_0029d938(param_2);
            goto LAB_0029d890;
          }
          if (*(int *)(lVar5 + 0x90) - 9U < 2) {
            uVar6 = FUN_0026c89c(uVar6);
            FUN_002610a0(&local_498,uVar6,&local_58,param_4);
            FUN_00229780(&local_68,&local_498);
            if (local_68 == 0) {
              local_498 = 0;
              FUN_00292560(*(undefined8 *)(param_2 + 0xb8),CONCAT44(uStack_54,local_58),&local_498);
              if (local_498 == *(int *)(param_2 + (ulong)*(byte *)(param_2 + 0x162) * 4 + 0x180)) {
                lVar5 = *(long *)(param_2 + 0x70);
                goto LAB_0029d824;
              }
            }
          }
          else {
            if (*(int *)(lVar5 + 0x90) == 0) goto LAB_0029d87c;
LAB_0029d824:
            local_4a8 = 0;
            local_498 = 0x6c59;
            nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_494,(Result *)&local_4a8);
            *(undefined1 *)(lVar5 + 0xfb) = 1;
            FUN_00229780(lVar5 + 0x100,&local_498);
          }
        }
LAB_0029d854:
        (**(code **)(**(long **)(param_2 + 0x70) + 0xa8))
                  (*(long **)(param_2 + 0x70),param_3,param_4);
      }
      else if (*(int *)(param_2 + 0xd4) == 4) {
        if (*(long *)(param_2 + 0x100) == param_4) {
          uVar6 = FUN_0026c89c(uVar6);
          FUN_002610a0(&local_498,uVar6,&local_58,param_4);
          FUN_00229780(&local_68,&local_498);
          if (local_68 != 0) goto LAB_0029d890;
          local_498 = 0;
          uVar2 = FUN_00292560(*(undefined8 *)(param_2 + 0xb8),CONCAT44(uStack_54,local_58),
                               &local_498);
          iVar1 = local_498;
          if ((uVar2 & 1) == 0) {
            iVar1 = 0;
          }
          *(int *)(param_2 + 0x1e0) = iVar1;
        }
        else if (*(long *)(param_2 + 0x100) == *(long *)(param_2 + 0xf0)) {
          lVar5 = *(long *)(param_2 + 0x70);
          if ((lVar5 == 0) || (*(int *)(lVar5 + 0x90) == 0)) goto LAB_0029d87c;
          local_4a8 = 0;
          local_498 = 0x6c59;
          nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_494,(Result *)&local_4a8);
          *(undefined1 *)(lVar5 + 0xfb) = 1;
          FUN_00229780(lVar5 + 0x100,&local_498);
        }
        uVar2 = FUN_0029b71c(param_2);
        if ((uVar2 & 1) != 0) {
          if (*(code **)(param_2 + 0xa0) != (code *)0x0) {
            uVar6 = 0;
            if (*(long *)(param_2 + 0x70) != 0) {
              uVar6 = *(undefined8 *)(param_2 + 0x100);
            }
            (**(code **)(param_2 + 0xa0))(4,uVar6,*(undefined8 *)(param_2 + 0xa8));
          }
          goto LAB_0029d7a8;
        }
      }
    }
LAB_0029d890:
    local_498 = 0;
    pRVar7 = (Result *)&local_4a8;
    local_4a8 = 0;
  }
  else {
    plVar3 = *(long **)(param_2 + 0x30);
    pcVar9 = *(code **)(*plVar3 + 0x30);
LAB_0029d294:
    (*pcVar9)(plVar3,param_3,param_4);
    local_498 = 0;
LAB_0029d3c0:
    local_58 = 0;
    pRVar7 = (Result *)&local_58;
  }
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_494,pRVar7);
  piVar8 = &local_498;
LAB_0029d3d8:
  FUN_002296c4(param_1,piVar8);
  return;
}

