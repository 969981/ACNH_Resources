
void FUN_003aed6c(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,int param_8,
                 undefined4 param_9)

{
  undefined4 uVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  uVar1 = FUN_003ad9c8(param_8);
  UNRECOVERED_JUMPTABLE = (code *)PTR_LAB_04bd0a28;
  if (param_8 < 0xb03) {
    if (param_8 < 0x903) {
      if (param_8 < 0x203) {
        if (param_8 == 0x201) goto LAB_003aef34;
        if (param_8 != 0x202) goto LAB_003aef70;
      }
      else {
        if ((param_8 == 0x203) || (param_8 == 0x901)) goto LAB_003aef34;
        if (param_8 != 0x902) goto LAB_003aef70;
      }
code_r0x003aeed4:
      UNRECOVERED_JUMPTABLE = (code *)&LAB_003b0370;
      goto LAB_003aef34;
    }
    if (param_8 < 0xa05) {
      if (param_8 == 0x903) goto LAB_003aef34;
      if (param_8 != 0xa01) goto LAB_003aef70;
code_r0x003aef0c:
      UNRECOVERED_JUMPTABLE = (code *)&LAB_003b0440;
      goto LAB_003aef34;
    }
    if (param_8 != 0xa05) {
      if (param_8 == 0xb01) goto LAB_003aef34;
      if (param_8 != 0xb02) goto LAB_003aef70;
      goto code_r0x003aeed4;
    }
  }
  else {
    if (0x1404 < param_8) {
      if (param_8 < 0x1705) {
        if (param_8 != 0x1405) {
          if (param_8 == 0x1501) goto code_r0x003aef0c;
          iVar2 = 0x1505;
          goto LAB_003aee54;
        }
      }
      else if (param_8 != 0x1705) {
        if (param_8 == 0x1805) {
          UNRECOVERED_JUMPTABLE = (code *)&LAB_003b0910;
        }
        else {
          if (param_8 != 0x1905) goto LAB_003aef70;
          UNRECOVERED_JUMPTABLE = (code *)&LAB_003b0960;
        }
        goto LAB_003aef34;
      }
      UNRECOVERED_JUMPTABLE = (code *)&LAB_003b0840;
      goto LAB_003aef34;
    }
    if (param_8 < 0x1201) {
      if (param_8 != 0xb03) {
        if (param_8 != 0xe02) goto LAB_003aef70;
        UNRECOVERED_JUMPTABLE = (code *)&LAB_003b09c0;
      }
      goto LAB_003aef34;
    }
    if (param_8 == 0x1201) goto code_r0x003aef0c;
    if (param_8 == 0x1202) {
      UNRECOVERED_JUMPTABLE = (code *)&LAB_003b0520;
      goto LAB_003aef34;
    }
    iVar2 = 0x1205;
LAB_003aee54:
    if (param_8 != iVar2) {
LAB_003aef70:
                    /* WARNING: Subroutine does not return */
      nn::detail::UnexpectedDefaultImpl();
    }
  }
  UNRECOVERED_JUMPTABLE = (code *)&LAB_003b0600;
LAB_003aef34:
                    /* WARNING: Could not recover jumptable at 0x003aef6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,uVar1,param_9);
  return;
}

