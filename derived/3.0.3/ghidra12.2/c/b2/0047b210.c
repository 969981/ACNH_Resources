
undefined8 FUN_0047b210(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long local_e8;
  long lStack_e0;
  long local_d8;
  long lStack_d0;
  ulong local_48;
  long local_40;
  ulong local_38;
  
  plVar2 = (long *)FUN_0047a610();
  FUN_0043bd90(&local_38,*param_2,param_2[1]);
  for (; plVar2 != (long *)0x0;
      plVar2 = (long *)FUN_0047a610(param_1,&local_d8,*(undefined4 *)((long)plVar2 + 0x24))) {
    if (*plVar2 == plVar2[1]) {
LAB_0047b328:
      lVar5 = plVar2[2];
      lVar6 = plVar2[3];
      if (lVar5 == lVar6) break;
    }
    else {
      lVar5 = (long)(int)plVar2[6];
      if (0 < (int)plVar2[6]) {
        lVar6 = lVar5 << 4;
        do {
          lVar5 = lVar5 + -1;
          if ((*(char *)(plVar2[5] + lVar6 + -0x10) == '\a') &&
             (lVar4 = *(long *)(plVar2[5] + lVar6 + -8), lVar4 != 0)) {
            FUN_0047b210(param_1,lVar4,*(undefined4 *)(lVar4 + 0x10));
          }
          lVar6 = lVar6 + -0x10;
        } while (0 < lVar5);
      }
      lVar5 = plVar2[2];
      if (((lVar5 == plVar2[3]) || ((local_38 & 0xfffffffffffffffe) == 0)) ||
         (uVar3 = FUN_0043a700(lVar5,plVar2[3] - lVar5,local_38 & 0xfffffffffffffffe),
         (uVar3 & 1) != 0)) goto LAB_0047b328;
      uVar3 = local_38 & 0xfffffffffffffffe;
      iVar1 = FUN_0043c110(&local_38);
      local_40 = uVar3 + (long)iVar1;
      local_48 = uVar3;
      lVar5 = FUN_00429910(&local_48,0x3c,0);
      if (lVar5 != 0) {
        local_e8 = plVar2[2];
        lStack_e0 = plVar2[3];
        iVar1 = (int)local_40;
        FUN_00422780(&local_d8,&local_e8);
        FUN_00423880(&local_d8,lVar5,iVar1 - (int)lVar5);
        FUN_0043bfc0(&local_38,&local_d8);
        FUN_00422550(&local_d8);
        goto LAB_0047b328;
      }
      FUN_0043bf00(&local_38,plVar2[2],plVar2[3]);
      lVar5 = plVar2[2];
      lVar6 = plVar2[3];
      if (lVar5 == lVar6) break;
    }
    local_d8 = lVar5;
    lStack_d0 = lVar6;
  }
  FUN_0043be10(&local_38);
  return 0;
}

