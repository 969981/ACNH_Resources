
int FUN_0390c400(uint param_1,ulong param_2,uint param_3,int param_4,int param_5,int param_6,
                int param_7)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined2 local_c0;
  undefined2 local_be;
  undefined2 local_bc;
  undefined2 local_ba;
  undefined1 local_b8;
  undefined1 local_b7;
  undefined2 local_b6;
  undefined8 local_b4;
  long local_ac;
  undefined4 local_a4;
  undefined1 auStack_a0 [128];
  
  if (param_7 != 0) {
    lVar1 = (param_2 & 0xffffffff) * 0x10;
    local_b6 = (undefined2)param_1;
    local_b4 = 0;
    local_ba = (undefined2)(&DAT_041b3598)[param_2 & 0xffffffff];
    local_b8 = 0;
    local_b7 = (undefined1)param_6;
    local_ac = (ulong)CONCAT11((char)*(undefined4 *)(&DAT_041b2888 + lVar1),
                               (char)*(undefined4 *)(&DAT_041b2884 + lVar1)) << 0x30;
    local_c0 = (undefined2)param_3;
    local_be = (undefined2)param_4;
    local_bc = (undefined2)param_5;
    local_a4._0_2_ =
         CONCAT11((char)*(undefined4 *)(&DAT_041b2890 + lVar1),
                  (char)*(undefined4 *)(&DAT_041b288c + lVar1));
    local_a4 = (uint)CONCAT12(param_7 == 1,(undefined2)local_a4);
    FUN_038f8f90(&local_c0,auStack_a0);
    (**(code **)PTR_DAT_04bcf770)(auStack_a0);
    iVar4 = (**(code **)PTR_DAT_04bcf740)(auStack_a0);
    (**(code **)PTR_DAT_04bcf0b0)(auStack_a0);
    if ((*(byte *)(DAT_05ae78f0 + 800) & 1) == 0) {
      return iVar4;
    }
    (**(code **)PTR_DAT_04bcf780)(auStack_a0);
    return iVar4;
  }
  iVar4 = 0;
  uVar5 = (uint)(byte)(&DAT_041b2e5c)[(param_2 & 0xffffffff) * 0x14];
  switch(param_1) {
  case 0:
    iVar4 = uVar5 * param_3;
    goto joined_r0x0390c584;
  case 1:
    iVar4 = param_4 * param_3;
    break;
  case 2:
  case 4:
    iVar4 = param_4 * param_3 * param_5;
    break;
  case 3:
    iVar4 = param_5 * param_3;
    break;
  default:
    goto switchD_0390c528_caseD_5;
  case 8:
    iVar4 = param_4 * param_3;
    goto LAB_0390c574;
  case 9:
    iVar4 = param_4 * param_3 * param_5;
LAB_0390c574:
    iVar4 = iVar4 * uVar5 * 6;
joined_r0x0390c584:
    if (param_6 < 2) {
      return iVar4;
    }
    goto LAB_0390c588;
  }
  iVar4 = iVar4 * uVar5;
switchD_0390c528_caseD_5:
  if (1 < param_6) {
LAB_0390c588:
    if (param_1 < 10) {
      switch(param_1) {
      case 0:
        if (param_6 != 2) {
          uVar6 = param_6 - 1U & 0xfffffffe;
          do {
            uVar2 = (int)param_3 >> 1;
            if ((int)uVar2 < 2) {
              uVar2 = 1;
            }
            param_3 = uVar2 >> 1;
            if (param_3 < 2) {
              param_3 = 1;
            }
            uVar6 = uVar6 - 2;
            iVar4 = iVar4 + uVar2 * uVar5 + param_3 * uVar5;
          } while (uVar6 != 0);
        }
        iVar3 = (int)param_3 >> 1;
        if (iVar3 < 2) {
          iVar3 = 1;
        }
        if ((param_6 - 1U & 1) != 0) {
          iVar4 = iVar4 + iVar3 * uVar5;
        }
        break;
      case 1:
        param_6 = param_6 - param_1;
        do {
          param_3 = (int)param_3 >> 1;
          param_4 = param_4 >> 1;
          if ((int)param_3 < 2) {
            param_3 = 1;
          }
          if (param_4 < 2) {
            param_4 = 1;
          }
          param_6 = param_6 + -1;
          iVar4 = iVar4 + param_3 * uVar5 * param_4;
        } while (param_6 != 0);
        break;
      case 2:
        param_6 = param_6 + -1;
        do {
          param_3 = (int)param_3 >> 1;
          param_4 = param_4 >> 1;
          param_5 = param_5 >> 1;
          if ((int)param_3 < 2) {
            param_3 = 1;
          }
          if (param_4 < 2) {
            param_4 = 1;
          }
          if (param_5 < 2) {
            param_5 = 1;
          }
          param_6 = param_6 + -1;
          iVar4 = iVar4 + param_3 * uVar5 * param_4 * param_5;
        } while (param_6 != 0);
        break;
      case 3:
        param_6 = param_6 + -1;
        do {
          param_3 = (int)param_3 >> 1;
          if ((int)param_3 < 2) {
            param_3 = 1;
          }
          if (param_5 < 2) {
            param_5 = 1;
          }
          param_6 = param_6 + -1;
          iVar4 = iVar4 + param_5 * uVar5 * param_3;
        } while (param_6 != 0);
        break;
      case 4:
        param_6 = param_6 + -1;
        do {
          param_3 = (int)param_3 >> 1;
          param_4 = param_4 >> 1;
          if ((int)param_3 < 2) {
            param_3 = 1;
          }
          if (param_4 < 2) {
            param_4 = 1;
          }
          if (param_5 < 2) {
            param_5 = 1;
          }
          param_6 = param_6 + -1;
          iVar4 = iVar4 + param_3 * uVar5 * param_5 * param_4;
        } while (param_6 != 0);
        break;
      case 8:
        param_6 = param_6 + -1;
        do {
          param_3 = (int)param_3 >> 1;
          param_4 = param_4 >> 1;
          if ((int)param_3 < 2) {
            param_3 = 1;
          }
          if (param_4 < 2) {
            param_4 = 1;
          }
          param_6 = param_6 + -1;
          iVar4 = iVar4 + param_3 * uVar5 * 6 * param_4;
        } while (param_6 != 0);
        break;
      case 9:
        param_6 = param_6 + -1;
        do {
          param_3 = (int)param_3 >> 1;
          param_4 = param_4 >> 1;
          if ((int)param_3 < 2) {
            param_3 = 1;
          }
          if (param_4 < 2) {
            param_4 = 1;
          }
          if (param_5 < 2) {
            param_5 = 1;
          }
          param_6 = param_6 + -1;
          iVar4 = iVar4 + param_3 * uVar5 * 6 * param_5 * param_4;
        } while (param_6 != 0);
      }
    }
  }
  return iVar4;
}

