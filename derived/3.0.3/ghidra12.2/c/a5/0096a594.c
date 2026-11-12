
void FUN_0096a594(float param_1,long param_2,byte param_3,byte *param_4,undefined8 *param_5,
                 float *param_6)

{
  float fVar1;
  byte bVar2;
  
  if ((param_3 & 0xf7) == 7) {
    return;
  }
  if ((param_3 == 9) || (param_3 == 0x31)) {
    bVar2 = 9;
    goto LAB_0096a67c;
  }
  bVar2 = 8;
  switch(param_3) {
  case 10:
  case 0x2f:
    break;
  case 0xb:
  case 0xc:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
switchD_0096a614_caseD_b:
    bVar2 = param_3;
    if (*(char *)(param_2 + 0x120) != '\0' && param_3 == 0) {
      bVar2 = 0x44;
    }
    break;
  case 0xd:
    if (DAT_05292338 == 0) goto switchD_0096a614_caseD_b;
    bVar2 = FUN_017f1f38(DAT_05292338 + 0xda0);
    break;
  case 0xe:
    bVar2 = FUN_017f21e0(DAT_05292338 + 0xda0);
    break;
  default:
    if (param_3 != 0x40) goto switchD_0096a614_caseD_b;
    bVar2 = 5;
  }
LAB_0096a67c:
  *param_4 = bVar2;
  fVar1 = *(float *)(param_5 + 1);
  *(undefined8 *)param_6 = *param_5;
  param_6[2] = fVar1;
  *param_6 = *param_6 + param_1;
  param_6[1] = param_6[1] + param_1;
  param_6[2] = param_6[2] + param_1;
  return;
}

