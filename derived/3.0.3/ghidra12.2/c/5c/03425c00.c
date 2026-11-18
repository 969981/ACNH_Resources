
bool FUN_03425c00(short *param_1,undefined4 param_2)

{
  undefined8 local_8;
  
  local_8._0_2_ = DAT_05586008;
  switch(param_2) {
  case 0:
    local_8 = 0x11ad;
    break;
  case 1:
    local_8 = 0x11ae;
    break;
  case 2:
    local_8 = 0x11af;
    break;
  case 3:
    local_8 = 0x11b0;
    break;
  default:
    *param_1 = DAT_05586008;
    *(undefined1 *)(param_1 + 1) = DAT_0558600a;
    *(undefined1 *)((long)param_1 + 3) = DAT_0558600b;
    local_8._4_4_ = DAT_0558600c;
    goto LAB_03425c98;
  }
  FUN_0277d4ac(&local_8);
  param_1[1] = local_8._2_2_;
  *param_1 = (short)local_8;
LAB_03425c98:
  *(undefined4 *)(param_1 + 2) = local_8._4_4_;
  return (short)local_8 != -2;
}

