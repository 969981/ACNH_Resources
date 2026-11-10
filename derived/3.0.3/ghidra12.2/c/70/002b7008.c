
void FUN_002b7008(undefined8 param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  int local_50;
  ErrorResultVariant aEStack_4c [12];
  int local_40;
  ErrorResultVariant aEStack_3c [12];
  undefined4 local_24;
  
  piVar4 = &local_50;
  plVar1 = (long *)FUN_002aaa54();
  if (plVar1 == (long *)0x0) {
    local_50 = 0;
    local_40 = 0x10c08;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_50);
    piVar4 = &local_40;
    goto LAB_002b70dc;
  }
  (**(code **)(*plVar1 + 0x88))(&local_40,plVar1,param_3);
  if (local_40 != 0) {
LAB_002b7048:
    piVar4 = &local_40;
    goto LAB_002b70dc;
  }
  if ((*(long *)(param_2 + 0x70) == 0) || (lVar2 = FUN_002aaa28(param_2), lVar2 == 0)) {
LAB_002b70b8:
    local_50 = 0x10c08;
  }
  else {
    uVar3 = FUN_002aed20(*(undefined8 *)(param_2 + 0x70));
    if ((uVar3 & 1) == 0) {
      local_50 = 0x2c27;
    }
    else {
      if ((*(uint *)(param_2 + 0x78) < 0xb) &&
         ((1 << (ulong)(*(uint *)(param_2 + 0x78) & 0x1f) & 0x736U) != 0)) goto LAB_002b70b8;
      uVar3 = FUN_002aee28(*(undefined8 *)(param_2 + 0x70),param_3);
      if ((uVar3 & 1) == 0) {
        local_50 = 0x10c07;
      }
      else {
        if ((((((((*(char *)(param_2 + 0x94) != -1) || (*(char *)(param_2 + 0x95) != -1)) ||
                (*(char *)(param_2 + 0x96) != -1)) ||
               (((*(char *)(param_2 + 0x97) != -1 || (*(char *)(param_2 + 0x98) != -1)) ||
                ((*(char *)(param_2 + 0x99) != -1 ||
                 ((*(char *)(param_2 + 0x9a) != -1 || (*(char *)(param_2 + 0x9b) != -1)))))))) ||
              (*(char *)(param_2 + 0x9c) != -1)) ||
             ((((((*(char *)(param_2 + 0x9d) != -1 || (*(char *)(param_2 + 0x9e) != -1)) ||
                 (*(char *)(param_2 + 0x9f) != -1)) ||
                ((*(char *)(param_2 + 0xa0) != -1 || (*(char *)(param_2 + 0xa1) != -1)))) ||
               (*(char *)(param_2 + 0xa2) != -1)) ||
              (((*(char *)(param_2 + 0xa3) != -1 || (*(char *)(param_2 + 0xa4) != -1)) ||
               (((*(char *)(param_2 + 0xa5) != -1 ||
                 (((*(char *)(param_2 + 0xa6) != -1 || (*(char *)(param_2 + 0xa7) != -1)) ||
                  (*(char *)(param_2 + 0xa8) != -1)))) ||
                (((*(char *)(param_2 + 0xa9) != -1 || (*(char *)(param_2 + 0xaa) != -1)) ||
                 (*(char *)(param_2 + 0xab) != -1)))))))))) ||
            (((*(char *)(param_2 + 0xac) != -1 || (*(char *)(param_2 + 0xad) != -1)) ||
             ((*(char *)(param_2 + 0xae) != -1 ||
              (((*(char *)(param_2 + 0xaf) != -1 || (*(char *)(param_2 + 0xb0) != -1)) ||
               (*(char *)(param_2 + 0xb1) != -1)))))))) ||
           ((*(char *)(param_2 + 0xb2) != -1 || (*(char *)(param_2 + 0xb3) != -1))))
        goto LAB_002b70b8;
        FUN_002a5134(&local_50,param_2,param_3,0xb);
        FUN_00229780(&local_40,&local_50);
        if (local_40 != 0) goto LAB_002b7048;
        local_50 = 0;
      }
    }
  }
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4c,(Result *)&local_24);
LAB_002b70dc:
  FUN_002296c4(param_1,piVar4);
  return;
}

