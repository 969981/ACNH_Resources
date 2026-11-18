
void FUN_0361e6d4(long param_1,uint param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = (ulong)(param_2 >> 0xc & 0xf);
  uVar1 = *(ushort *)(param_1 + uVar4 * 2 + 0x1080);
  uVar3 = (ulong)uVar1 & 0xff;
  if ((int)uVar3 != 0) {
    uVar3 = uVar3 | (ulong)(uVar1 >> 8) << 0x20;
    goto LAB_0361e820;
  }
  param_2 = param_2 & 0xffff;
  uVar3 = 3;
  switch(uVar4) {
  case 0:
    if (((param_2 - 0x200 < 0x700) && (*(char *)(param_1 + 0xec0) == '\0')) &&
       (*(long *)(param_1 + 0xf00) != 0)) {
      uVar3 = 1;
    }
    else {
      if ((0xff < param_2) || (*(char *)(param_1 + 0xec0) != '\0')) goto switchD_0361e73c_caseD_1;
      uVar3 = 0;
    }
    break;
  case 1:
  case 2:
  case 3:
switchD_0361e73c_caseD_1:
    uVar3 = 2;
    break;
  case 4:
  case 5:
  case 6:
  case 7:
    break;
  case 8:
  case 9:
    uVar3 = 4;
    break;
  case 10:
  case 0xb:
    uVar3 = 5;
    break;
  case 0xc:
    uVar3 = 6;
    break;
  case 0xd:
    uVar3 = 7;
    break;
  case 0xe:
    uVar3 = 8;
    break;
  default:
    if (param_2 == 0xffff) {
      *(undefined1 *)(param_1 + 0x156) = 0xd;
      *(undefined8 *)(param_1 + 0x158) = 0x30001ffff;
      *(undefined **)(param_1 + 0x160) = PTR_LAB_04bca808;
      *(undefined8 *)(param_1 + 0x168) = 0;
      return;
    }
    if (0x1fe < param_2 >> 7) {
      *(undefined1 *)(param_1 + 0x156) = 0xc;
      *(undefined8 *)(param_1 + 0x158) = 0x3007fff80;
      *(undefined **)(param_1 + 0x160) = PTR_LAB_04bca800;
      *(undefined8 *)(param_1 + 0x168) = 0;
      return;
    }
    if (0xfe < param_2 >> 8) {
      *(undefined1 *)(param_1 + 0x156) = 0xb;
      *(undefined8 *)(param_1 + 0x158) = 0x30080ff00;
      *(undefined **)(param_1 + 0x160) = PTR_LAB_04bca7f8;
      *(undefined8 *)(param_1 + 0x168) = 0;
      return;
    }
    uVar3 = 0x40000000a;
    if (param_2 >> 9 < 0x7f) {
      uVar3 = 0x200000009;
    }
    goto LAB_0361e820;
  }
  uVar3 = uVar3 | (ulong)(byte)PTR_DAT_04bca9f8[param_2 >> 8] << 0x20;
LAB_0361e820:
  *(char *)(param_1 + 0x156) = (char)uVar3;
  lVar5 = (uVar3 & 0xff) * 2;
  uVar2 = *(undefined2 *)(&DAT_04194fd6 + lVar5);
  *(undefined2 *)(param_1 + 0x158) = *(undefined2 *)(&DAT_04194fba + lVar5);
  *(int *)(param_1 + 0x15c) = (int)(uVar3 >> 0x20);
  *(undefined2 *)(param_1 + 0x15a) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x0361e870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_0361e874 + (ulong)(byte)(&DAT_04194e2e)[uVar3 & 0xff] * 4))(PTR_LAB_04bca7a0);
  return;
}

